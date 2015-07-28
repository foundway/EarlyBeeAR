#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t4371;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1148;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t5071;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t4377;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t4381;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3366;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t5075;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t5076;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t5077;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m29252_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m29252(__this, method) (( void (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2__ctor_m29252_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m29254_gshared (Dictionary_2_t4371 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m29254(__this, ___comparer, method) (( void (*) (Dictionary_2_t4371 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m29254_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m29256_gshared (Dictionary_2_t4371 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m29256(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4371 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m29256_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m29258_gshared (Dictionary_2_t4371 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m29258(__this, ___capacity, method) (( void (*) (Dictionary_2_t4371 *, int32_t, MethodInfo*))Dictionary_2__ctor_m29258_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m29260_gshared (Dictionary_2_t4371 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m29260(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4371 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m29260_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m29262_gshared (Dictionary_2_t4371 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m29262(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4371 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m29262_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29264_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29264(__this, method) (( Object_t* (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29264_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29266_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29266(__this, method) (( Object_t* (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29266_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m29268_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m29268(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m29268_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m29270_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m29270(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4371 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m29270_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m29272_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m29272(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4371 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m29272_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m29274_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m29274(__this, ___key, method) (( bool (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m29274_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m29276_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m29276(__this, ___key, method) (( void (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m29276_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29278_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29278(__this, method) (( bool (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29278_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29280_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29280(__this, method) (( Object_t * (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29280_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29282_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29282(__this, method) (( bool (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29282_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29284_gshared (Dictionary_2_t4371 * __this, KeyValuePair_2_t4372  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29284(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4371 *, KeyValuePair_2_t4372 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29284_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29286_gshared (Dictionary_2_t4371 * __this, KeyValuePair_2_t4372  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29286(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4371 *, KeyValuePair_2_t4372 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29286_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29288_gshared (Dictionary_2_t4371 * __this, KeyValuePair_2U5BU5D_t5076* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29288(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4371 *, KeyValuePair_2U5BU5D_t5076*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29288_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29290_gshared (Dictionary_2_t4371 * __this, KeyValuePair_2_t4372  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29290(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4371 *, KeyValuePair_2_t4372 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29290_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m29292_gshared (Dictionary_2_t4371 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m29292(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4371 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m29292_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29294_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29294(__this, method) (( Object_t * (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29294_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29296_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29296(__this, method) (( Object_t* (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29296_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29298_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29298(__this, method) (( Object_t * (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29298_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m29299_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m29299(__this, method) (( int32_t (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_get_Count_m29299_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m29301_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m29301(__this, ___key, method) (( int64_t (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m29301_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m29303_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m29303(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4371 *, Object_t *, int64_t, MethodInfo*))Dictionary_2_set_Item_m29303_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m29305_gshared (Dictionary_2_t4371 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m29305(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4371 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m29305_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m29307_gshared (Dictionary_2_t4371 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m29307(__this, ___size, method) (( void (*) (Dictionary_2_t4371 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m29307_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m29309_gshared (Dictionary_2_t4371 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m29309(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4371 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m29309_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4372  Dictionary_2_make_pair_m29311_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m29311(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4372  (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_make_pair_m29311_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m29313_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m29313(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_pick_key_m29313_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m29315_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m29315(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_pick_value_m29315_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m29317_gshared (Dictionary_2_t4371 * __this, KeyValuePair_2U5BU5D_t5076* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m29317(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4371 *, KeyValuePair_2U5BU5D_t5076*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m29317_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m29319_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m29319(__this, method) (( void (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_Resize_m29319_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m29321_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m29321(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4371 *, Object_t *, int64_t, MethodInfo*))Dictionary_2_Add_m29321_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m29323_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m29323(__this, method) (( void (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_Clear_m29323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m29325_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m29325(__this, ___key, method) (( bool (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m29325_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m29327_gshared (Dictionary_2_t4371 * __this, int64_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m29327(__this, ___value, method) (( bool (*) (Dictionary_2_t4371 *, int64_t, MethodInfo*))Dictionary_2_ContainsValue_m29327_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m29329_gshared (Dictionary_2_t4371 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m29329(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4371 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m29329_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m29331_gshared (Dictionary_2_t4371 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m29331(__this, ___sender, method) (( void (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m29331_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m29333_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m29333(__this, ___key, method) (( bool (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m29333_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m29335_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, int64_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m29335(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4371 *, Object_t *, int64_t*, MethodInfo*))Dictionary_2_TryGetValue_m29335_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t4377 * Dictionary_2_get_Keys_m29337_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m29337(__this, method) (( KeyCollection_t4377 * (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_get_Keys_m29337_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t4381 * Dictionary_2_get_Values_m29339_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m29339(__this, method) (( ValueCollection_t4381 * (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_get_Values_m29339_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m29341_gshared (Dictionary_2_t4371 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m29341(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m29341_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m29343_gshared (Dictionary_2_t4371 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m29343(__this, ___value, method) (( int64_t (*) (Dictionary_2_t4371 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m29343_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m29345_gshared (Dictionary_2_t4371 * __this, KeyValuePair_2_t4372  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m29345(__this, ___pair, method) (( bool (*) (Dictionary_2_t4371 *, KeyValuePair_2_t4372 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m29345_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t4379  Dictionary_2_GetEnumerator_m29347_gshared (Dictionary_2_t4371 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m29347(__this, method) (( Enumerator_t4379  (*) (Dictionary_2_t4371 *, MethodInfo*))Dictionary_2_GetEnumerator_m29347_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m29349_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m29349(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, Object_t *, int64_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m29349_gshared)(__this /* static, unused */, ___key, ___value, method)
