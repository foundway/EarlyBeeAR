#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t4713;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1719;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32358_gshared (Enumerator_t4713 * __this, Dictionary_2_t1719 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m32358(__this, ___dictionary, method) (( void (*) (Enumerator_t4713 *, Dictionary_2_t1719 *, MethodInfo*))Enumerator__ctor_m32358_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32359_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m32359(__this, method) (( Object_t * (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m32359_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32360_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32360(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32360_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32361_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32361(__this, method) (( Object_t * (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32361_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32362_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32362(__this, method) (( Object_t * (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32362_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32363_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m32363(__this, method) (( bool (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_MoveNext_m32363_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t4709  Enumerator_get_Current_m32364_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_get_Current_m32364(__this, method) (( KeyValuePair_2_t4709  (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_get_Current_m32364_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m32365_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m32365(__this, method) (( int32_t (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_get_CurrentKey_m32365_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m32366_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m32366(__this, method) (( int32_t (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_get_CurrentValue_m32366_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m32367_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m32367(__this, method) (( void (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_VerifyState_m32367_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32368_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m32368(__this, method) (( void (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_VerifyCurrent_m32368_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m32369_gshared (Enumerator_t4713 * __this, MethodInfo* method);
#define Enumerator_Dispose_m32369(__this, method) (( void (*) (Enumerator_t4713 *, MethodInfo*))Enumerator_Dispose_m32369_gshared)(__this, method)
