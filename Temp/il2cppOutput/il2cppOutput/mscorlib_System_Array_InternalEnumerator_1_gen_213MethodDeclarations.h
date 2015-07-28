#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct InternalEnumerator_1_t4310;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m28552_gshared (InternalEnumerator_1_t4310 * __this, Array_t * ___array, MethodInfo* method);
#define InternalEnumerator_1__ctor_m28552(__this, ___array, method) (( void (*) (InternalEnumerator_1_t4310 *, Array_t *, MethodInfo*))InternalEnumerator_1__ctor_m28552_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28553_gshared (InternalEnumerator_1_t4310 * __this, MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28553(__this, method) (( Object_t * (*) (InternalEnumerator_1_t4310 *, MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28553_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m28554_gshared (InternalEnumerator_1_t4310 * __this, MethodInfo* method);
#define InternalEnumerator_1_Dispose_m28554(__this, method) (( void (*) (InternalEnumerator_1_t4310 *, MethodInfo*))InternalEnumerator_1_Dispose_m28554_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m28555_gshared (InternalEnumerator_1_t4310 * __this, MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m28555(__this, method) (( bool (*) (InternalEnumerator_1_t4310 *, MethodInfo*))InternalEnumerator_1_MoveNext_m28555_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current()
extern "C" KeyValuePair_2_t1246  InternalEnumerator_1_get_Current_m28556_gshared (InternalEnumerator_1_t4310 * __this, MethodInfo* method);
#define InternalEnumerator_1_get_Current_m28556(__this, method) (( KeyValuePair_2_t1246  (*) (InternalEnumerator_1_t4310 *, MethodInfo*))InternalEnumerator_1_get_Current_m28556_gshared)(__this, method)
