#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t3413;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3408;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18895_gshared (Enumerator_t3413 * __this, Dictionary_2_t3408 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m18895(__this, ___dictionary, method) (( void (*) (Enumerator_t3413 *, Dictionary_2_t3408 *, MethodInfo*))Enumerator__ctor_m18895_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18896_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18896(__this, method) (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18896_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18897_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18897(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18897_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18898_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18898(__this, method) (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18898_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18899_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18899(__this, method) (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18900_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m18900(__this, method) (( bool (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_MoveNext_m18900_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3409  Enumerator_get_Current_m18901_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_get_Current_m18901(__this, method) (( KeyValuePair_2_t3409  (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_get_Current_m18901_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18902_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m18902(__this, method) (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_get_CurrentKey_m18902_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m18903_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m18903(__this, method) (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_get_CurrentValue_m18903_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m18904_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m18904(__this, method) (( void (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_VerifyState_m18904_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18905_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m18905(__this, method) (( void (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_VerifyCurrent_m18905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m18906_gshared (Enumerator_t3413 * __this, MethodInfo* method);
#define Enumerator_Dispose_m18906(__this, method) (( void (*) (Enumerator_t3413 *, MethodInfo*))Enumerator_Dispose_m18906_gshared)(__this, method)
