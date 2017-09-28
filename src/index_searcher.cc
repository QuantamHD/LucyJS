#include "index_searcher.h"
#include "hits.h"
#include "macros.h"
#include <vector>

Nan::Persistent<v8::Function> IndexSearcherJS::constructor;

IndexSearcherJS::IndexSearcherJS(const char *index_path){
  cfish_String *folder = cfish_Str_newf("%s", index_path);
  index_searcher = lucy_IxSearcher_new((cfish_Obj*)folder);
  CFISH_DECREF(folder);
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

void IndexSearcherJS::New(const Nan::FunctionCallbackInfo<v8::Value>& info) {
  if (!info.IsConstructCall()) {
    return Nan::ThrowTypeError("Use the new operator to an IndexSearcher Object.");
  }

  REQUIRE_ARGUMENT_STRING(0, filename);

  IndexSearcherJS* obj = new IndexSearcherJS(*filename);
  obj->Wrap(info.This());
  info.GetReturnValue().Set(info.This());
  
}