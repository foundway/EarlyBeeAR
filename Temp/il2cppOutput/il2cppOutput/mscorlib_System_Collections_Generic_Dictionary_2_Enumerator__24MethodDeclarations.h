#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
struct Enumerator_t4058;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
struct Dictionary_2_t920;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25865_gshared (Enumerator_t4058 * __this, Dictionary_2_t920 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m25865(__this, ___dictionary, method) (( void (*) (Enumerator_t4058 *, Dictionary_2_t920 *, MethodInfo*))Enumerator__ctor_m25865_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25866_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25866(__this, method) (( Object_t * (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25866_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25867_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25867(__this, method) (( DictionaryEntry_t1610  (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25867_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25868_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25868(__this, method) (( Object_t * (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25868_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25869_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25869(__this, method) (( Object_t * (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25870_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m25870(__this, method) (( bool (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_MoveNext_m25870_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
extern "C" KeyValuePair_2_t4053  Enumerator_get_Current_m25871_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_get_Current_m25871(__this, method) (( KeyValuePair_2_t4053  (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_get_Current_m25871_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m25872_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m25872(__this, method) (( int32_t (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_get_CurrentKey_m25872_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_CurrentValue()
extern "C" VirtualButtonData_t711  Enumerator_get_CurrentValue_m25873_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m25873(__this, method) (( VirtualButtonData_t711  (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_get_CurrentValue_m25873_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::VerifyState()
extern "C" void Enumerator_VerifyState_m25874_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m25874(__this, method) (( void (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_VerifyState_m25874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25875_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m25875(__this, method) (( void (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_VerifyCurrent_m25875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Dispose()
extern "C" void Enumerator_Dispose_m25876_gshared (Enumerator_t4058 * __this, MethodInfo* method);
#define Enumerator_Dispose_m25876(__this, method) (( void (*) (Enumerator_t4058 *, MethodInfo*))Enumerator_Dispose_m25876_gshared)(__this, method)
