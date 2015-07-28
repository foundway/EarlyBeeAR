#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t3418;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3408;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18938_gshared (ShimEnumerator_t3418 * __this, Dictionary_2_t3408 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m18938(__this, ___host, method) (( void (*) (ShimEnumerator_t3418 *, Dictionary_2_t3408 *, MethodInfo*))ShimEnumerator__ctor_m18938_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m18939_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m18939(__this, method) (( bool (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_MoveNext_m18939_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m18940_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m18940(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_get_Entry_m18940_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m18941_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m18941(__this, method) (( Object_t * (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_get_Key_m18941_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m18942_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m18942(__this, method) (( Object_t * (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_get_Value_m18942_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m18943_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m18943(__this, method) (( Object_t * (*) (ShimEnumerator_t3418 *, MethodInfo*))ShimEnumerator_get_Current_m18943_gshared)(__this, method)
