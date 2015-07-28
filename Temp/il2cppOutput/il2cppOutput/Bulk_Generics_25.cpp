#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_148.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo Transform_1_t4316_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_148MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.String
#include "mscorlib_System_String.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_149.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t4317_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_149MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m28614_GenericMethod;
extern "C" void Transform_1__ctor_m28614_gshared (Transform_1_t4317 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m28616_GenericMethod;
extern "C" KeyValuePair_2_t1246  Transform_1_Invoke_m28616_gshared (Transform_1_t4317 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m28616((Transform_1_t4317 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1246  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t1246  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t1246  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m28618_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m28618_gshared (Transform_1_t4317 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m28620_GenericMethod;
extern "C" KeyValuePair_2_t1246  Transform_1_EndInvoke_m28620_gshared (Transform_1_t4317 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t1246 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_30.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t4318_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_30MethodDeclarations.h"

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Enumerator_t1245_il2cpp_TypeInfo;
extern TypeInfo IDictionaryEnumerator_t1607_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1610_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t1246_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
extern Il2CppType Enumerator_t1245_0_0_0;
extern Il2CppType ShimEnumerator_t4318_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m14602_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m28623_MethodInfo;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m7282_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m7283_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m7284_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m28623_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m7281_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m7285_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.String>::get_Current()
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_52.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t1060_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_gen_52MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_53.h"
// System.Predicate`1<System.Byte[]>
#include "mscorlib_System_Predicate_1_gen_55.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_54.h"
// System.Comparison`1<System.Byte[]>
#include "mscorlib_System_Comparison_1_gen_54.h"
extern TypeInfo ByteU5BU5D_t679_il2cpp_TypeInfo;
extern TypeInfo Byte_t535_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t853_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2504_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5062_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5DU5BU5D_t1993_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4320_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5060_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5061_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4322_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4326_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4327_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_53MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<System.Byte[]>
#include "mscorlib_System_Predicate_1_gen_55MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_54MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_54MethodDeclarations.h"
extern Il2CppType List_1_t1060_0_0_0;
extern Il2CppType ByteU5BU5D_t679_0_0_0;
extern Il2CppType ICollection_1_t5062_0_0_0;
extern Il2CppType ByteU5BU5DU5BU5D_t1993_0_0_0;
extern Il2CppType Enumerator_t4320_0_0_0;
extern Il2CppType IEnumerable_1_t5060_0_0_0;
extern Il2CppType IEnumerator_1_t5061_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4322_0_0_0;
extern Il2CppType Predicate_1_t4326_0_0_0;
extern Il2CppType Comparer_1_t4327_0_0_0;
extern MethodInfo List_1_get_Item_m7292_MethodInfo;
extern MethodInfo List_1_set_Item_m28672_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8994_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8819_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39178_MethodInfo;
extern MethodInfo Array_Copy_m10846_MethodInfo;
extern MethodInfo List_1_Add_m7296_MethodInfo;
extern MethodInfo List_1_Contains_m28651_MethodInfo;
extern MethodInfo List_1_IndexOf_m28657_MethodInfo;
extern MethodInfo List_1_Insert_m28660_MethodInfo;
extern MethodInfo List_1_Remove_m28662_MethodInfo;
extern MethodInfo Math_Max_m10043_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39179_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39180_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39181_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4885_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m28684_MethodInfo;
extern MethodInfo Array_Clear_m10034_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m28759_MethodInfo;
extern MethodInfo Enumerator__ctor_m28678_MethodInfo;
extern MethodInfo List_1_RemoveAt_m28664_MethodInfo;
extern MethodInfo Array_Reverse_m10075_MethodInfo;
extern MethodInfo Array_Copy_m9034_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m33054_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m33054(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<System.Byte[]>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Byte[]>(!!0[]&,System.Int32)
#define Array_Resize_TisByteU5BU5D_t679_m36613(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ByteU5BU5DU5BU5D_t1993**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_68.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14600_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14600(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<System.Byte[]>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Byte[]>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisByteU5BU5D_t679_m36615(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ByteU5BU5DU5BU5D_t1993*, ByteU5BU5D_t679*, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33123_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m33123(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<System.Byte[]>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Byte[]>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisByteU5BU5D_t679_m36617(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ByteU5BU5DU5BU5D_t1993*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33263_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, Comparison_1_t3104 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m33263(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, Comparison_1_t3104 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<System.Byte[]>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Byte[]>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisByteU5BU5D_t679_m36625(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ByteU5BU5DU5BU5D_t1993*, int32_t, Comparison_1_t4329 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m7292_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m28672_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisByteU5BU5D_t679_m36613_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m28659_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m28661_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m28647_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39178_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m28646_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m28656_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m7296_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m28651_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m28657_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m28660_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m28662_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m28645_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m28670_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m28671_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39179_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39180_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39181_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m28684_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisByteU5BU5D_t679_m36615_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m28654_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m28655_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m28759_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m28678_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m28658_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m28664_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m28765_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisByteU5BU5D_t679_m36617_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisByteU5BU5D_t679_m36625_GenericMethod;


// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Byte[]>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<System.Byte[]>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Reverse()
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort()
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
// System.Void System.Collections.Generic.List`1<System.Byte[]>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Byte[]>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current()
// System.Array/InternalEnumerator`1<System.Byte[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_214.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4319_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Byte[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_214MethodDeclarations.h"

extern TypeInfo InvalidOperationException_t1784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t4319_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m8811_MethodInfo;
extern MethodInfo Array_get_Length_m8815_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m32943(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
#define Array_InternalArray__get_Item_TisByteU5BU5D_t679_m36602(__this, p0, method) (( ByteU5BU5D_t679* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28677_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisByteU5BU5D_t679_m36602_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Byte[]>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Byte[]>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4321_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Byte[]>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte[]>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1984_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m8818_MethodInfo;
extern MethodInfo Object_GetType_m975_MethodInfo;
extern MethodInfo Type_get_FullName_m7409_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10051_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m28681_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<System.Byte[]>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo NotSupportedException_t207_il2cpp_TypeInfo;
extern TypeInfo ICollection_t1351_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t595_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<System.Byte[]>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_53MethodDeclarations.h"
extern Il2CppType IList_1_t4321_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m28713_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;
extern MethodInfo IList_1_get_Item_m39182_MethodInfo;
extern MethodInfo ICollection_CopyTo_m8807_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39183_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39184_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m28713_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m39182_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m28745_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39183_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39184_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte[]>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<System.Byte[]>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_53.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4323_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IList_t1352_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t4323_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39185_MethodInfo;
extern MethodInfo Collection_1_SetItem_m28744_MethodInfo;
extern MethodInfo List_1__ctor_m7295_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m14599_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m28737_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m28735_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m28740_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m28731_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39186_MethodInfo;
extern MethodInfo IList_1_Insert_m39187_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39188_MethodInfo;
extern MethodInfo IList_1_set_Item_m39189_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10897_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14878_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14879_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39185_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m28748_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m28749_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m28746_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m28744_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m7295_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m28737_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m28747_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m28735_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m28740_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m28731_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39186_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39187_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39188_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39189_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Byte[]>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte[]>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Byte[]>::get_Count()
// T System.Collections.ObjectModel.Collection`1<System.Byte[]>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<System.Byte[]>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Byte[]>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Byte[]>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4324_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Byte[]>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_68MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte[]>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_68.h"
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4325_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte[]>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_68MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4324_0_0_0;
extern Il2CppType IEquatable_1_t6056_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t4325_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m28755_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39190_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m36614_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m28755_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39190_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m36614_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte[]>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte[]>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte[]>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte[]>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte[]>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte[]>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte[]>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6057_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte[]>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Byte[]>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t6056_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Byte[]>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m1072_MethodInfo;
extern MethodInfo Object_Equals_m1071_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m28750_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte[]>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte[]>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte[]>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<System.Byte[]>::Invoke(T)
// System.IAsyncResult System.Predicate`1<System.Byte[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Byte[]>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_54.h"
extern TypeInfo DefaultComparer_t4328_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Byte[]>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_54MethodDeclarations.h"
extern Il2CppType IComparable_1_t5353_0_0_0;
extern Il2CppType GenericComparer_1_t2830_0_0_0;
extern Il2CppType DefaultComparer_t4328_0_0_0;
extern MethodInfo DefaultComparer__ctor_m28766_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39191_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13771_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m28766_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39191_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Byte[]>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<System.Byte[]>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<System.Byte[]>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<System.Byte[]>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Byte[]>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5352_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Byte[]>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5353_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Byte[]>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m36623_MethodInfo;
extern MethodInfo IComparable_CompareTo_m14570_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m28762_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m36623_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Byte[]>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Byte[]>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4329_il2cpp_TypeInfo;
// System.Comparison`1<System.Byte[]>
#include "mscorlib_System_Comparison_1_gen_54MethodDeclarations.h"



// System.Void System.Comparison`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<System.Byte[]>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<System.Byte[]>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<System.Byte[]>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_69.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4330_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_69MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_69.h"
extern TypeInfo DefaultComparer_t4332_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_69MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4330_0_0_0;
extern Il2CppType IEquatable_1_t2604_0_0_0;
extern Il2CppType Byte_t535_0_0_0;
extern Il2CppType DefaultComparer_t4332_0_0_0;
extern MethodInfo DefaultComparer__ctor_m28780_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39192_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m36628_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m28780_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39192_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m36628_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m28772_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m28772_gshared (EqualityComparer_1_t4330 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m28773_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m28773_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4332 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4332 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4332 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4330_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m28774_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m28774_gshared (EqualityComparer_1_t4330 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m28775_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m28775_gshared (EqualityComparer_1_t4330 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(uint8_t*)((uint8_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(uint8_t*)((uint8_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Byte>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Byte>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m28776_GenericMethod;
extern "C" EqualityComparer_1_t4330 * EqualityComparer_1_get_Default_m28776_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4330 * L_0 = ((EqualityComparer_1_t4330_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t4331_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2604_il2cpp_TypeInfo;
extern MethodInfo IEquatable_1_Equals_m39193_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m39193_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m28777_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m28777_gshared (GenericEqualityComparer_1_t4331 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4330 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m28778_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m28778_gshared (GenericEqualityComparer_1_t4331 * __this, uint8_t ___obj, MethodInfo* method)
{
	{
		uint8_t L_0 = ___obj;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1072_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Byte>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m28779_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m28779_gshared (GenericEqualityComparer_1_t4331 * __this, uint8_t ___x, uint8_t ___y, MethodInfo* method)
{
	{
		uint8_t L_0 = ___x;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = ___y;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6058_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Byte>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Byte>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::.ctor()
extern "C" void DefaultComparer__ctor_m28780_gshared (DefaultComparer_t4332 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4330 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m28781_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m28781_gshared (DefaultComparer_t4332 * __this, uint8_t ___obj, MethodInfo* method)
{
	{
		uint8_t L_0 = ___obj;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1072_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m28782_GenericMethod;
extern "C" bool DefaultComparer_Equals_m28782_gshared (DefaultComparer_t4332 * __this, uint8_t ___x, uint8_t ___y, MethodInfo* method)
{
	{
		uint8_t L_0 = ___x;
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_3 = ___y;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint8_t L_6 = ___y;
		uint8_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6059_il2cpp_TypeInfo;

// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Display>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Display>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_215.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4333_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Display>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_215MethodDeclarations.h"

extern TypeInfo Display_t1070_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4333_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Display>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Display>(System.Int32)
#define Array_InternalArray__get_Item_TisDisplay_t1070_m36630(__this, p0, method) (( Display_t1070 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28787_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDisplay_t1070_m36630_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Display>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Display>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Display>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Display>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Display>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6060_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Display>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6061_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Display>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6062_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Display>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Display>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6063_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IntPtr>::get_Current()
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_216.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4334_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_216MethodDeclarations.h"

extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4334_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
extern "C" IntPtr_t Array_InternalArray__get_Item_TisIntPtr_t_m36641_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisIntPtr_t_m36641(__this, p0, method) (( IntPtr_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisIntPtr_t_m36641_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28792_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIntPtr_t_m36641_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28788_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m28788_gshared (InternalEnumerator_1_t4334 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28789_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28789_gshared (InternalEnumerator_1_t4334 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (( IntPtr_t (*) (InternalEnumerator_1_t4334 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		IntPtr_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28790_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m28790_gshared (InternalEnumerator_1_t4334 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28791_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m28791_gshared (InternalEnumerator_1_t4334 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m8815(L_1, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
extern "C" IntPtr_t InternalEnumerator_1_get_Current_m28792_gshared (InternalEnumerator_1_t4334 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1784 * L_1 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_1, (String_t*) &_stringLiteral1446, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1784 * L_3 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_3, (String_t*) &_stringLiteral1447, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m8815(L_5, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		IntPtr_t L_8 = (( IntPtr_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6064_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IntPtr>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6065_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IntPtr>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6066_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IntPtr>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IntPtr>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6067_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6068_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ISerializable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6069_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ISerializable>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_217.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4335_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_217MethodDeclarations.h"

extern TypeInfo ISerializable_t253_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4335_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ISerializable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ISerializable>(System.Int32)
#define Array_InternalArray__get_Item_TisISerializable_t253_m36652(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28797_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisISerializable_t253_m36652_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6070_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6071_il2cpp_TypeInfo;

// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.ContactPoint>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_218.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4336_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_218MethodDeclarations.h"

extern TypeInfo ContactPoint_t1083_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4336_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.ContactPoint>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.ContactPoint>(System.Int32)
extern "C" ContactPoint_t1083  Array_InternalArray__get_Item_TisContactPoint_t1083_m36663_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisContactPoint_t1083_m36663(__this, p0, method) (( ContactPoint_t1083  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisContactPoint_t1083_m36663_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28802_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisContactPoint_t1083_m36663_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28798_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m28798_gshared (InternalEnumerator_1_t4336 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28799_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28799_gshared (InternalEnumerator_1_t4336 * __this, MethodInfo* method)
{
	{
		ContactPoint_t1083  L_0 = (( ContactPoint_t1083  (*) (InternalEnumerator_1_t4336 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ContactPoint_t1083  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28800_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m28800_gshared (InternalEnumerator_1_t4336 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28801_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m28801_gshared (InternalEnumerator_1_t4336 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m8815(L_1, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.ContactPoint>::get_Current()
extern "C" ContactPoint_t1083  InternalEnumerator_1_get_Current_m28802_gshared (InternalEnumerator_1_t4336 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1784 * L_1 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_1, (String_t*) &_stringLiteral1446, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1784 * L_3 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_3, (String_t*) &_stringLiteral1447, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m8815(L_5, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		ContactPoint_t1083  L_8 = (( ContactPoint_t1083  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6072_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ContactPoint>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ContactPoint>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ContactPoint>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ContactPoint>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ContactPoint>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ContactPoint>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ContactPoint>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6073_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ContactPoint>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6074_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.ContactPoint>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ContactPoint>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ContactPoint>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.ContactPoint>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.ContactPoint>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_53.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t1085_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_53MethodDeclarations.h"

// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_55.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_54.h"
// System.Predicate`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Predicate_1_gen_56.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_55.h"
// System.Comparison`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Comparison_1_gen_55.h"
extern TypeInfo Rigidbody2D_t1086_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5065_il2cpp_TypeInfo;
extern TypeInfo Rigidbody2DU5BU5D_t4337_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4339_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5063_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5064_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4341_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4345_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4346_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_54MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Predicate_1_gen_56MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_55MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_55MethodDeclarations.h"
extern Il2CppType List_1_t1085_0_0_0;
extern Il2CppType ICollection_1_t5065_0_0_0;
extern Il2CppType Rigidbody2DU5BU5D_t4337_0_0_0;
extern Il2CppType Enumerator_t4339_0_0_0;
extern Il2CppType IEnumerable_1_t5063_0_0_0;
extern Il2CppType IEnumerator_1_t5064_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4341_0_0_0;
extern Il2CppType Predicate_1_t4345_0_0_0;
extern Il2CppType Comparer_1_t4346_0_0_0;
extern MethodInfo List_1_get_Item_m28850_MethodInfo;
extern MethodInfo List_1_set_Item_m28851_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39194_MethodInfo;
extern MethodInfo List_1_Add_m28821_MethodInfo;
extern MethodInfo List_1_Contains_m28828_MethodInfo;
extern MethodInfo List_1_IndexOf_m28834_MethodInfo;
extern MethodInfo List_1_Insert_m28837_MethodInfo;
extern MethodInfo List_1_Remove_m28839_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39195_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39196_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39197_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m28863_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m28938_MethodInfo;
extern MethodInfo Enumerator__ctor_m28857_MethodInfo;
extern MethodInfo List_1_RemoveAt_m28841_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Rigidbody2D>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Rigidbody2D>(!!0[]&,System.Int32)
#define Array_Resize_TisRigidbody2D_t1086_m36685(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, Rigidbody2DU5BU5D_t4337**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_70.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Rigidbody2D>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Rigidbody2D>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisRigidbody2D_t1086_m36687(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, Rigidbody2DU5BU5D_t4337*, Rigidbody2D_t1086 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Rigidbody2D>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Rigidbody2D>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisRigidbody2D_t1086_m36689(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, Rigidbody2DU5BU5D_t4337*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Rigidbody2D>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Rigidbody2D>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisRigidbody2D_t1086_m36697(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, Rigidbody2DU5BU5D_t4337*, int32_t, Comparison_1_t4348 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m28850_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m28851_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisRigidbody2D_t1086_m36685_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m28836_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m28838_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m28824_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39194_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m28823_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m28833_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m28821_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m28828_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m28834_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m28837_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m28839_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m28822_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m28847_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m28848_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39195_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39196_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39197_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m28863_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisRigidbody2D_t1086_m36687_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m28831_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m28832_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m28938_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m28857_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m28835_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m28841_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m28944_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRigidbody2D_t1086_m36689_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisRigidbody2D_t1086_m36697_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Rigidbody2D>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Rigidbody2D>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Rigidbody2D>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_219.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4338_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_219MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4338_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Rigidbody2D>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Rigidbody2D>(System.Int32)
#define Array_InternalArray__get_Item_TisRigidbody2D_t1086_m36674(__this, p0, method) (( Rigidbody2D_t1086 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28856_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRigidbody2D_t1086_m36674_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Rigidbody2D>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4340_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m28860_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody2D>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_54MethodDeclarations.h"
extern Il2CppType IList_1_t4340_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m28892_MethodInfo;
extern MethodInfo IList_1_get_Item_m39198_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39199_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39200_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m28892_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m39198_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m28924_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39199_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39200_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_54.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4342_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t4342_0_0_0;
extern Il2CppType Rigidbody2D_t1086_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39201_MethodInfo;
extern MethodInfo Collection_1_SetItem_m28923_MethodInfo;
extern MethodInfo List_1__ctor_m7302_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m28916_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m28914_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m28919_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m28910_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39202_MethodInfo;
extern MethodInfo IList_1_Insert_m39203_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39204_MethodInfo;
extern MethodInfo IList_1_set_Item_m39205_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39201_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m28927_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m28928_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m28925_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m28923_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m7302_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m28916_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m28926_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m28914_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m28919_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m28910_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39202_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39203_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39204_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39205_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Rigidbody2D>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4343_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_70MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_70.h"
extern TypeInfo DefaultComparer_t4344_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_70MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4343_0_0_0;
extern Il2CppType IEquatable_1_t6075_0_0_0;
extern Il2CppType DefaultComparer_t4344_0_0_0;
extern MethodInfo DefaultComparer__ctor_m28934_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39206_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m36686_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m28934_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39206_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m36686_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Rigidbody2D>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6076_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rigidbody2D>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rigidbody2D>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t6075_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Rigidbody2D>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m28929_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Rigidbody2D>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Rigidbody2D>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Rigidbody2D>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Rigidbody2D>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_55.h"
extern TypeInfo DefaultComparer_t4347_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_55MethodDeclarations.h"
extern Il2CppType IComparable_1_t5355_0_0_0;
extern Il2CppType DefaultComparer_t4347_0_0_0;
extern MethodInfo DefaultComparer__ctor_m28945_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39207_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m28945_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39207_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Rigidbody2D>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5354_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Rigidbody2D>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5355_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Rigidbody2D>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m36695_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m28941_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m36695_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Rigidbody2D>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4348_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Comparison_1_gen_55MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Rigidbody2D>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Rigidbody2D>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Rigidbody2D>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Rigidbody2D>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6077_il2cpp_TypeInfo;

// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Keyframe>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_220.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4349_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Keyframe>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_220MethodDeclarations.h"

extern TypeInfo Keyframe_t1097_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4349_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
extern "C" Keyframe_t1097  Array_InternalArray__get_Item_TisKeyframe_t1097_m36700_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyframe_t1097_m36700(__this, p0, method) (( Keyframe_t1097  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyframe_t1097_m36700_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28955_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyframe_t1097_m36700_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28951_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m28951_gshared (InternalEnumerator_1_t4349 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28952_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28952_gshared (InternalEnumerator_1_t4349 * __this, MethodInfo* method)
{
	{
		Keyframe_t1097  L_0 = (( Keyframe_t1097  (*) (InternalEnumerator_1_t4349 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Keyframe_t1097  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28953_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m28953_gshared (InternalEnumerator_1_t4349 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28954_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m28954_gshared (InternalEnumerator_1_t4349 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m8815(L_1, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<UnityEngine.Keyframe>::get_Current()
extern "C" Keyframe_t1097  InternalEnumerator_1_get_Current_m28955_gshared (InternalEnumerator_1_t4349 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1784 * L_1 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_1, (String_t*) &_stringLiteral1446, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1784 * L_3 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_3, (String_t*) &_stringLiteral1447, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m8815(L_5, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Keyframe_t1097  L_8 = (( Keyframe_t1097  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6078_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Keyframe>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6079_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Keyframe>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6080_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Keyframe>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Keyframe>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Keyframe>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_54.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t1107_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_54MethodDeclarations.h"

// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_56.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_55.h"
// System.Predicate`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Predicate_1_gen_57.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_56.h"
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_56.h"
extern TypeInfo UICharInfo_t525_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5068_il2cpp_TypeInfo;
extern TypeInfo UICharInfoU5BU5D_t1109_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4350_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5066_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5067_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4351_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4355_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4356_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_55MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Predicate_1_gen_57MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_56MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_56MethodDeclarations.h"
extern Il2CppType List_1_t1107_0_0_0;
extern Il2CppType ICollection_1_t5068_0_0_0;
extern Il2CppType UICharInfoU5BU5D_t1109_0_0_0;
extern Il2CppType Enumerator_t4350_0_0_0;
extern Il2CppType IEnumerable_1_t5066_0_0_0;
extern Il2CppType IEnumerator_1_t5067_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4351_0_0_0;
extern Il2CppType Predicate_1_t4355_0_0_0;
extern Il2CppType Comparer_1_t4356_0_0_0;
extern MethodInfo List_1_get_Item_m29003_MethodInfo;
extern MethodInfo List_1_set_Item_m29004_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39208_MethodInfo;
extern MethodInfo List_1_Add_m28974_MethodInfo;
extern MethodInfo List_1_Contains_m28981_MethodInfo;
extern MethodInfo List_1_IndexOf_m28987_MethodInfo;
extern MethodInfo List_1_Insert_m28990_MethodInfo;
extern MethodInfo List_1_Remove_m28992_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39209_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39210_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39211_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m29011_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m29086_MethodInfo;
extern MethodInfo Enumerator__ctor_m29005_MethodInfo;
extern MethodInfo List_1_RemoveAt_m28994_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.UICharInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UICharInfo>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUICharInfo_t525_m36711_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t1109** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisUICharInfo_t525_m36711(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109**, int32_t, MethodInfo*))Array_Resize_TisUICharInfo_t525_m36711_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_71.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UICharInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UICharInfo>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUICharInfo_t525_m36713_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t1109* p0, UICharInfo_t525  p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisUICharInfo_t525_m36713(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109*, UICharInfo_t525 , int32_t, int32_t, MethodInfo*))Array_IndexOf_TisUICharInfo_t525_m36713_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUICharInfo_t525_m36715_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t1109* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisUICharInfo_t525_m36715(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisUICharInfo_t525_m36715_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UICharInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisUICharInfo_t525_m36723_gshared (Object_t * __this /* static, unused */, UICharInfoU5BU5D_t1109* p0, int32_t p1, Comparison_1_t4358 * p2, MethodInfo* method);
#define Array_Sort_TisUICharInfo_t525_m36723(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109*, int32_t, Comparison_1_t4358 *, MethodInfo*))Array_Sort_TisUICharInfo_t525_m36723_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m29003_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m29004_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisUICharInfo_t525_m36711_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m28989_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m28991_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m28977_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39208_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m28976_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m28986_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m28974_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m28981_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m28987_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m28990_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m28992_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m28975_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m29000_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m29001_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39209_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39210_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39211_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m29011_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisUICharInfo_t525_m36713_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m28984_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m28985_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m29086_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m29005_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m28988_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m28994_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m29092_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisUICharInfo_t525_m36715_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisUICharInfo_t525_m36723_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m28956_GenericMethod;
extern "C" void List_1__ctor_m28956_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UICharInfoU5BU5D_t1109* L_0 = ((List_1_t1107_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1__ctor_m28957_GenericMethod;
extern "C" void List_1__ctor_m28957_gshared (List_1_t1107 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t1107 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UICharInfoU5BU5D_t1109* L_3 = ((List_1_t1107_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t1107 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_5);
		__this->____items_1 = ((UICharInfoU5BU5D_t1109*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_6));
		Object_t* L_7 = V_0;
		(( void (*) (List_1_t1107 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m7305_GenericMethod;
extern "C" void List_1__ctor_m7305_gshared (List_1_t1107 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_1 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_1, (String_t*) &_stringLiteral596, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((UICharInfoU5BU5D_t1109*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m28958_GenericMethod;
extern "C" void List_1__cctor_m28958_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t1107_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((UICharInfoU5BU5D_t1109*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28959_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28959_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		Enumerator_t4350  L_0 = (( Enumerator_t4350  (*) (List_1_t1107 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t4350  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m28960_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m28960_gshared (List_1_t1107 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m28961_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m28961_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		Enumerator_t4350  L_0 = (( Enumerator_t4350  (*) (List_1_t1107 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t4350  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m28962_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m28962_gshared (List_1_t1107 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtActionInvoker1< UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			int32_t L_1 = (__this->____size_2);
			V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t534 * L_2 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_2, (String_t*) &_stringLiteral1581, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m28963_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m28963_gshared (List_1_t1107 * __this, Object_t * ___item, MethodInfo* method)
{
	bool V_0 = false;
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			bool L_1 = (bool)VirtFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m28964_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m28964_gshared (List_1_t1107 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m28965_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m28965_gshared (List_1_t1107 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t1107 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), __this, L_1, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t534 * L_3 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_3, (String_t*) &_stringLiteral1581, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m28966_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m28966_gshared (List_1_t1107 * __this, Object_t * ___item, MethodInfo* method)
{
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), __this, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28967_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m28967_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m28968_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m28968_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m28969_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m28969_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m28970_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m28970_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m28971_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m28971_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m28972_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m28972_gshared (List_1_t1107 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UICharInfo_t525  L_1 = (UICharInfo_t525 )VirtFuncInvoker1< UICharInfo_t525 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_0);
		UICharInfo_t525  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m28973_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m28973_gshared (List_1_t1107 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			VirtActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t534 * L_2 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_2, (String_t*) &_stringLiteral813, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m28974_gshared (List_1_t1107 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		UICharInfoU5BU5D_t1109* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t1107 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_0017:
	{
		UICharInfoU5BU5D_t1109* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UICharInfo_t525  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_2, L_5)) = (UICharInfo_t525 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m28975_gshared (List_1_t1107 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UICharInfoU5BU5D_t1109* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t1107 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		int32_t L_5 = Math_Max_m10043(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m10043(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		(( void (*) (List_1_t1107 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m28976_gshared (List_1_t1107 * __this, Object_t* ___collection, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		(( void (*) (List_1_t1107 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		Object_t* L_4 = ___collection;
		UICharInfoU5BU5D_t1109* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t1109*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m28977_gshared (List_1_t1107 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	UICharInfo_t525  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			UICharInfo_t525  L_3 = (UICharInfo_t525 )InterfaceFuncInvoker0< UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_2);
			V_0 = L_3;
			UICharInfo_t525  L_4 = V_0;
			VirtActionInvoker1< UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4885_MethodInfo, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m28978_GenericMethod;
extern "C" void List_1_AddRange_m28978_gshared (List_1_t1107 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t1107 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		(( void (*) (List_1_t1107 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t1107 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m28979_GenericMethod;
extern "C" ReadOnlyCollection_1_t4351 * List_1_AsReadOnly_m28979_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t4351 * L_0 = (ReadOnlyCollection_1_t4351 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t4351 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern Il2CppGenericMethod List_1_Clear_m28980_GenericMethod;
extern "C" void List_1_Clear_m28980_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		UICharInfoU5BU5D_t1109* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m28981_gshared (List_1_t1107 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		UICharInfo_t525  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109*, UICharInfo_t525 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m28982_GenericMethod;
extern "C" void List_1_CopyTo_m28982_gshared (List_1_t1107 * __this, UICharInfoU5BU5D_t1109* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		UICharInfoU5BU5D_t1109* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m28983_GenericMethod;
extern TypeInfo* List_1_t1107_il2cpp_TypeInfo_var;
extern "C" UICharInfo_t525  List_1_Find_m28983_gshared (List_1_t1107 * __this, Predicate_1_t4355 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m28983_init;
	if (!List_1_Find_m28983_init)
	{
		List_1_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1107_0_0_0);
		List_1_Find_m28983_init = true;
	}
	int32_t V_0 = 0;
	UICharInfo_t525  V_1 = {0};
	UICharInfo_t525  G_B3_0 = {0};
	{
		Predicate_1_t4355 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1107_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t4355 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t4355 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t1107 *, int32_t, int32_t, Predicate_1_t4355 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		UICharInfoU5BU5D_t1109* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&UICharInfo_t525_il2cpp_TypeInfo), (&V_1));
		UICharInfo_t525  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m28984_gshared (Object_t * __this /* static, unused */, Predicate_1_t4355 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t4355 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1443, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m28985_gshared (List_1_t1107 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4355 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t4355 * L_3 = ___match;
		UICharInfoU5BU5D_t1109* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t4350  List_1_GetEnumerator_m28986_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		Enumerator_t4350  L_0 = {0};
		(( void (*) (Enumerator_t4350 *, List_1_t1107 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m28987_gshared (List_1_t1107 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		UICharInfo_t525  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109*, UICharInfo_t525 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m28988_gshared (List_1_t1107 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = ((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		UICharInfoU5BU5D_t1109* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		UICharInfoU5BU5D_t1109* L_7 = (__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8+(int32_t)L_9)), ((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/&Array_Copy_m10846_MethodInfo);
	}

IL_0031:
	{
		int32_t L_12 = (__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		UICharInfoU5BU5D_t1109* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m28989_gshared (List_1_t1107 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1256 * L_3 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_3, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m28990_gshared (List_1_t1107 * __this, int32_t ___index, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t1107 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = (__this->____size_2);
		UICharInfoU5BU5D_t1109* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t1107 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t1107 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		UICharInfoU5BU5D_t1109* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		UICharInfo_t525  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_4, L_5)) = (UICharInfo_t525 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m28991_gshared (List_1_t1107 * __this, Object_t* ___collection, MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1582, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m28992_gshared (List_1_t1107 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UICharInfo_t525  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32), __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m28993_GenericMethod;
extern TypeInfo* List_1_t1107_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m28993_gshared (List_1_t1107 * __this, Predicate_1_t4355 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m28993_init;
	if (!List_1_RemoveAll_m28993_init)
	{
		List_1_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1107_0_0_0);
		List_1_RemoveAll_m28993_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t4355 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1107_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t4355 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t4355 * L_1 = ___match;
		UICharInfoU5BU5D_t1109* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t4355 * L_13 = ___match;
		UICharInfoU5BU5D_t1109* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		UICharInfoU5BU5D_t1109* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		UICharInfoU5BU5D_t1109* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_18, L_20)) = (UICharInfo_t525 )(*(UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UICharInfoU5BU5D_t1109* L_29 = (__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, L_30, ((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m28994_gshared (List_1_t1107 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1256 * L_3 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_3, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		(( void (*) (List_1_t1107 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		UICharInfoU5BU5D_t1109* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m28995_GenericMethod;
extern "C" void List_1_Reverse_m28995_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m10075(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m10075_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern Il2CppGenericMethod List_1_Sort_m28996_GenericMethod;
extern TypeInfo* Comparer_1_t4356_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m28996_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m28996_init;
	if (!List_1_Sort_m28996_init)
	{
		Comparer_1_t4356_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t4356_0_0_0);
		List_1_Sort_m28996_init = true;
	}
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t4356_il2cpp_TypeInfo_var);
		Comparer_1_t4356 * L_2 = (( Comparer_1_t4356 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m28997_GenericMethod;
extern "C" void List_1_Sort_m28997_gshared (List_1_t1107 * __this, Comparison_1_t4358 * ___comparison, MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t4358 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109*, int32_t, Comparison_1_t4358 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m28998_GenericMethod;
extern "C" UICharInfoU5BU5D_t1109* List_1_ToArray_m28998_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	UICharInfoU5BU5D_t1109* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((UICharInfoU5BU5D_t1109*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0));
		UICharInfoU5BU5D_t1109* L_1 = (__this->____items_1);
		UICharInfoU5BU5D_t1109* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m9034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m9034_MethodInfo);
		UICharInfoU5BU5D_t1109* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m28999_GenericMethod;
extern "C" void List_1_TrimExcess_m28999_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t1107 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m29000_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		UICharInfoU5BU5D_t1109* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m29001_gshared (List_1_t1107 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_2 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8994(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8994_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		UICharInfoU5BU5D_t1109** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UICharInfoU5BU5D_t1109**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m29002_GenericMethod;
extern "C" int32_t List_1_get_Count_m29002_gshared (List_1_t1107 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t525  List_1_get_Item_m29003_gshared (List_1_t1107 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_2 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_2, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		UICharInfoU5BU5D_t1109* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m29004_gshared (List_1_t1107 * __this, int32_t ___index, UICharInfo_t525  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t1107 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_3 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_3, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		UICharInfoU5BU5D_t1109* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		UICharInfo_t525  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_4, L_5)) = (UICharInfo_t525 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m29008_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m29005_gshared (Enumerator_t4350 * __this, List_1_t1107 * ___l, MethodInfo* method)
{
	{
		List_1_t1107 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t1107 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m29006_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m29006_gshared (Enumerator_t4350 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4350 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1784 * L_1 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8818(L_1, /*hidden argument*/&InvalidOperationException__ctor_m8818_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		UICharInfo_t525  L_2 = (__this->___current_3);
		UICharInfo_t525  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m29007_GenericMethod;
extern "C" void Enumerator_Dispose_m29007_gshared (Enumerator_t4350 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t1107 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::VerifyState()
extern "C" void Enumerator_VerifyState_m29008_gshared (Enumerator_t4350 * __this, MethodInfo* method)
{
	{
		List_1_t1107 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t4350  L_1 = (*(Enumerator_t4350 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m975(L_2, /*hidden argument*/&Object_GetType_m975_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m7409_MethodInfo, L_3);
		ObjectDisposedException_t1984 * L_5 = (ObjectDisposedException_t1984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1984_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10051(L_5, L_4, /*hidden argument*/&ObjectDisposedException__ctor_m10051_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->___ver_2);
		List_1_t1107 * L_7 = (__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1784 * L_9 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_9, (String_t*) &_stringLiteral1583, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m29009_GenericMethod;
extern "C" bool Enumerator_MoveNext_m29009_gshared (Enumerator_t4350 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t4350 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (__this->___next_1);
		List_1_t1107 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t1107 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		UICharInfoU5BU5D_t1109* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UICharInfo_t525 *)(UICharInfo_t525 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m29010_GenericMethod;
extern "C" UICharInfo_t525  Enumerator_get_Current_m29010_gshared (Enumerator_t4350 * __this, MethodInfo* method)
{
	{
		UICharInfo_t525  L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IList_1_t524_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_55MethodDeclarations.h"
extern Il2CppType IList_1_t524_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m29040_MethodInfo;
extern MethodInfo IList_1_get_Item_m2778_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39212_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39213_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m29040_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m2778_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m29072_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39212_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39213_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m29011_gshared (ReadOnlyCollection_1_t4351 * __this, Object_t* ___list, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1584, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29012_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29012_gshared (ReadOnlyCollection_1_t4351 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m29013_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m29013_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m29014_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m29014_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m29015_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m29015_gshared (ReadOnlyCollection_1_t4351 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m29016_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m29016_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m29017_GenericMethod;
extern "C" UICharInfo_t525  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m29017_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UICharInfo_t525  L_1 = (UICharInfo_t525 )VirtFuncInvoker1< UICharInfo_t525 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m29018_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m29018_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, UICharInfo_t525  ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29019_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29019_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m29020_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m29020_gshared (ReadOnlyCollection_1_t4351 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m8807_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m29021_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m29021_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m7367_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m29022_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m29022_gshared (ReadOnlyCollection_1_t4351 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m29023_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m29023_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m29024_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m29024_gshared (ReadOnlyCollection_1_t4351 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m29025_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m29025_gshared (ReadOnlyCollection_1_t4351 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m29026_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m29026_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m29027_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m29027_gshared (ReadOnlyCollection_1_t4351 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m29028_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m29028_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m29029_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m29029_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m29030_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m29030_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m29031_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m29031_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m29032_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m29032_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m29033_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m29033_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UICharInfo_t525  L_2 = (UICharInfo_t525 )InterfaceFuncInvoker1< UICharInfo_t525 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		UICharInfo_t525  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m29034_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m29034_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m29035_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m29035_gshared (ReadOnlyCollection_1_t4351 * __this, UICharInfo_t525  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UICharInfo_t525  L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m29036_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m29036_gshared (ReadOnlyCollection_1_t4351 * __this, UICharInfoU5BU5D_t1109* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UICharInfoU5BU5D_t1109* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t1109*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m29037_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m29037_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m29038_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m29038_gshared (ReadOnlyCollection_1_t4351 * __this, UICharInfo_t525  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UICharInfo_t525  L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m29039_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m29039_gshared (ReadOnlyCollection_1_t4351 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t525  ReadOnlyCollection_1_get_Item_m29040_gshared (ReadOnlyCollection_1_t4351 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UICharInfo_t525  L_2 = (UICharInfo_t525 )InterfaceFuncInvoker1< UICharInfo_t525 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_55.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4352_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t4352_0_0_0;
extern Il2CppType UICharInfo_t525_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39214_MethodInfo;
extern MethodInfo Collection_1_SetItem_m29071_MethodInfo;
extern MethodInfo List_1__ctor_m28956_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m29064_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m29062_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m29067_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m29058_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39215_MethodInfo;
extern MethodInfo IList_1_Insert_m39216_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39217_MethodInfo;
extern MethodInfo IList_1_set_Item_m39218_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39214_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m29075_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m29076_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m29073_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m29071_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m29064_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m29074_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m29062_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m29067_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m29058_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39215_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39216_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39217_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39218_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m29041_GenericMethod;
extern TypeInfo* List_1_t1107_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m29041_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m29041_init;
	if (!Collection_1__ctor_m29041_init)
	{
		List_1_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1107_0_0_0);
		Collection_1__ctor_m29041_init = true;
	}
	List_1_t1107 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1107_il2cpp_TypeInfo_var);
		List_1_t1107 * L_0 = (List_1_t1107 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t1107 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t1107 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t1107 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29042_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29042_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m29043_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m29043_gshared (Collection_1_t4352 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m8807_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m29044_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m29044_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m29045_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m29045_gshared (Collection_1_t4352 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		UICharInfo_t525  L_4 = (( UICharInfo_t525  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m29046_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m29046_gshared (Collection_1_t4352 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m29047_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m29047_gshared (Collection_1_t4352 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m29048_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m29048_gshared (Collection_1_t4352 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UICharInfo_t525  L_2 = (( UICharInfo_t525  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m29049_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m29049_gshared (Collection_1_t4352 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		UICharInfo_t525  L_2 = (( UICharInfo_t525  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m29050_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m29050_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m29051_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m29051_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m29052_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m29052_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m29053_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m29053_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m29054_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m29054_gshared (Collection_1_t4352 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UICharInfo_t525  L_2 = (UICharInfo_t525 )InterfaceFuncInvoker1< UICharInfo_t525 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		UICharInfo_t525  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m29055_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m29055_gshared (Collection_1_t4352 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UICharInfo_t525  L_2 = (( UICharInfo_t525  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m29056_GenericMethod;
extern "C" void Collection_1_Add_m29056_gshared (Collection_1_t4352 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		UICharInfo_t525  L_3 = ___item;
		VirtActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m29057_GenericMethod;
extern "C" void Collection_1_Clear_m29057_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::ClearItems()
extern "C" void Collection_1_ClearItems_m29058_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m29059_GenericMethod;
extern "C" bool Collection_1_Contains_m29059_gshared (Collection_1_t4352 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UICharInfo_t525  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m29060_GenericMethod;
extern "C" void Collection_1_CopyTo_m29060_gshared (Collection_1_t4352 * __this, UICharInfoU5BU5D_t1109* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UICharInfoU5BU5D_t1109* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UICharInfoU5BU5D_t1109*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m29061_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m29061_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m29062_gshared (Collection_1_t4352 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UICharInfo_t525  L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m29063_GenericMethod;
extern "C" void Collection_1_Insert_m29063_gshared (Collection_1_t4352 * __this, int32_t ___index, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UICharInfo_t525  L_1 = ___item;
		VirtActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m29064_gshared (Collection_1_t4352 * __this, int32_t ___index, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		UICharInfo_t525  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m29065_GenericMethod;
extern "C" bool Collection_1_Remove_m29065_gshared (Collection_1_t4352 * __this, UICharInfo_t525  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UICharInfo_t525  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m29066_GenericMethod;
extern "C" void Collection_1_RemoveAt_m29066_gshared (Collection_1_t4352 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m29067_gshared (Collection_1_t4352 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m29068_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m29068_gshared (Collection_1_t4352 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m29069_GenericMethod;
extern "C" UICharInfo_t525  Collection_1_get_Item_m29069_gshared (Collection_1_t4352 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UICharInfo_t525  L_2 = (UICharInfo_t525 )InterfaceFuncInvoker1< UICharInfo_t525 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m29070_GenericMethod;
extern "C" void Collection_1_set_Item_m29070_gshared (Collection_1_t4352 * __this, int32_t ___index, UICharInfo_t525  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UICharInfo_t525  L_1 = ___value;
		VirtActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m29071_gshared (Collection_1_t4352 * __this, int32_t ___index, UICharInfo_t525  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		UICharInfo_t525  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m29072_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m10897_MethodInfo, L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::ConvertItem(System.Object)
extern "C" UICharInfo_t525  Collection_1_ConvertItem_m29073_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_000f:
	{
		ArgumentException_t534 * L_3 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_3, (String_t*) &_stringLiteral1581, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m29074_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	{
		Object_t* L_0 = ___list;
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t207 * L_2 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_2, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m29075_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_get_IsSynchronized_m14878_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UICharInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m29076_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&IList_t1352_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IList_get_IsFixedSize_m14879_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4353_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_71MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_71.h"
extern TypeInfo DefaultComparer_t4354_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_71MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4353_0_0_0;
extern Il2CppType IEquatable_1_t6081_0_0_0;
extern Il2CppType DefaultComparer_t4354_0_0_0;
extern MethodInfo DefaultComparer__ctor_m29082_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39219_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m36712_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m29082_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39219_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m36712_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m29077_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m29077_gshared (EqualityComparer_1_t4353 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m29078_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m29078_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4354 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4354 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4354 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4353_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29079_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29079_gshared (EqualityComparer_1_t4353 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29080_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29080_gshared (EqualityComparer_1_t4353 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, UICharInfo_t525 , UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UICharInfo>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m29081_GenericMethod;
extern "C" EqualityComparer_1_t4353 * EqualityComparer_1_get_Default_m29081_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4353 * L_0 = ((EqualityComparer_1_t4353_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6082_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UICharInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UICharInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t6081_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UICharInfo>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m29082_gshared (DefaultComparer_t4354 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4353 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m29083_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m29083_gshared (DefaultComparer_t4354 * __this, UICharInfo_t525  ___obj, MethodInfo* method)
{
	{
		UICharInfo_t525  L_0 = ___obj;
		UICharInfo_t525  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1072_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UICharInfo>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m29084_GenericMethod;
extern "C" bool DefaultComparer_Equals_m29084_gshared (DefaultComparer_t4354 * __this, UICharInfo_t525  ___x, UICharInfo_t525  ___y, MethodInfo* method)
{
	{
		UICharInfo_t525  L_0 = ___x;
		UICharInfo_t525  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UICharInfo_t525  L_3 = ___y;
		UICharInfo_t525  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UICharInfo_t525  L_6 = ___y;
		UICharInfo_t525  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m29085_GenericMethod;
extern "C" void Predicate_1__ctor_m29085_gshared (Predicate_1_t4355 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m29086_gshared (Predicate_1_t4355 * __this, UICharInfo_t525  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m29086((Predicate_1_t4355 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UICharInfo_t525  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, UICharInfo_t525  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m29087_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m29087_gshared (Predicate_1_t4355 * __this, UICharInfo_t525  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UICharInfo_t525_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m29088_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m29088_gshared (Predicate_1_t4355 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_56.h"
extern TypeInfo DefaultComparer_t4357_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_56MethodDeclarations.h"
extern Il2CppType IComparable_1_t5357_0_0_0;
extern Il2CppType DefaultComparer_t4357_0_0_0;
extern MethodInfo DefaultComparer__ctor_m29093_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39220_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m29093_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39220_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m29089_GenericMethod;
extern "C" void Comparer_1__ctor_m29089_gshared (Comparer_1_t4356 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m29090_GenericMethod;
extern "C" void Comparer_1__cctor_m29090_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4357 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4357 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4357 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t4356_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m29091_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m29091_gshared (Comparer_1_t4356 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UICharInfo_t525 , UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(UICharInfo_t525 *)((UICharInfo_t525 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_8, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UICharInfo>::get_Default()
extern "C" Comparer_1_t4356 * Comparer_1_get_Default_m29092_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t4356 * L_0 = ((Comparer_1_t4356_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5356_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UICharInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5357_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UICharInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m36721_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m36721_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m29093_gshared (DefaultComparer_t4357 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4356 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UICharInfo>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m29094_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m29094_gshared (DefaultComparer_t4357 * __this, UICharInfo_t525  ___x, UICharInfo_t525  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		UICharInfo_t525  L_0 = ___x;
		UICharInfo_t525  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		UICharInfo_t525  L_3 = ___y;
		UICharInfo_t525  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		UICharInfo_t525  L_6 = ___y;
		UICharInfo_t525  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		UICharInfo_t525  L_9 = ___x;
		UICharInfo_t525  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		UICharInfo_t525  L_12 = ___x;
		UICharInfo_t525  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		UICharInfo_t525  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, UICharInfo_t525  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		UICharInfo_t525  L_17 = ___x;
		UICharInfo_t525  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		UICharInfo_t525  L_20 = ___x;
		UICharInfo_t525  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		UICharInfo_t525  L_23 = ___y;
		UICharInfo_t525  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m14570_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t534 * L_27 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_27, (String_t*) &_stringLiteral1571, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4358_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Comparison_1_gen_56MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m29095_GenericMethod;
extern "C" void Comparison_1__ctor_m29095_gshared (Comparison_1_t4358 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m29096_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m29096_gshared (Comparison_1_t4358 * __this, UICharInfo_t525  ___x, UICharInfo_t525  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m29096((Comparison_1_t4358 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UICharInfo_t525  ___x, UICharInfo_t525  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, UICharInfo_t525  ___x, UICharInfo_t525  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m29097_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m29097_gshared (Comparison_1_t4358 * __this, UICharInfo_t525  ___x, UICharInfo_t525  ___y, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UICharInfo_t525_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&UICharInfo_t525_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m29098_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m29098_gshared (Comparison_1_t4358 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_55.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t1108_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_55MethodDeclarations.h"

// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_57.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_56.h"
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_58.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_57.h"
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_57.h"
extern TypeInfo UILineInfo_t523_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t526_il2cpp_TypeInfo;
extern TypeInfo UILineInfoU5BU5D_t1110_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4359_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5069_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5070_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4360_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4364_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4365_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_56MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Predicate_1_gen_58MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_57MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_57MethodDeclarations.h"
extern Il2CppType List_1_t1108_0_0_0;
extern Il2CppType ICollection_1_t526_0_0_0;
extern Il2CppType UILineInfoU5BU5D_t1110_0_0_0;
extern Il2CppType Enumerator_t4359_0_0_0;
extern Il2CppType IEnumerable_1_t5069_0_0_0;
extern Il2CppType IEnumerator_1_t5070_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4360_0_0_0;
extern Il2CppType Predicate_1_t4364_0_0_0;
extern Il2CppType Comparer_1_t4365_0_0_0;
extern MethodInfo List_1_get_Item_m29146_MethodInfo;
extern MethodInfo List_1_set_Item_m29147_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m2796_MethodInfo;
extern MethodInfo List_1_Add_m29117_MethodInfo;
extern MethodInfo List_1_Contains_m29124_MethodInfo;
extern MethodInfo List_1_IndexOf_m29130_MethodInfo;
extern MethodInfo List_1_Insert_m29133_MethodInfo;
extern MethodInfo List_1_Remove_m29135_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39221_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39222_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39223_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m29154_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m29229_MethodInfo;
extern MethodInfo Enumerator__ctor_m29148_MethodInfo;
extern MethodInfo List_1_RemoveAt_m29137_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UILineInfo>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisUILineInfo_t523_m36726_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t1110** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisUILineInfo_t523_m36726(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110**, int32_t, MethodInfo*))Array_Resize_TisUILineInfo_t523_m36726_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_72.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UILineInfo>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisUILineInfo_t523_m36728_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t1110* p0, UILineInfo_t523  p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisUILineInfo_t523_m36728(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110*, UILineInfo_t523 , int32_t, int32_t, MethodInfo*))Array_IndexOf_TisUILineInfo_t523_m36728_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisUILineInfo_t523_m36730_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t1110* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisUILineInfo_t523_m36730(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisUILineInfo_t523_m36730_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UILineInfo>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisUILineInfo_t523_m36738_gshared (Object_t * __this /* static, unused */, UILineInfoU5BU5D_t1110* p0, int32_t p1, Comparison_1_t4367 * p2, MethodInfo* method);
#define Array_Sort_TisUILineInfo_t523_m36738(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110*, int32_t, Comparison_1_t4367 *, MethodInfo*))Array_Sort_TisUILineInfo_t523_m36738_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m29146_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m29147_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisUILineInfo_t523_m36726_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m29132_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m29134_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m29120_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m2796_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m29119_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m29129_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m29117_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m29124_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m29130_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m29133_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m29135_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m29118_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m29143_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m29144_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39221_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39222_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39223_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m29154_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisUILineInfo_t523_m36728_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m29127_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m29128_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m29229_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m29148_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m29131_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m29137_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m29235_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisUILineInfo_t523_m36730_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisUILineInfo_t523_m36738_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m29099_GenericMethod;
extern "C" void List_1__ctor_m29099_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UILineInfoU5BU5D_t1110* L_0 = ((List_1_t1108_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1__ctor_m29100_GenericMethod;
extern "C" void List_1__ctor_m29100_gshared (List_1_t1108 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t1108 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UILineInfoU5BU5D_t1110* L_3 = ((List_1_t1108_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t1108 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_5);
		__this->____items_1 = ((UILineInfoU5BU5D_t1110*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_6));
		Object_t* L_7 = V_0;
		(( void (*) (List_1_t1108 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m7306_GenericMethod;
extern "C" void List_1__ctor_m7306_gshared (List_1_t1108 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_1 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_1, (String_t*) &_stringLiteral596, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = ___capacity;
		__this->____items_1 = ((UILineInfoU5BU5D_t1110*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m29101_GenericMethod;
extern "C" void List_1__cctor_m29101_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t1108_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((UILineInfoU5BU5D_t1110*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29102_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m29102_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		Enumerator_t4359  L_0 = (( Enumerator_t4359  (*) (List_1_t1108 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t4359  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m29103_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m29103_gshared (List_1_t1108 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m29104_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m29104_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		Enumerator_t4359  L_0 = (( Enumerator_t4359  (*) (List_1_t1108 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t4359  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m29105_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m29105_gshared (List_1_t1108 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtActionInvoker1< UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			int32_t L_1 = (__this->____size_2);
			V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
			goto IL_002a;
		}

IL_0017:
		{
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0019;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001c;
		throw e;
	}

CATCH_0019:
	{ // begin catch(System.NullReferenceException)
		goto IL_001f;
	} // end catch (depth: 1)

CATCH_001c:
	{ // begin catch(System.InvalidCastException)
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		ArgumentException_t534 * L_2 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_2, (String_t*) &_stringLiteral1581, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_002a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m29106_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m29106_gshared (List_1_t1108 * __this, Object_t * ___item, MethodInfo* method)
{
	bool V_0 = false;
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			bool L_1 = (bool)VirtFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return 0;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m29107_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m29107_gshared (List_1_t1108 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			V_0 = L_1;
			goto IL_0019;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m29108_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m29108_gshared (List_1_t1108 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t1108 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), __this, L_1, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0029;
		}

IL_0016:
		{
			goto IL_001e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0018;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001b;
		throw e;
	}

CATCH_0018:
	{ // begin catch(System.NullReferenceException)
		goto IL_001e;
	} // end catch (depth: 1)

CATCH_001b:
	{ // begin catch(System.InvalidCastException)
		goto IL_001e;
	} // end catch (depth: 1)

IL_001e:
	{
		ArgumentException_t534 * L_3 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_3, (String_t*) &_stringLiteral1581, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m29109_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m29109_gshared (List_1_t1108 * __this, Object_t * ___item, MethodInfo* method)
{
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = ___item;
			VirtFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), __this, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0017;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29110_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29110_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m29111_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m29111_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m29112_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m29112_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m29113_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m29113_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m29114_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m29114_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m29115_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m29115_gshared (List_1_t1108 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t523  L_1 = (UILineInfo_t523 )VirtFuncInvoker1< UILineInfo_t523 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_0);
		UILineInfo_t523  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m29116_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m29116_gshared (List_1_t1108 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = ___index;
			Object_t * L_1 = ___value;
			VirtActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
			goto IL_0022;
		}

IL_000f:
		{
			goto IL_0017;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&NullReferenceException_t853_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0011;
		if(il2cpp_codegen_class_is_assignable_from (&InvalidCastException_t2504_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0014;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.NullReferenceException)
		goto IL_0017;
	} // end catch (depth: 1)

CATCH_0014:
	{ // begin catch(System.InvalidCastException)
		goto IL_0017;
	} // end catch (depth: 1)

IL_0017:
	{
		ArgumentException_t534 * L_2 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_2, (String_t*) &_stringLiteral813, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m29117_gshared (List_1_t1108 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		UILineInfoU5BU5D_t1110* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t1108 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_0017:
	{
		UILineInfoU5BU5D_t1110* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		UILineInfo_t523  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_2, L_5)) = (UILineInfo_t523 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m29118_gshared (List_1_t1108 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		UILineInfoU5BU5D_t1110* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t1108 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		int32_t L_5 = Math_Max_m10043(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m10043(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		(( void (*) (List_1_t1108 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m29119_gshared (List_1_t1108 * __this, Object_t* ___collection, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = ___collection;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		(( void (*) (List_1_t1108 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		Object_t* L_4 = ___collection;
		UILineInfoU5BU5D_t1110* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t1110*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m29120_gshared (List_1_t1108 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	UILineInfo_t523  V_0 = {0};
	Object_t* V_1 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t* L_0 = ___enumerable;
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0017;
		}

IL_0009:
		{
			Object_t* L_2 = V_1;
			NullCheck(L_2);
			UILineInfo_t523  L_3 = (UILineInfo_t523 )InterfaceFuncInvoker0< UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_2);
			V_0 = L_3;
			UILineInfo_t523  L_4 = V_0;
			VirtActionInvoker1< UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_4);
		}

IL_0017:
		{
			Object_t* L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4885_MethodInfo, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			Object_t* L_7 = V_1;
			if (L_7)
			{
				goto IL_0025;
			}
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(33)
		}

IL_0025:
		{
			Object_t* L_8 = V_1;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_8);
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m29121_GenericMethod;
extern "C" void List_1_AddRange_m29121_gshared (List_1_t1108 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t1108 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t* L_1 = ___collection;
		V_0 = ((Object_t*)IsInst(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_3 = V_0;
		(( void (*) (List_1_t1108 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t1108 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m29122_GenericMethod;
extern "C" ReadOnlyCollection_1_t4360 * List_1_AsReadOnly_m29122_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t4360 * L_0 = (ReadOnlyCollection_1_t4360 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t4360 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern Il2CppGenericMethod List_1_Clear_m29123_GenericMethod;
extern "C" void List_1_Clear_m29123_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		UILineInfoU5BU5D_t1110* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m29124_gshared (List_1_t1108 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		UILineInfo_t523  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110*, UILineInfo_t523 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m29125_GenericMethod;
extern "C" void List_1_CopyTo_m29125_gshared (List_1_t1108 * __this, UILineInfoU5BU5D_t1110* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		UILineInfoU5BU5D_t1110* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m29126_GenericMethod;
extern TypeInfo* List_1_t1108_il2cpp_TypeInfo_var;
extern "C" UILineInfo_t523  List_1_Find_m29126_gshared (List_1_t1108 * __this, Predicate_1_t4364 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m29126_init;
	if (!List_1_Find_m29126_init)
	{
		List_1_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1108_0_0_0);
		List_1_Find_m29126_init = true;
	}
	int32_t V_0 = 0;
	UILineInfo_t523  V_1 = {0};
	UILineInfo_t523  G_B3_0 = {0};
	{
		Predicate_1_t4364 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1108_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t4364 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t4364 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t1108 *, int32_t, int32_t, Predicate_1_t4364 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		UILineInfoU5BU5D_t1110* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&UILineInfo_t523_il2cpp_TypeInfo), (&V_1));
		UILineInfo_t523  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m29127_gshared (Object_t * __this /* static, unused */, Predicate_1_t4364 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t4364 * L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1443, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m29128_gshared (List_1_t1108 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4364 * ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex;
		int32_t L_1 = ___count;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = ___startIndex;
		V_1 = L_2;
		goto IL_0022;
	}

IL_0008:
	{
		Predicate_1_t4364 * L_3 = ___match;
		UILineInfoU5BU5D_t1110* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_4, L_6)));
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t4359  List_1_GetEnumerator_m29129_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		Enumerator_t4359  L_0 = {0};
		(( void (*) (Enumerator_t4359 *, List_1_t1108 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m29130_gshared (List_1_t1108 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		UILineInfo_t523  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110*, UILineInfo_t523 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m29131_gshared (List_1_t1108 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
{
	{
		int32_t L_0 = ___delta;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___start;
		int32_t L_2 = ___delta;
		___start = ((int32_t)((int32_t)L_1-(int32_t)L_2));
	}

IL_000b:
	{
		int32_t L_3 = ___start;
		int32_t L_4 = (__this->____size_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0031;
		}
	}
	{
		UILineInfoU5BU5D_t1110* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		UILineInfoU5BU5D_t1110* L_7 = (__this->____items_1);
		int32_t L_8 = ___start;
		int32_t L_9 = ___delta;
		int32_t L_10 = (__this->____size_2);
		int32_t L_11 = ___start;
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8+(int32_t)L_9)), ((int32_t)((int32_t)L_10-(int32_t)L_11)), /*hidden argument*/&Array_Copy_m10846_MethodInfo);
	}

IL_0031:
	{
		int32_t L_12 = (__this->____size_2);
		int32_t L_13 = ___delta;
		__this->____size_2 = ((int32_t)((int32_t)L_12+(int32_t)L_13));
		int32_t L_14 = ___delta;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		UILineInfoU5BU5D_t1110* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m29132_gshared (List_1_t1108 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1256 * L_3 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_3, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m29133_gshared (List_1_t1108 * __this, int32_t ___index, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t1108 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = (__this->____size_2);
		UILineInfoU5BU5D_t1110* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t1108 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t1108 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		UILineInfoU5BU5D_t1110* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		UILineInfo_t523  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_4, L_5)) = (UILineInfo_t523 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m29134_gshared (List_1_t1108 * __this, Object_t* ___collection, MethodInfo* method)
{
	{
		Object_t* L_0 = ___collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1582, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m29135_gshared (List_1_t1108 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UILineInfo_t523  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32), __this, L_3);
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return ((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m29136_GenericMethod;
extern TypeInfo* List_1_t1108_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m29136_gshared (List_1_t1108 * __this, Predicate_1_t4364 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m29136_init;
	if (!List_1_RemoveAll_m29136_init)
	{
		List_1_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1108_0_0_0);
		List_1_RemoveAll_m29136_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t4364 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1108_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t4364 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t4364 * L_1 = ___match;
		UILineInfoU5BU5D_t1110* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_2, L_4)));
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0031;
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->____size_2);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000e;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = (__this->____size_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		return 0;
	}

IL_003c:
	{
		int32_t L_11 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		goto IL_0084;
	}

IL_0050:
	{
		Predicate_1_t4364 * L_13 = ___match;
		UILineInfoU5BU5D_t1110* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		UILineInfoU5BU5D_t1110* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		UILineInfoU5BU5D_t1110* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_18, L_20)) = (UILineInfo_t523 )(*(UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_21, L_23));
	}

IL_0080:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0084:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = (__this->____size_2);
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_27 = V_1;
		int32_t L_28 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_27-(int32_t)L_28))) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		UILineInfoU5BU5D_t1110* L_29 = (__this->____items_1);
		int32_t L_30 = V_0;
		int32_t L_31 = V_1;
		int32_t L_32 = V_0;
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_29, L_30, ((int32_t)((int32_t)L_31-(int32_t)L_32)), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
	}

IL_00a2:
	{
		int32_t L_33 = V_0;
		__this->____size_2 = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_0;
		return ((int32_t)((int32_t)L_34-(int32_t)L_35));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m29137_gshared (List_1_t1108 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) >= ((uint32_t)L_2))))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_t1256 * L_3 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_3, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		int32_t L_4 = ___index;
		(( void (*) (List_1_t1108 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		UILineInfoU5BU5D_t1110* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m29138_GenericMethod;
extern "C" void List_1_Reverse_m29138_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m10075(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m10075_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern Il2CppGenericMethod List_1_Sort_m29139_GenericMethod;
extern TypeInfo* Comparer_1_t4365_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m29139_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m29139_init;
	if (!List_1_Sort_m29139_init)
	{
		Comparer_1_t4365_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t4365_0_0_0);
		List_1_Sort_m29139_init = true;
	}
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t4365_il2cpp_TypeInfo_var);
		Comparer_1_t4365 * L_2 = (( Comparer_1_t4365 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m29140_GenericMethod;
extern "C" void List_1_Sort_m29140_gshared (List_1_t1108 * __this, Comparison_1_t4367 * ___comparison, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t4367 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110*, int32_t, Comparison_1_t4367 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m29141_GenericMethod;
extern "C" UILineInfoU5BU5D_t1110* List_1_ToArray_m29141_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	UILineInfoU5BU5D_t1110* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((UILineInfoU5BU5D_t1110*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0));
		UILineInfoU5BU5D_t1110* L_1 = (__this->____items_1);
		UILineInfoU5BU5D_t1110* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m9034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m9034_MethodInfo);
		UILineInfoU5BU5D_t1110* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m29142_GenericMethod;
extern "C" void List_1_TrimExcess_m29142_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t1108 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m29143_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		UILineInfoU5BU5D_t1110* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m29144_gshared (List_1_t1108 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) < ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_2 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8994(L_2, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8994_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000f:
	{
		UILineInfoU5BU5D_t1110** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, UILineInfoU5BU5D_t1110**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m29145_GenericMethod;
extern "C" int32_t List_1_get_Count_m29145_gshared (List_1_t1108 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t523  List_1_get_Item_m29146_gshared (List_1_t1108 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		int32_t L_1 = (__this->____size_2);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_2 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_2, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		UILineInfoU5BU5D_t1110* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m29147_gshared (List_1_t1108 * __this, int32_t ___index, UILineInfo_t523  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t1108 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = ___index;
		int32_t L_2 = (__this->____size_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_3 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_3, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001b:
	{
		UILineInfoU5BU5D_t1110* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		UILineInfo_t523  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_4, L_5)) = (UILineInfo_t523 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m29151_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m29148_gshared (Enumerator_t4359 * __this, List_1_t1108 * ___l, MethodInfo* method)
{
	{
		List_1_t1108 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t1108 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m29149_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m29149_gshared (Enumerator_t4359 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4359 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1784 * L_1 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8818(L_1, /*hidden argument*/&InvalidOperationException__ctor_m8818_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		UILineInfo_t523  L_2 = (__this->___current_3);
		UILineInfo_t523  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m29150_GenericMethod;
extern "C" void Enumerator_Dispose_m29150_gshared (Enumerator_t4359 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t1108 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::VerifyState()
extern "C" void Enumerator_VerifyState_m29151_gshared (Enumerator_t4359 * __this, MethodInfo* method)
{
	{
		List_1_t1108 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t4359  L_1 = (*(Enumerator_t4359 *)__this);
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m975(L_2, /*hidden argument*/&Object_GetType_m975_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m7409_MethodInfo, L_3);
		ObjectDisposedException_t1984 * L_5 = (ObjectDisposedException_t1984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1984_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10051(L_5, L_4, /*hidden argument*/&ObjectDisposedException__ctor_m10051_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = (__this->___ver_2);
		List_1_t1108 * L_7 = (__this->___l_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____version_3);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t1784 * L_9 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_9, (String_t*) &_stringLiteral1583, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m29152_GenericMethod;
extern "C" bool Enumerator_MoveNext_m29152_gshared (Enumerator_t4359 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t4359 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		int32_t L_1 = (__this->___next_1);
		List_1_t1108 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t1108 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		UILineInfoU5BU5D_t1110* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(UILineInfo_t523 *)(UILineInfo_t523 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m29153_GenericMethod;
extern "C" UILineInfo_t523  Enumerator_get_Current_m29153_gshared (Enumerator_t4359 * __this, MethodInfo* method)
{
	{
		UILineInfo_t523  L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IList_1_t522_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_56MethodDeclarations.h"
extern Il2CppType IList_1_t522_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m29183_MethodInfo;
extern MethodInfo IList_1_get_Item_m2774_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39224_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39225_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m29183_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m2774_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m29215_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39224_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39225_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m29154_gshared (ReadOnlyCollection_1_t4360 * __this, Object_t* ___list, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1584, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29155_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m29155_gshared (ReadOnlyCollection_1_t4360 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m29156_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m29156_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m29157_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m29157_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m29158_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m29158_gshared (ReadOnlyCollection_1_t4360 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m29159_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m29159_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m29160_GenericMethod;
extern "C" UILineInfo_t523  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m29160_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t523  L_1 = (UILineInfo_t523 )VirtFuncInvoker1< UILineInfo_t523 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m29161_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m29161_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, UILineInfo_t523  ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29162_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29162_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m29163_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m29163_gshared (ReadOnlyCollection_1_t4360 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m8807_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m29164_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m29164_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m7367_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m29165_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m29165_gshared (ReadOnlyCollection_1_t4360 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m29166_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m29166_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m29167_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m29167_gshared (ReadOnlyCollection_1_t4360 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m29168_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m29168_gshared (ReadOnlyCollection_1_t4360 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m29169_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m29169_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m29170_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m29170_gshared (ReadOnlyCollection_1_t4360 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m29171_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m29171_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m29172_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m29172_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m29173_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m29173_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m29174_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m29174_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m29175_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m29175_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m29176_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m29176_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UILineInfo_t523  L_2 = (UILineInfo_t523 )InterfaceFuncInvoker1< UILineInfo_t523 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		UILineInfo_t523  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m29177_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m29177_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m29178_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m29178_gshared (ReadOnlyCollection_1_t4360 * __this, UILineInfo_t523  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfo_t523  L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m29179_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m29179_gshared (ReadOnlyCollection_1_t4360 * __this, UILineInfoU5BU5D_t1110* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfoU5BU5D_t1110* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t1110*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m29180_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m29180_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m29181_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m29181_gshared (ReadOnlyCollection_1_t4360 * __this, UILineInfo_t523  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfo_t523  L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m29182_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m29182_gshared (ReadOnlyCollection_1_t4360 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t523  ReadOnlyCollection_1_get_Item_m29183_gshared (ReadOnlyCollection_1_t4360 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UILineInfo_t523  L_2 = (UILineInfo_t523 )InterfaceFuncInvoker1< UILineInfo_t523 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_56.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4361_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t4361_0_0_0;
extern Il2CppType UILineInfo_t523_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39226_MethodInfo;
extern MethodInfo Collection_1_SetItem_m29214_MethodInfo;
extern MethodInfo List_1__ctor_m29099_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m29207_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m29205_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m29210_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m29201_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39227_MethodInfo;
extern MethodInfo IList_1_Insert_m39228_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39229_MethodInfo;
extern MethodInfo IList_1_set_Item_m39230_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39226_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m29218_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m29219_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m29216_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m29214_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m29207_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m29217_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m29205_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m29210_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m29201_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39227_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39228_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39229_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39230_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m29184_GenericMethod;
extern TypeInfo* List_1_t1108_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m29184_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m29184_init;
	if (!Collection_1__ctor_m29184_init)
	{
		List_1_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1108_0_0_0);
		Collection_1__ctor_m29184_init = true;
	}
	List_1_t1108 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1108_il2cpp_TypeInfo_var);
		List_1_t1108 * L_0 = (List_1_t1108 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t1108 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t1108 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t1108 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29185_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m29185_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m29186_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m29186_gshared (Collection_1_t4361 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo))));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m8807_MethodInfo, ((Object_t *)Castclass(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo))), L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m29187_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m29187_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m29188_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m29188_gshared (Collection_1_t4361 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		UILineInfo_t523  L_4 = (( UILineInfo_t523  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m29189_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m29189_gshared (Collection_1_t4361 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m29190_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m29190_gshared (Collection_1_t4361 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m29191_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m29191_gshared (Collection_1_t4361 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UILineInfo_t523  L_2 = (( UILineInfo_t523  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m29192_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m29192_gshared (Collection_1_t4361 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		UILineInfo_t523  L_2 = (( UILineInfo_t523  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m29193_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m29193_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m29194_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m29194_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m29195_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m29195_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m29196_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m29196_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m29197_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m29197_gshared (Collection_1_t4361 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UILineInfo_t523  L_2 = (UILineInfo_t523 )InterfaceFuncInvoker1< UILineInfo_t523 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		UILineInfo_t523  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m29198_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m29198_gshared (Collection_1_t4361 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		UILineInfo_t523  L_2 = (( UILineInfo_t523  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m29199_GenericMethod;
extern "C" void Collection_1_Add_m29199_gshared (Collection_1_t4361 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		UILineInfo_t523  L_3 = ___item;
		VirtActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m29200_GenericMethod;
extern "C" void Collection_1_Clear_m29200_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::ClearItems()
extern "C" void Collection_1_ClearItems_m29201_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m29202_GenericMethod;
extern "C" bool Collection_1_Contains_m29202_gshared (Collection_1_t4361 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfo_t523  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m29203_GenericMethod;
extern "C" void Collection_1_CopyTo_m29203_gshared (Collection_1_t4361 * __this, UILineInfoU5BU5D_t1110* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfoU5BU5D_t1110* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< UILineInfoU5BU5D_t1110*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m29204_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m29204_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m29205_gshared (Collection_1_t4361 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		UILineInfo_t523  L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m29206_GenericMethod;
extern "C" void Collection_1_Insert_m29206_gshared (Collection_1_t4361 * __this, int32_t ___index, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t523  L_1 = ___item;
		VirtActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m29207_gshared (Collection_1_t4361 * __this, int32_t ___index, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		UILineInfo_t523  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m29208_GenericMethod;
extern "C" bool Collection_1_Remove_m29208_gshared (Collection_1_t4361 * __this, UILineInfo_t523  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		UILineInfo_t523  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m29209_GenericMethod;
extern "C" void Collection_1_RemoveAt_m29209_gshared (Collection_1_t4361 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m29210_gshared (Collection_1_t4361 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m29211_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m29211_gshared (Collection_1_t4361 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m29212_GenericMethod;
extern "C" UILineInfo_t523  Collection_1_get_Item_m29212_gshared (Collection_1_t4361 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		UILineInfo_t523  L_2 = (UILineInfo_t523 )InterfaceFuncInvoker1< UILineInfo_t523 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m29213_GenericMethod;
extern "C" void Collection_1_set_Item_m29213_gshared (Collection_1_t4361 * __this, int32_t ___index, UILineInfo_t523  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		UILineInfo_t523  L_1 = ___value;
		VirtActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m29214_gshared (Collection_1_t4361 * __this, int32_t ___index, UILineInfo_t523  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		UILineInfo_t523  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m29215_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m10897_MethodInfo, L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::ConvertItem(System.Object)
extern "C" UILineInfo_t523  Collection_1_ConvertItem_m29216_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_000f:
	{
		ArgumentException_t534 * L_3 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_3, (String_t*) &_stringLiteral1581, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m29217_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	{
		Object_t* L_0 = ___list;
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t207 * L_2 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_2, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m29218_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&ICollection_t1351_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&ICollection_get_IsSynchronized_m14878_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UILineInfo>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m29219_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
{
	Object_t * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		Object_t* L_0 = ___list;
		V_0 = ((Object_t *)IsInst(L_0, InitializedTypeInfo(&IList_t1352_il2cpp_TypeInfo)));
		Object_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IList_get_IsFixedSize_m14879_MethodInfo, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4362_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_72MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_72.h"
extern TypeInfo DefaultComparer_t4363_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_72MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4362_0_0_0;
extern Il2CppType IEquatable_1_t6083_0_0_0;
extern Il2CppType DefaultComparer_t4363_0_0_0;
extern MethodInfo DefaultComparer__ctor_m29225_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39231_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m36727_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m29225_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39231_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m36727_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m29220_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m29220_gshared (EqualityComparer_1_t4362 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m29221_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m29221_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4363 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4363 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4363 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4362_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29222_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m29222_gshared (EqualityComparer_1_t4362 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29223_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m29223_gshared (EqualityComparer_1_t4362 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, UILineInfo_t523 , UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UILineInfo>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m29224_GenericMethod;
extern "C" EqualityComparer_1_t4362 * EqualityComparer_1_get_Default_m29224_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4362 * L_0 = ((EqualityComparer_1_t4362_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6084_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UILineInfo>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t6083_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UILineInfo>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m29225_gshared (DefaultComparer_t4363 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4362 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m29226_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m29226_gshared (DefaultComparer_t4363 * __this, UILineInfo_t523  ___obj, MethodInfo* method)
{
	{
		UILineInfo_t523  L_0 = ___obj;
		UILineInfo_t523  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1072_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UILineInfo>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m29227_GenericMethod;
extern "C" bool DefaultComparer_Equals_m29227_gshared (DefaultComparer_t4363 * __this, UILineInfo_t523  ___x, UILineInfo_t523  ___y, MethodInfo* method)
{
	{
		UILineInfo_t523  L_0 = ___x;
		UILineInfo_t523  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		UILineInfo_t523  L_3 = ___y;
		UILineInfo_t523  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		UILineInfo_t523  L_6 = ___y;
		UILineInfo_t523  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m29228_GenericMethod;
extern "C" void Predicate_1__ctor_m29228_gshared (Predicate_1_t4364 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m29229_gshared (Predicate_1_t4364 * __this, UILineInfo_t523  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m29229((Predicate_1_t4364 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t523  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, UILineInfo_t523  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m29230_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m29230_gshared (Predicate_1_t4364 * __this, UILineInfo_t523  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UILineInfo_t523_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m29231_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m29231_gshared (Predicate_1_t4364 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_57.h"
extern TypeInfo DefaultComparer_t4366_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_57MethodDeclarations.h"
extern Il2CppType IComparable_1_t5359_0_0_0;
extern Il2CppType DefaultComparer_t4366_0_0_0;
extern MethodInfo DefaultComparer__ctor_m29236_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39232_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m29236_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39232_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m29232_GenericMethod;
extern "C" void Comparer_1__ctor_m29232_gshared (Comparer_1_t4365 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m29233_GenericMethod;
extern "C" void Comparer_1__cctor_m29233_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4366 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4366 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4366 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t4365_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m29234_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m29234_gshared (Comparer_1_t4365 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, UILineInfo_t523 , UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(UILineInfo_t523 *)((UILineInfo_t523 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_8, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UILineInfo>::get_Default()
extern "C" Comparer_1_t4365 * Comparer_1_get_Default_m29235_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t4365 * L_0 = ((Comparer_1_t4365_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5358_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UILineInfo>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5359_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UILineInfo>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m36736_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m36736_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::.ctor()
extern "C" void DefaultComparer__ctor_m29236_gshared (DefaultComparer_t4366 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4365 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UILineInfo>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m29237_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m29237_gshared (DefaultComparer_t4366 * __this, UILineInfo_t523  ___x, UILineInfo_t523  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		UILineInfo_t523  L_0 = ___x;
		UILineInfo_t523  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		UILineInfo_t523  L_3 = ___y;
		UILineInfo_t523  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		UILineInfo_t523  L_6 = ___y;
		UILineInfo_t523  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		UILineInfo_t523  L_9 = ___x;
		UILineInfo_t523  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		UILineInfo_t523  L_12 = ___x;
		UILineInfo_t523  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		UILineInfo_t523  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, UILineInfo_t523  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		UILineInfo_t523  L_17 = ___x;
		UILineInfo_t523  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		UILineInfo_t523  L_20 = ___x;
		UILineInfo_t523  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		UILineInfo_t523  L_23 = ___y;
		UILineInfo_t523  L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck(((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m14570_MethodInfo, ((Object_t *)Castclass(L_22, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))), L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t534 * L_27 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_27, (String_t*) &_stringLiteral1571, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4367_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Comparison_1_gen_57MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m29238_GenericMethod;
extern "C" void Comparison_1__ctor_m29238_gshared (Comparison_1_t4367 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m29239_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m29239_gshared (Comparison_1_t4367 * __this, UILineInfo_t523  ___x, UILineInfo_t523  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m29239((Comparison_1_t4367 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, UILineInfo_t523  ___x, UILineInfo_t523  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, UILineInfo_t523  ___x, UILineInfo_t523  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m29240_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m29240_gshared (Comparison_1_t4367 * __this, UILineInfo_t523  ___x, UILineInfo_t523  ___y, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&UILineInfo_t523_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&UILineInfo_t523_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m29241_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m29241_gshared (Comparison_1_t4367 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t1114_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t1358_il2cpp_TypeInfo;

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Remove(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
