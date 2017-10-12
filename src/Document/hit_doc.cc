#include "hit_doc.h"

Nan::Persistent<v8::Function> & HitDocJS::constructor()
{
    static Nan::Persistent<v8::Function> my_constructor;
    return my_constructor;
}


NAN_MODULE_INIT(HitDocJS::Init) {        
    v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
    tpl->SetClassName(Nan::New("HitDoc").ToLocalChecked());
    tpl->InstanceTemplate()->SetInternalFieldCount(1);

    Nan::SetPrototypeMethod(tpl, "getField", Get_Field);

    constructor().Reset(tpl->GetFunction());
}

v8::Local<v8::Object> HitDocJS::NewObject(lucy_HitDoc* new_hit_doc) {        
    Nan::EscapableHandleScope scope;
    v8::Local<v8::Object> instance = Nan::NewInstance(Nan::New<v8::Function>(constructor())).ToLocalChecked();
    
    // Set internal data
    ObjectWrap::Unwrap<HitDocJS>(instance)->hit_doc = new_hit_doc;
    return scope.Escape(instance);
}

NAN_METHOD(HitDocJS::Get_Field) {
  lucy_HitDoc *hit_doc = ObjectWrap::Unwrap<HitDocJS>(info.Holder())->hit_doc;
  REQUIRE_ARGUMENT_STRING(0, field_name);

  cfish_String *field_name_cfish = cfish_Str_newf(*field_name);
  cfish_String *field = (cfish_String*)LUCY_HitDoc_Extract(hit_doc, field_name_cfish);
  char *field_c = CFISH_Str_To_Utf8(field);

  info.GetReturnValue().Set(Nan::New(field_c).ToLocalChecked());
  CFISH_DECREF(field_name_cfish);
  CFISH_DECREF(field);
  free(field_c);
}

NAN_METHOD(HitDocJS::New) {        
    HitDocJS* obj = new HitDocJS();
    obj->Wrap(info.This());
    info.GetReturnValue().Set(info.This());
}

