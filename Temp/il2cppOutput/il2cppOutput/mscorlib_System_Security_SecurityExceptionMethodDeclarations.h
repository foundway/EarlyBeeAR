﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityException
struct SecurityException_t2421;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t2420;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.SecurityException::.ctor()
extern "C" void SecurityException__ctor_m13438 (SecurityException_t2421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
extern "C" void SecurityException__ctor_m13439 (SecurityException_t2421 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SecurityException__ctor_m13440 (SecurityException_t2421 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
extern "C" Object_t * SecurityException_get_Demanded_m13441 (SecurityException_t2421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
extern "C" Object_t * SecurityException_get_FirstPermissionThatFailed_m13442 (SecurityException_t2421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
extern "C" String_t* SecurityException_get_PermissionState_m13443 (SecurityException_t2421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
extern "C" Type_t * SecurityException_get_PermissionType_m13444 (SecurityException_t2421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
extern "C" String_t* SecurityException_get_GrantedSet_m13445 (SecurityException_t2421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
extern "C" String_t* SecurityException_get_RefusedSet_m13446 (SecurityException_t2421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SecurityException_GetObjectData_m13447 (SecurityException_t2421 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
extern "C" String_t* SecurityException_ToString_m13448 (SecurityException_t2421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
