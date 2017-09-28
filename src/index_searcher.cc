#include "index_searcher.h"
#include "macros.h"
#include <vector>

Nan::Persistent<v8::Function> IndexSearcherJS::constructor;

IndexSearcherJS::IndexSearcherJS(const char *index_path){
  String *folder = Str_newf("%s", index_path);
  index_searcher = IxSearcher_new((Obj*)folder);
  DECREF(folder);
}

IndexSearcherJS::~IndexSearcherJS() {
  DECREF(index_searcher);
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
  String *query_string = Str_newf("%s", *query_string_std);
  Hits *hits = IxSearcher_Hits(index_searcher, (Obj*)query_string, 0, 10, NULL);

  
  int i = 0;

  std::vector<v8::Local<v8::Object>> hit_docs_vector;

  HitDoc *hit;
  while (NULL != (hit = Hits_Next(hits))) {
    i++;
    hit_docs_vector.push_back(HitDocJS::NewObject(hit));
  }

  v8::Local<v8::Array> hit_docs = Nan::New<v8::Array>(i);
  for(size_t j = 0; j < hit_docs_vector.size(); j++){
    hit_docs->Set(j, hit_docs_vector[j]);
  }

  info.GetReturnValue().Set(hit_docs);
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