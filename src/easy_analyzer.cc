#include "easy_analyzer.h"
#include "macros.h"

Nan::Persistent<v8::FunctionTemplate> EasyAnalyzerJS::function_template;
Nan::Persistent<v8::Function> EasyAnalyzerJS::constructor;

EasyAnalyzerJS::EasyAnalyzerJS() {
}

EasyAnalyzerJS::~EasyAnalyzerJS() {
}

NAN_MODULE_INIT(EasyAnalyzerJS::Init) {
  Nan::HandleScope scope;
  
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);

  v8::Local<v8::FunctionTemplate> analyzer_function_template = Nan::New(AnalyzerJS::function_template);
  tpl->Inherit(analyzer_function_template);
  tpl->SetClassName(Nan::New("EasyAnalyzer").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  function_template.Reset(tpl);
  constructor.Reset(tpl->GetFunction());
  target->Set(Nan::New("EasyAnalyzer").ToLocalChecked(), tpl->GetFunction());  
}

NAN_METHOD(EasyAnalyzerJS::New) {
  if (info.IsConstructCall()) {
    REQUIRE_ARGUMENT_STRING(0, language);
    EasyAnalyzerJS* easy_analyzer_js = new EasyAnalyzerJS();
    easy_analyzer_js->Wrap(info.This());
    
    AnalyzerJS* analyzer = ObjectWrap::Unwrap<AnalyzerJS>(info.This());
    cfish_String *cfish_lang = cfish_Str_newf(*language);
    lucy_EasyAnalyzer *easy_analyzer = lucy_EasyAnalyzer_new(cfish_lang);
    analyzer->set_analyzer((lucy_Analyzer*) easy_analyzer);
    CFISH_DECREF(cfish_lang);

    info.GetReturnValue().Set(info.This());
  } else {
    const int argc = 1;
    v8::Local<v8::Value> argv[argc] = { info[0] };
    v8::Local<v8::Function> cons = Nan::New<v8::Function>(constructor);
    info.GetReturnValue().Set(Nan::NewInstance(cons, argc, argv).ToLocalChecked());
  }
}