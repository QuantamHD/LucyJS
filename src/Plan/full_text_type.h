#ifndef LUCYJS_FULL_TEXT_TYPE_H
#define LUCYJS_FULL_TEXT_TYPE_H

#include <nan.h>

#include "Clownfish/String.h"
#include "Lucy/Plan/FullTextType.h"
#include "field_type.h"
#include "../Analysis/analyzer.h"


class FullTextTypeJS : public Nan::ObjectWrap {
public:
  static Nan::Persistent<v8::FunctionTemplate> function_template;
  static NAN_MODULE_INIT(Init);

private:
  explicit FullTextTypeJS() {}
  virtual ~FullTextTypeJS() {}

  static NAN_METHOD(New);
  static Nan::Persistent<v8::Function> constructor;  
};
#endif