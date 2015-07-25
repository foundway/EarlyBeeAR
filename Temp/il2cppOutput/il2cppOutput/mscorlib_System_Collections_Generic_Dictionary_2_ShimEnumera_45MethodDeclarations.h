#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t4718;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1719;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32401_gshared (ShimEnumerator_t4718 * __this, Dictionary_2_t1719 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m32401(__this, ___host, method) (( void (*) (ShimEnumerator_t4718 *, Dictionary_2_t1719 *, MethodInfo*))ShimEnumerator__ctor_m32401_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m32402_gshared (ShimEnumerator_t4718 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m32402(__this, method) (( bool (*) (ShimEnumerator_t4718 *, MethodInfo*))ShimEnumerator_MoveNext_m32402_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m32403_gshared (ShimEnumerator_t4718 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m32403(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t4718 *, MethodInfo*))ShimEnumerator_get_Entry_m32403_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m32404_gshared (ShimEnumerator_t4718 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m32404(__this, method) (( Object_t * (*) (ShimEnumerator_t4718 *, MethodInfo*))ShimEnumerator_get_Key_m32404_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m32405_gshared (ShimEnumerator_t4718 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m32405(__this, method) (( Object_t * (*) (ShimEnumerator_t4718 *, MethodInfo*))ShimEnumerator_get_Value_m32405_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m32406_gshared (ShimEnumerator_t4718 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m32406(__this, method) (( Object_t * (*) (ShimEnumerator_t4718 *, MethodInfo*))ShimEnumerator_get_Current_m32406_gshared)(__this, method)
