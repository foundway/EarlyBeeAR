﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t4311;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1057;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t4829;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String[]
struct StringU5BU5D_t208;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_63.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13MethodDeclarations.h"
#define KeyCollection__ctor_m28557(__this, ___dictionary, method) (( void (*) (KeyCollection_t4311 *, Dictionary_2_t1057 *, MethodInfo*))KeyCollection__ctor_m18876_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m28558(__this, ___item, method) (( void (*) (KeyCollection_t4311 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m28559(__this, method) (( void (*) (KeyCollection_t4311 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18878_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m28560(__this, ___item, method) (( bool (*) (KeyCollection_t4311 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18879_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m28561(__this, ___item, method) (( bool (*) (KeyCollection_t4311 *, String_t*, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18880_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m28562(__this, method) (( Object_t* (*) (KeyCollection_t4311 *, MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18881_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m28563(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4311 *, Array_t *, int32_t, MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m18882_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m28564(__this, method) (( Object_t * (*) (KeyCollection_t4311 *, MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18883_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m28565(__this, method) (( bool (*) (KeyCollection_t4311 *, MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m28566(__this, method) (( bool (*) (KeyCollection_t4311 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18885_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m28567(__this, method) (( Object_t * (*) (KeyCollection_t4311 *, MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m18886_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m28568(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4311 *, StringU5BU5D_t208*, int32_t, MethodInfo*))KeyCollection_CopyTo_m18887_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::GetEnumerator()
#define KeyCollection_GetEnumerator_m28569(__this, method) (( Enumerator_t4312  (*) (KeyCollection_t4311 *, MethodInfo*))KeyCollection_GetEnumerator_m18888_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>::get_Count()
#define KeyCollection_get_Count_m28570(__this, method) (( int32_t (*) (KeyCollection_t4311 *, MethodInfo*))KeyCollection_get_Count_m18889_gshared)(__this, method)
