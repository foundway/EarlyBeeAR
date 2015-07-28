﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t676;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4815;
// System.Collections.Generic.ICollection`1<Vuforia.Trackable>
struct ICollection_1_t4926;
// System.Object
struct Object_t;
// Vuforia.Trackable
struct Trackable_t622;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.Trackable>
struct KeyCollection_t3704;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.Trackable>
struct ValueCollection_t856;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3318;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.Trackable>
struct IDictionary_2_t4927;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>[]
struct KeyValuePair_2U5BU5D_t4928;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>>
struct IEnumerator_1_t4929;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Trackable>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.Trackable>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_32MethodDeclarations.h"
#define Dictionary_2__ctor_m4984(__this, method) (( void (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2__ctor_m17875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21785(__this, ___comparer, method) (( void (*) (Dictionary_2_t676 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17877_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m21786(__this, ___dictionary, method) (( void (*) (Dictionary_2_t676 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17879_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::.ctor(System.Int32)
#define Dictionary_2__ctor_m21787(__this, ___capacity, method) (( void (*) (Dictionary_2_t676 *, int32_t, MethodInfo*))Dictionary_2__ctor_m17881_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m21788(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t676 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m17883_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m21789(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t676 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m17885_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m21790(__this, method) (( Object_t* (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17887_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m21791(__this, method) (( Object_t* (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21792(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t676 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17891_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21793(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t676 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m21794(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t676 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17895_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m21795(__this, ___key, method) (( bool (*) (Dictionary_2_t676 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17897_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m21796(__this, ___key, method) (( void (*) (Dictionary_2_t676 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17899_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21797(__this, method) (( bool (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17901_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21798(__this, method) (( Object_t * (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17903_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21799(__this, method) (( bool (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21800(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t676 *, KeyValuePair_2_t3701 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17907_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21801(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t676 *, KeyValuePair_2_t3701 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21802(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t676 *, KeyValuePair_2U5BU5D_t4928*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17911_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21803(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t676 *, KeyValuePair_2_t3701 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17913_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21804(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t676 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17915_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21805(__this, method) (( Object_t * (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17917_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21806(__this, method) (( Object_t* (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17919_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21807(__this, method) (( Object_t * (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17921_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::get_Count()
#define Dictionary_2_get_Count_m21808(__this, method) (( int32_t (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_get_Count_m17923_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::get_Item(TKey)
#define Dictionary_2_get_Item_m21809(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t676 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m17925_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m4991(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t676 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m17927_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m21810(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t676 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m17929_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m21811(__this, ___size, method) (( void (*) (Dictionary_2_t676 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17931_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m21812(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t676 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17933_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m21813(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3701  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m17935_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m21814(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m17937_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m21815(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m17939_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m21816(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t676 *, KeyValuePair_2U5BU5D_t4928*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17941_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::Resize()
#define Dictionary_2_Resize_m21817(__this, method) (( void (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_Resize_m17943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::Add(TKey,TValue)
#define Dictionary_2_Add_m21818(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t676 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_Add_m17944_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::Clear()
#define Dictionary_2_Clear_m21819(__this, method) (( void (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_Clear_m17945_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m5002(__this, ___key, method) (( bool (*) (Dictionary_2_t676 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m17947_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m5005(__this, ___value, method) (( bool (*) (Dictionary_2_t676 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m17949_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m21820(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t676 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m17951_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m21821(__this, ___sender, method) (( void (*) (Dictionary_2_t676 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17953_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::Remove(TKey)
#define Dictionary_2_Remove_m4994(__this, ___key, method) (( bool (*) (Dictionary_2_t676 *, int32_t, MethodInfo*))Dictionary_2_Remove_m17954_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m21822(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t676 *, int32_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m17955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::get_Keys()
#define Dictionary_2_get_Keys_m21823(__this, method) (( KeyCollection_t3704 * (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_get_Keys_m17957_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::get_Values()
#define Dictionary_2_get_Values_m5004(__this, method) (( ValueCollection_t856 * (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_get_Values_m17958_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m21824(__this, ___key, method) (( int32_t (*) (Dictionary_2_t676 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17960_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m21825(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t676 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17962_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m21826(__this, ___pair, method) (( bool (*) (Dictionary_2_t676 *, KeyValuePair_2_t3701 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17964_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m21827(__this, method) (( Enumerator_t3706  (*) (Dictionary_2_t676 *, MethodInfo*))Dictionary_2_GetEnumerator_m17965_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m21828(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17967_gshared)(__this /* static, unused */, ___key, ___value, method)