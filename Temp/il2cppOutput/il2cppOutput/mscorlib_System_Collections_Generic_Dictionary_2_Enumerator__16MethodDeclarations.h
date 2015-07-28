#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>
struct Enumerator_t3822;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3817;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23256_gshared (Enumerator_t3822 * __this, Dictionary_2_t3817 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m23256(__this, ___dictionary, method) (( void (*) (Enumerator_t3822 *, Dictionary_2_t3817 *, MethodInfo*))Enumerator__ctor_m23256_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23257_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23257(__this, method) (( Object_t * (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23257_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23258_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23258(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23258_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23259_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23259(__this, method) (( Object_t * (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23259_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23260_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23260(__this, method) (( Object_t * (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23261_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m23261(__this, method) (( bool (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_MoveNext_m23261_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_Current()
extern "C" KeyValuePair_2_t3818  Enumerator_get_Current_m23262_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_get_Current_m23262(__this, method) (( KeyValuePair_2_t3818  (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_get_Current_m23262_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23263_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m23263(__this, method) (( Object_t * (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_get_CurrentKey_m23263_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentValue()
extern "C" uint16_t Enumerator_get_CurrentValue_m23264_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m23264(__this, method) (( uint16_t (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_get_CurrentValue_m23264_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyState()
extern "C" void Enumerator_VerifyState_m23265_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m23265(__this, method) (( void (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_VerifyState_m23265_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23266_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m23266(__this, method) (( void (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_VerifyCurrent_m23266_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::Dispose()
extern "C" void Enumerator_Dispose_m23267_gshared (Enumerator_t3822 * __this, MethodInfo* method);
#define Enumerator_Dispose_m23267(__this, method) (( void (*) (Enumerator_t3822 *, MethodInfo*))Enumerator_Dispose_m23267_gshared)(__this, method)
