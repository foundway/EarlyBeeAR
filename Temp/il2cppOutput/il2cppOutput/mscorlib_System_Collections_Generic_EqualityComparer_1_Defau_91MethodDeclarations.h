#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t4799;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m32891_gshared (DefaultComparer_t4799 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m32891(__this, method) (( void (*) (DefaultComparer_t4799 *, MethodInfo*))DefaultComparer__ctor_m32891_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32892_gshared (DefaultComparer_t4799 * __this, DateTimeOffset_t1274  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m32892(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4799 *, DateTimeOffset_t1274 , MethodInfo*))DefaultComparer_GetHashCode_m32892_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32893_gshared (DefaultComparer_t4799 * __this, DateTimeOffset_t1274  ___x, DateTimeOffset_t1274  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m32893(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4799 *, DateTimeOffset_t1274 , DateTimeOffset_t1274 , MethodInfo*))DefaultComparer_Equals_m32893_gshared)(__this, ___x, ___y, method)
