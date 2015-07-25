#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1214;
// System.Collections.Generic.ICollection`1<UnityEngine.Event>
struct ICollection_1_t5119;
// System.Collections.Generic.ICollection`1<UnityEngine.TextEditor/TextEditOp>
struct ICollection_1_t5120;
// System.Object
struct Object_t;
// UnityEngine.Event
struct Event_t204;
struct Event_t204_marshaled;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t4610;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t4614;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Event>
struct IEqualityComparer_1_t4604;
// System.Collections.Generic.IDictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct IDictionary_2_t5121;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t5122;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t5123;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_43.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__42.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_33MethodDeclarations.h"
#define Dictionary_2__ctor_m31388(__this, method) (( void (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2__ctor_m18351_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31389(__this, ___comparer, method) (( void (*) (Dictionary_2_t1214 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18352_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m31390(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1214 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18353_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
#define Dictionary_2__ctor_m31391(__this, ___capacity, method) (( void (*) (Dictionary_2_t1214 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18354_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m31392(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1214 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m18355_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m31393(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1214 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m18356_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31394(__this, method) (( Object_t* (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18357_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31395(__this, method) (( Object_t* (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18358_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31396(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1214 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18359_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31397(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1214 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18360_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m31398(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1214 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18361_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m31399(__this, ___key, method) (( bool (*) (Dictionary_2_t1214 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18362_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m31400(__this, ___key, method) (( void (*) (Dictionary_2_t1214 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18363_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31401(__this, method) (( bool (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18364_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31402(__this, method) (( Object_t * (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18365_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31403(__this, method) (( bool (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18366_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31404(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1214 *, KeyValuePair_2_t4606 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18367_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31405(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1214 *, KeyValuePair_2_t4606 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18368_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31406(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1214 *, KeyValuePair_2U5BU5D_t5122*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18369_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31407(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1214 *, KeyValuePair_2_t4606 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18370_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31408(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1214 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18371_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31409(__this, method) (( Object_t * (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18372_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31410(__this, method) (( Object_t* (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18373_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31411(__this, method) (( Object_t * (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18374_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Count()
#define Dictionary_2_get_Count_m31412(__this, method) (( int32_t (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_get_Count_m18375_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
#define Dictionary_2_get_Item_m31413(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1214 *, Event_t204 *, MethodInfo*))Dictionary_2_get_Item_m18376_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m31414(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1214 *, Event_t204 *, int32_t, MethodInfo*))Dictionary_2_set_Item_m18377_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m31415(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1214 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18378_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m31416(__this, ___size, method) (( void (*) (Dictionary_2_t1214 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18379_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m31417(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1214 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18380_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m31418(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4606  (*) (Object_t * /* static, unused */, Event_t204 *, int32_t, MethodInfo*))Dictionary_2_make_pair_m18381_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m31419(__this /* static, unused */, ___key, ___value, method) (( Event_t204 * (*) (Object_t * /* static, unused */, Event_t204 *, int32_t, MethodInfo*))Dictionary_2_pick_key_m18382_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m31420(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Event_t204 *, int32_t, MethodInfo*))Dictionary_2_pick_value_m18383_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m31421(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1214 *, KeyValuePair_2U5BU5D_t5122*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18384_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Resize()
#define Dictionary_2_Resize_m31422(__this, method) (( void (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_Resize_m18385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
#define Dictionary_2_Add_m31423(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1214 *, Event_t204 *, int32_t, MethodInfo*))Dictionary_2_Add_m18386_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Clear()
#define Dictionary_2_Clear_m31424(__this, method) (( void (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_Clear_m18387_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m31425(__this, ___key, method) (( bool (*) (Dictionary_2_t1214 *, Event_t204 *, MethodInfo*))Dictionary_2_ContainsKey_m18388_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m31426(__this, ___value, method) (( bool (*) (Dictionary_2_t1214 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m18389_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m31427(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1214 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m18390_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m31428(__this, ___sender, method) (( void (*) (Dictionary_2_t1214 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18391_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
#define Dictionary_2_Remove_m31429(__this, ___key, method) (( bool (*) (Dictionary_2_t1214 *, Event_t204 *, MethodInfo*))Dictionary_2_Remove_m18392_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m31430(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1214 *, Event_t204 *, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m18393_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Keys()
#define Dictionary_2_get_Keys_m31431(__this, method) (( KeyCollection_t4610 * (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_get_Keys_m18394_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::get_Values()
#define Dictionary_2_get_Values_m31432(__this, method) (( ValueCollection_t4614 * (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_get_Values_m18395_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m31433(__this, ___key, method) (( Event_t204 * (*) (Dictionary_2_t1214 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18396_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m31434(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1214 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18397_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m31435(__this, ___pair, method) (( bool (*) (Dictionary_2_t1214 *, KeyValuePair_2_t4606 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18398_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m31436(__this, method) (( Enumerator_t4612  (*) (Dictionary_2_t1214 *, MethodInfo*))Dictionary_2_GetEnumerator_m18399_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m31437(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, Event_t204 *, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18400_gshared)(__this /* static, unused */, ___key, ___value, method)
