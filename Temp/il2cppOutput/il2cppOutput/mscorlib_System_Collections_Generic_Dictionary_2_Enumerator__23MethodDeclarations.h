#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Enumerator_t4042;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Dictionary_2_t919;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25722_gshared (Enumerator_t4042 * __this, Dictionary_2_t919 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m25722(__this, ___dictionary, method) (( void (*) (Enumerator_t4042 *, Dictionary_2_t919 *, MethodInfo*))Enumerator__ctor_m25722_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25723_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25723(__this, method) (( Object_t * (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25723_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25724_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25724(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25724_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25725_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25725(__this, method) (( Object_t * (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25725_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25726_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25726(__this, method) (( Object_t * (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25726_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25727_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m25727(__this, method) (( bool (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_MoveNext_m25727_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Current()
extern "C" KeyValuePair_2_t4038  Enumerator_get_Current_m25728_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_get_Current_m25728(__this, method) (( KeyValuePair_2_t4038  (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_get_Current_m25728_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m25729_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m25729(__this, method) (( int32_t (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_get_CurrentKey_m25729_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_CurrentValue()
extern "C" TrackableResultData_t710  Enumerator_get_CurrentValue_m25730_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m25730(__this, method) (( TrackableResultData_t710  (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_get_CurrentValue_m25730_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::VerifyState()
extern "C" void Enumerator_VerifyState_m25731_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m25731(__this, method) (( void (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_VerifyState_m25731_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25732_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m25732(__this, method) (( void (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_VerifyCurrent_m25732_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::Dispose()
extern "C" void Enumerator_Dispose_m25733_gshared (Enumerator_t4042 * __this, MethodInfo* method);
#define Enumerator_Dispose_m25733(__this, method) (( void (*) (Enumerator_t4042 *, MethodInfo*))Enumerator_Dispose_m25733_gshared)(__this, method)
