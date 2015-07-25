#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t4432;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t5090;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1148;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
struct KeyCollection_t4438;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
struct ValueCollection_t4442;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t4430;
// System.Collections.Generic.IDictionary`2<System.UInt64,System.Object>
struct IDictionary_2_t5091;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>[]
struct KeyValuePair_2U5BU5D_t5092;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct IEnumerator_1_t5093;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__34.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m29847_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m29847(__this, method) (( void (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2__ctor_m29847_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m29849_gshared (Dictionary_2_t4432 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m29849(__this, ___comparer, method) (( void (*) (Dictionary_2_t4432 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m29849_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m29851_gshared (Dictionary_2_t4432 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m29851(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4432 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m29851_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m29853_gshared (Dictionary_2_t4432 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m29853(__this, ___capacity, method) (( void (*) (Dictionary_2_t4432 *, int32_t, MethodInfo*))Dictionary_2__ctor_m29853_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m29855_gshared (Dictionary_2_t4432 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m29855(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4432 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m29855_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m29857_gshared (Dictionary_2_t4432 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m29857(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4432 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m29857_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29859_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29859(__this, method) (( Object_t* (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m29859_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29861_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29861(__this, method) (( Object_t* (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m29861_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m29863_gshared (Dictionary_2_t4432 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m29863(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4432 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m29863_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m29865_gshared (Dictionary_2_t4432 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m29865(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4432 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m29865_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m29867_gshared (Dictionary_2_t4432 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m29867(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4432 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m29867_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m29869_gshared (Dictionary_2_t4432 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m29869(__this, ___key, method) (( bool (*) (Dictionary_2_t4432 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m29869_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m29871_gshared (Dictionary_2_t4432 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m29871(__this, ___key, method) (( void (*) (Dictionary_2_t4432 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m29871_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29873_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29873(__this, method) (( bool (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m29873_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29875_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29875(__this, method) (( Object_t * (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m29875_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29877_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29877(__this, method) (( bool (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m29877_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29879_gshared (Dictionary_2_t4432 * __this, KeyValuePair_2_t4433  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29879(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4432 *, KeyValuePair_2_t4433 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m29879_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29881_gshared (Dictionary_2_t4432 * __this, KeyValuePair_2_t4433  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29881(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4432 *, KeyValuePair_2_t4433 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m29881_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29883_gshared (Dictionary_2_t4432 * __this, KeyValuePair_2U5BU5D_t5092* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29883(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4432 *, KeyValuePair_2U5BU5D_t5092*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m29883_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29885_gshared (Dictionary_2_t4432 * __this, KeyValuePair_2_t4433  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29885(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4432 *, KeyValuePair_2_t4433 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m29885_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m29887_gshared (Dictionary_2_t4432 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m29887(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4432 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m29887_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29889_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29889(__this, method) (( Object_t * (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m29889_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29891_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29891(__this, method) (( Object_t* (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m29891_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29893_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29893(__this, method) (( Object_t * (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m29893_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m29895_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m29895(__this, method) (( int32_t (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_get_Count_m29895_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m29897_gshared (Dictionary_2_t4432 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m29897(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4432 *, uint64_t, MethodInfo*))Dictionary_2_get_Item_m29897_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m29899_gshared (Dictionary_2_t4432 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m29899(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4432 *, uint64_t, Object_t *, MethodInfo*))Dictionary_2_set_Item_m29899_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m29901_gshared (Dictionary_2_t4432 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m29901(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4432 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m29901_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m29903_gshared (Dictionary_2_t4432 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m29903(__this, ___size, method) (( void (*) (Dictionary_2_t4432 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m29903_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m29905_gshared (Dictionary_2_t4432 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m29905(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4432 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m29905_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4433  Dictionary_2_make_pair_m29907_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m29907(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4433  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_make_pair_m29907_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_key(TKey,TValue)
extern "C" uint64_t Dictionary_2_pick_key_m29909_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m29909(__this /* static, unused */, ___key, ___value, method) (( uint64_t (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_pick_key_m29909_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m29911_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m29911(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_pick_value_m29911_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m29913_gshared (Dictionary_2_t4432 * __this, KeyValuePair_2U5BU5D_t5092* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m29913(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4432 *, KeyValuePair_2U5BU5D_t5092*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m29913_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m29915_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m29915(__this, method) (( void (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_Resize_m29915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m29917_gshared (Dictionary_2_t4432 * __this, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m29917(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4432 *, uint64_t, Object_t *, MethodInfo*))Dictionary_2_Add_m29917_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m29919_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m29919(__this, method) (( void (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_Clear_m29919_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m29921_gshared (Dictionary_2_t4432 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m29921(__this, ___key, method) (( bool (*) (Dictionary_2_t4432 *, uint64_t, MethodInfo*))Dictionary_2_ContainsKey_m29921_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m29923_gshared (Dictionary_2_t4432 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m29923(__this, ___value, method) (( bool (*) (Dictionary_2_t4432 *, Object_t *, MethodInfo*))Dictionary_2_ContainsValue_m29923_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m29925_gshared (Dictionary_2_t4432 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m29925(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4432 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m29925_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m29927_gshared (Dictionary_2_t4432 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m29927(__this, ___sender, method) (( void (*) (Dictionary_2_t4432 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m29927_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m29929_gshared (Dictionary_2_t4432 * __this, uint64_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m29929(__this, ___key, method) (( bool (*) (Dictionary_2_t4432 *, uint64_t, MethodInfo*))Dictionary_2_Remove_m29929_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m29930_gshared (Dictionary_2_t4432 * __this, uint64_t ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m29930(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4432 *, uint64_t, Object_t **, MethodInfo*))Dictionary_2_TryGetValue_m29930_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Keys()
extern "C" KeyCollection_t4438 * Dictionary_2_get_Keys_m29932_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m29932(__this, method) (( KeyCollection_t4438 * (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_get_Keys_m29932_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::get_Values()
extern "C" ValueCollection_t4442 * Dictionary_2_get_Values_m29934_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m29934(__this, method) (( ValueCollection_t4442 * (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_get_Values_m29934_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTKey(System.Object)
extern "C" uint64_t Dictionary_2_ToTKey_m29936_gshared (Dictionary_2_t4432 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m29936(__this, ___key, method) (( uint64_t (*) (Dictionary_2_t4432 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m29936_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m29938_gshared (Dictionary_2_t4432 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m29938(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t4432 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m29938_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m29940_gshared (Dictionary_2_t4432 * __this, KeyValuePair_2_t4433  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m29940(__this, ___pair, method) (( bool (*) (Dictionary_2_t4432 *, KeyValuePair_2_t4433 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m29940_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::GetEnumerator()
extern "C" Enumerator_t4440  Dictionary_2_GetEnumerator_m29942_gshared (Dictionary_2_t4432 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m29942(__this, method) (( Enumerator_t4440  (*) (Dictionary_2_t4432 *, MethodInfo*))Dictionary_2_GetEnumerator_m29942_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m29944_gshared (Object_t * __this /* static, unused */, uint64_t ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m29944(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, uint64_t, Object_t *, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m29944_gshared)(__this /* static, unused */, ___key, ___value, method)
