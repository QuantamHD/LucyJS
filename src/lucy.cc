#include <nan.h>

#include "lucy_parcel.h"
#include "schema.h"
#include "index_searcher.h"
#include "hit_doc.h"
#include "hits.h"
#include "analyzer.h"
#include "easy_analyzer.h"
#include "field_type.h"
#include "full_text_type.h"

using v8::FunctionTemplate;

NAN_MODULE_INIT(Init) {
  lucy_bootstrap_parcel();
  
  HitDocJS::Init(target);
  HitsJS::Init(target);
  AnalyzerJS::Init(target);
  EasyAnalyzerJS::Init(target);  
  SchemaJS::Init(target);
  IndexSearcherJS::Init(target);
  FieldTypeJS::Init(target);
  FullTextTypeJS::Init(target);
}

NODE_MODULE(lucy, Init)