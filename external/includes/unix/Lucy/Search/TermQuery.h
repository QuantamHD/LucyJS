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


#ifndef H_LUCY_SEARCH_TERMQUERY
#define H_LUCY_SEARCH_TERMQUERY 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Query.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_TERMQUERY
extern uint32_t lucy_TermQuery_IVARS_OFFSET;
typedef struct lucy_TermQueryIVARS lucy_TermQueryIVARS;
static CFISH_INLINE lucy_TermQueryIVARS*
lucy_TermQuery_IVARS(lucy_TermQuery *self) {
   char *ptr = (char*)self + lucy_TermQuery_IVARS_OFFSET;
   return (lucy_TermQueryIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define TermQueryIVARS lucy_TermQueryIVARS
  #define TermQuery_IVARS lucy_TermQuery_IVARS
#endif

struct lucy_TermQueryIVARS {
    float boost;
    cfish_String* field;
    cfish_Obj* term;
};

#endif /* C_LUCY_TERMQUERY */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_TermQuery*
lucy_TermQuery_new(cfish_String* field, cfish_Obj* term);

LUCY_VISIBLE lucy_TermQuery*
lucy_TermQuery_init(lucy_TermQuery* self, cfish_String* field, cfish_Obj* term);

cfish_String*
LUCY_TermQuery_Get_Field_IMP(lucy_TermQuery* self);

cfish_Obj*
LUCY_TermQuery_Get_Term_IMP(lucy_TermQuery* self);

lucy_Compiler*
LUCY_TermQuery_Make_Compiler_IMP(lucy_TermQuery* self, lucy_Searcher* searcher, float boost, bool subordinate);

cfish_String*
LUCY_TermQuery_To_String_IMP(lucy_TermQuery* self);

void
LUCY_TermQuery_Serialize_IMP(lucy_TermQuery* self, lucy_OutStream* outstream);

lucy_TermQuery*
LUCY_TermQuery_Deserialize_IMP(lucy_TermQuery* self, lucy_InStream* instream);

cfish_Obj*
LUCY_TermQuery_Dump_IMP(lucy_TermQuery* self);

cfish_Obj*
LUCY_TermQuery_Load_IMP(lucy_TermQuery* self, cfish_Obj* dump);

bool
LUCY_TermQuery_Equals_IMP(lucy_TermQuery* self, cfish_Obj* other);

void
LUCY_TermQuery_Destroy_IMP(lucy_TermQuery* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_TermQuery_To_Host_t)(lucy_TermQuery* self, void* vcache);

typedef cfish_Obj*
(*LUCY_TermQuery_Clone_t)(lucy_TermQuery* self);

typedef bool
(*LUCY_TermQuery_Equals_t)(lucy_TermQuery* self, cfish_Obj* other);

typedef int32_t
(*LUCY_TermQuery_Compare_To_t)(lucy_TermQuery* self, cfish_Obj* other);

typedef void
(*LUCY_TermQuery_Destroy_t)(lucy_TermQuery* self);

typedef cfish_String*
(*LUCY_TermQuery_To_String_t)(lucy_TermQuery* self);

typedef lucy_Compiler*
(*LUCY_TermQuery_Make_Compiler_t)(lucy_TermQuery* self, lucy_Searcher* searcher, float boost, bool subordinate);

typedef void
(*LUCY_TermQuery_Set_Boost_t)(lucy_TermQuery* self, float boost);

typedef float
(*LUCY_TermQuery_Get_Boost_t)(lucy_TermQuery* self);

typedef void
(*LUCY_TermQuery_Serialize_t)(lucy_TermQuery* self, lucy_OutStream* outstream);

typedef lucy_TermQuery*
(*LUCY_TermQuery_Deserialize_t)(lucy_TermQuery* self, lucy_InStream* instream);

typedef cfish_Obj*
(*LUCY_TermQuery_Dump_t)(lucy_TermQuery* self);

typedef cfish_Obj*
(*LUCY_TermQuery_Load_t)(lucy_TermQuery* self, cfish_Obj* dump);

typedef cfish_String*
(*LUCY_TermQuery_Get_Field_t)(lucy_TermQuery* self);

typedef cfish_Obj*
(*LUCY_TermQuery_Get_Term_t)(lucy_TermQuery* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_TermQuery_get_class(lucy_TermQuery *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_TermQuery_get_class_name(lucy_TermQuery *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_TermQuery_is_a(lucy_TermQuery *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_TermQuery_To_Host(lucy_TermQuery* self, void* vcache) {
    const LUCY_TermQuery_To_Host_t method = (LUCY_TermQuery_To_Host_t)cfish_obj_method(self, LUCY_TermQuery_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_TermQuery_Clone(lucy_TermQuery* self) {
    const LUCY_TermQuery_Clone_t method = (LUCY_TermQuery_Clone_t)cfish_obj_method(self, LUCY_TermQuery_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_TermQuery_Equals(lucy_TermQuery* self, cfish_Obj* other) {
    const LUCY_TermQuery_Equals_t method = (LUCY_TermQuery_Equals_t)cfish_obj_method(self, LUCY_TermQuery_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_TermQuery_Compare_To(lucy_TermQuery* self, cfish_Obj* other) {
    const LUCY_TermQuery_Compare_To_t method = (LUCY_TermQuery_Compare_To_t)cfish_obj_method(self, LUCY_TermQuery_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_TermQuery_Destroy(lucy_TermQuery* self) {
    const LUCY_TermQuery_Destroy_t method = (LUCY_TermQuery_Destroy_t)cfish_obj_method(self, LUCY_TermQuery_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_TermQuery_To_String(lucy_TermQuery* self) {
    const LUCY_TermQuery_To_String_t method = (LUCY_TermQuery_To_String_t)cfish_obj_method(self, LUCY_TermQuery_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Make_Compiler_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_TermQuery_Make_Compiler(lucy_TermQuery* self, lucy_Searcher* searcher, float boost, bool subordinate) {
    const LUCY_TermQuery_Make_Compiler_t method = (LUCY_TermQuery_Make_Compiler_t)cfish_obj_method(self, LUCY_TermQuery_Make_Compiler_OFFSET);
    return method(self, searcher, boost, subordinate);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_TermQuery_Set_Boost(lucy_TermQuery* self, float boost) {
    const LUCY_TermQuery_Set_Boost_t method = (LUCY_TermQuery_Set_Boost_t)cfish_obj_method(self, LUCY_TermQuery_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_TermQuery_Get_Boost(lucy_TermQuery* self) {
    const LUCY_TermQuery_Get_Boost_t method = (LUCY_TermQuery_Get_Boost_t)cfish_obj_method(self, LUCY_TermQuery_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Serialize_OFFSET;
static CFISH_INLINE void
LUCY_TermQuery_Serialize(lucy_TermQuery* self, lucy_OutStream* outstream) {
    const LUCY_TermQuery_Serialize_t method = (LUCY_TermQuery_Serialize_t)cfish_obj_method(self, LUCY_TermQuery_Serialize_OFFSET);
    method(self, outstream);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Deserialize_OFFSET;
static CFISH_INLINE lucy_TermQuery*
LUCY_TermQuery_Deserialize(lucy_TermQuery* self, lucy_InStream* instream) {
    const LUCY_TermQuery_Deserialize_t method = (LUCY_TermQuery_Deserialize_t)cfish_obj_method(self, LUCY_TermQuery_Deserialize_OFFSET);
    return method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_TermQuery_Dump(lucy_TermQuery* self) {
    const LUCY_TermQuery_Dump_t method = (LUCY_TermQuery_Dump_t)cfish_obj_method(self, LUCY_TermQuery_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_TermQuery_Load(lucy_TermQuery* self, cfish_Obj* dump) {
    const LUCY_TermQuery_Load_t method = (LUCY_TermQuery_Load_t)cfish_obj_method(self, LUCY_TermQuery_Load_OFFSET);
    return method(self, dump);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Get_Field_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_TermQuery_Get_Field(lucy_TermQuery* self) {
    const LUCY_TermQuery_Get_Field_t method = (LUCY_TermQuery_Get_Field_t)cfish_obj_method(self, LUCY_TermQuery_Get_Field_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermQuery_Get_Term_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_TermQuery_Get_Term(lucy_TermQuery* self) {
    const LUCY_TermQuery_Get_Term_t method = (LUCY_TermQuery_Get_Term_t)cfish_obj_method(self, LUCY_TermQuery_Get_Term_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_TermQuery_Get_Field_OVERRIDE NULL
#define Lucy_TermQuery_Get_Term_OVERRIDE NULL
#else
cfish_String*
Lucy_TermQuery_Get_Field_OVERRIDE(lucy_TermQuery* self);
cfish_Obj*
Lucy_TermQuery_Get_Term_OVERRIDE(lucy_TermQuery* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define TermQuery lucy_TermQuery
  #define TERMQUERY LUCY_TERMQUERY
  #define TermQuery_new lucy_TermQuery_new
  #define TermQuery_init lucy_TermQuery_init
  #define TermQuery_get_class lucy_TermQuery_get_class
  #define TermQuery_get_class_name lucy_TermQuery_get_class_name
  #define TermQuery_is_a lucy_TermQuery_is_a
  #define TermQuery_Get_Field_IMP LUCY_TermQuery_Get_Field_IMP
  #define TermQuery_Get_Term_IMP LUCY_TermQuery_Get_Term_IMP
  #define TermQuery_Make_Compiler_IMP LUCY_TermQuery_Make_Compiler_IMP
  #define TermQuery_To_String_IMP LUCY_TermQuery_To_String_IMP
  #define TermQuery_Serialize_IMP LUCY_TermQuery_Serialize_IMP
  #define TermQuery_Deserialize_IMP LUCY_TermQuery_Deserialize_IMP
  #define TermQuery_Dump_IMP LUCY_TermQuery_Dump_IMP
  #define TermQuery_Load_IMP LUCY_TermQuery_Load_IMP
  #define TermQuery_Equals_IMP LUCY_TermQuery_Equals_IMP
  #define TermQuery_Destroy_IMP LUCY_TermQuery_Destroy_IMP
  #define TermQuery_To_Host LUCY_TermQuery_To_Host
  #define TermQuery_To_Host_t LUCY_TermQuery_To_Host_t
  #define TermQuery_Clone LUCY_TermQuery_Clone
  #define TermQuery_Clone_t LUCY_TermQuery_Clone_t
  #define TermQuery_Equals LUCY_TermQuery_Equals
  #define TermQuery_Equals_t LUCY_TermQuery_Equals_t
  #define TermQuery_Compare_To LUCY_TermQuery_Compare_To
  #define TermQuery_Compare_To_t LUCY_TermQuery_Compare_To_t
  #define TermQuery_Destroy LUCY_TermQuery_Destroy
  #define TermQuery_Destroy_t LUCY_TermQuery_Destroy_t
  #define TermQuery_To_String LUCY_TermQuery_To_String
  #define TermQuery_To_String_t LUCY_TermQuery_To_String_t
  #define TermQuery_Make_Compiler LUCY_TermQuery_Make_Compiler
  #define TermQuery_Make_Compiler_t LUCY_TermQuery_Make_Compiler_t
  #define TermQuery_Set_Boost LUCY_TermQuery_Set_Boost
  #define TermQuery_Set_Boost_t LUCY_TermQuery_Set_Boost_t
  #define TermQuery_Get_Boost LUCY_TermQuery_Get_Boost
  #define TermQuery_Get_Boost_t LUCY_TermQuery_Get_Boost_t
  #define TermQuery_Serialize LUCY_TermQuery_Serialize
  #define TermQuery_Serialize_t LUCY_TermQuery_Serialize_t
  #define TermQuery_Deserialize LUCY_TermQuery_Deserialize
  #define TermQuery_Deserialize_t LUCY_TermQuery_Deserialize_t
  #define TermQuery_Dump LUCY_TermQuery_Dump
  #define TermQuery_Dump_t LUCY_TermQuery_Dump_t
  #define TermQuery_Load LUCY_TermQuery_Load
  #define TermQuery_Load_t LUCY_TermQuery_Load_t
  #define TermQuery_Get_Field LUCY_TermQuery_Get_Field
  #define TermQuery_Get_Field_t LUCY_TermQuery_Get_Field_t
  #define TermQuery_Get_Term LUCY_TermQuery_Get_Term
  #define TermQuery_Get_Term_t LUCY_TermQuery_Get_Term_t
#endif /* LUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Search/Compiler.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_TERMCOMPILER
extern uint32_t lucy_TermCompiler_IVARS_OFFSET;
typedef struct lucy_TermCompilerIVARS lucy_TermCompilerIVARS;
static CFISH_INLINE lucy_TermCompilerIVARS*
lucy_TermCompiler_IVARS(lucy_TermCompiler *self) {
   char *ptr = (char*)self + lucy_TermCompiler_IVARS_OFFSET;
   return (lucy_TermCompilerIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define TermCompilerIVARS lucy_TermCompilerIVARS
  #define TermCompiler_IVARS lucy_TermCompiler_IVARS
#endif

struct lucy_TermCompilerIVARS {
    float boost;
    lucy_Query* parent;
    lucy_Similarity* sim;
    float idf;
    float raw_weight;
    float query_norm_factor;
    float normalized_weight;
};

#endif /* C_LUCY_TERMCOMPILER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_TermCompiler*
lucy_TermCompiler_new(lucy_Query* parent, lucy_Searcher* searcher, float boost);

LUCY_VISIBLE lucy_TermCompiler*
lucy_TermCompiler_init(lucy_TermCompiler* self, lucy_Query* parent, lucy_Searcher* searcher, float boost);

lucy_Matcher*
LUCY_TermCompiler_Make_Matcher_IMP(lucy_TermCompiler* self, lucy_SegReader* reader, bool need_score);

float
LUCY_TermCompiler_Get_Weight_IMP(lucy_TermCompiler* self);

float
LUCY_TermCompiler_Sum_Of_Squared_Weights_IMP(lucy_TermCompiler* self);

void
LUCY_TermCompiler_Apply_Norm_Factor_IMP(lucy_TermCompiler* self, float factor);

cfish_Vector*
LUCY_TermCompiler_Highlight_Spans_IMP(lucy_TermCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field);

bool
LUCY_TermCompiler_Equals_IMP(lucy_TermCompiler* self, cfish_Obj* other);

void
LUCY_TermCompiler_Serialize_IMP(lucy_TermCompiler* self, lucy_OutStream* outstream);

lucy_TermCompiler*
LUCY_TermCompiler_Deserialize_IMP(lucy_TermCompiler* self, lucy_InStream* instream);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_TermCompiler_To_Host_t)(lucy_TermCompiler* self, void* vcache);

typedef cfish_Obj*
(*LUCY_TermCompiler_Clone_t)(lucy_TermCompiler* self);

typedef bool
(*LUCY_TermCompiler_Equals_t)(lucy_TermCompiler* self, cfish_Obj* other);

typedef int32_t
(*LUCY_TermCompiler_Compare_To_t)(lucy_TermCompiler* self, cfish_Obj* other);

typedef void
(*LUCY_TermCompiler_Destroy_t)(lucy_TermCompiler* self);

typedef cfish_String*
(*LUCY_TermCompiler_To_String_t)(lucy_TermCompiler* self);

typedef lucy_Compiler*
(*LUCY_TermCompiler_Make_Compiler_t)(lucy_TermCompiler* self, lucy_Searcher* searcher, float boost, bool subordinate);

typedef void
(*LUCY_TermCompiler_Set_Boost_t)(lucy_TermCompiler* self, float boost);

typedef float
(*LUCY_TermCompiler_Get_Boost_t)(lucy_TermCompiler* self);

typedef void
(*LUCY_TermCompiler_Serialize_t)(lucy_TermCompiler* self, lucy_OutStream* outstream);

typedef lucy_TermCompiler*
(*LUCY_TermCompiler_Deserialize_t)(lucy_TermCompiler* self, lucy_InStream* instream);

typedef cfish_Obj*
(*LUCY_TermCompiler_Dump_t)(lucy_TermCompiler* self);

typedef cfish_Obj*
(*LUCY_TermCompiler_Load_t)(lucy_TermCompiler* self, cfish_Obj* dump);

typedef lucy_Matcher*
(*LUCY_TermCompiler_Make_Matcher_t)(lucy_TermCompiler* self, lucy_SegReader* reader, bool need_score);

typedef float
(*LUCY_TermCompiler_Get_Weight_t)(lucy_TermCompiler* self);

typedef lucy_Similarity*
(*LUCY_TermCompiler_Get_Similarity_t)(lucy_TermCompiler* self);

typedef lucy_Query*
(*LUCY_TermCompiler_Get_Parent_t)(lucy_TermCompiler* self);

typedef float
(*LUCY_TermCompiler_Sum_Of_Squared_Weights_t)(lucy_TermCompiler* self);

typedef void
(*LUCY_TermCompiler_Apply_Norm_Factor_t)(lucy_TermCompiler* self, float factor);

typedef void
(*LUCY_TermCompiler_Normalize_t)(lucy_TermCompiler* self);

typedef cfish_Vector*
(*LUCY_TermCompiler_Highlight_Spans_t)(lucy_TermCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_TermCompiler_get_class(lucy_TermCompiler *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_TermCompiler_get_class_name(lucy_TermCompiler *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_TermCompiler_is_a(lucy_TermCompiler *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_TermCompiler_To_Host(lucy_TermCompiler* self, void* vcache) {
    const LUCY_TermCompiler_To_Host_t method = (LUCY_TermCompiler_To_Host_t)cfish_obj_method(self, LUCY_TermCompiler_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_TermCompiler_Clone(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Clone_t method = (LUCY_TermCompiler_Clone_t)cfish_obj_method(self, LUCY_TermCompiler_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_TermCompiler_Equals(lucy_TermCompiler* self, cfish_Obj* other) {
    const LUCY_TermCompiler_Equals_t method = (LUCY_TermCompiler_Equals_t)cfish_obj_method(self, LUCY_TermCompiler_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_TermCompiler_Compare_To(lucy_TermCompiler* self, cfish_Obj* other) {
    const LUCY_TermCompiler_Compare_To_t method = (LUCY_TermCompiler_Compare_To_t)cfish_obj_method(self, LUCY_TermCompiler_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_TermCompiler_Destroy(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Destroy_t method = (LUCY_TermCompiler_Destroy_t)cfish_obj_method(self, LUCY_TermCompiler_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_TermCompiler_To_String(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_To_String_t method = (LUCY_TermCompiler_To_String_t)cfish_obj_method(self, LUCY_TermCompiler_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Make_Compiler_OFFSET;
static CFISH_INLINE lucy_Compiler*
LUCY_TermCompiler_Make_Compiler(lucy_TermCompiler* self, lucy_Searcher* searcher, float boost, bool subordinate) {
    const LUCY_TermCompiler_Make_Compiler_t method = (LUCY_TermCompiler_Make_Compiler_t)cfish_obj_method(self, LUCY_TermCompiler_Make_Compiler_OFFSET);
    return method(self, searcher, boost, subordinate);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_TermCompiler_Set_Boost(lucy_TermCompiler* self, float boost) {
    const LUCY_TermCompiler_Set_Boost_t method = (LUCY_TermCompiler_Set_Boost_t)cfish_obj_method(self, LUCY_TermCompiler_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_TermCompiler_Get_Boost(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Get_Boost_t method = (LUCY_TermCompiler_Get_Boost_t)cfish_obj_method(self, LUCY_TermCompiler_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Serialize_OFFSET;
static CFISH_INLINE void
LUCY_TermCompiler_Serialize(lucy_TermCompiler* self, lucy_OutStream* outstream) {
    const LUCY_TermCompiler_Serialize_t method = (LUCY_TermCompiler_Serialize_t)cfish_obj_method(self, LUCY_TermCompiler_Serialize_OFFSET);
    method(self, outstream);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Deserialize_OFFSET;
static CFISH_INLINE lucy_TermCompiler*
LUCY_TermCompiler_Deserialize(lucy_TermCompiler* self, lucy_InStream* instream) {
    const LUCY_TermCompiler_Deserialize_t method = (LUCY_TermCompiler_Deserialize_t)cfish_obj_method(self, LUCY_TermCompiler_Deserialize_OFFSET);
    return method(self, instream);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_TermCompiler_Dump(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Dump_t method = (LUCY_TermCompiler_Dump_t)cfish_obj_method(self, LUCY_TermCompiler_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_TermCompiler_Load(lucy_TermCompiler* self, cfish_Obj* dump) {
    const LUCY_TermCompiler_Load_t method = (LUCY_TermCompiler_Load_t)cfish_obj_method(self, LUCY_TermCompiler_Load_OFFSET);
    return method(self, dump);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Make_Matcher_OFFSET;
static CFISH_INLINE lucy_Matcher*
LUCY_TermCompiler_Make_Matcher(lucy_TermCompiler* self, lucy_SegReader* reader, bool need_score) {
    const LUCY_TermCompiler_Make_Matcher_t method = (LUCY_TermCompiler_Make_Matcher_t)cfish_obj_method(self, LUCY_TermCompiler_Make_Matcher_OFFSET);
    return method(self, reader, need_score);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Get_Weight_OFFSET;
static CFISH_INLINE float
LUCY_TermCompiler_Get_Weight(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Get_Weight_t method = (LUCY_TermCompiler_Get_Weight_t)cfish_obj_method(self, LUCY_TermCompiler_Get_Weight_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Get_Similarity_OFFSET;
static CFISH_INLINE lucy_Similarity*
LUCY_TermCompiler_Get_Similarity(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Get_Similarity_t method = (LUCY_TermCompiler_Get_Similarity_t)cfish_obj_method(self, LUCY_TermCompiler_Get_Similarity_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Get_Parent_OFFSET;
static CFISH_INLINE lucy_Query*
LUCY_TermCompiler_Get_Parent(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Get_Parent_t method = (LUCY_TermCompiler_Get_Parent_t)cfish_obj_method(self, LUCY_TermCompiler_Get_Parent_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Sum_Of_Squared_Weights_OFFSET;
static CFISH_INLINE float
LUCY_TermCompiler_Sum_Of_Squared_Weights(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Sum_Of_Squared_Weights_t method = (LUCY_TermCompiler_Sum_Of_Squared_Weights_t)cfish_obj_method(self, LUCY_TermCompiler_Sum_Of_Squared_Weights_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Apply_Norm_Factor_OFFSET;
static CFISH_INLINE void
LUCY_TermCompiler_Apply_Norm_Factor(lucy_TermCompiler* self, float factor) {
    const LUCY_TermCompiler_Apply_Norm_Factor_t method = (LUCY_TermCompiler_Apply_Norm_Factor_t)cfish_obj_method(self, LUCY_TermCompiler_Apply_Norm_Factor_OFFSET);
    method(self, factor);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Normalize_OFFSET;
static CFISH_INLINE void
LUCY_TermCompiler_Normalize(lucy_TermCompiler* self) {
    const LUCY_TermCompiler_Normalize_t method = (LUCY_TermCompiler_Normalize_t)cfish_obj_method(self, LUCY_TermCompiler_Normalize_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_TermCompiler_Highlight_Spans_OFFSET;
static CFISH_INLINE cfish_Vector*
LUCY_TermCompiler_Highlight_Spans(lucy_TermCompiler* self, lucy_Searcher* searcher, lucy_DocVector* doc_vec, cfish_String* field) {
    const LUCY_TermCompiler_Highlight_Spans_t method = (LUCY_TermCompiler_Highlight_Spans_t)cfish_obj_method(self, LUCY_TermCompiler_Highlight_Spans_OFFSET);
    return method(self, searcher, doc_vec, field);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define TermCompiler lucy_TermCompiler
  #define TERMCOMPILER LUCY_TERMCOMPILER
  #define TermCompiler_new lucy_TermCompiler_new
  #define TermCompiler_init lucy_TermCompiler_init
  #define TermCompiler_get_class lucy_TermCompiler_get_class
  #define TermCompiler_get_class_name lucy_TermCompiler_get_class_name
  #define TermCompiler_is_a lucy_TermCompiler_is_a
  #define TermCompiler_Make_Matcher_IMP LUCY_TermCompiler_Make_Matcher_IMP
  #define TermCompiler_Get_Weight_IMP LUCY_TermCompiler_Get_Weight_IMP
  #define TermCompiler_Sum_Of_Squared_Weights_IMP LUCY_TermCompiler_Sum_Of_Squared_Weights_IMP
  #define TermCompiler_Apply_Norm_Factor_IMP LUCY_TermCompiler_Apply_Norm_Factor_IMP
  #define TermCompiler_Highlight_Spans_IMP LUCY_TermCompiler_Highlight_Spans_IMP
  #define TermCompiler_Equals_IMP LUCY_TermCompiler_Equals_IMP
  #define TermCompiler_Serialize_IMP LUCY_TermCompiler_Serialize_IMP
  #define TermCompiler_Deserialize_IMP LUCY_TermCompiler_Deserialize_IMP
  #define TermCompiler_To_Host LUCY_TermCompiler_To_Host
  #define TermCompiler_To_Host_t LUCY_TermCompiler_To_Host_t
  #define TermCompiler_Clone LUCY_TermCompiler_Clone
  #define TermCompiler_Clone_t LUCY_TermCompiler_Clone_t
  #define TermCompiler_Equals LUCY_TermCompiler_Equals
  #define TermCompiler_Equals_t LUCY_TermCompiler_Equals_t
  #define TermCompiler_Compare_To LUCY_TermCompiler_Compare_To
  #define TermCompiler_Compare_To_t LUCY_TermCompiler_Compare_To_t
  #define TermCompiler_Destroy LUCY_TermCompiler_Destroy
  #define TermCompiler_Destroy_t LUCY_TermCompiler_Destroy_t
  #define TermCompiler_To_String LUCY_TermCompiler_To_String
  #define TermCompiler_To_String_t LUCY_TermCompiler_To_String_t
  #define TermCompiler_Make_Compiler LUCY_TermCompiler_Make_Compiler
  #define TermCompiler_Make_Compiler_t LUCY_TermCompiler_Make_Compiler_t
  #define TermCompiler_Set_Boost LUCY_TermCompiler_Set_Boost
  #define TermCompiler_Set_Boost_t LUCY_TermCompiler_Set_Boost_t
  #define TermCompiler_Get_Boost LUCY_TermCompiler_Get_Boost
  #define TermCompiler_Get_Boost_t LUCY_TermCompiler_Get_Boost_t
  #define TermCompiler_Serialize LUCY_TermCompiler_Serialize
  #define TermCompiler_Serialize_t LUCY_TermCompiler_Serialize_t
  #define TermCompiler_Deserialize LUCY_TermCompiler_Deserialize
  #define TermCompiler_Deserialize_t LUCY_TermCompiler_Deserialize_t
  #define TermCompiler_Dump LUCY_TermCompiler_Dump
  #define TermCompiler_Dump_t LUCY_TermCompiler_Dump_t
  #define TermCompiler_Load LUCY_TermCompiler_Load
  #define TermCompiler_Load_t LUCY_TermCompiler_Load_t
  #define TermCompiler_Make_Matcher LUCY_TermCompiler_Make_Matcher
  #define TermCompiler_Make_Matcher_t LUCY_TermCompiler_Make_Matcher_t
  #define TermCompiler_Get_Weight LUCY_TermCompiler_Get_Weight
  #define TermCompiler_Get_Weight_t LUCY_TermCompiler_Get_Weight_t
  #define TermCompiler_Get_Similarity LUCY_TermCompiler_Get_Similarity
  #define TermCompiler_Get_Similarity_t LUCY_TermCompiler_Get_Similarity_t
  #define TermCompiler_Get_Parent LUCY_TermCompiler_Get_Parent
  #define TermCompiler_Get_Parent_t LUCY_TermCompiler_Get_Parent_t
  #define TermCompiler_Sum_Of_Squared_Weights LUCY_TermCompiler_Sum_Of_Squared_Weights
  #define TermCompiler_Sum_Of_Squared_Weights_t LUCY_TermCompiler_Sum_Of_Squared_Weights_t
  #define TermCompiler_Apply_Norm_Factor LUCY_TermCompiler_Apply_Norm_Factor
  #define TermCompiler_Apply_Norm_Factor_t LUCY_TermCompiler_Apply_Norm_Factor_t
  #define TermCompiler_Normalize LUCY_TermCompiler_Normalize
  #define TermCompiler_Normalize_t LUCY_TermCompiler_Normalize_t
  #define TermCompiler_Highlight_Spans LUCY_TermCompiler_Highlight_Spans
  #define TermCompiler_Highlight_Spans_t LUCY_TermCompiler_Highlight_Spans_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_TERMQUERY */



