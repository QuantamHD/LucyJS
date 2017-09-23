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


#ifndef H_LUCY_TEST_ANALYSIS_TESTANALYZER
#define H_LUCY_TEST_ANALYSIS_TESTANALYZER 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish/TestHarness/TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTANALYZER
extern uint32_t testlucy_TestAnalyzer_IVARS_OFFSET;
typedef struct testlucy_TestAnalyzerIVARS testlucy_TestAnalyzerIVARS;
static CFISH_INLINE testlucy_TestAnalyzerIVARS*
testlucy_TestAnalyzer_IVARS(testlucy_TestAnalyzer *self) {
   char *ptr = (char*)self + testlucy_TestAnalyzer_IVARS_OFFSET;
   return (testlucy_TestAnalyzerIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestAnalyzerIVARS testlucy_TestAnalyzerIVARS
  #define TestAnalyzer_IVARS testlucy_TestAnalyzer_IVARS
#endif


#endif /* C_TESTLUCY_TESTANALYZER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestAnalyzer*
testlucy_TestAnalyzer_new(void);

void
TESTLUCY_TestAnalyzer_Run_IMP(testlucy_TestAnalyzer* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestAnalyzer_To_Host_t)(testlucy_TestAnalyzer* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestAnalyzer_Clone_t)(testlucy_TestAnalyzer* self);

typedef bool
(*TESTLUCY_TestAnalyzer_Equals_t)(testlucy_TestAnalyzer* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestAnalyzer_Compare_To_t)(testlucy_TestAnalyzer* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestAnalyzer_Destroy_t)(testlucy_TestAnalyzer* self);

typedef cfish_String*
(*TESTLUCY_TestAnalyzer_To_String_t)(testlucy_TestAnalyzer* self);

typedef void
(*TESTLUCY_TestAnalyzer_Run_t)(testlucy_TestAnalyzer* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestAnalyzer_get_class(testlucy_TestAnalyzer *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestAnalyzer_get_class_name(testlucy_TestAnalyzer *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestAnalyzer_is_a(testlucy_TestAnalyzer *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestAnalyzer_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestAnalyzer_To_Host(testlucy_TestAnalyzer* self, void* vcache) {
    const TESTLUCY_TestAnalyzer_To_Host_t method = (TESTLUCY_TestAnalyzer_To_Host_t)cfish_obj_method(self, TESTLUCY_TestAnalyzer_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestAnalyzer_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestAnalyzer_Clone(testlucy_TestAnalyzer* self) {
    const TESTLUCY_TestAnalyzer_Clone_t method = (TESTLUCY_TestAnalyzer_Clone_t)cfish_obj_method(self, TESTLUCY_TestAnalyzer_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestAnalyzer_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestAnalyzer_Equals(testlucy_TestAnalyzer* self, cfish_Obj* other) {
    const TESTLUCY_TestAnalyzer_Equals_t method = (TESTLUCY_TestAnalyzer_Equals_t)cfish_obj_method(self, TESTLUCY_TestAnalyzer_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestAnalyzer_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestAnalyzer_Compare_To(testlucy_TestAnalyzer* self, cfish_Obj* other) {
    const TESTLUCY_TestAnalyzer_Compare_To_t method = (TESTLUCY_TestAnalyzer_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestAnalyzer_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestAnalyzer_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestAnalyzer_Destroy(testlucy_TestAnalyzer* self) {
    const TESTLUCY_TestAnalyzer_Destroy_t method = (TESTLUCY_TestAnalyzer_Destroy_t)cfish_obj_method(self, TESTLUCY_TestAnalyzer_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestAnalyzer_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestAnalyzer_To_String(testlucy_TestAnalyzer* self) {
    const TESTLUCY_TestAnalyzer_To_String_t method = (TESTLUCY_TestAnalyzer_To_String_t)cfish_obj_method(self, TESTLUCY_TestAnalyzer_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestAnalyzer_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestAnalyzer_Run(testlucy_TestAnalyzer* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestAnalyzer_Run_t method = (TESTLUCY_TestAnalyzer_Run_t)cfish_obj_method(self, TESTLUCY_TestAnalyzer_Run_OFFSET);
    method(self, runner);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestAnalyzer testlucy_TestAnalyzer
  #define TESTANALYZER TESTLUCY_TESTANALYZER
  #define TestAnalyzer_new testlucy_TestAnalyzer_new
  #define TestAnalyzer_get_class testlucy_TestAnalyzer_get_class
  #define TestAnalyzer_get_class_name testlucy_TestAnalyzer_get_class_name
  #define TestAnalyzer_is_a testlucy_TestAnalyzer_is_a
  #define TestAnalyzer_Run_IMP TESTLUCY_TestAnalyzer_Run_IMP
  #define TestAnalyzer_To_Host TESTLUCY_TestAnalyzer_To_Host
  #define TestAnalyzer_To_Host_t TESTLUCY_TestAnalyzer_To_Host_t
  #define TestAnalyzer_Clone TESTLUCY_TestAnalyzer_Clone
  #define TestAnalyzer_Clone_t TESTLUCY_TestAnalyzer_Clone_t
  #define TestAnalyzer_Equals TESTLUCY_TestAnalyzer_Equals
  #define TestAnalyzer_Equals_t TESTLUCY_TestAnalyzer_Equals_t
  #define TestAnalyzer_Compare_To TESTLUCY_TestAnalyzer_Compare_To
  #define TestAnalyzer_Compare_To_t TESTLUCY_TestAnalyzer_Compare_To_t
  #define TestAnalyzer_Destroy TESTLUCY_TestAnalyzer_Destroy
  #define TestAnalyzer_Destroy_t TESTLUCY_TestAnalyzer_Destroy_t
  #define TestAnalyzer_To_String TESTLUCY_TestAnalyzer_To_String
  #define TestAnalyzer_To_String_t TESTLUCY_TestAnalyzer_To_String_t
  #define TestAnalyzer_Run TESTLUCY_TestAnalyzer_Run
  #define TestAnalyzer_Run_t TESTLUCY_TestAnalyzer_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */



/* Include the header for this class's parent. 
 */

#include "Lucy/Analysis/Analyzer.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_DUMMYANALYZER
extern uint32_t testlucy_DummyAnalyzer_IVARS_OFFSET;
typedef struct testlucy_DummyAnalyzerIVARS testlucy_DummyAnalyzerIVARS;
static CFISH_INLINE testlucy_DummyAnalyzerIVARS*
testlucy_DummyAnalyzer_IVARS(testlucy_DummyAnalyzer *self) {
   char *ptr = (char*)self + testlucy_DummyAnalyzer_IVARS_OFFSET;
   return (testlucy_DummyAnalyzerIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define DummyAnalyzerIVARS testlucy_DummyAnalyzerIVARS
  #define DummyAnalyzer_IVARS testlucy_DummyAnalyzer_IVARS
#endif


#endif /* C_TESTLUCY_DUMMYANALYZER */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_DummyAnalyzer*
testlucy_DummyAnalyzer_new(void);

TESTLUCY_VISIBLE testlucy_DummyAnalyzer*
testlucy_DummyAnalyzer_init(testlucy_DummyAnalyzer* self);

lucy_Inversion*
TESTLUCY_DummyAnalyzer_Transform_IMP(testlucy_DummyAnalyzer* self, lucy_Inversion* inversion);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_DummyAnalyzer_To_Host_t)(testlucy_DummyAnalyzer* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_DummyAnalyzer_Clone_t)(testlucy_DummyAnalyzer* self);

typedef bool
(*TESTLUCY_DummyAnalyzer_Equals_t)(testlucy_DummyAnalyzer* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_DummyAnalyzer_Compare_To_t)(testlucy_DummyAnalyzer* self, cfish_Obj* other);

typedef void
(*TESTLUCY_DummyAnalyzer_Destroy_t)(testlucy_DummyAnalyzer* self);

typedef cfish_String*
(*TESTLUCY_DummyAnalyzer_To_String_t)(testlucy_DummyAnalyzer* self);

typedef lucy_Inversion*
(*TESTLUCY_DummyAnalyzer_Transform_t)(testlucy_DummyAnalyzer* self, lucy_Inversion* inversion);

typedef lucy_Inversion*
(*TESTLUCY_DummyAnalyzer_Transform_Text_t)(testlucy_DummyAnalyzer* self, cfish_String* text);

typedef cfish_Vector*
(*TESTLUCY_DummyAnalyzer_Split_t)(testlucy_DummyAnalyzer* self, cfish_String* text);

typedef cfish_Obj*
(*TESTLUCY_DummyAnalyzer_Dump_t)(testlucy_DummyAnalyzer* self);

typedef cfish_Obj*
(*TESTLUCY_DummyAnalyzer_Load_t)(testlucy_DummyAnalyzer* self, cfish_Obj* dump);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_DummyAnalyzer_get_class(testlucy_DummyAnalyzer *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_DummyAnalyzer_get_class_name(testlucy_DummyAnalyzer *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_DummyAnalyzer_is_a(testlucy_DummyAnalyzer *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_DummyAnalyzer_To_Host(testlucy_DummyAnalyzer* self, void* vcache) {
    const TESTLUCY_DummyAnalyzer_To_Host_t method = (TESTLUCY_DummyAnalyzer_To_Host_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_DummyAnalyzer_Clone(testlucy_DummyAnalyzer* self) {
    const TESTLUCY_DummyAnalyzer_Clone_t method = (TESTLUCY_DummyAnalyzer_Clone_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_DummyAnalyzer_Equals(testlucy_DummyAnalyzer* self, cfish_Obj* other) {
    const TESTLUCY_DummyAnalyzer_Equals_t method = (TESTLUCY_DummyAnalyzer_Equals_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_DummyAnalyzer_Compare_To(testlucy_DummyAnalyzer* self, cfish_Obj* other) {
    const TESTLUCY_DummyAnalyzer_Compare_To_t method = (TESTLUCY_DummyAnalyzer_Compare_To_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_DummyAnalyzer_Destroy(testlucy_DummyAnalyzer* self) {
    const TESTLUCY_DummyAnalyzer_Destroy_t method = (TESTLUCY_DummyAnalyzer_Destroy_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_DummyAnalyzer_To_String(testlucy_DummyAnalyzer* self) {
    const TESTLUCY_DummyAnalyzer_To_String_t method = (TESTLUCY_DummyAnalyzer_To_String_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Transform_OFFSET;
static CFISH_INLINE lucy_Inversion*
TESTLUCY_DummyAnalyzer_Transform(testlucy_DummyAnalyzer* self, lucy_Inversion* inversion) {
    const TESTLUCY_DummyAnalyzer_Transform_t method = (TESTLUCY_DummyAnalyzer_Transform_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Transform_OFFSET);
    return method(self, inversion);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Transform_Text_OFFSET;
static CFISH_INLINE lucy_Inversion*
TESTLUCY_DummyAnalyzer_Transform_Text(testlucy_DummyAnalyzer* self, cfish_String* text) {
    const TESTLUCY_DummyAnalyzer_Transform_Text_t method = (TESTLUCY_DummyAnalyzer_Transform_Text_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Transform_Text_OFFSET);
    return method(self, text);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Split_OFFSET;
static CFISH_INLINE cfish_Vector*
TESTLUCY_DummyAnalyzer_Split(testlucy_DummyAnalyzer* self, cfish_String* text) {
    const TESTLUCY_DummyAnalyzer_Split_t method = (TESTLUCY_DummyAnalyzer_Split_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Split_OFFSET);
    return method(self, text);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Dump_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_DummyAnalyzer_Dump(testlucy_DummyAnalyzer* self) {
    const TESTLUCY_DummyAnalyzer_Dump_t method = (TESTLUCY_DummyAnalyzer_Dump_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Dump_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_DummyAnalyzer_Load_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_DummyAnalyzer_Load(testlucy_DummyAnalyzer* self, cfish_Obj* dump) {
    const TESTLUCY_DummyAnalyzer_Load_t method = (TESTLUCY_DummyAnalyzer_Load_t)cfish_obj_method(self, TESTLUCY_DummyAnalyzer_Load_OFFSET);
    return method(self, dump);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#else
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef TESTLUCY_USE_SHORT_NAMES
  #define DummyAnalyzer testlucy_DummyAnalyzer
  #define DUMMYANALYZER TESTLUCY_DUMMYANALYZER
  #define DummyAnalyzer_new testlucy_DummyAnalyzer_new
  #define DummyAnalyzer_init testlucy_DummyAnalyzer_init
  #define DummyAnalyzer_get_class testlucy_DummyAnalyzer_get_class
  #define DummyAnalyzer_get_class_name testlucy_DummyAnalyzer_get_class_name
  #define DummyAnalyzer_is_a testlucy_DummyAnalyzer_is_a
  #define DummyAnalyzer_Transform_IMP TESTLUCY_DummyAnalyzer_Transform_IMP
  #define DummyAnalyzer_To_Host TESTLUCY_DummyAnalyzer_To_Host
  #define DummyAnalyzer_To_Host_t TESTLUCY_DummyAnalyzer_To_Host_t
  #define DummyAnalyzer_Clone TESTLUCY_DummyAnalyzer_Clone
  #define DummyAnalyzer_Clone_t TESTLUCY_DummyAnalyzer_Clone_t
  #define DummyAnalyzer_Equals TESTLUCY_DummyAnalyzer_Equals
  #define DummyAnalyzer_Equals_t TESTLUCY_DummyAnalyzer_Equals_t
  #define DummyAnalyzer_Compare_To TESTLUCY_DummyAnalyzer_Compare_To
  #define DummyAnalyzer_Compare_To_t TESTLUCY_DummyAnalyzer_Compare_To_t
  #define DummyAnalyzer_Destroy TESTLUCY_DummyAnalyzer_Destroy
  #define DummyAnalyzer_Destroy_t TESTLUCY_DummyAnalyzer_Destroy_t
  #define DummyAnalyzer_To_String TESTLUCY_DummyAnalyzer_To_String
  #define DummyAnalyzer_To_String_t TESTLUCY_DummyAnalyzer_To_String_t
  #define DummyAnalyzer_Transform TESTLUCY_DummyAnalyzer_Transform
  #define DummyAnalyzer_Transform_t TESTLUCY_DummyAnalyzer_Transform_t
  #define DummyAnalyzer_Transform_Text TESTLUCY_DummyAnalyzer_Transform_Text
  #define DummyAnalyzer_Transform_Text_t TESTLUCY_DummyAnalyzer_Transform_Text_t
  #define DummyAnalyzer_Split TESTLUCY_DummyAnalyzer_Split
  #define DummyAnalyzer_Split_t TESTLUCY_DummyAnalyzer_Split_t
  #define DummyAnalyzer_Dump TESTLUCY_DummyAnalyzer_Dump
  #define DummyAnalyzer_Dump_t TESTLUCY_DummyAnalyzer_Dump_t
  #define DummyAnalyzer_Load TESTLUCY_DummyAnalyzer_Load
  #define DummyAnalyzer_Load_t TESTLUCY_DummyAnalyzer_Load_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_ANALYSIS_TESTANALYZER */



