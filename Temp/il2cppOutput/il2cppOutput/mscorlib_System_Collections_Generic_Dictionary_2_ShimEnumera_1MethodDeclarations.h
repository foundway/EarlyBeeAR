#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3378;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3364;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18478_gshared (ShimEnumerator_t3378 * __this, Dictionary_2_t3364 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m18478(__this, ___host, method) (( void (*) (ShimEnumerator_t3378 *, Dictionary_2_t3364 *, MethodInfo*))ShimEnumerator__ctor_m18478_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18479_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m18479(__this, method) (( bool (*) (ShimEnumerator_t3378 *, MethodInfo*))ShimEnumerator_MoveNext_m18479_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m18480_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m18480(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t3378 *, MethodInfo*))ShimEnumerator_get_Entry_m18480_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18481_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m18481(__this, method) (( Object_t * (*) (ShimEnumerator_t3378 *, MethodInfo*))ShimEnumerator_get_Key_m18481_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18482_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m18482(__this, method) (( Object_t * (*) (ShimEnumerator_t3378 *, MethodInfo*))ShimEnumerator_get_Value_m18482_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18483_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m18483(__this, method) (( Object_t * (*) (ShimEnumerator_t3378 *, MethodInfo*))ShimEnumerator_get_Current_m18483_gshared)(__this, method)
