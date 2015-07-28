#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t3334;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t3321;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18055_gshared (ShimEnumerator_t3334 * __this, Dictionary_2_t3321 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m18055(__this, ___host, method) (( void (*) (ShimEnumerator_t3334 *, Dictionary_2_t3321 *, MethodInfo*))ShimEnumerator__ctor_m18055_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18056_gshared (ShimEnumerator_t3334 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m18056(__this, method) (( bool (*) (ShimEnumerator_t3334 *, MethodInfo*))ShimEnumerator_MoveNext_m18056_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m18057_gshared (ShimEnumerator_t3334 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m18057(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t3334 *, MethodInfo*))ShimEnumerator_get_Entry_m18057_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18058_gshared (ShimEnumerator_t3334 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m18058(__this, method) (( Object_t * (*) (ShimEnumerator_t3334 *, MethodInfo*))ShimEnumerator_get_Key_m18058_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18059_gshared (ShimEnumerator_t3334 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m18059(__this, method) (( Object_t * (*) (ShimEnumerator_t3334 *, MethodInfo*))ShimEnumerator_get_Value_m18059_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18060_gshared (ShimEnumerator_t3334 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m18060(__this, method) (( Object_t * (*) (ShimEnumerator_t3334 *, MethodInfo*))ShimEnumerator_get_Current_m18060_gshared)(__this, method)
