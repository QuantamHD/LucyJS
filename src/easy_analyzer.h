#ifndef LUCYJS_EASY_ANALYZER_H
#define LUCYJS_EASY_ANALYZER_H

#include <nan.h>

#include "analyzer.h"
#include "Clownfish/String.h"
#include "Lucy/Analysis/EasyAnalyzer.h"

class EasyAnalyzerJS : public Nan::ObjectWrap {
public:
  static Nan::Persistent<v8::FunctionTemplate> function_template;
  static NAN_MODULE_INIT(Init);

private:
  explicit EasyAnalyzerJS();
  virtual ~EasyAnalyzerJS();

  static NAN_METHOD(New);
  static Nan::Persistent<v8::Function> constructor;
};
#endif