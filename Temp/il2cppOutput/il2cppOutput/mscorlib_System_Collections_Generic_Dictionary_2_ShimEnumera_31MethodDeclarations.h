#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t4385;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t4371;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m29442_gshared (ShimEnumerator_t4385 * __this, Dictionary_2_t4371 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m29442(__this, ___host, method) (( void (*) (ShimEnumerator_t4385 *, Dictionary_2_t4371 *, MethodInfo*))ShimEnumerator__ctor_m29442_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m29443_gshared (ShimEnumerator_t4385 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m29443(__this, method) (( bool (*) (ShimEnumerator_t4385 *, MethodInfo*))ShimEnumerator_MoveNext_m29443_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m29444_gshared (ShimEnumerator_t4385 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m29444(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t4385 *, MethodInfo*))ShimEnumerator_get_Entry_m29444_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m29445_gshared (ShimEnumerator_t4385 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m29445(__this, method) (( Object_t * (*) (ShimEnumerator_t4385 *, MethodInfo*))ShimEnumerator_get_Key_m29445_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m29446_gshared (ShimEnumerator_t4385 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m29446(__this, method) (( Object_t * (*) (ShimEnumerator_t4385 *, MethodInfo*))ShimEnumerator_get_Value_m29446_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m29447_gshared (ShimEnumerator_t4385 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m29447(__this, method) (( Object_t * (*) (ShimEnumerator_t4385 *, MethodInfo*))ShimEnumerator_get_Current_m29447_gshared)(__this, method)
