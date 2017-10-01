#include "schema.h"
#include "macros.h"

Nan::Persistent<v8::Function> SchemaJS::constructor;

NAN_MODULE_INIT(SchemaJS::Init) {
  Nan::HandleScope scope;

  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Schema").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  v8::Isolate* isolate = v8::Isolate::GetCurrent();

  Nan::SetAccessor(tpl->InstanceTemplate(), v8::String::NewFromUtf8(isolate, "num_fields"), Num_Fields);
  Nan::SetAccessor(tpl->InstanceTemplate(), v8::String::NewFromUtf8(isolate, "all_fields"), All_Fields);

  constructor.Reset(tpl->GetFunction());
  target->Set(Nan::New("Schema").ToLocalChecked(), tpl->GetFunction());  
}

NAN_GETTER(SchemaJS::Num_Fields) {
  SchemaJS *schema = ObjectWrap::Unwrap<SchemaJS>(info.Holder());
  info.GetReturnValue().Set(Nan::New(LUCY_Schema_Num_Fields(schema->schema)));
}

NAN_GETTER(SchemaJS::All_Fields) {
  lucy_Schema *schema = ObjectWrap::Unwrap<SchemaJS>(info.Holder())->schema;
  cfish_Vector *fields = LUCY_Schema_All_Fields(schema);

  size_t field_count = CFISH_Vec_Get_Size(fields);
  v8::Local<v8::Array> v8_fields = Nan::New<v8::Array>(field_count);

  for(size_t i = 0; i < field_count; i++){
    cfish_String *cfish_field_name = (cfish_String*)CFISH_Vec_Fetch(fields, i);
    char* field_name = CFISH_Str_To_Utf8(cfish_field_name);

    Nan::Set(v8_fields, i, Nan::New(field_name).ToLocalChecked());

    CFISH_DECREF(cfish_field_name);
    free(field_name);
  }
  info.GetReturnValue().Set(v8_fields);
}

NAN_METHOD(SchemaJS::New) {
  SchemaJS *schema = new SchemaJS();
  schema->Wrap(info.This());
  info.GetReturnValue().Set(info.This());
}

v8::Local<v8::Object> SchemaJS::NewObject(lucy_Schema *schema){
  Nan::EscapableHandleScope scope;
  v8::Local<v8::Object> instance = Nan::NewInstance(Nan::New<v8::Function>(constructor)).ToLocalChecked();

  ObjectWrap::Unwrap<SchemaJS>(instance)->schema = schema;
  return scope.Escape(instance);
}