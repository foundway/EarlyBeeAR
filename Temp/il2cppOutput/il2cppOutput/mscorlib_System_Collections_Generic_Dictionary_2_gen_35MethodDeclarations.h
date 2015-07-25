#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3817;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1148;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t4945;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t3820;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t3824;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3366;
// System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>
struct IDictionary_2_t4949;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t4950;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t4951;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m23129_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m23129(__this, method) (( void (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2__ctor_m23129_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23131_gshared (Dictionary_2_t3817 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m23131(__this, ___comparer, method) (( void (*) (Dictionary_2_t3817 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m23131_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m23133_gshared (Dictionary_2_t3817 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m23133(__this, ___dictionary, method) (( void (*) (Dictionary_2_t3817 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m23133_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23135_gshared (Dictionary_2_t3817 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m23135(__this, ___capacity, method) (( void (*) (Dictionary_2_t3817 *, int32_t, MethodInfo*))Dictionary_2__ctor_m23135_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23137_gshared (Dictionary_2_t3817 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m23137(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t3817 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m23137_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23139_gshared (Dictionary_2_t3817 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m23139(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3817 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m23139_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23141_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23141(__this, method) (( Object_t* (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23141_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23143_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23143(__this, method) (( Object_t* (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23143_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23145_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23145(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23145_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23147_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23147(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23147_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23149_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23149(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23149_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23151_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23151(__this, ___key, method) (( bool (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23151_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23153_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23153(__this, ___key, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23153_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23155_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23155(__this, method) (( bool (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23155_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23157_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23157(__this, method) (( Object_t * (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23157_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23159_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23159(__this, method) (( bool (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23159_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23161_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3818  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23161(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3818 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23161_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23163_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3818  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23163(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3818 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23163_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23165_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2U5BU5D_t4950* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23165(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3817 *, KeyValuePair_2U5BU5D_t4950*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23165_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23167_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3818  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23167(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3818 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23167_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23169_gshared (Dictionary_2_t3817 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23169(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23169_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23171_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23171(__this, method) (( Object_t * (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23171_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23173_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23173(__this, method) (( Object_t* (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23173_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23175_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23175(__this, method) (( Object_t * (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23177_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m23177(__this, method) (( int32_t (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_get_Count_m23177_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m23178_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m23178(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m23178_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23180_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m23180(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, uint16_t, MethodInfo*))Dictionary_2_set_Item_m23180_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23182_gshared (Dictionary_2_t3817 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m23182(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t3817 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m23182_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23184_gshared (Dictionary_2_t3817 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m23184(__this, ___size, method) (( void (*) (Dictionary_2_t3817 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m23184_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23186_gshared (Dictionary_2_t3817 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23186(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m23186_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3818  Dictionary_2_make_pair_m23188_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m23188(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3818  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, MethodInfo*))Dictionary_2_make_pair_m23188_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m23190_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m23190(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, MethodInfo*))Dictionary_2_pick_key_m23190_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m23192_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m23192(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, MethodInfo*))Dictionary_2_pick_value_m23192_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23194_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2U5BU5D_t4950* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m23194(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t3817 *, KeyValuePair_2U5BU5D_t4950*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m23194_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m23196_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m23196(__this, method) (( void (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_Resize_m23196_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23197_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m23197(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, uint16_t, MethodInfo*))Dictionary_2_Add_m23197_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m23199_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m23199(__this, method) (( void (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_Clear_m23199_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23201_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m23201(__this, ___key, method) (( bool (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m23201_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23203_gshared (Dictionary_2_t3817 * __this, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m23203(__this, ___value, method) (( bool (*) (Dictionary_2_t3817 *, uint16_t, MethodInfo*))Dictionary_2_ContainsValue_m23203_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23205_gshared (Dictionary_2_t3817 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m23205(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t3817 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m23205_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23207_gshared (Dictionary_2_t3817 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23207(__this, ___sender, method) (( void (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m23207_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23209_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m23209(__this, ___key, method) (( bool (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m23209_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23211_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, uint16_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m23211(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t3817 *, Object_t *, uint16_t*, MethodInfo*))Dictionary_2_TryGetValue_m23211_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t3820 * Dictionary_2_get_Keys_m23213_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m23213(__this, method) (( KeyCollection_t3820 * (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_get_Keys_m23213_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t3824 * Dictionary_2_get_Values_m23215_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m23215(__this, method) (( ValueCollection_t3824 * (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_get_Values_m23215_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23217_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m23217(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m23217_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m23219_gshared (Dictionary_2_t3817 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m23219(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m23219_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23221_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3818  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23221(__this, ___pair, method) (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3818 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23221_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t3822  Dictionary_2_GetEnumerator_m23223_gshared (Dictionary_2_t3817 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23223(__this, method) (( Enumerator_t3822  (*) (Dictionary_2_t3817 *, MethodInfo*))Dictionary_2_GetEnumerator_m23223_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m23225_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23225(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23225_gshared)(__this /* static, unused */, ___key, ___value, method)
