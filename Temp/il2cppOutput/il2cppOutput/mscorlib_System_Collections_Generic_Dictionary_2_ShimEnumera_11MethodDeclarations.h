#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
struct ShimEnumerator_t3828;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3817;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23303_gshared (ShimEnumerator_t3828 * __this, Dictionary_2_t3817 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m23303(__this, ___host, method) (( void (*) (ShimEnumerator_t3828 *, Dictionary_2_t3817 *, MethodInfo*))ShimEnumerator__ctor_m23303_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23304_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m23304(__this, method) (( bool (*) (ShimEnumerator_t3828 *, MethodInfo*))ShimEnumerator_MoveNext_m23304_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m23305_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m23305(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t3828 *, MethodInfo*))ShimEnumerator_get_Entry_m23305_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23306_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m23306(__this, method) (( Object_t * (*) (ShimEnumerator_t3828 *, MethodInfo*))ShimEnumerator_get_Key_m23306_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23307_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m23307(__this, method) (( Object_t * (*) (ShimEnumerator_t3828 *, MethodInfo*))ShimEnumerator_get_Value_m23307_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23308_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m23308(__this, method) (( Object_t * (*) (ShimEnumerator_t3828 *, MethodInfo*))ShimEnumerator_get_Current_m23308_gshared)(__this, method)
