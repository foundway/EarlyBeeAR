#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
struct DefaultComparer_t4449;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::.ctor()
extern "C" void DefaultComparer__ctor_m30051_gshared (DefaultComparer_t4449 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m30051(__this, method) (( void (*) (DefaultComparer_t4449 *, MethodInfo*))DefaultComparer__ctor_m30051_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m30052_gshared (DefaultComparer_t4449 * __this, uint64_t ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m30052(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t4449 *, uint64_t, MethodInfo*))DefaultComparer_GetHashCode_m30052_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m30053_gshared (DefaultComparer_t4449 * __this, uint64_t ___x, uint64_t ___y, MethodInfo* method);
#define DefaultComparer_Equals_m30053(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t4449 *, uint64_t, uint64_t, MethodInfo*))DefaultComparer_Equals_m30053_gshared)(__this, ___x, ___y, method)
