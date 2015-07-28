#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t4446;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t4432;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m30037_gshared (ShimEnumerator_t4446 * __this, Dictionary_2_t4432 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m30037(__this, ___host, method) (( void (*) (ShimEnumerator_t4446 *, Dictionary_2_t4432 *, MethodInfo*))ShimEnumerator__ctor_m30037_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m30038_gshared (ShimEnumerator_t4446 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m30038(__this, method) (( bool (*) (ShimEnumerator_t4446 *, MethodInfo*))ShimEnumerator_MoveNext_m30038_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m30039_gshared (ShimEnumerator_t4446 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m30039(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t4446 *, MethodInfo*))ShimEnumerator_get_Entry_m30039_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m30040_gshared (ShimEnumerator_t4446 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m30040(__this, method) (( Object_t * (*) (ShimEnumerator_t4446 *, MethodInfo*))ShimEnumerator_get_Key_m30040_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m30041_gshared (ShimEnumerator_t4446 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m30041(__this, method) (( Object_t * (*) (ShimEnumerator_t4446 *, MethodInfo*))ShimEnumerator_get_Value_m30041_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m30042_gshared (ShimEnumerator_t4446 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m30042(__this, method) (( Object_t * (*) (ShimEnumerator_t4446 *, MethodInfo*))ShimEnumerator_get_Current_m30042_gshared)(__this, method)
