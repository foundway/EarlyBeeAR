#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4807;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m32929_gshared (DefaultComparer_t4807 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m32929(__this, method) (( void (*) (DefaultComparer_t4807 *, MethodInfo*))DefaultComparer__ctor_m32929_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32930_gshared (DefaultComparer_t4807 * __this, TimeSpan_t868  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m32930(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4807 *, TimeSpan_t868 , MethodInfo*))DefaultComparer_GetHashCode_m32930_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32931_gshared (DefaultComparer_t4807 * __this, TimeSpan_t868  ___x, TimeSpan_t868  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m32931(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4807 *, TimeSpan_t868 , TimeSpan_t868 , MethodInfo*))DefaultComparer_Equals_m32931_gshared)(__this, ___x, ___y, method)
