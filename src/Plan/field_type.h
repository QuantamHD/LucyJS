#ifndef LUCYJS_FIELD_TYPE_H
#define LUCYJS_FIELD_TYPE_H

#include "Lucy/Plan/FieldType.h"
#include <nan.h>

class FieldTypeJS : public Nan::ObjectWrap {
public:
  static Nan::Persistent<v8::FunctionTemplate> function_template;
  static NAN_MODULE_INIT(Init);
  void set_field_type(lucy_FieldType *field_type);
  lucy_FieldType* get_field_type();

private:
  explicit FieldTypeJS() {}
  virtual ~FieldTypeJS() {
    CFISH_DECREF(field_type);
  }

  static NAN_METHOD(New);
  static Nan::Persistent<v8::Function> constructor;

  lucy_FieldType *field_type;
};

#endif