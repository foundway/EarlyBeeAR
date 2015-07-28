#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/ArrayReadOnlyList`1<System.Object>
struct ArrayReadOnlyList_1_t4734;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t258;
// System.Exception
struct Exception_t180;

// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern "C" void ArrayReadOnlyList_1__ctor_m32481_gshared (ArrayReadOnlyList_1_t4734 * __this, ObjectU5BU5D_t178* ___array, MethodInfo* method);
#define ArrayReadOnlyList_1__ctor_m32481(__this, ___array, method) (( void (*) (ArrayReadOnlyList_1_t4734 *, ObjectU5BU5D_t178*, MethodInfo*))ArrayReadOnlyList_1__ctor_m32481_gshared)(__this, ___array, method)
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m32482_gshared (ArrayReadOnlyList_1_t4734 * __this, MethodInfo* method);
#define ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m32482(__this, method) (( Object_t * (*) (ArrayReadOnlyList_1_t4734 *, MethodInfo*))ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m32482_gshared)(__this, method)
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ArrayReadOnlyList_1_get_Item_m32483_gshared (ArrayReadOnlyList_1_t4734 * __this, int32_t ___index, MethodInfo* method);
#define ArrayReadOnlyList_1_get_Item_m32483(__this, ___index, method) (( Object_t * (*) (ArrayReadOnlyList_1_t4734 *, int32_t, MethodInfo*))ArrayReadOnlyList_1_get_Item_m32483_gshared)(__this, ___index, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern "C" void ArrayReadOnlyList_1_set_Item_m32484_gshared (ArrayReadOnlyList_1_t4734 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ArrayReadOnlyList_1_set_Item_m32484(__this, ___index, ___value, method) (( void (*) (ArrayReadOnlyList_1_t4734 *, int32_t, Object_t *, MethodInfo*))ArrayReadOnlyList_1_set_Item_m32484_gshared)(__this, ___index, ___value, method)
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern "C" int32_t ArrayReadOnlyList_1_get_Count_m32485_gshared (ArrayReadOnlyList_1_t4734 * __this, MethodInfo* method);
#define ArrayReadOnlyList_1_get_Count_m32485(__this, method) (( int32_t (*) (ArrayReadOnlyList_1_t4734 *, MethodInfo*))ArrayReadOnlyList_1_get_Count_m32485_gshared)(__this, method)
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern "C" bool ArrayReadOnlyList_1_get_IsReadOnly_m32486_gshared (ArrayReadOnlyList_1_t4734 * __this, MethodInfo* method);
#define ArrayReadOnlyList_1_get_IsReadOnly_m32486(__this, method) (( bool (*) (ArrayReadOnlyList_1_t4734 *, MethodInfo*))ArrayReadOnlyList_1_get_IsReadOnly_m32486_gshared)(__this, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern "C" void ArrayReadOnlyList_1_Add_m32487_gshared (ArrayReadOnlyList_1_t4734 * __this, Object_t * ___item, MethodInfo* method);
#define ArrayReadOnlyList_1_Add_m32487(__this, ___item, method) (( void (*) (ArrayReadOnlyList_1_t4734 *, Object_t *, MethodInfo*))ArrayReadOnlyList_1_Add_m32487_gshared)(__this, ___item, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern "C" void ArrayReadOnlyList_1_Clear_m32488_gshared (ArrayReadOnlyList_1_t4734 * __this, MethodInfo* method);
#define ArrayReadOnlyList_1_Clear_m32488(__this, method) (( void (*) (ArrayReadOnlyList_1_t4734 *, MethodInfo*))ArrayReadOnlyList_1_Clear_m32488_gshared)(__this, method)
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern "C" bool ArrayReadOnlyList_1_Contains_m32489_gshared (ArrayReadOnlyList_1_t4734 * __this, Object_t * ___item, MethodInfo* method);
#define ArrayReadOnlyList_1_Contains_m32489(__this, ___item, method) (( bool (*) (ArrayReadOnlyList_1_t4734 *, Object_t *, MethodInfo*))ArrayReadOnlyList_1_Contains_m32489_gshared)(__this, ___item, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ArrayReadOnlyList_1_CopyTo_m32490_gshared (ArrayReadOnlyList_1_t4734 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method);
#define ArrayReadOnlyList_1_CopyTo_m32490(__this, ___array, ___index, method) (( void (*) (ArrayReadOnlyList_1_t4734 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))ArrayReadOnlyList_1_CopyTo_m32490_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
extern "C" Object_t* ArrayReadOnlyList_1_GetEnumerator_m32491_gshared (ArrayReadOnlyList_1_t4734 * __this, MethodInfo* method);
#define ArrayReadOnlyList_1_GetEnumerator_m32491(__this, method) (( Object_t* (*) (ArrayReadOnlyList_1_t4734 *, MethodInfo*))ArrayReadOnlyList_1_GetEnumerator_m32491_gshared)(__this, method)
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern "C" int32_t ArrayReadOnlyList_1_IndexOf_m32492_gshared (ArrayReadOnlyList_1_t4734 * __this, Object_t * ___item, MethodInfo* method);
#define ArrayReadOnlyList_1_IndexOf_m32492(__this, ___item, method) (( int32_t (*) (ArrayReadOnlyList_1_t4734 *, Object_t *, MethodInfo*))ArrayReadOnlyList_1_IndexOf_m32492_gshared)(__this, ___item, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern "C" void ArrayReadOnlyList_1_Insert_m32493_gshared (ArrayReadOnlyList_1_t4734 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define ArrayReadOnlyList_1_Insert_m32493(__this, ___index, ___item, method) (( void (*) (ArrayReadOnlyList_1_t4734 *, int32_t, Object_t *, MethodInfo*))ArrayReadOnlyList_1_Insert_m32493_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern "C" bool ArrayReadOnlyList_1_Remove_m32494_gshared (ArrayReadOnlyList_1_t4734 * __this, Object_t * ___item, MethodInfo* method);
#define ArrayReadOnlyList_1_Remove_m32494(__this, ___item, method) (( bool (*) (ArrayReadOnlyList_1_t4734 *, Object_t *, MethodInfo*))ArrayReadOnlyList_1_Remove_m32494_gshared)(__this, ___item, method)
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern "C" void ArrayReadOnlyList_1_RemoveAt_m32495_gshared (ArrayReadOnlyList_1_t4734 * __this, int32_t ___index, MethodInfo* method);
#define ArrayReadOnlyList_1_RemoveAt_m32495(__this, ___index, method) (( void (*) (ArrayReadOnlyList_1_t4734 *, int32_t, MethodInfo*))ArrayReadOnlyList_1_RemoveAt_m32495_gshared)(__this, ___index, method)
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
extern "C" Exception_t180 * ArrayReadOnlyList_1_ReadOnlyError_m32496_gshared (Object_t * __this /* static, unused */, MethodInfo* method);
#define ArrayReadOnlyList_1_ReadOnlyError_m32496(__this /* static, unused */, method) (( Exception_t180 * (*) (Object_t * /* static, unused */, MethodInfo*))ArrayReadOnlyList_1_ReadOnlyError_m32496_gshared)(__this /* static, unused */, method)
