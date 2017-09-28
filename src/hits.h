#ifndef HITS_JS_H
#define HITS_JS_H

#include <nan.h>
#include "Lucy/Search/Hits.h"
#include "Lucy/Document/HitDoc.h"


class HitsJS : public Nan::ObjectWrap {
public:
  static NAN_MODULE_INIT(Init);
  static v8::Local<v8::Object> NewObject(lucy_Hits* new_hit_doc);

private:
  explicit HitsJS() {}
  virtual ~HitsJS() {
    CFISH_DECREF(lucy_hits);
  }
  static NAN_GETTER(Total_Hits);
  static NAN_METHOD(Hits_Next);
  static NAN_METHOD(New);

  static Nan::Persistent<v8::Function> constructor;
  lucy_Hits *lucy_hits;

};
#endif