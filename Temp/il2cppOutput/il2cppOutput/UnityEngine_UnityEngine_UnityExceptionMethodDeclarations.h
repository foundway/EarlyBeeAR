﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UnityException
struct UnityException_t518;
// System.String
struct String_t;
// System.Exception
struct Exception_t180;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m7129 (UnityException_t518 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m7130 (UnityException_t518 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m7131 (UnityException_t518 * __this, String_t* ___message, Exception_t180 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m7132 (UnityException_t518 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
