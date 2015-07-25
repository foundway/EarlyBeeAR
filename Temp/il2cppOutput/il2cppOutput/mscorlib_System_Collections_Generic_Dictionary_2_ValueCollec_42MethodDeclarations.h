#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t3824;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3817;
// System.Collections.Generic.IEnumerator`1<System.UInt16>
struct IEnumerator_1_t4952;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.UInt16[]
struct UInt16U5BU5D_t1643;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_43.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m23272_gshared (ValueCollection_t3824 * __this, Dictionary_2_t3817 * ___dictionary, MethodInfo* method);
#define ValueCollection__ctor_m23272(__this, ___dictionary, method) (( void (*) (ValueCollection_t3824 *, Dictionary_2_t3817 *, MethodInfo*))ValueCollection__ctor_m23272_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23273_gshared (ValueCollection_t3824 * __this, uint16_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23273(__this, ___item, method) (( void (*) (ValueCollection_t3824 *, uint16_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23274_gshared (ValueCollection_t3824 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23274(__this, method) (( void (*) (ValueCollection_t3824 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23274_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23275_gshared (ValueCollection_t3824 * __this, uint16_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23275(__this, ___item, method) (( bool (*) (ValueCollection_t3824 *, uint16_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23275_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23276_gshared (ValueCollection_t3824 * __this, uint16_t ___item, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23276(__this, ___item, method) (( bool (*) (ValueCollection_t3824 *, uint16_t, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23276_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23277_gshared (ValueCollection_t3824 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23277(__this, method) (( Object_t* (*) (ValueCollection_t3824 *, MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23277_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m23278_gshared (ValueCollection_t3824 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m23278(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3824 *, Array_t *, int32_t, MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m23278_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23279_gshared (ValueCollection_t3824 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23279(__this, method) (( Object_t * (*) (ValueCollection_t3824 *, MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23279_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23280_gshared (ValueCollection_t3824 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23280(__this, method) (( bool (*) (ValueCollection_t3824 *, MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23280_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23281_gshared (ValueCollection_t3824 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23281(__this, method) (( bool (*) (ValueCollection_t3824 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23281_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m23282_gshared (ValueCollection_t3824 * __this, MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m23282(__this, method) (( Object_t * (*) (ValueCollection_t3824 *, MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m23282_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m23283_gshared (ValueCollection_t3824 * __this, UInt16U5BU5D_t1643* ___array, int32_t ___index, MethodInfo* method);
#define ValueCollection_CopyTo_m23283(__this, ___array, ___index, method) (( void (*) (ValueCollection_t3824 *, UInt16U5BU5D_t1643*, int32_t, MethodInfo*))ValueCollection_CopyTo_m23283_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t3825  ValueCollection_GetEnumerator_m23284_gshared (ValueCollection_t3824 * __this, MethodInfo* method);
#define ValueCollection_GetEnumerator_m23284(__this, method) (( Enumerator_t3825  (*) (ValueCollection_t3824 *, MethodInfo*))ValueCollection_GetEnumerator_m23284_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m23285_gshared (ValueCollection_t3824 * __this, MethodInfo* method);
#define ValueCollection_get_Count_m23285(__this, method) (( int32_t (*) (ValueCollection_t3824 *, MethodInfo*))ValueCollection_get_Count_m23285_gshared)(__this, method)
