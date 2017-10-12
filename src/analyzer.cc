#include "analyzer.h"

Nan::Persistent<v8::Function> AnalyzerJS::constructor;
Nan::Persistent<v8::FunctionTemplate> AnalyzerJS::function_template;

NAN_MODULE_INIT(AnalyzerJS::Init) {
  Nan::HandleScope scope;

  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("Analyzer").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);
  
  function_template.Reset(tpl);
  constructor.Reset(tpl->GetFunction());
  target->Set(Nan::New("Analyzer").ToLocalChecked(), tpl->GetFunction());  
}

NAN_METHOD(AnalyzerJS::New) {
  AnalyzerJS *analyzer_js = new AnalyzerJS();
  analyzer_js->Wrap(info.This());
  info.GetReturnValue().Set(info.This());
}

void AnalyzerJS::set_analyzer(lucy_Analyzer *analyzer) {
  this->analyzer = analyzer;
}

lucy_Analyzer* AnalyzerJS::get_analyzer(){
  return this->analyzer;
}