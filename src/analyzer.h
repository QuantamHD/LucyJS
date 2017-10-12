#ifndef LUCYJS_ANALYZER_H
#define LUCYJS_ANALYZER_H

#include "Lucy/Analysis/Analyzer.h"
#include <nan.h>

class AnalyzerJS : public Nan::ObjectWrap {
public:
  static Nan::Persistent<v8::FunctionTemplate> function_template;
  static NAN_MODULE_INIT(Init);
  void set_analyzer(lucy_Analyzer *analyzer);
  lucy_Analyzer* get_analyzer();

private:
  explicit AnalyzerJS() {}
  virtual ~AnalyzerJS() {
    CFISH_DECREF(analyzer);
  }

  static NAN_METHOD(New);
  static Nan::Persistent<v8::Function> constructor;

  lucy_Analyzer *analyzer;
};

#endif