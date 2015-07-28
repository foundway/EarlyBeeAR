﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t4673;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1148;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t5136;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t4676;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t4680;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3366;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t5137;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t5138;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t5139;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__43.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m31960_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m31960(__this, method) (( void (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2__ctor_m31960_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31961_gshared (Dictionary_2_t4673 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m31961(__this, ___comparer, method) (( void (*) (Dictionary_2_t4673 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m31961_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31963_gshared (Dictionary_2_t4673 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m31963(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4673 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m31963_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31965_gshared (Dictionary_2_t4673 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m31965(__this, ___capacity, method) (( void (*) (Dictionary_2_t4673 *, int32_t, MethodInfo*))Dictionary_2__ctor_m31965_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31967_gshared (Dictionary_2_t4673 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m31967(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4673 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m31967_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31969_gshared (Dictionary_2_t4673 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m31969(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4673 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m31969_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31971_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31971(__this, method) (( Object_t* (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31971_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31973_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31973(__this, method) (( Object_t* (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31973_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31975_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31975(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31975_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31977_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31977(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4673 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31977_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31979_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31979(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4673 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31979_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31981_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31981(__this, ___key, method) (( bool (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31981_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31983_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31983(__this, ___key, method) (( void (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31983_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31985_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31985(__this, method) (( bool (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31985_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31987_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31987(__this, method) (( Object_t * (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31987_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31989_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31989(__this, method) (( bool (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31989_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31991_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2_t4674  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31991(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4673 *, KeyValuePair_2_t4674 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31991_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31993_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2_t4674  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31993(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4673 *, KeyValuePair_2_t4674 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31993_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31995_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2U5BU5D_t5138* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31995(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4673 *, KeyValuePair_2U5BU5D_t5138*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31995_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31997_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2_t4674  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31997(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4673 *, KeyValuePair_2_t4674 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31997_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31999_gshared (Dictionary_2_t4673 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31999(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31999_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32001_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32001(__this, method) (( Object_t * (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32001_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32003_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32003(__this, method) (( Object_t* (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32003_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32005_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32005(__this, method) (( Object_t * (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32005_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32007_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m32007(__this, method) (( int32_t (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_get_Count_m32007_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m32009_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m32009(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m32009_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32011_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m32011(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4673 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_set_Item_m32011_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m32013_gshared (Dictionary_2_t4673 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m32013(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4673 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m32013_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m32015_gshared (Dictionary_2_t4673 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m32015(__this, ___size, method) (( void (*) (Dictionary_2_t4673 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m32015_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32017_gshared (Dictionary_2_t4673 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m32017(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m32017_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4674  Dictionary_2_make_pair_m32019_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m32019(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4674  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_make_pair_m32019_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m32021_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m32021(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_key_m32021_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m32023_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m32023(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_pick_value_m32023_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32025_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2U5BU5D_t5138* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m32025(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4673 *, KeyValuePair_2U5BU5D_t5138*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m32025_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m32027_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m32027(__this, method) (( void (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_Resize_m32027_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32028_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m32028(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4673 *, Object_t *, uint8_t, MethodInfo*))Dictionary_2_Add_m32028_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m32030_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m32030(__this, method) (( void (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_Clear_m32030_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32032_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m32032(__this, ___key, method) (( bool (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m32032_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m32034_gshared (Dictionary_2_t4673 * __this, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m32034(__this, ___value, method) (( bool (*) (Dictionary_2_t4673 *, uint8_t, MethodInfo*))Dictionary_2_ContainsValue_m32034_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m32036_gshared (Dictionary_2_t4673 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m32036(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4673 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m32036_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m32038_gshared (Dictionary_2_t4673 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m32038(__this, ___sender, method) (( void (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m32038_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32040_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m32040(__this, ___key, method) (( bool (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m32040_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32042_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m32042(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4673 *, Object_t *, uint8_t*, MethodInfo*))Dictionary_2_TryGetValue_m32042_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t4676 * Dictionary_2_get_Keys_m32044_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m32044(__this, method) (( KeyCollection_t4676 * (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_get_Keys_m32044_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t4680 * Dictionary_2_get_Values_m32046_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m32046(__this, method) (( ValueCollection_t4680 * (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_get_Values_m32046_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m32048_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m32048(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m32048_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m32050_gshared (Dictionary_2_t4673 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m32050(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m32050_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32052_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2_t4674  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m32052(__this, ___pair, method) (( bool (*) (Dictionary_2_t4673 *, KeyValuePair_2_t4674 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m32052_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4678  Dictionary_2_GetEnumerator_m32054_gshared (Dictionary_2_t4673 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32054(__this, method) (( Enumerator_t4678  (*) (Dictionary_2_t4673 *, MethodInfo*))Dictionary_2_GetEnumerator_m32054_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m32056_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m32056(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m32056_gshared)(__this /* static, unused */, ___key, ___value, method)
