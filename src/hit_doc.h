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
    static NAN_MODULE_INIT(Init);
    static v8::Local<v8::Object> NewObject(lucy_HitDoc* new_hit_doc);
            
private:
    explicit HitDocJS() {}
    virtual ~HitDocJS() {}

    static NAN_METHOD(Get_Field);
    static NAN_METHOD(New);
    // Static field: constructor
    static inline Nan::Persistent<v8::Function> & constructor();
    
    lucy_HitDoc *hit_doc;
};
#endif