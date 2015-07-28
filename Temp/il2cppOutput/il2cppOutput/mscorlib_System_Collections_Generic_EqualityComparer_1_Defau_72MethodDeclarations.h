#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
struct DefaultComparer_t4363;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m29225_gshared (DefaultComparer_t4363 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m29225(__this, method) (( void (*) (DefaultComparer_t4363 *, MethodInfo*))DefaultComparer__ctor_m29225_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m29226_gshared (DefaultComparer_t4363 * __this, UILineInfo_t523  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m29226(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4363 *, UILineInfo_t523 , MethodInfo*))DefaultComparer_GetHashCode_m29226_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m29227_gshared (DefaultComparer_t4363 * __this, UILineInfo_t523  ___x, UILineInfo_t523  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m29227(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4363 *, UILineInfo_t523 , UILineInfo_t523 , MethodInfo*))DefaultComparer_Equals_m29227_gshared)(__this, ___x, ___y, method)
