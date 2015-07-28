#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>
struct Dictionary_2_t683;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4815;
// System.Collections.Generic.ICollection`1<Vuforia.VirtualButton>
struct ICollection_1_t4917;
// System.Object
struct Object_t;
// Vuforia.VirtualButton
struct VirtualButton_t665;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VirtualButton>
struct KeyCollection_t3730;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VirtualButton>
struct ValueCollection_t861;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3318;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.VirtualButton>
struct IDictionary_2_t4930;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>[]
struct KeyValuePair_2U5BU5D_t4931;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>>
struct IEnumerator_1_t4932;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VirtualButton>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VirtualButton>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_32MethodDeclarations.h"
#define Dictionary_2__ctor_m5026(__this, method) (( void (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2__ctor_m17875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22086(__this, ___comparer, method) (( void (*) (Dictionary_2_t683 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17877_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m22087(__this, ___dictionary, method) (( void (*) (Dictionary_2_t683 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17879_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor(System.Int32)
#define Dictionary_2__ctor_m22088(__this, ___capacity, method) (( void (*) (Dictionary_2_t683 *, int32_t, MethodInfo*))Dictionary_2__ctor_m17881_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m22089(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t683 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m17883_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m22090(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t683 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m17885_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m22091(__this, method) (( Object_t* (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17887_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m22092(__this, method) (( Object_t* (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m22093(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t683 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17891_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m22094(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t683 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m22095(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t683 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17895_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m22096(__this, ___key, method) (( bool (*) (Dictionary_2_t683 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17897_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m22097(__this, ___key, method) (( void (*) (Dictionary_2_t683 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17899_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m22098(__this, method) (( bool (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17901_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m22099(__this, method) (( Object_t * (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17903_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m22100(__this, method) (( bool (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m22101(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t683 *, KeyValuePair_2_t3728 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17907_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m22102(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t683 *, KeyValuePair_2_t3728 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m22103(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t683 *, KeyValuePair_2U5BU5D_t4931*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17911_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m22104(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t683 *, KeyValuePair_2_t3728 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17913_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m22105(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t683 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17915_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m22106(__this, method) (( Object_t * (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17917_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22107(__this, method) (( Object_t* (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17919_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m22108(__this, method) (( Object_t * (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17921_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::get_Count()
#define Dictionary_2_get_Count_m22109(__this, method) (( int32_t (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_get_Count_m17923_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::get_Item(TKey)
#define Dictionary_2_get_Item_m5038(__this, ___key, method) (( VirtualButton_t665 * (*) (Dictionary_2_t683 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m17925_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m22110(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t683 *, int32_t, VirtualButton_t665 *, MethodInfo*))Dictionary_2_set_Item_m17927_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m22111(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t683 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m17929_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m22112(__this, ___size, method) (( void (*) (Dictionary_2_t683 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17931_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m22113(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t683 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17933_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m22114(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3728  (*) (Object_t * /* static, unused */, int32_t, VirtualButton_t665 *, MethodInfo*))Dictionary_2_make_pair_m17935_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m22115(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, VirtualButton_t665 *, MethodInfo*))Dictionary_2_pick_key_m17937_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m22116(__this /* static, unused */, ___key, ___value, method) (( VirtualButton_t665 * (*) (Object_t * /* static, unused */, int32_t, VirtualButton_t665 *, MethodInfo*))Dictionary_2_pick_value_m17939_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m22117(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t683 *, KeyValuePair_2U5BU5D_t4931*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17941_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Resize()
#define Dictionary_2_Resize_m22118(__this, method) (( void (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_Resize_m17943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Add(TKey,TValue)
#define Dictionary_2_Add_m5037(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t683 *, int32_t, VirtualButton_t665 *, MethodInfo*))Dictionary_2_Add_m17944_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Clear()
#define Dictionary_2_Clear_m22119(__this, method) (( void (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_Clear_m17945_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m5036(__this, ___key, method) (( bool (*) (Dictionary_2_t683 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m17947_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m22120(__this, ___value, method) (( bool (*) (Dictionary_2_t683 *, VirtualButton_t665 *, MethodInfo*))Dictionary_2_ContainsValue_m17949_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m22121(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t683 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m17951_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m22122(__this, ___sender, method) (( void (*) (Dictionary_2_t683 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17953_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::Remove(TKey)
#define Dictionary_2_Remove_m5033(__this, ___key, method) (( bool (*) (Dictionary_2_t683 *, int32_t, MethodInfo*))Dictionary_2_Remove_m17954_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m22123(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t683 *, int32_t, VirtualButton_t665 **, MethodInfo*))Dictionary_2_TryGetValue_m17955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::get_Keys()
#define Dictionary_2_get_Keys_m22124(__this, method) (( KeyCollection_t3730 * (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_get_Keys_m17957_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::get_Values()
#define Dictionary_2_get_Values_m5043(__this, method) (( ValueCollection_t861 * (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_get_Values_m17958_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m22125(__this, ___key, method) (( int32_t (*) (Dictionary_2_t683 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17960_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m22126(__this, ___value, method) (( VirtualButton_t665 * (*) (Dictionary_2_t683 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17962_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m22127(__this, ___pair, method) (( bool (*) (Dictionary_2_t683 *, KeyValuePair_2_t3728 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17964_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m22128(__this, method) (( Enumerator_t3732  (*) (Dictionary_2_t683 *, MethodInfo*))Dictionary_2_GetEnumerator_m17965_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m22129(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, int32_t, VirtualButton_t665 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17967_gshared)(__this /* static, unused */, ___key, ___value, method)
