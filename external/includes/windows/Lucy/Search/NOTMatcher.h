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


#ifndef H_LUCY_SEARCH_NOTMATCHER
#define H_LUCY_SEARCH_NOTMATCHER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy\Search\PolyMatcher.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_NOTMATCHER
extern uint32_t lucy_NOTMatcher_IVARS_OFFSET;
typedef struct lucy_NOTMatcherIVARS lucy_NOTMatcherIVARS;
static CFISH_INLINE lucy_NOTMatcherIVARS*
lucy_NOTMatcher_IVARS(lucy_NOTMatcher *self) {
   char *ptr = (char*)self + lucy_NOTMatcher_IVARS_OFFSET;
   return (lucy_NOTMatcherIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define NOTMatcherIVARS lucy_NOTMatcherIVARS
  #define NOTMatcher_IVARS lucy_NOTMatcher_IVARS
#endif

struct lucy_NOTMatcherIVARS {
    cfish_Vector* children;
    lucy_Similarity* sim;
    uint32_t num_kids;
    uint32_t matching_kids;
    float* coord_factors;
    lucy_Matcher* negated_matcher;
    int32_t doc_id;
    int32_t doc_max;
    int32_t next_negation;
};

#endif /* C_LUCY_NOTMATCHER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_NOTMatcher*
lucy_NOTMatcher_new(lucy_Matcher* negated_matcher, int32_t doc_max);

LUCY_VISIBLE lucy_NOTMatcher*
lucy_NOTMatcher_init(lucy_NOTMatcher* self, lucy_Matcher* negated_matcher, int32_t doc_max);

void
LUCY_NOTMatcher_Destroy_IMP(lucy_NOTMatcher* self);

int32_t
LUCY_NOTMatcher_Next_IMP(lucy_NOTMatcher* self);

int32_t
LUCY_NOTMatcher_Advance_IMP(lucy_NOTMatcher* self, int32_t target);

float
LUCY_NOTMatcher_Score_IMP(lucy_NOTMatcher* self);

int32_t
LUCY_NOTMatcher_Get_Doc_ID_IMP(lucy_NOTMatcher* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_NOTMatcher_To_Host_t)(lucy_NOTMatcher* self, void* vcache);

typedef cfish_Obj*
(*LUCY_NOTMatcher_Clone_t)(lucy_NOTMatcher* self);

typedef bool
(*LUCY_NOTMatcher_Equals_t)(lucy_NOTMatcher* self, cfish_Obj* other);

typedef int32_t
(*LUCY_NOTMatcher_Compare_To_t)(lucy_NOTMatcher* self, cfish_Obj* other);

typedef void
(*LUCY_NOTMatcher_Destroy_t)(lucy_NOTMatcher* self);

typedef cfish_String*
(*LUCY_NOTMatcher_To_String_t)(lucy_NOTMatcher* self);

typedef int32_t
(*LUCY_NOTMatcher_Next_t)(lucy_NOTMatcher* self);

typedef int32_t
(*LUCY_NOTMatcher_Advance_t)(lucy_NOTMatcher* self, int32_t target);

typedef int32_t
(*LUCY_NOTMatcher_Get_Doc_ID_t)(lucy_NOTMatcher* self);

typedef float
(*LUCY_NOTMatcher_Score_t)(lucy_NOTMatcher* self);

typedef void
(*LUCY_NOTMatcher_Collect_t)(lucy_NOTMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_NOTMatcher_get_class(lucy_NOTMatcher *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_NOTMatcher_get_class_name(lucy_NOTMatcher *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_NOTMatcher_is_a(lucy_NOTMatcher *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_NOTMatcher_To_Host(lucy_NOTMatcher* self, void* vcache) {
    const LUCY_NOTMatcher_To_Host_t method = (LUCY_NOTMatcher_To_Host_t)cfish_obj_method(self, LUCY_NOTMatcher_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_NOTMatcher_Clone(lucy_NOTMatcher* self) {
    const LUCY_NOTMatcher_Clone_t method = (LUCY_NOTMatcher_Clone_t)cfish_obj_method(self, LUCY_NOTMatcher_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_NOTMatcher_Equals(lucy_NOTMatcher* self, cfish_Obj* other) {
    const LUCY_NOTMatcher_Equals_t method = (LUCY_NOTMatcher_Equals_t)cfish_obj_method(self, LUCY_NOTMatcher_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_NOTMatcher_Compare_To(lucy_NOTMatcher* self, cfish_Obj* other) {
    const LUCY_NOTMatcher_Compare_To_t method = (LUCY_NOTMatcher_Compare_To_t)cfish_obj_method(self, LUCY_NOTMatcher_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_NOTMatcher_Destroy(lucy_NOTMatcher* self) {
    const LUCY_NOTMatcher_Destroy_t method = (LUCY_NOTMatcher_Destroy_t)cfish_obj_method(self, LUCY_NOTMatcher_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_NOTMatcher_To_String(lucy_NOTMatcher* self) {
    const LUCY_NOTMatcher_To_String_t method = (LUCY_NOTMatcher_To_String_t)cfish_obj_method(self, LUCY_NOTMatcher_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Next_OFFSET;
static CFISH_INLINE int32_t
LUCY_NOTMatcher_Next(lucy_NOTMatcher* self) {
    const LUCY_NOTMatcher_Next_t method = (LUCY_NOTMatcher_Next_t)cfish_obj_method(self, LUCY_NOTMatcher_Next_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Advance_OFFSET;
static CFISH_INLINE int32_t
LUCY_NOTMatcher_Advance(lucy_NOTMatcher* self, int32_t target) {
    const LUCY_NOTMatcher_Advance_t method = (LUCY_NOTMatcher_Advance_t)cfish_obj_method(self, LUCY_NOTMatcher_Advance_OFFSET);
    return method(self, target);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Get_Doc_ID_OFFSET;
static CFISH_INLINE int32_t
LUCY_NOTMatcher_Get_Doc_ID(lucy_NOTMatcher* self) {
    const LUCY_NOTMatcher_Get_Doc_ID_t method = (LUCY_NOTMatcher_Get_Doc_ID_t)cfish_obj_method(self, LUCY_NOTMatcher_Get_Doc_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Score_OFFSET;
static CFISH_INLINE float
LUCY_NOTMatcher_Score(lucy_NOTMatcher* self) {
    const LUCY_NOTMatcher_Score_t method = (LUCY_NOTMatcher_Score_t)cfish_obj_method(self, LUCY_NOTMatcher_Score_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_NOTMatcher_Collect_OFFSET;
static CFISH_INLINE void
LUCY_NOTMatcher_Collect(lucy_NOTMatcher* self, lucy_Collector* collector, lucy_Matcher* deletions) {
    const LUCY_NOTMatcher_Collect_t method = (LUCY_NOTMatcher_Collect_t)cfish_obj_method(self, LUCY_NOTMatcher_Collect_OFFSET);
    method(self, collector, deletions);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define NOTMatcher lucy_NOTMatcher
  #define NOTMATCHER LUCY_NOTMATCHER
  #define NOTMatcher_new lucy_NOTMatcher_new
  #define NOTMatcher_init lucy_NOTMatcher_init
  #define NOTMatcher_get_class lucy_NOTMatcher_get_class
  #define NOTMatcher_get_class_name lucy_NOTMatcher_get_class_name
  #define NOTMatcher_is_a lucy_NOTMatcher_is_a
  #define NOTMatcher_Destroy_IMP LUCY_NOTMatcher_Destroy_IMP
  #define NOTMatcher_Next_IMP LUCY_NOTMatcher_Next_IMP
  #define NOTMatcher_Advance_IMP LUCY_NOTMatcher_Advance_IMP
  #define NOTMatcher_Score_IMP LUCY_NOTMatcher_Score_IMP
  #define NOTMatcher_Get_Doc_ID_IMP LUCY_NOTMatcher_Get_Doc_ID_IMP
  #define NOTMatcher_To_Host LUCY_NOTMatcher_To_Host
  #define NOTMatcher_To_Host_t LUCY_NOTMatcher_To_Host_t
  #define NOTMatcher_Clone LUCY_NOTMatcher_Clone
  #define NOTMatcher_Clone_t LUCY_NOTMatcher_Clone_t
  #define NOTMatcher_Equals LUCY_NOTMatcher_Equals
  #define NOTMatcher_Equals_t LUCY_NOTMatcher_Equals_t
  #define NOTMatcher_Compare_To LUCY_NOTMatcher_Compare_To
  #define NOTMatcher_Compare_To_t LUCY_NOTMatcher_Compare_To_t
  #define NOTMatcher_Destroy LUCY_NOTMatcher_Destroy
  #define NOTMatcher_Destroy_t LUCY_NOTMatcher_Destroy_t
  #define NOTMatcher_To_String LUCY_NOTMatcher_To_String
  #define NOTMatcher_To_String_t LUCY_NOTMatcher_To_String_t
  #define NOTMatcher_Next LUCY_NOTMatcher_Next
  #define NOTMatcher_Next_t LUCY_NOTMatcher_Next_t
  #define NOTMatcher_Advance LUCY_NOTMatcher_Advance
  #define NOTMatcher_Advance_t LUCY_NOTMatcher_Advance_t
  #define NOTMatcher_Get_Doc_ID LUCY_NOTMatcher_Get_Doc_ID
  #define NOTMatcher_Get_Doc_ID_t LUCY_NOTMatcher_Get_Doc_ID_t
  #define NOTMatcher_Score LUCY_NOTMatcher_Score
  #define NOTMatcher_Score_t LUCY_NOTMatcher_Score_t
  #define NOTMatcher_Collect LUCY_NOTMatcher_Collect
  #define NOTMatcher_Collect_t LUCY_NOTMatcher_Collect_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_NOTMATCHER */



