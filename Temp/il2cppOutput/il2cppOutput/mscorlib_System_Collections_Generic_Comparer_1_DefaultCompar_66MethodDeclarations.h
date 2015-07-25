#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t4805;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m32920_gshared (DefaultComparer_t4805 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m32920(__this, method) (( void (*) (DefaultComparer_t4805 *, MethodInfo*))DefaultComparer__ctor_m32920_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m32921_gshared (DefaultComparer_t4805 * __this, TimeSpan_t868  ___x, TimeSpan_t868  ___y, MethodInfo* method);
#define DefaultComparer_Compare_m32921(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t4805 *, TimeSpan_t868 , TimeSpan_t868 , MethodInfo*))DefaultComparer_Compare_m32921_gshared)(__this, ___x, ___y, method)
