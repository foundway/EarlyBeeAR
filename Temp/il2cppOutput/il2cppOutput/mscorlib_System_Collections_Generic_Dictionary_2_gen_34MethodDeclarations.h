#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3408;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1148;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t3411;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t3415;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3366;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t4869;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4870;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4871;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m18768_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m18768(__this, method) (( void (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2__ctor_m18768_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18770_gshared (Dictionary_2_t3408 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m18770(__this, ___comparer, method) (( void (*) (Dictionary_2_t3408 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18770_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m18772_gshared (Dictionary_2_t3408 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m18772(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3408 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m18772_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m18774_gshared (Dictionary_2_t3408 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m18774(__this, ___capacity, method) (( void (*) (Dictionary_2_t3408 *, int32_t, MethodInfo*))Dictionary_2__ctor_m18774_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18776_gshared (Dictionary_2_t3408 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m18776(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3408 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m18776_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m18778_gshared (Dictionary_2_t3408 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m18778(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3408 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m18778_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18780_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18780(__this, method) (( Object_t* (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18780_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18782_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18782(__this, method) (( Object_t* (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18782_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18784_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m18784(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m18784_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18786_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m18786(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3408 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m18786_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18788_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m18788(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3408 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m18788_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18790_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m18790(__this, ___key, method) (( bool (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m18790_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18792_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m18792(__this, ___key, method) (( void (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m18792_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18794_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18794(__this, method) (( bool (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18794_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18796_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18796(__this, method) (( Object_t * (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18796_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18798_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18798(__this, method) (( bool (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18798_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18800_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2_t3409  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18800(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3408 *, KeyValuePair_2_t3409 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18800_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18802_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2_t3409  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18802(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3408 *, KeyValuePair_2_t3409 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18802_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18804_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2U5BU5D_t4870* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18804(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3408 *, KeyValuePair_2U5BU5D_t4870*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18804_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18806_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2_t3409  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18806(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3408 *, KeyValuePair_2_t3409 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18806_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18808_gshared (Dictionary_2_t3408 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m18808(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m18808_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810(__this, method) (( Object_t * (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18812_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18812(__this, method) (( Object_t* (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18812_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18814_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18814(__this, method) (( Object_t * (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18814_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18816_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m18816(__this, method) (( int32_t (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_get_Count_m18816_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m18818_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m18818(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m18818_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18820_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m18820(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3408 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_set_Item_m18820_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m18822_gshared (Dictionary_2_t3408 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m18822(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3408 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m18822_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m18824_gshared (Dictionary_2_t3408 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m18824(__this, ___size, method) (( void (*) (Dictionary_2_t3408 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m18824_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18826_gshared (Dictionary_2_t3408 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m18826(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m18826_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3409  Dictionary_2_make_pair_m18828_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m18828(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3409  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_make_pair_m18828_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m18830_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m18830(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_key_m18830_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m18832_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m18832(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_pick_value_m18832_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18834_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2U5BU5D_t4870* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m18834(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3408 *, KeyValuePair_2U5BU5D_t4870*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m18834_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m18836_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m18836(__this, method) (( void (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_Resize_m18836_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18837_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m18837(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3408 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_Add_m18837_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m18839_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m18839(__this, method) (( void (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_Clear_m18839_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18841_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m18841(__this, ___key, method) (( bool (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m18841_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m18843_gshared (Dictionary_2_t3408 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m18843(__this, ___value, method) (( bool (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m18843_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m18845_gshared (Dictionary_2_t3408 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m18845(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3408 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m18845_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m18847_gshared (Dictionary_2_t3408 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m18847(__this, ___sender, method) (( void (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m18847_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18849_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m18849(__this, ___key, method) (( bool (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m18849_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18850_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m18850(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3408 *, Object_t *, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m18850_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t3411 * Dictionary_2_get_Keys_m18852_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m18852(__this, method) (( KeyCollection_t3411 * (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_get_Keys_m18852_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t3415 * Dictionary_2_get_Values_m18854_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m18854(__this, method) (( ValueCollection_t3415 * (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_get_Values_m18854_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18856_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m18856(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m18856_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m18858_gshared (Dictionary_2_t3408 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m18858(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m18858_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18860_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2_t3409  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m18860(__this, ___pair, method) (( bool (*) (Dictionary_2_t3408 *, KeyValuePair_2_t3409 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m18860_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3413  Dictionary_2_GetEnumerator_m18862_gshared (Dictionary_2_t3408 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m18862(__this, method) (( Enumerator_t3413  (*) (Dictionary_2_t3408 *, MethodInfo*))Dictionary_2_GetEnumerator_m18862_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m18864_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m18864(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m18864_gshared)(__this /* static, unused */, ___key, ___value, method)
