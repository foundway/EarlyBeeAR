#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t4440;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t4432;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m29990_gshared (Enumerator_t4440 * __this, Dictionary_2_t4432 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m29990(__this, ___dictionary, method) (( void (*) (Enumerator_t4440 *, Dictionary_2_t4432 *, MethodInfo*))Enumerator__ctor_m29990_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m29991_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m29991(__this, method) (( Object_t * (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m29991_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29992_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29992(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29992_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29993_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29993(__this, method) (( Object_t * (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29993_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29994_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29994(__this, method) (( Object_t * (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29994_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m29995_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m29995(__this, method) (( bool (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_MoveNext_m29995_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t4433  Enumerator_get_Current_m29996_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_get_Current_m29996(__this, method) (( KeyValuePair_2_t4433  (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_get_Current_m29996_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m29997_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m29997(__this, method) (( uint64_t (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_get_CurrentKey_m29997_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m29998_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m29998(__this, method) (( Object_t * (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_get_CurrentValue_m29998_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m29999_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m29999(__this, method) (( void (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_VerifyState_m29999_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m30000_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m30000(__this, method) (( void (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_VerifyCurrent_m30000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m30001_gshared (Enumerator_t4440 * __this, MethodInfo* method);
#define Enumerator_Dispose_m30001(__this, method) (( void (*) (Enumerator_t4440 *, MethodInfo*))Enumerator_Dispose_m30001_gshared)(__this, method)
