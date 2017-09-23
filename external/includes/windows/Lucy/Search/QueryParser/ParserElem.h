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


#ifndef H_LUCY_SEARCH_QUERYPARSER_PARSERELEM
#define H_LUCY_SEARCH_QUERYPARSER_PARSERELEM 1


#ifdef __cplusplus
extern "C" {
#endif

#include "lucy_parcel.h"

/* Include the header for this class's parent. 
 */

#include "Clownfish\Obj.h"

/* Define the struct layout for instances of this class.
 */

#ifdef C_LUCY_PARSERELEM
extern uint32_t lucy_ParserElem_IVARS_OFFSET;
typedef struct lucy_ParserElemIVARS lucy_ParserElemIVARS;
static CFISH_INLINE lucy_ParserElemIVARS*
lucy_ParserElem_IVARS(lucy_ParserElem *self) {
   char *ptr = (char*)self + lucy_ParserElem_IVARS_OFFSET;
   return (lucy_ParserElemIVARS*)ptr;
}
#ifdef LUCY_USE_SHORT_NAMES
  #define ParserElemIVARS lucy_ParserElemIVARS
  #define ParserElem_IVARS lucy_ParserElem_IVARS
#endif

struct lucy_ParserElemIVARS {
    uint32_t type;
    uint32_t occur;
    cfish_Obj* value;
};

#endif /* C_LUCY_PARSERELEM */

/* Declare this class's inert variables.
 */



/* Declare both this class's inert functions and the C functions which
 * implement this class's dynamic methods.
 */

LUCY_VISIBLE lucy_ParserElem*
lucy_ParserElem_new(uint32_t type, cfish_Obj* value);

LUCY_VISIBLE lucy_ParserElem*
lucy_ParserElem_init(lucy_ParserElem* self, uint32_t type, cfish_Obj* value);

void
LUCY_ParserElem_Destroy_IMP(lucy_ParserElem* self);

void
LUCY_ParserElem_Set_Value_IMP(lucy_ParserElem* self, cfish_Obj* value);

cfish_Obj*
LUCY_ParserElem_As_IMP(lucy_ParserElem* self, cfish_Class* klass);

uint32_t
LUCY_ParserElem_Get_Type_IMP(lucy_ParserElem* self);

void
LUCY_ParserElem_Negate_IMP(lucy_ParserElem* self);

void
LUCY_ParserElem_Require_IMP(lucy_ParserElem* self);

void
LUCY_ParserElem_Unrequire_IMP(lucy_ParserElem* self);

bool
LUCY_ParserElem_Required_IMP(lucy_ParserElem* self);

bool
LUCY_ParserElem_Optional_IMP(lucy_ParserElem* self);

bool
LUCY_ParserElem_Negated_IMP(lucy_ParserElem* self);



/* Define typedefs for each dynamic method, allowing us to cast generic
 * pointers to the appropriate function pointer type more cleanly.
 */

typedef void*
(*LUCY_ParserElem_To_Host_t)(lucy_ParserElem* self, void* vcache);

typedef cfish_Obj*
(*LUCY_ParserElem_Clone_t)(lucy_ParserElem* self);

typedef bool
(*LUCY_ParserElem_Equals_t)(lucy_ParserElem* self, cfish_Obj* other);

typedef int32_t
(*LUCY_ParserElem_Compare_To_t)(lucy_ParserElem* self, cfish_Obj* other);

typedef void
(*LUCY_ParserElem_Destroy_t)(lucy_ParserElem* self);

typedef cfish_String*
(*LUCY_ParserElem_To_String_t)(lucy_ParserElem* self);

typedef void
(*LUCY_ParserElem_Set_Value_t)(lucy_ParserElem* self, cfish_Obj* value);

typedef cfish_Obj*
(*LUCY_ParserElem_As_t)(lucy_ParserElem* self, cfish_Class* klass);

typedef uint32_t
(*LUCY_ParserElem_Get_Type_t)(lucy_ParserElem* self);

typedef void
(*LUCY_ParserElem_Negate_t)(lucy_ParserElem* self);

typedef void
(*LUCY_ParserElem_Require_t)(lucy_ParserElem* self);

typedef void
(*LUCY_ParserElem_Unrequire_t)(lucy_ParserElem* self);

typedef bool
(*LUCY_ParserElem_Required_t)(lucy_ParserElem* self);

typedef bool
(*LUCY_ParserElem_Optional_t)(lucy_ParserElem* self);

typedef bool
(*LUCY_ParserElem_Negated_t)(lucy_ParserElem* self);



/* Define type-safe wrappers for inert functions of Obj.
 */

static CFISH_INLINE cfish_Class*
lucy_ParserElem_get_class(lucy_ParserElem *self) {
    return cfish_Obj_get_class((cfish_Obj*)self);
}

static CFISH_INLINE cfish_String*
lucy_ParserElem_get_class_name(lucy_ParserElem *self) {
    return cfish_Obj_get_class_name((cfish_Obj*)self);
}

static CFISH_INLINE bool
lucy_ParserElem_is_a(lucy_ParserElem *self, cfish_Class *ancestor) {
    return cfish_Obj_is_a((cfish_Obj*)self, ancestor);
}


/* Define the inline functions which implement this class's virtual methods.
 */

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_To_Host_OFFSET;
static CFISH_INLINE void*
LUCY_ParserElem_To_Host(lucy_ParserElem* self, void* vcache) {
    const LUCY_ParserElem_To_Host_t method = (LUCY_ParserElem_To_Host_t)cfish_obj_method(self, LUCY_ParserElem_To_Host_OFFSET);
    return method(self, vcache);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Clone_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ParserElem_Clone(lucy_ParserElem* self) {
    const LUCY_ParserElem_Clone_t method = (LUCY_ParserElem_Clone_t)cfish_obj_method(self, LUCY_ParserElem_Clone_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Equals_OFFSET;
static CFISH_INLINE bool
LUCY_ParserElem_Equals(lucy_ParserElem* self, cfish_Obj* other) {
    const LUCY_ParserElem_Equals_t method = (LUCY_ParserElem_Equals_t)cfish_obj_method(self, LUCY_ParserElem_Equals_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Compare_To_OFFSET;
static CFISH_INLINE int32_t
LUCY_ParserElem_Compare_To(lucy_ParserElem* self, cfish_Obj* other) {
    const LUCY_ParserElem_Compare_To_t method = (LUCY_ParserElem_Compare_To_t)cfish_obj_method(self, LUCY_ParserElem_Compare_To_OFFSET);
    return method(self, other);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Destroy_OFFSET;
static CFISH_INLINE void
LUCY_ParserElem_Destroy(lucy_ParserElem* self) {
    const LUCY_ParserElem_Destroy_t method = (LUCY_ParserElem_Destroy_t)cfish_obj_method(self, LUCY_ParserElem_Destroy_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_To_String_OFFSET;
static CFISH_INLINE cfish_String*
LUCY_ParserElem_To_String(lucy_ParserElem* self) {
    const LUCY_ParserElem_To_String_t method = (LUCY_ParserElem_To_String_t)cfish_obj_method(self, LUCY_ParserElem_To_String_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Set_Value_OFFSET;
static CFISH_INLINE void
LUCY_ParserElem_Set_Value(lucy_ParserElem* self, cfish_Obj* value) {
    const LUCY_ParserElem_Set_Value_t method = (LUCY_ParserElem_Set_Value_t)cfish_obj_method(self, LUCY_ParserElem_Set_Value_OFFSET);
    method(self, value);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_As_OFFSET;
static CFISH_INLINE cfish_Obj*
LUCY_ParserElem_As(lucy_ParserElem* self, cfish_Class* klass) {
    const LUCY_ParserElem_As_t method = (LUCY_ParserElem_As_t)cfish_obj_method(self, LUCY_ParserElem_As_OFFSET);
    return method(self, klass);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Get_Type_OFFSET;
static CFISH_INLINE uint32_t
LUCY_ParserElem_Get_Type(lucy_ParserElem* self) {
    const LUCY_ParserElem_Get_Type_t method = (LUCY_ParserElem_Get_Type_t)cfish_obj_method(self, LUCY_ParserElem_Get_Type_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Negate_OFFSET;
static CFISH_INLINE void
LUCY_ParserElem_Negate(lucy_ParserElem* self) {
    const LUCY_ParserElem_Negate_t method = (LUCY_ParserElem_Negate_t)cfish_obj_method(self, LUCY_ParserElem_Negate_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Require_OFFSET;
static CFISH_INLINE void
LUCY_ParserElem_Require(lucy_ParserElem* self) {
    const LUCY_ParserElem_Require_t method = (LUCY_ParserElem_Require_t)cfish_obj_method(self, LUCY_ParserElem_Require_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Unrequire_OFFSET;
static CFISH_INLINE void
LUCY_ParserElem_Unrequire(lucy_ParserElem* self) {
    const LUCY_ParserElem_Unrequire_t method = (LUCY_ParserElem_Unrequire_t)cfish_obj_method(self, LUCY_ParserElem_Unrequire_OFFSET);
    method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Required_OFFSET;
static CFISH_INLINE bool
LUCY_ParserElem_Required(lucy_ParserElem* self) {
    const LUCY_ParserElem_Required_t method = (LUCY_ParserElem_Required_t)cfish_obj_method(self, LUCY_ParserElem_Required_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Optional_OFFSET;
static CFISH_INLINE bool
LUCY_ParserElem_Optional(lucy_ParserElem* self) {
    const LUCY_ParserElem_Optional_t method = (LUCY_ParserElem_Optional_t)cfish_obj_method(self, LUCY_ParserElem_Optional_OFFSET);
    return method(self);
}

extern LUCY_VISIBLE uint32_t LUCY_ParserElem_Negated_OFFSET;
static CFISH_INLINE bool
LUCY_ParserElem_Negated(lucy_ParserElem* self) {
    const LUCY_ParserElem_Negated_t method = (LUCY_ParserElem_Negated_t)cfish_obj_method(self, LUCY_ParserElem_Negated_OFFSET);
    return method(self);
}



/* Declare callbacks for wrapping host overrides.
 */

#ifdef CFISH_NO_DYNAMIC_OVERRIDES
#define Lucy_ParserElem_Set_Value_OVERRIDE NULL
#define Lucy_ParserElem_As_OVERRIDE NULL
#define Lucy_ParserElem_Get_Type_OVERRIDE NULL
#define Lucy_ParserElem_Negate_OVERRIDE NULL
#define Lucy_ParserElem_Require_OVERRIDE NULL
#define Lucy_ParserElem_Unrequire_OVERRIDE NULL
#define Lucy_ParserElem_Required_OVERRIDE NULL
#define Lucy_ParserElem_Optional_OVERRIDE NULL
#define Lucy_ParserElem_Negated_OVERRIDE NULL
#else
void
Lucy_ParserElem_Set_Value_OVERRIDE(lucy_ParserElem* self, cfish_Obj* value);
cfish_Obj*
Lucy_ParserElem_As_OVERRIDE(lucy_ParserElem* self, cfish_Class* klass);
uint32_t
Lucy_ParserElem_Get_Type_OVERRIDE(lucy_ParserElem* self);
void
Lucy_ParserElem_Negate_OVERRIDE(lucy_ParserElem* self);
void
Lucy_ParserElem_Require_OVERRIDE(lucy_ParserElem* self);
void
Lucy_ParserElem_Unrequire_OVERRIDE(lucy_ParserElem* self);
bool
Lucy_ParserElem_Required_OVERRIDE(lucy_ParserElem* self);
bool
Lucy_ParserElem_Optional_OVERRIDE(lucy_ParserElem* self);
bool
Lucy_ParserElem_Negated_OVERRIDE(lucy_ParserElem* self);
#endif


/* Define "short names" for this class's symbols.
 */

#ifdef LUCY_USE_SHORT_NAMES
  #define ParserElem lucy_ParserElem
  #define PARSERELEM LUCY_PARSERELEM
  #define ParserElem_new lucy_ParserElem_new
  #define ParserElem_init lucy_ParserElem_init
  #define ParserElem_get_class lucy_ParserElem_get_class
  #define ParserElem_get_class_name lucy_ParserElem_get_class_name
  #define ParserElem_is_a lucy_ParserElem_is_a
  #define ParserElem_Destroy_IMP LUCY_ParserElem_Destroy_IMP
  #define ParserElem_Set_Value_IMP LUCY_ParserElem_Set_Value_IMP
  #define ParserElem_As_IMP LUCY_ParserElem_As_IMP
  #define ParserElem_Get_Type_IMP LUCY_ParserElem_Get_Type_IMP
  #define ParserElem_Negate_IMP LUCY_ParserElem_Negate_IMP
  #define ParserElem_Require_IMP LUCY_ParserElem_Require_IMP
  #define ParserElem_Unrequire_IMP LUCY_ParserElem_Unrequire_IMP
  #define ParserElem_Required_IMP LUCY_ParserElem_Required_IMP
  #define ParserElem_Optional_IMP LUCY_ParserElem_Optional_IMP
  #define ParserElem_Negated_IMP LUCY_ParserElem_Negated_IMP
  #define ParserElem_To_Host LUCY_ParserElem_To_Host
  #define ParserElem_To_Host_t LUCY_ParserElem_To_Host_t
  #define ParserElem_Clone LUCY_ParserElem_Clone
  #define ParserElem_Clone_t LUCY_ParserElem_Clone_t
  #define ParserElem_Equals LUCY_ParserElem_Equals
  #define ParserElem_Equals_t LUCY_ParserElem_Equals_t
  #define ParserElem_Compare_To LUCY_ParserElem_Compare_To
  #define ParserElem_Compare_To_t LUCY_ParserElem_Compare_To_t
  #define ParserElem_Destroy LUCY_ParserElem_Destroy
  #define ParserElem_Destroy_t LUCY_ParserElem_Destroy_t
  #define ParserElem_To_String LUCY_ParserElem_To_String
  #define ParserElem_To_String_t LUCY_ParserElem_To_String_t
  #define ParserElem_Set_Value LUCY_ParserElem_Set_Value
  #define ParserElem_Set_Value_t LUCY_ParserElem_Set_Value_t
  #define ParserElem_As LUCY_ParserElem_As
  #define ParserElem_As_t LUCY_ParserElem_As_t
  #define ParserElem_Get_Type LUCY_ParserElem_Get_Type
  #define ParserElem_Get_Type_t LUCY_ParserElem_Get_Type_t
  #define ParserElem_Negate LUCY_ParserElem_Negate
  #define ParserElem_Negate_t LUCY_ParserElem_Negate_t
  #define ParserElem_Require LUCY_ParserElem_Require
  #define ParserElem_Require_t LUCY_ParserElem_Require_t
  #define ParserElem_Unrequire LUCY_ParserElem_Unrequire
  #define ParserElem_Unrequire_t LUCY_ParserElem_Unrequire_t
  #define ParserElem_Required LUCY_ParserElem_Required
  #define ParserElem_Required_t LUCY_ParserElem_Required_t
  #define ParserElem_Optional LUCY_ParserElem_Optional
  #define ParserElem_Optional_t LUCY_ParserElem_Optional_t
  #define ParserElem_Negated LUCY_ParserElem_Negated
  #define ParserElem_Negated_t LUCY_ParserElem_Negated_t
#endif /* LUCY_USE_SHORT_NAMES */





#ifdef __cplusplus
}
#endif

#endif /* H_LUCY_SEARCH_QUERYPARSER_PARSERELEM */



