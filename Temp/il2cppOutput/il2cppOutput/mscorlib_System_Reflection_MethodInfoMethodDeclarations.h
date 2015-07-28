﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t930;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MethodInfo::.ctor()
extern "C" void MethodInfo__ctor_m12468 (MethodInfo_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern "C" int32_t MethodInfo_get_MemberType_m12469 (MethodInfo_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern "C" Type_t * MethodInfo_get_ReturnType_m12470 (MethodInfo_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodInfo_MakeGenericMethod_m12471 (MethodInfo_t * __this, TypeU5BU5D_t930* ___typeArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern "C" TypeU5BU5D_t930* MethodInfo_GetGenericArguments_m12472 (MethodInfo_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C" bool MethodInfo_get_IsGenericMethod_m12473 (MethodInfo_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern "C" bool MethodInfo_get_IsGenericMethodDefinition_m12474 (MethodInfo_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern "C" bool MethodInfo_get_ContainsGenericParameters_m12475 (MethodInfo_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;