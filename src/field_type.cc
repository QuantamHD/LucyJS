#include "field_type.h"

Nan::Persistent<v8::Function> FieldTypeJS::constructor;
Nan::Persistent<v8::FunctionTemplate> FieldTypeJS::function_template;

NAN_MODULE_INIT(FieldTypeJS::Init) {
  Nan::HandleScope scope;
  
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("FieldType").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);
  
  function_template.Reset(tpl);
  constructor.Reset(tpl->GetFunction());
}

NAN_METHOD(FieldTypeJS::New) {
  FieldTypeJS *field_type_js = new FieldTypeJS();
  field_type_js->Wrap(info.This());
  info.GetReturnValue().Set(info.This());
}

void FieldTypeJS::set_field_type(lucy_FieldType *field_type) {
  this->field_type = field_type;
}

lucy_FieldType* FieldTypeJS::get_field_type() {
  return this->field_type;
}