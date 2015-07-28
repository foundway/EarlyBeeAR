#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t4678;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4673;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32087_gshared (Enumerator_t4678 * __this, Dictionary_2_t4673 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m32087(__this, ___dictionary, method) (( void (*) (Enumerator_t4678 *, Dictionary_2_t4673 *, MethodInfo*))Enumerator__ctor_m32087_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32088_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32088(__this, method) (( Object_t * (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32088_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32089_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32089(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32089_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32090_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32090(__this, method) (( Object_t * (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32090_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32091_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32091(__this, method) (( Object_t * (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32091_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32092_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m32092(__this, method) (( bool (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_MoveNext_m32092_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t4674  Enumerator_get_Current_m32093_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_get_Current_m32093(__this, method) (( KeyValuePair_2_t4674  (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_get_Current_m32093_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m32094_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m32094(__this, method) (( Object_t * (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_get_CurrentKey_m32094_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32095_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m32095(__this, method) (( uint8_t (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_get_CurrentValue_m32095_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32096_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m32096(__this, method) (( void (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_VerifyState_m32096_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32097_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m32097(__this, method) (( void (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_VerifyCurrent_m32097_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32098_gshared (Enumerator_t4678 * __this, MethodInfo* method);
#define Enumerator_Dispose_m32098(__this, method) (( void (*) (Enumerator_t4678 *, MethodInfo*))Enumerator_Dispose_m32098_gshared)(__this, method)
