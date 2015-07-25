#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo IEnumerator_1_t5797_il2cpp_TypeInfo;

// Vuforia.QCARManagerImpl/PropData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Pro.h"

// System.Array
#include "mscorlib_System_Array.h"

// T System.Collections.Generic.IEnumerator`1<Vuforia.QCARManagerImpl/PropData>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/PropData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_135.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3791_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/PropData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_135MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo PropData_t720_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3791_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m8811_MethodInfo;
extern MethodInfo Array_get_Length_m8815_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.QCARManagerImpl/PropData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.QCARManagerImpl/PropData>(System.Int32)
extern "C" PropData_t720  Array_InternalArray__get_Item_TisPropData_t720_m35180_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisPropData_t720_m35180(__this, p0, method) (( PropData_t720  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisPropData_t720_m35180_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m22842_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisPropData_t720_m35180_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/PropData>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m22838_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m22838_gshared (InternalEnumerator_1_t3791 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/PropData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22839_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m22839_gshared (InternalEnumerator_1_t3791 * __this, MethodInfo* method)
{
	{
		PropData_t720  L_0 = (( PropData_t720  (*) (InternalEnumerator_1_t3791 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		PropData_t720  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/PropData>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m22840_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m22840_gshared (InternalEnumerator_1_t3791 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/PropData>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m22841_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m22841_gshared (InternalEnumerator_1_t3791 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/PropData>::get_Current()
extern "C" PropData_t720  InternalEnumerator_1_get_Current_m22842_gshared (InternalEnumerator_1_t3791 * __this, MethodInfo* method)
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
		PropData_t720  L_8 = (( PropData_t720  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5798_il2cpp_TypeInfo;

#include "Qualcomm.Vuforia.UnityExtensions_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/PropData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/PropData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/PropData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/PropData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/PropData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/PropData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/PropData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5799_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/PropData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5800_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/PropData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/PropData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/PropData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/PropData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/PropData>::set_Item(System.Int32,T)
// System.Array/InternalEnumerator`1<Vuforia.TrackableBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_136.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3792_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.TrackableBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_136MethodDeclarations.h"

// Vuforia.TrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"
extern TypeInfo TrackableBehaviour_t116_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3792_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m32943(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.TrackableBehaviour>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.TrackableBehaviour>(System.Int32)
#define Array_InternalArray__get_Item_TisTrackableBehaviour_t116_m35192(__this, p0, method) (( TrackableBehaviour_t116 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m22847_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTrackableBehaviour_t116_m35192_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.TrackableBehaviour>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.TrackableBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.TrackableBehaviour>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.TrackableBehaviour>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.TrackableBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4970_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.TrackableBehaviour>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3925_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.TrackableBehaviour>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.TrackableBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.TrackableBehaviour>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.TrackableBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.TrackableBehaviour>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5801_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.IEditorTrackableBehaviour>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.IEditorTrackableBehaviour>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.IEditorTrackableBehaviour>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.IEditorTrackableBehaviour>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.IEditorTrackableBehaviour>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.IEditorTrackableBehaviour>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.IEditorTrackableBehaviour>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5802_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.IEditorTrackableBehaviour>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5803_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Vuforia.IEditorTrackableBehaviour>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.IEditorTrackableBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_137.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3793_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.IEditorTrackableBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_137MethodDeclarations.h"

extern TypeInfo IEditorTrackableBehaviour_t270_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3793_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.IEditorTrackableBehaviour>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.IEditorTrackableBehaviour>(System.Int32)
#define Array_InternalArray__get_Item_TisIEditorTrackableBehaviour_t270_m35203(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m22852_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEditorTrackableBehaviour_t270_m35203_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.IEditorTrackableBehaviour>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.IEditorTrackableBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.IEditorTrackableBehaviour>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.IEditorTrackableBehaviour>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.IEditorTrackableBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5804_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.IEditorTrackableBehaviour>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.IEditorTrackableBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.IEditorTrackableBehaviour>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.IEditorTrackableBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.IEditorTrackableBehaviour>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t738_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4942_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Vuforia.SmartTerrainTrackable>::get_Current()
// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_List_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t736_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_List_1_gen_32MethodDeclarations.h"

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_33.h"
// System.Predicate`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Predicate_1_gen_35.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_34.h"
// System.Comparison`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Comparison_1_gen_34.h"
extern TypeInfo SmartTerrainTrackable_t652_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t853_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2504_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4943_il2cpp_TypeInfo;
extern TypeInfo SmartTerrainTrackableU5BU5D_t3794_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3796_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3798_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3802_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3803_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_33MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Predicate_1_gen_35MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_50MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_34MethodDeclarations.h"
extern Il2CppType List_1_t736_0_0_0;
extern Il2CppType ICollection_1_t4943_0_0_0;
extern Il2CppType SmartTerrainTrackableU5BU5D_t3794_0_0_0;
extern Il2CppType Enumerator_t3796_0_0_0;
extern Il2CppType IEnumerable_1_t738_0_0_0;
extern Il2CppType IEnumerator_1_t4942_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3798_0_0_0;
extern Il2CppType Predicate_1_t3802_0_0_0;
extern Il2CppType Comparer_1_t3803_0_0_0;
extern MethodInfo List_1_get_Item_m22897_MethodInfo;
extern MethodInfo List_1_set_Item_m22898_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8994_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8819_MethodInfo;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38826_MethodInfo;
extern MethodInfo Array_Copy_m10846_MethodInfo;
extern MethodInfo List_1_Add_m5169_MethodInfo;
extern MethodInfo List_1_Contains_m5168_MethodInfo;
extern MethodInfo List_1_IndexOf_m22882_MethodInfo;
extern MethodInfo List_1_Insert_m22885_MethodInfo;
extern MethodInfo List_1_Remove_m5170_MethodInfo;
extern MethodInfo Math_Max_m10043_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m38827_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38828_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38829_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4885_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m22910_MethodInfo;
extern MethodInfo Array_Clear_m10034_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m22985_MethodInfo;
extern MethodInfo Enumerator__ctor_m22904_MethodInfo;
extern MethodInfo List_1_RemoveAt_m22888_MethodInfo;
extern MethodInfo Array_Reverse_m10075_MethodInfo;
extern MethodInfo Array_Copy_m9034_MethodInfo;
struct Array_t;
struct Array_t;
#include "mscorlib_ArrayTypes.h"
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m33054_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m33054(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<Vuforia.SmartTerrainTrackable>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<Vuforia.SmartTerrainTrackable>(!!0[]&,System.Int32)
#define Array_Resize_TisSmartTerrainTrackable_t652_m35225(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, SmartTerrainTrackableU5BU5D_t3794**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14600_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14600(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<Vuforia.SmartTerrainTrackable>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<Vuforia.SmartTerrainTrackable>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisSmartTerrainTrackable_t652_m35227(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, SmartTerrainTrackableU5BU5D_t3794*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33123_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m33123(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<Vuforia.SmartTerrainTrackable>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<Vuforia.SmartTerrainTrackable>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisSmartTerrainTrackable_t652_m35229(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, SmartTerrainTrackableU5BU5D_t3794*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// System.Exception
#include "mscorlib_System_Exception.h"
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33263_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, Comparison_1_t3104 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m33263(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, Comparison_1_t3104 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<Vuforia.SmartTerrainTrackable>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<Vuforia.SmartTerrainTrackable>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisSmartTerrainTrackable_t652_m35237(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, SmartTerrainTrackableU5BU5D_t3794*, int32_t, Comparison_1_t3805 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m22897_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m22898_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisSmartTerrainTrackable_t652_m35225_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m22884_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m22886_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m22873_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38826_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m22872_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m22881_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m5169_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m5168_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m22882_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m22885_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m5170_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m22871_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m22894_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m22895_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m38827_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38828_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38829_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m22910_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisSmartTerrainTrackable_t652_m35227_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m22879_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m22880_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m22985_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m22904_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m22883_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m22888_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m22991_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisSmartTerrainTrackable_t652_m35229_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisSmartTerrainTrackable_t652_m35237_GenericMethod;


// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::.ctor()
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Add(T)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Clear()
// System.Boolean System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Contains(T)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Reverse()
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Sort()
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::ToArray()
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::get_Capacity()
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::get_Count()
// T System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackable>::Remove(T)
// System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_138.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3795_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_138MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3795_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.SmartTerrainTrackable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.SmartTerrainTrackable>(System.Int32)
#define Array_InternalArray__get_Item_TisSmartTerrainTrackable_t652_m35214(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m22903_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSmartTerrainTrackable_t652_m35214_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackable>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3797_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1984_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m8818_MethodInfo;
extern MethodInfo Object_GetType_m975_MethodInfo;
extern MethodInfo Type_get_FullName_m7409_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10051_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m22907_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.SmartTerrainTrackable>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<Vuforia.SmartTerrainTrackable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.SmartTerrainTrackable>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.SmartTerrainTrackable>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.SmartTerrainTrackable>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<Vuforia.SmartTerrainTrackable>::get_Current()
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
// System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_33MethodDeclarations.h"
extern Il2CppType IList_1_t3797_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m22939_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;
extern MethodInfo IList_1_get_Item_m38830_MethodInfo;
extern MethodInfo ICollection_CopyTo_m8807_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo ICollection_1_Contains_m38831_MethodInfo;
extern MethodInfo IList_1_IndexOf_m38832_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m22939_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m38830_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m22971_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m38831_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m38832_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.SmartTerrainTrackable>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3799_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IList_t1352_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t3799_0_0_0;
extern Il2CppType SmartTerrainTrackable_t652_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m38833_MethodInfo;
extern MethodInfo Collection_1_SetItem_m22970_MethodInfo;
extern MethodInfo List_1__ctor_m5167_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m14599_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m22963_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m22961_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m22966_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m22957_MethodInfo;
extern MethodInfo ICollection_1_Clear_m38834_MethodInfo;
extern MethodInfo IList_1_Insert_m38835_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m38836_MethodInfo;
extern MethodInfo IList_1_set_Item_m38837_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10897_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14878_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14879_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m38833_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m22974_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m22975_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m22972_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m22970_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m5167_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m22963_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m22973_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m22961_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m22966_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m22957_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m38834_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m38835_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m38836_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m38837_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::get_Count()
// T System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.SmartTerrainTrackable>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3800_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_39.h"
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3801_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_39MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3800_0_0_0;
extern Il2CppType IEquatable_1_t5805_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t3801_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m22981_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m38838_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m35226_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m22981_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m38838_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m35226_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Vuforia.SmartTerrainTrackable>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5806_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<Vuforia.SmartTerrainTrackable>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<Vuforia.SmartTerrainTrackable>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5805_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<Vuforia.SmartTerrainTrackable>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m1072_MethodInfo;
extern MethodInfo Object_Equals_m1071_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m22976_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<Vuforia.SmartTerrainTrackable>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<Vuforia.SmartTerrainTrackable>::Invoke(T)
// System.IAsyncResult System.Predicate`1<Vuforia.SmartTerrainTrackable>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<Vuforia.SmartTerrainTrackable>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_34.h"
extern TypeInfo DefaultComparer_t3804_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_34MethodDeclarations.h"
extern Il2CppType IComparable_1_t5311_0_0_0;
extern Il2CppType GenericComparer_1_t2830_0_0_0;
extern Il2CppType DefaultComparer_t3804_0_0_0;
extern MethodInfo DefaultComparer__ctor_m22992_MethodInfo;
extern MethodInfo Comparer_1_Compare_m38839_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13771_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m22992_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m38839_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<Vuforia.SmartTerrainTrackable>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<Vuforia.SmartTerrainTrackable>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.SmartTerrainTrackable>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.SmartTerrainTrackable>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<Vuforia.SmartTerrainTrackable>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5310_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<Vuforia.SmartTerrainTrackable>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5311_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<Vuforia.SmartTerrainTrackable>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m35235_MethodInfo;
extern MethodInfo IComparable_CompareTo_m14570_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m22988_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m35235_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.SmartTerrainTrackable>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3805_il2cpp_TypeInfo;
// System.Comparison`1<Vuforia.SmartTerrainTrackable>
#include "mscorlib_System_Comparison_1_gen_34MethodDeclarations.h"



// System.Void System.Comparison`1<Vuforia.SmartTerrainTrackable>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<Vuforia.SmartTerrainTrackable>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<Vuforia.SmartTerrainTrackable>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<Vuforia.SmartTerrainTrackable>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_33.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t740_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_33MethodDeclarations.h"

// Vuforia.ReconstructionAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ReconstructionAbstr.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_34.h"
// System.Predicate`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Predicate_1_gen_36.h"
// System.Collections.Generic.Comparer`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_35.h"
// System.Comparison`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Comparison_1_gen_35.h"
extern TypeInfo ReconstructionAbstractBehaviour_t144_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4944_il2cpp_TypeInfo;
extern TypeInfo ReconstructionAbstractBehaviourU5BU5D_t878_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t876_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t647_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t850_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3807_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3809_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3810_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_34MethodDeclarations.h"
// System.Predicate`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Predicate_1_gen_36MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_35MethodDeclarations.h"
extern Il2CppType List_1_t740_0_0_0;
extern Il2CppType ICollection_1_t4944_0_0_0;
extern Il2CppType ReconstructionAbstractBehaviourU5BU5D_t878_0_0_0;
extern Il2CppType Enumerator_t876_0_0_0;
extern Il2CppType IEnumerable_1_t647_0_0_0;
extern Il2CppType IEnumerator_1_t850_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3807_0_0_0;
extern Il2CppType Predicate_1_t3809_0_0_0;
extern Il2CppType Comparer_1_t3810_0_0_0;
extern MethodInfo List_1_get_Item_m23038_MethodInfo;
extern MethodInfo List_1_set_Item_m23039_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m35190_MethodInfo;
extern MethodInfo List_1_Add_m5176_MethodInfo;
extern MethodInfo List_1_Contains_m5177_MethodInfo;
extern MethodInfo List_1_IndexOf_m23025_MethodInfo;
extern MethodInfo List_1_Insert_m23028_MethodInfo;
extern MethodInfo List_1_Remove_m5179_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m38840_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m4898_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4899_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m23044_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m23111_MethodInfo;
extern MethodInfo Enumerator__ctor_m23040_MethodInfo;
extern MethodInfo List_1_RemoveAt_m23031_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<Vuforia.ReconstructionAbstractBehaviour>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<Vuforia.ReconstructionAbstractBehaviour>(!!0[]&,System.Int32)
#define Array_Resize_TisReconstructionAbstractBehaviour_t144_m35240(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ReconstructionAbstractBehaviourU5BU5D_t878**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_29.h"
// Declaration System.Int32 System.Array::IndexOf<Vuforia.ReconstructionAbstractBehaviour>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<Vuforia.ReconstructionAbstractBehaviour>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisReconstructionAbstractBehaviour_t144_m35242(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ReconstructionAbstractBehaviourU5BU5D_t878*, ReconstructionAbstractBehaviour_t144 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<Vuforia.ReconstructionAbstractBehaviour>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<Vuforia.ReconstructionAbstractBehaviour>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisReconstructionAbstractBehaviour_t144_m35244(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ReconstructionAbstractBehaviourU5BU5D_t878*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<Vuforia.ReconstructionAbstractBehaviour>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<Vuforia.ReconstructionAbstractBehaviour>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisReconstructionAbstractBehaviour_t144_m35252(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ReconstructionAbstractBehaviourU5BU5D_t878*, int32_t, Comparison_1_t3812 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m23038_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m23039_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisReconstructionAbstractBehaviour_t144_m35240_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m23027_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m23029_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m23018_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m35190_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m23017_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m5183_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m5176_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m5177_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m23025_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m23028_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m5179_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m23016_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m23036_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m23037_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m38840_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m4898_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4899_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m23044_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisReconstructionAbstractBehaviour_t144_m35242_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m23023_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m23024_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m23111_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m23040_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m23026_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m23031_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m23117_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisReconstructionAbstractBehaviour_t144_m35244_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisReconstructionAbstractBehaviour_t144_m35252_GenericMethod;


// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::.ctor()
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Add(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Clear()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Contains(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Reverse()
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Sort()
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::ToArray()
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::get_Capacity()
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::get_Count()
// T System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ReconstructionAbstractBehaviour>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m23043_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ReconstructionAbstractBehaviour>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ReconstructionAbstractBehaviour>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ReconstructionAbstractBehaviour>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.ReconstructionAbstractBehaviour>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<Vuforia.ReconstructionAbstractBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IList_1_t3806_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_34MethodDeclarations.h"
extern Il2CppType IList_1_t3806_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m23073_MethodInfo;
extern MethodInfo IList_1_get_Item_m38841_MethodInfo;
extern MethodInfo ICollection_1_Contains_m34737_MethodInfo;
extern MethodInfo IList_1_IndexOf_m38842_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m23073_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m38841_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m23105_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m34737_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m38842_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ReconstructionAbstractBehaviour>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_34.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3808_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t3808_0_0_0;
extern Il2CppType ReconstructionAbstractBehaviour_t144_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m38843_MethodInfo;
extern MethodInfo Collection_1_SetItem_m23104_MethodInfo;
extern MethodInfo List_1__ctor_m5180_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m23097_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m23095_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m23100_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m23091_MethodInfo;
extern MethodInfo ICollection_1_Clear_m38844_MethodInfo;
extern MethodInfo IList_1_Insert_m38845_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m38846_MethodInfo;
extern MethodInfo IList_1_set_Item_m38847_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m38843_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m23108_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m23109_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m23106_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m23104_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m5180_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m23097_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m23107_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m23095_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m23100_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m23091_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m38844_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m38845_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m38846_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m38847_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::get_Count()
// T System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.ReconstructionAbstractBehaviour>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<Vuforia.ReconstructionAbstractBehaviour>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<Vuforia.ReconstructionAbstractBehaviour>::Invoke(T)
// System.IAsyncResult System.Predicate`1<Vuforia.ReconstructionAbstractBehaviour>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<Vuforia.ReconstructionAbstractBehaviour>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_35.h"
extern TypeInfo DefaultComparer_t3811_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_35MethodDeclarations.h"
extern Il2CppType IComparable_1_t5313_0_0_0;
extern Il2CppType DefaultComparer_t3811_0_0_0;
extern MethodInfo DefaultComparer__ctor_m23118_MethodInfo;
extern MethodInfo Comparer_1_Compare_m38848_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m23118_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m38848_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<Vuforia.ReconstructionAbstractBehaviour>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<Vuforia.ReconstructionAbstractBehaviour>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.ReconstructionAbstractBehaviour>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.ReconstructionAbstractBehaviour>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<Vuforia.ReconstructionAbstractBehaviour>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5312_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<Vuforia.ReconstructionAbstractBehaviour>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5313_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<Vuforia.ReconstructionAbstractBehaviour>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m35250_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m23114_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m35250_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.ReconstructionAbstractBehaviour>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.ReconstructionAbstractBehaviour>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3812_il2cpp_TypeInfo;
// System.Comparison`1<Vuforia.ReconstructionAbstractBehaviour>
#include "mscorlib_System_Comparison_1_gen_35MethodDeclarations.h"



// System.Void System.Comparison`1<Vuforia.ReconstructionAbstractBehaviour>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<Vuforia.ReconstructionAbstractBehaviour>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<Vuforia.ReconstructionAbstractBehaviour>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<Vuforia.ReconstructionAbstractBehaviour>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5807_il2cpp_TypeInfo;

// Vuforia.SmartTerrainTrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainTrackab.h"


// T System.Collections.Generic.IEnumerator`1<Vuforia.SmartTerrainTrackableBehaviour>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackableBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_139.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3813_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackableBehaviour>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_139MethodDeclarations.h"

extern TypeInfo SmartTerrainTrackableBehaviour_t654_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3813_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.SmartTerrainTrackableBehaviour>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.SmartTerrainTrackableBehaviour>(System.Int32)
#define Array_InternalArray__get_Item_TisSmartTerrainTrackableBehaviour_t654_m35256(__this, p0, method) (( SmartTerrainTrackableBehaviour_t654 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m23128_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSmartTerrainTrackableBehaviour_t654_m35256_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackableBehaviour>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackableBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackableBehaviour>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackableBehaviour>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.SmartTerrainTrackableBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5808_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackableBehaviour>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackableBehaviour>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackableBehaviour>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackableBehaviour>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackableBehaviour>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackableBehaviour>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.SmartTerrainTrackableBehaviour>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5809_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.SmartTerrainTrackableBehaviour>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5810_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackableBehaviour>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackableBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackableBehaviour>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackableBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.SmartTerrainTrackableBehaviour>::set_Item(System.Int32,T)
// System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t752_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_8MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_31.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_44.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_61.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12.h"
// System.Collections.Generic.EqualityComparer`1<System.Type>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_31.h"
// System.Collections.Generic.EqualityComparer`1<System.UInt16>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_40.h"
extern TypeInfo UInt16_t879_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3814_il2cpp_TypeInfo;
extern TypeInfo Link_t2110_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t2111_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3834_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3838_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5811_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5812_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4948_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3832_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4947_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1610_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3815_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3841_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3836_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3843_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3653_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t34_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2900_il2cpp_TypeInfo;
extern TypeInfo UInt16U5BU5D_t1643_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1603_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3829_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t5813_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_31MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_44MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_61MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_62MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_12MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Type>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_31MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.UInt16>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_40MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t752_0_0_0;
extern Il2CppType IEqualityComparer_1_t3814_0_0_0;
extern Il2CppType KeyCollection_t3834_0_0_0;
extern Il2CppType ValueCollection_t3838_0_0_0;
extern Il2CppType ICollection_1_t5811_0_0_0;
extern Il2CppType IEnumerable_1_t5812_0_0_0;
extern Il2CppType IEnumerator_1_t4948_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4947_0_0_0;
extern Il2CppType KeyValuePair_2_t3832_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t5178_0_0_0;
extern Il2CppType Transform_1_t3815_0_0_0;
extern Il2CppType Transform_1_t3841_0_0_0;
extern Il2CppType Enumerator_t3836_0_0_0;
extern Il2CppType ShimEnumerator_t3843_0_0_0;
extern Il2CppType EqualityComparer_1_t3653_0_0_0;
extern Il2CppType Int32U5BU5D_t34_0_0_0;
extern Il2CppType LinkU5BU5D_t2900_0_0_0;
extern Il2CppType UInt16U5BU5D_t1643_0_0_0;
extern Il2CppType EqualityComparer_1_t3829_0_0_0;
extern Il2CppType IEqualityComparer_1_t5813_0_0_0;
extern Il2CppType Type_t_0_0_0;
extern Il2CppType UInt16_t879_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m23200_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m5195_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m23179_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38849_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38850_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m11463_MethodInfo;
extern MethodInfo KeyCollection__ctor_m23331_MethodInfo;
extern MethodInfo ValueCollection__ctor_m23366_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38851_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38852_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38853_MethodInfo;
extern MethodInfo Dictionary_2_Add_m5197_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m23208_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m23224_MethodInfo;
extern MethodInfo Transform_1__ctor_m23389_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m23187_MethodInfo;
extern MethodInfo Transform_1__ctor_m23393_MethodInfo;
extern MethodInfo Enumerator__ctor_m23350_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m23401_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m23176_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m23320_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m11630_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38854_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8828_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8841_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m8840_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m8829_MethodInfo;
extern MethodInfo Type_ToString_m10928_MethodInfo;
extern MethodInfo String_Concat_m731_MethodInfo;
extern MethodInfo ArgumentException__ctor_m8817_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m23210_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m38855_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m8812_MethodInfo;
struct Dictionary_2_t752;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m35305 (Dictionary_2_t752 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t3815 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t752;
struct Dictionary_2_t3817;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_63.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3832_m35308_gshared (Dictionary_2_t3817 * __this, Array_t * p0, int32_t p1, Transform_1_t3842 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3832_m35308(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, Transform_1_t3842 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3832_m35308_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3832_m35307(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t752 *, Array_t *, int32_t, Transform_1_t3841 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3832_m35308_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t752;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3832_TisKeyValuePair_2_t3832_m35310 (Dictionary_2_t752 * __this, KeyValuePair_2U5BU5D_t4947* p0, int32_t p1, Transform_1_t3841 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m23212_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m23214_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m23200_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m23216_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m5195_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m23218_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m23179_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38849_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38850_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m23195_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m23331_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m23366_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m23181_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m23136_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38851_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38852_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38853_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m23321_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m23323_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m5197_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m23208_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m23220_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m23193_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m23185_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m23224_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23389_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m35305_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m23187_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23393_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3832_m35307_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m23350_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m23401_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m21335_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m23183_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m23176_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m23320_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3832_TisKeyValuePair_2_t3832_m35310_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m23313_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38854_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m23210_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m38855_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t3817_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_35MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_29.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_42.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11.h"
extern TypeInfo IEqualityComparer_1_t3366_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3820_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3824_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5814_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5815_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4951_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3818_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4950_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3816_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3827_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3822_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3828_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3081_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t178_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_29MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_42MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_57MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_58MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_11MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t3817_0_0_0;
extern Il2CppType IEqualityComparer_1_t3366_0_0_0;
extern Il2CppType KeyCollection_t3820_0_0_0;
extern Il2CppType ValueCollection_t3824_0_0_0;
extern Il2CppType ICollection_1_t5814_0_0_0;
extern Il2CppType IEnumerable_1_t5815_0_0_0;
extern Il2CppType IEnumerator_1_t4951_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4950_0_0_0;
extern Il2CppType KeyValuePair_2_t3818_0_0_0;
extern Il2CppType Transform_1_t3816_0_0_0;
extern Il2CppType Transform_1_t3827_0_0_0;
extern Il2CppType Enumerator_t3822_0_0_0;
extern Il2CppType ShimEnumerator_t3828_0_0_0;
extern Il2CppType EqualityComparer_1_t3081_0_0_0;
extern Il2CppType ObjectU5BU5D_t178_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m23201_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m23178_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m23180_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38514_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m34741_MethodInfo;
extern MethodInfo KeyCollection__ctor_m23237_MethodInfo;
extern MethodInfo ValueCollection__ctor_m23272_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38856_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38857_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38858_MethodInfo;
extern MethodInfo Dictionary_2_Add_m23197_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m23209_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m23225_MethodInfo;
extern MethodInfo Transform_1__ctor_m23295_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m23188_MethodInfo;
extern MethodInfo Transform_1__ctor_m23299_MethodInfo;
extern MethodInfo Enumerator__ctor_m23256_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m23303_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m23177_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m23226_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m23211_MethodInfo;
struct Dictionary_2_t3817;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m35284 (Dictionary_2_t3817 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t3816 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t3817;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3818_m35286_gshared (Dictionary_2_t3817 * __this, Array_t * p0, int32_t p1, Transform_1_t3827 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3818_m35286(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, Transform_1_t3827 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3818_m35286_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3817;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3818_TisKeyValuePair_2_t3818_m35287 (Dictionary_2_t3817 * __this, KeyValuePair_2U5BU5D_t4950* p0, int32_t p1, Transform_1_t3827 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m23213_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m23215_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m23201_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m23217_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m23178_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m23219_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m23180_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38514_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34741_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m23196_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m23237_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m23272_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m23182_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m23137_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38856_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38857_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38858_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m23227_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m23229_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m23197_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m23209_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m23221_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m23194_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m23186_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m23225_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23295_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m35284_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m23188_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23299_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3818_m35286_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m23256_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m23303_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15590_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m23184_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m23177_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m23226_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3818_TisKeyValuePair_2_t3818_m35287_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m23211_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m23129_GenericMethod;
extern "C" void Dictionary_2__ctor_m23129_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		(( void (*) (Dictionary_2_t3817 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m23131_GenericMethod;
extern "C" void Dictionary_2__ctor_m23131_gshared (Dictionary_2_t3817 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t3817 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m23133_GenericMethod;
extern "C" void Dictionary_2__ctor_m23133_gshared (Dictionary_2_t3817 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t3817 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m23135_GenericMethod;
extern "C" void Dictionary_2__ctor_m23135_gshared (Dictionary_2_t3817 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t3817 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23137_gshared (Dictionary_2_t3817 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t3818  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1572, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___dictionary;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		Object_t* L_5 = ___comparer;
		(( void (*) (Dictionary_2_t3817 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t* L_6 = ___dictionary;
		NullCheck(L_6);
		Object_t* L_7 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_6);
		V_2 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_002c:
		{
			Object_t* L_8 = V_2;
			NullCheck(L_8);
			KeyValuePair_2_t3818  L_9 = (KeyValuePair_2_t3818 )InterfaceFuncInvoker0< KeyValuePair_2_t3818  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			uint16_t L_11 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< Object_t *, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
		}

IL_0047:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4885_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_002c;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0055;
			}
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(81)
		}

IL_0055:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_15);
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_005c:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m23139_GenericMethod;
extern "C" void Dictionary_2__ctor_m23139_gshared (Dictionary_2_t3817 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		SerializationInfo_t1208 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23141_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23141_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3820 * L_0 = (( KeyCollection_t3820 * (*) (Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23143_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m23143_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3824 * L_0 = (( ValueCollection_t3824 * (*) (Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m23145_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23145_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (!((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_1 = ___key;
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		uint16_t L_5 = (uint16_t)VirtFuncInvoker1< uint16_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		uint16_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m23147_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23147_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		uint16_t L_3 = (( uint16_t (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m23149_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23149_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		uint16_t L_3 = (( uint16_t (*) (Dictionary_2_t3817 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m23151_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23151_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m23153_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23153_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (!((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_3 = ___key;
		VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23155_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23155_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23157_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23157_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23159_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23159_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23161_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23161_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3818  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint16_t L_1 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23163_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23163_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3818  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3818  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3818 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23165_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23165_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2U5BU5D_t4950* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4950* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3817 *, KeyValuePair_2U5BU5D_t4950*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23167_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23167_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3818  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3818  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3817 *, KeyValuePair_2_t3818 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m23169_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23169_gshared (Dictionary_2_t3817 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m23169_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m23169_init)
	{
		DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t5178_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m23169_init = true;
	}
	KeyValuePair_2U5BU5D_t4950* V_0 = {0};
	DictionaryEntryU5BU5D_t5178* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t5178* G_B5_1 = {0};
	Dictionary_2_t3817 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t5178* G_B4_1 = {0};
	Dictionary_2_t3817 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t4950*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t4950* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4950* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t3817 *, KeyValuePair_2U5BU5D_t4950*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		Array_t * L_6 = ___array;
		V_1 = ((DictionaryEntryU5BU5D_t5178*)IsInst(L_6, DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t5178* L_7 = V_1;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		DictionaryEntryU5BU5D_t5178* L_8 = V_1;
		int32_t L_9 = ___index;
		Transform_1_t3816 * L_10 = ((Dictionary_2_t3817_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3817 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3817 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t3816 * L_12 = (Transform_1_t3816 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t3816 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t3817_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3817 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3816 * L_13 = ((Dictionary_2_t3817_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t3817 *, DictionaryEntryU5BU5D_t5178*, int32_t, Transform_1_t3816 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3827 * L_17 = (Transform_1_t3827 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3827 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, Transform_1_t3827 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23171_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23171_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822  L_0 = {0};
		(( void (*) (Enumerator_t3822 *, Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3822  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23173_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23173_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822  L_0 = {0};
		(( void (*) (Enumerator_t3822 *, Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3822  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23175_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23175_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t3828 * L_0 = (ShimEnumerator_t3828 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3828 *, Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23177_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m23178_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_2 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_2, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t34* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2900* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t178* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		UInt16U5BU5D_t1643* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_20, L_22));
	}

IL_007d:
	{
		LinkU5BU5D_t2900* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_1 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_1;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t2111 * L_27 = (KeyNotFoundException_t2111 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t2111_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m11463(L_27, /*hidden argument*/&KeyNotFoundException__ctor_m11463_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23180_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_2 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_2, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t34* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		V_3 = (-1);
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2900* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t178* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2900* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_28 = (__this->___count_10);
		int32_t L_29 = ((int32_t)((int32_t)L_28+(int32_t)1));
		V_4 = L_29;
		__this->___count_10 = L_29;
		int32_t L_30 = V_4;
		int32_t L_31 = (__this->___threshold_11);
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_32 = V_0;
		Int32U5BU5D_t34* L_33 = (__this->___table_4);
		NullCheck(L_33);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_33)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_34 = (__this->___emptySlot_9);
		V_2 = L_34;
		int32_t L_35 = V_2;
		if ((!(((uint32_t)L_35) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_36 = (__this->___touchedSlots_8);
		int32_t L_37 = L_36;
		V_4 = L_37;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
		int32_t L_38 = V_4;
		V_2 = L_38;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2900* L_39 = (__this->___linkSlots_5);
		int32_t L_40 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_39, L_40))->___Next_1);
		__this->___emptySlot_9 = L_41;
	}

IL_0101:
	{
		LinkU5BU5D_t2900* L_42 = (__this->___linkSlots_5);
		int32_t L_43 = V_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		Int32U5BU5D_t34* L_44 = (__this->___table_4);
		int32_t L_45 = V_1;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t L_46 = L_45;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_42, L_43))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_44, L_46))-(int32_t)1));
		Int32U5BU5D_t34* L_47 = (__this->___table_4);
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)((int32_t)((int32_t)L_49+(int32_t)1));
		LinkU5BU5D_t2900* L_50 = (__this->___linkSlots_5);
		int32_t L_51 = V_2;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = V_0;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_50, L_51))->___HashCode_0 = L_52;
		ObjectU5BU5D_t178* L_53 = (__this->___keySlots_6);
		int32_t L_54 = V_2;
		Object_t * L_55 = ___key;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, L_54)) = (Object_t *)L_55;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_56 = V_3;
		if ((((int32_t)L_56) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2900* L_57 = (__this->___linkSlots_5);
		int32_t L_58 = V_3;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		LinkU5BU5D_t2900* L_59 = (__this->___linkSlots_5);
		int32_t L_60 = V_2;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_60);
		int32_t L_61 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_59, L_60))->___Next_1);
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_57, L_58))->___Next_1 = L_61;
		LinkU5BU5D_t2900* L_62 = (__this->___linkSlots_5);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		Int32U5BU5D_t34* L_64 = (__this->___table_4);
		int32_t L_65 = V_1;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_65);
		int32_t L_66 = L_65;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_62, L_63))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_64, L_66))-(int32_t)1));
		Int32U5BU5D_t34* L_67 = (__this->___table_4);
		int32_t L_68 = V_1;
		int32_t L_69 = V_2;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, L_68);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_67, L_68)) = (int32_t)((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0194:
	{
		UInt16U5BU5D_t1643* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		uint16_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_70, L_71)) = (uint16_t)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t3081_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m23182_gshared (Dictionary_2_t3817 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m23182_init;
	if (!Dictionary_2_Init_m23182_init)
	{
		EqualityComparer_1_t3081_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3081_0_0_0);
		Dictionary_2_Init_m23182_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3817 * G_B4_0 = {0};
	Dictionary_2_t3817 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3817 * G_B5_1 = {0};
	{
		int32_t L_0 = ___capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_1 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_1, (String_t*) &_stringLiteral596, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Object_t* L_2 = ___hcp;
		G_B3_0 = ((Dictionary_2_t3817 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3817 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3817 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3081_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3081 * L_5 = (( EqualityComparer_1_t3081 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3817 *)(G_B4_0));
	}

IL_001d:
	{
		NullCheck(G_B5_1);
		G_B5_1->___hcp_12 = G_B5_0;
		int32_t L_6 = ___capacity;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		___capacity = ((int32_t)10);
	}

IL_002b:
	{
		int32_t L_7 = ___capacity;
		___capacity = ((int32_t)((int32_t)(((int32_t)((float)((float)(((float)L_7))/(float)(0.9f)))))+(int32_t)1));
		int32_t L_8 = ___capacity;
		(( void (*) (Dictionary_2_t3817 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2900_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m23184_gshared (Dictionary_2_t3817 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m23184_init;
	if (!Dictionary_2_InitArrays_m23184_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		LinkU5BU5D_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2900_0_0_0);
		Dictionary_2_InitArrays_m23184_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t34*)SZArrayNew(Int32U5BU5D_t34_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2900*)SZArrayNew(LinkU5BU5D_t2900_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((UInt16U5BU5D_t1643*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
		__this->___touchedSlots_8 = 0;
		Int32U5BU5D_t34* L_4 = (__this->___table_4);
		NullCheck(L_4);
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)(((int32_t)(((Array_t *)L_4)->max_length)))))*(float)(0.9f)))));
		int32_t L_5 = (__this->___threshold_11);
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		Int32U5BU5D_t34* L_6 = (__this->___table_4);
		NullCheck(L_6);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		__this->___threshold_11 = 1;
	}

IL_006e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23186_gshared (Dictionary_2_t3817 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral511, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_3 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_3, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001d:
	{
		int32_t L_4 = ___index;
		Array_t * L_5 = ___array;
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m8815(L_5, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		if ((((int32_t)L_4) <= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentException_t534 * L_7 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_7, (String_t*) &_stringLiteral598, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0031:
	{
		Array_t * L_8 = ___array;
		NullCheck(L_8);
		int32_t L_9 = Array_get_Length_m8815(L_8, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		int32_t L_10 = ___index;
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 42), __this);
		if ((((int32_t)((int32_t)((int32_t)L_9-(int32_t)L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t534 * L_12 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_12, (String_t*) &_stringLiteral599, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_004c:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3818  Dictionary_2_make_pair_m23188_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		uint16_t L_1 = ___value;
		KeyValuePair_2_t3818  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3818 *, Object_t *, uint16_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m23190_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m23190_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m23192_GenericMethod;
extern "C" uint16_t Dictionary_2_pick_value_m23192_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23194_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2U5BU5D_t4950* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4950* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t4950* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3827 * L_5 = (Transform_1_t3827 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3827 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t3817 *, KeyValuePair_2U5BU5D_t4950*, int32_t, Transform_1_t3827 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2900_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m23196_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m23196_init;
	if (!Dictionary_2_Resize_m23196_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		LinkU5BU5D_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2900_0_0_0);
		Dictionary_2_Resize_m23196_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t34* V_1 = {0};
	LinkU5BU5D_t2900* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t178* V_7 = {0};
	UInt16U5BU5D_t1643* V_8 = {0};
	int32_t V_9 = 0;
	{
		Int32U5BU5D_t34* L_0 = (__this->___table_4);
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Hashtable_t1603_il2cpp_TypeInfo));
		int32_t L_1 = Hashtable_ToPrime_m11630(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/&Hashtable_ToPrime_m11630_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((Int32U5BU5D_t34*)SZArrayNew(Int32U5BU5D_t34_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = V_0;
		V_2 = ((LinkU5BU5D_t2900*)SZArrayNew(LinkU5BU5D_t2900_il2cpp_TypeInfo_var, L_3));
		V_3 = 0;
		goto IL_00ab;
	}

IL_0027:
	{
		Int32U5BU5D_t34* L_4 = (__this->___table_4);
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6))-(int32_t)1));
		goto IL_00a2;
	}

IL_0035:
	{
		LinkU5BU5D_t2900* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Object_t* L_9 = (__this->___hcp_12);
		ObjectU5BU5D_t178* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_10, L_12)));
		int32_t L_14 = ((int32_t)((int32_t)L_13|(int32_t)((int32_t)-2147483648)));
		V_9 = L_14;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_7, L_8))->___HashCode_0 = L_14;
		int32_t L_15 = V_9;
		V_5 = L_15;
		int32_t L_16 = V_5;
		int32_t L_17 = V_0;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_16&(int32_t)((int32_t)2147483647)))%(int32_t)L_17));
		LinkU5BU5D_t2900* L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		Int32U5BU5D_t34* L_20 = V_1;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_18, L_19))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22))-(int32_t)1));
		Int32U5BU5D_t34* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_23, L_24)) = (int32_t)((int32_t)((int32_t)L_25+(int32_t)1));
		LinkU5BU5D_t2900* L_26 = (__this->___linkSlots_5);
		int32_t L_27 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_26, L_27))->___Next_1);
		V_4 = L_28;
	}

IL_00a2:
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00ab:
	{
		int32_t L_31 = V_3;
		Int32U5BU5D_t34* L_32 = (__this->___table_4);
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t34* L_33 = V_1;
		__this->___table_4 = L_33;
		LinkU5BU5D_t2900* L_34 = V_2;
		__this->___linkSlots_5 = L_34;
		int32_t L_35 = V_0;
		V_7 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = ((UInt16U5BU5D_t1643*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t178* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t178* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		UInt16U5BU5D_t1643* L_40 = (__this->___valueSlots_7);
		UInt16U5BU5D_t1643* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		ObjectU5BU5D_t178* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		UInt16U5BU5D_t1643* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23197_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_2 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_2, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t34* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2900* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		ObjectU5BU5D_t178* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_2;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Object_t * L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t534 * L_21 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_21, (String_t*) &_stringLiteral1574, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_007d:
	{
		LinkU5BU5D_t2900* L_22 = (__this->___linkSlots_5);
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_22, L_23))->___Next_1);
		V_2 = L_24;
	}

IL_008f:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_26 = (__this->___count_10);
		int32_t L_27 = ((int32_t)((int32_t)L_26+(int32_t)1));
		V_3 = L_27;
		__this->___count_10 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = (__this->___threshold_11);
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_30 = V_0;
		Int32U5BU5D_t34* L_31 = (__this->___table_4);
		NullCheck(L_31);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_32 = (__this->___emptySlot_9);
		V_2 = L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_34 = (__this->___touchedSlots_8);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		V_2 = L_36;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2900* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		__this->___emptySlot_9 = L_39;
	}

IL_00f9:
	{
		LinkU5BU5D_t2900* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = V_0;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_40, L_41))->___HashCode_0 = L_42;
		LinkU5BU5D_t2900* L_43 = (__this->___linkSlots_5);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		Int32U5BU5D_t34* L_45 = (__this->___table_4);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_43, L_44))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_45, L_47))-(int32_t)1));
		Int32U5BU5D_t34* L_48 = (__this->___table_4);
		int32_t L_49 = V_1;
		int32_t L_50 = V_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_48, L_49)) = (int32_t)((int32_t)((int32_t)L_50+(int32_t)1));
		ObjectU5BU5D_t178* L_51 = (__this->___keySlots_6);
		int32_t L_52 = V_2;
		Object_t * L_53 = ___key;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_51, L_52)) = (Object_t *)L_53;
		UInt16U5BU5D_t1643* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		uint16_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_55)) = (uint16_t)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m23199_GenericMethod;
extern "C" void Dictionary_2_Clear_m23199_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t34* L_0 = (__this->___table_4);
		Int32U5BU5D_t34* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		ObjectU5BU5D_t178* L_2 = (__this->___keySlots_6);
		ObjectU5BU5D_t178* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		UInt16U5BU5D_t1643* L_4 = (__this->___valueSlots_7);
		UInt16U5BU5D_t1643* L_5 = (__this->___valueSlots_7);
		NullCheck(L_5);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 0, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		LinkU5BU5D_t2900* L_6 = (__this->___linkSlots_5);
		LinkU5BU5D_t2900* L_7 = (__this->___linkSlots_5);
		NullCheck(L_7);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		__this->___emptySlot_9 = (-1);
		__this->___touchedSlots_8 = 0;
		int32_t L_8 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_8+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23201_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_2 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_2, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t34* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2900* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t178* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2900* L_20 = (__this->___linkSlots_5);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_20, L_21))->___Next_1);
		V_1 = L_22;
	}

IL_0084:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m23203_GenericMethod;
extern TypeInfo* EqualityComparer_1_t3829_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m23203_gshared (Dictionary_2_t3817 * __this, uint16_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m23203_init;
	if (!Dictionary_2_ContainsValue_m23203_init)
	{
		EqualityComparer_1_t3829_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3829_0_0_0);
		Dictionary_2_ContainsValue_m23203_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3829_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3829 * L_0 = (( EqualityComparer_1_t3829 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0048;
	}

IL_000a:
	{
		Int32U5BU5D_t34* L_1 = (__this->___table_4);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3))-(int32_t)1));
		goto IL_0040;
	}

IL_0017:
	{
		Object_t* L_4 = V_0;
		UInt16U5BU5D_t1643* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		uint16_t L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7)), L_8);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkU5BU5D_t2900* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_10, L_11))->___Next_1);
		V_2 = L_12;
	}

IL_0040:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		Int32U5BU5D_t34* L_16 = (__this->___table_4);
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m23205_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m23205_gshared (Dictionary_2_t3817 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t4950* V_0 = {0};
	{
		SerializationInfo_t1208 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral622, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1208 * L_2 = ___info;
		int32_t L_3 = (__this->___generation_14);
		NullCheck(L_2);
		SerializationInfo_AddValue_m8828(L_2, (String_t*) &_stringLiteral624, L_3, /*hidden argument*/&SerializationInfo_AddValue_m8828_MethodInfo);
		SerializationInfo_t1208 * L_4 = ___info;
		Object_t* L_5 = (__this->___hcp_12);
		NullCheck(L_4);
		SerializationInfo_AddValue_m8841(L_4, (String_t*) &_stringLiteral626, L_5, /*hidden argument*/&SerializationInfo_AddValue_m8841_MethodInfo);
		V_0 = (KeyValuePair_2U5BU5D_t4950*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t4950*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t4950* L_8 = V_0;
		(( void (*) (Dictionary_2_t3817 *, KeyValuePair_2U5BU5D_t4950*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1208 * L_9 = ___info;
		Int32U5BU5D_t34* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m8828(L_9, (String_t*) &_stringLiteral1575, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m8828_MethodInfo);
		SerializationInfo_t1208 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t4950* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m8841(L_11, (String_t*) &_stringLiteral1576, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m8841_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m23207_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m23207_gshared (Dictionary_2_t3817 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t4950* V_1 = {0};
	int32_t V_2 = 0;
	{
		SerializationInfo_t1208 * L_0 = (__this->___serialization_info_13);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t1208 * L_1 = (__this->___serialization_info_13);
		NullCheck(L_1);
		int32_t L_2 = SerializationInfo_GetInt32_m8840(L_1, (String_t*) &_stringLiteral624, /*hidden argument*/&SerializationInfo_GetInt32_m8840_MethodInfo);
		__this->___generation_14 = L_2;
		SerializationInfo_t1208 * L_3 = (__this->___serialization_info_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 49)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_3);
		Object_t * L_5 = SerializationInfo_GetValue_m8829(L_3, (String_t*) &_stringLiteral626, L_4, /*hidden argument*/&SerializationInfo_GetValue_m8829_MethodInfo);
		__this->___hcp_12 = ((Object_t*)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 50)));
		SerializationInfo_t1208 * L_6 = (__this->___serialization_info_13);
		NullCheck(L_6);
		int32_t L_7 = SerializationInfo_GetInt32_m8840(L_6, (String_t*) &_stringLiteral1575, /*hidden argument*/&SerializationInfo_GetInt32_m8840_MethodInfo);
		V_0 = L_7;
		SerializationInfo_t1208 * L_8 = (__this->___serialization_info_13);
		Type_t * L_9 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 51)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_8);
		Object_t * L_10 = SerializationInfo_GetValue_m8829(L_8, (String_t*) &_stringLiteral1576, L_9, /*hidden argument*/&SerializationInfo_GetValue_m8829_MethodInfo);
		V_1 = ((KeyValuePair_2U5BU5D_t4950*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_007d;
		}
	}
	{
		V_0 = ((int32_t)10);
	}

IL_007d:
	{
		int32_t L_12 = V_0;
		(( void (*) (Dictionary_2_t3817 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t4950* L_13 = V_1;
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		V_2 = 0;
		goto IL_00b4;
	}

IL_0092:
	{
		KeyValuePair_2U5BU5D_t4950* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t3818 *)(KeyValuePair_2_t3818 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t4950* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		uint16_t L_19 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t3818 *)(KeyValuePair_2_t3818 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t4950* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
		{
			goto IL_0092;
		}
	}

IL_00ba:
	{
		int32_t L_23 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_23+(int32_t)1));
		__this->___serialization_info_13 = (SerializationInfo_t1208 *)NULL;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23209_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	uint16_t V_5 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_2 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_2, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		int32_t L_6 = V_0;
		Int32U5BU5D_t34* L_7 = (__this->___table_4);
		NullCheck(L_7);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))));
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10))-(int32_t)1));
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		return 0;
	}

IL_0048:
	{
		V_3 = (-1);
	}

IL_004a:
	{
		LinkU5BU5D_t2900* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		ObjectU5BU5D_t178* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		Object_t * L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_22 = V_2;
		V_3 = L_22;
		LinkU5BU5D_t2900* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_28 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_28-(int32_t)1));
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t34* L_30 = (__this->___table_4);
		int32_t L_31 = V_1;
		LinkU5BU5D_t2900* L_32 = (__this->___linkSlots_5);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_32, L_33))->___Next_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)((int32_t)((int32_t)L_34+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2900* L_35 = (__this->___linkSlots_5);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		LinkU5BU5D_t2900* L_37 = (__this->___linkSlots_5);
		int32_t L_38 = V_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_37, L_38))->___Next_1);
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_35, L_36))->___Next_1 = L_39;
	}

IL_00e9:
	{
		LinkU5BU5D_t2900* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (__this->___emptySlot_9);
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_40, L_41))->___Next_1 = L_42;
		int32_t L_43 = V_2;
		__this->___emptySlot_9 = L_43;
		LinkU5BU5D_t2900* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_44, L_45))->___HashCode_0 = 0;
		ObjectU5BU5D_t178* L_46 = (__this->___keySlots_6);
		int32_t L_47 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_4));
		Object_t * L_48 = V_4;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, L_47)) = (Object_t *)L_48;
		UInt16U5BU5D_t1643* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), (&V_5));
		uint16_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_49, L_50)) = (uint16_t)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23211_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, uint16_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_2 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_2, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t* L_3 = (__this->___hcp_12);
		Object_t * L_4 = ___key;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_3, L_4);
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t34* L_6 = (__this->___table_4);
		int32_t L_7 = V_0;
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		NullCheck(L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))));
		int32_t L_9 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_6, L_9))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2900* L_10 = (__this->___linkSlots_5);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_10, L_11))->___HashCode_0);
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_14 = (__this->___hcp_12);
		ObjectU5BU5D_t178* L_15 = (__this->___keySlots_6);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		Object_t * L_18 = ___key;
		NullCheck(L_14);
		bool L_19 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_14, (*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), L_18);
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		uint16_t* L_20 = ___value;
		UInt16U5BU5D_t1643* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2900* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_0096:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		uint16_t* L_28 = ___value;
		Initobj (InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), (&V_2));
		uint16_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t3820 * Dictionary_2_get_Keys_m23213_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3820 * L_0 = (KeyCollection_t3820 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t3820 *, Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t3824 * Dictionary_2_get_Values_m23215_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3824 * L_0 = (ValueCollection_t3824 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t3824 *, Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m23217_gshared (Dictionary_2_t3817 * __this, Object_t * ___key, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___key;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))
		{
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 56)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m10928_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral1577, L_4, /*hidden argument*/&String_Concat_m731_MethodInfo);
		ArgumentException_t534 * L_6 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m8817(L_6, L_5, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentException__ctor_m8817_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003a:
	{
		Object_t * L_7 = ___key;
		return ((Object_t *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m23219_gshared (Dictionary_2_t3817 * __this, Object_t * ___value, MethodInfo* method)
{
	uint16_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m10897_MethodInfo, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Initobj (InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), (&V_0));
		uint16_t L_3 = V_0;
		return L_3;
	}

IL_001e:
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14))))
		{
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 57)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m10928_MethodInfo, L_5);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral1577, L_6, /*hidden argument*/&String_Concat_m731_MethodInfo);
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m8817(L_8, L_7, (String_t*) &_stringLiteral813, /*hidden argument*/&ArgumentException__ctor_m8817_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_004a:
	{
		Object_t * L_9 = ___value;
		return ((*(uint16_t*)((uint16_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3829_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23221_gshared (Dictionary_2_t3817 * __this, KeyValuePair_2_t3818  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m23221_init;
	if (!Dictionary_2_ContainsKeyValuePair_m23221_init)
	{
		EqualityComparer_1_t3829_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3829_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m23221_init = true;
	}
	uint16_t V_0 = 0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, uint16_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3829_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3829 * L_2 = (( EqualityComparer_1_t3829 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		uint16_t L_3 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint16_t L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m23223_GenericMethod;
extern "C" Enumerator_t3822  Dictionary_2_GetEnumerator_m23223_gshared (Dictionary_2_t3817 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822  L_0 = {0};
		(( void (*) (Enumerator_t3822 *, Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m23225_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		uint16_t L_2 = ___value;
		uint16_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t1610  L_5 = {0};
		DictionaryEntry__ctor_m8812(&L_5, ((Object_t *)L_1), L_4, /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo StringU5BU5D_t208_il2cpp_TypeInfo;
extern Il2CppType StringU5BU5D_t208_0_0_0;
extern MethodInfo Object_ToString_m1073_MethodInfo;
extern MethodInfo String_Concat_m7291_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m23228_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m23230_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m23226_gshared (KeyValuePair_2_t3818 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3818 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3818 *, uint16_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m23227_gshared (KeyValuePair_2_t3818 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m23228_gshared (KeyValuePair_2_t3818 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C" uint16_t KeyValuePair_2_get_Value_m23229_gshared (KeyValuePair_2_t3818 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m23230_gshared (KeyValuePair_2_t3818 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m23231_GenericMethod;
extern TypeInfo* StringU5BU5D_t208_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m23231_gshared (KeyValuePair_2_t3818 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m23231_init;
	if (!KeyValuePair_2_ToString_m23231_init)
	{
		StringU5BU5D_t208_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t208_0_0_0);
		KeyValuePair_2_ToString_m23231_init = true;
	}
	Object_t * V_0 = {0};
	uint16_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t208* G_B2_1 = {0};
	StringU5BU5D_t208* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t208* G_B1_1 = {0};
	StringU5BU5D_t208* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t208* G_B3_2 = {0};
	StringU5BU5D_t208* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t208* G_B5_1 = {0};
	StringU5BU5D_t208* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t208* G_B4_1 = {0};
	StringU5BU5D_t208* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t208* G_B6_2 = {0};
	StringU5BU5D_t208* G_B6_3 = {0};
	{
		StringU5BU5D_t208* L_0 = ((StringU5BU5D_t208*)SZArrayNew(StringU5BU5D_t208_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral523);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral523;
		StringU5BU5D_t208* L_1 = L_0;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_3 = L_2;
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!((Object_t *)L_3))
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_4;
		NullCheck((*(&V_0)));
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, (*(&V_0)));
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t208* L_7 = G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral585);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral585;
		StringU5BU5D_t208* L_8 = L_7;
		uint16_t L_9 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint16_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_10);
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_11)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		uint16_t L_12 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_12;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t208* L_15 = G_B6_3;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 4);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral40);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 4)) = (String_t*)(String_t*) &_stringLiteral40;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_16 = String_Concat_m7291(NULL /*static, unused*/, L_15, /*hidden argument*/&String_Concat_m7291_MethodInfo);
		return L_16;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_140.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3819_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_140MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3819_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>(System.Int32)
extern "C" KeyValuePair_2_t3818  Array_InternalArray__get_Item_TisKeyValuePair_2_t3818_m35269_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3818_m35269(__this, p0, method) (( KeyValuePair_2_t3818  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3818_m35269_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m23236_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3818_m35269_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m23232_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m23232_gshared (InternalEnumerator_1_t3819 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23233_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23233_gshared (InternalEnumerator_1_t3819 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3818  L_0 = (( KeyValuePair_2_t3818  (*) (InternalEnumerator_1_t3819 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3818  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m23234_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m23234_gshared (InternalEnumerator_1_t3819 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m23235_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m23235_gshared (InternalEnumerator_1_t3819 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Current()
extern "C" KeyValuePair_2_t3818  InternalEnumerator_1_get_Current_m23236_gshared (InternalEnumerator_1_t3819 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3818  L_8 = (( KeyValuePair_2_t3818  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5816_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t4949_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.UInt16>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_30.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55.h"
extern TypeInfo Enumerator_t3821_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3823_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_55MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_30MethodDeclarations.h"
extern Il2CppType Enumerator_t3821_0_0_0;
extern Il2CppType Transform_1_t3823_0_0_0;
extern MethodInfo NotSupportedException__ctor_m8832_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m23248_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m23190_MethodInfo;
extern MethodInfo Transform_1__ctor_m23268_MethodInfo;
extern MethodInfo Enumerator__ctor_m23251_MethodInfo;
struct Dictionary_2_t3817;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m35280_gshared (Dictionary_2_t3817 * __this, Array_t * p0, int32_t p1, Transform_1_t3823 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m35280(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, Transform_1_t3823 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m35280_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3817;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m35279 (Dictionary_2_t3817 * __this, ObjectU5BU5D_t178* p0, int32_t p1, Transform_1_t3823 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m23249_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m23248_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23268_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m35280_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m35279_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m23251_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m23237_gshared (KeyCollection_t3820 * __this, Dictionary_2_t3817 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t3817 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1572, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3817 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m23238_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m23238_gshared (KeyCollection_t3820 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m23239_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m23239_gshared (KeyCollection_t3820 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m23240_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m23240_gshared (KeyCollection_t3820 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m23241_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m23241_gshared (KeyCollection_t3820 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m23242_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m23242_gshared (KeyCollection_t3820 * __this, MethodInfo* method)
{
	{
		Enumerator_t3821  L_0 = (( Enumerator_t3821  (*) (KeyCollection_t3820 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3821  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m23243_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m23243_gshared (KeyCollection_t3820 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ObjectU5BU5D_t178* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ObjectU5BU5D_t178*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ObjectU5BU5D_t178* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ObjectU5BU5D_t178* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ObjectU5BU5D_t178*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3817 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3817 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3823 * L_11 = (Transform_1_t3823 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3823 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, Transform_1_t3823 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m23244_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m23244_gshared (KeyCollection_t3820 * __this, MethodInfo* method)
{
	{
		Enumerator_t3821  L_0 = (( Enumerator_t3821  (*) (KeyCollection_t3820 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3821  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m23245_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m23245_gshared (KeyCollection_t3820 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m23246_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m23246_gshared (KeyCollection_t3820 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m23247_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m23247_gshared (KeyCollection_t3820 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m23248_gshared (KeyCollection_t3820 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t178* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3817 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t178* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3823 * L_7 = (Transform_1_t3823 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3823 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3817 *, ObjectU5BU5D_t178*, int32_t, Transform_1_t3823 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t3821  KeyCollection_GetEnumerator_m23249_gshared (KeyCollection_t3820 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		Enumerator_t3821  L_1 = {0};
		(( void (*) (Enumerator_t3821 *, Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m23250_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m23250_gshared (KeyCollection_t3820 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m23263_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m23267_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m23261_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23251_gshared (Enumerator_t3821 * __this, Dictionary_2_t3817 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3822  L_1 = (( Enumerator_t3822  (*) (Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.UInt16>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m23252_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23252_gshared (Enumerator_t3821 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.UInt16>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m23253_GenericMethod;
extern "C" void Enumerator_Dispose_m23253_gshared (Enumerator_t3821 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.UInt16>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m23254_GenericMethod;
extern "C" bool Enumerator_MoveNext_m23254_gshared (Enumerator_t3821 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.UInt16>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m23255_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m23255_gshared (Enumerator_t3821 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3818 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m23266_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m23264_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m23265_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23256_gshared (Enumerator_t3822 * __this, Dictionary_2_t3817 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3817 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m23257_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23257_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3818  L_0 = (__this->___current_3);
		KeyValuePair_2_t3818  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23258_GenericMethod;
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23258_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3818 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3818 * L_3 = &(__this->___current_3);
		uint16_t L_4 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint16_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t1610  L_7 = {0};
		DictionaryEntry__ctor_m8812(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23259_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23259_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23260_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23260_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (( uint16_t (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23261_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (__this->___next_1);
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = L_3;
		Dictionary_2_t3817 * L_4 = (__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2900* L_5 = (L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t3817 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t178* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3817 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		UInt16U5BU5D_t1643* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3818  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3818 *, Object_t *, uint16_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t3817 * L_18 = (__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m23262_GenericMethod;
extern "C" KeyValuePair_2_t3818  Enumerator_get_Current_m23262_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3818  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23263_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3818 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentValue()
extern "C" uint16_t Enumerator_get_CurrentValue_m23264_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3818 * L_0 = &(__this->___current_3);
		uint16_t L_1 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyState()
extern "C" void Enumerator_VerifyState_m23265_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t1984 * L_1 = (ObjectDisposedException_t1984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1984_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10051(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m10051_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t3817 * L_2 = (__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___generation_14);
		int32_t L_4 = (__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t1784 * L_5 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_5, (String_t*) &_stringLiteral1578, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23266_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t1784 * L_1 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_1, (String_t*) &_stringLiteral600, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::Dispose()
extern "C" void Enumerator_Dispose_m23267_gshared (Enumerator_t3822 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3817 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23268_gshared (Transform_1_t3823 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m23269_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m23269_gshared (Transform_1_t3823 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23269((Transform_1_t3823 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m23270_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m23270_gshared (Transform_1_t3823 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m23271_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m23271_gshared (Transform_1_t3823 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_43.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56.h"
extern TypeInfo Enumerator_t3825_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3826_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_56MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_43MethodDeclarations.h"
extern Il2CppType Enumerator_t3825_0_0_0;
extern Il2CppType Transform_1_t3826_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m23283_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m23192_MethodInfo;
extern MethodInfo Transform_1__ctor_m23291_MethodInfo;
extern MethodInfo Enumerator__ctor_m23286_MethodInfo;
struct Dictionary_2_t3817;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_ICollectionCopyTo<System.UInt16>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_ICollectionCopyTo<System.UInt16>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisUInt16_t879_m35282_gshared (Dictionary_2_t3817 * __this, Array_t * p0, int32_t p1, Transform_1_t3826 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisUInt16_t879_m35282(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, Transform_1_t3826 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUInt16_t879_m35282_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3817;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_CopyTo<System.UInt16,System.UInt16>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Do_CopyTo<System.UInt16,System.UInt16>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt16_t879_TisUInt16_t879_m35283 (Dictionary_2_t3817 * __this, UInt16U5BU5D_t1643* p0, int32_t p1, Transform_1_t3826 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m23284_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m23283_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23291_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisUInt16_t879_m35282_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisUInt16_t879_TisUInt16_t879_m35283_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m23286_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m23272_gshared (ValueCollection_t3824 * __this, Dictionary_2_t3817 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t3817 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral1572, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t3817 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23273_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m23273_gshared (ValueCollection_t3824 * __this, uint16_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23274_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m23274_gshared (ValueCollection_t3824 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23275_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m23275_gshared (ValueCollection_t3824 * __this, uint16_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		uint16_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3817 *, uint16_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23276_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m23276_gshared (ValueCollection_t3824 * __this, uint16_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23277_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m23277_gshared (ValueCollection_t3824 * __this, MethodInfo* method)
{
	{
		Enumerator_t3825  L_0 = (( Enumerator_t3825  (*) (ValueCollection_t3824 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3825  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m23278_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m23278_gshared (ValueCollection_t3824 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	UInt16U5BU5D_t1643* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((UInt16U5BU5D_t1643*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		UInt16U5BU5D_t1643* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UInt16U5BU5D_t1643* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< UInt16U5BU5D_t1643*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3817 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3817 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3826 * L_11 = (Transform_1_t3826 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3826 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, Transform_1_t3826 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23279_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m23279_gshared (ValueCollection_t3824 * __this, MethodInfo* method)
{
	{
		Enumerator_t3825  L_0 = (( Enumerator_t3825  (*) (ValueCollection_t3824 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3825  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23280_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m23280_gshared (ValueCollection_t3824 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23281_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m23281_gshared (ValueCollection_t3824 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m23282_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m23282_gshared (ValueCollection_t3824 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m23283_gshared (ValueCollection_t3824 * __this, UInt16U5BU5D_t1643* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		UInt16U5BU5D_t1643* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3817 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3817 * L_3 = (__this->___dictionary_0);
		UInt16U5BU5D_t1643* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3826 * L_7 = (Transform_1_t3826 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3826 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3817 *, UInt16U5BU5D_t1643*, int32_t, Transform_1_t3826 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t3825  ValueCollection_GetEnumerator_m23284_gshared (ValueCollection_t3824 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		Enumerator_t3825  L_1 = {0};
		(( void (*) (Enumerator_t3825 *, Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m23285_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m23285_gshared (ValueCollection_t3824 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23286_gshared (Enumerator_t3825 * __this, Dictionary_2_t3817 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3817 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3822  L_1 = (( Enumerator_t3822  (*) (Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.UInt16>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m23287_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23287_gshared (Enumerator_t3825 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		uint16_t L_1 = (( uint16_t (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint16_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.UInt16>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m23288_GenericMethod;
extern "C" void Enumerator_Dispose_m23288_gshared (Enumerator_t3825 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.UInt16>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m23289_GenericMethod;
extern "C" bool Enumerator_MoveNext_m23289_gshared (Enumerator_t3825 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.UInt16>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m23290_GenericMethod;
extern "C" uint16_t Enumerator_get_Current_m23290_gshared (Enumerator_t3825 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3818 * L_1 = &(L_0->___current_3);
		uint16_t L_2 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23291_gshared (Transform_1_t3826 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m23292_GenericMethod;
extern "C" uint16_t Transform_1_Invoke_m23292_gshared (Transform_1_t3826 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23292((Transform_1_t3826 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint16_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint16_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint16_t (*FunctionPointerType) (Object_t * __this, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m23293_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m23293_gshared (Transform_1_t3826 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m23294_GenericMethod;
extern "C" uint16_t Transform_1_EndInvoke_m23294_gshared (Transform_1_t3826 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint16_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23295_gshared (Transform_1_t3816 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m23296_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_Invoke_m23296_gshared (Transform_1_t3816 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23296((Transform_1_t3816 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m23297_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m23297_gshared (Transform_1_t3816 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m23298_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_EndInvoke_m23298_gshared (Transform_1_t3816 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1610 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23299_gshared (Transform_1_t3827 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m23300_GenericMethod;
extern "C" KeyValuePair_2_t3818  Transform_1_Invoke_m23300_gshared (Transform_1_t3827 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23300((Transform_1_t3827 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3818  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3818  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3818  (*FunctionPointerType) (Object_t * __this, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m23301_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m23301_gshared (Transform_1_t3827 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m23302_GenericMethod;
extern "C" KeyValuePair_2_t3818  Transform_1_EndInvoke_m23302_gshared (Transform_1_t3827 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3818 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IDictionaryEnumerator_t1607_il2cpp_TypeInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m14602_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m23305_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m23305_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23303_gshared (ShimEnumerator_t3828 * __this, Dictionary_2_t3817 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t3817 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3822  L_1 = (( Enumerator_t3822  (*) (Dictionary_2_t3817 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m23304_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m23304_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m23305_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method)
{
	{
		Enumerator_t3822  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3822  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1610  L_3 = (DictionaryEntry_t1610 )InterfaceFuncInvoker0< DictionaryEntry_t1610  >::Invoke(&IDictionaryEnumerator_get_Entry_m14602_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m23306_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m23306_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3818  V_0 = {0};
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3818  L_1 = (( KeyValuePair_2_t3818  (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m23307_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m23307_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3818  V_0 = {0};
	{
		Enumerator_t3822 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3818  L_1 = (( KeyValuePair_2_t3818  (*) (Enumerator_t3822 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		uint16_t L_2 = (( uint16_t (*) (KeyValuePair_2_t3818 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint16_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m23308_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m23308_gshared (ShimEnumerator_t3828 * __this, MethodInfo* method)
{
	{
		DictionaryEntry_t1610  L_0 = (DictionaryEntry_t1610 )VirtFuncInvoker0< DictionaryEntry_t1610  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this);
		DictionaryEntry_t1610  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DictionaryEntry_t1610_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.UInt16>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.UInt16>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_40.h"
extern TypeInfo DefaultComparer_t3831_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_40MethodDeclarations.h"
extern Il2CppType IEquatable_1_t2613_0_0_0;
extern Il2CppType DefaultComparer_t3831_0_0_0;
extern MethodInfo DefaultComparer__ctor_m23317_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m38859_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m23317_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m38859_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.UInt16>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m23309_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m23309_gshared (EqualityComparer_1_t3829 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.UInt16>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m23310_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m23310_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3831 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3831 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3831 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3829_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt16>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m23311_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m23311_gshared (EqualityComparer_1_t3829 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(uint16_t*)((uint16_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m23312_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m23312_gshared (EqualityComparer_1_t3829 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(uint16_t*)((uint16_t*)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(uint16_t*)((uint16_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.UInt16>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.UInt16>::get_Default()
extern "C" EqualityComparer_1_t3829 * EqualityComparer_1_get_Default_m23313_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3829 * L_0 = ((EqualityComparer_1_t3829_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t3830_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__6MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2613_il2cpp_TypeInfo;
extern MethodInfo IEquatable_1_Equals_m38860_MethodInfo;
extern Il2CppGenericMethod IEquatable_1_Equals_m38860_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m23314_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m23314_gshared (GenericEqualityComparer_1_t3830 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3829 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m23315_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m23315_gshared (GenericEqualityComparer_1_t3830 * __this, uint16_t ___obj, MethodInfo* method)
{
	{
		uint16_t L_0 = ___obj;
		uint16_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.UInt16>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m23316_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m23316_gshared (GenericEqualityComparer_1_t3830 * __this, uint16_t ___x, uint16_t ___y, MethodInfo* method)
{
	{
		uint16_t L_0 = ___x;
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_3 = ___y;
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint16_t L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, uint16_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::.ctor()
extern "C" void DefaultComparer__ctor_m23317_gshared (DefaultComparer_t3831 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3829 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m23318_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m23318_gshared (DefaultComparer_t3831 * __this, uint16_t ___obj, MethodInfo* method)
{
	{
		uint16_t L_0 = ___obj;
		uint16_t L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt16>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m23319_GenericMethod;
extern "C" bool DefaultComparer_Equals_m23319_gshared (DefaultComparer_t3831 * __this, uint16_t ___x, uint16_t ___y, MethodInfo* method)
{
	{
		uint16_t L_0 = ___x;
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_3 = ___y;
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		uint16_t L_6 = ___y;
		uint16_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m23322_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m23324_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_141.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3833_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_141MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3833_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>(System.Int32)
extern "C" KeyValuePair_2_t3832  Array_InternalArray__get_Item_TisKeyValuePair_2_t3832_m35289_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3832_m35289(__this, p0, method) (( KeyValuePair_2_t3832  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3832_m35289_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m23330_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3832_m35289_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m23326_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m23326_gshared (InternalEnumerator_1_t3833 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23327_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23327_gshared (InternalEnumerator_1_t3833 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3832  L_0 = (( KeyValuePair_2_t3832  (*) (InternalEnumerator_1_t3833 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3832  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m23328_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m23328_gshared (InternalEnumerator_1_t3833 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m23329_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m23329_gshared (InternalEnumerator_1_t3833 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::get_Current()
extern "C" KeyValuePair_2_t3832  InternalEnumerator_1_get_Current_m23330_gshared (InternalEnumerator_1_t3833 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3832  L_8 = (( KeyValuePair_2_t3832  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5817_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t4946_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Type,System.UInt16>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.UInt16>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.UInt16>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Type,System.UInt16>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Type,System.UInt16>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Type,System.UInt16>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Type,System.UInt16>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_32.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59.h"
extern TypeInfo Enumerator_t3835_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3837_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_59MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_32MethodDeclarations.h"
extern Il2CppType Enumerator_t3835_0_0_0;
extern Il2CppType Transform_1_t3837_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m23342_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m23189_MethodInfo;
extern MethodInfo Transform_1__ctor_m23362_MethodInfo;
extern MethodInfo Enumerator__ctor_m23345_MethodInfo;
struct Dictionary_2_t752;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_ICollectionCopyTo<System.Type>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_ICollectionCopyTo<System.Type>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisType_t_m35300(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t752 *, Array_t *, int32_t, Transform_1_t3837 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m35280_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t752;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_CopyTo<System.Type,System.Type>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_CopyTo<System.Type,System.Type>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisType_t_TisType_t_m35301 (Dictionary_2_t752 * __this, TypeU5BU5D_t930* p0, int32_t p1, Transform_1_t3837 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m23343_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m23342_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m23189_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23362_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisType_t_m35300_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisType_t_TisType_t_m35301_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m23345_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.UInt16>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m23357_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m23222_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m23361_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m23355_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Type,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Type,System.UInt16>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Type,System.UInt16>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Type,System.UInt16>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Type,System.UInt16>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m23360_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m23358_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m23359_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.UInt16>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Type>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_45.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60.h"
extern TypeInfo Enumerator_t3839_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3840_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_60MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,System.UInt16>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_45MethodDeclarations.h"
extern Il2CppType Enumerator_t3839_0_0_0;
extern Il2CppType Transform_1_t3840_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m23377_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m23191_MethodInfo;
extern MethodInfo Transform_1__ctor_m23385_MethodInfo;
extern MethodInfo Enumerator__ctor_m23380_MethodInfo;
struct Dictionary_2_t752;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_ICollectionCopyTo<System.UInt16>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_ICollectionCopyTo<System.UInt16>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisUInt16_t879_m35303(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t752 *, Array_t *, int32_t, Transform_1_t3840 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisUInt16_t879_m35282_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t752;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_CopyTo<System.UInt16,System.UInt16>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::Do_CopyTo<System.UInt16,System.UInt16>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisUInt16_t879_TisUInt16_t879_m35304 (Dictionary_2_t752 * __this, UInt16U5BU5D_t1643* p0, int32_t p1, Transform_1_t3840 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m23202_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m23378_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m23377_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m23191_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23385_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisUInt16_t879_m35303_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisUInt16_t879_TisUInt16_t879_m35304_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m23380_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.UInt16>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,System.UInt16>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,System.UInt16>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,System.UInt16>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,System.UInt16>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.UInt16>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.UInt16>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.UInt16>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.UInt16>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3842_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_63MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m23394_GenericMethod;
extern "C" void Transform_1__ctor_m23394_gshared (Transform_1_t3842 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m23396_GenericMethod;
extern "C" KeyValuePair_2_t3832  Transform_1_Invoke_m23396_gshared (Transform_1_t3842 * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m23396((Transform_1_t3842 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3832  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3832  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3832  (*FunctionPointerType) (Object_t * __this, uint16_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m23398_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m23398_gshared (Transform_1_t3842 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Collections.Generic.KeyValuePair`2<System.Type,System.UInt16>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m23400_GenericMethod;
extern "C" KeyValuePair_2_t3832  Transform_1_EndInvoke_m23400_gshared (Transform_1_t3842 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3832 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m23403_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m23356_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m23403_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Type,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Type,System.UInt16>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Type,System.UInt16>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Type,System.UInt16>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Type,System.UInt16>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Type,System.UInt16>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5818_il2cpp_TypeInfo;

// Vuforia.RectangleData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleData.h"


// T System.Collections.Generic.IEnumerator`1<Vuforia.RectangleData>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.RectangleData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_142.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3844_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.RectangleData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_142MethodDeclarations.h"

extern TypeInfo RectangleData_t658_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3844_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.RectangleData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.RectangleData>(System.Int32)
extern "C" RectangleData_t658  Array_InternalArray__get_Item_TisRectangleData_t658_m35312_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisRectangleData_t658_m35312(__this, p0, method) (( RectangleData_t658  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisRectangleData_t658_m35312_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m23411_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisRectangleData_t658_m35312_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.RectangleData>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m23407_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m23407_gshared (InternalEnumerator_1_t3844 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Vuforia.RectangleData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23408_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m23408_gshared (InternalEnumerator_1_t3844 * __this, MethodInfo* method)
{
	{
		RectangleData_t658  L_0 = (( RectangleData_t658  (*) (InternalEnumerator_1_t3844 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RectangleData_t658  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Vuforia.RectangleData>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m23409_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m23409_gshared (InternalEnumerator_1_t3844 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.RectangleData>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m23410_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m23410_gshared (InternalEnumerator_1_t3844 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Vuforia.RectangleData>::get_Current()
extern "C" RectangleData_t658  InternalEnumerator_1_get_Current_m23411_gshared (InternalEnumerator_1_t3844 * __this, MethodInfo* method)
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
		RectangleData_t658  L_8 = (( RectangleData_t658  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5819_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.RectangleData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.RectangleData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.RectangleData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.RectangleData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.RectangleData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.RectangleData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.RectangleData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5820_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.RectangleData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5821_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.RectangleData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.RectangleData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.RectangleData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.RectangleData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.RectangleData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t760_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t943_il2cpp_TypeInfo;

// Vuforia.WordResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordResult.h"


// T System.Collections.Generic.IEnumerator`1<Vuforia.WordResult>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t761_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.Word>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t941_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Vuforia.Word>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t763_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t895_il2cpp_TypeInfo;

// Vuforia.WordAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordAbstractBehavio.h"


// T System.Collections.Generic.IEnumerator`1<Vuforia.WordAbstractBehaviour>::get_Current()
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t764_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_9MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_66.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_67.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_13.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_41.h"
extern TypeInfo WordResult_t773_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3318_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t894_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t890_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5822_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5823_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4956_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3847_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4955_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3846_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3855_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3851_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3857_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3140_il2cpp_TypeInfo;
extern TypeInfo WordResultU5BU5D_t3845_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3858_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t5824_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_66MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.WordResult,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_67MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__18MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_13MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.WordResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_41MethodDeclarations.h"
extern Il2CppType Dictionary_2_t764_0_0_0;
extern Il2CppType IEqualityComparer_1_t3318_0_0_0;
extern Il2CppType KeyCollection_t894_0_0_0;
extern Il2CppType ValueCollection_t890_0_0_0;
extern Il2CppType ICollection_1_t5822_0_0_0;
extern Il2CppType IEnumerable_1_t5823_0_0_0;
extern Il2CppType IEnumerator_1_t4956_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4955_0_0_0;
extern Il2CppType KeyValuePair_2_t3847_0_0_0;
extern Il2CppType Transform_1_t3846_0_0_0;
extern Il2CppType Transform_1_t3855_0_0_0;
extern Il2CppType Enumerator_t3851_0_0_0;
extern Il2CppType ShimEnumerator_t3857_0_0_0;
extern Il2CppType EqualityComparer_1_t3140_0_0_0;
extern Il2CppType WordResultU5BU5D_t3845_0_0_0;
extern Il2CppType EqualityComparer_1_t3858_0_0_0;
extern Il2CppType IEqualityComparer_1_t5824_0_0_0;
extern Il2CppType Int32_t96_0_0_0;
extern Il2CppType WordResult_t773_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m5230_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m5238_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m23436_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38489_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38490_MethodInfo;
extern MethodInfo KeyCollection__ctor_m23471_MethodInfo;
extern MethodInfo ValueCollection__ctor_m23506_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38861_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38862_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38863_MethodInfo;
extern MethodInfo Dictionary_2_Add_m5231_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m5241_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m23454_MethodInfo;
extern MethodInfo Transform_1__ctor_m23529_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m23440_MethodInfo;
extern MethodInfo Transform_1__ctor_m23533_MethodInfo;
extern MethodInfo Enumerator__ctor_m23490_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m23541_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m23435_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m23455_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38864_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m23449_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m35358_MethodInfo;
struct Dictionary_2_t764;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m35350 (Dictionary_2_t764 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t3846 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t764;
struct Dictionary_2_t3321;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_32.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_68.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3847_m35353_gshared (Dictionary_2_t3321 * __this, Array_t * p0, int32_t p1, Transform_1_t3856 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3847_m35353(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3321 *, Array_t *, int32_t, Transform_1_t3856 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3847_m35353_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3847_m35352(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t764 *, Array_t *, int32_t, Transform_1_t3855 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3847_m35353_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t764;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.WordResult>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3847_TisKeyValuePair_2_t3847_m35355 (Dictionary_2_t764 * __this, KeyValuePair_2U5BU5D_t4955* p0, int32_t p1, Transform_1_t3855 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m5281_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m5267_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m5230_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m23450_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m5238_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m23451_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m23436_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38489_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38490_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m23444_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m23471_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m23506_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m23437_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m23415_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38861_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38862_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38863_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m23456_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m23458_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m5231_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m5241_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m23452_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m23443_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m23439_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m23454_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23529_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m35350_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m23440_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m23533_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3847_m35352_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m23490_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m23541_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16089_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m23438_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m23435_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m23455_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3847_TisKeyValuePair_2_t3847_m35355_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m23551_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38864_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m23449_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m35358_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.WordResult>::<CopyTo>m__0(TKey,TValue)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
