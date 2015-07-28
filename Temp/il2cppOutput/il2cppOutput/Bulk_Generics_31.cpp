#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_gen.h"
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
extern TypeInfo UnityAction_4_t4628_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_4_genMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_4__ctor_m31568_GenericMethod;
extern "C" void UnityAction_4__ctor_m31568_gshared (UnityAction_4_t4628 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern Il2CppGenericMethod UnityAction_4_Invoke_m31569_GenericMethod;
extern "C" void UnityAction_4_Invoke_m31569_gshared (UnityAction_4_t4628 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_4_Invoke_m31569((UnityAction_4_t4628 *)__this->___prev_9,___arg0, ___arg1, ___arg2, ___arg3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___arg0, ___arg1, ___arg2, ___arg3,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_4_BeginInvoke_m31570_GenericMethod;
extern "C" Object_t * UnityAction_4_BeginInvoke_m31570_gshared (UnityAction_4_t4628 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg0;
	__d_args[1] = ___arg1;
	__d_args[2] = ___arg2;
	__d_args[3] = ___arg3;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_4_EndInvoke_m31571_GenericMethod;
extern "C" void UnityAction_4_EndInvoke_m31571_gshared (UnityAction_4_t4628 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t4630_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_3MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen.h"
extern TypeInfo ObjectU5BU5D_t178_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3313_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_genMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t178_0_0_0;
extern Il2CppType InvokableCall_1_t3313_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m17839_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m17841_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m31572_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m31572_gshared (CachedInvokableCall_1_t4630 * __this, Object_t172 * ___target, MethodInfo_t * ___theFunction, Object_t * ___argument, MethodInfo* method)
{
	static bool CachedInvokableCall_1__ctor_m31572_init;
	if (!CachedInvokableCall_1__ctor_m31572_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		CachedInvokableCall_1__ctor_m31572_init = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 1));
		Object_t172 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		(( void (*) (InvokableCall_1_t3313 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t178* L_2 = (__this->___m_Arg1_1);
		Object_t * L_3 = ___argument;
		Object_t * L_4 = L_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, ((Object_t *)L_4));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)((Object_t *)L_4);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m31573_GenericMethod;
extern "C" void CachedInvokableCall_1_Invoke_m31573_gshared (CachedInvokableCall_1_t4630 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->___m_Arg1_1);
		(( void (*) (InvokableCall_1_t3313 *, ObjectU5BU5D_t178*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t1290_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3.h"
extern TypeInfo Single_t43_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3531_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_3MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t3531_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m20018_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m20020_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m7463_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m7463_gshared (CachedInvokableCall_1_t1290 * __this, Object_t172 * ___target, MethodInfo_t * ___theFunction, float ___argument, MethodInfo* method)
{
	static bool CachedInvokableCall_1__ctor_m7463_init;
	if (!CachedInvokableCall_1__ctor_m7463_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		CachedInvokableCall_1__ctor_m7463_init = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 1));
		Object_t172 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		(( void (*) (InvokableCall_1_t3531 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t178* L_2 = (__this->___m_Arg1_1);
		float L_3 = ___argument;
		float L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m31574_GenericMethod;
extern "C" void CachedInvokableCall_1_Invoke_m31574_gshared (CachedInvokableCall_1_t1290 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->___m_Arg1_1);
		(( void (*) (InvokableCall_1_t3531 *, ObjectU5BU5D_t178*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t1291_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_7.h"
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t4631_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_7MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t4631_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m31576_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m31578_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m7464_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m7464_gshared (CachedInvokableCall_1_t1291 * __this, Object_t172 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, MethodInfo* method)
{
	static bool CachedInvokableCall_1__ctor_m7464_init;
	if (!CachedInvokableCall_1__ctor_m7464_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		CachedInvokableCall_1__ctor_m7464_init = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 1));
		Object_t172 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		(( void (*) (InvokableCall_1_t4631 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t178* L_2 = (__this->___m_Arg1_1);
		int32_t L_3 = ___argument;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m31575_GenericMethod;
extern "C" void CachedInvokableCall_1_Invoke_m31575_gshared (CachedInvokableCall_1_t1291 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->___m_Arg1_1);
		(( void (*) (InvokableCall_1_t4631 *, ObjectU5BU5D_t178*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_12.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t4632_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_12MethodDeclarations.h"
extern Il2CppType UnityAction_1_t4632_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m7165_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m978_MethodInfo;
extern MethodInfo Delegate_Combine_m665_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m7164_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m7166_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m31581_MethodInfo;
extern MethodInfo Delegate_get_Target_m7461_MethodInfo;
extern MethodInfo Delegate_get_Method_m7460_MethodInfo;
struct BaseInvokableCall_t1217;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Int32>(System.Object)
extern "C" void BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t96_m37427_gshared (Object_t * __this /* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t96_m37427(__this /* static, unused */, p0, method) (( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t96_m37427_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod BaseInvokableCall_ThrowOnInvalidArg_TisInt32_t96_m37427_GenericMethod;
extern Il2CppGenericMethod UnityAction_1_Invoke_m31581_GenericMethod;


// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m31576_gshared (InvokableCall_1_t4631 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m7165(__this, L_0, L_1, /*hidden argument*/&BaseInvokableCall__ctor_m7165_MethodInfo);
		UnityAction_1_t4632 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t200 * L_6 = Delegate_CreateDelegate_m978(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Delegate_CreateDelegate_m978_MethodInfo);
		Delegate_t200 * L_7 = Delegate_Combine_m665(NULL /*static, unused*/, L_2, ((UnityAction_1_t4632 *)IsInst(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1))), /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t4632 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern Il2CppGenericMethod InvokableCall_1__ctor_m31577_GenericMethod;
extern "C" void InvokableCall_1__ctor_m31577_gshared (InvokableCall_1_t4631 * __this, UnityAction_1_t4632 * ___callback, MethodInfo* method)
{
	{
		BaseInvokableCall__ctor_m7164(__this, /*hidden argument*/&BaseInvokableCall__ctor_m7164_MethodInfo);
		UnityAction_1_t4632 * L_0 = (__this->___Delegate_0);
		UnityAction_1_t4632 * L_1 = ___callback;
		Delegate_t200 * L_2 = Delegate_Combine_m665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		__this->___Delegate_0 = ((UnityAction_1_t4632 *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m31578_gshared (InvokableCall_1_t4631 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = ___args;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_t534 * L_1 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_1, (String_t*) &_stringLiteral595, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		ObjectU5BU5D_t178* L_2 = ___args;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		(( void (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		UnityAction_1_t4632 * L_4 = (__this->___Delegate_0);
		bool L_5 = BaseInvokableCall_AllowInvoke_m7166(NULL /*static, unused*/, L_4, /*hidden argument*/&BaseInvokableCall_AllowInvoke_m7166_MethodInfo);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		UnityAction_1_t4632 * L_6 = (__this->___Delegate_0);
		ObjectU5BU5D_t178* L_7 = ___args;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		int32_t L_8 = 0;
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, ((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_8)), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3))))));
	}

IL_003f:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod InvokableCall_1_Find_m31579_GenericMethod;
extern "C" bool InvokableCall_1_Find_m31579_gshared (InvokableCall_1_t4631 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t4632 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m7461(L_0, /*hidden argument*/&Delegate_get_Target_m7461_MethodInfo);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_1_t4632 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m7460(L_3, /*hidden argument*/&Delegate_get_Method_m7460_MethodInfo);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod UnityAction_1__ctor_m31580_GenericMethod;
extern "C" void UnityAction_1__ctor_m31580_gshared (UnityAction_1_t4632 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m31581_gshared (UnityAction_1_t4632 * __this, int32_t ___arg0, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_1_Invoke_m31581((UnityAction_1_t4632 *)__this->___prev_9,___arg0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___arg0, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___arg0, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___arg0,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m31582_GenericMethod;
extern "C" Object_t * UnityAction_1_BeginInvoke_m31582_gshared (UnityAction_1_t4632 * __this, int32_t ___arg0, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___arg0);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m31583_GenericMethod;
extern "C" void UnityAction_1_EndInvoke_m31583_gshared (UnityAction_1_t4632 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t1292_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3530_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_2MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t3530_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m20010_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m20012_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.String>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.String>::Invoke(System.Object[])
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t1293_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_6.h"
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3584_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_6MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t3584_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m20529_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m20531_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t4633_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_4MethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_5.h"
extern TypeInfo Byte_t535_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3582_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_5MethodDeclarations.h"
extern Il2CppType InvokableCall_1_t3582_0_0_0;
extern Il2CppGenericMethod InvokableCall_1__ctor_m20521_GenericMethod;
extern Il2CppGenericMethod InvokableCall_1_Invoke_m20523_GenericMethod;


// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m31585_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void CachedInvokableCall_1__ctor_m31585_gshared (CachedInvokableCall_1_t4633 * __this, Object_t172 * ___target, MethodInfo_t * ___theFunction, uint8_t ___argument, MethodInfo* method)
{
	static bool CachedInvokableCall_1__ctor_m31585_init;
	if (!CachedInvokableCall_1__ctor_m31585_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		CachedInvokableCall_1__ctor_m31585_init = true;
	}
	{
		__this->___m_Arg1_1 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 1));
		Object_t172 * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		(( void (*) (InvokableCall_1_t3582 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ObjectU5BU5D_t178* L_2 = (__this->___m_Arg1_1);
		uint8_t L_3 = ___argument;
		uint8_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_5;
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Byte>::Invoke(System.Object[])
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m31587_GenericMethod;
extern "C" void CachedInvokableCall_1_Invoke_m31587_gshared (CachedInvokableCall_1_t4633 * __this, ObjectU5BU5D_t178* ___args, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->___m_Arg1_1);
		(( void (*) (InvokableCall_1_t3582 *, ObjectU5BU5D_t178*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_58.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t1222_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_58MethodDeclarations.h"

// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#include "UnityEngine_ArrayTypes.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_59.h"
// System.Predicate`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Predicate_1_gen_61.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_60.h"
// System.Comparison`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Comparison_1_gen_60.h"
extern TypeInfo PersistentCall_t1220_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t853_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2504_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5128_il2cpp_TypeInfo;
extern TypeInfo PersistentCallU5BU5D_t4634_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t1295_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5126_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5127_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4637_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4641_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4642_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_59MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Predicate_1_gen_61MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_26MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_60MethodDeclarations.h"
extern Il2CppType List_1_t1222_0_0_0;
extern Il2CppType ICollection_1_t5128_0_0_0;
extern Il2CppType PersistentCallU5BU5D_t4634_0_0_0;
extern Il2CppType Enumerator_t1295_0_0_0;
extern Il2CppType IEnumerable_1_t5126_0_0_0;
extern Il2CppType IEnumerator_1_t5127_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4637_0_0_0;
extern Il2CppType Predicate_1_t4641_0_0_0;
extern Il2CppType Comparer_1_t4642_0_0_0;
extern MethodInfo List_1_get_Item_m31634_MethodInfo;
extern MethodInfo List_1_set_Item_m31635_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8994_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8819_MethodInfo;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39332_MethodInfo;
extern MethodInfo Array_Copy_m10846_MethodInfo;
extern MethodInfo List_1_Add_m31606_MethodInfo;
extern MethodInfo List_1_Contains_m31613_MethodInfo;
extern MethodInfo List_1_IndexOf_m31618_MethodInfo;
extern MethodInfo List_1_Insert_m31621_MethodInfo;
extern MethodInfo List_1_Remove_m31623_MethodInfo;
extern MethodInfo Math_Max_m10043_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39333_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39334_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39335_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4885_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m31645_MethodInfo;
extern MethodInfo Array_Clear_m10034_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m31720_MethodInfo;
extern MethodInfo Enumerator__ctor_m31641_MethodInfo;
extern MethodInfo List_1_RemoveAt_m31625_MethodInfo;
extern MethodInfo Array_Reverse_m10075_MethodInfo;
extern MethodInfo Array_Copy_m9034_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m33054_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m33054(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.Events.PersistentCall>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Events.PersistentCall>(!!0[]&,System.Int32)
#define Array_Resize_TisPersistentCall_t1220_m37440(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, PersistentCallU5BU5D_t4634**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_86.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14600_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14600(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Events.PersistentCall>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Events.PersistentCall>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisPersistentCall_t1220_m37442(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, PersistentCallU5BU5D_t4634*, PersistentCall_t1220 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33123_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m33123(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.Events.PersistentCall>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Events.PersistentCall>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisPersistentCall_t1220_m37444(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, PersistentCallU5BU5D_t4634*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
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
// Declaration System.Void System.Array::Sort<UnityEngine.Events.PersistentCall>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Events.PersistentCall>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisPersistentCall_t1220_m37452(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, PersistentCallU5BU5D_t4634*, int32_t, Comparison_1_t4644 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m31634_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m31635_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisPersistentCall_t1220_m37440_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m31620_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m31622_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m31609_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39332_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m31608_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m7472_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m31606_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m31613_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m31618_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m31621_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m31623_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m31607_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m31631_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m31632_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39333_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39334_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39335_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m31645_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisPersistentCall_t1220_m37442_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m31616_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m31617_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m31720_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m31641_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m31619_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m31625_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m31726_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisPersistentCall_t1220_m37444_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisPersistentCall_t1220_m37452_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.PersistentCall>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Events.PersistentCall>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_268.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4635_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_268MethodDeclarations.h"

extern TypeInfo InvalidOperationException_t1784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t4635_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m8811_MethodInfo;
extern MethodInfo Array_get_Length_m8815_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m32943(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Events.PersistentCall>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Events.PersistentCall>(System.Int32)
#define Array_InternalArray__get_Item_TisPersistentCall_t1220_m37429(__this, p0, method) (( PersistentCall_t1220 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31640_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisPersistentCall_t1220_m37429_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Events.PersistentCall>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4636_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo ObjectDisposedException_t1984_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m8818_MethodInfo;
extern MethodInfo Object_GetType_m975_MethodInfo;
extern MethodInfo Type_get_FullName_m7409_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10051_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m31644_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>::get_Current()
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
// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_59MethodDeclarations.h"
extern Il2CppType IList_1_t4636_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m31674_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;
extern MethodInfo IList_1_get_Item_m39336_MethodInfo;
extern MethodInfo ICollection_CopyTo_m8807_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39337_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39338_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m31674_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m39336_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m31706_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39337_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39338_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4638_il2cpp_TypeInfo;

extern TypeInfo IList_t1352_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t4638_0_0_0;
extern Il2CppType PersistentCall_t1220_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39339_MethodInfo;
extern MethodInfo Collection_1_SetItem_m31705_MethodInfo;
extern MethodInfo List_1__ctor_m7471_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m14599_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m31698_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m31696_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m31701_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m31692_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39340_MethodInfo;
extern MethodInfo IList_1_Insert_m39341_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39342_MethodInfo;
extern MethodInfo IList_1_set_Item_m39343_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10897_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14878_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14879_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39339_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m31709_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m31710_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m31707_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m31705_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m7471_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m31698_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m31708_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m31696_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m31701_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m31692_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39340_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39341_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39342_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39343_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.PersistentCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4639_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_86MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_86.h"
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4640_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_86MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4639_0_0_0;
extern Il2CppType IEquatable_1_t6243_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t4640_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m31716_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39344_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m37441_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m31716_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39344_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m37441_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.PersistentCall>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6244_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.PersistentCall>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.PersistentCall>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t6243_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Events.PersistentCall>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m1072_MethodInfo;
extern MethodInfo Object_Equals_m1071_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m31711_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_60.h"
extern TypeInfo DefaultComparer_t4643_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_60MethodDeclarations.h"
extern Il2CppType IComparable_1_t5365_0_0_0;
extern Il2CppType GenericComparer_1_t2830_0_0_0;
extern Il2CppType DefaultComparer_t4643_0_0_0;
extern MethodInfo DefaultComparer__ctor_m31727_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39345_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13771_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m31727_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39345_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Events.PersistentCall>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5364_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Events.PersistentCall>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5365_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Events.PersistentCall>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m37450_MethodInfo;
extern MethodInfo IComparable_CompareTo_m14570_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m31723_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m37450_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.PersistentCall>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4644_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Comparison_1_gen_60MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Events.PersistentCall>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.PersistentCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Events.PersistentCall>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t1225_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_59MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_60.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_60.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_3.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_61.h"
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Comparison_1_gen_61.h"
extern TypeInfo BaseInvokableCall_t1217_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5131_il2cpp_TypeInfo;
extern TypeInfo BaseInvokableCallU5BU5D_t4645_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4647_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5129_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5130_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4649_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t1296_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4653_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_60MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_60MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_61MethodDeclarations.h"
extern Il2CppType List_1_t1225_0_0_0;
extern Il2CppType ICollection_1_t5131_0_0_0;
extern Il2CppType BaseInvokableCallU5BU5D_t4645_0_0_0;
extern Il2CppType Enumerator_t4647_0_0_0;
extern Il2CppType IEnumerable_1_t5129_0_0_0;
extern Il2CppType IEnumerator_1_t5130_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4649_0_0_0;
extern Il2CppType Predicate_1_t1296_0_0_0;
extern Il2CppType Comparer_1_t4653_0_0_0;
extern MethodInfo List_1_get_Item_m7477_MethodInfo;
extern MethodInfo List_1_set_Item_m31774_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39346_MethodInfo;
extern MethodInfo List_1_Add_m7476_MethodInfo;
extern MethodInfo List_1_Contains_m7480_MethodInfo;
extern MethodInfo List_1_IndexOf_m31760_MethodInfo;
extern MethodInfo List_1_Insert_m31763_MethodInfo;
extern MethodInfo List_1_Remove_m31765_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39347_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39348_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39349_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m31786_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m31860_MethodInfo;
extern MethodInfo Enumerator__ctor_m31780_MethodInfo;
extern MethodInfo List_1_RemoveAt_m31766_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.Events.BaseInvokableCall>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.Events.BaseInvokableCall>(!!0[]&,System.Int32)
#define Array_Resize_TisBaseInvokableCall_t1217_m37466(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, BaseInvokableCallU5BU5D_t4645**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_87.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.Events.BaseInvokableCall>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.Events.BaseInvokableCall>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisBaseInvokableCall_t1217_m37468(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, BaseInvokableCallU5BU5D_t4645*, BaseInvokableCall_t1217 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Events.BaseInvokableCall>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Events.BaseInvokableCall>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisBaseInvokableCall_t1217_m37470(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, BaseInvokableCallU5BU5D_t4645*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.Events.BaseInvokableCall>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.Events.BaseInvokableCall>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisBaseInvokableCall_t1217_m37478(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, BaseInvokableCallU5BU5D_t4645*, int32_t, Comparison_1_t4655 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m7477_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m31774_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisBaseInvokableCall_t1217_m37466_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m31762_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m31764_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m31753_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39346_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m31752_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m31759_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m7476_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m7480_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m31760_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m31763_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m31765_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m31751_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m31772_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m31773_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39347_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39348_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39349_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m31786_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisBaseInvokableCall_t1217_m37468_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m31757_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m31758_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m31860_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m31780_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m31761_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m31766_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m31866_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseInvokableCall_t1217_m37470_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisBaseInvokableCall_t1217_m37478_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.Events.BaseInvokableCall>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_269.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4646_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_269MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4646_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Events.BaseInvokableCall>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Events.BaseInvokableCall>(System.Int32)
#define Array_InternalArray__get_Item_TisBaseInvokableCall_t1217_m37455(__this, p0, method) (( BaseInvokableCall_t1217 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m31779_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBaseInvokableCall_t1217_m37455_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Events.BaseInvokableCall>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4648_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m31783_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.BaseInvokableCall>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_60MethodDeclarations.h"
extern Il2CppType IList_1_t4648_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m31815_MethodInfo;
extern MethodInfo IList_1_get_Item_m39350_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39351_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39352_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m31815_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m39350_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m31847_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39351_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39352_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_60.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4650_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t4650_0_0_0;
extern Il2CppType BaseInvokableCall_t1217_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39353_MethodInfo;
extern MethodInfo Collection_1_SetItem_m31846_MethodInfo;
extern MethodInfo List_1__ctor_m7475_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m31839_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m31837_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m31842_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m31833_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39354_MethodInfo;
extern MethodInfo IList_1_Insert_m39355_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39356_MethodInfo;
extern MethodInfo IList_1_set_Item_m39357_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39353_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m31850_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m31851_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m31848_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m31846_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m7475_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m31839_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m31849_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m31837_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m31842_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m31833_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39354_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39355_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39356_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39357_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Events.BaseInvokableCall>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4651_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_87MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_87.h"
extern TypeInfo DefaultComparer_t4652_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_87MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4651_0_0_0;
extern Il2CppType IEquatable_1_t6245_0_0_0;
extern Il2CppType DefaultComparer_t4652_0_0_0;
extern MethodInfo DefaultComparer__ctor_m31857_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39358_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m37467_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m31857_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39358_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m37467_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6246_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.Events.BaseInvokableCall>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t6245_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.Events.BaseInvokableCall>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m31852_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_61.h"
extern TypeInfo DefaultComparer_t4654_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_61MethodDeclarations.h"
extern Il2CppType IComparable_1_t5367_0_0_0;
extern Il2CppType DefaultComparer_t4654_0_0_0;
extern MethodInfo DefaultComparer__ctor_m31867_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39359_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m31867_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39359_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.Events.BaseInvokableCall>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5366_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.Events.BaseInvokableCall>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5367_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.Events.BaseInvokableCall>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m37476_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m31863_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m37476_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Events.BaseInvokableCall>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4655_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Comparison_1_gen_61MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_2_t4656_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_2_genMethodDeclarations.h"

// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_gen.h"
extern TypeInfo InvokableCall_2_t4625_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_2_genMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType InvokableCall_2_t4625_0_0_0;
extern MethodInfo UnityEventBase__ctor_m7186_MethodInfo;
extern MethodInfo UnityEventBase_GetValidMethodInfo_m7194_MethodInfo;
extern MethodInfo InvokableCall_2__ctor_m31551_MethodInfo;
extern Il2CppGenericMethod InvokableCall_2__ctor_m31551_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_2__ctor_m31873_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_2__ctor_m31873_gshared (UnityEvent_2_t4656 * __this, MethodInfo* method)
{
	static bool UnityEvent_2__ctor_m31873_init;
	if (!UnityEvent_2__ctor_m31873_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		UnityEvent_2__ctor_m31873_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 2));
		UnityEventBase__ctor_m7186(__this, /*hidden argument*/&UnityEventBase__ctor_m7186_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_2_FindMethod_Impl_m31874_GenericMethod;
extern TypeInfo* TypeU5BU5D_t930_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_2_FindMethod_Impl_m31874_gshared (UnityEvent_2_t4656 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_2_FindMethod_Impl_m31874_init;
	if (!UnityEvent_2_FindMethod_Impl_m31874_init)
	{
		TypeU5BU5D_t930_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t930_0_0_0);
		UnityEvent_2_FindMethod_Impl_m31874_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t930* L_2 = ((TypeU5BU5D_t930*)SZArrayNew(TypeU5BU5D_t930_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t930* L_4 = L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m7194(NULL /*static, unused*/, L_0, L_1, L_4, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m7194_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_2_GetDelegate_m31875_GenericMethod;
extern "C" BaseInvokableCall_t1217 * UnityEvent_2_GetDelegate_m31875_gshared (UnityEvent_2_t4656 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_2_t4625 * L_2 = (InvokableCall_2_t4625 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (InvokableCall_2_t4625 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_3_t4657_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_3_genMethodDeclarations.h"

// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_gen.h"
extern TypeInfo InvokableCall_3_t4627_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_3_genMethodDeclarations.h"
extern Il2CppType InvokableCall_3_t4627_0_0_0;
extern MethodInfo InvokableCall_3__ctor_m31558_MethodInfo;
extern Il2CppGenericMethod InvokableCall_3__ctor_m31558_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_3__ctor_m31876_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_3__ctor_m31876_gshared (UnityEvent_3_t4657 * __this, MethodInfo* method)
{
	static bool UnityEvent_3__ctor_m31876_init;
	if (!UnityEvent_3__ctor_m31876_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		UnityEvent_3__ctor_m31876_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 3));
		UnityEventBase__ctor_m7186(__this, /*hidden argument*/&UnityEventBase__ctor_m7186_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_3_FindMethod_Impl_m31877_GenericMethod;
extern TypeInfo* TypeU5BU5D_t930_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m31877_gshared (UnityEvent_3_t4657 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_3_FindMethod_Impl_m31877_init;
	if (!UnityEvent_3_FindMethod_Impl_m31877_init)
	{
		TypeU5BU5D_t930_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t930_0_0_0);
		UnityEvent_3_FindMethod_Impl_m31877_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t930* L_2 = ((TypeU5BU5D_t930*)SZArrayNew(TypeU5BU5D_t930_il2cpp_TypeInfo_var, 3));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t930* L_4 = L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		TypeU5BU5D_t930* L_6 = L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2)) = (Type_t *)L_7;
		MethodInfo_t * L_8 = UnityEventBase_GetValidMethodInfo_m7194(NULL /*static, unused*/, L_0, L_1, L_6, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m7194_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_3_GetDelegate_m31878_GenericMethod;
extern "C" BaseInvokableCall_t1217 * UnityEvent_3_GetDelegate_m31878_gshared (UnityEvent_3_t4657 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_3_t4627 * L_2 = (InvokableCall_3_t4627 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (InvokableCall_3_t4627 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_2;
	}
}
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityEvent_4_t4658_il2cpp_TypeInfo;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_4_genMethodDeclarations.h"

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_gen.h"
extern TypeInfo InvokableCall_4_t4629_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_4_genMethodDeclarations.h"
extern Il2CppType InvokableCall_4_t4629_0_0_0;
extern MethodInfo InvokableCall_4__ctor_m31565_MethodInfo;
extern Il2CppGenericMethod InvokableCall_4__ctor_m31565_GenericMethod;


// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod UnityEvent_4__ctor_m31879_GenericMethod;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void UnityEvent_4__ctor_m31879_gshared (UnityEvent_4_t4658 * __this, MethodInfo* method)
{
	static bool UnityEvent_4__ctor_m31879_init;
	if (!UnityEvent_4__ctor_m31879_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		UnityEvent_4__ctor_m31879_init = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 4));
		UnityEventBase__ctor_m7186(__this, /*hidden argument*/&UnityEventBase__ctor_m7186_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern Il2CppGenericMethod UnityEvent_4_FindMethod_Impl_m31880_GenericMethod;
extern TypeInfo* TypeU5BU5D_t930_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_4_FindMethod_Impl_m31880_gshared (UnityEvent_4_t4658 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method)
{
	static bool UnityEvent_4_FindMethod_Impl_m31880_init;
	if (!UnityEvent_4_FindMethod_Impl_m31880_init)
	{
		TypeU5BU5D_t930_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t930_0_0_0);
		UnityEvent_4_FindMethod_Impl_m31880_init = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		TypeU5BU5D_t930* L_2 = ((TypeU5BU5D_t930*)SZArrayNew(TypeU5BU5D_t930_il2cpp_TypeInfo_var, 4));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_3 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_3;
		TypeU5BU5D_t930* L_4 = L_2;
		Type_t * L_5 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 1)) = (Type_t *)L_5;
		TypeU5BU5D_t930* L_6 = L_4;
		Type_t * L_7 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 2)) = (Type_t *)L_7;
		TypeU5BU5D_t930* L_8 = L_6;
		Type_t * L_9 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_8, 3)) = (Type_t *)L_9;
		MethodInfo_t * L_10 = UnityEventBase_GetValidMethodInfo_m7194(NULL /*static, unused*/, L_0, L_1, L_8, /*hidden argument*/&UnityEventBase_GetValidMethodInfo_m7194_MethodInfo);
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern Il2CppGenericMethod UnityEvent_4_GetDelegate_m31881_GenericMethod;
extern "C" BaseInvokableCall_t1217 * UnityEvent_4_GetDelegate_m31881_gshared (UnityEvent_4_t4658 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, MethodInfo* method)
{
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_4_t4629 * L_2 = (InvokableCall_4_t4629 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (InvokableCall_4_t4629 *, Object_t *, MethodInfo_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IOrderedEnumerable_1_t6247_il2cpp_TypeInfo;



// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo OrderedSequence_2_t4661_il2cpp_TypeInfo;
// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_gen_0MethodDeclarations.h"

// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_3.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
// System.Linq.SortContext`1<System.Object>
#include "System_Core_System_Linq_SortContext_1_gen_0.h"
// System.Linq.SortSequenceContext`2<System.Object,System.Object>
#include "System_Core_System_Linq_SortSequenceContext_2_gen_0.h"
// System.Linq.OrderedEnumerable`1<System.Object>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_0.h"
extern TypeInfo Comparer_1_t3090_il2cpp_TypeInfo;
extern TypeInfo SortSequenceContext_2_t4663_il2cpp_TypeInfo;
extern TypeInfo OrderedEnumerable_1_t4659_il2cpp_TypeInfo;
extern TypeInfo SortContext_1_t4662_il2cpp_TypeInfo;
// System.Linq.OrderedEnumerable`1<System.Object>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"
// System.Linq.SortSequenceContext`2<System.Object,System.Object>
#include "System_Core_System_Linq_SortSequenceContext_2_gen_0MethodDeclarations.h"
// System.Linq.QuickSort`1<System.Object>
#include "System_Core_System_Linq_QuickSort_1_gen_0MethodDeclarations.h"
extern Il2CppType Comparer_1_t3090_0_0_0;
extern Il2CppType SortSequenceContext_2_t4663_0_0_0;
extern Il2CppType OrderedEnumerable_1_t4659_0_0_0;
extern Il2CppType OrderedSequence_2_t4661_0_0_0;
extern MethodInfo SortSequenceContext_2__ctor_m31889_MethodInfo;
extern MethodInfo OrderedEnumerable_1_CreateContext_m39360_MethodInfo;
extern MethodInfo OrderedSequence_2_CreateContext_m31883_MethodInfo;
extern Il2CppGenericMethod OrderedEnumerable_1__ctor_m31885_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m15631_GenericMethod;
extern Il2CppGenericMethod SortSequenceContext_2__ctor_m31889_GenericMethod;
extern Il2CppGenericMethod OrderedEnumerable_1_CreateContext_m39360_GenericMethod;
extern Il2CppGenericMethod OrderedSequence_2_CreateContext_m31883_GenericMethod;
extern Il2CppGenericMethod QuickSort_1_Sort_m31900_GenericMethod;


// System.Void System.Linq.OrderedSequence`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern Il2CppGenericMethod OrderedSequence_2__ctor_m31882_GenericMethod;
extern TypeInfo* Comparer_1_t3090_il2cpp_TypeInfo_var;
extern "C" void OrderedSequence_2__ctor_m31882_gshared (OrderedSequence_2_t4661 * __this, Object_t* ___source, Func_2_t212 * ___key_selector, Object_t* ___comparer, int32_t ___direction, MethodInfo* method)
{
	static bool OrderedSequence_2__ctor_m31882_init;
	if (!OrderedSequence_2__ctor_m31882_init)
	{
		Comparer_1_t3090_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t3090_0_0_0);
		OrderedSequence_2__ctor_m31882_init = true;
	}
	Object_t* G_B2_0 = {0};
	OrderedSequence_2_t4661 * G_B2_1 = {0};
	Object_t* G_B1_0 = {0};
	OrderedSequence_2_t4661 * G_B1_1 = {0};
	{
		Object_t* L_0 = ___source;
		(( void (*) (OrderedEnumerable_1_t4659 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_2_t212 * L_1 = ___key_selector;
		__this->___selector_2 = L_1;
		Object_t* L_2 = ___comparer;
		Object_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = ((OrderedSequence_2_t4661 *)(__this));
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = ((OrderedSequence_2_t4661 *)(__this));
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t3090_il2cpp_TypeInfo_var);
		Comparer_1_t3090 * L_4 = (( Comparer_1_t3090 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		G_B2_0 = ((Object_t*)(L_4));
		G_B2_1 = ((OrderedSequence_2_t4661 *)(G_B1_1));
	}

IL_001c:
	{
		NullCheck(G_B2_1);
		G_B2_1->___comparer_3 = G_B2_0;
		int32_t L_5 = ___direction;
		__this->___direction_4 = L_5;
		return;
	}
}
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C" SortContext_1_t4662 * OrderedSequence_2_CreateContext_m31883_gshared (OrderedSequence_2_t4661 * __this, SortContext_1_t4662 * ___current, MethodInfo* method)
{
	SortContext_1_t4662 * V_0 = {0};
	{
		Func_2_t212 * L_0 = (__this->___selector_2);
		Object_t* L_1 = (__this->___comparer_3);
		int32_t L_2 = (__this->___direction_4);
		SortContext_1_t4662 * L_3 = ___current;
		SortSequenceContext_2_t4663 * L_4 = (SortSequenceContext_2_t4663 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (SortSequenceContext_2_t4663 *, Func_2_t212 *, Object_t*, int32_t, SortContext_1_t4662 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_4;
		OrderedEnumerable_1_t4659 * L_5 = (__this->___parent_1);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		OrderedEnumerable_1_t4659 * L_6 = (__this->___parent_1);
		SortContext_1_t4662 * L_7 = V_0;
		NullCheck(L_6);
		SortContext_1_t4662 * L_8 = (SortContext_1_t4662 *)VirtFuncInvoker1< SortContext_1_t4662 *, SortContext_1_t4662 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_6, L_7);
		return L_8;
	}

IL_0031:
	{
		SortContext_1_t4662 * L_9 = V_0;
		return L_9;
	}
}
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern Il2CppGenericMethod OrderedSequence_2_Sort_m31884_GenericMethod;
extern "C" Object_t* OrderedSequence_2_Sort_m31884_gshared (OrderedSequence_2_t4661 * __this, Object_t* ___source, MethodInfo* method)
{
	{
		Object_t* L_0 = ___source;
		SortContext_1_t4662 * L_1 = (SortContext_1_t4662 *)VirtFuncInvoker1< SortContext_1_t4662 *, SortContext_1_t4662 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), __this, (SortContext_1_t4662 *)NULL);
		Object_t* L_2 = (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t4662 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IEnumerator_1_t258_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t1353_il2cpp_TypeInfo;
extern Il2CppType IEnumerable_1_t1353_0_0_0;
extern MethodInfo OrderedEnumerable_1_GetEnumerator_m31887_MethodInfo;
extern MethodInfo OrderedEnumerable_1_Sort_m39361_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m33654_MethodInfo;
extern Il2CppGenericMethod OrderedEnumerable_1_GetEnumerator_m31887_GenericMethod;
extern Il2CppGenericMethod OrderedEnumerable_1_Sort_m39361_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33654_GenericMethod;


// System.Void System.Linq.OrderedEnumerable`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" void OrderedEnumerable_1__ctor_m31885_gshared (OrderedEnumerable_1_t4659 * __this, Object_t* ___source, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___source;
		__this->___source_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Linq.OrderedEnumerable`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod OrderedEnumerable_1_System_Collections_IEnumerable_GetEnumerator_m31886_GenericMethod;
extern "C" Object_t * OrderedEnumerable_1_System_Collections_IEnumerable_GetEnumerator_m31886_gshared (OrderedEnumerable_1_t4659 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::GetEnumerator()
extern "C" Object_t* OrderedEnumerable_1_GetEnumerator_m31887_gshared (OrderedEnumerable_1_t4659 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___source_0);
		Object_t* L_1 = (Object_t*)VirtFuncInvoker1< Object_t*, Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), __this, L_0);
		NullCheck(L_1);
		Object_t* L_2 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1);
		return L_2;
	}
}
// System.Linq.SortContext`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
#ifndef _MSC_VER
#else
#endif
// System.Linq.SortContext`1<System.Object>
#include "System_Core_System_Linq_SortContext_1_gen_0MethodDeclarations.h"



// System.Void System.Linq.SortContext`1<System.Object>::.ctor(System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern Il2CppGenericMethod SortContext_1__ctor_m31888_GenericMethod;
extern "C" void SortContext_1__ctor_m31888_gshared (SortContext_1_t4662 * __this, int32_t ___direction, SortContext_1_t4662 * ___child_context, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		int32_t L_0 = ___direction;
		__this->___direction_0 = L_0;
		SortContext_1_t4662 * L_1 = ___child_context;
		__this->___child_context_1 = L_1;
		return;
	}
}
// System.Void System.Linq.SortContext`1<System.Object>::Initialize(TElement[])
// System.Int32 System.Linq.SortContext`1<System.Object>::Compare(System.Int32,System.Int32)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Func_2_t212_il2cpp_TypeInfo;
extern TypeInfo IComparer_1_t4660_il2cpp_TypeInfo;
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
extern Il2CppType SortContext_1_t4662_0_0_0;
extern Il2CppType Func_2_t212_0_0_0;
extern Il2CppType IComparer_1_t4660_0_0_0;
extern MethodInfo SortContext_1_Initialize_m39362_MethodInfo;
extern MethodInfo Func_2_Invoke_m17146_MethodInfo;
extern MethodInfo IComparer_1_Compare_m33260_MethodInfo;
extern MethodInfo SortContext_1_Compare_m39363_MethodInfo;
extern Il2CppGenericMethod SortContext_1_Initialize_m39362_GenericMethod;
extern Il2CppGenericMethod Func_2_Invoke_m17146_GenericMethod;
extern Il2CppGenericMethod IComparer_1_Compare_m33260_GenericMethod;
extern Il2CppGenericMethod SortContext_1_Compare_m39363_GenericMethod;


// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C" void SortSequenceContext_2__ctor_m31889_gshared (SortSequenceContext_2_t4663 * __this, Func_2_t212 * ___selector, Object_t* ___comparer, int32_t ___direction, SortContext_1_t4662 * ___child_context, MethodInfo* method)
{
	{
		int32_t L_0 = ___direction;
		SortContext_1_t4662 * L_1 = ___child_context;
		(( void (*) (SortContext_1_t4662 *, int32_t, SortContext_1_t4662 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Func_2_t212 * L_2 = ___selector;
		__this->___selector_2 = L_2;
		Object_t* L_3 = ___comparer;
		__this->___comparer_3 = L_3;
		return;
	}
}
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern Il2CppGenericMethod SortSequenceContext_2_Initialize_m31890_GenericMethod;
extern "C" void SortSequenceContext_2_Initialize_m31890_gshared (SortSequenceContext_2_t4663 * __this, ObjectU5BU5D_t178* ___elements, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SortContext_1_t4662 * L_0 = (__this->___child_context_1);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		SortContext_1_t4662 * L_1 = (__this->___child_context_1);
		ObjectU5BU5D_t178* L_2 = ___elements;
		NullCheck(L_1);
		VirtActionInvoker1< ObjectU5BU5D_t178* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), L_1, L_2);
	}

IL_0017:
	{
		ObjectU5BU5D_t178* L_3 = ___elements;
		NullCheck(L_3);
		__this->___keys_4 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_0 = 0;
		goto IL_004e;
	}

IL_002c:
	{
		ObjectU5BU5D_t178* L_4 = (__this->___keys_4);
		int32_t L_5 = V_0;
		Func_2_t212 * L_6 = (__this->___selector_2);
		ObjectU5BU5D_t178* L_7 = ___elements;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_6);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_6, (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, L_5)) = (Object_t *)L_10;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_12 = V_0;
		ObjectU5BU5D_t178* L_13 = (__this->___keys_4);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern Il2CppGenericMethod SortSequenceContext_2_Compare_m31891_GenericMethod;
extern "C" int32_t SortSequenceContext_2_Compare_m31891_gshared (SortSequenceContext_2_t4663 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		Object_t* L_0 = (__this->___comparer_3);
		ObjectU5BU5D_t178* L_1 = (__this->___keys_4);
		int32_t L_2 = ___first_index;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		ObjectU5BU5D_t178* L_4 = (__this->___keys_4);
		int32_t L_5 = ___second_index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_0);
		int32_t L_7 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_4, L_6)));
		V_0 = L_7;
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_005b;
		}
	}
	{
		SortContext_1_t4662 * L_9 = (__this->___child_context_1);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		SortContext_1_t4662 * L_10 = (__this->___child_context_1);
		int32_t L_11 = ___first_index;
		int32_t L_12 = ___second_index;
		NullCheck(L_10);
		int32_t L_13 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_10, L_11, L_12);
		return L_13;
	}

IL_0043:
	{
		int32_t L_14 = (__this->___direction_0);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_15 = ___second_index;
		int32_t L_16 = ___first_index;
		G_B6_0 = ((int32_t)((int32_t)L_15-(int32_t)L_16));
		goto IL_005a;
	}

IL_0057:
	{
		int32_t L_17 = ___first_index;
		int32_t L_18 = ___second_index;
		G_B6_0 = ((int32_t)((int32_t)L_17-(int32_t)L_18));
	}

IL_005a:
	{
		V_0 = G_B6_0;
	}

IL_005b:
	{
		int32_t L_19 = (__this->___direction_0);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_20 = V_0;
		G_B10_0 = ((-L_20));
		goto IL_006f;
	}

IL_006e:
	{
		int32_t L_21 = V_0;
		G_B10_0 = L_21;
	}

IL_006f:
	{
		return G_B10_0;
	}
}
// System.Linq.QuickSort`1<System.Object>
#include "System_Core_System_Linq_QuickSort_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo QuickSort_1_t4664_il2cpp_TypeInfo;

// System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>
#include "System_Core_System_Linq_QuickSort_1_U3CSortU3Ec__Iterator21__0.h"
extern TypeInfo Int32U5BU5D_t34_il2cpp_TypeInfo;
extern TypeInfo U3CSortU3Ec__Iterator21_t4665_il2cpp_TypeInfo;
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>
#include "System_Core_System_Linq_QuickSort_1_U3CSortU3Ec__Iterator21__0MethodDeclarations.h"
extern Il2CppType Int32U5BU5D_t34_0_0_0;
extern Il2CppType U3CSortU3Ec__Iterator21_t4665_0_0_0;
extern MethodInfo U3CSortU3Ec__Iterator21__ctor_m31901_MethodInfo;
struct Enumerable_t179;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t178* Enumerable_ToArray_TisObject_t_m906_gshared (Object_t * __this /* static, unused */, Object_t* p0, MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m906(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t178* (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_ToArray_TisObject_t_m906_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod Enumerable_ToArray_TisObject_t_m906_GenericMethod;
extern Il2CppGenericMethod QuickSort_1_CreateIndexes_m31893_GenericMethod;
extern Il2CppGenericMethod QuickSort_1_Sort_m31897_GenericMethod;
extern Il2CppGenericMethod QuickSort_1_CompareItems_m31895_GenericMethod;
extern Il2CppGenericMethod QuickSort_1_Swap_m31899_GenericMethod;
extern Il2CppGenericMethod QuickSort_1_MedianOfThree_m31896_GenericMethod;
extern Il2CppGenericMethod QuickSort_1_InsertionSort_m31898_GenericMethod;
extern Il2CppGenericMethod U3CSortU3Ec__Iterator21__ctor_m31901_GenericMethod;


// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern Il2CppGenericMethod QuickSort_1__ctor_m31892_GenericMethod;
extern "C" void QuickSort_1__ctor_m31892_gshared (QuickSort_1_t4664 * __this, Object_t* ___source, SortContext_1_t4662 * ___context, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___source;
		ObjectU5BU5D_t178* L_1 = (( ObjectU5BU5D_t178* (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___elements_0 = L_1;
		ObjectU5BU5D_t178* L_2 = (__this->___elements_0);
		NullCheck(L_2);
		Int32U5BU5D_t34* L_3 = (( Int32U5BU5D_t34* (*) (Object_t * /* static, unused */, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		__this->___indexes_1 = L_3;
		SortContext_1_t4662 * L_4 = ___context;
		__this->___context_2 = L_4;
		return;
	}
}
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern "C" Int32U5BU5D_t34* QuickSort_1_CreateIndexes_m31893_gshared (Object_t * __this /* static, unused */, int32_t ___length, MethodInfo* method)
{
	static bool QuickSort_1_CreateIndexes_m31893_init;
	if (!QuickSort_1_CreateIndexes_m31893_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		QuickSort_1_CreateIndexes_m31893_init = true;
	}
	Int32U5BU5D_t34* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length;
		V_0 = ((Int32U5BU5D_t34*)SZArrayNew(Int32U5BU5D_t34_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0016;
	}

IL_000e:
	{
		Int32U5BU5D_t34* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)) = (int32_t)L_3;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___length;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t34* L_7 = V_0;
		return L_7;
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern Il2CppGenericMethod QuickSort_1_PerformSort_m31894_GenericMethod;
extern "C" void QuickSort_1_PerformSort_m31894_gshared (QuickSort_1_t4664 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = (__this->___elements_0);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) > ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		SortContext_1_t4662 * L_1 = (__this->___context_2);
		ObjectU5BU5D_t178* L_2 = (__this->___elements_0);
		NullCheck(L_1);
		VirtActionInvoker1< ObjectU5BU5D_t178* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1, L_2);
		Int32U5BU5D_t34* L_3 = (__this->___indexes_1);
		NullCheck(L_3);
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, 0, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m31895_gshared (QuickSort_1_t4664 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method)
{
	{
		SortContext_1_t4662 * L_0 = (__this->___context_2);
		int32_t L_1 = ___first_index;
		int32_t L_2 = ___second_index;
		NullCheck(L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m31896_gshared (QuickSort_1_t4664 * __this, int32_t ___left, int32_t ___right, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___left;
		int32_t L_1 = ___right;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))/(int32_t)2));
		Int32U5BU5D_t34* L_2 = (__this->___indexes_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Int32U5BU5D_t34* L_5 = (__this->___indexes_1);
		int32_t L_6 = ___left;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		int32_t L_8 = (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_2, L_4)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_9 = ___left;
		int32_t L_10 = V_0;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_9, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_002a:
	{
		Int32U5BU5D_t34* L_11 = (__this->___indexes_1);
		int32_t L_12 = ___right;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		Int32U5BU5D_t34* L_14 = (__this->___indexes_1);
		int32_t L_15 = ___left;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_13)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_18 = ___left;
		int32_t L_19 = ___right;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_18, L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_004e:
	{
		Int32U5BU5D_t34* L_20 = (__this->___indexes_1);
		int32_t L_21 = ___right;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		Int32U5BU5D_t34* L_23 = (__this->___indexes_1);
		int32_t L_24 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		int32_t L_26 = (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_20, L_22)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_27 = V_0;
		int32_t L_28 = ___right;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_27, L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0072:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = ___right;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_29, ((int32_t)((int32_t)L_30-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Int32U5BU5D_t34* L_31 = (__this->___indexes_1);
		int32_t L_32 = ___right;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32-(int32_t)1)));
		int32_t L_33 = ((int32_t)((int32_t)L_32-(int32_t)1));
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_31, L_33));
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m31897_gshared (QuickSort_1_t4664 * __this, int32_t ___left, int32_t ___right, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___left;
		int32_t L_1 = ___right;
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)3))) > ((int32_t)L_1)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_2 = ___left;
		V_0 = L_2;
		int32_t L_3 = ___right;
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		int32_t L_4 = ___left;
		int32_t L_5 = ___right;
		int32_t L_6 = (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		V_2 = L_6;
	}

IL_0018:
	{
		goto IL_001d;
	}

IL_001d:
	{
		Int32U5BU5D_t34* L_7 = (__this->___indexes_1);
		int32_t L_8 = V_0;
		int32_t L_9 = ((int32_t)((int32_t)L_8+(int32_t)1));
		V_0 = L_9;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_9);
		int32_t L_10 = L_9;
		int32_t L_11 = V_2;
		int32_t L_12 = (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10)), L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		goto IL_003b;
	}

IL_003b:
	{
		Int32U5BU5D_t34* L_13 = (__this->___indexes_1);
		int32_t L_14 = V_1;
		int32_t L_15 = ((int32_t)((int32_t)L_14-(int32_t)1));
		V_1 = L_15;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_15);
		int32_t L_16 = L_15;
		int32_t L_17 = V_2;
		int32_t L_18 = (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(__this, (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_16)), L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)L_20)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_21, L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_006d;
	}

IL_0068:
	{
		goto IL_0072;
	}

IL_006d:
	{
		goto IL_0018;
	}

IL_0072:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = ___right;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_23, ((int32_t)((int32_t)L_24-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_25 = ___left;
		int32_t L_26 = V_0;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_25, ((int32_t)((int32_t)L_26-(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		int32_t L_27 = V_0;
		int32_t L_28 = ___right;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, ((int32_t)((int32_t)L_27+(int32_t)1)), L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_009d;
	}

IL_0095:
	{
		int32_t L_29 = ___left;
		int32_t L_30 = ___right;
		(( void (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, L_29, L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
	}

IL_009d:
	{
		return;
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m31898_gshared (QuickSort_1_t4664 * __this, int32_t ___left, int32_t ___right, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___left;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
		goto IL_005a;
	}

IL_0009:
	{
		Int32U5BU5D_t34* L_1 = (__this->___indexes_1);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_2 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_1, L_3));
		int32_t L_4 = V_0;
		V_1 = L_4;
		goto IL_002f;
	}

IL_0019:
	{
		Int32U5BU5D_t34* L_5 = (__this->___indexes_1);
		int32_t L_6 = V_1;
		Int32U5BU5D_t34* L_7 = (__this->___indexes_1);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)L_8-(int32_t)1)));
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, L_6)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_9));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10-(int32_t)1));
	}

IL_002f:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___left;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_13 = V_2;
		Int32U5BU5D_t34* L_14 = (__this->___indexes_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15-(int32_t)1)));
		int32_t L_16 = ((int32_t)((int32_t)L_15-(int32_t)1));
		int32_t L_17 = (( int32_t (*) (QuickSort_1_t4664 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(__this, L_13, (*(int32_t*)(int32_t*)SZArrayLdElema(L_14, L_16)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}

IL_004d:
	{
		Int32U5BU5D_t34* L_18 = (__this->___indexes_1);
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_18, L_19)) = (int32_t)L_20;
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = ___right;
		if ((((int32_t)L_22) <= ((int32_t)L_23)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m31899_gshared (QuickSort_1_t4664 * __this, int32_t ___left, int32_t ___right, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t34* L_0 = (__this->___indexes_1);
		int32_t L_1 = ___right;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_0, L_2));
		Int32U5BU5D_t34* L_3 = (__this->___indexes_1);
		int32_t L_4 = ___right;
		Int32U5BU5D_t34* L_5 = (__this->___indexes_1);
		int32_t L_6 = ___left;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_3, L_4)) = (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_5, L_7));
		Int32U5BU5D_t34* L_8 = (__this->___indexes_1);
		int32_t L_9 = ___left;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, L_9)) = (int32_t)L_10;
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m31900_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t4662 * ___context, MethodInfo* method)
{
	U3CSortU3Ec__Iterator21_t4665 * V_0 = {0};
	{
		U3CSortU3Ec__Iterator21_t4665 * L_0 = (U3CSortU3Ec__Iterator21_t4665 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		(( void (*) (U3CSortU3Ec__Iterator21_t4665 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		V_0 = L_0;
		U3CSortU3Ec__Iterator21_t4665 * L_1 = V_0;
		Object_t* L_2 = ___source;
		NullCheck(L_1);
		L_1->___source_0 = L_2;
		U3CSortU3Ec__Iterator21_t4665 * L_3 = V_0;
		SortContext_1_t4662 * L_4 = ___context;
		NullCheck(L_3);
		L_3->___context_1 = L_4;
		U3CSortU3Ec__Iterator21_t4665 * L_5 = V_0;
		Object_t* L_6 = ___source;
		NullCheck(L_5);
		L_5->___U3C$U3Esource_6 = L_6;
		U3CSortU3Ec__Iterator21_t4665 * L_7 = V_0;
		SortContext_1_t4662 * L_8 = ___context;
		NullCheck(L_7);
		L_7->___U3C$U3Econtext_7 = L_8;
		U3CSortU3Ec__Iterator21_t4665 * L_9 = V_0;
		U3CSortU3Ec__Iterator21_t4665 * L_10 = L_9;
		NullCheck(L_10);
		L_10->___$PC_4 = ((int32_t)-2);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
extern Il2CppType QuickSort_1_t4664_0_0_0;
extern MethodInfo U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumerableU3CTElementU3E_GetEnumerator_m31905_MethodInfo;
extern MethodInfo Interlocked_CompareExchange_m13696_MethodInfo;
extern MethodInfo QuickSort_1__ctor_m31892_MethodInfo;
extern Il2CppGenericMethod U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumerableU3CTElementU3E_GetEnumerator_m31905_GenericMethod;


// System.Void System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::.ctor()
extern "C" void U3CSortU3Ec__Iterator21__ctor_m31901_gshared (U3CSortU3Ec__Iterator21_t4665 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// TElement System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.Generic.IEnumerator<TElement>.get_Current()
extern Il2CppGenericMethod U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m31902_GenericMethod;
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumeratorU3CTElementU3E_get_Current_m31902_gshared (U3CSortU3Ec__Iterator21_t4665 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		return L_0;
	}
}
// System.Object System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod U3CSortU3Ec__Iterator21_System_Collections_IEnumerator_get_Current_m31903_GenericMethod;
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_IEnumerator_get_Current_m31903_gshared (U3CSortU3Ec__Iterator21_t4665 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_5);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Collections.IEnumerator System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod U3CSortU3Ec__Iterator21_System_Collections_IEnumerable_GetEnumerator_m31904_GenericMethod;
extern "C" Object_t * U3CSortU3Ec__Iterator21_System_Collections_IEnumerable_GetEnumerator_m31904_gshared (U3CSortU3Ec__Iterator21_t4665 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), __this);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TElement> System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::System.Collections.Generic.IEnumerable<TElement>.GetEnumerator()
extern "C" Object_t* U3CSortU3Ec__Iterator21_System_Collections_Generic_IEnumerableU3CTElementU3E_GetEnumerator_m31905_gshared (U3CSortU3Ec__Iterator21_t4665 * __this, MethodInfo* method)
{
	U3CSortU3Ec__Iterator21_t4665 * V_0 = {0};
	{
		int32_t* L_0 = &(__this->___$PC_4);
		int32_t L_1 = Interlocked_CompareExchange_m13696(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/&Interlocked_CompareExchange_m13696_MethodInfo);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CSortU3Ec__Iterator21_t4665 * L_2 = (U3CSortU3Ec__Iterator21_t4665 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		(( void (*) (U3CSortU3Ec__Iterator21_t4665 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_2;
		U3CSortU3Ec__Iterator21_t4665 * L_3 = V_0;
		Object_t* L_4 = (__this->___U3C$U3Esource_6);
		NullCheck(L_3);
		L_3->___source_0 = L_4;
		U3CSortU3Ec__Iterator21_t4665 * L_5 = V_0;
		SortContext_1_t4662 * L_6 = (__this->___U3C$U3Econtext_7);
		NullCheck(L_5);
		L_5->___context_1 = L_6;
		U3CSortU3Ec__Iterator21_t4665 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::MoveNext()
extern Il2CppGenericMethod U3CSortU3Ec__Iterator21_MoveNext_m31906_GenericMethod;
extern "C" bool U3CSortU3Ec__Iterator21_MoveNext_m31906_gshared (U3CSortU3Ec__Iterator21_t4665 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_4);
		V_0 = L_0;
		__this->___$PC_4 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00b0;
	}

IL_0021:
	{
		Object_t* L_2 = (__this->___source_0);
		SortContext_1_t4662 * L_3 = (__this->___context_1);
		QuickSort_1_t4664 * L_4 = (QuickSort_1_t4664 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (QuickSort_1_t4664 *, Object_t*, SortContext_1_t4662 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		__this->___U3CsorterU3E__0_2 = L_4;
		QuickSort_1_t4664 * L_5 = (__this->___U3CsorterU3E__0_2);
		NullCheck(L_5);
		(( void (*) (QuickSort_1_t4664 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		__this->___U3CiU3E__1_3 = 0;
		goto IL_0091;
	}

IL_004f:
	{
		QuickSort_1_t4664 * L_6 = (__this->___U3CsorterU3E__0_2);
		NullCheck(L_6);
		ObjectU5BU5D_t178* L_7 = (L_6->___elements_0);
		QuickSort_1_t4664 * L_8 = (__this->___U3CsorterU3E__0_2);
		NullCheck(L_8);
		Int32U5BU5D_t34* L_9 = (L_8->___indexes_1);
		int32_t L_10 = (__this->___U3CiU3E__1_3);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)));
		int32_t L_12 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11));
		__this->___$current_5 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_12));
		__this->___$PC_4 = 1;
		goto IL_00b2;
	}

IL_0083:
	{
		int32_t L_13 = (__this->___U3CiU3E__1_3);
		__this->___U3CiU3E__1_3 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_14 = (__this->___U3CiU3E__1_3);
		QuickSort_1_t4664 * L_15 = (__this->___U3CsorterU3E__0_2);
		NullCheck(L_15);
		Int32U5BU5D_t34* L_16 = (L_15->___indexes_1);
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_004f;
		}
	}
	{
		__this->___$PC_4 = (-1);
	}

IL_00b0:
	{
		return 0;
	}

IL_00b2:
	{
		return 1;
	}
	// Dead block : IL_00b4: ldloc.1
}
// System.Void System.Linq.QuickSort`1/<Sort>c__Iterator21<System.Object>::Dispose()
extern Il2CppGenericMethod U3CSortU3Ec__Iterator21_Dispose_m31907_GenericMethod;
extern "C" void U3CSortU3Ec__Iterator21_Dispose_m31907_gshared (U3CSortU3Ec__Iterator21_t4665 * __this, MethodInfo* method)
{
	{
		__this->___$PC_4 = (-1);
		return;
	}
}
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LinkedList_1_t4667_il2cpp_TypeInfo;
// System.Collections.Generic.LinkedList`1<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
#include "System_System_Collections_Generic_LinkedListNode_1_gen_0.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0.h"
extern TypeInfo Enumerator_t4668_il2cpp_TypeInfo;
extern TypeInfo LinkedListNode_1_t4666_il2cpp_TypeInfo;
// System.Collections.Generic.LinkedListNode`1<System.Object>
#include "System_System_Collections_Generic_LinkedListNode_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.LinkedList`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_LinkedList_1_Enumerator_ge_0MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
extern Il2CppType LinkedList_1_t4667_0_0_0;
extern Il2CppType Enumerator_t4668_0_0_0;
extern Il2CppType LinkedListNode_1_t4666_0_0_0;
extern MethodInfo LinkedList_1_CopyTo_m31921_MethodInfo;
extern MethodInfo LinkedListNode_1__ctor_m31931_MethodInfo;
extern MethodInfo LinkedListNode_1__ctor_m31932_MethodInfo;
extern MethodInfo Array_GetLowerBound_m10808_MethodInfo;
extern MethodInfo Array_get_Rank_m8821_MethodInfo;
extern MethodInfo ArgumentException__ctor_m8817_MethodInfo;
extern MethodInfo Enumerator__ctor_m31937_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8826_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m13067_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m8829_MethodInfo;
extern MethodInfo SerializationInfo_GetUInt32_m13070_MethodInfo;
extern Il2CppGenericMethod LinkedList_1__ctor_m31908_GenericMethod;
extern Il2CppGenericMethod LinkedList_1_AddLast_m31918_GenericMethod;
extern Il2CppGenericMethod LinkedList_1_CopyTo_m31921_GenericMethod;
extern Il2CppGenericMethod LinkedList_1_GetEnumerator_m31923_GenericMethod;
extern Il2CppGenericMethod LinkedListNode_1_get_List_m31934_GenericMethod;
extern Il2CppGenericMethod LinkedListNode_1__ctor_m31931_GenericMethod;
extern Il2CppGenericMethod LinkedListNode_1__ctor_m31932_GenericMethod;
extern Il2CppGenericMethod LinkedList_1_RemoveLast_m31928_GenericMethod;
extern Il2CppGenericMethod LinkedListNode_1_get_Value_m31936_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m31937_GenericMethod;
extern Il2CppGenericMethod LinkedList_1_Find_m31922_GenericMethod;
extern Il2CppGenericMethod LinkedList_1_Remove_m31927_GenericMethod;
extern Il2CppGenericMethod LinkedList_1_VerifyReferencedNode_m31917_GenericMethod;
extern Il2CppGenericMethod LinkedListNode_1_Detach_m31933_GenericMethod;


// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor()
extern "C" void LinkedList_1__ctor_m31908_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m595(L_0, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		__this->___syncRoot_2 = L_0;
		__this->___first_3 = (LinkedListNode_1_t4666 *)NULL;
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___version_1 = L_1;
		uint32_t L_2 = V_0;
		__this->___count_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod LinkedList_1__ctor_m31909_GenericMethod;
extern "C" void LinkedList_1__ctor_m31909_gshared (LinkedList_1_t4667 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	{
		(( void (*) (LinkedList_1_t4667 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		SerializationInfo_t1208 * L_0 = ___info;
		__this->___si_4 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo));
		Object__ctor_m595(L_1, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		__this->___syncRoot_2 = L_1;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31910_GenericMethod;
extern "C" void LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m31910_gshared (LinkedList_1_t4667 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		(( LinkedListNode_1_t4666 * (*) (LinkedList_1_t4667 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod LinkedList_1_System_Collections_ICollection_CopyTo_m31911_GenericMethod;
extern "C" void LinkedList_1_System_Collections_ICollection_CopyTo_m31911_gshared (LinkedList_1_t4667 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ObjectU5BU5D_t178* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ObjectU5BU5D_t178*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		ObjectU5BU5D_t178* L_1 = V_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t534 * L_2 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_2, (String_t*) &_stringLiteral511, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		ObjectU5BU5D_t178* L_3 = V_0;
		int32_t L_4 = ___index;
		VirtActionInvoker2< ObjectU5BU5D_t178*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), __this, L_3, L_4);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31912_GenericMethod;
extern "C" Object_t* LinkedList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31912_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		Enumerator_t4668  L_0 = (( Enumerator_t4668  (*) (LinkedList_1_t4667 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Enumerator_t4668  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m31913_GenericMethod;
extern "C" Object_t * LinkedList_1_System_Collections_IEnumerable_GetEnumerator_m31913_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		Enumerator_t4668  L_0 = (( Enumerator_t4668  (*) (LinkedList_1_t4667 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Enumerator_t4668  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31914_GenericMethod;
extern "C" bool LinkedList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m31914_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m31915_GenericMethod;
extern "C" bool LinkedList_1_System_Collections_ICollection_get_IsSynchronized_m31915_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.LinkedList`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod LinkedList_1_System_Collections_ICollection_get_SyncRoot_m31916_GenericMethod;
extern "C" Object_t * LinkedList_1_System_Collections_ICollection_get_SyncRoot_m31916_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_2);
		return L_0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::VerifyReferencedNode(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_VerifyReferencedNode_m31917_gshared (LinkedList_1_t4667 * __this, LinkedListNode_1_t4666 * ___node, MethodInfo* method)
{
	{
		LinkedListNode_1_t4666 * L_0 = ___node;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral606, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		LinkedListNode_1_t4666 * L_2 = ___node;
		NullCheck(L_2);
		LinkedList_1_t4667 * L_3 = (( LinkedList_1_t4667 * (*) (LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if ((((Object_t*)(LinkedList_1_t4667 *)L_3) == ((Object_t*)(LinkedList_1_t4667 *)__this)))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t1784 * L_4 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8818(L_4, /*hidden argument*/&InvalidOperationException__ctor_m8818_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		return;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::AddLast(T)
extern "C" LinkedListNode_1_t4666 * LinkedList_1_AddLast_m31918_gshared (LinkedList_1_t4667 * __this, Object_t * ___value, MethodInfo* method)
{
	LinkedListNode_1_t4666 * V_0 = {0};
	{
		LinkedListNode_1_t4666 * L_0 = (__this->___first_3);
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		Object_t * L_1 = ___value;
		LinkedListNode_1_t4666 * L_2 = (LinkedListNode_1_t4666 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (LinkedListNode_1_t4666 *, LinkedList_1_t4667 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_2, __this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		V_0 = L_2;
		LinkedListNode_1_t4666 * L_3 = V_0;
		__this->___first_3 = L_3;
		goto IL_0038;
	}

IL_001f:
	{
		Object_t * L_4 = ___value;
		LinkedListNode_1_t4666 * L_5 = (__this->___first_3);
		NullCheck(L_5);
		LinkedListNode_1_t4666 * L_6 = (L_5->___back_3);
		LinkedListNode_1_t4666 * L_7 = (__this->___first_3);
		LinkedListNode_1_t4666 * L_8 = (LinkedListNode_1_t4666 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (LinkedListNode_1_t4666 *, LinkedList_1_t4667 *, Object_t *, LinkedListNode_1_t4666 *, LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_8, __this, L_4, L_6, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		V_0 = L_8;
	}

IL_0038:
	{
		uint32_t L_9 = (__this->___count_0);
		__this->___count_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
		uint32_t L_10 = (__this->___version_1);
		__this->___version_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		LinkedListNode_1_t4666 * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Clear()
extern Il2CppGenericMethod LinkedList_1_Clear_m31919_GenericMethod;
extern "C" void LinkedList_1_Clear_m31919_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		goto IL_000b;
	}

IL_0005:
	{
		(( void (*) (LinkedList_1_t4667 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
	}

IL_000b:
	{
		LinkedListNode_1_t4666 * L_0 = (__this->___first_3);
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Contains(T)
extern Il2CppGenericMethod LinkedList_1_Contains_m31920_GenericMethod;
extern "C" bool LinkedList_1_Contains_m31920_gshared (LinkedList_1_t4667 * __this, Object_t * ___value, MethodInfo* method)
{
	LinkedListNode_1_t4666 * V_0 = {0};
	{
		LinkedListNode_1_t4666 * L_0 = (__this->___first_3);
		V_0 = L_0;
		LinkedListNode_1_t4666 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		LinkedListNode_1_t4666 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (( Object_t * (*) (LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_4 = L_3;
		NullCheck((*(&___value)));
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, (*(&___value)), ((Object_t *)L_4));
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		LinkedListNode_1_t4666 * L_6 = V_0;
		NullCheck(L_6);
		LinkedListNode_1_t4666 * L_7 = (L_6->___forward_2);
		V_0 = L_7;
		LinkedListNode_1_t4666 * L_8 = V_0;
		LinkedListNode_1_t4666 * L_9 = (__this->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t4666 *)L_8) == ((Object_t*)(LinkedListNode_1_t4666 *)L_9))))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void LinkedList_1_CopyTo_m31921_gshared (LinkedList_1_t4667 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method)
{
	LinkedListNode_1_t4666 * V_0 = {0};
	{
		ObjectU5BU5D_t178* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral511, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index;
		ObjectU5BU5D_t178* L_3 = ___array;
		NullCheck(L_3);
		int32_t L_4 = Array_GetLowerBound_m10808(L_3, 0, /*hidden argument*/&Array_GetLowerBound_m10808_MethodInfo);
		if ((!(((uint32_t)L_2) < ((uint32_t)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_5 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8819(L_5, (String_t*) &_stringLiteral597, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8819_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		ObjectU5BU5D_t178* L_6 = ___array;
		NullCheck(L_6);
		int32_t L_7 = Array_get_Rank_m8821(L_6, /*hidden argument*/&Array_get_Rank_m8821_MethodInfo);
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m8817(L_8, (String_t*) &_stringLiteral511, (String_t*) &_stringLiteral607, /*hidden argument*/&ArgumentException__ctor_m8817_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0045:
	{
		ObjectU5BU5D_t178* L_9 = ___array;
		NullCheck(L_9);
		int32_t L_10 = ___index;
		ObjectU5BU5D_t178* L_11 = ___array;
		NullCheck(L_11);
		int32_t L_12 = Array_GetLowerBound_m10808(L_11, 0, /*hidden argument*/&Array_GetLowerBound_m10808_MethodInfo);
		uint32_t L_13 = (__this->___count_0);
		if ((((int64_t)(((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10))+(int32_t)L_12))))) >= ((int64_t)(((uint64_t)L_13)))))
		{
			goto IL_006a;
		}
	}
	{
		ArgumentException_t534 * L_14 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_14, (String_t*) &_stringLiteral608, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_006a:
	{
		LinkedListNode_1_t4666 * L_15 = (__this->___first_3);
		V_0 = L_15;
		LinkedListNode_1_t4666 * L_16 = (__this->___first_3);
		if (L_16)
		{
			goto IL_007d;
		}
	}
	{
		return;
	}

IL_007d:
	{
		ObjectU5BU5D_t178* L_17 = ___array;
		int32_t L_18 = ___index;
		LinkedListNode_1_t4666 * L_19 = V_0;
		NullCheck(L_19);
		Object_t * L_20 = (( Object_t * (*) (LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, L_18)) = (Object_t *)L_20;
		int32_t L_21 = ___index;
		___index = ((int32_t)((int32_t)L_21+(int32_t)1));
		LinkedListNode_1_t4666 * L_22 = V_0;
		NullCheck(L_22);
		LinkedListNode_1_t4666 * L_23 = (L_22->___forward_2);
		V_0 = L_23;
		LinkedListNode_1_t4666 * L_24 = V_0;
		LinkedListNode_1_t4666 * L_25 = (__this->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t4666 *)L_24) == ((Object_t*)(LinkedListNode_1_t4666 *)L_25))))
		{
			goto IL_007d;
		}
	}
	{
		return;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::Find(T)
extern "C" LinkedListNode_1_t4666 * LinkedList_1_Find_m31922_gshared (LinkedList_1_t4667 * __this, Object_t * ___value, MethodInfo* method)
{
	LinkedListNode_1_t4666 * V_0 = {0};
	{
		LinkedListNode_1_t4666 * L_0 = (__this->___first_3);
		V_0 = L_0;
		LinkedListNode_1_t4666 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (LinkedListNode_1_t4666 *)NULL;
	}

IL_000f:
	{
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		if (((Object_t *)L_3))
		{
			goto IL_002a;
		}
	}
	{
		LinkedListNode_1_t4666 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (( Object_t * (*) (LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_6 = L_5;
		if (!((Object_t *)L_6))
		{
			goto IL_0052;
		}
	}

IL_002a:
	{
		Object_t * L_7 = ___value;
		Object_t * L_8 = L_7;
		if (!((Object_t *)L_8))
		{
			goto IL_0054;
		}
	}
	{
		LinkedListNode_1_t4666 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (( Object_t * (*) (LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_11 = L_10;
		NullCheck((*(&___value)));
		bool L_12 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, (*(&___value)), ((Object_t *)L_11));
		if (!L_12)
		{
			goto IL_0054;
		}
	}

IL_0052:
	{
		LinkedListNode_1_t4666 * L_13 = V_0;
		return L_13;
	}

IL_0054:
	{
		LinkedListNode_1_t4666 * L_14 = V_0;
		NullCheck(L_14);
		LinkedListNode_1_t4666 * L_15 = (L_14->___forward_2);
		V_0 = L_15;
		LinkedListNode_1_t4666 * L_16 = V_0;
		LinkedListNode_1_t4666 * L_17 = (__this->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t4666 *)L_16) == ((Object_t*)(LinkedListNode_1_t4666 *)L_17))))
		{
			goto IL_000f;
		}
	}
	{
		return (LinkedListNode_1_t4666 *)NULL;
	}
}
// System.Collections.Generic.LinkedList`1/Enumerator<T> System.Collections.Generic.LinkedList`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t4668  LinkedList_1_GetEnumerator_m31923_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		Enumerator_t4668  L_0 = {0};
		(( void (*) (Enumerator_t4668 *, LinkedList_1_t4667 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		return L_0;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod LinkedList_1_GetObjectData_m31924_GenericMethod;
extern "C" void LinkedList_1_GetObjectData_m31924_gshared (LinkedList_1_t4667 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	ObjectU5BU5D_t178* V_0 = {0};
	{
		uint32_t L_0 = (__this->___count_0);
		V_0 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), (((uintptr_t)L_0))));
		ObjectU5BU5D_t178* L_1 = V_0;
		VirtActionInvoker2< ObjectU5BU5D_t178*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), __this, L_1, 0);
		SerializationInfo_t1208 * L_2 = ___info;
		ObjectU5BU5D_t178* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_2);
		SerializationInfo_AddValue_m8826(L_2, (String_t*) &_stringLiteral609, (Object_t *)(Object_t *)L_3, L_4, /*hidden argument*/&SerializationInfo_AddValue_m8826_MethodInfo);
		SerializationInfo_t1208 * L_5 = ___info;
		uint32_t L_6 = (__this->___version_1);
		NullCheck(L_5);
		SerializationInfo_AddValue_m13067(L_5, (String_t*) &_stringLiteral610, L_6, /*hidden argument*/&SerializationInfo_AddValue_m13067_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::OnDeserialization(System.Object)
extern Il2CppGenericMethod LinkedList_1_OnDeserialization_m31925_GenericMethod;
extern "C" void LinkedList_1_OnDeserialization_m31925_gshared (LinkedList_1_t4667 * __this, Object_t * ___sender, MethodInfo* method)
{
	ObjectU5BU5D_t178* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t178* V_2 = {0};
	int32_t V_3 = 0;
	{
		SerializationInfo_t1208 * L_0 = (__this->___si_4);
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		SerializationInfo_t1208 * L_1 = (__this->___si_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		NullCheck(L_1);
		Object_t * L_3 = SerializationInfo_GetValue_m8829(L_1, (String_t*) &_stringLiteral609, L_2, /*hidden argument*/&SerializationInfo_GetValue_m8829_MethodInfo);
		V_0 = ((ObjectU5BU5D_t178*)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		ObjectU5BU5D_t178* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_t178* L_5 = V_0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_004e;
	}

IL_003a:
	{
		ObjectU5BU5D_t178* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_6, L_8));
		Object_t * L_9 = V_1;
		(( LinkedListNode_1_t4666 * (*) (LinkedList_1_t4667 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t178* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_0057:
	{
		SerializationInfo_t1208 * L_13 = (__this->___si_4);
		NullCheck(L_13);
		uint32_t L_14 = SerializationInfo_GetUInt32_m13070(L_13, (String_t*) &_stringLiteral610, /*hidden argument*/&SerializationInfo_GetUInt32_m13070_MethodInfo);
		__this->___version_1 = L_14;
		__this->___si_4 = (SerializationInfo_t1208 *)NULL;
	}

IL_0074:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1<System.Object>::Remove(T)
extern Il2CppGenericMethod LinkedList_1_Remove_m31926_GenericMethod;
extern "C" bool LinkedList_1_Remove_m31926_gshared (LinkedList_1_t4667 * __this, Object_t * ___value, MethodInfo* method)
{
	LinkedListNode_1_t4666 * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		LinkedListNode_1_t4666 * L_1 = (( LinkedListNode_1_t4666 * (*) (LinkedList_1_t4667 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		V_0 = L_1;
		LinkedListNode_1_t4666 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 0;
	}

IL_0010:
	{
		LinkedListNode_1_t4666 * L_3 = V_0;
		(( void (*) (LinkedList_1_t4667 *, LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		return 1;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::Remove(System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedList_1_Remove_m31927_gshared (LinkedList_1_t4667 * __this, LinkedListNode_1_t4666 * ___node, MethodInfo* method)
{
	{
		LinkedListNode_1_t4666 * L_0 = ___node;
		(( void (*) (LinkedList_1_t4667 *, LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		uint32_t L_1 = (__this->___count_0);
		__this->___count_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		uint32_t L_2 = (__this->___count_0);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		__this->___first_3 = (LinkedListNode_1_t4666 *)NULL;
	}

IL_0027:
	{
		LinkedListNode_1_t4666 * L_3 = ___node;
		LinkedListNode_1_t4666 * L_4 = (__this->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t4666 *)L_3) == ((Object_t*)(LinkedListNode_1_t4666 *)L_4))))
		{
			goto IL_0044;
		}
	}
	{
		LinkedListNode_1_t4666 * L_5 = (__this->___first_3);
		NullCheck(L_5);
		LinkedListNode_1_t4666 * L_6 = (L_5->___forward_2);
		__this->___first_3 = L_6;
	}

IL_0044:
	{
		uint32_t L_7 = (__this->___version_1);
		__this->___version_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		LinkedListNode_1_t4666 * L_8 = ___node;
		NullCheck(L_8);
		(( void (*) (LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Void System.Collections.Generic.LinkedList`1<System.Object>::RemoveLast()
extern "C" void LinkedList_1_RemoveLast_m31928_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		LinkedListNode_1_t4666 * L_0 = (__this->___first_3);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		LinkedListNode_1_t4666 * L_1 = (__this->___first_3);
		NullCheck(L_1);
		LinkedListNode_1_t4666 * L_2 = (L_1->___back_3);
		(( void (*) (LinkedList_1_t4667 *, LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
	}

IL_001c:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.LinkedList`1<System.Object>::get_Count()
extern Il2CppGenericMethod LinkedList_1_get_Count_m31929_GenericMethod;
extern "C" int32_t LinkedList_1_get_Count_m31929_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___count_0);
		return L_0;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Object>::get_First()
extern Il2CppGenericMethod LinkedList_1_get_First_m31930_GenericMethod;
extern "C" LinkedListNode_1_t4666 * LinkedList_1_get_First_m31930_gshared (LinkedList_1_t4667 * __this, MethodInfo* method)
{
	{
		LinkedListNode_1_t4666 * L_0 = (__this->___first_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m31931_gshared (LinkedListNode_1_t4666 * __this, LinkedList_1_t4667 * ___list, Object_t * ___value, MethodInfo* method)
{
	LinkedListNode_1_t4666 * V_0 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		LinkedList_1_t4667 * L_0 = ___list;
		__this->___container_1 = L_0;
		Object_t * L_1 = ___value;
		__this->___item_0 = L_1;
		V_0 = __this;
		__this->___forward_2 = __this;
		LinkedListNode_1_t4666 * L_2 = V_0;
		__this->___back_3 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m31932_gshared (LinkedListNode_1_t4666 * __this, LinkedList_1_t4667 * ___list, Object_t * ___value, LinkedListNode_1_t4666 * ___previousNode, LinkedListNode_1_t4666 * ___nextNode, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		LinkedList_1_t4667 * L_0 = ___list;
		__this->___container_1 = L_0;
		Object_t * L_1 = ___value;
		__this->___item_0 = L_1;
		LinkedListNode_1_t4666 * L_2 = ___previousNode;
		__this->___back_3 = L_2;
		LinkedListNode_1_t4666 * L_3 = ___nextNode;
		__this->___forward_2 = L_3;
		LinkedListNode_1_t4666 * L_4 = ___previousNode;
		NullCheck(L_4);
		L_4->___forward_2 = __this;
		LinkedListNode_1_t4666 * L_5 = ___nextNode;
		NullCheck(L_5);
		L_5->___back_3 = __this;
		return;
	}
}
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m31933_gshared (LinkedListNode_1_t4666 * __this, MethodInfo* method)
{
	LinkedListNode_1_t4666 * V_0 = {0};
	{
		LinkedListNode_1_t4666 * L_0 = (__this->___back_3);
		LinkedListNode_1_t4666 * L_1 = (__this->___forward_2);
		NullCheck(L_0);
		L_0->___forward_2 = L_1;
		LinkedListNode_1_t4666 * L_2 = (__this->___forward_2);
		LinkedListNode_1_t4666 * L_3 = (__this->___back_3);
		NullCheck(L_2);
		L_2->___back_3 = L_3;
		V_0 = (LinkedListNode_1_t4666 *)NULL;
		__this->___back_3 = (LinkedListNode_1_t4666 *)NULL;
		LinkedListNode_1_t4666 * L_4 = V_0;
		__this->___forward_2 = L_4;
		__this->___container_1 = (LinkedList_1_t4667 *)NULL;
		return;
	}
}
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t4667 * LinkedListNode_1_get_List_m31934_gshared (LinkedListNode_1_t4666 * __this, MethodInfo* method)
{
	{
		LinkedList_1_t4667 * L_0 = (__this->___container_1);
		return L_0;
	}
}
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern Il2CppGenericMethod LinkedListNode_1_get_Next_m31935_GenericMethod;
extern "C" LinkedListNode_1_t4666 * LinkedListNode_1_get_Next_m31935_gshared (LinkedListNode_1_t4666 * __this, MethodInfo* method)
{
	LinkedListNode_1_t4666 * G_B4_0 = {0};
	{
		LinkedList_1_t4667 * L_0 = (__this->___container_1);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		LinkedListNode_1_t4666 * L_1 = (__this->___forward_2);
		LinkedList_1_t4667 * L_2 = (__this->___container_1);
		NullCheck(L_2);
		LinkedListNode_1_t4666 * L_3 = (L_2->___first_3);
		if ((((Object_t*)(LinkedListNode_1_t4666 *)L_1) == ((Object_t*)(LinkedListNode_1_t4666 *)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		LinkedListNode_1_t4666 * L_4 = (__this->___forward_2);
		G_B4_0 = L_4;
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = ((LinkedListNode_1_t4666 *)(NULL));
	}

IL_002d:
	{
		return G_B4_0;
	}
}
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m31936_gshared (LinkedListNode_1_t4666 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___item_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m31939_GenericMethod;


// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>)
extern "C" void Enumerator__ctor_m31937_gshared (Enumerator_t4668 * __this, LinkedList_1_t4667 * ___parent, MethodInfo* method)
{
	{
		LinkedList_1_t4667 * L_0 = ___parent;
		__this->___list_0 = L_0;
		__this->___current_1 = (LinkedListNode_1_t4666 *)NULL;
		__this->___index_2 = (-1);
		LinkedList_1_t4667 * L_1 = ___parent;
		NullCheck(L_1);
		uint32_t L_2 = (L_1->___version_1);
		__this->___version_3 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m31938_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31938_gshared (Enumerator_t4668 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t4668 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// T System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m31939_gshared (Enumerator_t4668 * __this, MethodInfo* method)
{
	{
		LinkedList_1_t4667 * L_0 = (__this->___list_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t1984 * L_1 = (ObjectDisposedException_t1984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1984_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10051(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m10051_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		LinkedListNode_1_t4666 * L_2 = (__this->___current_1);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t1784 * L_3 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8818(L_3, /*hidden argument*/&InvalidOperationException__ctor_m8818_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0023:
	{
		LinkedListNode_1_t4666 * L_4 = (__this->___current_1);
		NullCheck(L_4);
		Object_t * L_5 = (( Object_t * (*) (LinkedListNode_1_t4666 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_5;
	}
}
// System.Boolean System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m31940_GenericMethod;
extern "C" bool Enumerator_MoveNext_m31940_gshared (Enumerator_t4668 * __this, MethodInfo* method)
{
	{
		LinkedList_1_t4667 * L_0 = (__this->___list_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t1984 * L_1 = (ObjectDisposedException_t1984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1984_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10051(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m10051_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		uint32_t L_2 = (__this->___version_3);
		LinkedList_1_t4667 * L_3 = (__this->___list_0);
		NullCheck(L_3);
		uint32_t L_4 = (L_3->___version_1);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		InvalidOperationException_t1784 * L_5 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_5, (String_t*) &_stringLiteral611, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0033:
	{
		LinkedListNode_1_t4666 * L_6 = (__this->___current_1);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		LinkedList_1_t4667 * L_7 = (__this->___list_0);
		NullCheck(L_7);
		LinkedListNode_1_t4666 * L_8 = (L_7->___first_3);
		__this->___current_1 = L_8;
		goto IL_0082;
	}

IL_0054:
	{
		LinkedListNode_1_t4666 * L_9 = (__this->___current_1);
		NullCheck(L_9);
		LinkedListNode_1_t4666 * L_10 = (L_9->___forward_2);
		__this->___current_1 = L_10;
		LinkedListNode_1_t4666 * L_11 = (__this->___current_1);
		LinkedList_1_t4667 * L_12 = (__this->___list_0);
		NullCheck(L_12);
		LinkedListNode_1_t4666 * L_13 = (L_12->___first_3);
		if ((!(((Object_t*)(LinkedListNode_1_t4666 *)L_11) == ((Object_t*)(LinkedListNode_1_t4666 *)L_13))))
		{
			goto IL_0082;
		}
	}
	{
		__this->___current_1 = (LinkedListNode_1_t4666 *)NULL;
	}

IL_0082:
	{
		LinkedListNode_1_t4666 * L_14 = (__this->___current_1);
		if (L_14)
		{
			goto IL_0096;
		}
	}
	{
		__this->___index_2 = (-1);
		return 0;
	}

IL_0096:
	{
		int32_t L_15 = (__this->___index_2);
		__this->___index_2 = ((int32_t)((int32_t)L_15+(int32_t)1));
		return 1;
	}
}
// System.Void System.Collections.Generic.LinkedList`1/Enumerator<System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m31941_GenericMethod;
extern "C" void Enumerator_Dispose_m31941_gshared (Enumerator_t4668 * __this, MethodInfo* method)
{
	{
		LinkedList_1_t4667 * L_0 = (__this->___list_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectDisposedException_t1984 * L_1 = (ObjectDisposedException_t1984 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1984_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m10051(L_1, (String_t*)NULL, /*hidden argument*/&ObjectDisposedException__ctor_m10051_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		__this->___current_1 = (LinkedListNode_1_t4666 *)NULL;
		__this->___list_0 = (LinkedList_1_t4667 *)NULL;
		return;
	}
}
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Queue_1_t4669_il2cpp_TypeInfo;
// System.Collections.Generic.Queue`1<System.Object>
#include "System_System_Collections_Generic_Queue_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"
extern TypeInfo ArrayTypeMismatchException_t2474_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4670_il2cpp_TypeInfo;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0MethodDeclarations.h"
extern Il2CppType Enumerator_t4670_0_0_0;
extern MethodInfo ArgumentNullException__ctor_m13777_MethodInfo;
extern MethodInfo Math_Min_m14193_MethodInfo;
extern MethodInfo Enumerator__ctor_m31954_MethodInfo;
extern Il2CppGenericMethod Queue_1_GetEnumerator_m31953_GenericMethod;
extern Il2CppGenericMethod Queue_1_SetCapacity_m31951_GenericMethod;
extern Il2CppGenericMethod Queue_1_CopyTo_m31949_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m31954_GenericMethod;


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern Il2CppGenericMethod Queue_1__ctor_m31942_GenericMethod;
extern "C" void Queue_1__ctor_m31942_gshared (Queue_1_t4669 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		__this->____array_0 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), 0));
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Queue_1_System_Collections_ICollection_CopyTo_m31943_GenericMethod;
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m31943_gshared (Queue_1_t4669 * __this, Array_t * ___array, int32_t ___idx, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Array_t * L_0 = ___array;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m13777(L_1, /*hidden argument*/&ArgumentNullException__ctor_m13777_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000c:
	{
		int32_t L_2 = ___idx;
		Array_t * L_3 = ___array;
		NullCheck(L_3);
		int32_t L_4 = Array_get_Length_m8815(L_3, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		if ((!(((uint32_t)L_2) > ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_5 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8994(L_5, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8994_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001e:
	{
		Array_t * L_6 = ___array;
		NullCheck(L_6);
		int32_t L_7 = Array_get_Length_m8815(L_6, /*hidden argument*/&Array_get_Length_m8815_MethodInfo);
		int32_t L_8 = ___idx;
		int32_t L_9 = (__this->____size_3);
		if ((((int32_t)((int32_t)((int32_t)L_7-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_10 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8994(L_10, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8994_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0037:
	{
		int32_t L_11 = (__this->____size_3);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t178* L_12 = (__this->____array_0);
			NullCheck(L_12);
			V_0 = (((int32_t)(((Array_t *)L_12)->max_length)));
			int32_t L_13 = V_0;
			int32_t L_14 = (__this->____head_1);
			V_1 = ((int32_t)((int32_t)L_13-(int32_t)L_14));
			ObjectU5BU5D_t178* L_15 = (__this->____array_0);
			int32_t L_16 = (__this->____head_1);
			Array_t * L_17 = ___array;
			int32_t L_18 = ___idx;
			int32_t L_19 = (__this->____size_3);
			int32_t L_20 = V_1;
			int32_t L_21 = Math_Min_m14193(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Math_Min_m14193_MethodInfo);
			Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, L_17, L_18, L_21, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
			int32_t L_22 = (__this->____size_3);
			int32_t L_23 = V_1;
			if ((((int32_t)L_22) <= ((int32_t)L_23)))
			{
				goto IL_0098;
			}
		}

IL_0080:
		{
			ObjectU5BU5D_t178* L_24 = (__this->____array_0);
			Array_t * L_25 = ___array;
			int32_t L_26 = ___idx;
			int32_t L_27 = V_1;
			int32_t L_28 = (__this->____size_3);
			int32_t L_29 = V_1;
			Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_24, 0, L_25, ((int32_t)((int32_t)L_26+(int32_t)L_27)), ((int32_t)((int32_t)L_28-(int32_t)L_29)), /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		}

IL_0098:
		{
			goto IL_00a9;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&ArrayTypeMismatchException_t2474_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_009d;
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.ArrayTypeMismatchException)
		ArgumentException_t534 * L_30 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_30, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_30);
		goto IL_00a9;
	} // end catch (depth: 1)

IL_00a9:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Queue_1_System_Collections_ICollection_get_IsSynchronized_m31944_GenericMethod;
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m31944_gshared (Queue_1_t4669 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Queue_1_System_Collections_ICollection_get_SyncRoot_m31945_GenericMethod;
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m31945_gshared (Queue_1_t4669 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31946_GenericMethod;
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m31946_gshared (Queue_1_t4669 * __this, MethodInfo* method)
{
	{
		Enumerator_t4670  L_0 = (( Enumerator_t4670  (*) (Queue_1_t4669 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4670  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Queue_1_System_Collections_IEnumerable_GetEnumerator_m31947_GenericMethod;
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m31947_gshared (Queue_1_t4669 * __this, MethodInfo* method)
{
	{
		Enumerator_t4670  L_0 = (( Enumerator_t4670  (*) (Queue_1_t4669 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4670  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
extern Il2CppGenericMethod Queue_1_Clear_m31948_GenericMethod;
extern "C" void Queue_1_Clear_m31948_gshared (Queue_1_t4669 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t178* L_0 = (__this->____array_0);
		ObjectU5BU5D_t178* L_1 = (__this->____array_0);
		NullCheck(L_1);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		int32_t L_2 = 0;
		V_0 = L_2;
		__this->____size_3 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____tail_2 = L_4;
		int32_t L_5 = V_0;
		__this->____head_1 = L_5;
		int32_t L_6 = (__this->____version_4);
		__this->____version_4 = ((int32_t)((int32_t)L_6+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m31949_gshared (Queue_1_t4669 * __this, ObjectU5BU5D_t178* ___array, int32_t ___idx, MethodInfo* method)
{
	{
		ObjectU5BU5D_t178* L_0 = ___array;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m13777(L_1, /*hidden argument*/&ArgumentNullException__ctor_m13777_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000c:
	{
		ObjectU5BU5D_t178* L_2 = ___array;
		int32_t L_3 = ___idx;
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(&ICollection_CopyTo_m8807_MethodInfo, __this, (Array_t *)(Array_t *)L_2, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern Il2CppGenericMethod Queue_1_Enqueue_m31950_GenericMethod;
extern "C" void Queue_1_Enqueue_m31950_gshared (Queue_1_t4669 * __this, Object_t * ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_3);
		ObjectU5BU5D_t178* L_1 = (__this->____array_0);
		NullCheck(L_1);
		if ((((int32_t)L_0) == ((int32_t)(((int32_t)(((Array_t *)L_1)->max_length))))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = (__this->____tail_2);
		ObjectU5BU5D_t178* L_3 = (__this->____array_0);
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0045;
		}
	}

IL_0026:
	{
		int32_t L_4 = (__this->____size_3);
		int32_t L_5 = (__this->____tail_2);
		int32_t L_6 = Math_Max_m10043(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		int32_t L_7 = Math_Max_m10043(NULL /*static, unused*/, ((int32_t)((int32_t)L_6*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		(( void (*) (Queue_1_t4669 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0045:
	{
		ObjectU5BU5D_t178* L_8 = (__this->____array_0);
		int32_t L_9 = (__this->____tail_2);
		Object_t * L_10 = ___item;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)) = (Object_t *)L_10;
		int32_t L_11 = (__this->____tail_2);
		int32_t L_12 = ((int32_t)((int32_t)L_11+(int32_t)1));
		V_0 = L_12;
		__this->____tail_2 = L_12;
		int32_t L_13 = V_0;
		ObjectU5BU5D_t178* L_14 = (__this->____array_0);
		NullCheck(L_14);
		if ((!(((uint32_t)L_13) == ((uint32_t)(((int32_t)(((Array_t *)L_14)->max_length)))))))
		{
			goto IL_007c;
		}
	}
	{
		__this->____tail_2 = 0;
	}

IL_007c:
	{
		int32_t L_15 = (__this->____size_3);
		__this->____size_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = (__this->____version_4);
		__this->____version_4 = ((int32_t)((int32_t)L_16+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m31951_gshared (Queue_1_t4669 * __this, int32_t ___new_size, MethodInfo* method)
{
	ObjectU5BU5D_t178* V_0 = {0};
	{
		int32_t L_0 = ___new_size;
		ObjectU5BU5D_t178* L_1 = (__this->____array_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		int32_t L_2 = ___new_size;
		int32_t L_3 = (__this->____size_3);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t1784 * L_4 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_4, (String_t*) &_stringLiteral612, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___new_size;
		V_0 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_5));
		int32_t L_6 = (__this->____size_3);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t178* L_7 = V_0;
		(( void (*) (Queue_1_t4669 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, L_7, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	}

IL_0041:
	{
		ObjectU5BU5D_t178* L_8 = V_0;
		__this->____array_0 = L_8;
		int32_t L_9 = (__this->____size_3);
		__this->____tail_2 = L_9;
		__this->____head_1 = 0;
		int32_t L_10 = (__this->____version_4);
		__this->____version_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
		return;
	}
}
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern Il2CppGenericMethod Queue_1_get_Count_m31952_GenericMethod;
extern "C" int32_t Queue_1_get_Count_m31952_gshared (Queue_1_t4669 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_3);
		return L_0;
	}
}
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t4670  Queue_1_GetEnumerator_m31953_gshared (Queue_1_t4669 * __this, MethodInfo* method)
{
	{
		Enumerator_t4670  L_0 = {0};
		(( void (*) (Enumerator_t4670 *, Queue_1_t4669 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_Current_m31958_GenericMethod;


// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.Queue`1<T>)
extern "C" void Enumerator__ctor_m31954_gshared (Enumerator_t4670 * __this, Queue_1_t4669 * ___q, MethodInfo* method)
{
	{
		Queue_1_t4669 * L_0 = ___q;
		__this->___q_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		Queue_1_t4669 * L_1 = ___q;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_4);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Queue`1/Enumerator<System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m31955_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m31955_gshared (Enumerator_t4670 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t4670 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m31956_GenericMethod;
extern "C" void Enumerator_Dispose_m31956_gshared (Enumerator_t4670 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m31957_GenericMethod;
extern "C" bool Enumerator_MoveNext_m31957_gshared (Enumerator_t4670 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (__this->___ver_2);
		Queue_1_t4669 * L_1 = (__this->___q_0);
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_4);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t1784 * L_3 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8818(L_3, /*hidden argument*/&InvalidOperationException__ctor_m8818_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		int32_t L_4 = (__this->___idx_1);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_003a;
		}
	}
	{
		Queue_1_t4669 * L_5 = (__this->___q_0);
		NullCheck(L_5);
		int32_t L_6 = (L_5->____size_3);
		__this->___idx_1 = L_6;
	}

IL_003a:
	{
		int32_t L_7 = (__this->___idx_1);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = (__this->___idx_1);
		int32_t L_9 = ((int32_t)((int32_t)L_8-(int32_t)1));
		V_0 = L_9;
		__this->___idx_1 = L_9;
		int32_t L_10 = V_0;
		G_B7_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 0;
	}

IL_0060:
	{
		return G_B7_0;
	}
}
// T System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
extern "C" Object_t * Enumerator_get_Current_m31958_gshared (Enumerator_t4670 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t1784 * L_1 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8818(L_1, /*hidden argument*/&InvalidOperationException__ctor_m8818_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0012:
	{
		Queue_1_t4669 * L_2 = (__this->___q_0);
		NullCheck(L_2);
		ObjectU5BU5D_t178* L_3 = (L_2->____array_0);
		Queue_1_t4669 * L_4 = (__this->___q_0);
		NullCheck(L_4);
		int32_t L_5 = (L_4->____size_3);
		int32_t L_6 = (__this->___idx_1);
		Queue_1_t4669 * L_7 = (__this->___q_0);
		NullCheck(L_7);
		int32_t L_8 = (L_7->____head_1);
		Queue_1_t4669 * L_9 = (__this->___q_0);
		NullCheck(L_9);
		ObjectU5BU5D_t178* L_10 = (L_9->____array_0);
		NullCheck(L_10);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)1))-(int32_t)L_6))+(int32_t)L_8))%(int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))));
		int32_t L_11 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)1))-(int32_t)L_6))+(int32_t)L_8))%(int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))));
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_11));
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_30.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t1650_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_30MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_89.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_89.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_213.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_214.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__44.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_44.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7.h"
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_88.h"
extern TypeInfo IEqualityComparer_1_t3044_il2cpp_TypeInfo;
extern TypeInfo Link_t2110_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t2111_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t4690_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t4694_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t6248_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6249_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5135_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t4685_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t5134_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1610_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4671_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4697_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4692_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t4699_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3219_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2900_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t208_il2cpp_TypeInfo;
extern TypeInfo BooleanU5BU5D_t1651_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1603_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t4700_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t6250_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_89MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_89MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_213MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_214MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__44MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_44MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.String>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_7MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_88MethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1650_0_0_0;
extern Il2CppType IEqualityComparer_1_t3044_0_0_0;
extern Il2CppType KeyCollection_t4690_0_0_0;
extern Il2CppType ValueCollection_t4694_0_0_0;
extern Il2CppType ICollection_1_t6248_0_0_0;
extern Il2CppType IEnumerable_1_t6249_0_0_0;
extern Il2CppType IEnumerator_1_t5135_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t5134_0_0_0;
extern Il2CppType KeyValuePair_2_t4685_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t5178_0_0_0;
extern Il2CppType Transform_1_t4671_0_0_0;
extern Il2CppType Transform_1_t4697_0_0_0;
extern Il2CppType Enumerator_t4692_0_0_0;
extern Il2CppType ShimEnumerator_t4699_0_0_0;
extern Il2CppType EqualityComparer_1_t3219_0_0_0;
extern Il2CppType LinkU5BU5D_t2900_0_0_0;
extern Il2CppType StringU5BU5D_t208_0_0_0;
extern Il2CppType BooleanU5BU5D_t1651_0_0_0;
extern Il2CppType EqualityComparer_1_t4700_0_0_0;
extern Il2CppType IEqualityComparer_1_t6250_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t175_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m32031_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m32008_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m32010_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38901_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38902_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m11463_MethodInfo;
extern MethodInfo KeyCollection__ctor_m32166_MethodInfo;
extern MethodInfo ValueCollection__ctor_m32201_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39364_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39365_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39366_MethodInfo;
extern MethodInfo Dictionary_2_Add_m8863_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m32039_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m32055_MethodInfo;
extern MethodInfo Transform_1__ctor_m32224_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m32018_MethodInfo;
extern MethodInfo Transform_1__ctor_m32228_MethodInfo;
extern MethodInfo Enumerator__ctor_m32185_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m32236_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m32006_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m32140_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m11630_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m39367_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8828_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8841_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m8840_MethodInfo;
extern MethodInfo Type_ToString_m10928_MethodInfo;
extern MethodInfo String_Concat_m731_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m32041_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m39368_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m8812_MethodInfo;
struct Dictionary_2_t1650;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m37552 (Dictionary_2_t1650 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t4671 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t1650;
struct Dictionary_2_t4673;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_215.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4685_m37555_gshared (Dictionary_2_t4673 * __this, Array_t * p0, int32_t p1, Transform_1_t4698 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4685_m37555(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, Transform_1_t4698 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4685_m37555_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4685_m37554(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t1650 *, Array_t *, int32_t, Transform_1_t4697 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4685_m37555_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t1650;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4685_TisKeyValuePair_2_t4685_m37557 (Dictionary_2_t1650 * __this, KeyValuePair_2U5BU5D_t5134* p0, int32_t p1, Transform_1_t4697 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m32043_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m32045_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m32031_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m32047_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m32008_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m32049_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m32010_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38901_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38902_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m32026_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m32166_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m32201_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m32012_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m31966_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39364_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39365_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39366_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m32141_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m32143_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m8863_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m32039_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m32051_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m32024_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m32016_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m32055_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m32224_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m37552_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m32018_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m32228_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4685_m37554_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m32185_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m32236_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16946_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m32014_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m32006_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m32140_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4685_TisKeyValuePair_2_t4685_m37557_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m32246_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m39367_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m32041_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m39368_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t4673_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_87.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_87.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_209.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_210.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__43.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_43.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_69.h"
extern TypeInfo IEqualityComparer_1_t3366_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t4676_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t4680_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t6251_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6252_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5139_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t4674_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t5138_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4672_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4683_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4678_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t4684_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3081_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t679_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t4330_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t6058_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_87MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_87MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_209MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_210MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__43MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_43MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Byte>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_69MethodDeclarations.h"
extern Il2CppType Dictionary_2_t4673_0_0_0;
extern Il2CppType IEqualityComparer_1_t3366_0_0_0;
extern Il2CppType KeyCollection_t4676_0_0_0;
extern Il2CppType ValueCollection_t4680_0_0_0;
extern Il2CppType ICollection_1_t6251_0_0_0;
extern Il2CppType IEnumerable_1_t6252_0_0_0;
extern Il2CppType IEnumerator_1_t5139_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t5138_0_0_0;
extern Il2CppType KeyValuePair_2_t4674_0_0_0;
extern Il2CppType Transform_1_t4672_0_0_0;
extern Il2CppType Transform_1_t4683_0_0_0;
extern Il2CppType Enumerator_t4678_0_0_0;
extern Il2CppType ShimEnumerator_t4684_0_0_0;
extern Il2CppType EqualityComparer_1_t3081_0_0_0;
extern Il2CppType ByteU5BU5D_t679_0_0_0;
extern Il2CppType EqualityComparer_1_t4330_0_0_0;
extern Il2CppType IEqualityComparer_1_t6058_0_0_0;
extern Il2CppType Byte_t535_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m32032_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m32009_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m32011_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38514_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m34741_MethodInfo;
extern MethodInfo KeyCollection__ctor_m32068_MethodInfo;
extern MethodInfo ValueCollection__ctor_m32103_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39369_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39370_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39371_MethodInfo;
extern MethodInfo Dictionary_2_Add_m32028_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m32040_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m32056_MethodInfo;
extern MethodInfo Transform_1__ctor_m32126_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m32019_MethodInfo;
extern MethodInfo Transform_1__ctor_m32130_MethodInfo;
extern MethodInfo Enumerator__ctor_m32087_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m32134_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m32007_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m32057_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m39372_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m32042_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m36628_MethodInfo;
struct Dictionary_2_t4673;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m37498 (Dictionary_2_t4673 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t4672 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t4673;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4674_m37500_gshared (Dictionary_2_t4673 * __this, Array_t * p0, int32_t p1, Transform_1_t4683 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4674_m37500(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, Transform_1_t4683 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4674_m37500_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t4673;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4674_TisKeyValuePair_2_t4674_m37501 (Dictionary_2_t4673 * __this, KeyValuePair_2U5BU5D_t5138* p0, int32_t p1, Transform_1_t4683 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m32044_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m32046_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m32032_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m32048_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m32009_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m32050_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m32011_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38514_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34741_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m32027_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m32068_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m32103_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m32013_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m31967_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39369_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39370_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39371_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m32058_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m32060_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m32028_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m32040_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m32052_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m32025_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m32017_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m32056_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m32126_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m37498_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m32019_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m32130_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4674_m37500_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m32087_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m32134_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15590_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m32015_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m32007_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m32057_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4674_TisKeyValuePair_2_t4674_m37501_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m28776_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m39372_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m32042_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m36628_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m31960_GenericMethod;
extern "C" void Dictionary_2__ctor_m31960_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		(( void (*) (Dictionary_2_t4673 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m31961_GenericMethod;
extern "C" void Dictionary_2__ctor_m31961_gshared (Dictionary_2_t4673 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t4673 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m31963_GenericMethod;
extern "C" void Dictionary_2__ctor_m31963_gshared (Dictionary_2_t4673 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t4673 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m31965_GenericMethod;
extern "C" void Dictionary_2__ctor_m31965_gshared (Dictionary_2_t4673 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t4673 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m31967_gshared (Dictionary_2_t4673 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t4674  V_1 = {0};
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
		(( void (*) (Dictionary_2_t4673 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t4674  L_9 = (KeyValuePair_2_t4674 )InterfaceFuncInvoker0< KeyValuePair_2_t4674  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			uint8_t L_11 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m31969_GenericMethod;
extern "C" void Dictionary_2__ctor_m31969_gshared (Dictionary_2_t4673 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		SerializationInfo_t1208 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31971_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31971_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		KeyCollection_t4676 * L_0 = (( KeyCollection_t4676 * (*) (Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31973_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m31973_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		ValueCollection_t4680 * L_0 = (( ValueCollection_t4680 * (*) (Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m31975_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m31975_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method)
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
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		uint8_t L_5 = (uint8_t)VirtFuncInvoker1< uint8_t, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		uint8_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m31977_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m31977_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m31979_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m31979_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		uint8_t L_3 = (( uint8_t (*) (Dictionary_2_t4673 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m31981_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m31981_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m31983_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m31983_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31985_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m31985_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31987_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m31987_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31989_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m31989_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31991_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m31991_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2_t4674  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31993_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m31993_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2_t4674  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t4674  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t4673 *, KeyValuePair_2_t4674 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31995_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m31995_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2U5BU5D_t5138* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t5138* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t4673 *, KeyValuePair_2U5BU5D_t5138*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31997_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m31997_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2_t4674  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t4674  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t4673 *, KeyValuePair_2_t4674 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m31999_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m31999_gshared (Dictionary_2_t4673 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m31999_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m31999_init)
	{
		DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t5178_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m31999_init = true;
	}
	KeyValuePair_2U5BU5D_t5138* V_0 = {0};
	DictionaryEntryU5BU5D_t5178* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t5178* G_B5_1 = {0};
	Dictionary_2_t4673 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t5178* G_B4_1 = {0};
	Dictionary_2_t4673 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t5138*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t5138* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t5138* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t4673 *, KeyValuePair_2U5BU5D_t5138*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t4672 * L_10 = ((Dictionary_2_t4673_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t4673 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t4673 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t4672 * L_12 = (Transform_1_t4672 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t4672 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t4673_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t4673 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t4672 * L_13 = ((Dictionary_2_t4673_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t4673 *, DictionaryEntryU5BU5D_t5178*, int32_t, Transform_1_t4672 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t4683 * L_17 = (Transform_1_t4683 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t4683 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, Transform_1_t4683 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32001_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m32001_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678  L_0 = {0};
		(( void (*) (Enumerator_t4678 *, Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t4678  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32003_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m32003_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678  L_0 = {0};
		(( void (*) (Enumerator_t4678 *, Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t4678  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32005_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m32005_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t4684 * L_0 = (ShimEnumerator_t4684 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t4684 *, Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m32007_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m32009_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method)
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
		ByteU5BU5D_t679* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_22));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m32011_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
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
		(( void (*) (Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
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
		ByteU5BU5D_t679* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		uint8_t L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_70, L_71)) = (uint8_t)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t3081_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m32013_gshared (Dictionary_2_t4673 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m32013_init;
	if (!Dictionary_2_Init_m32013_init)
	{
		EqualityComparer_1_t3081_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3081_0_0_0);
		Dictionary_2_Init_m32013_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t4673 * G_B4_0 = {0};
	Dictionary_2_t4673 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t4673 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t4673 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t4673 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t4673 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3081_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3081 * L_5 = (( EqualityComparer_1_t3081 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t4673 *)(G_B4_0));
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
		(( void (*) (Dictionary_2_t4673 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2900_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m32015_gshared (Dictionary_2_t4673 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m32015_init;
	if (!Dictionary_2_InitArrays_m32015_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		LinkU5BU5D_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2900_0_0_0);
		Dictionary_2_InitArrays_m32015_init = true;
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
		__this->___valueSlots_7 = ((ByteU5BU5D_t679*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m32017_gshared (Dictionary_2_t4673 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4674  Dictionary_2_make_pair_m32019_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		uint8_t L_1 = ___value;
		KeyValuePair_2_t4674  L_2 = {0};
		(( void (*) (KeyValuePair_2_t4674 *, Object_t *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m32021_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m32021_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m32023_GenericMethod;
extern "C" uint8_t Dictionary_2_pick_value_m32023_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m32025_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2U5BU5D_t5138* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t5138* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t5138* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t4683 * L_5 = (Transform_1_t4683 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t4683 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t4673 *, KeyValuePair_2U5BU5D_t5138*, int32_t, Transform_1_t4683 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2900_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m32027_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m32027_init;
	if (!Dictionary_2_Resize_m32027_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		LinkU5BU5D_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2900_0_0_0);
		Dictionary_2_Resize_m32027_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t34* V_1 = {0};
	LinkU5BU5D_t2900* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t178* V_7 = {0};
	ByteU5BU5D_t679* V_8 = {0};
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
		V_8 = ((ByteU5BU5D_t679*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t178* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t178* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		ByteU5BU5D_t679* L_40 = (__this->___valueSlots_7);
		ByteU5BU5D_t679* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		ObjectU5BU5D_t178* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ByteU5BU5D_t679* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m32028_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
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
		(( void (*) (Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
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
		ByteU5BU5D_t679* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		uint8_t L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)) = (uint8_t)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m32030_GenericMethod;
extern "C" void Dictionary_2_Clear_m32030_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
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
		ByteU5BU5D_t679* L_4 = (__this->___valueSlots_7);
		ByteU5BU5D_t679* L_5 = (__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m32032_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m32034_GenericMethod;
extern TypeInfo* EqualityComparer_1_t4330_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m32034_gshared (Dictionary_2_t4673 * __this, uint8_t ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m32034_init;
	if (!Dictionary_2_ContainsValue_m32034_init)
	{
		EqualityComparer_1_t4330_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t4330_0_0_0);
		Dictionary_2_ContainsValue_m32034_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4330_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4330 * L_0 = (( EqualityComparer_1_t4330 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
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
		ByteU5BU5D_t679* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		uint8_t L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7)), L_8);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m32036_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m32036_gshared (Dictionary_2_t4673 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t5138* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t5138*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t5138*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t5138* L_8 = V_0;
		(( void (*) (Dictionary_2_t4673 *, KeyValuePair_2U5BU5D_t5138*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1208 * L_9 = ___info;
		Int32U5BU5D_t34* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m8828(L_9, (String_t*) &_stringLiteral1575, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m8828_MethodInfo);
		SerializationInfo_t1208 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t5138* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m8841(L_11, (String_t*) &_stringLiteral1576, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m8841_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m32038_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m32038_gshared (Dictionary_2_t4673 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t5138* V_1 = {0};
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
		V_1 = ((KeyValuePair_2U5BU5D_t5138*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (Dictionary_2_t4673 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t5138* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t5138* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t4674 *)(KeyValuePair_2_t4674 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t5138* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		uint8_t L_19 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t4674 *)(KeyValuePair_2_t4674 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t5138* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m32040_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	uint8_t V_5 = 0x0;
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
		ByteU5BU5D_t679* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&Byte_t535_il2cpp_TypeInfo), (&V_5));
		uint8_t L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_50)) = (uint8_t)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m32042_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, uint8_t* ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
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
		uint8_t* L_20 = ___value;
		ByteU5BU5D_t679* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_23));
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
		uint8_t* L_28 = ___value;
		Initobj (InitializedTypeInfo(&Byte_t535_il2cpp_TypeInfo), (&V_2));
		uint8_t L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t4676 * Dictionary_2_get_Keys_m32044_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		KeyCollection_t4676 * L_0 = (KeyCollection_t4676 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t4676 *, Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t4680 * Dictionary_2_get_Values_m32046_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		ValueCollection_t4680 * L_0 = (ValueCollection_t4680 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t4680 *, Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m32048_gshared (Dictionary_2_t4673 * __this, Object_t * ___key, MethodInfo* method)
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
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m32050_gshared (Dictionary_2_t4673 * __this, Object_t * ___value, MethodInfo* method)
{
	uint8_t V_0 = 0x0;
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
		Initobj (InitializedTypeInfo(&Byte_t535_il2cpp_TypeInfo), (&V_0));
		uint8_t L_3 = V_0;
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
		return ((*(uint8_t*)((uint8_t*)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t4330_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m32052_gshared (Dictionary_2_t4673 * __this, KeyValuePair_2_t4674  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m32052_init;
	if (!Dictionary_2_ContainsKeyValuePair_m32052_init)
	{
		EqualityComparer_1_t4330_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t4330_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m32052_init = true;
	}
	uint8_t V_0 = 0x0;
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, uint8_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4330_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4330 * L_2 = (( EqualityComparer_1_t4330 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		uint8_t L_3 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m32054_GenericMethod;
extern "C" Enumerator_t4678  Dictionary_2_GetEnumerator_m32054_gshared (Dictionary_2_t4673 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678  L_0 = {0};
		(( void (*) (Enumerator_t4678 *, Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m32056_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		uint8_t L_2 = ___value;
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_3);
		DictionaryEntry_t1610  L_5 = {0};
		DictionaryEntry__ctor_m8812(&L_5, ((Object_t *)L_1), L_4, /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_ToString_m1073_MethodInfo;
extern MethodInfo String_Concat_m7291_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m32059_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m32061_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m32057_gshared (KeyValuePair_2_t4674 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t4674 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint8_t L_1 = ___value;
		(( void (*) (KeyValuePair_2_t4674 *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m32058_gshared (KeyValuePair_2_t4674 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m32059_gshared (KeyValuePair_2_t4674 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::get_Value()
extern "C" uint8_t KeyValuePair_2_get_Value_m32060_gshared (KeyValuePair_2_t4674 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m32061_gshared (KeyValuePair_2_t4674 * __this, uint8_t ___value, MethodInfo* method)
{
	{
		uint8_t L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m32062_GenericMethod;
extern TypeInfo* StringU5BU5D_t208_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m32062_gshared (KeyValuePair_2_t4674 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m32062_init;
	if (!KeyValuePair_2_ToString_m32062_init)
	{
		StringU5BU5D_t208_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t208_0_0_0);
		KeyValuePair_2_ToString_m32062_init = true;
	}
	Object_t * V_0 = {0};
	uint8_t V_1 = 0x0;
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		uint8_t L_9 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_10 = L_9;
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
		uint8_t L_12 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_270.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4675_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_270MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4675_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>(System.Int32)
extern "C" KeyValuePair_2_t4674  Array_InternalArray__get_Item_TisKeyValuePair_2_t4674_m37483_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t4674_m37483(__this, p0, method) (( KeyValuePair_2_t4674  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t4674_m37483_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32067_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t4674_m37483_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m32063_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m32063_gshared (InternalEnumerator_1_t4675 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32064_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32064_gshared (InternalEnumerator_1_t4675 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t4674  L_0 = (( KeyValuePair_2_t4674  (*) (InternalEnumerator_1_t4675 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4674  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m32065_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m32065_gshared (InternalEnumerator_1_t4675 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m32066_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m32066_gshared (InternalEnumerator_1_t4675 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern "C" KeyValuePair_2_t4674  InternalEnumerator_1_get_Current_m32067_gshared (InternalEnumerator_1_t4675 * __this, MethodInfo* method)
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
		KeyValuePair_2_t4674  L_8 = (( KeyValuePair_2_t4674  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6253_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t5137_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Byte>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_88.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_207.h"
extern TypeInfo Enumerator_t4677_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4679_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_207MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_88MethodDeclarations.h"
extern Il2CppType Enumerator_t4677_0_0_0;
extern Il2CppType Transform_1_t4679_0_0_0;
extern MethodInfo NotSupportedException__ctor_m8832_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m32079_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m32021_MethodInfo;
extern MethodInfo Transform_1__ctor_m32099_MethodInfo;
extern MethodInfo Enumerator__ctor_m32082_MethodInfo;
struct Dictionary_2_t4673;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m37494_gshared (Dictionary_2_t4673 * __this, Array_t * p0, int32_t p1, Transform_1_t4679 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m37494(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, Transform_1_t4679 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m37494_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t4673;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m37493 (Dictionary_2_t4673 * __this, ObjectU5BU5D_t178* p0, int32_t p1, Transform_1_t4679 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m32080_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m32079_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m32099_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m37494_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m37493_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m32082_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m32068_gshared (KeyCollection_t4676 * __this, Dictionary_2_t4673 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t4673 * L_0 = ___dictionary;
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
		Dictionary_2_t4673 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m32069_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m32069_gshared (KeyCollection_t4676 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m32070_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m32070_gshared (KeyCollection_t4676 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m32071_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m32071_gshared (KeyCollection_t4676 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m32072_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m32072_gshared (KeyCollection_t4676 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m32073_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m32073_gshared (KeyCollection_t4676 * __this, MethodInfo* method)
{
	{
		Enumerator_t4677  L_0 = (( Enumerator_t4677  (*) (KeyCollection_t4676 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4677  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m32074_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m32074_gshared (KeyCollection_t4676 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t4673 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t4673 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t4679 * L_11 = (Transform_1_t4679 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t4679 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, Transform_1_t4679 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m32075_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m32075_gshared (KeyCollection_t4676 * __this, MethodInfo* method)
{
	{
		Enumerator_t4677  L_0 = (( Enumerator_t4677  (*) (KeyCollection_t4676 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4677  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m32076_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m32076_gshared (KeyCollection_t4676 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m32077_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m32077_gshared (KeyCollection_t4676 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m32078_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m32078_gshared (KeyCollection_t4676 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m32079_gshared (KeyCollection_t4676 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t178* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t4673 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t178* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t4679 * L_7 = (Transform_1_t4679 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t4679 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t4673 *, ObjectU5BU5D_t178*, int32_t, Transform_1_t4679 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4677  KeyCollection_GetEnumerator_m32080_gshared (KeyCollection_t4676 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		Enumerator_t4677  L_1 = {0};
		(( void (*) (Enumerator_t4677 *, Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m32081_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m32081_gshared (KeyCollection_t4676 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m32094_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m32098_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m32092_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32082_gshared (Enumerator_t4677 * __this, Dictionary_2_t4673 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t4678  L_1 = (( Enumerator_t4678  (*) (Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m32083_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32083_gshared (Enumerator_t4677 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m32084_GenericMethod;
extern "C" void Enumerator_Dispose_m32084_gshared (Enumerator_t4677 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m32085_GenericMethod;
extern "C" bool Enumerator_MoveNext_m32085_gshared (Enumerator_t4677 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m32086_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m32086_gshared (Enumerator_t4677 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t4674 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m32097_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m32095_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m32096_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32087_gshared (Enumerator_t4678 * __this, Dictionary_2_t4673 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t4673 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m32088_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32088_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4674  L_0 = (__this->___current_3);
		KeyValuePair_2_t4674  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32089_GenericMethod;
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m32089_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4674 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t4674 * L_3 = &(__this->___current_3);
		uint8_t L_4 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		uint8_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t1610  L_7 = {0};
		DictionaryEntry__ctor_m8812(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32090_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m32090_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32091_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m32091_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		uint8_t L_0 = (( uint8_t (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m32092_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t4673 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t4673 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t178* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t4673 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ByteU5BU5D_t679* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t4674  L_16 = {0};
		(( void (*) (KeyValuePair_2_t4674 *, Object_t *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t4673 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m32093_GenericMethod;
extern "C" KeyValuePair_2_t4674  Enumerator_get_Current_m32093_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t4674  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m32094_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4674 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m32095_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4674 * L_0 = &(__this->___current_3);
		uint8_t L_1 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m32096_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t4673 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m32097_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m32098_gshared (Enumerator_t4678 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t4673 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32099_gshared (Transform_1_t4679 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m32100_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m32100_gshared (Transform_1_t4679 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32100((Transform_1_t4679 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m32101_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m32101_gshared (Transform_1_t4679 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t535_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m32102_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m32102_gshared (Transform_1_t4679 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_88.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_208.h"
extern TypeInfo Enumerator_t4681_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4682_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_208MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_88MethodDeclarations.h"
extern Il2CppType Enumerator_t4681_0_0_0;
extern Il2CppType Transform_1_t4682_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m32114_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m32023_MethodInfo;
extern MethodInfo Transform_1__ctor_m32122_MethodInfo;
extern MethodInfo Enumerator__ctor_m32117_MethodInfo;
struct Dictionary_2_t4673;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_ICollectionCopyTo<System.Byte>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisByte_t535_m37496_gshared (Dictionary_2_t4673 * __this, Array_t * p0, int32_t p1, Transform_1_t4682 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisByte_t535_m37496(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, Transform_1_t4682 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisByte_t535_m37496_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t4673;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Do_CopyTo<System.Byte,System.Byte>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisByte_t535_TisByte_t535_m37497 (Dictionary_2_t4673 * __this, ByteU5BU5D_t679* p0, int32_t p1, Transform_1_t4682 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m32115_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m32114_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m32122_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisByte_t535_m37496_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisByte_t535_TisByte_t535_m37497_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m32117_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m32103_gshared (ValueCollection_t4680 * __this, Dictionary_2_t4673 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t4673 * L_0 = ___dictionary;
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
		Dictionary_2_t4673 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32104_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m32104_gshared (ValueCollection_t4680 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32105_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m32105_gshared (ValueCollection_t4680 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32106_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m32106_gshared (ValueCollection_t4680 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		uint8_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t4673 *, uint8_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32107_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m32107_gshared (ValueCollection_t4680 * __this, uint8_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32108_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m32108_gshared (ValueCollection_t4680 * __this, MethodInfo* method)
{
	{
		Enumerator_t4681  L_0 = (( Enumerator_t4681  (*) (ValueCollection_t4680 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4681  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m32109_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m32109_gshared (ValueCollection_t4680 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	ByteU5BU5D_t679* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((ByteU5BU5D_t679*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		ByteU5BU5D_t679* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_t679* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< ByteU5BU5D_t679*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t4673 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t4673 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t4682 * L_11 = (Transform_1_t4682 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t4682 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, Transform_1_t4682 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32110_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m32110_gshared (ValueCollection_t4680 * __this, MethodInfo* method)
{
	{
		Enumerator_t4681  L_0 = (( Enumerator_t4681  (*) (ValueCollection_t4680 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4681  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32111_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m32111_gshared (ValueCollection_t4680 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32112_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m32112_gshared (ValueCollection_t4680 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m32113_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m32113_gshared (ValueCollection_t4680 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m32114_gshared (ValueCollection_t4680 * __this, ByteU5BU5D_t679* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		ByteU5BU5D_t679* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t4673 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t4673 * L_3 = (__this->___dictionary_0);
		ByteU5BU5D_t679* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t4682 * L_7 = (Transform_1_t4682 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t4682 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t4673 *, ByteU5BU5D_t679*, int32_t, Transform_1_t4682 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t4681  ValueCollection_GetEnumerator_m32115_gshared (ValueCollection_t4680 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		Enumerator_t4681  L_1 = {0};
		(( void (*) (Enumerator_t4681 *, Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m32116_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m32116_gshared (ValueCollection_t4680 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m32117_gshared (Enumerator_t4681 * __this, Dictionary_2_t4673 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t4673 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t4678  L_1 = (( Enumerator_t4678  (*) (Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m32118_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m32118_gshared (Enumerator_t4681 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		uint8_t L_1 = (( uint8_t (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m32119_GenericMethod;
extern "C" void Enumerator_Dispose_m32119_gshared (Enumerator_t4681 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m32120_GenericMethod;
extern "C" bool Enumerator_MoveNext_m32120_gshared (Enumerator_t4681 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m32121_GenericMethod;
extern "C" uint8_t Enumerator_get_Current_m32121_gshared (Enumerator_t4681 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t4674 * L_1 = &(L_0->___current_3);
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32122_gshared (Transform_1_t4682 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m32123_GenericMethod;
extern "C" uint8_t Transform_1_Invoke_m32123_gshared (Transform_1_t4682 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32123((Transform_1_t4682 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef uint8_t (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m32124_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m32124_gshared (Transform_1_t4682 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t535_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Byte>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m32125_GenericMethod;
extern "C" uint8_t Transform_1_EndInvoke_m32125_gshared (Transform_1_t4682 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(uint8_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32126_gshared (Transform_1_t4672 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m32127_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_Invoke_m32127_gshared (Transform_1_t4672 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32127((Transform_1_t4672 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m32128_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m32128_gshared (Transform_1_t4672 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t535_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m32129_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_EndInvoke_m32129_gshared (Transform_1_t4672 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1610 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m32130_gshared (Transform_1_t4683 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m32131_GenericMethod;
extern "C" KeyValuePair_2_t4674  Transform_1_Invoke_m32131_gshared (Transform_1_t4683 * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m32131((Transform_1_t4683 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t4674  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t4674  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t4674  (*FunctionPointerType) (Object_t * __this, uint8_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m32132_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m32132_gshared (Transform_1_t4683 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Byte_t535_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m32133_GenericMethod;
extern "C" KeyValuePair_2_t4674  Transform_1_EndInvoke_m32133_gshared (Transform_1_t4683 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t4674 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IDictionaryEnumerator_t1607_il2cpp_TypeInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m14602_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m32136_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m32136_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m32134_gshared (ShimEnumerator_t4684 * __this, Dictionary_2_t4673 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t4673 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t4678  L_1 = (( Enumerator_t4678  (*) (Dictionary_2_t4673 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m32135_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m32135_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m32136_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method)
{
	{
		Enumerator_t4678  L_0 = (__this->___host_enumerator_0);
		Enumerator_t4678  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1610  L_3 = (DictionaryEntry_t1610 )InterfaceFuncInvoker0< DictionaryEntry_t1610  >::Invoke(&IDictionaryEnumerator_get_Entry_m14602_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m32137_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m32137_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method)
{
	KeyValuePair_2_t4674  V_0 = {0};
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t4674  L_1 = (( KeyValuePair_2_t4674  (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m32138_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m32138_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method)
{
	KeyValuePair_2_t4674  V_0 = {0};
	{
		Enumerator_t4678 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t4674  L_1 = (( KeyValuePair_2_t4674  (*) (Enumerator_t4678 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		uint8_t L_2 = (( uint8_t (*) (KeyValuePair_2_t4674 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		uint8_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m32139_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m32139_gshared (ShimEnumerator_t4684 * __this, MethodInfo* method)
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



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m32142_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m32144_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_271.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4686_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_271MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4686_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>(System.Int32)
extern "C" KeyValuePair_2_t4685  Array_InternalArray__get_Item_TisKeyValuePair_2_t4685_m37503_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t4685_m37503(__this, p0, method) (( KeyValuePair_2_t4685  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t4685_m37503_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32150_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t4685_m37503_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m32146_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m32146_gshared (InternalEnumerator_1_t4686 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32147_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32147_gshared (InternalEnumerator_1_t4686 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t4685  L_0 = (( KeyValuePair_2_t4685  (*) (InternalEnumerator_1_t4686 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4685  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m32148_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m32148_gshared (InternalEnumerator_1_t4686 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m32149_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m32149_gshared (InternalEnumerator_1_t4686 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Current()
extern "C" KeyValuePair_2_t4685  InternalEnumerator_1_get_Current_m32150_gshared (InternalEnumerator_1_t4686 * __this, MethodInfo* method)
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
		KeyValuePair_2_t4685  L_8 = (( KeyValuePair_2_t4685  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6254_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t5133_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5132_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Boolean>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Boolean>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Boolean>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6255_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5141_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current()
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_272.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4687_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Boolean>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_272MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4687_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t535_m34942_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t535_m34942(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t535_m34942_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Boolean>(System.Int32)
#define Array_InternalArray__get_Item_TisBoolean_t175_m37514(__this, p0, method) (( bool (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t535_m34942_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32155_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisBoolean_t175_m37514_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Boolean>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Boolean>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Boolean>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Boolean>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Boolean>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6256_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Boolean>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Boolean>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Boolean>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6257_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Boolean>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6258_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Boolean>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6259_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2639_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Boolean>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_273.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4688_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_273MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4688_0_0_0;
extern Il2CppType IComparable_1_t2639_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Boolean>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Boolean>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2639_m37525(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32160_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2639_m37525_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Boolean>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6260_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Boolean>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6261_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Boolean>>::Remove(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
