#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t4793;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m32865_gshared (DefaultComparer_t4793 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m32865(__this, method) (( void (*) (DefaultComparer_t4793 *, MethodInfo*))DefaultComparer__ctor_m32865_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m32866_gshared (DefaultComparer_t4793 * __this, DateTime_t700  ___x, DateTime_t700  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m32866(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4793 *, DateTime_t700 , DateTime_t700 , MethodInfo*))DefaultComparer_Compare_m32866_gshared)(__this, ___x, ___y, method)
