#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t4684;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4673;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32134_gshared (ShimEnumerator_t4684 * __this, Dictionary_2_t4673 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m32134(__this, ___host, method) (( void (*) (ShimEnumerator_t4684 *, Dictionary_2_t4673 *, MethodInfo*))ShimEnumerator__ctor_m32134_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32135_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m32135(__this, method) (( bool (*) (ShimEnumerator_t4684 *, MethodInfo*))ShimEnumerator_MoveNext_m32135_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m32136_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m32136(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t4684 *, MethodInfo*))ShimEnumerator_get_Entry_m32136_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32137_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m32137(__this, method) (( Object_t * (*) (ShimEnumerator_t4684 *, MethodInfo*))ShimEnumerator_get_Key_m32137_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32138_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m32138(__this, method) (( Object_t * (*) (ShimEnumerator_t4684 *, MethodInfo*))ShimEnumerator_get_Value_m32138_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m32139_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m32139(__this, method) (( Object_t * (*) (ShimEnumerator_t4684 *, MethodInfo*))ShimEnumerator_get_Current_m32139_gshared)(__this, method)
