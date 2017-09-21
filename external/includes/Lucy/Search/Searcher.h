/*
 * ***********************************************
 * 
 * !!!! DO NOT EDIT !!!!
 * 
 * This file was auto-generated by cfc.
 * 
 * ***********************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef H_LUCY_SEARCH_SEARCHER
#define H_LUCY_SEARCH_SEARCHER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_SEARCHER
extern uint32_t lucy_Searcher_IVARS_OFFSET;
typedef struct lucy_SearcherIVARS lucy_SearcherIVARS;
static CFISH_INLINE lucy_SearcherIVARS*
lucy_Searcher_IVARS(lucy_Searcher *self) {
   char *ptr = (char*)self + lucy_Searcher_IVARS_OFFSET;
   return (lucy_SearcherIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define SearcherIVARS lucy_SearcherIVARS
  #define Searcher_IVARS lucy_Searcher_IVARS
#endif

struct lucy_SearcherIVARS {
    lucy_Schema* schema;
    lucy_QueryParser* qparser;
};

#endif /* C_LUCY_SEARCHER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_Searcher*
lucy_Searcher_init(lucy_Searcher* self, lucy_Schema* schema);

void
LUCY_Searcher_Destroy_IMP(lucy_Searcher* self);

int32_t
LUCY_Searcher_Doc_Max_IMP(lucy_Searcher* self);

uint32_t
LUCY_Searcher_Doc_Freq_IMP(lucy_Searcher* self, cfish_String* field, cfish_Obj* term);

lucy_Query*
LUCY_Searcher_Glean_Query_IMP(lucy_Searcher* self, cfish_Obj* query);

lucy_Hits*
LUCY_Searcher_Hits_IMP(lucy_Searcher* self, cfish_Obj* query, uint32_t offset, uint32_t num_wanted, lucy_SortSpec* sort_spec);

void
LUCY_Searcher_Collect_IMP(lucy_Searcher* self, lucy_Query* query, lucy_Collector* collector);

lucy_TopDocs*
LUCY_Searcher_Top_Docs_IMP(lucy_Searcher* self, lucy_Query* query, uint32_t num_wanted, lucy_SortSpec* sort_spec);

lucy_HitDoc*
LUCY_Searcher_Fetch_Doc_IMP(lucy_Searcher* self, int32_t doc_id);

lucy_DocVector*
LUCY_Searcher_Fetch_Doc_Vec_IMP(lucy_Searcher* self, int32_t doc_id);

lucy_Schema*
LUCY_Searcher_Get_Schema_IMP(lucy_Searcher* self);

void
LUCY_Searcher_Close_IMP(lucy_Searcher* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_Searcher_To_Host_t)(lucy_Searcher* self, void* vcache);

typedef cfish_Obj*
(*LUCY_Searcher_Clone_t)(lucy_Searcher* self);

typedef bool
(*LUCY_Searcher_Equals_t)(lucy_Searcher* self, cfish_Obj* other);

typedef int32_t
(*LUCY_Searcher_Compare_To_t)(lucy_Searcher* self, cfish_Obj* other);

typedef void
(*LUCY_Searcher_Destroy_t)(lucy_Searcher* self);

typedef cfish_String*
(*LUCY_Searcher_To_String_t)(lucy_Searcher* self);

typedef int32_t
(*LUCY_Searcher_Doc_Max_t)(lucy_Searcher* self);

typedef uint32_t
(*LUCY_Searcher_Doc_Freq_t)(lucy_Searcher* self, cfish_String* field, cfish_Obj* term);

typedef lucy_Query*
(*LUCY_Searcher_Glean_Query_t)(lucy_Searcher* self, cfish_Obj* query);

typedef lucy_Hits*
(*LUCY_Searcher_Hits_t)(lucy_Searcher* self, cfish_Obj* query, uint32_t offset, uint32_t num_wanted, lucy_SortSpec* sort_spec);

typedef void
(*LUCY_Searcher_Collect_t)(lucy_Searcher* self, lucy_Query* query, lucy_Collector* collector);

typedef lucy_TopDocs*
(*LUCY_Searcher_Top_Docs_t)(lucy_Searcher* self, lucy_Query* query, uint32_t num_wanted, lucy_SortSpec* sort_spec);

typedef lucy_HitDoc*
(*LUCY_Searcher_Fetch_Doc_t)(lucy_Searcher* self, int32_t doc_id);

typedef lucy_DocVector*
(*LUCY_Searcher_Fetch_Doc_Vec_t)(lucy_Searcher* self, int32_t doc_id);

typedef lucy_Schema*
(*LUCY_Searcher_Get_Schema_t)(lucy_Searcher* self);

typedef void
(*LUCY_Searcher_Close_t)(lucy_Searcher* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_Searcher_get_class(lucy_Searcher *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_Searcher_get_class_name(lucy_Searcher *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_Searcher_is_a(lucy_Searcher *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_Searcher_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_Searcher_To_Host(lucy_Searcher* self, void* vcache) {
    const LUCY_Searcher_To_Host_t method = (LUCY_Searcher_To_Host_t)cfish_obj_method(self, LUCY_Searcher_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_Searcher_Clone(lucy_Searcher* self) {
    const LUCY_Searcher_Clone_t method = (LUCY_Searcher_Clone_t)cfish_obj_method(self, LUCY_Searcher_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_Searcher_Equals(lucy_Searcher* self, cfish_Obj* other) {
    const LUCY_Searcher_Equals_t method = (LUCY_Searcher_Equals_t)cfish_obj_method(self, LUCY_Searcher_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_Searcher_Compare_To(lucy_Searcher* self, cfish_Obj* other) {
    const LUCY_Searcher_Compare_To_t method = (LUCY_Searcher_Compare_To_t)cfish_obj_method(self, LUCY_Searcher_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_Searcher_Destroy(lucy_Searcher* self) {
    const LUCY_Searcher_Destroy_t method = (LUCY_Searcher_Destroy_t)cfish_obj_method(self, LUCY_Searcher_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_Searcher_To_String(lucy_Searcher* self) {
    const LUCY_Searcher_To_String_t method = (LUCY_Searcher_To_String_t)cfish_obj_method(self, LUCY_Searcher_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Doc_Max_OFFSET;
static CFISH_INLINE int32_t
LUCY_Searcher_Doc_Max(lucy_Searcher* self) {
    const LUCY_Searcher_Doc_Max_t method = (LUCY_Searcher_Doc_Max_t)cfish_obj_method(self, LUCY_Searcher_Doc_Max_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Doc_Freq_OFFSET;
static CFISH_INLINE uint32_t
LUCY_Searcher_Doc_Freq(lucy_Searcher* self, cfish_String* field, cfish_Obj* term) {
    const LUCY_Searcher_Doc_Freq_t method = (LUCY_Searcher_Doc_Freq_t)cfish_obj_method(self, LUCY_Searcher_Doc_Freq_OFFSET);
    return method(self, field, term);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Glean_Query_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_Searcher_Glean_Query(lucy_Searcher* self, cfish_Obj* query) {
    const LUCY_Searcher_Glean_Query_t method = (LUCY_Searcher_Glean_Query_t)cfish_obj_method(self, LUCY_Searcher_Glean_Query_OFFSET);
    return method(self, query);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Hits_OFFSET;
static CFISH_INLINE lucy_Hits*
LUCY_Searcher_Hits(lucy_Searcher* self, cfish_Obj* query, uint32_t offset, uint32_t num_wanted, lucy_SortSpec* sort_spec) {
    const LUCY_Searcher_Hits_t method = (LUCY_Searcher_Hits_t)cfish_obj_method(self, LUCY_Searcher_Hits_OFFSET);
    return method(self, query, offset, num_wanted, sort_spec);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Collect_OFFSET;
static CFISH_INLINE void
LUCY_Searcher_Collect(lucy_Searcher* self, lucy_Query* query, lucy_Collector* collector) {
    const LUCY_Searcher_Collect_t method = (LUCY_Searcher_Collect_t)cfish_obj_method(self, LUCY_Searcher_Collect_OFFSET);
    method(self, query, collector);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Top_Docs_OFFSET;
static CFISH_INLINE lucy_TopDocs*
LUCY_Searcher_Top_Docs(lucy_Searcher* self, lucy_Query* query, uint32_t num_wanted, lucy_SortSpec* sort_spec) {
    const LUCY_Searcher_Top_Docs_t method = (LUCY_Searcher_Top_Docs_t)cfish_obj_method(self, LUCY_Searcher_Top_Docs_OFFSET);
    return method(self, query, num_wanted, sort_spec);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Fetch_Doc_OFFSET;
static CFISH_INLINE lucy_HitDoc*
LUCY_Searcher_Fetch_Doc(lucy_Searcher* self, int32_t doc_id) {
    const LUCY_Searcher_Fetch_Doc_t method = (LUCY_Searcher_Fetch_Doc_t)cfish_obj_method(self, LUCY_Searcher_Fetch_Doc_OFFSET);
    return method(self, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Fetch_Doc_Vec_OFFSET;
static CFISH_INLINE lucy_DocVector*
LUCY_Searcher_Fetch_Doc_Vec(lucy_Searcher* self, int32_t doc_id) {
    const LUCY_Searcher_Fetch_Doc_Vec_t method = (LUCY_Searcher_Fetch_Doc_Vec_t)cfish_obj_method(self, LUCY_Searcher_Fetch_Doc_Vec_OFFSET);
    return method(self, doc_id);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Get_Schema_OFFSET;
static CFISH_INLINE lucy_Schema*
LUCY_Searcher_Get_Schema(lucy_Searcher* self) {
    const LUCY_Searcher_Get_Schema_t method = (LUCY_Searcher_Get_Schema_t)cfish_obj_method(self, LUCY_Searcher_Get_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_Searcher_Close_OFFSET;
static CFISH_INLINE void
LUCY_Searcher_Close(lucy_Searcher* self) {
    const LUCY_Searcher_Close_t method = (LUCY_Searcher_Close_t)cfish_obj_method(self, LUCY_Searcher_Close_OFFSET);
    method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_Searcher_Doc_Max_OVERRIDE NULL
#define Lucy_Searcher_Doc_Freq_OVERRIDE NULL
#define Lucy_Searcher_Glean_Query_OVERRIDE NULL
#define Lucy_Searcher_Hits_OVERRIDE NULL
#define Lucy_Searcher_Collect_OVERRIDE NULL
#define Lucy_Searcher_Top_Docs_OVERRIDE NULL
#define Lucy_Searcher_Fetch_Doc_OVERRIDE NULL
#define Lucy_Searcher_Fetch_Doc_Vec_OVERRIDE NULL
#define Lucy_Searcher_Get_Schema_OVERRIDE NULL
#define Lucy_Searcher_Close_OVERRIDE NULL
#else
int32_t
Lucy_Searcher_Doc_Max_OVERRIDE(lucy_Searcher* self);
uint32_t
Lucy_Searcher_Doc_Freq_OVERRIDE(lucy_Searcher* self, cfish_String* field, cfish_Obj* term);
lucy_Query*
Lucy_Searcher_Glean_Query_OVERRIDE(lucy_Searcher* self, cfish_Obj* query);
lucy_Hits*
Lucy_Searcher_Hits_OVERRIDE(lucy_Searcher* self, cfish_Obj* query, uint32_t offset, uint32_t num_wanted, lucy_SortSpec* sort_spec);
void
Lucy_Searcher_Collect_OVERRIDE(lucy_Searcher* self, lucy_Query* query, lucy_Collector* collector);
lucy_TopDocs*
Lucy_Searcher_Top_Docs_OVERRIDE(lucy_Searcher* self, lucy_Query* query, uint32_t num_wanted, lucy_SortSpec* sort_spec);
lucy_HitDoc*
Lucy_Searcher_Fetch_Doc_OVERRIDE(lucy_Searcher* self, int32_t doc_id);
lucy_DocVector*
Lucy_Searcher_Fetch_Doc_Vec_OVERRIDE(lucy_Searcher* self, int32_t doc_id);
lucy_Schema*
Lucy_Searcher_Get_Schema_OVERRIDE(lucy_Searcher* self);
void
Lucy_Searcher_Close_OVERRIDE(lucy_Searcher* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define Searcher lucy_Searcher
  #define SEARCHER LUCY_SEARCHER
  #define Searcher_init lucy_Searcher_init
  #define Searcher_get_class lucy_Searcher_get_class
  #define Searcher_get_class_name lucy_Searcher_get_class_name
  #define Searcher_is_a lucy_Searcher_is_a
  #define Searcher_Destroy_IMP LUCY_Searcher_Destroy_IMP
  #define Searcher_Doc_Max_IMP LUCY_Searcher_Doc_Max_IMP
  #define Searcher_Doc_Freq_IMP LUCY_Searcher_Doc_Freq_IMP
  #define Searcher_Glean_Query_IMP LUCY_Searcher_Glean_Query_IMP
  #define Searcher_Hits_IMP LUCY_Searcher_Hits_IMP
  #define Searcher_Collect_IMP LUCY_Searcher_Collect_IMP
  #define Searcher_Top_Docs_IMP LUCY_Searcher_Top_Docs_IMP
  #define Searcher_Fetch_Doc_IMP LUCY_Searcher_Fetch_Doc_IMP
  #define Searcher_Fetch_Doc_Vec_IMP LUCY_Searcher_Fetch_Doc_Vec_IMP
  #define Searcher_Get_Schema_IMP LUCY_Searcher_Get_Schema_IMP
  #define Searcher_Close_IMP LUCY_Searcher_Close_IMP
  #define Searcher_To_Host LUCY_Searcher_To_Host
  #define Searcher_To_Host_t LUCY_Searcher_To_Host_t
  #define Searcher_Clone LUCY_Searcher_Clone
  #define Searcher_Clone_t LUCY_Searcher_Clone_t
  #define Searcher_Equals LUCY_Searcher_Equals
  #define Searcher_Equals_t LUCY_Searcher_Equals_t
  #define Searcher_Compare_To LUCY_Searcher_Compare_To
  #define Searcher_Compare_To_t LUCY_Searcher_Compare_To_t
  #define Searcher_Destroy LUCY_Searcher_Destroy
  #define Searcher_Destroy_t LUCY_Searcher_Destroy_t
  #define Searcher_To_String LUCY_Searcher_To_String
  #define Searcher_To_String_t LUCY_Searcher_To_String_t
  #define Searcher_Doc_Max LUCY_Searcher_Doc_Max
  #define Searcher_Doc_Max_t LUCY_Searcher_Doc_Max_t
  #define Searcher_Doc_Freq LUCY_Searcher_Doc_Freq
  #define Searcher_Doc_Freq_t LUCY_Searcher_Doc_Freq_t
  #define Searcher_Glean_Query LUCY_Searcher_Glean_Query
  #define Searcher_Glean_Query_t LUCY_Searcher_Glean_Query_t
  #define Searcher_Hits LUCY_Searcher_Hits
  #define Searcher_Hits_t LUCY_Searcher_Hits_t
  #define Searcher_Collect LUCY_Searcher_Collect
  #define Searcher_Collect_t LUCY_Searcher_Collect_t
  #define Searcher_Top_Docs LUCY_Searcher_Top_Docs
  #define Searcher_Top_Docs_t LUCY_Searcher_Top_Docs_t
  #define Searcher_Fetch_Doc LUCY_Searcher_Fetch_Doc
  #define Searcher_Fetch_Doc_t LUCY_Searcher_Fetch_Doc_t
  #define Searcher_Fetch_Doc_Vec LUCY_Searcher_Fetch_Doc_Vec
  #define Searcher_Fetch_Doc_Vec_t LUCY_Searcher_Fetch_Doc_Vec_t
  #define Searcher_Get_Schema LUCY_Searcher_Get_Schema
  #define Searcher_Get_Schema_t LUCY_Searcher_Get_Schema_t
  #define Searcher_Close LUCY_Searcher_Close
  #define Searcher_Close_t LUCY_Searcher_Close_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_SEARCHER */



