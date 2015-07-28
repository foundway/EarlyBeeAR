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
extern TypeInfo IList_1_t5430_il2cpp_TypeInfo;

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MemberInfo>::set_Item(System.Int32,T)
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t3088_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_DefauMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object_GetHashCode_m1072_MethodInfo;
extern MethodInfo Object_Equals_m1071_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m15586_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
extern Il2CppGenericMethod DefaultComparer__ctor_m15621_GenericMethod;
extern "C" void DefaultComparer__ctor_m15621_gshared (DefaultComparer_t3088 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t3081 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m15622_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m15622_gshared (DefaultComparer_t3088 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((*(&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1072_MethodInfo, (*(&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m15623_GenericMethod;
extern "C" bool DefaultComparer_Equals_m15623_gshared (DefaultComparer_t3088 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		return ((((Object_t*)(Object_t *)((Object_t *)L_3)) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Object_t * L_4 = ___y;
		Object_t * L_5 = L_4;
		NullCheck((*(&___x)));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, (*(&___x)), ((Object_t *)L_5));
		return L_6;
	}
}
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Predicate_1_t3089_il2cpp_TypeInfo;
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m15624_GenericMethod;
extern "C" void Predicate_1__ctor_m15624_gshared (Predicate_1_t3089 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern Il2CppGenericMethod Predicate_1_Invoke_m15625_GenericMethod;
extern "C" bool Predicate_1_Invoke_m15625_gshared (Predicate_1_t3089 * __this, Object_t * ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m15625((Predicate_1_t3089 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m15626_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m15626_gshared (Predicate_1_t3089 * __this, Object_t * ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m15627_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m15627_gshared (Predicate_1_t3089 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t3090_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3091_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultComparMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t3090_0_0_0;
extern Il2CppType IComparable_1_t5245_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType GenericComparer_1_t2830_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t3091_0_0_0;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m15632_MethodInfo;
extern MethodInfo Comparer_1_Compare_m38307_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13771_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15632_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m38307_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Object>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m15628_GenericMethod;
extern "C" void Comparer_1__ctor_m15628_gshared (Comparer_1_t3090 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Object>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m15629_GenericMethod;
extern "C" void Comparer_1__cctor_m15629_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t3091 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3091 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t3091 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t3090_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m15630_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m15630_gshared (Comparer_1_t3090 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), ((Object_t *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_8, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Object>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m15631_GenericMethod;
extern "C" Comparer_1_t3090 * Comparer_1_get_Default_m15631_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t3090 * L_0 = ((Comparer_1_t3090_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t4660_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5245_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Object>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m33261_MethodInfo;
extern MethodInfo IComparable_CompareTo_m14570_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m33261_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m15632_gshared (DefaultComparer_t3091 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t3090 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m15633_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m15633_gshared (DefaultComparer_t3091 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		if (((Object_t *)L_3))
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
		Object_t * L_4 = ___y;
		Object_t * L_5 = L_4;
		if (((Object_t *)L_5))
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Object_t * L_6 = ___x;
		Object_t * L_7 = L_6;
		if (!((Object_t*)IsInst(((Object_t *)L_7), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_8 = ___x;
		Object_t * L_9 = L_8;
		Object_t * L_10 = ___y;
		NullCheck(((Object_t*)Castclass(((Object_t *)L_9), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_11 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(((Object_t *)L_9), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_10);
		return L_11;
	}

IL_003e:
	{
		Object_t * L_12 = ___x;
		Object_t * L_13 = L_12;
		if (!((Object_t *)IsInst(((Object_t *)L_13), InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Object_t * L_14 = ___x;
		Object_t * L_15 = L_14;
		Object_t * L_16 = ___y;
		Object_t * L_17 = L_16;
		NullCheck(((Object_t *)Castclass(((Object_t *)L_15), InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))));
		int32_t L_18 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m14570_MethodInfo, ((Object_t *)Castclass(((Object_t *)L_15), InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))), ((Object_t *)L_17));
		return L_18;
	}

IL_0062:
	{
		ArgumentException_t534 * L_19 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_19, (String_t*) &_stringLiteral1571, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_19);
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4814_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current()
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3092_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_16MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3092_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m8811_MethodInfo;
extern MethodInfo Array_get_Length_m8815_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
extern "C" int32_t Array_InternalArray__get_Item_TisInt32_t96_m33127_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt32_t96_m33127(__this, p0, method) (( int32_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisInt32_t96_m33127_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15638_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisInt32_t96_m33127_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Int32>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15634_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15634_gshared (InternalEnumerator_1_t3092 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15635_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15635_gshared (InternalEnumerator_1_t3092 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (InternalEnumerator_1_t3092 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int32>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15636_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15636_gshared (InternalEnumerator_1_t3092 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int32>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15637_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15637_gshared (InternalEnumerator_1_t3092 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Int32>::get_Current()
extern "C" int32_t InternalEnumerator_1_get_Current_m15638_gshared (InternalEnumerator_1_t3092 * __this, MethodInfo* method)
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
		int32_t L_8 = (( int32_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4815_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int32>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int32>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int32>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t3131_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3137_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Int32>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int32>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int32>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5431_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5432_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5433_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2588_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Int32>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3093_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_17MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3093_0_0_0;
extern Il2CppType IComparable_1_t2588_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m32943(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2588_m33138(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15643_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2588_m33138_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5434_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5435_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5436_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5437_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2589_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Int32>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3094_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_18MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3094_0_0_0;
extern Il2CppType IEquatable_1_t2589_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int32>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2589_m33149(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15648_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2589_m33149_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int32>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int32>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int32>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int32>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5438_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5439_il2cpp_TypeInfo;

// System.Double
#include "mscorlib_System_Double.h"


// T System.Collections.Generic.IEnumerator`1<System.Double>::get_Current()
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3095_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_19MethodDeclarations.h"

extern TypeInfo Double_t209_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3095_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern "C" double Array_InternalArray__get_Item_TisDouble_t209_m33160_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDouble_t209_m33160(__this, p0, method) (( double (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDouble_t209_m33160_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15653_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDouble_t209_m33160_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15649_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15649_gshared (InternalEnumerator_1_t3095 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15650_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15650_gshared (InternalEnumerator_1_t3095 * __this, MethodInfo* method)
{
	{
		double L_0 = (( double (*) (InternalEnumerator_1_t3095 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		double L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15651_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15651_gshared (InternalEnumerator_1_t3095 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15652_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15652_gshared (InternalEnumerator_1_t3095 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
extern "C" double InternalEnumerator_1_get_Current_m15653_gshared (InternalEnumerator_1_t3095 * __this, MethodInfo* method)
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
		double L_8 = (( double (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5440_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Double>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Double>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Double>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Double>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5441_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Double>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5442_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Double>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Double>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Double>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Double>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Double>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5443_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Double>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5444_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Double>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5445_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Double>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2634_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Double>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3096_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_20MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3096_0_0_0;
extern Il2CppType IComparable_1_t2634_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Double>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Double>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2634_m33171(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15658_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2634_m33171_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Double>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5446_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Double>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5447_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Double>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5448_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Double>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5449_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Double>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2635_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Double>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3097_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_21MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3097_0_0_0;
extern Il2CppType IEquatable_1_t2635_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Double>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Double>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2635_m33182(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15663_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2635_m33182_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Double>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5450_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Double>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t2010_il2cpp_TypeInfo;

// System.Char
#include "mscorlib_System_Char.h"


// T System.Collections.Generic.IEnumerator`1<System.Char>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4952_il2cpp_TypeInfo;

// System.UInt16
#include "mscorlib_System_UInt16.h"


// T System.Collections.Generic.IEnumerator`1<System.UInt16>::get_Current()
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3098_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Char>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_22MethodDeclarations.h"

extern TypeInfo Char_t404_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3098_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
extern "C" uint16_t Array_InternalArray__get_Item_TisUInt16_t879_m33193_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt16_t879_m33193(__this, p0, method) (( uint16_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt16_t879_m33193_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Char>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Char>(System.Int32)
#define Array_InternalArray__get_Item_TisChar_t404_m33195(__this, p0, method) (( uint16_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisUInt16_t879_m33193_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15672_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisChar_t404_m33195_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Char>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Char>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Char>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Char>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Char>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3099_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UInt16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_23MethodDeclarations.h"

extern TypeInfo UInt16_t879_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3099_0_0_0;
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15673_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisUInt16_t879_m33193_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.UInt16>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m15665_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m15665_gshared (InternalEnumerator_1_t3099 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt16>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15667_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15667_gshared (InternalEnumerator_1_t3099 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (( uint16_t (*) (InternalEnumerator_1_t3099 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt16>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m15669_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m15669_gshared (InternalEnumerator_1_t3099 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt16>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m15671_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m15671_gshared (InternalEnumerator_1_t3099 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.UInt16>::get_Current()
extern "C" uint16_t InternalEnumerator_1_get_Current_m15673_gshared (InternalEnumerator_1_t3099 * __this, MethodInfo* method)
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
		uint16_t L_8 = (( uint16_t (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4945_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt16>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt16>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt16>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5451_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt16>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5452_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UInt16>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt16>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt16>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5453_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt16>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5454_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt16>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5455_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2612_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.UInt16>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_24.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3100_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_24MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3100_0_0_0;
extern Il2CppType IComparable_1_t2612_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2612_m33209(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15678_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2612_m33209_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5456_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt16>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5457_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt16>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5458_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt16>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5459_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2613_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.UInt16>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3101_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_25MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3101_0_0_0;
extern Il2CppType IEquatable_1_t2613_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2613_m33220(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15683_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2613_m33220_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt16>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5460_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt16>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5461_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Char>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Char>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Char>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Char>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Char>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Char>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Char>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t2627_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5462_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Char>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Char>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Char>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Char>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Char>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5463_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Char>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5464_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Char>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5465_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Char>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2621_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Char>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3102_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_26MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3102_0_0_0;
extern Il2CppType IComparable_1_t2621_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Char>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Char>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2621_m33237(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15688_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2621_m33237_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Char>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5466_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Char>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5467_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Char>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5468_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Char>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5469_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Char>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2622_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Char>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_27.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3103_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_27MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3103_0_0_0;
extern Il2CppType IEquatable_1_t2622_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Char>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Char>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2622_m33248(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15693_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2622_m33248_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Char>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5470_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Char>>::set_Item(System.Int32,T)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3104_il2cpp_TypeInfo;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"



// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m15694_GenericMethod;
extern "C" void Comparison_1__ctor_m15694_gshared (Comparison_1_t3104 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m15695_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m15695_gshared (Comparison_1_t3104 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m15695((Comparison_1_t3104 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m15696_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m15696_gshared (Comparison_1_t3104 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___x;
	__d_args[1] = ___y;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m15697_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m15697_gshared (Comparison_1_t3104 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4810_il2cpp_TypeInfo;

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4808_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4809_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.GameObject>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_28.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3105_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.GameObject>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_28MethodDeclarations.h"

extern TypeInfo GameObject_t7_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3105_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.GameObject>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.GameObject>(System.Int32)
#define Array_InternalArray__get_Item_TisGameObject_t7_m33266(__this, p0, method) (( GameObject_t7 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15702_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGameObject_t7_m33266_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.GameObject>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.GameObject>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GameObject>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.GameObject>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.GameObject>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3107_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.GameObject>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.GameObject>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5471_il2cpp_TypeInfo;

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Object>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Object>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Object>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5472_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Object>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5473_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Object>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_29.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3106_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Object>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_29MethodDeclarations.h"

extern TypeInfo Object_t172_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3106_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Object>(System.Int32)
#define Array_InternalArray__get_Item_TisObject_t172_m33277(__this, p0, method) (( Object_t172 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m15707_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisObject_t172_m33277_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Object>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Object>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Object>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Object>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Object>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5474_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Object>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Object>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Object>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t174_il2cpp_TypeInfo;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo List_1_t31_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1984_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern Il2CppType Enumerator_t174_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m8818_MethodInfo;
extern MethodInfo Object_GetType_m975_MethodInfo;
extern MethodInfo Type_get_FullName_m7409_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10051_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m15711_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReadOnlyCollection_1_t3108_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo NotSupportedException_t207_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo ICollection_t1351_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t595_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo GameObjectU5BU5D_t3077_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0MethodDeclarations.h"
extern Il2CppType ReadOnlyCollection_1_t3108_0_0_0;
extern Il2CppType IList_1_t3107_0_0_0;
extern Il2CppType ICollection_1_t4810_0_0_0;
extern Il2CppType IEnumerable_1_t4808_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m15741_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;
extern MethodInfo IList_1_get_Item_m38308_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38296_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo ICollection_CopyTo_m8807_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo ICollection_1_Contains_m38309_MethodInfo;
extern MethodInfo IList_1_IndexOf_m38310_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m38297_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38298_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m15741_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m38308_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38296_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m15773_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m38309_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m38310_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m38297_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38298_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.GameObject>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3109_il2cpp_TypeInfo;

extern TypeInfo IList_t1352_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
extern Il2CppType Collection_1_t3109_0_0_0;
extern Il2CppType List_1_t31_0_0_0;
extern Il2CppType GameObject_t7_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m38311_MethodInfo;
extern MethodInfo Collection_1_SetItem_m15772_MethodInfo;
extern MethodInfo List_1__ctor_m623_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m14599_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m15765_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m15763_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m15768_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m15759_MethodInfo;
extern MethodInfo ICollection_1_Clear_m38312_MethodInfo;
extern MethodInfo IList_1_Insert_m38313_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m38314_MethodInfo;
extern MethodInfo IList_1_set_Item_m38315_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10897_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14878_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14879_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m38311_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m15776_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m15777_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m15774_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m15772_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m623_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m15765_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m15775_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m15763_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m15768_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m15759_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m38312_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m38313_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m38314_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m38315_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.GameObject>::IsFixedSize(System.Collections.Generic.IList`1<T>)
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3110_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0.h"
extern TypeInfo DefaultComparer_t3111_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_0MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3110_0_0_0;
extern Il2CppType IEquatable_1_t5475_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType DefaultComparer_t3111_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15783_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m38316_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m33289_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15783_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m38316_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m33289_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.GameObject>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5476_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5475_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.GameObject>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m15778_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.GameObject>::Equals(T,T)
// System.Predicate`1<UnityEngine.GameObject>
#include "mscorlib_System_Predicate_1_gen_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Predicate_1_t3112_il2cpp_TypeInfo;
// System.Predicate`1<UnityEngine.GameObject>
#include "mscorlib_System_Predicate_1_gen_5MethodDeclarations.h"



// System.Void System.Predicate`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.GameObject>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Comparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t3113_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0.h"
extern TypeInfo DefaultComparer_t3114_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0MethodDeclarations.h"
extern Il2CppType Comparer_1_t3113_0_0_0;
extern Il2CppType IComparable_1_t5247_0_0_0;
extern Il2CppType DefaultComparer_t3114_0_0_0;
extern MethodInfo DefaultComparer__ctor_m15794_MethodInfo;
extern MethodInfo Comparer_1_Compare_m38317_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m15794_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m38317_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.GameObject>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5246_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.GameObject>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5247_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.GameObject>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m33298_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m15790_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m33298_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GameObject>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.GameObject>::Compare(T,T)
// System.Comparison`1<UnityEngine.GameObject>
#include "mscorlib_System_Comparison_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t3115_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.GameObject>
#include "mscorlib_System_Comparison_1_gen_4MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.GameObject>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.GameObject>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
// System.Func`2<System.Int32,System.Single>
#include "System_Core_System_Func_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Func_2_t32_il2cpp_TypeInfo;
// System.Func`2<System.Int32,System.Single>
#include "System_Core_System_Func_2_genMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"


// System.Void System.Func`2<System.Int32,System.Single>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Func_2__ctor_m636_GenericMethod;
extern "C" void Func_2__ctor_m636_gshared (Func_2_t32 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TResult System.Func`2<System.Int32,System.Single>::Invoke(T)
extern Il2CppGenericMethod Func_2_Invoke_m15800_GenericMethod;
extern "C" float Func_2_Invoke_m15800_gshared (Func_2_t32 * __this, int32_t ___arg1, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Func_2_Invoke_m15800((Func_2_t32 *)__this->___prev_9,___arg1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef float (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg1, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef float (*FunctionPointerType) (Object_t * __this, int32_t ___arg1, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg1,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Func`2<System.Int32,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Func_2_BeginInvoke_m15801_GenericMethod;
extern "C" Object_t * Func_2_BeginInvoke_m15801_gshared (Func_2_t32 * __this, int32_t ___arg1, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TResult System.Func`2<System.Int32,System.Single>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Func_2_EndInvoke_m15802_GenericMethod;
extern "C" float Func_2_EndInvoke_m15802_gshared (Func_2_t32 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(float*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
