#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
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
extern TypeInfo CastHelper_1_t3060_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0MethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.CastHelper`1<UnityEngine.Animator>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t3061_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Animator>
#include "UnityEngine_UnityEngine_CastHelper_1_genMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5370_il2cpp_TypeInfo;

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Vector3>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3062_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Vector3>
#include "mscorlib_System_Array_InternalEnumerator_1_genMethodDeclarations.h"

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
extern TypeInfo Vector3_t5_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3062_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m8811_MethodInfo;
extern MethodInfo Array_get_Length_m8815_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Vector3>(System.Int32)
extern "C" Vector3_t5  Array_InternalArray__get_Item_TisVector3_t5_m32933_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisVector3_t5_m32933(__this, p0, method) (( Vector3_t5  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisVector3_t5_m32933_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15397_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisVector3_t5_m32933_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15393_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15393_gshared (InternalEnumerator_1_t3062 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Vector3>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15394_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15394_gshared (InternalEnumerator_1_t3062 * __this, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = (( Vector3_t5  (*) (InternalEnumerator_1_t3062 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Vector3_t5  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Vector3>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15395_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15395_gshared (InternalEnumerator_1_t3062 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Vector3>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15396_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15396_gshared (InternalEnumerator_1_t3062 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Vector3>::get_Current()
extern "C" Vector3_t5  InternalEnumerator_1_get_Current_m15397_gshared (InternalEnumerator_1_t3062 * __this, MethodInfo* method)
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
		Vector3_t5  L_8 = (( Vector3_t5  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t258_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current()
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3063_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_0MethodDeclarations.h"

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3063_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m32943(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15402_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisObject_t_m32943_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Object>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15398_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15398_gshared (InternalEnumerator_1_t3063 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15399_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15399_gshared (InternalEnumerator_1_t3063 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (InternalEnumerator_1_t3063 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Object>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15400_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15400_gshared (InternalEnumerator_1_t3063 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Object>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15401_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15401_gshared (InternalEnumerator_1_t3063 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Object>::get_Current()
extern "C" Object_t * InternalEnumerator_1_get_Current_m15402_gshared (InternalEnumerator_1_t3063 * __this, MethodInfo* method)
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
		Object_t * L_8 = (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t1148_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Object>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Object>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t1353_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t1354_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Object>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5371_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Vector3>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5372_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5373_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Vector3>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Vector3>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5374_il2cpp_TypeInfo;

// System.ValueType
#include "mscorlib_System_ValueType.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.ValueType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ValueType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ValueType>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5375_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ValueType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5376_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.ValueType>::get_Current()
// System.Array/InternalEnumerator`1<System.ValueType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3064_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ValueType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1MethodDeclarations.h"

extern TypeInfo ValueType_t248_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3064_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ValueType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ValueType>(System.Int32)
#define Array_InternalArray__get_Item_TisValueType_t248_m32955(__this, p0, method) (( ValueType_t248 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15407_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisValueType_t248_m32955_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.ValueType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ValueType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ValueType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ValueType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ValueType>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5377_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ValueType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ValueType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ValueType>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5378_il2cpp_TypeInfo;

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Quaternion>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Quaternion>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3065_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Quaternion>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2MethodDeclarations.h"

extern TypeInfo Quaternion_t10_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3065_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Quaternion>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Quaternion>(System.Int32)
extern "C" Quaternion_t10  Array_InternalArray__get_Item_TisQuaternion_t10_m32966_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisQuaternion_t10_m32966(__this, p0, method) (( Quaternion_t10  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisQuaternion_t10_m32966_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15412_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisQuaternion_t10_m32966_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Quaternion>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15408_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15408_gshared (InternalEnumerator_1_t3065 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Quaternion>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15409_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15409_gshared (InternalEnumerator_1_t3065 * __this, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = (( Quaternion_t10  (*) (InternalEnumerator_1_t3065 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Quaternion_t10  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Quaternion>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15410_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15410_gshared (InternalEnumerator_1_t3065 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Quaternion>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15411_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15411_gshared (InternalEnumerator_1_t3065 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<UnityEngine.Quaternion>::get_Current()
extern "C" Quaternion_t10  InternalEnumerator_1_get_Current_m15412_gshared (InternalEnumerator_1_t3065 * __this, MethodInfo* method)
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
		Quaternion_t10  L_8 = (( Quaternion_t10  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5379_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Quaternion>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Quaternion>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Quaternion>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Quaternion>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Quaternion>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Quaternion>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Quaternion>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5380_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Quaternion>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5381_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Quaternion>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Quaternion>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Quaternion>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Quaternion>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Quaternion>::set_Item(System.Int32,T)
// UnityEngine.CastHelper`1<StareInputModule>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t3066_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<StareInputModule>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1MethodDeclarations.h"



// UnityEngine.CastHelper`1<Grabbable>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t3067_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<Grabbable>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.Rigidbody>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t3068_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Rigidbody>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3MethodDeclarations.h"



// UnityEngine.CastHelper`1<UnityEngine.Renderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CastHelper_1_t3069_il2cpp_TypeInfo;
// UnityEngine.CastHelper`1<UnityEngine.Renderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5382_il2cpp_TypeInfo;

// System.Single
#include "mscorlib_System_Single.h"


// T System.Collections.Generic.IEnumerator`1<System.Single>::get_Current()
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3070_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Single>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3MethodDeclarations.h"

extern TypeInfo Single_t43_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3070_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Single>(System.Int32)
extern "C" float Array_InternalArray__get_Item_TisSingle_t43_m32977_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisSingle_t43_m32977(__this, p0, method) (( float (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisSingle_t43_m32977_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15417_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisSingle_t43_m32977_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Single>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15413_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15413_gshared (InternalEnumerator_1_t3070 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Single>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15414_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15414_gshared (InternalEnumerator_1_t3070 * __this, MethodInfo* method)
{
	{
		float L_0 = (( float (*) (InternalEnumerator_1_t3070 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		float L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Single>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15415_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15415_gshared (InternalEnumerator_1_t3070 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Single>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15416_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15416_gshared (InternalEnumerator_1_t3070 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Single>::get_Current()
extern "C" float InternalEnumerator_1_get_Current_m15417_gshared (InternalEnumerator_1_t3070 * __this, MethodInfo* method)
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
		float L_8 = (( float (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5383_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Single>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Single>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Single>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5384_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Single>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5385_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Single>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Single>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Single>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Single>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Single>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5386_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IFormattable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IFormattable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IFormattable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5387_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IFormattable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5388_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IFormattable>::get_Current()
// System.Array/InternalEnumerator`1<System.IFormattable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3071_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IFormattable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_4MethodDeclarations.h"

extern TypeInfo IFormattable_t241_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3071_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IFormattable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IFormattable>(System.Int32)
#define Array_InternalArray__get_Item_TisIFormattable_t241_m32988(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15422_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIFormattable_t241_m32988_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IFormattable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IFormattable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IFormattable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IFormattable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IFormattable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5389_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IFormattable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IFormattable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IFormattable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5390_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IConvertible>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IConvertible>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IConvertible>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5391_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IConvertible>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5392_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IConvertible>::get_Current()
// System.Array/InternalEnumerator`1<System.IConvertible>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3072_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IConvertible>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5MethodDeclarations.h"

extern TypeInfo IConvertible_t242_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3072_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IConvertible>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IConvertible>(System.Int32)
#define Array_InternalArray__get_Item_TisIConvertible_t242_m32999(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15427_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIConvertible_t242_m32999_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IConvertible>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IConvertible>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IConvertible>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IConvertible>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IConvertible>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5393_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IConvertible>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IConvertible>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IConvertible>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5394_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5395_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5396_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable>::get_Current()
// System.Array/InternalEnumerator`1<System.IComparable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3073_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_6MethodDeclarations.h"

extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3073_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_t243_m33010(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15432_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_t243_m33010_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5397_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5398_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Single>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5399_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Single>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5400_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2631_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Single>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3074_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_7MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3074_0_0_0;
extern Il2CppType IComparable_1_t2631_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Single>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Single>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2631_m33021(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15437_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2631_m33021_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5401_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Single>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5402_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Single>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5403_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Single>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5404_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2632_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Single>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3075_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_8MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3075_0_0_0;
extern Il2CppType IEquatable_1_t2632_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Single>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Single>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2632_m33032(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15442_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2632_m33032_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Single>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5405_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Single>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5406_il2cpp_TypeInfo;

// MazeCell
#include "AssemblyU2DCSharp_MazeCell.h"


// T System.Collections.Generic.IEnumerator`1<MazeCell>::get_Current()
// System.Array/InternalEnumerator`1<MazeCell>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3076_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<MazeCell>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_9MethodDeclarations.h"

extern TypeInfo MazeCell_t29_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3076_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<MazeCell>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<MazeCell>(System.Int32)
extern "C" MazeCell_t29  Array_InternalArray__get_Item_TisMazeCell_t29_m33043_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisMazeCell_t29_m33043(__this, p0, method) (( MazeCell_t29  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisMazeCell_t29_m33043_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15447_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMazeCell_t29_m33043_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<MazeCell>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15443_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15443_gshared (InternalEnumerator_1_t3076 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<MazeCell>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15444_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15444_gshared (InternalEnumerator_1_t3076 * __this, MethodInfo* method)
{
	{
		MazeCell_t29  L_0 = (( MazeCell_t29  (*) (InternalEnumerator_1_t3076 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		MazeCell_t29  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<MazeCell>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15445_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15445_gshared (InternalEnumerator_1_t3076 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<MazeCell>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15446_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15446_gshared (InternalEnumerator_1_t3076 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<MazeCell>::get_Current()
extern "C" MazeCell_t29  InternalEnumerator_1_get_Current_m15447_gshared (InternalEnumerator_1_t3076 * __this, MethodInfo* method)
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
		MazeCell_t29  L_8 = (( MazeCell_t29  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5407_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<MazeCell>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<MazeCell>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<MazeCell>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<MazeCell>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<MazeCell>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<MazeCell>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<MazeCell>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5408_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<MazeCell>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5409_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<MazeCell>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<MazeCell>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<MazeCell>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<MazeCell>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<MazeCell>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t31_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0.h"
// System.Predicate`1<UnityEngine.GameObject>
#include "mscorlib_System_Predicate_1_gen_5.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
// System.Comparison`1<UnityEngine.GameObject>
#include "mscorlib_System_Comparison_1_gen_4.h"
extern TypeInfo GameObject_t7_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t853_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2504_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4810_il2cpp_TypeInfo;
extern TypeInfo GameObjectU5BU5D_t3077_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t174_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4808_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4809_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3108_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3112_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3113_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.GameObject>
#include "mscorlib_System_Predicate_1_gen_5MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"
extern Il2CppType List_1_t31_0_0_0;
extern Il2CppType ICollection_1_t4810_0_0_0;
extern Il2CppType GameObjectU5BU5D_t3077_0_0_0;
extern Il2CppType Enumerator_t174_0_0_0;
extern Il2CppType IEnumerable_1_t4808_0_0_0;
extern Il2CppType IEnumerator_1_t4809_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3108_0_0_0;
extern Il2CppType Predicate_1_t3112_0_0_0;
extern Il2CppType Comparer_1_t3113_0_0_0;
extern MethodInfo List_1_get_Item_m2533_MethodInfo;
extern MethodInfo List_1_set_Item_m15513_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8994_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8819_MethodInfo;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38296_MethodInfo;
extern MethodInfo Array_Copy_m10846_MethodInfo;
extern MethodInfo List_1_Add_m635_MethodInfo;
extern MethodInfo List_1_Contains_m15479_MethodInfo;
extern MethodInfo List_1_IndexOf_m15488_MethodInfo;
extern MethodInfo List_1_Insert_m15493_MethodInfo;
extern MethodInfo List_1_Remove_m2535_MethodInfo;
extern MethodInfo Math_Max_m10043_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m38297_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38298_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38299_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4885_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15712_MethodInfo;
extern MethodInfo Array_Clear_m10034_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15787_MethodInfo;
extern MethodInfo Enumerator__ctor_m15708_MethodInfo;
extern MethodInfo List_1_RemoveAt_m15498_MethodInfo;
extern MethodInfo Array_Reverse_m10075_MethodInfo;
extern MethodInfo Array_Copy_m9034_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m33054_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m33054(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.GameObject>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.GameObject>(!!0[]&,System.Int32)
#define Array_Resize_TisGameObject_t7_m33288(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, GameObjectU5BU5D_t3077**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14600_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14600(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.GameObject>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.GameObject>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisGameObject_t7_m33290(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, GameObjectU5BU5D_t3077*, GameObject_t7 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33123_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m33123(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.GameObject>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.GameObject>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisGameObject_t7_m33292(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, GameObjectU5BU5D_t3077*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
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
// Declaration System.Void System.Array::Sort<UnityEngine.GameObject>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.GameObject>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisGameObject_t7_m33300(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, GameObjectU5BU5D_t3077*, int32_t, Comparison_1_t3115 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2533_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m15513_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisGameObject_t7_m33288_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15491_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15494_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15473_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38296_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15471_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m641_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m635_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m15479_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m15488_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m15493_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m2535_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15469_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15509_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15511_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m38297_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38298_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38299_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15712_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisGameObject_t7_m33290_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15483_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15485_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15787_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15708_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15489_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m15498_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15793_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisGameObject_t7_m33292_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisGameObject_t7_m33300_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t227_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
extern TypeInfo ObjectU5BU5D_t178_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3078_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3079_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3089_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3090_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
extern Il2CppType List_1_t227_0_0_0;
extern Il2CppType ICollection_1_t1148_0_0_0;
extern Il2CppType ObjectU5BU5D_t178_0_0_0;
extern Il2CppType Enumerator_t3078_0_0_0;
extern Il2CppType IEnumerable_1_t1353_0_0_0;
extern Il2CppType IEnumerator_1_t258_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3079_0_0_0;
extern Il2CppType Predicate_1_t3089_0_0_0;
extern Il2CppType Comparer_1_t3090_0_0_0;
extern MethodInfo List_1_get_Item_m7564_MethodInfo;
extern MethodInfo List_1_set_Item_m7565_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m33633_MethodInfo;
extern MethodInfo List_1_Add_m7353_MethodInfo;
extern MethodInfo List_1_Contains_m7558_MethodInfo;
extern MethodInfo List_1_IndexOf_m7562_MethodInfo;
extern MethodInfo List_1_Insert_m7563_MethodInfo;
extern MethodInfo List_1_Remove_m7560_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m33634_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m33654_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m33655_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m15520_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m15625_MethodInfo;
extern MethodInfo Enumerator__ctor_m15514_MethodInfo;
extern MethodInfo List_1_RemoveAt_m7556_MethodInfo;
extern Il2CppGenericMethod List_1_get_Item_m7564_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m7565_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisObject_t_m33054_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m15492_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m15495_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m15474_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m33633_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m15472_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m15487_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m7353_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m7558_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m7562_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m7563_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m7560_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m15470_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m15510_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m15512_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m33634_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33654_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33655_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m15520_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisObject_t_m14600_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m15484_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m15486_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m15625_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m15514_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m15490_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m7556_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15631_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisObject_t_m33123_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisObject_t_m33263_GenericMethod;


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m7334_GenericMethod;
extern "C" void List_1__ctor_m7334_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t178* L_0 = ((List_1_t227_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1__ctor_m15449_GenericMethod;
extern "C" void List_1__ctor_m15449_gshared (List_1_t227 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t227 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		ObjectU5BU5D_t178* L_3 = ((List_1_t227_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t227 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_5);
		__this->____items_1 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_6));
		Object_t* L_7 = V_0;
		(( void (*) (List_1_t227 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m15451_GenericMethod;
extern "C" void List_1__ctor_m15451_gshared (List_1_t227 * __this, int32_t ___capacity, MethodInfo* method)
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
		__this->____items_1 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m15453_GenericMethod;
extern "C" void List_1__cctor_m15453_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t227_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m7561_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		Enumerator_t3078  L_0 = (( Enumerator_t3078  (*) (List_1_t227 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t3078  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m7545_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m7545_gshared (List_1_t227 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m7541_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m7541_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		Enumerator_t3078  L_0 = (( Enumerator_t3078  (*) (List_1_t227 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t3078  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m7550_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m7550_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method)
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
			VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
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
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m7552_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m7552_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method)
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
			bool L_1 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
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
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m7553_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m7553_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method)
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
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
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
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m7554_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m7554_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t227 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), __this, L_1, ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
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
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m7555_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m7555_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method)
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
			VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
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
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7557_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m7543_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m7543_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m7544_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m7544_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m7546_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m7546_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m7547_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m7547_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m7548_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m7548_gshared (List_1_t227 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_0);
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m7549_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m7549_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
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
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))));
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
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m7353_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		ObjectU5BU5D_t178* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t227 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_0017:
	{
		ObjectU5BU5D_t178* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		Object_t * L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, L_5)) = (Object_t *)L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15470_gshared (List_1_t227 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t178* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t227 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		int32_t L_5 = Math_Max_m10043(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m10043(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		(( void (*) (List_1_t227 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15472_gshared (List_1_t227 * __this, Object_t* ___collection, MethodInfo* method)
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
		(( void (*) (List_1_t227 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		Object_t* L_4 = ___collection;
		ObjectU5BU5D_t178* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< ObjectU5BU5D_t178*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15474_gshared (List_1_t227 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	Object_t * V_0 = {0};
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
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_2);
			V_0 = L_3;
			Object_t * L_4 = V_0;
			VirtActionInvoker1< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_4);
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
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m15476_GenericMethod;
extern "C" void List_1_AddRange_m15476_gshared (List_1_t227 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t227 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		(( void (*) (List_1_t227 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t227 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m15478_GenericMethod;
extern "C" ReadOnlyCollection_1_t3079 * List_1_AsReadOnly_m15478_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t3079 * L_0 = (ReadOnlyCollection_1_t3079 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t3079 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern Il2CppGenericMethod List_1_Clear_m7551_GenericMethod;
extern "C" void List_1_Clear_m7551_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		ObjectU5BU5D_t178* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m7558_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		Object_t * L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m7559_GenericMethod;
extern "C" void List_1_CopyTo_m7559_gshared (List_1_t227 * __this, ObjectU5BU5D_t178* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		ObjectU5BU5D_t178* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m15482_GenericMethod;
extern TypeInfo* List_1_t227_il2cpp_TypeInfo_var;
extern "C" Object_t * List_1_Find_m15482_gshared (List_1_t227 * __this, Predicate_1_t3089 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m15482_init;
	if (!List_1_Find_m15482_init)
	{
		List_1_t227_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t227_0_0_0);
		List_1_Find_m15482_init = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	Object_t * G_B3_0 = {0};
	{
		Predicate_1_t3089 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t227_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t3089 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t3089 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t227 *, int32_t, int32_t, Predicate_1_t3089 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		ObjectU5BU5D_t178* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_1));
		Object_t * L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15484_gshared (Object_t * __this /* static, unused */, Predicate_1_t3089 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t3089 * L_0 = ___match;
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
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15486_gshared (List_1_t227 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t3089 * ___match, MethodInfo* method)
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
		Predicate_1_t3089 * L_3 = ___match;
		ObjectU5BU5D_t178* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_6)));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t3078  List_1_GetEnumerator_m15487_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		Enumerator_t3078  L_0 = {0};
		(( void (*) (Enumerator_t3078 *, List_1_t227 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m7562_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		Object_t * L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15490_gshared (List_1_t227 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
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
		ObjectU5BU5D_t178* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		ObjectU5BU5D_t178* L_7 = (__this->____items_1);
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
		ObjectU5BU5D_t178* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15492_gshared (List_1_t227 * __this, int32_t ___index, MethodInfo* method)
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
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m7563_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t227 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = (__this->____size_2);
		ObjectU5BU5D_t178* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t227 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t227 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		ObjectU5BU5D_t178* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		Object_t * L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15495_gshared (List_1_t227 * __this, Object_t* ___collection, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m7560_gshared (List_1_t227 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
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
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m15497_GenericMethod;
extern TypeInfo* List_1_t227_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m15497_gshared (List_1_t227 * __this, Predicate_1_t3089 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m15497_init;
	if (!List_1_RemoveAll_m15497_init)
	{
		List_1_t227_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t227_0_0_0);
		List_1_RemoveAll_m15497_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t3089 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t227_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t3089 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t3089 * L_1 = ___match;
		ObjectU5BU5D_t178* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4)));
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
		Predicate_1_t3089 * L_13 = ___match;
		ObjectU5BU5D_t178* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(Object_t **)(Object_t **)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		ObjectU5BU5D_t178* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		ObjectU5BU5D_t178* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, L_20)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
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
		ObjectU5BU5D_t178* L_29 = (__this->____items_1);
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
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m7556_gshared (List_1_t227 * __this, int32_t ___index, MethodInfo* method)
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
		(( void (*) (List_1_t227 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		ObjectU5BU5D_t178* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m15500_GenericMethod;
extern "C" void List_1_Reverse_m15500_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m10075(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m10075_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern Il2CppGenericMethod List_1_Sort_m15502_GenericMethod;
extern TypeInfo* Comparer_1_t3090_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m15502_gshared (List_1_t227 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m15502_init;
	if (!List_1_Sort_m15502_init)
	{
		Comparer_1_t3090_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t3090_0_0_0);
		List_1_Sort_m15502_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t3090_il2cpp_TypeInfo_var);
		Comparer_1_t3090 * L_2 = (( Comparer_1_t3090 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m15504_GenericMethod;
extern "C" void List_1_Sort_m15504_gshared (List_1_t227 * __this, Comparison_1_t3104 * ___comparison, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t3104 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, Comparison_1_t3104 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m15506_GenericMethod;
extern "C" ObjectU5BU5D_t178* List_1_ToArray_m15506_gshared (List_1_t227 * __this, MethodInfo* method)
{
	ObjectU5BU5D_t178* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0));
		ObjectU5BU5D_t178* L_1 = (__this->____items_1);
		ObjectU5BU5D_t178* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m9034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m9034_MethodInfo);
		ObjectU5BU5D_t178* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m15508_GenericMethod;
extern "C" void List_1_TrimExcess_m15508_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t227 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15510_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15512_gshared (List_1_t227 * __this, int32_t ___value, MethodInfo* method)
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
		ObjectU5BU5D_t178** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m7542_GenericMethod;
extern "C" int32_t List_1_get_Count_m7542_gshared (List_1_t227 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m7564_gshared (List_1_t227 * __this, int32_t ___index, MethodInfo* method)
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
		ObjectU5BU5D_t178* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m7565_gshared (List_1_t227 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t227 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
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
		ObjectU5BU5D_t178* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		Object_t * L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_6;
		return;
	}
}
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
extern Il2CppGenericMethod Enumerator_VerifyState_m15517_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m15514_gshared (Enumerator_t3078 * __this, List_1_t227 * ___l, MethodInfo* method)
{
	{
		List_1_t227 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t227 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m15515_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15515_gshared (Enumerator_t3078 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3078 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		Object_t * L_2 = (__this->___current_3);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m15516_GenericMethod;
extern "C" void Enumerator_Dispose_m15516_gshared (Enumerator_t3078 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t227 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15517_gshared (Enumerator_t3078 * __this, MethodInfo* method)
{
	{
		List_1_t227 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t3078  L_1 = (*(Enumerator_t3078 *)__this);
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
		List_1_t227 * L_7 = (__this->___l_0);
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
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m15518_GenericMethod;
extern "C" bool Enumerator_MoveNext_m15518_gshared (Enumerator_t3078 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t3078 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t227 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t227 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		ObjectU5BU5D_t178* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m15519_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m15519_gshared (Enumerator_t3078 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___current_3);
		return L_0;
	}
}
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
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
extern Il2CppType IList_1_t1354_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15549_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;
extern MethodInfo IList_1_get_Item_m35495_MethodInfo;
extern MethodInfo ICollection_CopyTo_m8807_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo ICollection_1_Contains_m34740_MethodInfo;
extern MethodInfo IList_1_IndexOf_m38300_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15549_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m35495_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15581_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m34740_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m38300_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m15520_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t* ___list, MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15521_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m15521_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15522_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m15522_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15523_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m15523_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15524_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m15524_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15525_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m15525_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15526_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m15526_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15527_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m15527_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15528_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15528_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15529_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m15529_gshared (ReadOnlyCollection_1_t3079 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15530_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m15530_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m7367_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m15531_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m15531_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m15532_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m15532_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m15533_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m15533_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15534_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m15534_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m15535_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m15535_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m15536_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m15536_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15537_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m15537_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15538_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m15538_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15539_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m15539_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15540_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m15540_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15541_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m15541_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m15542_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m15542_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m15543_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m15543_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m15544_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m15544_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m15545_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m15545_gshared (ReadOnlyCollection_1_t3079 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		ObjectU5BU5D_t178* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t178*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m15546_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m15546_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m15547_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m15547_gshared (ReadOnlyCollection_1_t3079 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m15548_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m15548_gshared (ReadOnlyCollection_1_t3079 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m15549_gshared (ReadOnlyCollection_1_t3079 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3080_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo IList_t1352_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t3080_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m38301_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15580_MethodInfo;
extern MethodInfo List_1__ctor_m7334_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m14599_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15573_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15571_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15576_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15567_MethodInfo;
extern MethodInfo ICollection_1_Clear_m38302_MethodInfo;
extern MethodInfo IList_1_Insert_m38303_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m38304_MethodInfo;
extern MethodInfo IList_1_set_Item_m38305_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10897_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14878_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14879_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m38301_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15584_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15585_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15582_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15580_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15573_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15583_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15571_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15576_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15567_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m38302_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m38303_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m38304_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m38305_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m15550_GenericMethod;
extern TypeInfo* List_1_t227_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m15550_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m15550_init;
	if (!Collection_1__ctor_m15550_init)
	{
		List_1_t227_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t227_0_0_0);
		Collection_1__ctor_m15550_init = true;
	}
	List_1_t227 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t227_il2cpp_TypeInfo_var);
		List_1_t227 * L_0 = (List_1_t227 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t227 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t227 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t227 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15551_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15551_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m15552_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m15552_gshared (Collection_1_t3080 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m15553_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m15553_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m15554_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m15554_gshared (Collection_1_t3080 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m15555_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m15555_gshared (Collection_1_t3080 * __this, Object_t * ___value, MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m15556_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m15556_gshared (Collection_1_t3080 * __this, Object_t * ___value, MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m15557_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m15557_gshared (Collection_1_t3080 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m15558_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m15558_gshared (Collection_1_t3080 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m15559_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m15559_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m15560_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m15560_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m15561_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m15561_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m15562_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m15562_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m15563_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m15563_gshared (Collection_1_t3080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m15564_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m15564_gshared (Collection_1_t3080 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m15565_GenericMethod;
extern "C" void Collection_1_Add_m15565_gshared (Collection_1_t3080 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___item;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m15566_GenericMethod;
extern "C" void Collection_1_Clear_m15566_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m15567_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m15568_GenericMethod;
extern "C" bool Collection_1_Contains_m15568_gshared (Collection_1_t3080 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m15569_GenericMethod;
extern "C" void Collection_1_CopyTo_m15569_gshared (Collection_1_t3080 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		ObjectU5BU5D_t178* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t178*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m15570_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m15570_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m15571_gshared (Collection_1_t3080 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m15572_GenericMethod;
extern "C" void Collection_1_Insert_m15572_gshared (Collection_1_t3080 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___item;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m15573_gshared (Collection_1_t3080 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m15574_GenericMethod;
extern "C" bool Collection_1_Remove_m15574_gshared (Collection_1_t3080 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
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
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m15575_GenericMethod;
extern "C" void Collection_1_RemoveAt_m15575_gshared (Collection_1_t3080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m15576_gshared (Collection_1_t3080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m15577_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m15577_gshared (Collection_1_t3080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m15578_GenericMethod;
extern "C" Object_t * Collection_1_get_Item_m15578_gshared (Collection_1_t3080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m15579_GenericMethod;
extern "C" void Collection_1_set_Item_m15579_gshared (Collection_1_t3080 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m15580_gshared (Collection_1_t3080 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m15581_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
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
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m15582_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
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
		return ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)));
	}

IL_000f:
	{
		ArgumentException_t534 * L_3 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_3, (String_t*) &_stringLiteral1581, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m15583_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m15584_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m15585_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
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
extern TypeInfo EqualityComparer_1_t3081_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau.h"
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3088_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_DefauMethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3081_0_0_0;
extern Il2CppType IEquatable_1_t5410_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t3088_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m15621_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m38306_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m33055_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15621_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m38306_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m33055_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m15586_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m15586_gshared (EqualityComparer_1_t3081 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m15587_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m15587_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3088 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3088 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3088 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t3081_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15588_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m15588_gshared (EqualityComparer_1_t3081 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15589_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m15589_gshared (EqualityComparer_1_t3081 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((Object_t *)Castclass(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((Object_t *)Castclass(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Object>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Object>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15590_GenericMethod;
extern "C" EqualityComparer_1_t3081 * EqualityComparer_1_get_Default_m15590_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t3081 * L_0 = ((EqualityComparer_1_t3081_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3366_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5410_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Object>::Equals(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4915_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Type>::get_Current()
// System.Array/InternalEnumerator`1<System.Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3082_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_10MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3082_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Type>(System.Int32)
#define Array_InternalArray__get_Item_TisType_t_m33057(__this, p0, method) (( Type_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15595_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisType_t_m33057_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Type>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Type>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Type>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Type>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Type>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4916_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Type>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4914_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3650_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Type>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5411_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.IReflect>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5412_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.IReflect>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5413_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.IReflect>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.IReflect>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3083_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.IReflect>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_11MethodDeclarations.h"

extern TypeInfo IReflect_t2804_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3083_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.IReflect>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.IReflect>(System.Int32)
#define Array_InternalArray__get_Item_TisIReflect_t2804_m33068(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15600_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIReflect_t2804_m33068_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.IReflect>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.IReflect>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.IReflect>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.IReflect>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.IReflect>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5414_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.IReflect>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.IReflect>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.IReflect>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5415_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Type>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5416_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Type>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5417_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Type>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3084_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_12MethodDeclarations.h"

extern TypeInfo _Type_t2805_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3084_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Type>(System.Int32)
#define Array_InternalArray__get_Item_Tis_Type_t2805_m33079(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15605_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_Type_t2805_m33079_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Type>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5418_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Type>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5419_il2cpp_TypeInfo;

// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5420_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5421_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3085_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_13MethodDeclarations.h"

extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3085_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMemberInfo_t_m33090(__this, p0, method) (( MemberInfo_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15610_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMemberInfo_t_m33090_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MemberInfo>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5422_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberInfo>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5423_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ICustomAttributeProvider>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5424_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ICustomAttributeProvider>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5425_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.ICustomAttributeProvider>::get_Current()
// System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3086_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_14MethodDeclarations.h"

extern TypeInfo ICustomAttributeProvider_t2514_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3086_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ICustomAttributeProvider>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ICustomAttributeProvider>(System.Int32)
#define Array_InternalArray__get_Item_TisICustomAttributeProvider_t2514_m33101(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15615_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICustomAttributeProvider_t2514_m33101_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.ICustomAttributeProvider>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5426_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ICustomAttributeProvider>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5427_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MemberInfo>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5428_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MemberInfo>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5429_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MemberInfo>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3087_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_15MethodDeclarations.h"

extern TypeInfo _MemberInfo_t2806_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3087_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MemberInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MemberInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MemberInfo_t2806_m33112(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15620_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_Tis_MemberInfo_t2806_m33112_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MemberInfo>::get_Current()
#ifdef __clang__
#pragma clang diagnostic pop
#endif
