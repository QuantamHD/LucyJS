#include "full_text_type.h"
#include "../macros.h"

Nan::Persistent<v8::FunctionTemplate> FullTextTypeJS::function_template;
Nan::Persistent<v8::Function> FullTextTypeJS::constructor;

NAN_MODULE_INIT(FullTextTypeJS::Init) {
  Nan::HandleScope scope;
  
  v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);

  v8::Local<v8::FunctionTemplate> field_type_function_template = Nan::New(FieldTypeJS::function_template);
  tpl->Inherit(field_type_function_template);
  tpl->SetClassName(Nan::New("FullTextType").ToLocalChecked());
  tpl->InstanceTemplate()->SetInternalFieldCount(1);

  function_template.Reset(tpl);
  constructor.Reset(tpl->GetFunction());
  target->Set(Nan::New("FullTextType").ToLocalChecked(), tpl->GetFunction());  
}

NAN_METHOD(FullTextTypeJS::New) {
  if (info.IsConstructCall()) {
    REQUIRE_ARGUMENTS(1);

    Nan::MaybeLocal<v8::Object> analyzer_maybe = Nan::To<v8::Object>(info[0]);
    if(analyzer_maybe.IsEmpty()){
      return;
    }

    FullTextTypeJS* full_text_type_js = new FullTextTypeJS();
    full_text_type_js->Wrap(info.This()); 

    FieldTypeJS* field_type_js = ObjectWrap::Unwrap<FieldTypeJS>(info.This());
    
    v8::Local<v8::FunctionTemplate> analyzer_function_template = Nan::New(AnalyzerJS::function_template); 
    v8::Local<v8::Object> analyzer_local = analyzer_maybe.ToLocalChecked(); 
    if(!analyzer_function_template->HasInstance(analyzer_local)){
      return Nan::ThrowTypeError("The parameter provided is not an Analyzer.");
    }

    AnalyzerJS* analyzer_js = Nan::ObjectWrap::Unwrap<AnalyzerJS>(analyzer_local);
    field_type_js->set_field_type((lucy_FieldType*) lucy_FullTextType_new(analyzer_js->get_analyzer()));

    info.GetReturnValue().Set(info.This());
  } else {
    const int argc = 1;
    v8::Local<v8::Value> argv[argc] = { info[0] };
    v8::Local<v8::Function> cons = Nan::New<v8::Function>(constructor);
    info.GetReturnValue().Set(Nan::NewInstance(cons, argc, argv).ToLocalChecked());
  }
}