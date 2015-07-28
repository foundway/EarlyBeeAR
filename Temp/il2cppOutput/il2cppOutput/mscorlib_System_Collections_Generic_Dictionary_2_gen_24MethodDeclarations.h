#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1057;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1147;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t4311;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t4314;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3044;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1258;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t5058;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerator_1_t5059;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_34MethodDeclarations.h"
#define Dictionary_2__ctor_m7274(__this, method) (( void (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2__ctor_m18768_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m28503(__this, ___comparer, method) (( void (*) (Dictionary_2_t1057 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18770_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m28504(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1057 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18772_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
#define Dictionary_2__ctor_m28505(__this, ___capacity, method) (( void (*) (Dictionary_2_t1057 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18774_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m28506(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1057 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m18776_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m28507(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1057 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m18778_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m28508(__this, method) (( Object_t* (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18780_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m28509(__this, method) (( Object_t* (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18782_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m28510(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1057 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18784_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m28511(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1057 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18786_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m28512(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1057 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18788_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m28513(__this, ___key, method) (( bool (*) (Dictionary_2_t1057 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18790_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m28514(__this, ___key, method) (( void (*) (Dictionary_2_t1057 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18792_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m28515(__this, method) (( bool (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18794_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m28516(__this, method) (( Object_t * (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m28517(__this, method) (( bool (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m28518(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1057 *, KeyValuePair_2_t1246 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18800_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m28519(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1057 *, KeyValuePair_2_t1246 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18802_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m28520(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1057 *, KeyValuePair_2U5BU5D_t5058*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18804_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m28521(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1057 *, KeyValuePair_2_t1246 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18806_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m28522(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1057 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18808_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m28523(__this, method) (( Object_t * (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m28524(__this, method) (( Object_t* (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18812_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.String>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m28525(__this, method) (( Object_t * (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
#define Dictionary_2_get_Count_m7272(__this, method) (( int32_t (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_get_Count_m18816_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
#define Dictionary_2_get_Item_m28526(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1057 *, String_t*, MethodInfo*))Dictionary_2_get_Item_m18818_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m7278(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1057 *, String_t*, String_t*, MethodInfo*))Dictionary_2_set_Item_m18820_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m28527(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1057 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18822_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m28528(__this, ___size, method) (( void (*) (Dictionary_2_t1057 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18824_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m28529(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1057 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18826_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m28530(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1246  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_make_pair_m18828_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m28531(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_key_m18830_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m28532(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_pick_value_m18832_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m28533(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1057 *, KeyValuePair_2U5BU5D_t5058*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18834_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Resize()
#define Dictionary_2_Resize_m28534(__this, method) (( void (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_Resize_m18836_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
#define Dictionary_2_Add_m28535(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1057 *, String_t*, String_t*, MethodInfo*))Dictionary_2_Add_m18837_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
#define Dictionary_2_Clear_m28536(__this, method) (( void (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_Clear_m18839_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m28537(__this, ___key, method) (( bool (*) (Dictionary_2_t1057 *, String_t*, MethodInfo*))Dictionary_2_ContainsKey_m18841_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m28538(__this, ___value, method) (( bool (*) (Dictionary_2_t1057 *, String_t*, MethodInfo*))Dictionary_2_ContainsValue_m18843_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m28539(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1057 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m18845_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m28540(__this, ___sender, method) (( void (*) (Dictionary_2_t1057 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18847_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
#define Dictionary_2_Remove_m28541(__this, ___key, method) (( bool (*) (Dictionary_2_t1057 *, String_t*, MethodInfo*))Dictionary_2_Remove_m18849_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m7265(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1057 *, String_t*, String_t**, MethodInfo*))Dictionary_2_TryGetValue_m18850_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
#define Dictionary_2_get_Keys_m28542(__this, method) (( KeyCollection_t4311 * (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_get_Keys_m18852_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Values()
#define Dictionary_2_get_Values_m28543(__this, method) (( ValueCollection_t4314 * (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_get_Values_m18854_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m28544(__this, ___key, method) (( String_t* (*) (Dictionary_2_t1057 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18856_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m28545(__this, ___value, method) (( String_t* (*) (Dictionary_2_t1057 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18858_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m28546(__this, ___pair, method) (( bool (*) (Dictionary_2_t1057 *, KeyValuePair_2_t1246 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18860_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m7281(__this, method) (( Enumerator_t1245  (*) (Dictionary_2_t1057 *, MethodInfo*))Dictionary_2_GetEnumerator_m18862_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.String>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m28547(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, String_t*, String_t*, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18864_gshared)(__this /* static, unused */, ___key, ___value, method)
