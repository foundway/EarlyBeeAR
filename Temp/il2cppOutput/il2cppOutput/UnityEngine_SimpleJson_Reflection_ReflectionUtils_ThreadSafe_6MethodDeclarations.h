﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t4501;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1148;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t4499;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4870;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t4871;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m30432_gshared (ThreadSafeDictionary_2_t4501 * __this, ThreadSafeDictionaryValueFactory_2_t4499 * ___valueFactory, MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m30432(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t4501 *, ThreadSafeDictionaryValueFactory_2_t4499 *, MethodInfo*))ThreadSafeDictionary_2__ctor_m30432_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m30434_gshared (ThreadSafeDictionary_2_t4501 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m30434(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4501 *, MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m30434_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m30436_gshared (ThreadSafeDictionary_2_t4501 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m30436(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4501 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Get_m30436_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m30438_gshared (ThreadSafeDictionary_2_t4501 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m30438(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4501 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_AddValue_m30438_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m30440_gshared (ThreadSafeDictionary_2_t4501 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m30440(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t4501 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Add_m30440_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m30442_gshared (ThreadSafeDictionary_2_t4501 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m30442(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4501 *, MethodInfo*))ThreadSafeDictionary_2_get_Keys_m30442_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m30444_gshared (ThreadSafeDictionary_2_t4501 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m30444(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t4501 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_Remove_m30444_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m30446_gshared (ThreadSafeDictionary_2_t4501 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m30446(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t4501 *, Object_t *, Object_t **, MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m30446_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m30448_gshared (ThreadSafeDictionary_2_t4501 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m30448(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4501 *, MethodInfo*))ThreadSafeDictionary_2_get_Values_m30448_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m30450_gshared (ThreadSafeDictionary_2_t4501 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m30450(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t4501 *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_get_Item_m30450_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m30452_gshared (ThreadSafeDictionary_2_t4501 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m30452(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t4501 *, Object_t *, Object_t *, MethodInfo*))ThreadSafeDictionary_2_set_Item_m30452_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m30454_gshared (ThreadSafeDictionary_2_t4501 * __this, KeyValuePair_2_t3409  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m30454(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t4501 *, KeyValuePair_2_t3409 , MethodInfo*))ThreadSafeDictionary_2_Add_m30454_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m30456_gshared (ThreadSafeDictionary_2_t4501 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m30456(__this, method) (( void (*) (ThreadSafeDictionary_2_t4501 *, MethodInfo*))ThreadSafeDictionary_2_Clear_m30456_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m30458_gshared (ThreadSafeDictionary_2_t4501 * __this, KeyValuePair_2_t3409  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m30458(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t4501 *, KeyValuePair_2_t3409 , MethodInfo*))ThreadSafeDictionary_2_Contains_m30458_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m30460_gshared (ThreadSafeDictionary_2_t4501 * __this, KeyValuePair_2U5BU5D_t4870* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m30460(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t4501 *, KeyValuePair_2U5BU5D_t4870*, int32_t, MethodInfo*))ThreadSafeDictionary_2_CopyTo_m30460_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m30462_gshared (ThreadSafeDictionary_2_t4501 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m30462(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t4501 *, MethodInfo*))ThreadSafeDictionary_2_get_Count_m30462_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m30464_gshared (ThreadSafeDictionary_2_t4501 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m30464(__this, method) (( bool (*) (ThreadSafeDictionary_2_t4501 *, MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m30464_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m30466_gshared (ThreadSafeDictionary_2_t4501 * __this, KeyValuePair_2_t3409  ___item, MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m30466(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t4501 *, KeyValuePair_2_t3409 , MethodInfo*))ThreadSafeDictionary_2_Remove_m30466_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m30468_gshared (ThreadSafeDictionary_2_t4501 * __this, MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m30468(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t4501 *, MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m30468_gshared)(__this, method)