#include <nan.h>

#include "lucy_parcel.h"
#include "schema.h"
#include "index_searcher.h"
#include "hit_doc.h"
#include "hits.h"
#include "easy_analyzer.h"

using v8::FunctionTemplate;

NAN_MODULE_INIT(Init) {
  lucy_bootstrap_parcel();
  
  HitDocJS::Init(target);
  HitsJS::Init(target);
  EasyAnalyzerJS::Init(target);  
  SchemaJS::Init(target);
  IndexSearcherJS::Init(target);
}

NODE_MODULE(lucy, Init)