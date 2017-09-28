#ifndef INDEX_SEARCHER_H
#define INDEX_SEARCHER_H

#include <nan.h>

#include "Clownfish/String.h"
#include "Lucy/Document/HitDoc.h"
#include "Lucy/Search/Hits.h"
#include "Lucy/Search/IndexSearcher.h"
#include "hit_doc.h"

 

class IndexSearcherJS : public Nan::ObjectWrap {
  public:
    static void Init(v8::Local<v8::Object> exports);

  private:
    explicit IndexSearcherJS(const char *path_to_index);
    ~IndexSearcherJS();

    static NAN_METHOD(New);
    static NAN_METHOD(Get_Hits);

    static Nan::Persistent<v8::Function> constructor;
    lucy_IndexSearcher* index_searcher;
};
#endif