#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.TimeSpan>
struct Comparer_1_t4804;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
extern "C" void Comparer_1__ctor_m32916_gshared (Comparer_1_t4804 * __this, MethodInfo* method);
#define Comparer_1__ctor_m32916(__this, method) (( void (*) (Comparer_1_t4804 *, MethodInfo*))Comparer_1__ctor_m32916_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern "C" void Comparer_1__cctor_m32917_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Comparer_1__cctor_m32917(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, MethodInfo*))Comparer_1__cctor_m32917_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m32918_gshared (Comparer_1_t4804 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m32918(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t4804 *, Object_t *, Object_t *, MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m32918_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern "C" Comparer_1_t4804 * Comparer_1_get_Default_m32919_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define Comparer_1_get_Default_m32919(__this /* static, unused */, method) (( Comparer_1_t4804 * (*) (Object_t * /* static, unused */, MethodInfo*))Comparer_1_get_Default_m32919_gshared)(__this /* static, unused */, method)
