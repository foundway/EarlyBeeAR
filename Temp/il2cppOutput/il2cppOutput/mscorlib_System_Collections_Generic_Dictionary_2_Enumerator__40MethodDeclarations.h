#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Enumerator_t4566;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t4563;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m31164_gshared (Enumerator_t4566 * __this, Dictionary_2_t4563 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m31164(__this, ___dictionary, method) (( void (*) (Enumerator_t4566 *, Dictionary_2_t4563 *, MethodInfo*))Enumerator__ctor_m31164_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31165_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m31165(__this, method) (( Object_t * (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m31165_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31166_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31166(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m31166_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31167_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31167(__this, method) (( Object_t * (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m31167_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31168_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31168(__this, method) (( Object_t * (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m31168_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m31169_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m31169(__this, method) (( bool (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_MoveNext_m31169_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Current()
extern "C" KeyValuePair_2_t4492  Enumerator_get_Current_m31170_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_get_Current_m31170(__this, method) (( KeyValuePair_2_t4492  (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_get_Current_m31170_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m31171_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m31171(__this, method) (( Object_t * (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_get_CurrentKey_m31171_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1273  Enumerator_get_CurrentValue_m31172_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m31172(__this, method) (( KeyValuePair_2_t1273  (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_get_CurrentValue_m31172_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::VerifyState()
extern "C" void Enumerator_VerifyState_m31173_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m31173(__this, method) (( void (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_VerifyState_m31173_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m31174_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m31174(__this, method) (( void (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_VerifyCurrent_m31174_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Dispose()
extern "C" void Enumerator_Dispose_m31175_gshared (Enumerator_t4566 * __this, MethodInfo* method);
#define Enumerator_Dispose_m31175(__this, method) (( void (*) (Enumerator_t4566 *, MethodInfo*))Enumerator_Dispose_m31175_gshared)(__this, method)
