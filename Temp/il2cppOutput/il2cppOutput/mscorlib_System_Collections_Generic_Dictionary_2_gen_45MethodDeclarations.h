#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1719;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t4815;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t4711;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4715;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3318;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t5142;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t5143;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t5144;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__45.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m32278_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m32278(__this, method) (( void (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2__ctor_m32278_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32279_gshared (Dictionary_2_t1719 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m32279(__this, ___comparer, method) (( void (*) (Dictionary_2_t1719 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m32279_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m32280_gshared (Dictionary_2_t1719 * __this, Object_t* ___dictionary, MethodInfo* method);
#define Dictionary_2__ctor_m32280(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1719 *, Object_t*, MethodInfo*))Dictionary_2__ctor_m32280_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m32281_gshared (Dictionary_2_t1719 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m32281(__this, ___capacity, method) (( void (*) (Dictionary_2_t1719 *, int32_t, MethodInfo*))Dictionary_2__ctor_m32281_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m32282_gshared (Dictionary_2_t1719 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m32282(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1719 *, Object_t*, Object_t*, MethodInfo*))Dictionary_2__ctor_m32282_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m32283_gshared (Dictionary_2_t1719 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m32283(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1719 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2__ctor_m32283_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32284_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32284(__this, method) (( Object_t* (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m32284_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32285_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32285(__this, method) (( Object_t* (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m32285_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m32286_gshared (Dictionary_2_t1719 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m32286(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1719 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m32286_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m32287_gshared (Dictionary_2_t1719 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m32287(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1719 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m32287_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m32288_gshared (Dictionary_2_t1719 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m32288(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1719 *, Object_t *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m32288_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m32289_gshared (Dictionary_2_t1719 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m32289(__this, ___key, method) (( bool (*) (Dictionary_2_t1719 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m32289_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m32290_gshared (Dictionary_2_t1719 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m32290(__this, ___key, method) (( void (*) (Dictionary_2_t1719 *, Object_t *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m32290_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32291_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32291(__this, method) (( bool (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m32291_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32292_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32292(__this, method) (( Object_t * (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m32292_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32293_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32293(__this, method) (( bool (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m32293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32294_gshared (Dictionary_2_t1719 * __this, KeyValuePair_2_t4709  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32294(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1719 *, KeyValuePair_2_t4709 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m32294_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32295_gshared (Dictionary_2_t1719 * __this, KeyValuePair_2_t4709  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32295(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1719 *, KeyValuePair_2_t4709 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m32295_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32296_gshared (Dictionary_2_t1719 * __this, KeyValuePair_2U5BU5D_t5143* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32296(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1719 *, KeyValuePair_2U5BU5D_t5143*, int32_t, MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m32296_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32297_gshared (Dictionary_2_t1719 * __this, KeyValuePair_2_t4709  ___keyValuePair, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32297(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1719 *, KeyValuePair_2_t4709 , MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m32297_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m32298_gshared (Dictionary_2_t1719 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m32298(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1719 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m32298_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32299_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32299(__this, method) (( Object_t * (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32299_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32300_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32300(__this, method) (( Object_t* (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32300_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32301_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32301(__this, method) (( Object_t * (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32301_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32302_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m32302(__this, method) (( int32_t (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_get_Count_m32302_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m32303_gshared (Dictionary_2_t1719 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m32303(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1719 *, int32_t, MethodInfo*))Dictionary_2_get_Item_m32303_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32304_gshared (Dictionary_2_t1719 * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m32304(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1719 *, int32_t, int32_t, MethodInfo*))Dictionary_2_set_Item_m32304_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m32305_gshared (Dictionary_2_t1719 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m32305(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1719 *, int32_t, Object_t*, MethodInfo*))Dictionary_2_Init_m32305_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m32306_gshared (Dictionary_2_t1719 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m32306(__this, ___size, method) (( void (*) (Dictionary_2_t1719 *, int32_t, MethodInfo*))Dictionary_2_InitArrays_m32306_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32307_gshared (Dictionary_2_t1719 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m32307(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1719 *, Array_t *, int32_t, MethodInfo*))Dictionary_2_CopyToCheck_m32307_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4709  Dictionary_2_make_pair_m32308_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_make_pair_m32308(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t4709  (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_make_pair_m32308_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m32309_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m32309(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_pick_key_m32309_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m32310_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m32310(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_pick_value_m32310_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32311_gshared (Dictionary_2_t1719 * __this, KeyValuePair_2U5BU5D_t5143* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m32311(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1719 *, KeyValuePair_2U5BU5D_t5143*, int32_t, MethodInfo*))Dictionary_2_CopyTo_m32311_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m32312_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m32312(__this, method) (( void (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_Resize_m32312_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32313_gshared (Dictionary_2_t1719 * __this, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_Add_m32313(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1719 *, int32_t, int32_t, MethodInfo*))Dictionary_2_Add_m32313_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m32314_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m32314(__this, method) (( void (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_Clear_m32314_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32315_gshared (Dictionary_2_t1719 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m32315(__this, ___key, method) (( bool (*) (Dictionary_2_t1719 *, int32_t, MethodInfo*))Dictionary_2_ContainsKey_m32315_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m32316_gshared (Dictionary_2_t1719 * __this, int32_t ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m32316(__this, ___value, method) (( bool (*) (Dictionary_2_t1719 *, int32_t, MethodInfo*))Dictionary_2_ContainsValue_m32316_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m32317_gshared (Dictionary_2_t1719 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m32317(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1719 *, SerializationInfo_t1208 *, StreamingContext_t1209 , MethodInfo*))Dictionary_2_GetObjectData_m32317_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m32318_gshared (Dictionary_2_t1719 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m32318(__this, ___sender, method) (( void (*) (Dictionary_2_t1719 *, Object_t *, MethodInfo*))Dictionary_2_OnDeserialization_m32318_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32319_gshared (Dictionary_2_t1719 * __this, int32_t ___key, MethodInfo* method);
#define Dictionary_2_Remove_m32319(__this, ___key, method) (( bool (*) (Dictionary_2_t1719 *, int32_t, MethodInfo*))Dictionary_2_Remove_m32319_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32320_gshared (Dictionary_2_t1719 * __this, int32_t ___key, int32_t* ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m32320(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1719 *, int32_t, int32_t*, MethodInfo*))Dictionary_2_TryGetValue_m32320_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t4711 * Dictionary_2_get_Keys_m32321_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m32321(__this, method) (( KeyCollection_t4711 * (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_get_Keys_m32321_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t4715 * Dictionary_2_get_Values_m32322_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m32322(__this, method) (( ValueCollection_t4715 * (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_get_Values_m32322_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m32323_gshared (Dictionary_2_t1719 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m32323(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1719 *, Object_t *, MethodInfo*))Dictionary_2_ToTKey_m32323_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m32324_gshared (Dictionary_2_t1719 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m32324(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1719 *, Object_t *, MethodInfo*))Dictionary_2_ToTValue_m32324_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32325_gshared (Dictionary_2_t1719 * __this, KeyValuePair_2_t4709  ___pair, MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m32325(__this, ___pair, method) (( bool (*) (Dictionary_2_t1719 *, KeyValuePair_2_t4709 , MethodInfo*))Dictionary_2_ContainsKeyValuePair_m32325_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4713  Dictionary_2_GetEnumerator_m32326_gshared (Dictionary_2_t1719 * __this, MethodInfo* method);
#define Dictionary_2_GetEnumerator_m32326(__this, method) (( Enumerator_t4713  (*) (Dictionary_2_t1719 *, MethodInfo*))Dictionary_2_GetEnumerator_m32326_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m32327_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m32327(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Object_t * /* static, unused */, int32_t, int32_t, MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m32327_gshared)(__this /* static, unused */, ___key, ___value, method)
