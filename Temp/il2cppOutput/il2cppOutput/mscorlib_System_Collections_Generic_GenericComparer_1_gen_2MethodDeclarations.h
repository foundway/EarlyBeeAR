#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t2584;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m14735_gshared (GenericComparer_1_t2584 * __this, MethodInfo* method);
#define GenericComparer_1__ctor_m14735(__this, method) (( void (*) (GenericComparer_1_t2584 *, MethodInfo*))GenericComparer_1__ctor_m14735_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m32915_gshared (GenericComparer_1_t2584 * __this, TimeSpan_t868  ___x, TimeSpan_t868  ___y, MethodInfo* method);
#define GenericComparer_1_Compare_m32915(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t2584 *, TimeSpan_t868 , TimeSpan_t868 , MethodInfo*))GenericComparer_1_Compare_m32915_gshared)(__this, ___x, ___y, method)
