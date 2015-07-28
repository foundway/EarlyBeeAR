#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t4715;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1719;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4814;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Int32[]
struct Int32U5BU5D_t34;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_92.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m32374_gshared (ValueCollection_t4715 * __this, Dictionary_2_t1719 * ___dictionary, MethodInfo* method);
#define ValueCollection__ctor_m32374(__this, ___dictionary, method) (( void (*) (ValueCollection_t4715 *, Dictionary_2_t1719 *, MethodInfo*))ValueCollection__ctor_m32374_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32375_gshared (ValueCollection_t4715 * __this, int32_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32375(__this, ___item, method) (( void (*) (ValueCollection_t4715 *, int32_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32375_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32376_gshared (ValueCollection_t4715 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32376(__this, method) (( void (*) (ValueCollection_t4715 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32376_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32377_gshared (ValueCollection_t4715 * __this, int32_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32377(__this, ___item, method) (( bool (*) (ValueCollection_t4715 *, int32_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32377_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32378_gshared (ValueCollection_t4715 * __this, int32_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32378(__this, ___item, method) (( bool (*) (ValueCollection_t4715 *, int32_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32378_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32379_gshared (ValueCollection_t4715 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32379(__this, method) (( Object_t* (*) (ValueCollection_t4715 *, MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32379_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m32380_gshared (ValueCollection_t4715 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m32380(__this, ___array, ___index, method) (( void (*) (ValueCollection_t4715 *, Array_t *, int32_t, MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m32380_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32381_gshared (ValueCollection_t4715 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32381(__this, method) (( Object_t * (*) (ValueCollection_t4715 *, MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32381_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32382_gshared (ValueCollection_t4715 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32382(__this, method) (( bool (*) (ValueCollection_t4715 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32382_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32383_gshared (ValueCollection_t4715 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32383(__this, method) (( bool (*) (ValueCollection_t4715 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32383_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m32384_gshared (ValueCollection_t4715 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m32384(__this, method) (( Object_t * (*) (ValueCollection_t4715 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m32384_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m32385_gshared (ValueCollection_t4715 * __this, Int32U5BU5D_t34* ___array, int32_t ___index, MethodInfo* method);
#define ValueCollection_CopyTo_m32385(__this, ___array, ___index, method) (( void (*) (ValueCollection_t4715 *, Int32U5BU5D_t34*, int32_t, MethodInfo*))ValueCollection_CopyTo_m32385_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t4716  ValueCollection_GetEnumerator_m32386_gshared (ValueCollection_t4715 * __this, MethodInfo* method);
#define ValueCollection_GetEnumerator_m32386(__this, method) (( Enumerator_t4716  (*) (ValueCollection_t4715 *, MethodInfo*))ValueCollection_GetEnumerator_m32386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m32387_gshared (ValueCollection_t4715 * __this, MethodInfo* method);
#define ValueCollection_get_Count_m32387(__this, method) (( int32_t (*) (ValueCollection_t4715 *, MethodInfo*))ValueCollection_get_Count_m32387_gshared)(__this, method)
