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

void Init(v8::Local<v8::Object> exports) {
  lucy_bootstrap_parcel();  
}

NODE_MODULE(lucy, Init)