#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t383;
// System.Collections.Generic.ICollection`1<UnityEngine.Canvas>
struct ICollection_1_t4882;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ICollection_1_t4885;
// System.Object
struct Object_t;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t515;
// UnityEngine.Canvas
struct Canvas_t372;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct KeyCollection_t3512;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t3516;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
struct IEqualityComparer_1_t3493;
// System.Collections.Generic.IDictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct IDictionary_2_t4886;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>[]
struct KeyValuePair_2U5BU5D_t4887;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct IEnumerator_1_t4888;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_34MethodDeclarations.h"
#define Dictionary_2__ctor_m2702(__this, method) (( void (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2__ctor_m18768_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19680(__this, ___comparer, method) (( void (*) (Dictionary_2_t383 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18770_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m19681(__this, ___dictionary, method) (( void (*) (Dictionary_2_t383 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18772_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m19682(__this, ___capacity, method) (( void (*) (Dictionary_2_t383 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18774_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m19683(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t383 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m18776_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m19684(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t383 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m18778_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m19685(__this, method) (( Object_t* (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18780_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m19686(__this, method) (( Object_t* (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18782_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19687(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t383 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18784_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19688(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t383 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18786_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m19689(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t383 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18788_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m19690(__this, ___key, method) (( bool (*) (Dictionary_2_t383 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18790_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m19691(__this, ___key, method) (( void (*) (Dictionary_2_t383 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18792_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19692(__this, method) (( bool (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18794_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19693(__this, method) (( Object_t * (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19694(__this, method) (( bool (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19695(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t383 *, KeyValuePair_2_t3495 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18800_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19696(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t383 *, KeyValuePair_2_t3495 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18802_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19697(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t383 *, KeyValuePair_2U5BU5D_t4887*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18804_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19698(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t383 *, KeyValuePair_2_t3495 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18806_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19699(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t383 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18808_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19700(__this, method) (( Object_t * (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19701(__this, method) (( Object_t* (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18812_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19702(__this, method) (( Object_t * (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Count()
#define Dictionary_2_get_Count_m19703(__this, method) (( int32_t (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_get_Count_m18816_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Item(TKey)
#define Dictionary_2_get_Item_m19704(__this, ___key, method) (( IndexedSet_1_t515 * (*) (Dictionary_2_t383 *, Canvas_t372 *, MethodInfo*))Dictionary_2_get_Item_m18818_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m19705(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t383 *, Canvas_t372 *, IndexedSet_1_t515 *, MethodInfo*))Dictionary_2_set_Item_m18820_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m19706(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t383 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18822_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m19707(__this, ___size, method) (( void (*) (Dictionary_2_t383 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18824_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m19708(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t383 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18826_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m19709(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3495  (*) (Object_t * /* static, unused */, Canvas_t372 *, IndexedSet_1_t515 *, MethodInfo*))Dictionary_2_make_pair_m18828_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m19710(__this /* static, unused */, ___key, ___value, method) (( Canvas_t372 * (*) (Object_t * /* static, unused */, Canvas_t372 *, IndexedSet_1_t515 *, MethodInfo*))Dictionary_2_pick_key_m18830_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m19711(__this /* static, unused */, ___key, ___value, method) (( IndexedSet_1_t515 * (*) (Object_t * /* static, unused */, Canvas_t372 *, IndexedSet_1_t515 *, MethodInfo*))Dictionary_2_pick_value_m18832_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m19712(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t383 *, KeyValuePair_2U5BU5D_t4887*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18834_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Resize()
#define Dictionary_2_Resize_m19713(__this, method) (( void (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_Resize_m18836_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Add(TKey,TValue)
#define Dictionary_2_Add_m2706(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t383 *, Canvas_t372 *, IndexedSet_1_t515 *, MethodInfo*))Dictionary_2_Add_m18837_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Clear()
#define Dictionary_2_Clear_m19714(__this, method) (( void (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_Clear_m18839_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m19715(__this, ___key, method) (( bool (*) (Dictionary_2_t383 *, Canvas_t372 *, MethodInfo*))Dictionary_2_ContainsKey_m18841_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m19716(__this, ___value, method) (( bool (*) (Dictionary_2_t383 *, IndexedSet_1_t515 *, MethodInfo*))Dictionary_2_ContainsValue_m18843_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m19717(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t383 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m18845_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m19718(__this, ___sender, method) (( void (*) (Dictionary_2_t383 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18847_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::Remove(TKey)
#define Dictionary_2_Remove_m19719(__this, ___key, method) (( bool (*) (Dictionary_2_t383 *, Canvas_t372 *, MethodInfo*))Dictionary_2_Remove_m18849_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m2703(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t383 *, Canvas_t372 *, IndexedSet_1_t515 **, MethodInfo*))Dictionary_2_TryGetValue_m18850_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Keys()
#define Dictionary_2_get_Keys_m19720(__this, method) (( KeyCollection_t3512 * (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_get_Keys_m18852_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::get_Values()
#define Dictionary_2_get_Values_m19721(__this, method) (( ValueCollection_t3516 * (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_get_Values_m18854_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m19722(__this, ___key, method) (( Canvas_t372 * (*) (Dictionary_2_t383 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18856_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m19723(__this, ___value, method) (( IndexedSet_1_t515 * (*) (Dictionary_2_t383 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18858_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m19724(__this, ___pair, method) (( bool (*) (Dictionary_2_t383 *, KeyValuePair_2_t3495 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18860_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m19725(__this, method) (( Enumerator_t3514  (*) (Dictionary_2_t383 *, MethodInfo*))Dictionary_2_GetEnumerator_m18862_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m19726(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, Canvas_t372 *, IndexedSet_1_t515 *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18864_gshared)(__this /* static, unused */, ___key, ___value, method)
