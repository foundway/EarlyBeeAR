#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t4563;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1148;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ICollection_1_t5112;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct KeyCollection_t4564;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct ValueCollection_t4568;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3366;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct IDictionary_2_t5115;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>[]
struct KeyValuePair_2U5BU5D_t5116;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
struct IEnumerator_1_t5117;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_41.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__40.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor()
extern "C" void Dictionary_2__ctor_m31046_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m31046(__this, method) (( void (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2__ctor_m31046_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31048_gshared (Dictionary_2_t4563 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m31048(__this, ___comparer, method) (( void (*) (Dictionary_2_t4563 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m31048_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m31050_gshared (Dictionary_2_t4563 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m31050(__this, ___dictionary, method) (( void (*) (Dictionary_2_t4563 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m31050_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m31052_gshared (Dictionary_2_t4563 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m31052(__this, ___capacity, method) (( void (*) (Dictionary_2_t4563 *, int32_t, MethodInfo*))Dictionary_2__ctor_m31052_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31054_gshared (Dictionary_2_t4563 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m31054(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t4563 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m31054_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m31056_gshared (Dictionary_2_t4563 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m31056(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4563 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m31056_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31058_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31058(__this, method) (( Object_t* (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31058_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31060_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31060(__this, method) (( Object_t* (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31062_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m31062(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m31062_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31064_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m31064(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4563 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m31064_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31066_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m31066(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4563 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m31066_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31068_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m31068(__this, ___key, method) (( bool (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m31068_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31070_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m31070(__this, ___key, method) (( void (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m31070_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31072_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31072(__this, method) (( bool (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31072_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31074_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31074(__this, method) (( Object_t * (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31074_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31076_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31076(__this, method) (( bool (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31076_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31078_gshared (Dictionary_2_t4563 * __this, KeyValuePair_2_t4492  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31078(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t4563 *, KeyValuePair_2_t4492 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31078_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31080_gshared (Dictionary_2_t4563 * __this, KeyValuePair_2_t4492  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31080(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4563 *, KeyValuePair_2_t4492 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31080_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31082_gshared (Dictionary_2_t4563 * __this, KeyValuePair_2U5BU5D_t5116* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31082(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4563 *, KeyValuePair_2U5BU5D_t5116*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31082_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31084_gshared (Dictionary_2_t4563 * __this, KeyValuePair_2_t4492  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31084(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t4563 *, KeyValuePair_2_t4492 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31084_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31086_gshared (Dictionary_2_t4563 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m31086(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4563 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m31086_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31088_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31088(__this, method) (( Object_t * (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m31088_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31090_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31090(__this, method) (( Object_t* (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m31090_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31092_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31092(__this, method) (( Object_t * (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m31092_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m31094_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m31094(__this, method) (( int32_t (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_get_Count_m31094_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Item(TKey)
extern "C" KeyValuePair_2_t1273  Dictionary_2_get_Item_m31096_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m31096(__this, ___key, method) (( KeyValuePair_2_t1273  (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_get_Item_m31096_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m31098_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, KeyValuePair_2_t1273  ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m31098(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4563 *, Object_t *, KeyValuePair_2_t1273 , MethodInfo*))Dictionary_2_set_Item_m31098_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m31100_gshared (Dictionary_2_t4563 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m31100(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t4563 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m31100_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m31102_gshared (Dictionary_2_t4563 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m31102(__this, ___size, method) (( void (*) (Dictionary_2_t4563 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m31102_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m31104_gshared (Dictionary_2_t4563 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m31104(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4563 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m31104_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4492  Dictionary_2_make_pair_m31106_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1273  ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m31106(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4492  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1273 , MethodInfo*))Dictionary_2_make_pair_m31106_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m31108_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1273  ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m31108(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1273 , MethodInfo*))Dictionary_2_pick_key_m31108_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t1273  Dictionary_2_pick_value_m31110_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1273  ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m31110(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1273  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1273 , MethodInfo*))Dictionary_2_pick_value_m31110_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m31112_gshared (Dictionary_2_t4563 * __this, KeyValuePair_2U5BU5D_t5116* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m31112(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t4563 *, KeyValuePair_2U5BU5D_t5116*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m31112_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Resize()
extern "C" void Dictionary_2_Resize_m31114_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m31114(__this, method) (( void (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_Resize_m31114_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m31116_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, KeyValuePair_2_t1273  ___value, MethodInfo* method);
#define Dictionary_2_Add_m31116(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t4563 *, Object_t *, KeyValuePair_2_t1273 , MethodInfo*))Dictionary_2_Add_m31116_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Clear()
extern "C" void Dictionary_2_Clear_m31118_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m31118(__this, method) (( void (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_Clear_m31118_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m31120_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m31120(__this, ___key, method) (( bool (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_ContainsKey_m31120_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m31122_gshared (Dictionary_2_t4563 * __this, KeyValuePair_2_t1273  ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m31122(__this, ___value, method) (( bool (*) (Dictionary_2_t4563 *, KeyValuePair_2_t1273 , MethodInfo*))Dictionary_2_ContainsValue_m31122_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m31124_gshared (Dictionary_2_t4563 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m31124(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t4563 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m31124_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m31126_gshared (Dictionary_2_t4563 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m31126(__this, ___sender, method) (( void (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m31126_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m31128_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m31128(__this, ___key, method) (( bool (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_Remove_m31128_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m31130_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, KeyValuePair_2_t1273 * ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m31130(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t4563 *, Object_t *, KeyValuePair_2_t1273 *, MethodInfo*))Dictionary_2_TryGetValue_m31130_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Keys()
extern "C" KeyCollection_t4564 * Dictionary_2_get_Keys_m31132_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m31132(__this, method) (( KeyCollection_t4564 * (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_get_Keys_m31132_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Values()
extern "C" ValueCollection_t4568 * Dictionary_2_get_Values_m31134_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m31134(__this, method) (( ValueCollection_t4568 * (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_get_Values_m31134_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m31136_gshared (Dictionary_2_t4563 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m31136(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m31136_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t1273  Dictionary_2_ToTValue_m31138_gshared (Dictionary_2_t4563 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m31138(__this, ___value, method) (( KeyValuePair_2_t1273  (*) (Dictionary_2_t4563 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m31138_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m31140_gshared (Dictionary_2_t4563 * __this, KeyValuePair_2_t4492  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m31140(__this, ___pair, method) (( bool (*) (Dictionary_2_t4563 *, KeyValuePair_2_t4492 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m31140_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetEnumerator()
extern "C" Enumerator_t4566  Dictionary_2_GetEnumerator_m31142_gshared (Dictionary_2_t4563 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m31142(__this, method) (( Enumerator_t4566  (*) (Dictionary_2_t4563 *, MethodInfo*))Dictionary_2_GetEnumerator_m31142_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m31144_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t1273  ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m31144(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t1273 , MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m31144_gshared)(__this /* static, unused */, ___key, ___value, method)
