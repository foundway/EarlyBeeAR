#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t3157;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m16242_gshared (DefaultComparer_t3157 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m16242(__this, method) (( void (*) (DefaultComparer_t3157 *, MethodInfo*))DefaultComparer__ctor_m16242_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16243_gshared (DefaultComparer_t3157 * __this, RaycastResult_t182  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m16243(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3157 *, RaycastResult_t182 , MethodInfo*))DefaultComparer_GetHashCode_m16243_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16244_gshared (DefaultComparer_t3157 * __this, RaycastResult_t182  ___x, RaycastResult_t182  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m16244(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3157 *, RaycastResult_t182 , RaycastResult_t182 , MethodInfo*))DefaultComparer_Equals_m16244_gshared)(__this, ___x, ___y, method)
