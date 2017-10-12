#include "hits.h"
#include "../Document/hit_doc.h"

Nan::Persistent<v8::Function> HitsJS::constructor;

NAN_MODULE_INIT(HitsJS::Init) {
  Nan::HandleScope scope;
  
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Hits").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  v8::Isolate* isolate = v8::Isolate::GetCurrent();

  Nan::SetAccessor(tpl->InstanceTemplate(), v8::String::NewFromUtf8(isolate, "total_hits"), Total_Hits);    
  Nan::SetPrototypeMethod(tpl, "hits_next", Hits_Next);
  
  constructor.Reset(tpl->GetFunction());
}

NAN_METHOD(HitsJS::New) {
  HitsJS *hits = new HitsJS();
  hits->Wrap(info.This());
  info.GetReturnValue().Set(info.This());
}

v8::Local<v8::Object> HitsJS::NewObject(lucy_Hits *hits){
  Nan::EscapableHandleScope scope;
  v8::Local<v8::Object> instance = Nan::NewInstance(Nan::New<v8::Function>(constructor)).ToLocalChecked();

  ObjectWrap::Unwrap<HitsJS>(instance)->lucy_hits = hits;
  return scope.Escape(instance);
}

NAN_GETTER(HitsJS::Total_Hits) {
  HitsJS *hits = ObjectWrap::Unwrap<HitsJS>(info.Holder());
  info.GetReturnValue().Set(Nan::New(LUCY_Hits_Total_Hits(hits->lucy_hits)));
}

NAN_METHOD(HitsJS::Hits_Next) {
  HitsJS *hits = ObjectWrap::Unwrap<HitsJS>(info.Holder());

  lucy_HitDoc *hit_doc;
  if ((hit_doc = LUCY_Hits_Next(hits->lucy_hits)) == NULL){
    info.GetReturnValue().Set(Nan::Null());
    return;
  }

  info.GetReturnValue().Set(HitDocJS::NewObject(hit_doc));
}