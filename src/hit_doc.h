#ifndef HIT_DOC_JS_H
#define HIT_DOC_JS_H

#include <nan.h>

#include "Clownfish/String.h"
#include "Lucy/Document/HitDoc.h"
#include "Lucy/Search/Hits.h"
#include "Lucy/Search/IndexSearcher.h"

#include "macros.h"


class HitDocJS : public Nan::ObjectWrap
{
public:
    static NAN_MODULE_INIT(Init)
    {        
        v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
        tpl->SetClassName(Nan::New("HitDoc").ToLocalChecked());
        tpl->InstanceTemplate()->SetInternalFieldCount(1);

        Nan::SetPrototypeMethod(tpl, "getField", Get_Field);

        constructor().Reset(tpl->GetFunction());
    }
    
    static v8::Local<v8::Object> NewObject(lucy_HitDoc* new_hit_doc)
    {        
        Nan::EscapableHandleScope scope;
        v8::Local<v8::Object> instance = Nan::NewInstance(Nan::New<v8::Function>(constructor())).ToLocalChecked();
        
        // Set internal data
        ObjectWrap::Unwrap<HitDocJS>(instance)->hit_doc = new_hit_doc;
        return scope.Escape(instance);
    }
            
private:
    explicit HitDocJS() {}
    virtual ~HitDocJS() {}

    static NAN_METHOD(Get_Field){
        lucy_HitDoc *hit_doc = ObjectWrap::Unwrap<HitDocJS>(info.Holder())->hit_doc;
        REQUIRE_ARGUMENT_STRING(0, field_name);

        cfish_String *field_name_cfish = cfish_Str_newf(*field_name);
        cfish_String *field = (cfish_String*)LUCY_HitDoc_Extract(hit_doc, field_name_cfish);
        char *field_c = CFISH_Str_To_Utf8(field);

        info.GetReturnValue().Set(Nan::New(field_c).ToLocalChecked());
        CFISH_DECREF(field_name_cfish);
        CFISH_DECREF(field);
        free(field_c);
    }
    
    static NAN_METHOD(New)
    {        
        HitDocJS* obj = new HitDocJS();
        obj->Wrap(info.This());
        info.GetReturnValue().Set(info.This());
    }
    
    // Static field: constructor
    static inline Nan::Persistent<v8::Function> & constructor()
    {
        static Nan::Persistent<v8::Function> my_constructor;
        return my_constructor;
    }
    
    lucy_HitDoc *hit_doc;
};
#endif