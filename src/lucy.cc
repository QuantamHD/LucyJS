#include <nan.h>

#define CFISH_USE_SHORT_NAMES
#define LUCY_USE_SHORT_NAMES
#include "Clownfish/String.h"
#include "Lucy/Analysis/EasyAnalyzer.h"
#include "Lucy/Document/Doc.h"
#include "Lucy/Index/Indexer.h"
#include "Lucy/Plan/FullTextType.h"
#include "Lucy/Plan/StringType.h"
#include "Lucy/Plan/Schema.h"


#include "index_searcher.h"
#include "hit_doc.h"

using v8::FunctionTemplate;

NAN_METHOD(aString) {
  info.GetReturnValue().Set(Nan::New("This is a thing.").ToLocalChecked());
}


NAN_MODULE_INIT(Init) {
  lucy_bootstrap_parcel();
  Nan::Set(target, Nan::New("aString").ToLocalChecked(), Nan::GetFunction(Nan::New<FunctionTemplate>(aString)).ToLocalChecked());

  HitDocJS::Init(target);
  IndexSearcherJS::Init(target);
}

NODE_MODULE(lucy, Init)