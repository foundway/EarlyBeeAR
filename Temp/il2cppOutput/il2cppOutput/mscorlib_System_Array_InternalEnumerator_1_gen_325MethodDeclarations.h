#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Decimal>
struct InternalEnumerator_1_t4771;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m32662_gshared (InternalEnumerator_1_t4771 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m32662(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4771 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m32662_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32663_gshared (InternalEnumerator_1_t4771 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32663(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4771 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32663_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m32664_gshared (InternalEnumerator_1_t4771 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m32664(__this, method) (( void (*) (InternalEnumerator_1_t4771 *, MethodInfo*))InternalEnumerator_1_Dispose_m32664_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m32665_gshared (InternalEnumerator_1_t4771 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m32665(__this, method) (( bool (*) (InternalEnumerator_1_t4771 *, MethodInfo*))InternalEnumerator_1_MoveNext_m32665_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1261  InternalEnumerator_1_get_Current_m32666_gshared (InternalEnumerator_1_t4771 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m32666(__this, method) (( Decimal_t1261  (*) (InternalEnumerator_1_t4771 *, MethodInfo*))InternalEnumerator_1_get_Current_m32666_gshared)(__this, method)
