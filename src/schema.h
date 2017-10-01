#ifndef SCHEMA2_JS_H
#define SCHEMA2_JS_H

#include <nan.h>

#include "Lucy/Plan/Schema.h"
#include "Clownfish/Vector.h"
#include "Clownfish/String.h"

class SchemaJS : public Nan::ObjectWrap{
public:
  static NAN_MODULE_INIT(Init);
  static v8::Local<v8::Object> NewObject(lucy_Schema* schema);

private:
  explicit SchemaJS(){}
  virtual ~SchemaJS(){
    CFISH_DECREF(schema);
  }
  
  static NAN_GETTER(Num_Fields);
  static NAN_GETTER(All_Fields);
  static NAN_METHOD(New);
  static NAN_METHOD(Num_Fields);
  static Nan::Persistent<v8::Function> constructor;

  lucy_Schema *schema;
};
#endif