#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ShimEnumerator_t4572;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t4563;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m31211_gshared (ShimEnumerator_t4572 * __this, Dictionary_2_t4563 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m31211(__this, ___host, method) (( void (*) (ShimEnumerator_t4572 *, Dictionary_2_t4563 *, MethodInfo*))ShimEnumerator__ctor_m31211_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m31212_gshared (ShimEnumerator_t4572 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m31212(__this, method) (( bool (*) (ShimEnumerator_t4572 *, MethodInfo*))ShimEnumerator_MoveNext_m31212_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m31213_gshared (ShimEnumerator_t4572 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m31213(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t4572 *, MethodInfo*))ShimEnumerator_get_Entry_m31213_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m31214_gshared (ShimEnumerator_t4572 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m31214(__this, method) (( Object_t * (*) (ShimEnumerator_t4572 *, MethodInfo*))ShimEnumerator_get_Key_m31214_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m31215_gshared (ShimEnumerator_t4572 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m31215(__this, method) (( Object_t * (*) (ShimEnumerator_t4572 *, MethodInfo*))ShimEnumerator_get_Value_m31215_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m31216_gshared (ShimEnumerator_t4572 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m31216(__this, method) (( Object_t * (*) (ShimEnumerator_t4572 *, MethodInfo*))ShimEnumerator_get_Current_m31216_gshared)(__this, method)
