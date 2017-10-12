#include "index_searcher.h"
#include <vector>

Nan::Persistent<v8::Function> IndexSearcherJS::constructor;

IndexSearcherJS::IndexSearcherJS(){
}

IndexSearcherJS::~IndexSearcherJS() {
  CFISH_DECREF(index_searcher);
}

void IndexSearcherJS::Init(v8::Local<v8::Object> exports) {
  Nan::HandleScope scope;

  // Prepare constructor template
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("IndexSearcher").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  Nan::SetPrototypeMethod(tpl, "hits", Get_Hits);
  Nan::SetPrototypeMethod(tpl, "get_schema", Get_Schema);
  
  constructor.Reset(tpl->GetFunction());
  exports->Set(Nan::New("IndexSearcher").ToLocalChecked(), tpl->GetFunction());
}

void IndexSearcherJS::Get_Hits(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  auto index_searcher = ObjectWrap::Unwrap<IndexSearcherJS>(info.Holder())->index_searcher;
  REQUIRE_ARGUMENT_STRING(0, query_string_std);
  OPTIONAL_ARGUMENT_INTEGER(1, start_index, 0);
  OPTIONAL_ARGUMENT_INTEGER(2, offset, 10);

  cfish_String *cfish_query_string = cfish_Str_newf(*query_string_std);
  lucy_Hits *hits = LUCY_IxSearcher_Hits(index_searcher, (cfish_Obj*)cfish_query_string, start_index, offset, NULL);

  info.GetReturnValue().Set(HitsJS::NewObject(hits));
  CFISH_DECREF(cfish_query_string);  
}

NAN_METHOD(IndexSearcherJS::Get_Schema) {
  auto index_searcher = ObjectWrap::Unwrap<IndexSearcherJS>(info.Holder())->index_searcher;
  lucy_Schema *schema = LUCY_IxSearcher_Get_Schema(index_searcher);

  info.GetReturnValue().Set(SchemaJS::NewObject(schema));
}


/** This is a wrapper around creating a lucy_IndexSearch.
 * The behavior of creating an index is dangerous because it may not exist.
 * so we must wrap this behavior in clownfish error handing.
 */
void IndexSearcherJS::Initialize_Lucy_IndexSearcher(void* context){
  IndexSearcherJS *uninitialized_searcher = (IndexSearcherJS*) context;

  cfish_String *folder = cfish_Str_newf("%s", uninitialized_searcher->index_path);
  lucy_IndexSearcher *index_searcher_unverified = lucy_IxSearcher_new((cfish_Obj*)folder);
  CFISH_DECREF(folder);

  uninitialized_searcher->index_searcher = index_searcher_unverified;
}

void IndexSearcherJS::New(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  if (!info.IsConstructCall()) {
    return Nan::ThrowTypeError("Use the new operator to an IndexSearcher Object.");
  }

  REQUIRE_ARGUMENT_STRING(0, filename);

  IndexSearcherJS* index_searcher_js = new IndexSearcherJS();
  index_searcher_js->index_path = *filename;

  cfish_Err* err = cfish_Err_trap(
    Initialize_Lucy_IndexSearcher, 
    (void*)(index_searcher_js)
  );

  if (err != NULL) {
    Nan::ThrowError("The supplied path is either not a lucy index, or is not a valid path.");
    return;
  }

  index_searcher_js->Wrap(info.This());
  info.GetReturnValue().Set(info.This()); 
}


