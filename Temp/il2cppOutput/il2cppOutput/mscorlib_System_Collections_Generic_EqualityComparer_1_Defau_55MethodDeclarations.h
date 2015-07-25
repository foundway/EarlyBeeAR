#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
struct DefaultComparer_t4083;
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m26194_gshared (DefaultComparer_t4083 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m26194(__this, method) (( void (*) (DefaultComparer_t4083 *, MethodInfo*))DefaultComparer__ctor_m26194_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26195_gshared (DefaultComparer_t4083 * __this, TargetSearchResult_t803  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m26195(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4083 *, TargetSearchResult_t803 , MethodInfo*))DefaultComparer_GetHashCode_m26195_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26196_gshared (DefaultComparer_t4083 * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m26196(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4083 *, TargetSearchResult_t803 , TargetSearchResult_t803 , MethodInfo*))DefaultComparer_Equals_m26196_gshared)(__this, ___x, ___y, method)
