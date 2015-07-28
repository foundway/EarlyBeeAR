﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
struct GenericEqualityComparer_1_t3221;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m16948_gshared (GenericEqualityComparer_1_t3221 * __this, MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m16948(__this, method) (( void (*) (GenericEqualityComparer_1_t3221 *, MethodInfo*))GenericEqualityComparer_1__ctor_m16948_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m16950_gshared (GenericEqualityComparer_1_t3221 * __this, Object_t * ___obj, MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m16950(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t3221 *, Object_t *, MethodInfo*))GenericEqualityComparer_1_GetHashCode_m16950_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m16952_gshared (GenericEqualityComparer_1_t3221 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m16952(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t3221 *, Object_t *, Object_t *, MethodInfo*))GenericEqualityComparer_1_Equals_m16952_gshared)(__this, ___x, ___y, method)