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


#ifndef H_LUCY_PLAN_STRINGTYPE
#define H_LUCY_PLAN_STRINGTYPE 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Lucy/Plan/TextType.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_STRINGTYPE
extern uint32_t lucy_StringType_IVARS_OFFSET;
typedef struct lucy_StringTypeIVARS lucy_StringTypeIVARS;
static CFISH_INLINE lucy_StringTypeIVARS*
lucy_StringType_IVARS(lucy_StringType *self) {
   char *ptr = (char*)self + lucy_StringType_IVARS_OFFSET;
   return (lucy_StringTypeIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define StringTypeIVARS lucy_StringTypeIVARS
  #define StringType_IVARS lucy_StringType_IVARS
#endif

struct lucy_StringTypeIVARS {
    float boost;
    bool indexed;
    bool stored;
    bool sortable;
};

#endif /* C_LUCY_STRINGTYPE */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_StringType*
lucy_StringType_new(void);

LUCY_VISIBLE lucy_StringType*
lucy_StringType_init(lucy_StringType* self);

LUCY_VISIBLE lucy_StringType*
lucy_StringType_init2(lucy_StringType* self, float boost, bool indexed, bool stored, bool sortable);

lucy_Similarity*
LUCY_StringType_Make_Similarity_IMP(lucy_StringType* self);

cfish_Hash*
LUCY_StringType_Dump_For_Schema_IMP(lucy_StringType* self);

cfish_Hash*
LUCY_StringType_Dump_IMP(lucy_StringType* self);

lucy_StringType*
LUCY_StringType_Load_IMP(lucy_StringType* self, cfish_Obj* dump);

bool
LUCY_StringType_Equals_IMP(lucy_StringType* self, cfish_Obj* other);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_StringType_To_Host_t)(lucy_StringType* self, void* vcache);

typedef cfish_Obj*
(*LUCY_StringType_Clone_t)(lucy_StringType* self);

typedef bool
(*LUCY_StringType_Equals_t)(lucy_StringType* self, cfish_Obj* other);

typedef int32_t
(*LUCY_StringType_Compare_To_t)(lucy_StringType* self, cfish_Obj* other);

typedef void
(*LUCY_StringType_Destroy_t)(lucy_StringType* self);

typedef cfish_String*
(*LUCY_StringType_To_String_t)(lucy_StringType* self);

typedef void
(*LUCY_StringType_Set_Boost_t)(lucy_StringType* self, float boost);

typedef float
(*LUCY_StringType_Get_Boost_t)(lucy_StringType* self);

typedef void
(*LUCY_StringType_Set_Indexed_t)(lucy_StringType* self, bool indexed);

typedef bool
(*LUCY_StringType_Indexed_t)(lucy_StringType* self);

typedef void
(*LUCY_StringType_Set_Stored_t)(lucy_StringType* self, bool stored);

typedef bool
(*LUCY_StringType_Stored_t)(lucy_StringType* self);

typedef void
(*LUCY_StringType_Set_Sortable_t)(lucy_StringType* self, bool sortable);

typedef bool
(*LUCY_StringType_Sortable_t)(lucy_StringType* self);

typedef bool
(*LUCY_StringType_Binary_t)(lucy_StringType* self);

typedef int32_t
(*LUCY_StringType_Compare_Values_t)(lucy_StringType* self, cfish_Obj* a, cfish_Obj* b);

typedef lucy_TermStepper*
(*LUCY_StringType_Make_Term_Stepper_t)(lucy_StringType* self);

typedef int8_t
(*LUCY_StringType_Primitive_ID_t)(lucy_StringType* self);

typedef cfish_Hash*
(*LUCY_StringType_Dump_For_Schema_t)(lucy_StringType* self);

typedef cfish_Hash*
(*LUCY_StringType_Dump_t)(lucy_StringType* self);

typedef lucy_StringType*
(*LUCY_StringType_Load_t)(lucy_StringType* self, cfish_Obj* dump);

typedef lucy_Similarity*
(*LUCY_StringType_Make_Similarity_t)(lucy_StringType* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_StringType_get_class(lucy_StringType *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_StringType_get_class_name(lucy_StringType *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_StringType_is_a(lucy_StringType *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_StringType_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_StringType_To_Host(lucy_StringType* self, void* vcache) {
    const LUCY_StringType_To_Host_t method = (LUCY_StringType_To_Host_t)cfish_obj_method(self, LUCY_StringType_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_StringType_Clone(lucy_StringType* self) {
    const LUCY_StringType_Clone_t method = (LUCY_StringType_Clone_t)cfish_obj_method(self, LUCY_StringType_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_StringType_Equals(lucy_StringType* self, cfish_Obj* other) {
    const LUCY_StringType_Equals_t method = (LUCY_StringType_Equals_t)cfish_obj_method(self, LUCY_StringType_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_StringType_Compare_To(lucy_StringType* self, cfish_Obj* other) {
    const LUCY_StringType_Compare_To_t method = (LUCY_StringType_Compare_To_t)cfish_obj_method(self, LUCY_StringType_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_StringType_Destroy(lucy_StringType* self) {
    const LUCY_StringType_Destroy_t method = (LUCY_StringType_Destroy_t)cfish_obj_method(self, LUCY_StringType_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_StringType_To_String(lucy_StringType* self) {
    const LUCY_StringType_To_String_t method = (LUCY_StringType_To_String_t)cfish_obj_method(self, LUCY_StringType_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Set_Boost_OFFSET;
static CFISH_INLINE void
LUCY_StringType_Set_Boost(lucy_StringType* self, float boost) {
    const LUCY_StringType_Set_Boost_t method = (LUCY_StringType_Set_Boost_t)cfish_obj_method(self, LUCY_StringType_Set_Boost_OFFSET);
    method(self, boost);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Get_Boost_OFFSET;
static CFISH_INLINE float
LUCY_StringType_Get_Boost(lucy_StringType* self) {
    const LUCY_StringType_Get_Boost_t method = (LUCY_StringType_Get_Boost_t)cfish_obj_method(self, LUCY_StringType_Get_Boost_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Set_Indexed_OFFSET;
static CFISH_INLINE void
LUCY_StringType_Set_Indexed(lucy_StringType* self, bool indexed) {
    const LUCY_StringType_Set_Indexed_t method = (LUCY_StringType_Set_Indexed_t)cfish_obj_method(self, LUCY_StringType_Set_Indexed_OFFSET);
    method(self, indexed);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Indexed_OFFSET;
static CFISH_INLINE bool
LUCY_StringType_Indexed(lucy_StringType* self) {
    const LUCY_StringType_Indexed_t method = (LUCY_StringType_Indexed_t)cfish_obj_method(self, LUCY_StringType_Indexed_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Set_Stored_OFFSET;
static CFISH_INLINE void
LUCY_StringType_Set_Stored(lucy_StringType* self, bool stored) {
    const LUCY_StringType_Set_Stored_t method = (LUCY_StringType_Set_Stored_t)cfish_obj_method(self, LUCY_StringType_Set_Stored_OFFSET);
    method(self, stored);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Stored_OFFSET;
static CFISH_INLINE bool
LUCY_StringType_Stored(lucy_StringType* self) {
    const LUCY_StringType_Stored_t method = (LUCY_StringType_Stored_t)cfish_obj_method(self, LUCY_StringType_Stored_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Set_Sortable_OFFSET;
static CFISH_INLINE void
LUCY_StringType_Set_Sortable(lucy_StringType* self, bool sortable) {
    const LUCY_StringType_Set_Sortable_t method = (LUCY_StringType_Set_Sortable_t)cfish_obj_method(self, LUCY_StringType_Set_Sortable_OFFSET);
    method(self, sortable);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Sortable_OFFSET;
static CFISH_INLINE bool
LUCY_StringType_Sortable(lucy_StringType* self) {
    const LUCY_StringType_Sortable_t method = (LUCY_StringType_Sortable_t)cfish_obj_method(self, LUCY_StringType_Sortable_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Binary_OFFSET;
static CFISH_INLINE bool
LUCY_StringType_Binary(lucy_StringType* self) {
    const LUCY_StringType_Binary_t method = (LUCY_StringType_Binary_t)cfish_obj_method(self, LUCY_StringType_Binary_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Compare_Values_OFFSET;
static CFISH_INLINE int32_t
LUCY_StringType_Compare_Values(lucy_StringType* self, cfish_Obj* a, cfish_Obj* b) {
    const LUCY_StringType_Compare_Values_t method = (LUCY_StringType_Compare_Values_t)cfish_obj_method(self, LUCY_StringType_Compare_Values_OFFSET);
    return method(self, a, b);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Make_Term_Stepper_OFFSET;
static CFISH_INLINE lucy_TermStepper*
LUCY_StringType_Make_Term_Stepper(lucy_StringType* self) {
    const LUCY_StringType_Make_Term_Stepper_t method = (LUCY_StringType_Make_Term_Stepper_t)cfish_obj_method(self, LUCY_StringType_Make_Term_Stepper_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Primitive_ID_OFFSET;
static CFISH_INLINE int8_t
LUCY_StringType_Primitive_ID(lucy_StringType* self) {
    const LUCY_StringType_Primitive_ID_t method = (LUCY_StringType_Primitive_ID_t)cfish_obj_method(self, LUCY_StringType_Primitive_ID_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Dump_For_Schema_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_StringType_Dump_For_Schema(lucy_StringType* self) {
    const LUCY_StringType_Dump_For_Schema_t method = (LUCY_StringType_Dump_For_Schema_t)cfish_obj_method(self, LUCY_StringType_Dump_For_Schema_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Dump_OFFSET;
static CFISH_INLINE cfish_Hash*
LUCY_StringType_Dump(lucy_StringType* self) {
    const LUCY_StringType_Dump_t method = (LUCY_StringType_Dump_t)cfish_obj_method(self, LUCY_StringType_Dump_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Load_OFFSET;
static CFISH_INLINE lucy_StringType*
LUCY_StringType_Load(lucy_StringType* self, cfish_Obj* dump) {
    const LUCY_StringType_Load_t method = (LUCY_StringType_Load_t)cfish_obj_method(self, LUCY_StringType_Load_OFFSET);
    return method(self, dump);
}

extern LUCY_VISIBLE uint32_t LUCY_StringType_Make_Similarity_OFFSET;
static CFISH_INLINE lucy_Similarity*
LUCY_StringType_Make_Similarity(lucy_StringType* self) {
    const LUCY_StringType_Make_Similarity_t method = (LUCY_StringType_Make_Similarity_t)cfish_obj_method(self, LUCY_StringType_Make_Similarity_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_StringType_Make_Similarity_OVERRIDE NULL
#else
lucy_Similarity*
Lucy_StringType_Make_Similarity_OVERRIDE(lucy_StringType* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define StringType lucy_StringType
  #define STRINGTYPE LUCY_STRINGTYPE
  #define StringType_new lucy_StringType_new
  #define StringType_init lucy_StringType_init
  #define StringType_init2 lucy_StringType_init2
  #define StringType_get_class lucy_StringType_get_class
  #define StringType_get_class_name lucy_StringType_get_class_name
  #define StringType_is_a lucy_StringType_is_a
  #define StringType_Make_Similarity_IMP LUCY_StringType_Make_Similarity_IMP
  #define StringType_Dump_For_Schema_IMP LUCY_StringType_Dump_For_Schema_IMP
  #define StringType_Dump_IMP LUCY_StringType_Dump_IMP
  #define StringType_Load_IMP LUCY_StringType_Load_IMP
  #define StringType_Equals_IMP LUCY_StringType_Equals_IMP
  #define StringType_To_Host LUCY_StringType_To_Host
  #define StringType_To_Host_t LUCY_StringType_To_Host_t
  #define StringType_Clone LUCY_StringType_Clone
  #define StringType_Clone_t LUCY_StringType_Clone_t
  #define StringType_Equals LUCY_StringType_Equals
  #define StringType_Equals_t LUCY_StringType_Equals_t
  #define StringType_Compare_To LUCY_StringType_Compare_To
  #define StringType_Compare_To_t LUCY_StringType_Compare_To_t
  #define StringType_Destroy LUCY_StringType_Destroy
  #define StringType_Destroy_t LUCY_StringType_Destroy_t
  #define StringType_To_String LUCY_StringType_To_String
  #define StringType_To_String_t LUCY_StringType_To_String_t
  #define StringType_Set_Boost LUCY_StringType_Set_Boost
  #define StringType_Set_Boost_t LUCY_StringType_Set_Boost_t
  #define StringType_Get_Boost LUCY_StringType_Get_Boost
  #define StringType_Get_Boost_t LUCY_StringType_Get_Boost_t
  #define StringType_Set_Indexed LUCY_StringType_Set_Indexed
  #define StringType_Set_Indexed_t LUCY_StringType_Set_Indexed_t
  #define StringType_Indexed LUCY_StringType_Indexed
  #define StringType_Indexed_t LUCY_StringType_Indexed_t
  #define StringType_Set_Stored LUCY_StringType_Set_Stored
  #define StringType_Set_Stored_t LUCY_StringType_Set_Stored_t
  #define StringType_Stored LUCY_StringType_Stored
  #define StringType_Stored_t LUCY_StringType_Stored_t
  #define StringType_Set_Sortable LUCY_StringType_Set_Sortable
  #define StringType_Set_Sortable_t LUCY_StringType_Set_Sortable_t
  #define StringType_Sortable LUCY_StringType_Sortable
  #define StringType_Sortable_t LUCY_StringType_Sortable_t
  #define StringType_Binary LUCY_StringType_Binary
  #define StringType_Binary_t LUCY_StringType_Binary_t
  #define StringType_Compare_Values LUCY_StringType_Compare_Values
  #define StringType_Compare_Values_t LUCY_StringType_Compare_Values_t
  #define StringType_Make_Term_Stepper LUCY_StringType_Make_Term_Stepper
  #define StringType_Make_Term_Stepper_t LUCY_StringType_Make_Term_Stepper_t
  #define StringType_Primitive_ID LUCY_StringType_Primitive_ID
  #define StringType_Primitive_ID_t LUCY_StringType_Primitive_ID_t
  #define StringType_Dump_For_Schema LUCY_StringType_Dump_For_Schema
  #define StringType_Dump_For_Schema_t LUCY_StringType_Dump_For_Schema_t
  #define StringType_Dump LUCY_StringType_Dump
  #define StringType_Dump_t LUCY_StringType_Dump_t
  #define StringType_Load LUCY_StringType_Load
  #define StringType_Load_t LUCY_StringType_Load_t
  #define StringType_Make_Similarity LUCY_StringType_Make_Similarity
  #define StringType_Make_Similarity_t LUCY_StringType_Make_Similarity_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_PLAN_STRINGTYPE */



