#ifndef LUCYJS_EASY_ANALYZER_H
#define LUCYJS_EASY_ANALYZER_H

#include <nan.h>

#include "Clownfish/String.h"
#include "Lucy/Analysis/EasyAnalyzer.h"

class EasyAnalyzerJS : public Nan::ObjectWrap {
public:
  static NAN_MODULE_INIT(Init);
private:
  explicit EasyAnalyzerJS(cfish_String *language);
  virtual ~EasyAnalyzerJS();

  static NAN_METHOD(New);
  static Nan::Persistent<v8::Function> constructor;
  
  lucy_EasyAnalyzer *easy_analyzer;
  cfish_String *language;
};
#endif