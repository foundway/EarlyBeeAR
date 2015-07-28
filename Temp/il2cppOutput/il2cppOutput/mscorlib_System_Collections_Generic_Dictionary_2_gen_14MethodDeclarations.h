#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>
struct Dictionary_2_t787;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4815;
// System.Collections.Generic.ICollection`1<Vuforia.Prop>
struct ICollection_1_t4983;
// System.Object
struct Object_t;
// Vuforia.Prop
struct Prop_t114;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.Prop>
struct KeyCollection_t910;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.Prop>
struct ValueCollection_t913;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3318;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.Prop>
struct IDictionary_2_t4984;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>[]
struct KeyValuePair_2U5BU5D_t4985;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>>
struct IEnumerator_1_t4986;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.Prop>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.Prop>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_32MethodDeclarations.h"
#define Dictionary_2__ctor_m5394(__this, method) (( void (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2__ctor_m17875_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24942(__this, ___comparer, method) (( void (*) (Dictionary_2_t787 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17877_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m24943(__this, ___dictionary, method) (( void (*) (Dictionary_2_t787 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m17879_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24944(__this, ___capacity, method) (( void (*) (Dictionary_2_t787 *, int32_t, MethodInfo*))Dictionary_2__ctor_m17881_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m24945(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t787 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m17883_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24946(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t787 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m17885_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m24947(__this, method) (( Object_t* (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17887_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m24948(__this, method) (( Object_t* (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24949(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t787 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17891_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24950(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t787 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17893_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24951(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t787 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17895_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m24952(__this, ___key, method) (( bool (*) (Dictionary_2_t787 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17897_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24953(__this, ___key, method) (( void (*) (Dictionary_2_t787 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17899_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24954(__this, method) (( bool (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17901_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24955(__this, method) (( Object_t * (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17903_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24956(__this, method) (( bool (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17905_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24957(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t787 *, KeyValuePair_2_t901 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17907_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24958(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t787 *, KeyValuePair_2_t901 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24959(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t787 *, KeyValuePair_2U5BU5D_t4985*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17911_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24960(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t787 *, KeyValuePair_2_t901 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17913_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24961(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t787 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17915_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24962(__this, method) (( Object_t * (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17917_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24963(__this, method) (( Object_t* (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17919_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24964(__this, method) (( Object_t * (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17921_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::get_Count()
#define Dictionary_2_get_Count_m5387(__this, method) (( int32_t (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_get_Count_m17923_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::get_Item(TKey)
#define Dictionary_2_get_Item_m5361(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t787 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m17925_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24965(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t787 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m17927_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24966(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t787 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m17929_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24967(__this, ___size, method) (( void (*) (Dictionary_2_t787 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m17931_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24968(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t787 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m17933_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m24969(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t901  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m17935_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24970(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m17937_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24971(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m17939_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24972(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t787 *, KeyValuePair_2U5BU5D_t4985*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m17941_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Resize()
#define Dictionary_2_Resize_m24973(__this, method) (( void (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_Resize_m17943_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Add(TKey,TValue)
#define Dictionary_2_Add_m5385(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t787 *, int32_t, Object_t *, MethodInfo*))Dictionary_2_Add_m17944_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Clear()
#define Dictionary_2_Clear_m5352(__this, method) (( void (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_Clear_m17945_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m5360(__this, ___key, method) (( bool (*) (Dictionary_2_t787 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m17947_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24974(__this, ___value, method) (( bool (*) (Dictionary_2_t787 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m17949_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24975(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t787 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m17951_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24976(__this, ___sender, method) (( void (*) (Dictionary_2_t787 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m17953_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::Remove(TKey)
#define Dictionary_2_Remove_m5389(__this, ___key, method) (( bool (*) (Dictionary_2_t787 *, int32_t, MethodInfo*))Dictionary_2_Remove_m17954_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m24977(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t787 *, int32_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m17955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::get_Keys()
#define Dictionary_2_get_Keys_m5430(__this, method) (( KeyCollection_t910 * (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_get_Keys_m17957_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::get_Values()
#define Dictionary_2_get_Values_m5402(__this, method) (( ValueCollection_t913 * (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_get_Values_m17958_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24978(__this, ___key, method) (( int32_t (*) (Dictionary_2_t787 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m17960_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24979(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t787 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m17962_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m24980(__this, ___pair, method) (( bool (*) (Dictionary_2_t787 *, KeyValuePair_2_t901 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17964_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m5415(__this, method) (( Enumerator_t900  (*) (Dictionary_2_t787 *, MethodInfo*))Dictionary_2_GetEnumerator_m17965_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24981(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, int32_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17967_gshared)(__this /* static, unused */, ___key, ___value, method)
