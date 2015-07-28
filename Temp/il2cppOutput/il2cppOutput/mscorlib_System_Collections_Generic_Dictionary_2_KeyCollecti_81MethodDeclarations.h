#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct KeyCollection_t4564;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
struct Dictionary_2_t4563;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t258;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_82.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m31145_gshared (KeyCollection_t4564 * __this, Dictionary_2_t4563 * ___dictionary, MethodInfo* method);
#define KeyCollection__ctor_m31145(__this, ___dictionary, method) (( void (*) (KeyCollection_t4564 *, Dictionary_2_t4563 *, MethodInfo*))KeyCollection__ctor_m31145_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m31146_gshared (KeyCollection_t4564 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m31146(__this, ___item, method) (( void (*) (KeyCollection_t4564 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m31146_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m31147_gshared (KeyCollection_t4564 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m31147(__this, method) (( void (*) (KeyCollection_t4564 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m31147_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m31148_gshared (KeyCollection_t4564 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m31148(__this, ___item, method) (( bool (*) (KeyCollection_t4564 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m31148_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m31149_gshared (KeyCollection_t4564 * __this, Object_t * ___item, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m31149(__this, ___item, method) (( bool (*) (KeyCollection_t4564 *, Object_t *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m31149_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m31150_gshared (KeyCollection_t4564 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m31150(__this, method) (( Object_t* (*) (KeyCollection_t4564 *, MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m31150_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m31151_gshared (KeyCollection_t4564 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m31151(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4564 *, Array_t *, int32_t, MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m31151_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m31152_gshared (KeyCollection_t4564 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m31152(__this, method) (( Object_t * (*) (KeyCollection_t4564 *, MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m31152_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m31153_gshared (KeyCollection_t4564 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m31153(__this, method) (( bool (*) (KeyCollection_t4564 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m31153_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m31154_gshared (KeyCollection_t4564 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m31154(__this, method) (( bool (*) (KeyCollection_t4564 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m31154_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m31155_gshared (KeyCollection_t4564 * __this, MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m31155(__this, method) (( Object_t * (*) (KeyCollection_t4564 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m31155_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m31156_gshared (KeyCollection_t4564 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method);
#define KeyCollection_CopyTo_m31156(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4564 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))KeyCollection_CopyTo_m31156_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::GetEnumerator()
extern "C" Enumerator_t4565  KeyCollection_GetEnumerator_m31157_gshared (KeyCollection_t4564 * __this, MethodInfo* method);
#define KeyCollection_GetEnumerator_m31157(__this, method) (( Enumerator_t4565  (*) (KeyCollection_t4564 *, MethodInfo*))KeyCollection_GetEnumerator_m31157_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m31158_gshared (KeyCollection_t4564 * __this, MethodInfo* method);
#define KeyCollection_get_Count_m31158(__this, method) (( int32_t (*) (KeyCollection_t4564 *, MethodInfo*))KeyCollection_get_Count_m31158_gshared)(__this, method)
