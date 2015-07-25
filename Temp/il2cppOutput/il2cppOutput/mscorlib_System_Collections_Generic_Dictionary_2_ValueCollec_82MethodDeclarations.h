#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Enumerator_t4569;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t4563;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31194_gshared (Enumerator_t4569 * __this, Dictionary_2_t4563 * ___host, MethodInfo* method);
#define Enumerator__ctor_m31194(__this, ___host, method) (( void (*) (Enumerator_t4569 *, Dictionary_2_t4563 *, MethodInfo*))Enumerator__ctor_m31194_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31195_gshared (Enumerator_t4569 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31195(__this, method) (( Object_t * (*) (Enumerator_t4569 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31195_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Dispose()
extern "C" void Enumerator_Dispose_m31196_gshared (Enumerator_t4569 * __this, MethodInfo* method);
#define Enumerator_Dispose_m31196(__this, method) (( void (*) (Enumerator_t4569 *, MethodInfo*))Enumerator_Dispose_m31196_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31197_gshared (Enumerator_t4569 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m31197(__this, method) (( bool (*) (Enumerator_t4569 *, MethodInfo*))Enumerator_MoveNext_m31197_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" KeyValuePair_2_t1273  Enumerator_get_Current_m31198_gshared (Enumerator_t4569 * __this, MethodInfo* method);
#define Enumerator_get_Current_m31198(__this, method) (( KeyValuePair_2_t1273  (*) (Enumerator_t4569 *, MethodInfo*))Enumerator_get_Current_m31198_gshared)(__this, method)
