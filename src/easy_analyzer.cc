#include "easy_analyzer.h"
#include "macros.h"

Nan::Persistent<v8::Function> EasyAnalyzerJS::constructor;

EasyAnalyzerJS::EasyAnalyzerJS(cfish_String *language) {
  this->easy_analyzer = lucy_EasyAnalyzer_new(language);
}

EasyAnalyzerJS::~EasyAnalyzerJS() {
  CFISH_DECREF(this->language);
  CFISH_DECREF(this->easy_analyzer);
}

NAN_MODULE_INIT(EasyAnalyzerJS::Init) {
  Nan::HandleScope scope;
  
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
  tpl->SetClassName(Nan::New("EasyAnalyzer").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  constructor.Reset(tpl->GetFunction());
  target->Set(Nan::New("EasyAnalyzer").ToLocalChecked(), tpl->GetFunction());  
}

NAN_METHOD(EasyAnalyzerJS::New) {
  if (info.IsConstructCall()) {
    REQUIRE_ARGUMENT_STRING(0, language);
    EasyAnalyzerJS* easy_analyzer_js = new EasyAnalyzerJS(cfish_Str_newf(*language));
    easy_analyzer_js->Wrap(info.This());
    info.GetReturnValue().Set(info.This());
  } else {
    const int argc = 1;
    v8::Local<v8::Value> argv[argc] = { info[0] };
    v8::Local<v8::Function> cons = Nan::New<v8::Function>(constructor);
    info.GetReturnValue().Set(Nan::NewInstance(cons, argc, argv).ToLocalChecked());
  }
}