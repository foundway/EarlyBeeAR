﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Comparer
struct Comparer_t2119;
// System.Globalization.CultureInfo
struct CultureInfo_t1255;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Comparer::.ctor()
extern "C" void Comparer__ctor_m11573 (Comparer_t2119 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::.ctor(System.Globalization.CultureInfo)
extern "C" void Comparer__ctor_m11574 (Comparer_t2119 * __this, CultureInfo_t1255 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::.cctor()
extern "C" void Comparer__cctor_m11575 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Comparer::Compare(System.Object,System.Object)
extern "C" int32_t Comparer_Compare_m11576 (Comparer_t2119 * __this, Object_t * ___a, Object_t * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Comparer::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Comparer_GetObjectData_m11577 (Comparer_t2119 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;