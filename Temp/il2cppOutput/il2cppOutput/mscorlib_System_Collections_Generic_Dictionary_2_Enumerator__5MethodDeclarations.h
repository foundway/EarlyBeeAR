﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t3327;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t3321;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18003_gshared (Enumerator_t3327 * __this, Dictionary_2_t3321 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m18003(__this, ___dictionary, method) (( void (*) (Enumerator_t3327 *, Dictionary_2_t3321 *, MethodInfo*))Enumerator__ctor_m18003_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18004_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m18004(__this, method) (( Object_t * (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m18004_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18005_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18005(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18005_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18006_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18006(__this, method) (( Object_t * (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18006_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18007_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18007(__this, method) (( Object_t * (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18007_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18008_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m18008(__this, method) (( bool (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_MoveNext_m18008_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3322  Enumerator_get_Current_m18009_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_get_Current_m18009(__this, method) (( KeyValuePair_2_t3322  (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_get_Current_m18009_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m18010_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m18010(__this, method) (( int32_t (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_get_CurrentKey_m18010_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m18011_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m18011(__this, method) (( Object_t * (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_get_CurrentValue_m18011_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m18012_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m18012(__this, method) (( void (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_VerifyState_m18012_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18013_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m18013(__this, method) (( void (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_VerifyCurrent_m18013_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m18014_gshared (Enumerator_t3327 * __this, MethodInfo* method);
#define Enumerator_Dispose_m18014(__this, method) (( void (*) (Enumerator_t3327 *, MethodInfo*))Enumerator_Dispose_m18014_gshared)(__this, method)
