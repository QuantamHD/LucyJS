#ifndef INDEX_SEARCHER_H
#define INDEX_SEARCHER_H

#include <nan.h>

#include "Clownfish/String.h"
#include "Clownfish/Err.h"
#include "Lucy/Document/HitDoc.h"
#include "Lucy/Search/Hits.h"
#include "Lucy/Search/IndexSearcher.h"
#include "Lucy/Plan/Schema.h"
#include "hit_doc.h"

class IndexSearcherJS : public Nan::ObjectWrap {
  public:
    static void Init(v8::Local<v8::Object> exports);

  private:
    explicit IndexSearcherJS();
    ~IndexSearcherJS();

    static NAN_METHOD(New);
    static NAN_METHOD(Get_Hits);
    static NAN_METHOD(Get_Schema);
    static void Initialize_Lucy_IndexSearcher(void* context);

    static Nan::Persistent<v8::Function> constructor;
    lucy_IndexSearcher* index_searcher;
    char *index_path;
};
#endif