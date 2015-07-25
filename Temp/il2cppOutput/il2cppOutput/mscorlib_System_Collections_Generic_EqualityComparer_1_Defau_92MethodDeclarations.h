#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t4803;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m32912_gshared (DefaultComparer_t4803 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m32912(__this, method) (( void (*) (DefaultComparer_t4803 *, MethodInfo*))DefaultComparer__ctor_m32912_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m32913_gshared (DefaultComparer_t4803 * __this, Guid_t1275  ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m32913(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4803 *, Guid_t1275 , MethodInfo*))DefaultComparer_GetHashCode_m32913_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m32914_gshared (DefaultComparer_t4803 * __this, Guid_t1275  ___x, Guid_t1275  ___y, MethodInfo* method);
#define DefaultComparer_Equals_m32914(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4803 *, Guid_t1275 , Guid_t1275 , MethodInfo*))DefaultComparer_Equals_m32914_gshared)(__this, ___x, ___y, method)
