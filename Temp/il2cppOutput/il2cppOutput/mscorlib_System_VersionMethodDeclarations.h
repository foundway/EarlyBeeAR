﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Version
struct Version_t214;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Version::.ctor()
extern "C" void Version__ctor_m14501 (Version_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
extern "C" void Version__ctor_m918 (Version_t214 * __this, String_t* ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C" void Version__ctor_m8843 (Version_t214 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version__ctor_m14502 (Version_t214 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Version_CheckedSet_m14503 (Version_t214 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
extern "C" int32_t Version_get_Build_m14504 (Version_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
extern "C" int32_t Version_get_Major_m14505 (Version_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
extern "C" int32_t Version_get_Minor_m14506 (Version_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
extern "C" int32_t Version_get_Revision_m14507 (Version_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
extern "C" int32_t Version_CompareTo_m14508 (Version_t214 * __this, Object_t * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
extern "C" bool Version_Equals_m14509 (Version_t214 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C" int32_t Version_CompareTo_m14510 (Version_t214 * __this, Version_t214 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C" bool Version_Equals_m14511 (Version_t214 * __this, Version_t214 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
extern "C" int32_t Version_GetHashCode_m14512 (Version_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
extern "C" String_t* Version_ToString_m14513 (Version_t214 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
extern "C" Version_t214 * Version_CreateFromString_m14514 (Object_t * __this /* static, unused */, String_t* ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C" bool Version_op_Equality_m14515 (Object_t * __this /* static, unused */, Version_t214 * ___v1, Version_t214 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C" bool Version_op_Inequality_m14516 (Object_t * __this /* static, unused */, Version_t214 * ___v1, Version_t214 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C" bool Version_op_LessThan_m919 (Object_t * __this /* static, unused */, Version_t214 * ___v1, Version_t214 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
