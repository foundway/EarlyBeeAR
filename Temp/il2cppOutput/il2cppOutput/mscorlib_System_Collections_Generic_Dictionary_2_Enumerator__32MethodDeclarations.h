#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t4379;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t4371;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m29395_gshared (Enumerator_t4379 * __this, Dictionary_2_t4371 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m29395(__this, ___dictionary, method) (( void (*) (Enumerator_t4379 *, Dictionary_2_t4371 *, MethodInfo*))Enumerator__ctor_m29395_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m29396_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m29396(__this, method) (( Object_t * (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m29396_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29397_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29397(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m29397_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29398_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29398(__this, method) (( Object_t * (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m29398_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29399_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29399(__this, method) (( Object_t * (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m29399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m29400_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m29400(__this, method) (( bool (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_MoveNext_m29400_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t4372  Enumerator_get_Current_m29401_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_get_Current_m29401(__this, method) (( KeyValuePair_2_t4372  (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_get_Current_m29401_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m29402_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m29402(__this, method) (( Object_t * (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_get_CurrentKey_m29402_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m29403_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m29403(__this, method) (( int64_t (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_get_CurrentValue_m29403_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m29404_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m29404(__this, method) (( void (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_VerifyState_m29404_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m29405_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m29405(__this, method) (( void (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_VerifyCurrent_m29405_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m29406_gshared (Enumerator_t4379 * __this, MethodInfo* method);
#define Enumerator_Dispose_m29406(__this, method) (( void (*) (Enumerator_t4379 *, MethodInfo*))Enumerator_Dispose_m29406_gshared)(__this, method)
