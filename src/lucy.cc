#include <nan.h>

#include "lucy_parcel.h"
#include "Plan/schema.h"
#include "Search/index_searcher.h"
#include "Document/hit_doc.h"
#include "Search/hits.h"
#include "Analysis/analyzer.h"
#include "Analysis/easy_analyzer.h"
#include "Plan/field_type.h"
#include "Plan/full_text_type.h"

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