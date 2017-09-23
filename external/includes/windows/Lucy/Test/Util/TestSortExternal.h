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


#ifndef H_LUCY_TEST_UTIL_TESTSORTEXTERNAL
#define H_LUCY_TEST_UTIL_TESTSORTEXTERNAL 1


#ifdef __cplusplus
extern "C" {
#endif

#include "testlucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\TestHarness\TestBatch.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_TESTLUCY_TESTSORTEXTERNAL
extern uint32_t testlucy_TestSortExternal_IVARS_OFFSET;
typedef struct testlucy_TestSortExternalIVARS testlucy_TestSortExternalIVARS;
static CFISH_INLINE testlucy_TestSortExternalIVARS*
testlucy_TestSortExternal_IVARS(testlucy_TestSortExternal *self) {
   char *ptr = (char*)self + testlucy_TestSortExternal_IVARS_OFFSET;
   return (testlucy_TestSortExternalIVARS*)ptr;
}
#ifdef TESTLUCY_USE_SHORT_NAMES
  #define TestSortExternalIVARS testlucy_TestSortExternalIVARS
  #define TestSortExternal_IVARS testlucy_TestSortExternal_IVARS
#endif


#endif /* C_TESTLUCY_TESTSORTEXTERNAL */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

TESTLUCY_VISIBLE testlucy_TestSortExternal*
testlucy_TestSortExternal_new(void);

void
TESTLUCY_TestSortExternal_Run_IMP(testlucy_TestSortExternal* self, cfish_TestBatchRunner* runner);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*TESTLUCY_TestSortExternal_To_Host_t)(testlucy_TestSortExternal* self, void* vcache);

typedef cfish_Obj*
(*TESTLUCY_TestSortExternal_Clone_t)(testlucy_TestSortExternal* self);

typedef bool
(*TESTLUCY_TestSortExternal_Equals_t)(testlucy_TestSortExternal* self, cfish_Obj* other);

typedef int32_t
(*TESTLUCY_TestSortExternal_Compare_To_t)(testlucy_TestSortExternal* self, cfish_Obj* other);

typedef void
(*TESTLUCY_TestSortExternal_Destroy_t)(testlucy_TestSortExternal* self);

typedef cfish_String*
(*TESTLUCY_TestSortExternal_To_String_t)(testlucy_TestSortExternal* self);

typedef void
(*TESTLUCY_TestSortExternal_Run_t)(testlucy_TestSortExternal* self, cfish_TestBatchRunner* runner);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
testlucy_TestSortExternal_get_class(testlucy_TestSortExternal *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
testlucy_TestSortExternal_get_class_name(testlucy_TestSortExternal *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
testlucy_TestSortExternal_is_a(testlucy_TestSortExternal *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortExternal_To_Host_OFFSET;
static CFISH_INLINE void*
TESTLUCY_TestSortExternal_To_Host(testlucy_TestSortExternal* self, void* vcache) {
    const TESTLUCY_TestSortExternal_To_Host_t method = (TESTLUCY_TestSortExternal_To_Host_t)cfish_obj_method(self, TESTLUCY_TestSortExternal_To_Host_OFFSET);
    return method(self, vcache);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortExternal_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
TESTLUCY_TestSortExternal_Clone(testlucy_TestSortExternal* self) {
    const TESTLUCY_TestSortExternal_Clone_t method = (TESTLUCY_TestSortExternal_Clone_t)cfish_obj_method(self, TESTLUCY_TestSortExternal_Clone_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortExternal_Equals_OFFSET;
static CFISH_INLINE bool
TESTLUCY_TestSortExternal_Equals(testlucy_TestSortExternal* self, cfish_Obj* other) {
    const TESTLUCY_TestSortExternal_Equals_t method = (TESTLUCY_TestSortExternal_Equals_t)cfish_obj_method(self, TESTLUCY_TestSortExternal_Equals_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortExternal_Compare_To_OFFSET;
static CFISH_INLINE int32_t
TESTLUCY_TestSortExternal_Compare_To(testlucy_TestSortExternal* self, cfish_Obj* other) {
    const TESTLUCY_TestSortExternal_Compare_To_t method = (TESTLUCY_TestSortExternal_Compare_To_t)cfish_obj_method(self, TESTLUCY_TestSortExternal_Compare_To_OFFSET);
    return method(self, other);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortExternal_Destroy_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSortExternal_Destroy(testlucy_TestSortExternal* self) {
    const TESTLUCY_TestSortExternal_Destroy_t method = (TESTLUCY_TestSortExternal_Destroy_t)cfish_obj_method(self, TESTLUCY_TestSortExternal_Destroy_OFFSET);
    method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortExternal_To_String_OFFSET;
static CFISH_INLINE cfish_String*
TESTLUCY_TestSortExternal_To_String(testlucy_TestSortExternal* self) {
    const TESTLUCY_TestSortExternal_To_String_t method = (TESTLUCY_TestSortExternal_To_String_t)cfish_obj_method(self, TESTLUCY_TestSortExternal_To_String_OFFSET);
    return method(self);
}

extern TESTLUCY_VISIBLE uint32_t TESTLUCY_TestSortExternal_Run_OFFSET;
static CFISH_INLINE void
TESTLUCY_TestSortExternal_Run(testlucy_TestSortExternal* self, cfish_TestBatchRunner* runner) {
    const TESTLUCY_TestSortExternal_Run_t method = (TESTLUCY_TestSortExternal_Run_t)cfish_obj_method(self, TESTLUCY_TestSortExternal_Run_OFFSET);
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
  #define TestSortExternal testlucy_TestSortExternal
  #define TESTSORTEXTERNAL TESTLUCY_TESTSORTEXTERNAL
  #define TestSortExternal_new testlucy_TestSortExternal_new
  #define TestSortExternal_get_class testlucy_TestSortExternal_get_class
  #define TestSortExternal_get_class_name testlucy_TestSortExternal_get_class_name
  #define TestSortExternal_is_a testlucy_TestSortExternal_is_a
  #define TestSortExternal_Run_IMP TESTLUCY_TestSortExternal_Run_IMP
  #define TestSortExternal_To_Host TESTLUCY_TestSortExternal_To_Host
  #define TestSortExternal_To_Host_t TESTLUCY_TestSortExternal_To_Host_t
  #define TestSortExternal_Clone TESTLUCY_TestSortExternal_Clone
  #define TestSortExternal_Clone_t TESTLUCY_TestSortExternal_Clone_t
  #define TestSortExternal_Equals TESTLUCY_TestSortExternal_Equals
  #define TestSortExternal_Equals_t TESTLUCY_TestSortExternal_Equals_t
  #define TestSortExternal_Compare_To TESTLUCY_TestSortExternal_Compare_To
  #define TestSortExternal_Compare_To_t TESTLUCY_TestSortExternal_Compare_To_t
  #define TestSortExternal_Destroy TESTLUCY_TestSortExternal_Destroy
  #define TestSortExternal_Destroy_t TESTLUCY_TestSortExternal_Destroy_t
  #define TestSortExternal_To_String TESTLUCY_TestSortExternal_To_String
  #define TestSortExternal_To_String_t TESTLUCY_TestSortExternal_To_String_t
  #define TestSortExternal_Run TESTLUCY_TestSortExternal_Run
  #define TestSortExternal_Run_t TESTLUCY_TestSortExternal_Run_t
#endif /* TESTLUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_TEST_UTIL_TESTSORTEXTERNAL */



