#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4795;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m32874_gshared (DefaultComparer_t4795 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m32874(__this, method) (( void (*) (DefaultComparer_t4795 *, MethodInfo*))DefaultComparer__ctor_m32874_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32875_gshared (DefaultComparer_t4795 * __this, DateTime_t700  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m32875(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4795 *, DateTime_t700 , MethodInfo*))DefaultComparer_GetHashCode_m32875_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32876_gshared (DefaultComparer_t4795 * __this, DateTime_t700  ___x, DateTime_t700  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m32876(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4795 *, DateTime_t700 , DateTime_t700 , MethodInfo*))DefaultComparer_Equals_m32876_gshared)(__this, ___x, ___y, method)
