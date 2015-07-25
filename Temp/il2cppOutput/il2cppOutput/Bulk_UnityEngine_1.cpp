#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndex.h"
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
extern TypeInfo CacheIndex_t1062_il2cpp_TypeInfo;
// UnityEngine.CacheIndex
#include "UnityEngine_UnityEngine_CacheIndexMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.String
#include "mscorlib_System_String.h"
// Conversion methods for marshalling of: UnityEngine.CacheIndex
void CacheIndex_t1062_marshal(const CacheIndex_t1062& unmarshaled, CacheIndex_t1062_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___bytesUsed_1 = unmarshaled.___bytesUsed_1;
	marshaled.___expires_2 = unmarshaled.___expires_2;
}
void CacheIndex_t1062_marshal_back(const CacheIndex_t1062_marshaled& marshaled, CacheIndex_t1062& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___bytesUsed_1 = marshaled.___bytesUsed_1;
	unmarshaled.___expires_2 = marshaled.___expires_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.CacheIndex
void CacheIndex_t1062_marshal_cleanup(CacheIndex_t1062_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityString.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityString_t1063_il2cpp_TypeInfo;
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo String_Format_m2929_MethodInfo;


// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern MethodInfo UnityString_Format_m6494_MethodInfo;
extern "C" String_t* UnityString_Format_m6494 (Object_t * __this /* static, unused */, String_t* ___fmt, ObjectU5BU5D_t178* ___args, MethodInfo* method)
{
	{
		String_t* L_0 = ___fmt;
		ObjectU5BU5D_t178* L_1 = ___args;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m2929(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_Format_m2929_MethodInfo);
		return L_2;
	}
}
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AsyncOperation_t974_il2cpp_TypeInfo;
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperationMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo YieldInstruction__ctor_m6627_MethodInfo;
extern MethodInfo AsyncOperation_InternalDestroy_m6496_MethodInfo;
extern MethodInfo Object_Finalize_m1044_MethodInfo;


// System.Void UnityEngine.AsyncOperation::.ctor()
extern MethodInfo AsyncOperation__ctor_m6495_MethodInfo;
extern "C" void AsyncOperation__ctor_m6495 (AsyncOperation_t974 * __this, MethodInfo* method)
{
	{
		YieldInstruction__ctor_m6627(__this, /*hidden argument*/&YieldInstruction__ctor_m6627_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m6496 (AsyncOperation_t974 * __this, MethodInfo* method)
{
	typedef void (*AsyncOperation_InternalDestroy_m6496_ftn) (AsyncOperation_t974 *);
	static AsyncOperation_InternalDestroy_m6496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AsyncOperation_InternalDestroy_m6496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AsyncOperation::InternalDestroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AsyncOperation::Finalize()
extern MethodInfo AsyncOperation_Finalize_m6497_MethodInfo;
extern "C" void AsyncOperation_Finalize_m6497 (AsyncOperation_t974 * __this, MethodInfo* method)
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
		AsyncOperation_InternalDestroy_m6496(__this, /*hidden argument*/&AsyncOperation_InternalDestroy_m6496_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1044(__this, /*hidden argument*/&Object_Finalize_m1044_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_0012:
	{
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t974_marshal(const AsyncOperation_t974& unmarshaled, AsyncOperation_t974_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AsyncOperation_t974_marshal_back(const AsyncOperation_t974_marshaled& marshaled, AsyncOperation_t974& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AsyncOperation
void AsyncOperation_t974_marshal_cleanup(AsyncOperation_t974_marshaled& marshaled)
{
}
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LogCallback_t1064_il2cpp_TypeInfo;
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo LogCallback__ctor_m6498_MethodInfo;
extern "C" void LogCallback__ctor_m6498 (LogCallback_t1064 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Application/LogCallback::Invoke(System.String,System.String,UnityEngine.LogType)
extern MethodInfo LogCallback_Invoke_m6499_MethodInfo;
extern "C" void LogCallback_Invoke_m6499 (LogCallback_t1064 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		LogCallback_Invoke_m6499((LogCallback_t1064 *)__this->___prev_9,___condition, ___stackTrace, ___type, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___stackTrace, int32_t ___type, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___condition, ___stackTrace, ___type,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_LogCallback_t1064(Il2CppObject* delegate, String_t* ___condition, String_t* ___stackTrace, int32_t ___type)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___condition' to native representation
	char* ____condition_marshaled = { 0 };
	____condition_marshaled = il2cpp_codegen_marshal_string(___condition);

	// Marshaling of parameter '___stackTrace' to native representation
	char* ____stackTrace_marshaled = { 0 };
	____stackTrace_marshaled = il2cpp_codegen_marshal_string(___stackTrace);

	// Marshaling of parameter '___type' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____condition_marshaled, ____stackTrace_marshaled, ___type);

	// Marshaling cleanup of parameter '___condition' native representation
	il2cpp_codegen_marshal_free(____condition_marshaled);
	____condition_marshaled = NULL;

	// Marshaling cleanup of parameter '___stackTrace' native representation
	il2cpp_codegen_marshal_free(____stackTrace_marshaled);
	____stackTrace_marshaled = NULL;

	// Marshaling cleanup of parameter '___type' native representation

}
// System.IAsyncResult UnityEngine.Application/LogCallback::BeginInvoke(System.String,System.String,UnityEngine.LogType,System.AsyncCallback,System.Object)
extern MethodInfo LogCallback_BeginInvoke_m6500_MethodInfo;
extern "C" Object_t * LogCallback_BeginInvoke_m6500 (LogCallback_t1064 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___condition;
	__d_args[1] = ___stackTrace;
	__d_args[2] = Box(InitializedTypeInfo(&LogType_t981_il2cpp_TypeInfo), &___type);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Application/LogCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo LogCallback_EndInvoke_m6501_MethodInfo;
extern "C" void LogCallback_EndInvoke_m6501 (LogCallback_t1064 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Application
#include "UnityEngine_UnityEngine_Application.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Application_t1065_il2cpp_TypeInfo;
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
extern TypeInfo LogType_t981_il2cpp_TypeInfo;
extern MethodInfo Application_get_platform_m1008_MethodInfo;
extern MethodInfo Application_LoadLevelAsync_m6502_MethodInfo;


// System.Void UnityEngine.Application::Quit()
extern MethodInfo Application_Quit_m950_MethodInfo;
extern "C" void Application_Quit_m950 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (*Application_Quit_m950_ftn) ();
	static Application_Quit_m950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_Quit_m950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::Quit()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.Application::get_loadedLevel()
extern MethodInfo Application_get_loadedLevel_m656_MethodInfo;
extern "C" int32_t Application_get_loadedLevel_m656 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_loadedLevel_m656_ftn) ();
	static Application_get_loadedLevel_m656_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_loadedLevel_m656_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_loadedLevel()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern MethodInfo Application_LoadLevel_m657_MethodInfo;
extern "C" void Application_LoadLevel_m657 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Application_LoadLevelAsync_m6502(NULL /*static, unused*/, (String_t*)NULL, L_0, 0, 1, /*hidden argument*/&Application_LoadLevelAsync_m6502_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern MethodInfo Application_LoadLevel_m738_MethodInfo;
extern "C" void Application_LoadLevel_m738 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Application_LoadLevelAsync_m6502(NULL /*static, unused*/, L_0, (-1), 0, 1, /*hidden argument*/&Application_LoadLevelAsync_m6502_MethodInfo);
		return;
	}
}
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t974 * Application_LoadLevelAsync_m6502 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, MethodInfo* method)
{
	typedef AsyncOperation_t974 * (*Application_LoadLevelAsync_m6502_ftn) (String_t*, int32_t, bool, bool);
	static Application_LoadLevelAsync_m6502_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_LoadLevelAsync_m6502_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(___monoLevelName, ___index, ___additive, ___mustCompleteNextFrame);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern MethodInfo Application_get_isPlaying_m824_MethodInfo;
extern "C" bool Application_get_isPlaying_m824 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isPlaying_m824_ftn) ();
	static Application_get_isPlaying_m824_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isPlaying_m824_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isPlaying()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isEditor()
extern MethodInfo Application_get_isEditor_m823_MethodInfo;
extern "C" bool Application_get_isEditor_m823 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Application_get_isEditor_m823_ftn) ();
	static Application_get_isEditor_m823_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_isEditor_m823_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_isEditor()");
	return _il2cpp_icall_func();
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" int32_t Application_get_platform_m1008 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Application_get_platform_m1008_ftn) ();
	static Application_get_platform_m1008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_platform_m1008_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_platform()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
extern MethodInfo Application_get_isMobilePlatform_m914_MethodInfo;
extern "C" bool Application_get_isMobilePlatform_m914 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Application_get_platform_m1008(NULL /*static, unused*/, /*hidden argument*/&Application_get_platform_m1008_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)11))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)21))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)22))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_0;
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)((int32_t)23)))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = 1;
	}

IL_002d:
	{
		return G_B6_0;
	}
}
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
extern MethodInfo Application_set_runInBackground_m5713_MethodInfo;
extern "C" void Application_set_runInBackground_m5713 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	typedef void (*Application_set_runInBackground_m5713_ftn) (bool);
	static Application_set_runInBackground_m5713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_runInBackground_m5713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_runInBackground(System.Boolean)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Application::get_dataPath()
extern MethodInfo Application_get_dataPath_m5554_MethodInfo;
extern "C" String_t* Application_get_dataPath_m5554 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Application_get_dataPath_m5554_ftn) ();
	static Application_get_dataPath_m5554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_dataPath_m5554_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_dataPath()");
	return _il2cpp_icall_func();
}
// System.String UnityEngine.Application::get_unityVersion()
extern MethodInfo Application_get_unityVersion_m916_MethodInfo;
extern "C" String_t* Application_get_unityVersion_m916 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Application_get_unityVersion_m916_ftn) ();
	static Application_get_unityVersion_m916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_get_unityVersion_m916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::get_unityVersion()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern MethodInfo Application_set_targetFrameRate_m806_MethodInfo;
extern "C" void Application_set_targetFrameRate_m806 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Application_set_targetFrameRate_m806_ftn) (int32_t);
	static Application_set_targetFrameRate_m806_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Application_set_targetFrameRate_m806_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Application::set_targetFrameRate(System.Int32)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern MethodInfo Application_CallLogCallback_m6503_MethodInfo;
extern "C" void Application_CallLogCallback_m6503 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, MethodInfo* method)
{
	LogCallback_t1064 * V_0 = {0};
	LogCallback_t1064 * V_1 = {0};
	{
		bool L_0 = ___invokedOnMainThread;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t1064 * L_1 = ((Application_t1065_StaticFields*)InitializedTypeInfo(&Application_t1065_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandler_0;
		V_0 = L_1;
		LogCallback_t1064 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		LogCallback_t1064 * L_3 = V_0;
		String_t* L_4 = ___logString;
		String_t* L_5 = ___stackTrace;
		int32_t L_6 = ___type;
		NullCheck(L_3);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m6499_MethodInfo, L_3, L_4, L_5, L_6);
	}

IL_001b:
	{
		LogCallback_t1064 * L_7 = ((Application_t1065_StaticFields*)InitializedTypeInfo(&Application_t1065_il2cpp_TypeInfo)->static_fields)->___s_LogCallbackHandlerThreaded_1;
		V_1 = L_7;
		LogCallback_t1064 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		LogCallback_t1064 * L_9 = V_1;
		String_t* L_10 = ___logString;
		String_t* L_11 = ___stackTrace;
		int32_t L_12 = ___type;
		NullCheck(L_9);
		VirtActionInvoker3< String_t*, String_t*, int32_t >::Invoke(&LogCallback_Invoke_m6499_MethodInfo, L_9, L_10, L_11, L_12);
	}

IL_0030:
	{
		return;
	}
}
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Behaviour_t542_il2cpp_TypeInfo;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
extern MethodInfo Component__ctor_m6585_MethodInfo;


// System.Void UnityEngine.Behaviour::.ctor()
extern MethodInfo Behaviour__ctor_m6504_MethodInfo;
extern "C" void Behaviour__ctor_m6504 (Behaviour_t542 * __this, MethodInfo* method)
{
	{
		Component__ctor_m6585(__this, /*hidden argument*/&Component__ctor_m6585_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern MethodInfo Behaviour_get_enabled_m675_MethodInfo;
extern "C" bool Behaviour_get_enabled_m675 (Behaviour_t542 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_enabled_m675_ftn) (Behaviour_t542 *);
	static Behaviour_get_enabled_m675_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_enabled_m675_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_enabled()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern MethodInfo Behaviour_set_enabled_m530_MethodInfo;
extern "C" void Behaviour_set_enabled_m530 (Behaviour_t542 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Behaviour_set_enabled_m530_ftn) (Behaviour_t542 *, bool);
	static Behaviour_set_enabled_m530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_set_enabled_m530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
extern MethodInfo Behaviour_get_isActiveAndEnabled_m2529_MethodInfo;
extern "C" bool Behaviour_get_isActiveAndEnabled_m2529 (Behaviour_t542 * __this, MethodInfo* method)
{
	typedef bool (*Behaviour_get_isActiveAndEnabled_m2529_ftn) (Behaviour_t542 *);
	static Behaviour_get_isActiveAndEnabled_m2529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Behaviour_get_isActiveAndEnabled_m2529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Behaviour::get_isActiveAndEnabled()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CameraCallback_t1066_il2cpp_TypeInfo;
// UnityEngine.Camera/CameraCallback
#include "UnityEngine_UnityEngine_Camera_CameraCallbackMethodDeclarations.h"

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// System.Void UnityEngine.Camera/CameraCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CameraCallback__ctor_m6505_MethodInfo;
extern "C" void CameraCallback__ctor_m6505 (CameraCallback_t1066 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Camera/CameraCallback::Invoke(UnityEngine.Camera)
extern MethodInfo CameraCallback_Invoke_m6506_MethodInfo;
extern "C" void CameraCallback_Invoke_m6506 (CameraCallback_t1066 * __this, Camera_t15 * ___cam, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CameraCallback_Invoke_m6506((CameraCallback_t1066 *)__this->___prev_9,___cam, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Camera_t15 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t15 * ___cam, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___cam,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CameraCallback_t1066(Il2CppObject* delegate, Camera_t15 * ___cam)
{
	// Marshaling of parameter '___cam' to native representation
	Camera_t15 * ____cam_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.Camera'."));
}
// System.IAsyncResult UnityEngine.Camera/CameraCallback::BeginInvoke(UnityEngine.Camera,System.AsyncCallback,System.Object)
extern MethodInfo CameraCallback_BeginInvoke_m6507_MethodInfo;
extern "C" Object_t * CameraCallback_BeginInvoke_m6507 (CameraCallback_t1066 * __this, Camera_t15 * ___cam, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___cam;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Camera/CameraCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CameraCallback_EndInvoke_m6508_MethodInfo;
extern "C" void CameraCallback_EndInvoke_m6508 (CameraCallback_t1066 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Camera_t15_il2cpp_TypeInfo;
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"

// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
extern MethodInfo Camera_INTERNAL_set_backgroundColor_m6510_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_rect_m6511_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_rect_m6512_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_pixelRect_m6513_MethodInfo;
extern MethodInfo Camera_INTERNAL_get_projectionMatrix_m6514_MethodInfo;
extern MethodInfo Camera_INTERNAL_set_projectionMatrix_m6515_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_WorldToScreenPoint_m6517_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenToViewportPoint_m6518_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_ScreenPointToRay_m6519_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry_m6526_MethodInfo;
extern MethodInfo Camera_INTERNAL_CALL_RaycastTry2D_m6528_MethodInfo;


// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern MethodInfo Camera_set_fieldOfView_m836_MethodInfo;
extern "C" void Camera_set_fieldOfView_m836 (Camera_t15 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_fieldOfView_m836_ftn) (Camera_t15 *, float);
	static Camera_set_fieldOfView_m836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_fieldOfView_m836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_fieldOfView(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern MethodInfo Camera_get_nearClipPlane_m537_MethodInfo;
extern "C" float Camera_get_nearClipPlane_m537 (Camera_t15 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_nearClipPlane_m537_ftn) (Camera_t15 *);
	static Camera_get_nearClipPlane_m537_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_nearClipPlane_m537_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_nearClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
extern MethodInfo Camera_set_nearClipPlane_m5530_MethodInfo;
extern "C" void Camera_set_nearClipPlane_m5530 (Camera_t15 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_nearClipPlane_m5530_ftn) (Camera_t15 *, float);
	static Camera_set_nearClipPlane_m5530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_nearClipPlane_m5530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_nearClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_farClipPlane()
extern MethodInfo Camera_get_farClipPlane_m833_MethodInfo;
extern "C" float Camera_get_farClipPlane_m833 (Camera_t15 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_farClipPlane_m833_ftn) (Camera_t15 *);
	static Camera_get_farClipPlane_m833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_farClipPlane_m833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_farClipPlane()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
extern MethodInfo Camera_set_farClipPlane_m5531_MethodInfo;
extern "C" void Camera_set_farClipPlane_m5531 (Camera_t15 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_farClipPlane_m5531_ftn) (Camera_t15 *, float);
	static Camera_set_farClipPlane_m5531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_farClipPlane_m5531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_farClipPlane(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern MethodInfo Camera_set_orthographicSize_m5528_MethodInfo;
extern "C" void Camera_set_orthographicSize_m5528 (Camera_t15 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographicSize_m5528_ftn) (Camera_t15 *, float);
	static Camera_set_orthographicSize_m5528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographicSize_m5528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographicSize(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern MethodInfo Camera_set_orthographic_m5527_MethodInfo;
extern "C" void Camera_set_orthographic_m5527 (Camera_t15 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Camera_set_orthographic_m5527_ftn) (Camera_t15 *, bool);
	static Camera_set_orthographic_m5527_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_orthographic_m5527_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_orthographic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Camera::get_depth()
extern MethodInfo Camera_get_depth_m2461_MethodInfo;
extern "C" float Camera_get_depth_m2461 (Camera_t15 * __this, MethodInfo* method)
{
	typedef float (*Camera_get_depth_m2461_ftn) (Camera_t15 *);
	static Camera_get_depth_m2461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_depth_m2461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_depth()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern MethodInfo Camera_set_depth_m815_MethodInfo;
extern "C" void Camera_set_depth_m815 (Camera_t15 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_depth_m815_ftn) (Camera_t15 *, float);
	static Camera_set_depth_m815_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_depth_m815_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_depth(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_aspect(System.Single)
extern MethodInfo Camera_set_aspect_m5529_MethodInfo;
extern "C" void Camera_set_aspect_m5529 (Camera_t15 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Camera_set_aspect_m5529_ftn) (Camera_t15 *, float);
	static Camera_set_aspect_m5529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_aspect_m5529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_aspect(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern MethodInfo Camera_get_cullingMask_m861_MethodInfo;
extern "C" int32_t Camera_get_cullingMask_m861 (Camera_t15 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_cullingMask_m861_ftn) (Camera_t15 *);
	static Camera_get_cullingMask_m861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_cullingMask_m861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_cullingMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern MethodInfo Camera_set_cullingMask_m813_MethodInfo;
extern "C" void Camera_set_cullingMask_m813 (Camera_t15 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_cullingMask_m813_ftn) (Camera_t15 *, int32_t);
	static Camera_set_cullingMask_m813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_cullingMask_m813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_cullingMask(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Int32 UnityEngine.Camera::get_eventMask()
extern MethodInfo Camera_get_eventMask_m6509_MethodInfo;
extern "C" int32_t Camera_get_eventMask_m6509 (Camera_t15 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_eventMask_m6509_ftn) (Camera_t15 *);
	static Camera_get_eventMask_m6509_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_eventMask_m6509_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_eventMask()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m6510 (Camera_t15 * __this, Color_t51 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_backgroundColor_m6510_ftn) (Camera_t15 *, Color_t51 *);
	static Camera_INTERNAL_set_backgroundColor_m6510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_backgroundColor_m6510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern MethodInfo Camera_set_backgroundColor_m812_MethodInfo;
extern "C" void Camera_set_backgroundColor_m812 (Camera_t15 * __this, Color_t51  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_backgroundColor_m6510(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_backgroundColor_m6510_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m6511 (Camera_t15 * __this, Rect_t62 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_rect_m6511_ftn) (Camera_t15 *, Rect_t62 *);
	static Camera_INTERNAL_get_rect_m6511_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_rect_m6511_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m6512 (Camera_t15 * __this, Rect_t62 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_rect_m6512_ftn) (Camera_t15 *, Rect_t62 *);
	static Camera_INTERNAL_set_rect_m6512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_rect_m6512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern MethodInfo Camera_get_rect_m826_MethodInfo;
extern "C" Rect_t62  Camera_get_rect_m826 (Camera_t15 * __this, MethodInfo* method)
{
	Rect_t62  V_0 = {0};
	{
		Camera_INTERNAL_get_rect_m6511(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_rect_m6511_MethodInfo);
		Rect_t62  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern MethodInfo Camera_set_rect_m847_MethodInfo;
extern "C" void Camera_set_rect_m847 (Camera_t15 * __this, Rect_t62  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_rect_m6512(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_rect_m6512_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m6513 (Camera_t15 * __this, Rect_t62 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_pixelRect_m6513_ftn) (Camera_t15 *, Rect_t62 *);
	static Camera_INTERNAL_get_pixelRect_m6513_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_pixelRect_m6513_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern MethodInfo Camera_get_pixelRect_m850_MethodInfo;
extern "C" Rect_t62  Camera_get_pixelRect_m850 (Camera_t15 * __this, MethodInfo* method)
{
	Rect_t62  V_0 = {0};
	{
		Camera_INTERNAL_get_pixelRect_m6513(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_pixelRect_m6513_MethodInfo);
		Rect_t62  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern MethodInfo Camera_get_targetTexture_m856_MethodInfo;
extern "C" RenderTexture_t56 * Camera_get_targetTexture_m856 (Camera_t15 * __this, MethodInfo* method)
{
	typedef RenderTexture_t56 * (*Camera_get_targetTexture_m856_ftn) (Camera_t15 *);
	static Camera_get_targetTexture_m856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_targetTexture_m856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_targetTexture()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern MethodInfo Camera_set_targetTexture_m848_MethodInfo;
extern "C" void Camera_set_targetTexture_m848 (Camera_t15 * __this, RenderTexture_t56 * ___value, MethodInfo* method)
{
	typedef void (*Camera_set_targetTexture_m848_ftn) (Camera_t15 *, RenderTexture_t56 *);
	static Camera_set_targetTexture_m848_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_targetTexture_m848_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m6514 (Camera_t15 * __this, Matrix4x4_t27 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_get_projectionMatrix_m6514_ftn) (Camera_t15 *, Matrix4x4_t27 *);
	static Camera_INTERNAL_get_projectionMatrix_m6514_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_get_projectionMatrix_m6514_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m6515 (Camera_t15 * __this, Matrix4x4_t27 * ___value, MethodInfo* method)
{
	typedef void (*Camera_INTERNAL_set_projectionMatrix_m6515_ftn) (Camera_t15 *, Matrix4x4_t27 *);
	static Camera_INTERNAL_set_projectionMatrix_m6515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_set_projectionMatrix_m6515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern MethodInfo Camera_get_projectionMatrix_m831_MethodInfo;
extern "C" Matrix4x4_t27  Camera_get_projectionMatrix_m831 (Camera_t15 * __this, MethodInfo* method)
{
	Matrix4x4_t27  V_0 = {0};
	{
		Camera_INTERNAL_get_projectionMatrix_m6514(__this, (&V_0), /*hidden argument*/&Camera_INTERNAL_get_projectionMatrix_m6514_MethodInfo);
		Matrix4x4_t27  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Camera_set_projectionMatrix_m834_MethodInfo;
extern "C" void Camera_set_projectionMatrix_m834 (Camera_t15 * __this, Matrix4x4_t27  ___value, MethodInfo* method)
{
	{
		Camera_INTERNAL_set_projectionMatrix_m6515(__this, (&___value), /*hidden argument*/&Camera_INTERNAL_set_projectionMatrix_m6515_MethodInfo);
		return;
	}
}
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern MethodInfo Camera_get_clearFlags_m6516_MethodInfo;
extern "C" int32_t Camera_get_clearFlags_m6516 (Camera_t15 * __this, MethodInfo* method)
{
	typedef int32_t (*Camera_get_clearFlags_m6516_ftn) (Camera_t15 *);
	static Camera_get_clearFlags_m6516_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_clearFlags_m6516_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_clearFlags()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern MethodInfo Camera_set_clearFlags_m811_MethodInfo;
extern "C" void Camera_set_clearFlags_m811 (Camera_t15 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Camera_set_clearFlags_m811_ftn) (Camera_t15 *, int32_t);
	static Camera_set_clearFlags_m811_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_clearFlags_m811_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern MethodInfo Camera_WorldToScreenPoint_m620_MethodInfo;
extern "C" Vector3_t5  Camera_WorldToScreenPoint_m620 (Camera_t15 * __this, Vector3_t5  ___position, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = Camera_INTERNAL_CALL_WorldToScreenPoint_m6517(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_WorldToScreenPoint_m6517_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t5  Camera_INTERNAL_CALL_WorldToScreenPoint_m6517 (Object_t * __this /* static, unused */, Camera_t15 * ___self, Vector3_t5 * ___position, MethodInfo* method)
{
	typedef Vector3_t5  (*Camera_INTERNAL_CALL_WorldToScreenPoint_m6517_ftn) (Camera_t15 *, Vector3_t5 *);
	static Camera_INTERNAL_CALL_WorldToScreenPoint_m6517_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_WorldToScreenPoint_m6517_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenToViewportPoint_m2687_MethodInfo;
extern "C" Vector3_t5  Camera_ScreenToViewportPoint_m2687 (Camera_t15 * __this, Vector3_t5  ___position, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = Camera_INTERNAL_CALL_ScreenToViewportPoint_m6518(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenToViewportPoint_m6518_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t5  Camera_INTERNAL_CALL_ScreenToViewportPoint_m6518 (Object_t * __this /* static, unused */, Camera_t15 * ___self, Vector3_t5 * ___position, MethodInfo* method)
{
	typedef Vector3_t5  (*Camera_INTERNAL_CALL_ScreenToViewportPoint_m6518_ftn) (Camera_t15 *, Vector3_t5 *);
	static Camera_INTERNAL_CALL_ScreenToViewportPoint_m6518_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenToViewportPoint_m6518_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern MethodInfo Camera_ScreenPointToRay_m2582_MethodInfo;
extern "C" Ray_t78  Camera_ScreenPointToRay_m2582 (Camera_t15 * __this, Vector3_t5  ___position, MethodInfo* method)
{
	{
		Ray_t78  L_0 = Camera_INTERNAL_CALL_ScreenPointToRay_m6519(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Camera_INTERNAL_CALL_ScreenPointToRay_m6519_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t78  Camera_INTERNAL_CALL_ScreenPointToRay_m6519 (Object_t * __this /* static, unused */, Camera_t15 * ___self, Vector3_t5 * ___position, MethodInfo* method)
{
	typedef Ray_t78  (*Camera_INTERNAL_CALL_ScreenPointToRay_m6519_ftn) (Camera_t15 *, Vector3_t5 *);
	static Camera_INTERNAL_CALL_ScreenPointToRay_m6519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_ScreenPointToRay_m6519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern MethodInfo Camera_get_main_m618_MethodInfo;
extern "C" Camera_t15 * Camera_get_main_m618 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t15 * (*Camera_get_main_m618_ftn) ();
	static Camera_get_main_m618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_main_m618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_main()");
	return _il2cpp_icall_func();
}
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern MethodInfo Camera_get_current_m1030_MethodInfo;
extern "C" Camera_t15 * Camera_get_current_m1030 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Camera_t15 * (*Camera_get_current_m1030_ftn) ();
	static Camera_get_current_m1030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_current_m1030_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_current()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern MethodInfo Camera_get_allCamerasCount_m6520_MethodInfo;
extern "C" int32_t Camera_get_allCamerasCount_m6520 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Camera_get_allCamerasCount_m6520_ftn) ();
	static Camera_get_allCamerasCount_m6520_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_get_allCamerasCount_m6520_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::get_allCamerasCount()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern MethodInfo Camera_GetAllCameras_m6521_MethodInfo;
extern "C" int32_t Camera_GetAllCameras_m6521 (Object_t * __this /* static, unused */, CameraU5BU5D_t235* ___cameras, MethodInfo* method)
{
	typedef int32_t (*Camera_GetAllCameras_m6521_ftn) (CameraU5BU5D_t235*);
	static Camera_GetAllCameras_m6521_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_GetAllCameras_m6521_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])");
	return _il2cpp_icall_func(___cameras);
}
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreCull_m6522_MethodInfo;
extern "C" void Camera_FireOnPreCull_m6522 (Object_t * __this /* static, unused */, Camera_t15 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t1066 * L_0 = ((Camera_t15_StaticFields*)InitializedTypeInfo(&Camera_t15_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t1066 * L_1 = ((Camera_t15_StaticFields*)InitializedTypeInfo(&Camera_t15_il2cpp_TypeInfo)->static_fields)->___onPreCull_2;
		Camera_t15 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t15 * >::Invoke(&CameraCallback_Invoke_m6506_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPreRender_m6523_MethodInfo;
extern "C" void Camera_FireOnPreRender_m6523 (Object_t * __this /* static, unused */, Camera_t15 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t1066 * L_0 = ((Camera_t15_StaticFields*)InitializedTypeInfo(&Camera_t15_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t1066 * L_1 = ((Camera_t15_StaticFields*)InitializedTypeInfo(&Camera_t15_il2cpp_TypeInfo)->static_fields)->___onPreRender_3;
		Camera_t15 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t15 * >::Invoke(&CameraCallback_Invoke_m6506_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern MethodInfo Camera_FireOnPostRender_m6524_MethodInfo;
extern "C" void Camera_FireOnPostRender_m6524 (Object_t * __this /* static, unused */, Camera_t15 * ___cam, MethodInfo* method)
{
	{
		CameraCallback_t1066 * L_0 = ((Camera_t15_StaticFields*)InitializedTypeInfo(&Camera_t15_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		CameraCallback_t1066 * L_1 = ((Camera_t15_StaticFields*)InitializedTypeInfo(&Camera_t15_il2cpp_TypeInfo)->static_fields)->___onPostRender_4;
		Camera_t15 * L_2 = ___cam;
		NullCheck(L_1);
		VirtActionInvoker1< Camera_t15 * >::Invoke(&CameraCallback_Invoke_m6506_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.Camera::Render()
extern MethodInfo Camera_Render_m849_MethodInfo;
extern "C" void Camera_Render_m849 (Camera_t15 * __this, MethodInfo* method)
{
	typedef void (*Camera_Render_m849_ftn) (Camera_t15 *);
	static Camera_Render_m849_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_Render_m849_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::Render()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
extern MethodInfo Camera_set_useOcclusionCulling_m814_MethodInfo;
extern "C" void Camera_set_useOcclusionCulling_m814 (Camera_t15 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Camera_set_useOcclusionCulling_m814_ftn) (Camera_t15 *, bool);
	static Camera_set_useOcclusionCulling_m814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_set_useOcclusionCulling_m814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern MethodInfo Camera_CopyFrom_m860_MethodInfo;
extern "C" void Camera_CopyFrom_m860 (Camera_t15 * __this, Camera_t15 * ___other, MethodInfo* method)
{
	typedef void (*Camera_CopyFrom_m860_ftn) (Camera_t15 *, Camera_t15 *);
	static Camera_CopyFrom_m860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_CopyFrom_m860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::CopyFrom(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___other);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry_m6525_MethodInfo;
extern "C" GameObject_t7 * Camera_RaycastTry_m6525 (Camera_t15 * __this, Ray_t78  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t7 * L_2 = Camera_INTERNAL_CALL_RaycastTry_m6526(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry_m6526_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t7 * Camera_INTERNAL_CALL_RaycastTry_m6526 (Object_t * __this /* static, unused */, Camera_t15 * ___self, Ray_t78 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t7 * (*Camera_INTERNAL_CALL_RaycastTry_m6526_ftn) (Camera_t15 *, Ray_t78 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry_m6526_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry_m6526_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Camera_RaycastTry2D_m6527_MethodInfo;
extern "C" GameObject_t7 * Camera_RaycastTry2D_m6527 (Camera_t15 * __this, Ray_t78  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		GameObject_t7 * L_2 = Camera_INTERNAL_CALL_RaycastTry2D_m6528(NULL /*static, unused*/, __this, (&___ray), L_0, L_1, /*hidden argument*/&Camera_INTERNAL_CALL_RaycastTry2D_m6528_MethodInfo);
		return L_2;
	}
}
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t7 * Camera_INTERNAL_CALL_RaycastTry2D_m6528 (Object_t * __this /* static, unused */, Camera_t15 * ___self, Ray_t78 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	typedef GameObject_t7 * (*Camera_INTERNAL_CALL_RaycastTry2D_m6528_ftn) (Camera_t15 *, Ray_t78 *, float, int32_t);
	static Camera_INTERNAL_CALL_RaycastTry2D_m6528_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Camera_INTERNAL_CALL_RaycastTry2D_m6528_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___self, ___ray, ___distance, ___layerMask);
}
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_Debug.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Debug_t1067_il2cpp_TypeInfo;
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Exception
#include "mscorlib_System_Exception.h"
extern MethodInfo Debug_INTERNAL_CALL_DrawLine_m6529_MethodInfo;
extern MethodInfo Object_ToString_m1073_MethodInfo;
extern MethodInfo Debug_Internal_Log_m6530_MethodInfo;
extern MethodInfo Debug_Internal_LogException_m6531_MethodInfo;


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
extern MethodInfo Debug_DrawLine_m565_MethodInfo;
extern "C" void Debug_DrawLine_m565 (Object_t * __this /* static, unused */, Vector3_t5  ___start, Vector3_t5  ___end, Color_t51  ___color, MethodInfo* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		V_0 = 1;
		V_1 = (0.0f);
		float L_0 = V_1;
		bool L_1 = V_0;
		Debug_INTERNAL_CALL_DrawLine_m6529(NULL /*static, unused*/, (&___start), (&___end), (&___color), L_0, L_1, /*hidden argument*/&Debug_INTERNAL_CALL_DrawLine_m6529_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m6529 (Object_t * __this /* static, unused */, Vector3_t5 * ___start, Vector3_t5 * ___end, Color_t51 * ___color, float ___duration, bool ___depthTest, MethodInfo* method)
{
	typedef void (*Debug_INTERNAL_CALL_DrawLine_m6529_ftn) (Vector3_t5 *, Vector3_t5 *, Color_t51 *, float, bool);
	static Debug_INTERNAL_CALL_DrawLine_m6529_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_INTERNAL_CALL_DrawLine_m6529_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)");
	_il2cpp_icall_func(___start, ___end, ___color, ___duration, ___depthTest);
}
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m6530 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t172 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_Log_m6530_ftn) (int32_t, String_t*, Object_t172 *);
	static Debug_Internal_Log_m6530_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_Log_m6530_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)");
	_il2cpp_icall_func(___level, ___msg, ___obj);
}
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_Internal_LogException_m6531 (Object_t * __this /* static, unused */, Exception_t180 * ___exception, Object_t172 * ___obj, MethodInfo* method)
{
	typedef void (*Debug_Internal_LogException_m6531_ftn) (Exception_t180 *, Object_t172 *);
	static Debug_Internal_LogException_m6531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Debug_Internal_LogException_m6531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)");
	_il2cpp_icall_func(___exception, ___obj);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern MethodInfo Debug_Log_m583_MethodInfo;
extern "C" void Debug_Log_m583 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 0;
		if (!L_0)
		{
			G_B2_0 = 0;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral441;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m6530(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t172 *)NULL, /*hidden argument*/&Debug_Internal_Log_m6530_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern MethodInfo Debug_LogError_m796_MethodInfo;
extern "C" void Debug_LogError_m796 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	{
		Object_t * L_0 = ___message;
		G_B1_0 = 2;
		if (!L_0)
		{
			G_B2_0 = 2;
			goto IL_0012;
		}
	}
	{
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = (String_t*) &_stringLiteral441;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		Debug_Internal_Log_m6530(NULL /*static, unused*/, G_B3_1, G_B3_0, (Object_t172 *)NULL, /*hidden argument*/&Debug_Internal_Log_m6530_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogError_m2734_MethodInfo;
extern "C" void Debug_LogError_m2734 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t172 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_0);
		Object_t172 * L_2 = ___context;
		Debug_Internal_Log_m6530(NULL /*static, unused*/, 2, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m6530_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern MethodInfo Debug_LogException_m6532_MethodInfo;
extern "C" void Debug_LogException_m6532 (Object_t * __this /* static, unused */, Exception_t180 * ___exception, MethodInfo* method)
{
	{
		Exception_t180 * L_0 = ___exception;
		Debug_Internal_LogException_m6531(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Debug_Internal_LogException_m6531_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern MethodInfo Debug_LogException_m2616_MethodInfo;
extern "C" void Debug_LogException_m2616 (Object_t * __this /* static, unused */, Exception_t180 * ___exception, Object_t172 * ___context, MethodInfo* method)
{
	{
		Exception_t180 * L_0 = ___exception;
		Object_t172 * L_1 = ___context;
		Debug_Internal_LogException_m6531(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Debug_Internal_LogException_m6531_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern MethodInfo Debug_LogWarning_m746_MethodInfo;
extern "C" void Debug_LogWarning_m746 (Object_t * __this /* static, unused */, Object_t * ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_0);
		Debug_Internal_Log_m6530(NULL /*static, unused*/, 1, L_1, (Object_t172 *)NULL, /*hidden argument*/&Debug_Internal_Log_m6530_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern MethodInfo Debug_LogWarning_m2905_MethodInfo;
extern "C" void Debug_LogWarning_m2905 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t172 * ___context, MethodInfo* method)
{
	{
		Object_t * L_0 = ___message;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_0);
		Object_t172 * L_2 = ___context;
		Debug_Internal_Log_m6530(NULL /*static, unused*/, 1, L_1, L_2, /*hidden argument*/&Debug_Internal_Log_m6530_MethodInfo);
		return;
	}
}
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegate.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DisplaysUpdatedDelegate_t1068_il2cpp_TypeInfo;
// UnityEngine.Display/DisplaysUpdatedDelegate
#include "UnityEngine_UnityEngine_Display_DisplaysUpdatedDelegateMethodDeclarations.h"



// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern MethodInfo DisplaysUpdatedDelegate__ctor_m6533_MethodInfo;
extern "C" void DisplaysUpdatedDelegate__ctor_m6533 (DisplaysUpdatedDelegate_t1068 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
extern MethodInfo DisplaysUpdatedDelegate_Invoke_m6534_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_Invoke_m6534 (DisplaysUpdatedDelegate_t1068 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		DisplaysUpdatedDelegate_Invoke_m6534((DisplaysUpdatedDelegate_t1068 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_DisplaysUpdatedDelegate_t1068(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo DisplaysUpdatedDelegate_BeginInvoke_m6535_MethodInfo;
extern "C" Object_t * DisplaysUpdatedDelegate_BeginInvoke_m6535 (DisplaysUpdatedDelegate_t1068 * __this, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern MethodInfo DisplaysUpdatedDelegate_EndInvoke_m6536_MethodInfo;
extern "C" void DisplaysUpdatedDelegate_EndInvoke_m6536 (DisplaysUpdatedDelegate_t1068 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Display_t1070_il2cpp_TypeInfo;
// UnityEngine.Display
#include "UnityEngine_UnityEngine_DisplayMethodDeclarations.h"

// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo DisplayU5BU5D_t1069_il2cpp_TypeInfo;
extern TypeInfo Vector3_t5_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
extern Il2CppType DisplayU5BU5D_t1069_0_0_0;
extern MethodInfo Display_GetRenderingExtImpl_m6558_MethodInfo;
extern MethodInfo Display_GetSystemExtImpl_m6557_MethodInfo;
extern MethodInfo Display_GetRenderingBuffersImpl_m6559_MethodInfo;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo IntPtr__ctor_m5310_MethodInfo;
extern MethodInfo Display__ctor_m6537_MethodInfo;
extern MethodInfo Delegate_Combine_m665_MethodInfo;
extern MethodInfo Delegate_Remove_m666_MethodInfo;
extern MethodInfo Display_ActivateDisplayImpl_m6561_MethodInfo;
extern MethodInfo Display_SetParamsImpl_m6562_MethodInfo;
extern MethodInfo Display_SetRenderingResolutionImpl_m6560_MethodInfo;
extern MethodInfo Display_MultiDisplayLicenseImpl_m6563_MethodInfo;
extern MethodInfo Display_RelativeMouseAtImpl_m6564_MethodInfo;
extern MethodInfo Display__ctor_m6538_MethodInfo;


// System.Void UnityEngine.Display::.ctor()
extern "C" void Display__ctor_m6537 (Display_t1070 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IntPtr_t L_0 = {0};
		IntPtr__ctor_m5310(&L_0, 0, /*hidden argument*/&IntPtr__ctor_m5310_MethodInfo);
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.ctor(System.IntPtr)
extern "C" void Display__ctor_m6538 (Display_t1070 * __this, IntPtr_t ___nativeDisplay, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IntPtr_t L_0 = ___nativeDisplay;
		__this->___nativeDisplay_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Display::.cctor()
extern MethodInfo Display__cctor_m6539_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t1069_il2cpp_TypeInfo_var;
extern "C" void Display__cctor_m6539 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Display__cctor_m6539_init;
	if (!Display__cctor_m6539_init)
	{
		DisplayU5BU5D_t1069_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t1069_0_0_0);
		Display__cctor_m6539_init = true;
	}
	{
		DisplayU5BU5D_t1069* L_0 = ((DisplayU5BU5D_t1069*)SZArrayNew(DisplayU5BU5D_t1069_il2cpp_TypeInfo_var, 1));
		Display_t1070 * L_1 = (Display_t1070 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display__ctor_m6537(L_1, /*hidden argument*/&Display__ctor_m6537_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Display_t1070 **)(Display_t1070 **)SZArrayLdElema(L_0, 0)) = (Display_t1070 *)L_1;
		((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___displays_1 = L_0;
		DisplayU5BU5D_t1069* L_2 = ((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t1070 **)(Display_t1070 **)SZArrayLdElema(L_2, L_3));
		((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = (DisplaysUpdatedDelegate_t1068 *)NULL;
		return;
	}
}
// System.Void UnityEngine.Display::add_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_add_onDisplaysUpdated_m6540_MethodInfo;
extern "C" void Display_add_onDisplaysUpdated_m6540 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t1068 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t1068 * L_0 = ((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t1068 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Combine_m665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t1068 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t1068_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Display::remove_onDisplaysUpdated(UnityEngine.Display/DisplaysUpdatedDelegate)
extern MethodInfo Display_remove_onDisplaysUpdated_m6541_MethodInfo;
extern "C" void Display_remove_onDisplaysUpdated_m6541 (Object_t * __this /* static, unused */, DisplaysUpdatedDelegate_t1068 * ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t1068 * L_0 = ((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		DisplaysUpdatedDelegate_t1068 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Remove_m666(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m666_MethodInfo);
		((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3 = ((DisplaysUpdatedDelegate_t1068 *)Castclass(L_2, InitializedTypeInfo(&DisplaysUpdatedDelegate_t1068_il2cpp_TypeInfo)));
		return;
	}
}
// System.Int32 UnityEngine.Display::get_renderingWidth()
extern MethodInfo Display_get_renderingWidth_m6542_MethodInfo;
extern "C" int32_t Display_get_renderingWidth_m6542 (Display_t1070 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m6558(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m6558_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_renderingHeight()
extern MethodInfo Display_get_renderingHeight_m6543_MethodInfo;
extern "C" int32_t Display_get_renderingHeight_m6543 (Display_t1070 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_GetRenderingExtImpl_m6558(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingExtImpl_m6558_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemWidth()
extern MethodInfo Display_get_systemWidth_m6544_MethodInfo;
extern "C" int32_t Display_get_systemWidth_m6544 (Display_t1070 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m6557(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m6557_MethodInfo);
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Display::get_systemHeight()
extern MethodInfo Display_get_systemHeight_m6545_MethodInfo;
extern "C" int32_t Display_get_systemHeight_m6545 (Display_t1070 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_GetSystemExtImpl_m6557(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetSystemExtImpl_m6557_MethodInfo);
		int32_t L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_colorBuffer()
extern MethodInfo Display_get_colorBuffer_m6546_MethodInfo;
extern "C" RenderBuffer_t1072  Display_get_colorBuffer_m6546 (Display_t1070 * __this, MethodInfo* method)
{
	RenderBuffer_t1072  V_0 = {0};
	RenderBuffer_t1072  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m6559(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m6559_MethodInfo);
		RenderBuffer_t1072  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RenderBuffer UnityEngine.Display::get_depthBuffer()
extern MethodInfo Display_get_depthBuffer_m6547_MethodInfo;
extern "C" RenderBuffer_t1072  Display_get_depthBuffer_m6547 (Display_t1070 * __this, MethodInfo* method)
{
	RenderBuffer_t1072  V_0 = {0};
	RenderBuffer_t1072  V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_GetRenderingBuffersImpl_m6559(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/&Display_GetRenderingBuffersImpl_m6559_MethodInfo);
		RenderBuffer_t1072  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Display::Activate()
extern MethodInfo Display_Activate_m6548_MethodInfo;
extern "C" void Display_Activate_m6548 (Display_t1070 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m6561(NULL /*static, unused*/, L_0, 0, 0, ((int32_t)60), /*hidden argument*/&Display_ActivateDisplayImpl_m6561_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::Activate(System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_Activate_m6549_MethodInfo;
extern "C" void Display_Activate_m6549 (Display_t1070 * __this, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___refreshRate;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_ActivateDisplayImpl_m6561(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Display_ActivateDisplayImpl_m6561_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetParams(System.Int32,System.Int32,System.Int32,System.Int32)
extern MethodInfo Display_SetParams_m6550_MethodInfo;
extern "C" void Display_SetParams_m6550 (Display_t1070 * __this, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___width;
		int32_t L_2 = ___height;
		int32_t L_3 = ___x;
		int32_t L_4 = ___y;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_SetParamsImpl_m6562(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Display_SetParamsImpl_m6562_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Display::SetRenderingResolution(System.Int32,System.Int32)
extern MethodInfo Display_SetRenderingResolution_m6551_MethodInfo;
extern "C" void Display_SetRenderingResolution_m6551 (Display_t1070 * __this, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___nativeDisplay_0);
		int32_t L_1 = ___w;
		int32_t L_2 = ___h;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_SetRenderingResolutionImpl_m6560(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Display_SetRenderingResolutionImpl_m6560_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Display::MultiDisplayLicense()
extern MethodInfo Display_MultiDisplayLicense_m6552_MethodInfo;
extern "C" bool Display_MultiDisplayLicense_m6552 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		bool L_0 = Display_MultiDisplayLicenseImpl_m6563(NULL /*static, unused*/, /*hidden argument*/&Display_MultiDisplayLicenseImpl_m6563_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern MethodInfo Display_RelativeMouseAt_m6553_MethodInfo;
extern "C" Vector3_t5  Display_RelativeMouseAt_m6553 (Object_t * __this /* static, unused */, Vector3_t5  ___inputMouseCoordinates, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		V_2 = 0;
		float L_0 = ((&___inputMouseCoordinates)->___x_1);
		V_3 = (((int32_t)L_0));
		float L_1 = ((&___inputMouseCoordinates)->___y_2);
		V_4 = (((int32_t)L_1));
		int32_t L_2 = V_3;
		int32_t L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		int32_t L_4 = Display_RelativeMouseAtImpl_m6564(NULL /*static, unused*/, L_2, L_3, (&V_1), (&V_2), /*hidden argument*/&Display_RelativeMouseAtImpl_m6564_MethodInfo);
		(&V_0)->___z_3 = (((float)L_4));
		int32_t L_5 = V_1;
		(&V_0)->___x_1 = (((float)L_5));
		int32_t L_6 = V_2;
		(&V_0)->___y_2 = (((float)L_6));
		Vector3_t5  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Display UnityEngine.Display::get_main()
extern MethodInfo Display_get_main_m6554_MethodInfo;
extern "C" Display_t1070 * Display_get_main_m6554 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display_t1070 * L_0 = ((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2;
		return L_0;
	}
}
// System.Void UnityEngine.Display::RecreateDisplayList(System.IntPtr[])
extern MethodInfo Display_RecreateDisplayList_m6555_MethodInfo;
extern TypeInfo* DisplayU5BU5D_t1069_il2cpp_TypeInfo_var;
extern "C" void Display_RecreateDisplayList_m6555 (Object_t * __this /* static, unused */, IntPtrU5BU5D_t1071* ___nativeDisplay, MethodInfo* method)
{
	static bool Display_RecreateDisplayList_m6555_init;
	if (!Display_RecreateDisplayList_m6555_init)
	{
		DisplayU5BU5D_t1069_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DisplayU5BU5D_t1069_0_0_0);
		Display_RecreateDisplayList_m6555_init = true;
	}
	int32_t V_0 = 0;
	{
		IntPtrU5BU5D_t1071* L_0 = ___nativeDisplay;
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___displays_1 = ((DisplayU5BU5D_t1069*)SZArrayNew(DisplayU5BU5D_t1069_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_0)->max_length)))));
		V_0 = 0;
		goto IL_0027;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		DisplayU5BU5D_t1069* L_1 = ((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___displays_1;
		int32_t L_2 = V_0;
		IntPtrU5BU5D_t1071* L_3 = ___nativeDisplay;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Display_t1070 * L_6 = (Display_t1070 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		Display__ctor_m6538(L_6, (*(IntPtr_t*)(IntPtr_t*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Display__ctor_m6538_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_6);
		*((Display_t1070 **)(Display_t1070 **)SZArrayLdElema(L_1, L_2)) = (Display_t1070 *)L_6;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_8 = V_0;
		IntPtrU5BU5D_t1071* L_9 = ___nativeDisplay;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		DisplayU5BU5D_t1069* L_10 = ((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___displays_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		int32_t L_11 = 0;
		((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->____mainDisplay_2 = (*(Display_t1070 **)(Display_t1070 **)SZArrayLdElema(L_10, L_11));
		return;
	}
}
// System.Void UnityEngine.Display::FireDisplaysUpdated()
extern MethodInfo Display_FireDisplaysUpdated_m6556_MethodInfo;
extern "C" void Display_FireDisplaysUpdated_m6556 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t1068 * L_0 = ((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo));
		DisplaysUpdatedDelegate_t1068 * L_1 = ((Display_t1070_StaticFields*)InitializedTypeInfo(&Display_t1070_il2cpp_TypeInfo)->static_fields)->___onDisplaysUpdated_3;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&DisplaysUpdatedDelegate_Invoke_m6534_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetSystemExtImpl_m6557 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetSystemExtImpl_m6557_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetSystemExtImpl_m6557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetSystemExtImpl_m6557_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
extern "C" void Display_GetRenderingExtImpl_m6558 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t* ___w, int32_t* ___h, MethodInfo* method)
{
	typedef void (*Display_GetRenderingExtImpl_m6558_ftn) (IntPtr_t, int32_t*, int32_t*);
	static Display_GetRenderingExtImpl_m6558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingExtImpl_m6558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)
extern "C" void Display_GetRenderingBuffersImpl_m6559 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, RenderBuffer_t1072 * ___color, RenderBuffer_t1072 * ___depth, MethodInfo* method)
{
	typedef void (*Display_GetRenderingBuffersImpl_m6559_ftn) (IntPtr_t, RenderBuffer_t1072 *, RenderBuffer_t1072 *);
	static Display_GetRenderingBuffersImpl_m6559_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_GetRenderingBuffersImpl_m6559_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::GetRenderingBuffersImpl(System.IntPtr,UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&)");
	_il2cpp_icall_func(___nativeDisplay, ___color, ___depth);
}
// System.Void UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)
extern "C" void Display_SetRenderingResolutionImpl_m6560 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___w, int32_t ___h, MethodInfo* method)
{
	typedef void (*Display_SetRenderingResolutionImpl_m6560_ftn) (IntPtr_t, int32_t, int32_t);
	static Display_SetRenderingResolutionImpl_m6560_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetRenderingResolutionImpl_m6560_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetRenderingResolutionImpl(System.IntPtr,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___w, ___h);
}
// System.Void UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)
extern "C" void Display_ActivateDisplayImpl_m6561 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___refreshRate, MethodInfo* method)
{
	typedef void (*Display_ActivateDisplayImpl_m6561_ftn) (IntPtr_t, int32_t, int32_t, int32_t);
	static Display_ActivateDisplayImpl_m6561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_ActivateDisplayImpl_m6561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::ActivateDisplayImpl(System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___refreshRate);
}
// System.Void UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Display_SetParamsImpl_m6562 (Object_t * __this /* static, unused */, IntPtr_t ___nativeDisplay, int32_t ___width, int32_t ___height, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	typedef void (*Display_SetParamsImpl_m6562_ftn) (IntPtr_t, int32_t, int32_t, int32_t, int32_t);
	static Display_SetParamsImpl_m6562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_SetParamsImpl_m6562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::SetParamsImpl(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___nativeDisplay, ___width, ___height, ___x, ___y);
}
// System.Boolean UnityEngine.Display::MultiDisplayLicenseImpl()
extern "C" bool Display_MultiDisplayLicenseImpl_m6563 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Display_MultiDisplayLicenseImpl_m6563_ftn) ();
	static Display_MultiDisplayLicenseImpl_m6563_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_MultiDisplayLicenseImpl_m6563_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::MultiDisplayLicenseImpl()");
	return _il2cpp_icall_func();
}
// System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
extern "C" int32_t Display_RelativeMouseAtImpl_m6564 (Object_t * __this /* static, unused */, int32_t ___x, int32_t ___y, int32_t* ___rx, int32_t* ___ry, MethodInfo* method)
{
	typedef int32_t (*Display_RelativeMouseAtImpl_m6564_ftn) (int32_t, int32_t, int32_t*, int32_t*);
	static Display_RelativeMouseAtImpl_m6564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Display_RelativeMouseAtImpl_m6564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)");
	return _il2cpp_icall_func(___x, ___y, ___rx, ___ry);
}
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoBehaviour_t4_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern MethodInfo MonoBehaviour_StartCoroutine_Auto_m6565_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m6566_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6568_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_Auto_m6569_MethodInfo;


// System.Void UnityEngine.MonoBehaviour::.ctor()
extern MethodInfo MonoBehaviour__ctor_m504_MethodInfo;
extern "C" void MonoBehaviour__ctor_m504 (MonoBehaviour_t4 * __this, MethodInfo* method)
{
	{
		Behaviour__ctor_m6504(__this, /*hidden argument*/&Behaviour__ctor_m6504_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StartCoroutine_m2607_MethodInfo;
extern "C" Coroutine_t413 * MonoBehaviour_StartCoroutine_m2607 (MonoBehaviour_t4 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		Coroutine_t413 * L_1 = MonoBehaviour_StartCoroutine_Auto_m6565(__this, L_0, /*hidden argument*/&MonoBehaviour_StartCoroutine_Auto_m6565_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t413 * MonoBehaviour_StartCoroutine_Auto_m6565 (MonoBehaviour_t4 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef Coroutine_t413 * (*MonoBehaviour_StartCoroutine_Auto_m6565_ftn) (MonoBehaviour_t4 *, Object_t *);
	static MonoBehaviour_StartCoroutine_Auto_m6565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_Auto_m6565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)");
	return _il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t413 * MonoBehaviour_StartCoroutine_m6566 (MonoBehaviour_t4 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method)
{
	typedef Coroutine_t413 * (*MonoBehaviour_StartCoroutine_m6566_ftn) (MonoBehaviour_t4 *, String_t*, Object_t *);
	static MonoBehaviour_StartCoroutine_m6566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StartCoroutine_m6566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)");
	return _il2cpp_icall_func(__this, ___methodName, ___value);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern MethodInfo MonoBehaviour_StartCoroutine_m817_MethodInfo;
extern "C" Coroutine_t413 * MonoBehaviour_StartCoroutine_m817 (MonoBehaviour_t4 * __this, String_t* ___methodName, MethodInfo* method)
{
	Object_t * V_0 = {0};
	{
		V_0 = NULL;
		String_t* L_0 = ___methodName;
		Object_t * L_1 = V_0;
		Coroutine_t413 * L_2 = MonoBehaviour_StartCoroutine_m6566(__this, L_0, L_1, /*hidden argument*/&MonoBehaviour_StartCoroutine_m6566_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern MethodInfo MonoBehaviour_StopCoroutine_m818_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m818 (MonoBehaviour_t4 * __this, String_t* ___methodName, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_m818_ftn) (MonoBehaviour_t4 *, String_t*);
	static MonoBehaviour_StopCoroutine_m818_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_m818_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine(System.String)");
	_il2cpp_icall_func(__this, ___methodName);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern MethodInfo MonoBehaviour_StopCoroutine_m6567_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m6567 (MonoBehaviour_t4 * __this, Object_t * ___routine, MethodInfo* method)
{
	{
		Object_t * L_0 = ___routine;
		MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6568(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6568_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern MethodInfo MonoBehaviour_StopCoroutine_m2848_MethodInfo;
extern "C" void MonoBehaviour_StopCoroutine_m2848 (MonoBehaviour_t4 * __this, Coroutine_t413 * ___routine, MethodInfo* method)
{
	{
		Coroutine_t413 * L_0 = ___routine;
		MonoBehaviour_StopCoroutine_Auto_m6569(__this, L_0, /*hidden argument*/&MonoBehaviour_StopCoroutine_Auto_m6569_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6568 (MonoBehaviour_t4 * __this, Object_t * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6568_ftn) (MonoBehaviour_t4 *, Object_t *);
	static MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6568_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutineViaEnumerator_Auto_m6568_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)");
	_il2cpp_icall_func(__this, ___routine);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m6569 (MonoBehaviour_t4 * __this, Coroutine_t413 * ___routine, MethodInfo* method)
{
	typedef void (*MonoBehaviour_StopCoroutine_Auto_m6569_ftn) (MonoBehaviour_t4 *, Coroutine_t413 *);
	static MonoBehaviour_StopCoroutine_Auto_m6569_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoBehaviour_StopCoroutine_Auto_m6569_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)");
	_il2cpp_icall_func(__this, ___routine);
}
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TouchPhase_t1073_il2cpp_TypeInfo;
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhaseMethodDeclarations.h"



// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IMECompositionMode_t1074_il2cpp_TypeInfo;
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionModeMethodDeclarations.h"



// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Touch_t339_il2cpp_TypeInfo;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"


// System.Int32 UnityEngine.Touch::get_fingerId()
extern MethodInfo Touch_get_fingerId_m2547_MethodInfo;
extern "C" int32_t Touch_get_fingerId_m2547 (Touch_t339 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FingerId_0);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern MethodInfo Touch_get_position_m2549_MethodInfo;
extern "C" Vector2_t48  Touch_get_position_m2549 (Touch_t339 * __this, MethodInfo* method)
{
	{
		Vector2_t48  L_0 = (__this->___m_Position_1);
		return L_0;
	}
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern MethodInfo Touch_get_phase_m2548_MethodInfo;
extern "C" int32_t Touch_get_phase_m2548 (Touch_t339 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Phase_6);
		return L_0;
	}
}
// Conversion methods for marshalling of: UnityEngine.Touch
void Touch_t339_marshal(const Touch_t339& unmarshaled, Touch_t339_marshaled& marshaled)
{
	marshaled.___m_FingerId_0 = unmarshaled.___m_FingerId_0;
	marshaled.___m_Position_1 = unmarshaled.___m_Position_1;
	marshaled.___m_RawPosition_2 = unmarshaled.___m_RawPosition_2;
	marshaled.___m_PositionDelta_3 = unmarshaled.___m_PositionDelta_3;
	marshaled.___m_TimeDelta_4 = unmarshaled.___m_TimeDelta_4;
	marshaled.___m_TapCount_5 = unmarshaled.___m_TapCount_5;
	marshaled.___m_Phase_6 = unmarshaled.___m_Phase_6;
}
void Touch_t339_marshal_back(const Touch_t339_marshaled& marshaled, Touch_t339& unmarshaled)
{
	unmarshaled.___m_FingerId_0 = marshaled.___m_FingerId_0;
	unmarshaled.___m_Position_1 = marshaled.___m_Position_1;
	unmarshaled.___m_RawPosition_2 = marshaled.___m_RawPosition_2;
	unmarshaled.___m_PositionDelta_3 = marshaled.___m_PositionDelta_3;
	unmarshaled.___m_TimeDelta_4 = marshaled.___m_TimeDelta_4;
	unmarshaled.___m_TapCount_5 = marshaled.___m_TapCount_5;
	unmarshaled.___m_Phase_6 = marshaled.___m_Phase_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.Touch
void Touch_t339_marshal_cleanup(Touch_t339_marshaled& marshaled)
{
}
// UnityEngine.Input
#include "UnityEngine_UnityEngine_Input.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Input_t169_il2cpp_TypeInfo;
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
extern MethodInfo Input_INTERNAL_set_compositionCursorPos_m6573_MethodInfo;
extern MethodInfo Input_GetKeyString_m6571_MethodInfo;
extern MethodInfo Input_GetKeyUpInt_m6572_MethodInfo;


// System.Void UnityEngine.Input::.cctor()
extern MethodInfo Input__cctor_m6570_MethodInfo;
extern "C" void Input__cctor_m6570 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Input::GetKeyString(System.String)
extern "C" bool Input_GetKeyString_m6571 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef bool (*Input_GetKeyString_m6571_ftn) (String_t*);
	static Input_GetKeyString_m6571_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyString_m6571_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyString(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Boolean UnityEngine.Input::GetKeyUpInt(System.Int32)
extern "C" bool Input_GetKeyUpInt_m6572 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	typedef bool (*Input_GetKeyUpInt_m6572_ftn) (int32_t);
	static Input_GetKeyUpInt_m6572_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetKeyUpInt_m6572_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetKeyUpInt(System.Int32)");
	return _il2cpp_icall_func(___key);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern MethodInfo Input_GetAxisRaw_m2565_MethodInfo;
extern "C" float Input_GetAxisRaw_m2565 (Object_t * __this /* static, unused */, String_t* ___axisName, MethodInfo* method)
{
	typedef float (*Input_GetAxisRaw_m2565_ftn) (String_t*);
	static Input_GetAxisRaw_m2565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetAxisRaw_m2565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetAxisRaw(System.String)");
	return _il2cpp_icall_func(___axisName);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
extern MethodInfo Input_GetButtonDown_m2564_MethodInfo;
extern "C" bool Input_GetButtonDown_m2564 (Object_t * __this /* static, unused */, String_t* ___buttonName, MethodInfo* method)
{
	typedef bool (*Input_GetButtonDown_m2564_ftn) (String_t*);
	static Input_GetButtonDown_m2564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetButtonDown_m2564_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetButtonDown(System.String)");
	return _il2cpp_icall_func(___buttonName);
}
// System.Boolean UnityEngine.Input::GetKey(System.String)
extern MethodInfo Input_GetKey_m534_MethodInfo;
extern "C" bool Input_GetKey_m534 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_1 = Input_GetKeyString_m6571(NULL /*static, unused*/, L_0, /*hidden argument*/&Input_GetKeyString_m6571_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern MethodInfo Input_GetKeyUp_m809_MethodInfo;
extern "C" bool Input_GetKeyUp_m809 (Object_t * __this /* static, unused */, int32_t ___key, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_1 = Input_GetKeyUpInt_m6572(NULL /*static, unused*/, L_0, /*hidden argument*/&Input_GetKeyUpInt_m6572_MethodInfo);
		return L_1;
	}
}
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern MethodInfo Input_GetMouseButton_m2578_MethodInfo;
extern "C" bool Input_GetMouseButton_m2578 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButton_m2578_ftn) (int32_t);
	static Input_GetMouseButton_m2578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButton_m2578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButton(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern MethodInfo Input_GetMouseButtonDown_m2551_MethodInfo;
extern "C" bool Input_GetMouseButtonDown_m2551 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonDown_m2551_ftn) (int32_t);
	static Input_GetMouseButtonDown_m2551_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonDown_m2551_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonDown(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern MethodInfo Input_GetMouseButtonUp_m808_MethodInfo;
extern "C" bool Input_GetMouseButtonUp_m808 (Object_t * __this /* static, unused */, int32_t ___button, MethodInfo* method)
{
	typedef bool (*Input_GetMouseButtonUp_m808_ftn) (int32_t);
	static Input_GetMouseButtonUp_m808_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetMouseButtonUp_m808_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetMouseButtonUp(System.Int32)");
	return _il2cpp_icall_func(___button);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern MethodInfo Input_get_mousePosition_m619_MethodInfo;
extern "C" Vector3_t5  Input_get_mousePosition_m619 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t5  (*Input_get_mousePosition_m619_ftn) ();
	static Input_get_mousePosition_m619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePosition_m619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePosition()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
extern MethodInfo Input_get_mouseScrollDelta_m2552_MethodInfo;
extern "C" Vector2_t48  Input_get_mouseScrollDelta_m2552 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector2_t48  (*Input_get_mouseScrollDelta_m2552_ftn) ();
	static Input_get_mouseScrollDelta_m2552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mouseScrollDelta_m2552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mouseScrollDelta()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_mousePresent()
extern MethodInfo Input_get_mousePresent_m768_MethodInfo;
extern "C" bool Input_get_mousePresent_m768 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef bool (*Input_get_mousePresent_m768_ftn) ();
	static Input_get_mousePresent_m768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_mousePresent_m768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_mousePresent()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern MethodInfo Input_get_acceleration_m644_MethodInfo;
extern "C" Vector3_t5  Input_get_acceleration_m644 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t5  (*Input_get_acceleration_m644_ftn) ();
	static Input_get_acceleration_m644_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_acceleration_m644_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_acceleration()");
	return _il2cpp_icall_func();
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern MethodInfo Input_GetTouch_m2576_MethodInfo;
extern "C" Touch_t339  Input_GetTouch_m2576 (Object_t * __this /* static, unused */, int32_t ___index, MethodInfo* method)
{
	typedef Touch_t339  (*Input_GetTouch_m2576_ftn) (int32_t);
	static Input_GetTouch_m2576_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_GetTouch_m2576_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::GetTouch(System.Int32)");
	return _il2cpp_icall_func(___index);
}
// System.Int32 UnityEngine.Input::get_touchCount()
extern MethodInfo Input_get_touchCount_m2577_MethodInfo;
extern "C" int32_t Input_get_touchCount_m2577 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (*Input_get_touchCount_m2577_ftn) ();
	static Input_get_touchCount_m2577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_touchCount_m2577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_touchCount()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.Input::get_touchSupported()
extern MethodInfo Input_get_touchSupported_m2575_MethodInfo;
extern "C" bool Input_get_touchSupported_m2575 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
extern MethodInfo Input_set_imeCompositionMode_m2826_MethodInfo;
extern "C" void Input_set_imeCompositionMode_m2826 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method)
{
	typedef void (*Input_set_imeCompositionMode_m2826_ftn) (int32_t);
	static Input_set_imeCompositionMode_m2826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_set_imeCompositionMode_m2826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)");
	_il2cpp_icall_func(___value);
}
// System.String UnityEngine.Input::get_compositionString()
extern MethodInfo Input_get_compositionString_m2752_MethodInfo;
extern "C" String_t* Input_get_compositionString_m2752 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef String_t* (*Input_get_compositionString_m2752_ftn) ();
	static Input_get_compositionString_m2752_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_get_compositionString_m2752_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::get_compositionString()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
extern "C" void Input_INTERNAL_set_compositionCursorPos_m6573 (Object_t * __this /* static, unused */, Vector2_t48 * ___value, MethodInfo* method)
{
	typedef void (*Input_INTERNAL_set_compositionCursorPos_m6573_ftn) (Vector2_t48 *);
	static Input_INTERNAL_set_compositionCursorPos_m6573_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Input_INTERNAL_set_compositionCursorPos_m6573_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)");
	_il2cpp_icall_func(___value);
}
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
extern MethodInfo Input_set_compositionCursorPos_m2814_MethodInfo;
extern "C" void Input_set_compositionCursorPos_m2814 (Object_t * __this /* static, unused */, Vector2_t48  ___value, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		Input_INTERNAL_set_compositionCursorPos_m6573(NULL /*static, unused*/, (&___value), /*hidden argument*/&Input_INTERNAL_set_compositionCursorPos_m6573_MethodInfo);
		return;
	}
}
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideFlags_t1075_il2cpp_TypeInfo;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Object_t172_il2cpp_TypeInfo;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern MethodInfo Object_INTERNAL_CALL_Internal_InstantiateSingle_m6577_MethodInfo;
extern MethodInfo Object_Destroy_m6578_MethodInfo;
extern MethodInfo Object_DestroyImmediate_m6579_MethodInfo;
extern MethodInfo Object_CompareBaseObjects_m6580_MethodInfo;
extern MethodInfo Object_GetInstanceID_m6582_MethodInfo;
extern MethodInfo Object_IsNativeObjectAlive_m6581_MethodInfo;
extern MethodInfo Object_GetCachedPtr_m6583_MethodInfo;
extern MethodInfo IntPtr_op_Inequality_m5025_MethodInfo;
extern MethodInfo Object_CheckNullArgument_m6584_MethodInfo;
extern MethodInfo Object_Internal_InstantiateSingle_m6576_MethodInfo;
extern MethodInfo Object_Internal_CloneSingle_m6575_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern MethodInfo Object_FindObjectsOfType_m5120_MethodInfo;


// System.Void UnityEngine.Object::.ctor()
extern MethodInfo Object__ctor_m6574_MethodInfo;
extern "C" void Object__ctor_m6574 (Object_t172 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
extern "C" Object_t172 * Object_Internal_CloneSingle_m6575 (Object_t * __this /* static, unused */, Object_t172 * ___data, MethodInfo* method)
{
	typedef Object_t172 * (*Object_Internal_CloneSingle_m6575_ftn) (Object_t172 *);
	static Object_Internal_CloneSingle_m6575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Internal_CloneSingle_m6575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)");
	return _il2cpp_icall_func(___data);
}
// UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" Object_t172 * Object_Internal_InstantiateSingle_m6576 (Object_t * __this /* static, unused */, Object_t172 * ___data, Vector3_t5  ___pos, Quaternion_t10  ___rot, MethodInfo* method)
{
	{
		Object_t172 * L_0 = ___data;
		Object_t172 * L_1 = Object_INTERNAL_CALL_Internal_InstantiateSingle_m6577(NULL /*static, unused*/, L_0, (&___pos), (&___rot), /*hidden argument*/&Object_INTERNAL_CALL_Internal_InstantiateSingle_m6577_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Object UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t172 * Object_INTERNAL_CALL_Internal_InstantiateSingle_m6577 (Object_t * __this /* static, unused */, Object_t172 * ___data, Vector3_t5 * ___pos, Quaternion_t10 * ___rot, MethodInfo* method)
{
	typedef Object_t172 * (*Object_INTERNAL_CALL_Internal_InstantiateSingle_m6577_ftn) (Object_t172 *, Vector3_t5 *, Quaternion_t10 *);
	static Object_INTERNAL_CALL_Internal_InstantiateSingle_m6577_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_INTERNAL_CALL_Internal_InstantiateSingle_m6577_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::INTERNAL_CALL_Internal_InstantiateSingle(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	return _il2cpp_icall_func(___data, ___pos, ___rot);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" void Object_Destroy_m6578 (Object_t * __this /* static, unused */, Object_t172 * ___obj, float ___t, MethodInfo* method)
{
	typedef void (*Object_Destroy_m6578_ftn) (Object_t172 *, float);
	static Object_Destroy_m6578_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_Destroy_m6578_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)");
	_il2cpp_icall_func(___obj, ___t);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern MethodInfo Object_Destroy_m625_MethodInfo;
extern "C" void Object_Destroy_m625 (Object_t * __this /* static, unused */, Object_t172 * ___obj, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		Object_t172 * L_0 = ___obj;
		float L_1 = V_0;
		Object_Destroy_m6578(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_Destroy_m6578_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C" void Object_DestroyImmediate_m6579 (Object_t * __this /* static, unused */, Object_t172 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method)
{
	typedef void (*Object_DestroyImmediate_m6579_ftn) (Object_t172 *, bool);
	static Object_DestroyImmediate_m6579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DestroyImmediate_m6579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)");
	_il2cpp_icall_func(___obj, ___allowDestroyingAssets);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern MethodInfo Object_DestroyImmediate_m2845_MethodInfo;
extern "C" void Object_DestroyImmediate_m2845 (Object_t * __this /* static, unused */, Object_t172 * ___obj, MethodInfo* method)
{
	bool V_0 = false;
	{
		V_0 = 0;
		Object_t172 * L_0 = ___obj;
		bool L_1 = V_0;
		Object_DestroyImmediate_m6579(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_DestroyImmediate_m6579_MethodInfo);
		return;
	}
}
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
extern "C" ObjectU5BU5D_t874* Object_FindObjectsOfType_m5120 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	typedef ObjectU5BU5D_t874* (*Object_FindObjectsOfType_m5120_ftn) (Type_t *);
	static Object_FindObjectsOfType_m5120_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_FindObjectsOfType_m5120_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::FindObjectsOfType(System.Type)");
	return _il2cpp_icall_func(___type);
}
// System.String UnityEngine.Object::get_name()
extern MethodInfo Object_get_name_m652_MethodInfo;
extern "C" String_t* Object_get_name_m652 (Object_t172 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_get_name_m652_ftn) (Object_t172 *);
	static Object_get_name_m652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_get_name_m652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::get_name()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Object::set_name(System.String)
extern MethodInfo Object_set_name_m634_MethodInfo;
extern "C" void Object_set_name_m634 (Object_t172 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*Object_set_name_m634_ftn) (Object_t172 *, String_t*);
	static Object_set_name_m634_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_name_m634_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_name(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern MethodInfo Object_DontDestroyOnLoad_m598_MethodInfo;
extern "C" void Object_DontDestroyOnLoad_m598 (Object_t * __this /* static, unused */, Object_t172 * ___target, MethodInfo* method)
{
	typedef void (*Object_DontDestroyOnLoad_m598_ftn) (Object_t172 *);
	static Object_DontDestroyOnLoad_m598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_DontDestroyOnLoad_m598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)");
	_il2cpp_icall_func(___target);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern MethodInfo Object_set_hideFlags_m597_MethodInfo;
extern "C" void Object_set_hideFlags_m597 (Object_t172 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*Object_set_hideFlags_m597_ftn) (Object_t172 *, int32_t);
	static Object_set_hideFlags_m597_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_set_hideFlags_m597_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)");
	_il2cpp_icall_func(__this, ___value);
}
// System.String UnityEngine.Object::ToString()
extern MethodInfo Object_ToString_m1046_MethodInfo;
extern "C" String_t* Object_ToString_m1046 (Object_t172 * __this, MethodInfo* method)
{
	typedef String_t* (*Object_ToString_m1046_ftn) (Object_t172 *);
	static Object_ToString_m1046_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Object_ToString_m1046_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Object::ToString()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Object::Equals(System.Object)
extern MethodInfo Object_Equals_m1043_MethodInfo;
extern "C" bool Object_Equals_m1043 (Object_t172 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Object_CompareBaseObjects_m6580(NULL /*static, unused*/, __this, ((Object_t172 *)IsInst(L_0, InitializedTypeInfo(&Object_t172_il2cpp_TypeInfo))), /*hidden argument*/&Object_CompareBaseObjects_m6580_MethodInfo);
		return L_1;
	}
}
// System.Int32 UnityEngine.Object::GetHashCode()
extern MethodInfo Object_GetHashCode_m1045_MethodInfo;
extern "C" int32_t Object_GetHashCode_m1045 (Object_t172 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Object_GetInstanceID_m6582(__this, /*hidden argument*/&Object_GetInstanceID_m6582_MethodInfo);
		return L_0;
	}
}
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
extern "C" bool Object_CompareBaseObjects_m6580 (Object_t * __this /* static, unused */, Object_t172 * ___lhs, Object_t172 * ___rhs, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Object_t172 * L_0 = ___lhs;
		V_0 = ((((Object_t*)(Object_t172 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		Object_t172 * L_1 = ___rhs;
		V_1 = ((((Object_t*)(Object_t172 *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		Object_t172 * L_5 = ___lhs;
		bool L_6 = Object_IsNativeObjectAlive_m6581(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_IsNativeObjectAlive_m6581_MethodInfo);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0028:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		Object_t172 * L_8 = ___rhs;
		bool L_9 = Object_IsNativeObjectAlive_m6581(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_IsNativeObjectAlive_m6581_MethodInfo);
		return ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}

IL_0038:
	{
		Object_t172 * L_10 = ___lhs;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___m_InstanceID_0);
		Object_t172 * L_12 = ___rhs;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___m_InstanceID_0);
		return ((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
extern "C" bool Object_IsNativeObjectAlive_m6581 (Object_t * __this /* static, unused */, Object_t172 * ___o, MethodInfo* method)
{
	{
		Object_t172 * L_0 = ___o;
		NullCheck(L_0);
		IntPtr_t L_1 = Object_GetCachedPtr_m6583(L_0, /*hidden argument*/&Object_GetCachedPtr_m6583_MethodInfo);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Inequality_m5025(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&IntPtr_op_Inequality_m5025_MethodInfo);
		return L_3;
	}
}
// System.Int32 UnityEngine.Object::GetInstanceID()
extern "C" int32_t Object_GetInstanceID_m6582 (Object_t172 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_InstanceID_0);
		return L_0;
	}
}
// System.IntPtr UnityEngine.Object::GetCachedPtr()
extern "C" IntPtr_t Object_GetCachedPtr_m6583 (Object_t172 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_CachedPtr_1);
		return L_0;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
extern MethodInfo Object_Instantiate_m661_MethodInfo;
extern "C" Object_t172 * Object_Instantiate_m661 (Object_t * __this /* static, unused */, Object_t172 * ___original, Vector3_t5  ___position, Quaternion_t10  ___rotation, MethodInfo* method)
{
	{
		Object_t172 * L_0 = ___original;
		Object_CheckNullArgument_m6584(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral442, /*hidden argument*/&Object_CheckNullArgument_m6584_MethodInfo);
		Object_t172 * L_1 = ___original;
		Vector3_t5  L_2 = ___position;
		Quaternion_t10  L_3 = ___rotation;
		Object_t172 * L_4 = Object_Internal_InstantiateSingle_m6576(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&Object_Internal_InstantiateSingle_m6576_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern MethodInfo Object_Instantiate_m5254_MethodInfo;
extern "C" Object_t172 * Object_Instantiate_m5254 (Object_t * __this /* static, unused */, Object_t172 * ___original, MethodInfo* method)
{
	{
		Object_t172 * L_0 = ___original;
		Object_CheckNullArgument_m6584(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral442, /*hidden argument*/&Object_CheckNullArgument_m6584_MethodInfo);
		Object_t172 * L_1 = ___original;
		Object_t172 * L_2 = Object_Internal_CloneSingle_m6575(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_Internal_CloneSingle_m6575_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
extern "C" void Object_CheckNullArgument_m6584 (Object_t * __this /* static, unused */, Object_t * ___arg, String_t* ___message, MethodInfo* method)
{
	{
		Object_t * L_0 = ___arg;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_1 = ___message;
		ArgumentException_t534 * L_2 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_2, L_1, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000d:
	{
		return;
	}
}
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern MethodInfo Object_FindObjectOfType_m943_MethodInfo;
extern "C" Object_t172 * Object_FindObjectOfType_m943 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	ObjectU5BU5D_t874* V_0 = {0};
	{
		Type_t * L_0 = ___type;
		ObjectU5BU5D_t874* L_1 = Object_FindObjectsOfType_m5120(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_FindObjectsOfType_m5120_MethodInfo);
		V_0 = L_1;
		ObjectU5BU5D_t874* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ObjectU5BU5D_t874* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		return (*(Object_t172 **)(Object_t172 **)SZArrayLdElema(L_3, L_4));
	}

IL_0014:
	{
		return (Object_t172 *)NULL;
	}
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern MethodInfo Object_op_Implicit_m748_MethodInfo;
extern "C" bool Object_op_Implicit_m748 (Object_t * __this /* static, unused */, Object_t172 * ___exists, MethodInfo* method)
{
	{
		Object_t172 * L_0 = ___exists;
		bool L_1 = Object_CompareBaseObjects_m6580(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_CompareBaseObjects_m6580_MethodInfo);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Equality_m528_MethodInfo;
extern "C" bool Object_op_Equality_m528 (Object_t * __this /* static, unused */, Object_t172 * ___x, Object_t172 * ___y, MethodInfo* method)
{
	{
		Object_t172 * L_0 = ___x;
		Object_t172 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m6580(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m6580_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern MethodInfo Object_op_Inequality_m527_MethodInfo;
extern "C" bool Object_op_Inequality_m527 (Object_t * __this /* static, unused */, Object_t172 * ___x, Object_t172 * ___y, MethodInfo* method)
{
	{
		Object_t172 * L_0 = ___x;
		Object_t172 * L_1 = ___y;
		bool L_2 = Object_CompareBaseObjects_m6580(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_CompareBaseObjects_m6580_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.Object
void Object_t172_marshal(const Object_t172& unmarshaled, Object_t172_marshaled& marshaled)
{
	marshaled.___m_InstanceID_0 = unmarshaled.___m_InstanceID_0;
	marshaled.___m_CachedPtr_1 = unmarshaled.___m_CachedPtr_1;
}
void Object_t172_marshal_back(const Object_t172_marshaled& marshaled, Object_t172& unmarshaled)
{
	unmarshaled.___m_InstanceID_0 = marshaled.___m_InstanceID_0;
	unmarshaled.___m_CachedPtr_1 = marshaled.___m_CachedPtr_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Object
void Object_t172_marshal_cleanup(Object_t172_marshaled& marshaled)
{
}
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Component_t167_il2cpp_TypeInfo;

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Collections.Generic.List`1<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_gen_14.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
extern MethodInfo Component_get_gameObject_m596_MethodInfo;
extern MethodInfo GameObject_GetComponent_m6590_MethodInfo;
extern MethodInfo GameObject_GetComponentInChildren_m6592_MethodInfo;
extern MethodInfo GameObject_GetComponentInParent_m6593_MethodInfo;
extern MethodInfo Component_GetComponentsForListInternal_m6589_MethodInfo;


// System.Void UnityEngine.Component::.ctor()
extern "C" void Component__ctor_m6585 (Component_t167 * __this, MethodInfo* method)
{
	{
		Object__ctor_m6574(__this, /*hidden argument*/&Object__ctor_m6574_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern MethodInfo Component_get_transform_m508_MethodInfo;
extern "C" Transform_t2 * Component_get_transform_m508 (Component_t167 * __this, MethodInfo* method)
{
	typedef Transform_t2 * (*Component_get_transform_m508_ftn) (Component_t167 *);
	static Component_get_transform_m508_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_transform_m508_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_transform()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" GameObject_t7 * Component_get_gameObject_m596 (Component_t167 * __this, MethodInfo* method)
{
	typedef GameObject_t7 * (*Component_get_gameObject_m596_ftn) (Component_t167 *);
	static Component_get_gameObject_m596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_get_gameObject_m596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::get_gameObject()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
extern MethodInfo Component_GetComponent_m2963_MethodInfo;
extern "C" Component_t167 * Component_GetComponent_m2963 (Component_t167 * __this, Type_t * ___type, MethodInfo* method)
{
	{
		GameObject_t7 * L_0 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		Type_t * L_1 = ___type;
		NullCheck(L_0);
		Component_t167 * L_2 = GameObject_GetComponent_m6590(L_0, L_1, /*hidden argument*/&GameObject_GetComponent_m6590_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo Component_GetComponentFastPath_m6586_MethodInfo;
extern "C" void Component_GetComponentFastPath_m6586 (Component_t167 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*Component_GetComponentFastPath_m6586_ftn) (Component_t167 *, Type_t *, IntPtr_t);
	static Component_GetComponentFastPath_m6586_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentFastPath_m6586_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
extern MethodInfo Component_GetComponentInChildren_m6587_MethodInfo;
extern "C" Component_t167 * Component_GetComponentInChildren_m6587 (Component_t167 * __this, Type_t * ___t, MethodInfo* method)
{
	{
		GameObject_t7 * L_0 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t167 * L_2 = GameObject_GetComponentInChildren_m6592(L_0, L_1, /*hidden argument*/&GameObject_GetComponentInChildren_m6592_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
extern MethodInfo Component_GetComponentInParent_m6588_MethodInfo;
extern "C" Component_t167 * Component_GetComponentInParent_m6588 (Component_t167 * __this, Type_t * ___t, MethodInfo* method)
{
	{
		GameObject_t7 * L_0 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Component_t167 * L_2 = GameObject_GetComponentInParent_m6593(L_0, L_1, /*hidden argument*/&GameObject_GetComponentInParent_m6593_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
extern "C" void Component_GetComponentsForListInternal_m6589 (Component_t167 * __this, Type_t * ___searchType, Object_t * ___resultList, MethodInfo* method)
{
	typedef void (*Component_GetComponentsForListInternal_m6589_ftn) (Component_t167 *, Type_t *, Object_t *);
	static Component_GetComponentsForListInternal_m6589_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Component_GetComponentsForListInternal_m6589_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)");
	_il2cpp_icall_func(__this, ___searchType, ___resultList);
}
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
extern MethodInfo Component_GetComponents_m2640_MethodInfo;
extern "C" void Component_GetComponents_m2640 (Component_t167 * __this, Type_t * ___type, List_1_t475 * ___results, MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		List_1_t475 * L_1 = ___results;
		Component_GetComponentsForListInternal_m6589(__this, L_0, L_1, /*hidden argument*/&Component_GetComponentsForListInternal_m6589_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GameObject_t7_il2cpp_TypeInfo;

// UnityEngine.PrimitiveType
#include "UnityEngine_UnityEngine_PrimitiveType.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
extern TypeInfo Transform_t2_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
extern MethodInfo GameObject_Internal_CreateGameObject_m6598_MethodInfo;
extern MethodInfo GameObject_AddComponent_m6597_MethodInfo;
extern MethodInfo GameObject_get_activeInHierarchy_m693_MethodInfo;
extern MethodInfo GameObject_get_transform_m558_MethodInfo;
extern MethodInfo Transform_GetEnumerator_m6624_MethodInfo;
extern MethodInfo IEnumerator_get_Current_m7301_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4885_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo Transform_get_parent_m569_MethodInfo;
extern MethodInfo GameObject_Internal_AddComponentWithType_m6596_MethodInfo;


// System.Void UnityEngine.GameObject::.ctor(System.String)
extern MethodInfo GameObject__ctor_m557_MethodInfo;
extern "C" void GameObject__ctor_m557 (GameObject_t7 * __this, String_t* ___name, MethodInfo* method)
{
	{
		Object__ctor_m6574(__this, /*hidden argument*/&Object__ctor_m6574_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m6598(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m6598_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor()
extern MethodInfo GameObject__ctor_m674_MethodInfo;
extern "C" void GameObject__ctor_m674 (GameObject_t7 * __this, MethodInfo* method)
{
	{
		Object__ctor_m6574(__this, /*hidden argument*/&Object__ctor_m6574_MethodInfo);
		GameObject_Internal_CreateGameObject_m6598(NULL /*static, unused*/, __this, (String_t*)NULL, /*hidden argument*/&GameObject_Internal_CreateGameObject_m6598_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
extern MethodInfo GameObject__ctor_m5532_MethodInfo;
extern "C" void GameObject__ctor_m5532 (GameObject_t7 * __this, String_t* ___name, TypeU5BU5D_t930* ___components, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t930* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m6574(__this, /*hidden argument*/&Object__ctor_m6574_MethodInfo);
		String_t* L_0 = ___name;
		GameObject_Internal_CreateGameObject_m6598(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&GameObject_Internal_CreateGameObject_m6598_MethodInfo);
		TypeU5BU5D_t930* L_1 = ___components;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0026;
	}

IL_0016:
	{
		TypeU5BU5D_t930* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		GameObject_AddComponent_m6597(__this, L_5, /*hidden argument*/&GameObject_AddComponent_m6597_MethodInfo);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_7 = V_2;
		TypeU5BU5D_t930* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern MethodInfo GameObject_CreatePrimitive_m4900_MethodInfo;
extern "C" GameObject_t7 * GameObject_CreatePrimitive_m4900 (Object_t * __this /* static, unused */, int32_t ___type, MethodInfo* method)
{
	typedef GameObject_t7 * (*GameObject_CreatePrimitive_m4900_ftn) (int32_t);
	static GameObject_CreatePrimitive_m4900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_CreatePrimitive_m4900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)");
	return _il2cpp_icall_func(___type);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
extern "C" Component_t167 * GameObject_GetComponent_m6590 (GameObject_t7 * __this, Type_t * ___type, MethodInfo* method)
{
	typedef Component_t167 * (*GameObject_GetComponent_m6590_ftn) (GameObject_t7 *, Type_t *);
	static GameObject_GetComponent_m6590_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponent_m6590_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponent(System.Type)");
	return _il2cpp_icall_func(__this, ___type);
}
// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern MethodInfo GameObject_GetComponentFastPath_m6591_MethodInfo;
extern "C" void GameObject_GetComponentFastPath_m6591 (GameObject_t7 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m6591_ftn) (GameObject_t7 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m6591_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m6591_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
extern "C" Component_t167 * GameObject_GetComponentInChildren_m6592 (GameObject_t7 * __this, Type_t * ___type, MethodInfo* method)
{
	Component_t167 * V_0 = {0};
	Transform_t2 * V_1 = {0};
	Transform_t2 * V_2 = {0};
	Object_t * V_3 = {0};
	Component_t167 * V_4 = {0};
	Component_t167 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = GameObject_get_activeInHierarchy_m693(__this, /*hidden argument*/&GameObject_get_activeInHierarchy_m693_MethodInfo);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t167 * L_2 = GameObject_GetComponent_m6590(__this, L_1, /*hidden argument*/&GameObject_GetComponent_m6590_MethodInfo);
		V_0 = L_2;
		Component_t167 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m527(NULL /*static, unused*/, L_3, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t167 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t2 * L_6 = GameObject_get_transform_m558(__this, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		V_1 = L_6;
		Transform_t2 * L_7 = V_1;
		bool L_8 = Object_op_Inequality_m527(NULL /*static, unused*/, L_7, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t2 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Transform_GetEnumerator_m6624_MethodInfo, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m7301_MethodInfo, L_11);
			V_2 = ((Transform_t2 *)Castclass(L_12, InitializedTypeInfo(&Transform_t2_il2cpp_TypeInfo)));
			Transform_t2 * L_13 = V_2;
			NullCheck(L_13);
			GameObject_t7 * L_14 = Component_get_gameObject_m596(L_13, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
			Type_t * L_15 = ___type;
			NullCheck(L_14);
			Component_t167 * L_16 = GameObject_GetComponentInChildren_m6592(L_14, L_15, /*hidden argument*/&GameObject_GetComponentInChildren_m6592_MethodInfo);
			V_4 = L_16;
			Component_t167 * L_17 = V_4;
			bool L_18 = Object_op_Inequality_m527(NULL /*static, unused*/, L_17, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
			if (!L_18)
			{
				goto IL_0070;
			}
		}

IL_0067:
		{
			Component_t167 * L_19 = V_4;
			V_5 = L_19;
			IL2CPP_LEAVE(0x97, FINALLY_0080);
		}

IL_0070:
		{
			Object_t * L_20 = V_3;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4885_MethodInfo, L_20);
			if (L_21)
			{
				goto IL_0040;
			}
		}

IL_007b:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		{
			Object_t * L_22 = V_3;
			V_6 = ((Object_t *)IsInst(L_22, InitializedTypeInfo(&IDisposable_t176_il2cpp_TypeInfo)));
			Object_t * L_23 = V_6;
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(128)
		}

IL_008d:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_24);
			IL2CPP_END_FINALLY(128)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_0095:
	{
		return (Component_t167 *)NULL;
	}

IL_0097:
	{
		Component_t167 * L_25 = V_5;
		return L_25;
	}
}
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
extern "C" Component_t167 * GameObject_GetComponentInParent_m6593 (GameObject_t7 * __this, Type_t * ___type, MethodInfo* method)
{
	Component_t167 * V_0 = {0};
	Transform_t2 * V_1 = {0};
	Component_t167 * V_2 = {0};
	{
		bool L_0 = GameObject_get_activeInHierarchy_m693(__this, /*hidden argument*/&GameObject_get_activeInHierarchy_m693_MethodInfo);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = ___type;
		Component_t167 * L_2 = GameObject_GetComponent_m6590(__this, L_1, /*hidden argument*/&GameObject_GetComponent_m6590_MethodInfo);
		V_0 = L_2;
		Component_t167 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m527(NULL /*static, unused*/, L_3, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		Component_t167 * L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		Transform_t2 * L_6 = GameObject_get_transform_m558(__this, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_6);
		Transform_t2 * L_7 = Transform_get_parent_m569(L_6, /*hidden argument*/&Transform_get_parent_m569_MethodInfo);
		V_1 = L_7;
		Transform_t2 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m527(NULL /*static, unused*/, L_8, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0070;
	}

IL_003e:
	{
		Transform_t2 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t7 * L_11 = Component_get_gameObject_m596(L_10, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_11);
		bool L_12 = GameObject_get_activeInHierarchy_m693(L_11, /*hidden argument*/&GameObject_get_activeInHierarchy_m693_MethodInfo);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		Transform_t2 * L_13 = V_1;
		NullCheck(L_13);
		GameObject_t7 * L_14 = Component_get_gameObject_m596(L_13, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		Type_t * L_15 = ___type;
		NullCheck(L_14);
		Component_t167 * L_16 = GameObject_GetComponent_m6590(L_14, L_15, /*hidden argument*/&GameObject_GetComponent_m6590_MethodInfo);
		V_2 = L_16;
		Component_t167 * L_17 = V_2;
		bool L_18 = Object_op_Inequality_m527(NULL /*static, unused*/, L_17, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		Component_t167 * L_19 = V_2;
		return L_19;
	}

IL_0069:
	{
		Transform_t2 * L_20 = V_1;
		NullCheck(L_20);
		Transform_t2 * L_21 = Transform_get_parent_m569(L_20, /*hidden argument*/&Transform_get_parent_m569_MethodInfo);
		V_1 = L_21;
	}

IL_0070:
	{
		Transform_t2 * L_22 = V_1;
		bool L_23 = Object_op_Inequality_m527(NULL /*static, unused*/, L_22, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (L_23)
		{
			goto IL_003e;
		}
	}

IL_007c:
	{
		return (Component_t167 *)NULL;
	}
}
// System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
extern MethodInfo GameObject_GetComponentsInternal_m6594_MethodInfo;
extern "C" Array_t * GameObject_GetComponentsInternal_m6594 (GameObject_t7 * __this, Type_t * ___type, bool ___useSearchTypeAsArrayReturnType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method)
{
	typedef Array_t * (*GameObject_GetComponentsInternal_m6594_ftn) (GameObject_t7 *, Type_t *, bool, bool, bool, bool, Object_t *);
	static GameObject_GetComponentsInternal_m6594_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentsInternal_m6594_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)");
	return _il2cpp_icall_func(__this, ___type, ___useSearchTypeAsArrayReturnType, ___recursive, ___includeInactive, ___reverse, ___resultList);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t2 * GameObject_get_transform_m558 (GameObject_t7 * __this, MethodInfo* method)
{
	typedef Transform_t2 * (*GameObject_get_transform_m558_ftn) (GameObject_t7 *);
	static GameObject_get_transform_m558_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m558_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.GameObject::get_layer()
extern MethodInfo GameObject_get_layer_m687_MethodInfo;
extern "C" int32_t GameObject_get_layer_m687 (GameObject_t7 * __this, MethodInfo* method)
{
	typedef int32_t (*GameObject_get_layer_m687_ftn) (GameObject_t7 *);
	static GameObject_get_layer_m687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_layer_m687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_layer()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern MethodInfo GameObject_set_layer_m2800_MethodInfo;
extern "C" void GameObject_set_layer_m2800 (GameObject_t7 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*GameObject_set_layer_m2800_ftn) (GameObject_t7 *, int32_t);
	static GameObject_set_layer_m2800_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_set_layer_m2800_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern MethodInfo GameObject_SetActive_m522_MethodInfo;
extern "C" void GameObject_SetActive_m522 (GameObject_t7 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*GameObject_SetActive_m522_ftn) (GameObject_t7 *, bool);
	static GameObject_SetActive_m522_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SetActive_m522_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SetActive(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern MethodInfo GameObject_get_activeSelf_m505_MethodInfo;
extern "C" bool GameObject_get_activeSelf_m505 (GameObject_t7 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeSelf_m505_ftn) (GameObject_t7 *);
	static GameObject_get_activeSelf_m505_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeSelf_m505_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeSelf()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
extern "C" bool GameObject_get_activeInHierarchy_m693 (GameObject_t7 * __this, MethodInfo* method)
{
	typedef bool (*GameObject_get_activeInHierarchy_m693_ftn) (GameObject_t7 *);
	static GameObject_get_activeInHierarchy_m693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_activeInHierarchy_m693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_activeInHierarchy()");
	return _il2cpp_icall_func(__this);
}
// System.String UnityEngine.GameObject::get_tag()
extern MethodInfo GameObject_get_tag_m655_MethodInfo;
extern "C" String_t* GameObject_get_tag_m655 (GameObject_t7 * __this, MethodInfo* method)
{
	typedef String_t* (*GameObject_get_tag_m655_ftn) (GameObject_t7 *);
	static GameObject_get_tag_m655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_tag_m655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_tag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern MethodInfo GameObject_SendMessage_m6595_MethodInfo;
extern "C" void GameObject_SendMessage_m6595 (GameObject_t7 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m6595_ftn) (GameObject_t7 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m6595_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m6595_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
extern "C" Component_t167 * GameObject_Internal_AddComponentWithType_m6596 (GameObject_t7 * __this, Type_t * ___componentType, MethodInfo* method)
{
	typedef Component_t167 * (*GameObject_Internal_AddComponentWithType_m6596_ftn) (GameObject_t7 *, Type_t *);
	static GameObject_Internal_AddComponentWithType_m6596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_AddComponentWithType_m6596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)");
	return _il2cpp_icall_func(__this, ___componentType);
}
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
extern "C" Component_t167 * GameObject_AddComponent_m6597 (GameObject_t7 * __this, Type_t * ___componentType, MethodInfo* method)
{
	{
		Type_t * L_0 = ___componentType;
		Component_t167 * L_1 = GameObject_Internal_AddComponentWithType_m6596(__this, L_0, /*hidden argument*/&GameObject_Internal_AddComponentWithType_m6596_MethodInfo);
		return L_1;
	}
}
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
extern "C" void GameObject_Internal_CreateGameObject_m6598 (Object_t * __this /* static, unused */, GameObject_t7 * ___mono, String_t* ___name, MethodInfo* method)
{
	typedef void (*GameObject_Internal_CreateGameObject_m6598_ftn) (GameObject_t7 *, String_t*);
	static GameObject_Internal_CreateGameObject_m6598_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Internal_CreateGameObject_m6598_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)");
	_il2cpp_icall_func(___mono, ___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerator_t1076_il2cpp_TypeInfo;
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

extern MethodInfo Transform_GetChild_m524_MethodInfo;
extern MethodInfo Transform_get_childCount_m523_MethodInfo;


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern MethodInfo Enumerator__ctor_m6599_MethodInfo;
extern "C" void Enumerator__ctor_m6599 (Enumerator_t1076 * __this, Transform_t2 * ___outer, MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Transform_t2 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern MethodInfo Enumerator_get_Current_m6600_MethodInfo;
extern "C" Object_t * Enumerator_get_Current_m6600 (Enumerator_t1076 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t2 * L_2 = Transform_GetChild_m524(L_0, L_1, /*hidden argument*/&Transform_GetChild_m524_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern MethodInfo Enumerator_MoveNext_m6601_MethodInfo;
extern "C" bool Enumerator_MoveNext_m6601 (Enumerator_t1076 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t2 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m523(L_0, /*hidden argument*/&Transform_get_childCount_m523_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
extern TypeInfo RectTransform_t370_il2cpp_TypeInfo;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
extern MethodInfo Transform_INTERNAL_get_position_m6602_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_position_m6603_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localPosition_m6604_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localPosition_m6605_MethodInfo;
extern MethodInfo Transform_get_rotation_m513_MethodInfo;
extern MethodInfo Vector3_get_right_m612_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m611_MethodInfo;
extern MethodInfo Vector3_get_up_m560_MethodInfo;
extern MethodInfo Vector3_get_forward_m610_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_rotation_m6606_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_rotation_m6607_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localRotation_m6608_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localRotation_m6609_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localScale_m6610_MethodInfo;
extern MethodInfo Transform_INTERNAL_set_localScale_m6611_MethodInfo;
extern MethodInfo Transform_get_parentInternal_m6612_MethodInfo;
extern MethodInfo Transform_set_parentInternal_m6613_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_worldToLocalMatrix_m6615_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_localToWorldMatrix_m6616_MethodInfo;
extern MethodInfo Transform_INTERNAL_get_lossyScale_m6623_MethodInfo;
extern MethodInfo Transform_SetParent_m6614_MethodInfo;
extern MethodInfo Transform_get_position_m506_MethodInfo;
extern MethodInfo Vector3_op_Addition_m517_MethodInfo;
extern MethodInfo Transform_set_position_m518_MethodInfo;
extern MethodInfo Transform_TransformDirection_m590_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_RotateAroundInternal_m6618_MethodInfo;
extern MethodInfo Quaternion_AngleAxis_m4817_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m509_MethodInfo;
extern MethodInfo Transform_RotateAroundInternal_m6617_MethodInfo;
extern MethodInfo Transform_LookAt_m572_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_LookAt_m6619_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformDirection_m6620_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_TransformPoint_m6621_MethodInfo;
extern MethodInfo Transform_INTERNAL_CALL_InverseTransformPoint_m6622_MethodInfo;
extern MethodInfo Transform_Find_m5583_MethodInfo;


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m6602 (Transform_t2 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m6602_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_get_position_m6602_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m6602_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m6603 (Transform_t2 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m6603_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_set_position_m6603_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m6603_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t5  Transform_get_position_m506 (Transform_t2 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m6602(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_position_m6602_MethodInfo);
		Vector3_t5  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m518 (Transform_t2 * __this, Vector3_t5  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m6603(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_position_m6603_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localPosition_m6604 (Transform_t2 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localPosition_m6604_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_get_localPosition_m6604_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localPosition_m6604_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localPosition_m6605 (Transform_t2 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localPosition_m6605_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_set_localPosition_m6605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localPosition_m6605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern MethodInfo Transform_get_localPosition_m532_MethodInfo;
extern "C" Vector3_t5  Transform_get_localPosition_m532 (Transform_t2 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Transform_INTERNAL_get_localPosition_m6604(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localPosition_m6604_MethodInfo);
		Vector3_t5  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern MethodInfo Transform_set_localPosition_m579_MethodInfo;
extern "C" void Transform_set_localPosition_m579 (Transform_t2 * __this, Vector3_t5  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localPosition_m6605(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localPosition_m6605_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern MethodInfo Transform_get_right_m651_MethodInfo;
extern "C" Vector3_t5  Transform_get_right_m651 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = Transform_get_rotation_m513(__this, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		Vector3_t5  L_1 = Vector3_get_right_m612(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m612_MethodInfo);
		Vector3_t5  L_2 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern MethodInfo Transform_get_up_m573_MethodInfo;
extern "C" Vector3_t5  Transform_get_up_m573 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = Transform_get_rotation_m513(__this, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		Vector3_t5  L_1 = Vector3_get_up_m560(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m560_MethodInfo);
		Vector3_t5  L_2 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern MethodInfo Transform_get_forward_m535_MethodInfo;
extern "C" Vector3_t5  Transform_get_forward_m535 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = Transform_get_rotation_m513(__this, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		Vector3_t5  L_1 = Vector3_get_forward_m610(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m610_MethodInfo);
		Vector3_t5  L_2 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		return L_2;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m6606 (Transform_t2 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m6606_ftn) (Transform_t2 *, Quaternion_t10 *);
	static Transform_INTERNAL_get_rotation_m6606_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m6606_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m6607 (Transform_t2 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m6607_ftn) (Transform_t2 *, Quaternion_t10 *);
	static Transform_INTERNAL_set_rotation_m6607_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m6607_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t10  Transform_get_rotation_m513 (Transform_t2 * __this, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m6606(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_rotation_m6606_MethodInfo);
		Quaternion_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_rotation_m512_MethodInfo;
extern "C" void Transform_set_rotation_m512 (Transform_t2 * __this, Quaternion_t10  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m6607(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_rotation_m6607_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m6608 (Transform_t2 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m6608_ftn) (Transform_t2 *, Quaternion_t10 *);
	static Transform_INTERNAL_get_localRotation_m6608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m6608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m6609 (Transform_t2 * __this, Quaternion_t10 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m6609_ftn) (Transform_t2 *, Quaternion_t10 *);
	static Transform_INTERNAL_set_localRotation_m6609_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m6609_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern MethodInfo Transform_get_localRotation_m571_MethodInfo;
extern "C" Quaternion_t10  Transform_get_localRotation_m571 (Transform_t2 * __this, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m6608(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localRotation_m6608_MethodInfo);
		Quaternion_t10  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern MethodInfo Transform_set_localRotation_m577_MethodInfo;
extern "C" void Transform_set_localRotation_m577 (Transform_t2 * __this, Quaternion_t10  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m6609(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localRotation_m6609_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_localScale_m6610 (Transform_t2 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localScale_m6610_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_get_localScale_m6610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localScale_m6610_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m6611 (Transform_t2 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m6611_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_set_localScale_m6611_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m6611_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern MethodInfo Transform_get_localScale_m570_MethodInfo;
extern "C" Vector3_t5  Transform_get_localScale_m570 (Transform_t2 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Transform_INTERNAL_get_localScale_m6610(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localScale_m6610_MethodInfo);
		Vector3_t5  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern MethodInfo Transform_set_localScale_m578_MethodInfo;
extern "C" void Transform_set_localScale_m578 (Transform_t2 * __this, Vector3_t5  ___value, MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m6611(__this, (&___value), /*hidden argument*/&Transform_INTERNAL_set_localScale_m6611_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" Transform_t2 * Transform_get_parent_m569 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Transform_get_parentInternal_m6612(__this, /*hidden argument*/&Transform_get_parentInternal_m6612_MethodInfo);
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern MethodInfo Transform_set_parent_m559_MethodInfo;
extern "C" void Transform_set_parent_m559 (Transform_t2 * __this, Transform_t2 * ___value, MethodInfo* method)
{
	{
		if (!((RectTransform_t370 *)IsInst(__this, InitializedTypeInfo(&RectTransform_t370_il2cpp_TypeInfo))))
		{
			goto IL_0016;
		}
	}
	{
		Debug_LogWarning_m2905(NULL /*static, unused*/, (String_t*) &_stringLiteral443, __this, /*hidden argument*/&Debug_LogWarning_m2905_MethodInfo);
	}

IL_0016:
	{
		Transform_t2 * L_0 = ___value;
		Transform_set_parentInternal_m6613(__this, L_0, /*hidden argument*/&Transform_set_parentInternal_m6613_MethodInfo);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" Transform_t2 * Transform_get_parentInternal_m6612 (Transform_t2 * __this, MethodInfo* method)
{
	typedef Transform_t2 * (*Transform_get_parentInternal_m6612_ftn) (Transform_t2 *);
	static Transform_get_parentInternal_m6612_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_parentInternal_m6612_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_parentInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" void Transform_set_parentInternal_m6613 (Transform_t2 * __this, Transform_t2 * ___value, MethodInfo* method)
{
	typedef void (*Transform_set_parentInternal_m6613_ftn) (Transform_t2 *, Transform_t2 *);
	static Transform_set_parentInternal_m6613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_parentInternal_m6613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern MethodInfo Transform_SetParent_m2798_MethodInfo;
extern "C" void Transform_SetParent_m2798 (Transform_t2 * __this, Transform_t2 * ___parent, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___parent;
		Transform_SetParent_m6614(__this, L_0, 1, /*hidden argument*/&Transform_SetParent_m6614_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" void Transform_SetParent_m6614 (Transform_t2 * __this, Transform_t2 * ___parent, bool ___worldPositionStays, MethodInfo* method)
{
	typedef void (*Transform_SetParent_m6614_ftn) (Transform_t2 *, Transform_t2 *, bool);
	static Transform_SetParent_m6614_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m6614_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent, ___worldPositionStays);
}
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_worldToLocalMatrix_m6615 (Transform_t2 * __this, Matrix4x4_t27 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_worldToLocalMatrix_m6615_ftn) (Transform_t2 *, Matrix4x4_t27 *);
	static Transform_INTERNAL_get_worldToLocalMatrix_m6615_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_worldToLocalMatrix_m6615_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern MethodInfo Transform_get_worldToLocalMatrix_m2870_MethodInfo;
extern "C" Matrix4x4_t27  Transform_get_worldToLocalMatrix_m2870 (Transform_t2 * __this, MethodInfo* method)
{
	Matrix4x4_t27  V_0 = {0};
	{
		Transform_INTERNAL_get_worldToLocalMatrix_m6615(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_worldToLocalMatrix_m6615_MethodInfo);
		Matrix4x4_t27  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Transform_INTERNAL_get_localToWorldMatrix_m6616 (Transform_t2 * __this, Matrix4x4_t27 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localToWorldMatrix_m6616_ftn) (Transform_t2 *, Matrix4x4_t27 *);
	static Transform_INTERNAL_get_localToWorldMatrix_m6616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localToWorldMatrix_m6616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern MethodInfo Transform_get_localToWorldMatrix_m1034_MethodInfo;
extern "C" Matrix4x4_t27  Transform_get_localToWorldMatrix_m1034 (Transform_t2 * __this, MethodInfo* method)
{
	Matrix4x4_t27  V_0 = {0};
	{
		Transform_INTERNAL_get_localToWorldMatrix_m6616(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_localToWorldMatrix_m6616_MethodInfo);
		Matrix4x4_t27  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
extern MethodInfo Transform_Translate_m617_MethodInfo;
extern "C" void Transform_Translate_m617 (Transform_t2 * __this, Vector3_t5  ___translation, int32_t ___relativeTo, MethodInfo* method)
{
	{
		int32_t L_0 = ___relativeTo;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t5  L_1 = Transform_get_position_m506(__this, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_2 = ___translation;
		Vector3_t5  L_3 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		Transform_set_position_m518(__this, L_3, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		goto IL_0035;
	}

IL_001d:
	{
		Vector3_t5  L_4 = Transform_get_position_m506(__this, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_5 = ___translation;
		Vector3_t5  L_6 = Transform_TransformDirection_m590(__this, L_5, /*hidden argument*/&Transform_TransformDirection_m590_MethodInfo);
		Vector3_t5  L_7 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		Transform_set_position_m518(__this, L_7, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::RotateAroundInternal(UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAroundInternal_m6617 (Transform_t2 * __this, Vector3_t5  ___axis, float ___angle, MethodInfo* method)
{
	{
		float L_0 = ___angle;
		Transform_INTERNAL_CALL_RotateAroundInternal_m6618(NULL /*static, unused*/, __this, (&___axis), L_0, /*hidden argument*/&Transform_INTERNAL_CALL_RotateAroundInternal_m6618_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
extern "C" void Transform_INTERNAL_CALL_RotateAroundInternal_m6618 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t5 * ___axis, float ___angle, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_RotateAroundInternal_m6618_ftn) (Transform_t2 *, Vector3_t5 *, float);
	static Transform_INTERNAL_CALL_RotateAroundInternal_m6618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_RotateAroundInternal_m6618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)");
	_il2cpp_icall_func(___self, ___axis, ___angle);
}
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo Transform_RotateAround_m593_MethodInfo;
extern "C" void Transform_RotateAround_m593 (Transform_t2 * __this, Vector3_t5  ___point, Vector3_t5  ___axis, float ___angle, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Quaternion_t10  V_1 = {0};
	Vector3_t5  V_2 = {0};
	{
		Vector3_t5  L_0 = Transform_get_position_m506(__this, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		V_0 = L_0;
		float L_1 = ___angle;
		Vector3_t5  L_2 = ___axis;
		Quaternion_t10  L_3 = Quaternion_AngleAxis_m4817(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Quaternion_AngleAxis_m4817_MethodInfo);
		V_1 = L_3;
		Vector3_t5  L_4 = V_0;
		Vector3_t5  L_5 = ___point;
		Vector3_t5  L_6 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_2 = L_6;
		Quaternion_t10  L_7 = V_1;
		Vector3_t5  L_8 = V_2;
		Vector3_t5  L_9 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		V_2 = L_9;
		Vector3_t5  L_10 = ___point;
		Vector3_t5  L_11 = V_2;
		Vector3_t5  L_12 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		V_0 = L_12;
		Vector3_t5  L_13 = V_0;
		Transform_set_position_m518(__this, L_13, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Vector3_t5  L_14 = ___axis;
		float L_15 = ___angle;
		Transform_RotateAroundInternal_m6617(__this, L_14, ((float)((float)L_15*(float)(0.0174532924f))), /*hidden argument*/&Transform_RotateAroundInternal_m6617_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform,UnityEngine.Vector3)
extern MethodInfo Transform_LookAt_m574_MethodInfo;
extern "C" void Transform_LookAt_m574 (Transform_t2 * __this, Transform_t2 * ___target, Vector3_t5  ___worldUp, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___target;
		bool L_1 = Object_op_Implicit_m748(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_t2 * L_2 = ___target;
		NullCheck(L_2);
		Vector3_t5  L_3 = Transform_get_position_m506(L_2, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_4 = ___worldUp;
		Transform_LookAt_m572(__this, L_3, L_4, /*hidden argument*/&Transform_LookAt_m572_MethodInfo);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Transform_LookAt_m572 (Transform_t2 * __this, Vector3_t5  ___worldPosition, Vector3_t5  ___worldUp, MethodInfo* method)
{
	{
		Transform_INTERNAL_CALL_LookAt_m6619(NULL /*static, unused*/, __this, (&___worldPosition), (&___worldUp), /*hidden argument*/&Transform_INTERNAL_CALL_LookAt_m6619_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern MethodInfo Transform_LookAt_m525_MethodInfo;
extern "C" void Transform_LookAt_m525 (Transform_t2 * __this, Vector3_t5  ___worldPosition, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Vector3_t5  L_0 = Vector3_get_up_m560(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m560_MethodInfo);
		V_0 = L_0;
		Transform_INTERNAL_CALL_LookAt_m6619(NULL /*static, unused*/, __this, (&___worldPosition), (&V_0), /*hidden argument*/&Transform_INTERNAL_CALL_LookAt_m6619_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_CALL_LookAt_m6619 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t5 * ___worldPosition, Vector3_t5 * ___worldUp, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_LookAt_m6619_ftn) (Transform_t2 *, Vector3_t5 *, Vector3_t5 *);
	static Transform_INTERNAL_CALL_LookAt_m6619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_LookAt_m6619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___self, ___worldPosition, ___worldUp);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" Vector3_t5  Transform_TransformDirection_m590 (Transform_t2 * __this, Vector3_t5  ___direction, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = Transform_INTERNAL_CALL_TransformDirection_m6620(NULL /*static, unused*/, __this, (&___direction), /*hidden argument*/&Transform_INTERNAL_CALL_TransformDirection_m6620_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5  Transform_INTERNAL_CALL_TransformDirection_m6620 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t5 * ___direction, MethodInfo* method)
{
	typedef Vector3_t5  (*Transform_INTERNAL_CALL_TransformDirection_m6620_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_CALL_TransformDirection_m6620_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformDirection_m6620_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___direction);
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_TransformPoint_m538_MethodInfo;
extern "C" Vector3_t5  Transform_TransformPoint_m538 (Transform_t2 * __this, Vector3_t5  ___position, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = Transform_INTERNAL_CALL_TransformPoint_m6621(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_TransformPoint_m6621_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5  Transform_INTERNAL_CALL_TransformPoint_m6621 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t5 * ___position, MethodInfo* method)
{
	typedef Vector3_t5  (*Transform_INTERNAL_CALL_TransformPoint_m6621_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_CALL_TransformPoint_m6621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_TransformPoint_m6621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern MethodInfo Transform_InverseTransformPoint_m531_MethodInfo;
extern "C" Vector3_t5  Transform_InverseTransformPoint_m531 (Transform_t2 * __this, Vector3_t5  ___position, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = Transform_INTERNAL_CALL_InverseTransformPoint_m6622(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/&Transform_INTERNAL_CALL_InverseTransformPoint_m6622_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
extern "C" Vector3_t5  Transform_INTERNAL_CALL_InverseTransformPoint_m6622 (Object_t * __this /* static, unused */, Transform_t2 * ___self, Vector3_t5 * ___position, MethodInfo* method)
{
	typedef Vector3_t5  (*Transform_INTERNAL_CALL_InverseTransformPoint_m6622_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_CALL_InverseTransformPoint_m6622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_InverseTransformPoint_m6622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)");
	return _il2cpp_icall_func(___self, ___position);
}
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern MethodInfo Transform_get_root_m5565_MethodInfo;
extern "C" Transform_t2 * Transform_get_root_m5565 (Transform_t2 * __this, MethodInfo* method)
{
	typedef Transform_t2 * (*Transform_get_root_m5565_ftn) (Transform_t2 *);
	static Transform_get_root_m5565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_root_m5565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_root()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m523 (Transform_t2 * __this, MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m523_ftn) (Transform_t2 *);
	static Transform_get_childCount_m523_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m523_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern MethodInfo Transform_SetAsFirstSibling_m2799_MethodInfo;
extern "C" void Transform_SetAsFirstSibling_m2799 (Transform_t2 * __this, MethodInfo* method)
{
	typedef void (*Transform_SetAsFirstSibling_m2799_ftn) (Transform_t2 *);
	static Transform_SetAsFirstSibling_m2799_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m2799_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" Transform_t2 * Transform_Find_m5583 (Transform_t2 * __this, String_t* ___name, MethodInfo* method)
{
	typedef Transform_t2 * (*Transform_Find_m5583_ftn) (Transform_t2 *, String_t*);
	static Transform_Find_m5583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_Find_m5583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::Find(System.String)");
	return _il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_lossyScale_m6623 (Transform_t2 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_lossyScale_m6623_ftn) (Transform_t2 *, Vector3_t5 *);
	static Transform_INTERNAL_get_lossyScale_m6623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_lossyScale_m6623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern MethodInfo Transform_get_lossyScale_m832_MethodInfo;
extern "C" Vector3_t5  Transform_get_lossyScale_m832 (Transform_t2 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Transform_INTERNAL_get_lossyScale_m6623(__this, (&V_0), /*hidden argument*/&Transform_INTERNAL_get_lossyScale_m6623_MethodInfo);
		Vector3_t5  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::FindChild(System.String)
extern MethodInfo Transform_FindChild_m1020_MethodInfo;
extern "C" Transform_t2 * Transform_FindChild_m1020 (Transform_t2 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Transform_t2 * L_1 = Transform_Find_m5583(__this, L_0, /*hidden argument*/&Transform_Find_m5583_MethodInfo);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" Object_t * Transform_GetEnumerator_m6624 (Transform_t2 * __this, MethodInfo* method)
{
	{
		Enumerator_t1076 * L_0 = (Enumerator_t1076 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Enumerator_t1076_il2cpp_TypeInfo));
		Enumerator__ctor_m6599(L_0, __this, /*hidden argument*/&Enumerator__ctor_m6599_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t2 * Transform_GetChild_m524 (Transform_t2 * __this, int32_t ___index, MethodInfo* method)
{
	typedef Transform_t2 * (*Transform_GetChild_m524_ftn) (Transform_t2 *, int32_t);
	static Transform_GetChild_m524_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m524_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Time_t1077_il2cpp_TypeInfo;
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_time()
extern MethodInfo Time_get_time_m621_MethodInfo;
extern "C" float Time_get_time_m621 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_time_m621_ftn) ();
	static Time_get_time_m621_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_time_m621_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_time()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_deltaTime()
extern MethodInfo Time_get_deltaTime_m515_MethodInfo;
extern "C" float Time_get_deltaTime_m515 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m515_ftn) ();
	static Time_get_deltaTime_m515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern MethodInfo Time_get_unscaledTime_m711_MethodInfo;
extern "C" float Time_get_unscaledTime_m711 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledTime_m711_ftn) ();
	static Time_get_unscaledTime_m711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern MethodInfo Time_get_unscaledDeltaTime_m2605_MethodInfo;
extern "C" float Time_get_unscaledDeltaTime_m2605 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m2605_ftn) ();
	static Time_get_unscaledDeltaTime_m2605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m2605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern MethodInfo Time_get_fixedDeltaTime_m692_MethodInfo;
extern "C" float Time_get_fixedDeltaTime_m692 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_fixedDeltaTime_m692_ftn) ();
	static Time_get_fixedDeltaTime_m692_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_fixedDeltaTime_m692_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_fixedDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_smoothDeltaTime()
extern MethodInfo Time_get_smoothDeltaTime_m926_MethodInfo;
extern "C" float Time_get_smoothDeltaTime_m926 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Time_get_smoothDeltaTime_m926_ftn) ();
	static Time_get_smoothDeltaTime_m926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_smoothDeltaTime_m926_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_smoothDeltaTime()");
	return _il2cpp_icall_func();
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Random_t1078_il2cpp_TypeInfo;
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"

extern MethodInfo Random_RandomRangeInt_m6626_MethodInfo;


// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern MethodInfo Random_Range_m6625_MethodInfo;
extern "C" int32_t Random_Range_m6625 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m6626(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Random_RandomRangeInt_m6626_MethodInfo);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m6626 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m6626_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m6626_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m6626_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern MethodInfo Random_get_value_m637_MethodInfo;
extern "C" float Random_get_value_m637 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef float (*Random_get_value_m637_ftn) ();
	static Random_get_value_m637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
extern MethodInfo Random_get_onUnitSphere_m739_MethodInfo;
extern "C" Vector3_t5  Random_get_onUnitSphere_m739 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Vector3_t5  (*Random_get_onUnitSphere_m739_ftn) ();
	static Random_get_onUnitSphere_m739_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_onUnitSphere_m739_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_onUnitSphere()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo YieldInstruction_t983_il2cpp_TypeInfo;



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m6627 (YieldInstruction_t983 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t983_marshal(const YieldInstruction_t983& unmarshaled, YieldInstruction_t983_marshaled& marshaled)
{
}
void YieldInstruction_t983_marshal_back(const YieldInstruction_t983_marshaled& marshaled, YieldInstruction_t983& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t983_marshal_cleanup(YieldInstruction_t983_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlayerPrefs_t1079_il2cpp_TypeInfo;
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"

extern MethodInfo PlayerPrefs_GetString_m6628_MethodInfo;


// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m6628 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m6628_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m6628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m6628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern MethodInfo PlayerPrefs_GetString_m6629_MethodInfo;
extern "C" String_t* PlayerPrefs_GetString_m6629 (Object_t * __this /* static, unused */, String_t* ___key, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m6628(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&PlayerPrefs_GetString_m6628_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Particle_t1080_il2cpp_TypeInfo;
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"



// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern MethodInfo Particle_get_position_m6630_MethodInfo;
extern "C" Vector3_t5  Particle_get_position_m6630 (Particle_t1080 * __this, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern MethodInfo Particle_set_position_m6631_MethodInfo;
extern "C" void Particle_set_position_m6631 (Particle_t1080 * __this, Vector3_t5  ___value, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern MethodInfo Particle_get_velocity_m6632_MethodInfo;
extern "C" Vector3_t5  Particle_get_velocity_m6632 (Particle_t1080 * __this, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern MethodInfo Particle_set_velocity_m6633_MethodInfo;
extern "C" void Particle_set_velocity_m6633 (Particle_t1080 * __this, Vector3_t5  ___value, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern MethodInfo Particle_get_energy_m6634_MethodInfo;
extern "C" float Particle_get_energy_m6634 (Particle_t1080 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern MethodInfo Particle_set_energy_m6635_MethodInfo;
extern "C" void Particle_set_energy_m6635 (Particle_t1080 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern MethodInfo Particle_get_startEnergy_m6636_MethodInfo;
extern "C" float Particle_get_startEnergy_m6636 (Particle_t1080 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern MethodInfo Particle_set_startEnergy_m6637_MethodInfo;
extern "C" void Particle_set_startEnergy_m6637 (Particle_t1080 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern MethodInfo Particle_get_size_m6638_MethodInfo;
extern "C" float Particle_get_size_m6638 (Particle_t1080 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern MethodInfo Particle_set_size_m6639_MethodInfo;
extern "C" void Particle_set_size_m6639 (Particle_t1080 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern MethodInfo Particle_get_rotation_m6640_MethodInfo;
extern "C" float Particle_get_rotation_m6640 (Particle_t1080 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern MethodInfo Particle_set_rotation_m6641_MethodInfo;
extern "C" void Particle_set_rotation_m6641 (Particle_t1080 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern MethodInfo Particle_get_angularVelocity_m6642_MethodInfo;
extern "C" float Particle_get_angularVelocity_m6642 (Particle_t1080 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern MethodInfo Particle_set_angularVelocity_m6643_MethodInfo;
extern "C" void Particle_set_angularVelocity_m6643 (Particle_t1080 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern MethodInfo Particle_get_color_m6644_MethodInfo;
extern "C" Color_t51  Particle_get_color_m6644 (Particle_t1080 * __this, MethodInfo* method)
{
	{
		Color_t51  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern MethodInfo Particle_set_color_m6645_MethodInfo;
extern "C" void Particle_set_color_m6645 (Particle_t1080 * __this, Color_t51  ___value, MethodInfo* method)
{
	{
		Color_t51  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ForceMode_t1081_il2cpp_TypeInfo;
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceModeMethodDeclarations.h"



// UnityEngine.Physics
#include "UnityEngine_UnityEngine_Physics.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics_t1082_il2cpp_TypeInfo;
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"

// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo Physics_INTERNAL_CALL_Internal_Raycast_m6647_MethodInfo;
extern MethodInfo Physics_Internal_Raycast_m6646_MethodInfo;
extern MethodInfo Ray_get_origin_m2583_MethodInfo;
extern MethodInfo Ray_get_direction_m2584_MethodInfo;
extern MethodInfo Physics_Raycast_m6648_MethodInfo;
extern MethodInfo Physics_RaycastAll_m6649_MethodInfo;
extern MethodInfo Physics_INTERNAL_CALL_RaycastAll_m6650_MethodInfo;


// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Internal_Raycast_m6646 (Object_t * __this /* static, unused */, Vector3_t5  ___origin, Vector3_t5  ___direction, RaycastHit_t202 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		RaycastHit_t202 * L_0 = ___hitInfo;
		float L_1 = ___maxDistance;
		int32_t L_2 = ___layermask;
		bool L_3 = Physics_INTERNAL_CALL_Internal_Raycast_m6647(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, /*hidden argument*/&Physics_INTERNAL_CALL_Internal_Raycast_m6647_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_INTERNAL_CALL_Internal_Raycast_m6647 (Object_t * __this /* static, unused */, Vector3_t5 * ___origin, Vector3_t5 * ___direction, RaycastHit_t202 * ___hitInfo, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef bool (*Physics_INTERNAL_CALL_Internal_Raycast_m6647_ftn) (Vector3_t5 *, Vector3_t5 *, RaycastHit_t202 *, float, int32_t);
	static Physics_INTERNAL_CALL_Internal_Raycast_m6647_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_Internal_Raycast_m6647_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___hitInfo, ___maxDistance, ___layermask);
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" bool Physics_Raycast_m6648 (Object_t * __this /* static, unused */, Vector3_t5  ___origin, Vector3_t5  ___direction, RaycastHit_t202 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = ___origin;
		Vector3_t5  L_1 = ___direction;
		RaycastHit_t202 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Internal_Raycast_m6646(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Internal_Raycast_m6646_MethodInfo);
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern MethodInfo Physics_Raycast_m2688_MethodInfo;
extern "C" bool Physics_Raycast_m2688 (Object_t * __this /* static, unused */, Ray_t78  ___ray, RaycastHit_t202 * ___hitInfo, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = Ray_get_origin_m2583((&___ray), /*hidden argument*/&Ray_get_origin_m2583_MethodInfo);
		Vector3_t5  L_1 = Ray_get_direction_m2584((&___ray), /*hidden argument*/&Ray_get_direction_m2584_MethodInfo);
		RaycastHit_t202 * L_2 = ___hitInfo;
		float L_3 = ___maxDistance;
		int32_t L_4 = ___layerMask;
		bool L_5 = Physics_Raycast_m6648(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics_Raycast_m6648_MethodInfo);
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern MethodInfo Physics_RaycastAll_m2595_MethodInfo;
extern "C" RaycastHitU5BU5D_t504* Physics_RaycastAll_m2595 (Object_t * __this /* static, unused */, Ray_t78  ___ray, float ___maxDistance, int32_t ___layerMask, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = Ray_get_origin_m2583((&___ray), /*hidden argument*/&Ray_get_origin_m2583_MethodInfo);
		Vector3_t5  L_1 = Ray_get_direction_m2584((&___ray), /*hidden argument*/&Ray_get_direction_m2584_MethodInfo);
		float L_2 = ___maxDistance;
		int32_t L_3 = ___layerMask;
		RaycastHitU5BU5D_t504* L_4 = Physics_RaycastAll_m6649(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/&Physics_RaycastAll_m6649_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t504* Physics_RaycastAll_m6649 (Object_t * __this /* static, unused */, Vector3_t5  ___origin, Vector3_t5  ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	{
		float L_0 = ___maxDistance;
		int32_t L_1 = ___layermask;
		RaycastHitU5BU5D_t504* L_2 = Physics_INTERNAL_CALL_RaycastAll_m6650(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, /*hidden argument*/&Physics_INTERNAL_CALL_RaycastAll_m6650_MethodInfo);
		return L_2;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
extern "C" RaycastHitU5BU5D_t504* Physics_INTERNAL_CALL_RaycastAll_m6650 (Object_t * __this /* static, unused */, Vector3_t5 * ___origin, Vector3_t5 * ___direction, float ___maxDistance, int32_t ___layermask, MethodInfo* method)
{
	typedef RaycastHitU5BU5D_t504* (*Physics_INTERNAL_CALL_RaycastAll_m6650_ftn) (Vector3_t5 *, Vector3_t5 *, float, int32_t);
	static Physics_INTERNAL_CALL_RaycastAll_m6650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_INTERNAL_CALL_RaycastAll_m6650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)");
	return _il2cpp_icall_func(___origin, ___direction, ___maxDistance, ___layermask);
}
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody_t18_il2cpp_TypeInfo;
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"

extern MethodInfo Rigidbody_INTERNAL_get_velocity_m6651_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_set_velocity_m6652_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_set_angularVelocity_m6653_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_CALL_AddForce_m6654_MethodInfo;
extern MethodInfo Rigidbody_INTERNAL_CALL_AddForceAtPosition_m6655_MethodInfo;


// System.Void UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_get_velocity_m6651 (Rigidbody_t18 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_get_velocity_m6651_ftn) (Rigidbody_t18 *, Vector3_t5 *);
	static Rigidbody_INTERNAL_get_velocity_m6651_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_get_velocity_m6651_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_get_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_velocity_m6652 (Rigidbody_t18 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_velocity_m6652_ftn) (Rigidbody_t18 *, Vector3_t5 *);
	static Rigidbody_INTERNAL_set_velocity_m6652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_velocity_m6652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern MethodInfo Rigidbody_get_velocity_m647_MethodInfo;
extern "C" Vector3_t5  Rigidbody_get_velocity_m647 (Rigidbody_t18 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Rigidbody_INTERNAL_get_velocity_m6651(__this, (&V_0), /*hidden argument*/&Rigidbody_INTERNAL_get_velocity_m6651_MethodInfo);
		Vector3_t5  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern MethodInfo Rigidbody_set_velocity_m554_MethodInfo;
extern "C" void Rigidbody_set_velocity_m554 (Rigidbody_t18 * __this, Vector3_t5  ___value, MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_velocity_m6652(__this, (&___value), /*hidden argument*/&Rigidbody_INTERNAL_set_velocity_m6652_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)
extern "C" void Rigidbody_INTERNAL_set_angularVelocity_m6653 (Rigidbody_t18 * __this, Vector3_t5 * ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_set_angularVelocity_m6653_ftn) (Rigidbody_t18 *, Vector3_t5 *);
	static Rigidbody_INTERNAL_set_angularVelocity_m6653_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_set_angularVelocity_m6653_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_set_angularVelocity(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern MethodInfo Rigidbody_set_angularVelocity_m553_MethodInfo;
extern "C" void Rigidbody_set_angularVelocity_m553 (Rigidbody_t18 * __this, Vector3_t5  ___value, MethodInfo* method)
{
	{
		Rigidbody_INTERNAL_set_angularVelocity_m6653(__this, (&___value), /*hidden argument*/&Rigidbody_INTERNAL_set_angularVelocity_m6653_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.Rigidbody::get_drag()
extern MethodInfo Rigidbody_get_drag_m549_MethodInfo;
extern "C" float Rigidbody_get_drag_m549 (Rigidbody_t18 * __this, MethodInfo* method)
{
	typedef float (*Rigidbody_get_drag_m549_ftn) (Rigidbody_t18 *);
	static Rigidbody_get_drag_m549_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_drag_m549_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_drag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern MethodInfo Rigidbody_set_drag_m551_MethodInfo;
extern "C" void Rigidbody_set_drag_m551 (Rigidbody_t18 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_drag_m551_ftn) (Rigidbody_t18 *, float);
	static Rigidbody_set_drag_m551_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_drag_m551_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_drag(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern MethodInfo Rigidbody_get_angularDrag_m550_MethodInfo;
extern "C" float Rigidbody_get_angularDrag_m550 (Rigidbody_t18 * __this, MethodInfo* method)
{
	typedef float (*Rigidbody_get_angularDrag_m550_ftn) (Rigidbody_t18 *);
	static Rigidbody_get_angularDrag_m550_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_angularDrag_m550_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_angularDrag()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern MethodInfo Rigidbody_set_angularDrag_m552_MethodInfo;
extern "C" void Rigidbody_set_angularDrag_m552 (Rigidbody_t18 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_angularDrag_m552_ftn) (Rigidbody_t18 *, float);
	static Rigidbody_set_angularDrag_m552_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_angularDrag_m552_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_angularDrag(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern MethodInfo Rigidbody_set_useGravity_m646_MethodInfo;
extern "C" void Rigidbody_set_useGravity_m646 (Rigidbody_t18 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_useGravity_m646_ftn) (Rigidbody_t18 *, bool);
	static Rigidbody_set_useGravity_m646_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_useGravity_m646_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
extern MethodInfo Rigidbody_set_freezeRotation_m548_MethodInfo;
extern "C" void Rigidbody_set_freezeRotation_m548 (Rigidbody_t18 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Rigidbody_set_freezeRotation_m548_ftn) (Rigidbody_t18 *, bool);
	static Rigidbody_set_freezeRotation_m548_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_freezeRotation_m548_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern MethodInfo Rigidbody_AddForce_m649_MethodInfo;
extern "C" void Rigidbody_AddForce_m649 (Rigidbody_t18 * __this, Vector3_t5  ___force, int32_t ___mode, MethodInfo* method)
{
	{
		int32_t L_0 = ___mode;
		Rigidbody_INTERNAL_CALL_AddForce_m6654(NULL /*static, unused*/, __this, (&___force), L_0, /*hidden argument*/&Rigidbody_INTERNAL_CALL_AddForce_m6654_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForce_m6654 (Object_t * __this /* static, unused */, Rigidbody_t18 * ___self, Vector3_t5 * ___force, int32_t ___mode, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForce_m6654_ftn) (Rigidbody_t18 *, Vector3_t5 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForce_m6654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForce_m6654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___mode);
}
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
extern MethodInfo Rigidbody_AddForceAtPosition_m555_MethodInfo;
extern "C" void Rigidbody_AddForceAtPosition_m555 (Rigidbody_t18 * __this, Vector3_t5  ___force, Vector3_t5  ___position, int32_t ___mode, MethodInfo* method)
{
	{
		int32_t L_0 = ___mode;
		Rigidbody_INTERNAL_CALL_AddForceAtPosition_m6655(NULL /*static, unused*/, __this, (&___force), (&___position), L_0, /*hidden argument*/&Rigidbody_INTERNAL_CALL_AddForceAtPosition_m6655_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" void Rigidbody_INTERNAL_CALL_AddForceAtPosition_m6655 (Object_t * __this /* static, unused */, Rigidbody_t18 * ___self, Vector3_t5 * ___force, Vector3_t5 * ___position, int32_t ___mode, MethodInfo* method)
{
	typedef void (*Rigidbody_INTERNAL_CALL_AddForceAtPosition_m6655_ftn) (Rigidbody_t18 *, Vector3_t5 *, Vector3_t5 *, int32_t);
	static Rigidbody_INTERNAL_CALL_AddForceAtPosition_m6655_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_INTERNAL_CALL_AddForceAtPosition_m6655_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::INTERNAL_CALL_AddForceAtPosition(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(___self, ___force, ___position, ___mode);
}
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider_t39_il2cpp_TypeInfo;
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"

extern MethodInfo Collider_INTERNAL_CALL_Internal_Raycast_m6657_MethodInfo;
extern MethodInfo Collider_Internal_Raycast_m6656_MethodInfo;


// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern MethodInfo Collider_set_enabled_m961_MethodInfo;
extern "C" void Collider_set_enabled_m961 (Collider_t39 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*Collider_set_enabled_m961_ftn) (Collider_t39 *, bool);
	static Collider_set_enabled_m961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_enabled_m961_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_Internal_Raycast_m6656 (Object_t * __this /* static, unused */, Collider_t39 * ___col, Ray_t78  ___ray, RaycastHit_t202 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	{
		Collider_t39 * L_0 = ___col;
		RaycastHit_t202 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		bool L_3 = Collider_INTERNAL_CALL_Internal_Raycast_m6657(NULL /*static, unused*/, L_0, (&___ray), L_1, L_2, /*hidden argument*/&Collider_INTERNAL_CALL_Internal_Raycast_m6657_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_INTERNAL_CALL_Internal_Raycast_m6657 (Object_t * __this /* static, unused */, Collider_t39 * ___col, Ray_t78 * ___ray, RaycastHit_t202 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	typedef bool (*Collider_INTERNAL_CALL_Internal_Raycast_m6657_ftn) (Collider_t39 *, Ray_t78 *, RaycastHit_t202 *, float);
	static Collider_INTERNAL_CALL_Internal_Raycast_m6657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_INTERNAL_CALL_Internal_Raycast_m6657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)");
	return _il2cpp_icall_func(___col, ___ray, ___hitInfo, ___maxDistance);
}
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern MethodInfo Collider_Raycast_m740_MethodInfo;
extern "C" bool Collider_Raycast_m740 (Collider_t39 * __this, Ray_t78  ___ray, RaycastHit_t202 * ___hitInfo, float ___maxDistance, MethodInfo* method)
{
	{
		Ray_t78  L_0 = ___ray;
		RaycastHit_t202 * L_1 = ___hitInfo;
		float L_2 = ___maxDistance;
		bool L_3 = Collider_Internal_Raycast_m6656(NULL /*static, unused*/, __this, L_0, L_1, L_2, /*hidden argument*/&Collider_Internal_Raycast_m6656_MethodInfo);
		return L_3;
	}
}
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxCollider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BoxCollider_t794_il2cpp_TypeInfo;
// UnityEngine.BoxCollider
#include "UnityEngine_UnityEngine_BoxColliderMethodDeclarations.h"



// UnityEngine.MeshCollider
#include "UnityEngine_UnityEngine_MeshCollider.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MeshCollider_t653_il2cpp_TypeInfo;
// UnityEngine.MeshCollider
#include "UnityEngine_UnityEngine_MeshColliderMethodDeclarations.h"

// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"


// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
extern MethodInfo MeshCollider_set_sharedMesh_m4932_MethodInfo;
extern "C" void MeshCollider_set_sharedMesh_m4932 (MeshCollider_t653 * __this, Mesh_t236 * ___value, MethodInfo* method)
{
	typedef void (*MeshCollider_set_sharedMesh_m4932_ftn) (MeshCollider_t653 *, Mesh_t236 *);
	static MeshCollider_set_sharedMesh_m4932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_set_sharedMesh_m4932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)");
	_il2cpp_icall_func(__this, ___value);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit_t202_il2cpp_TypeInfo;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"

extern MethodInfo RaycastHit_get_collider_m2597_MethodInfo;
extern MethodInfo RaycastHit_CalculateRaycastTexCoord_m6658_MethodInfo;
extern MethodInfo RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m6659_MethodInfo;


// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern MethodInfo RaycastHit_get_point_m2598_MethodInfo;
extern "C" Vector3_t5  RaycastHit_get_point_m2598 (RaycastHit_t202 * __this, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = (__this->___m_Point_0);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern MethodInfo RaycastHit_get_normal_m2599_MethodInfo;
extern "C" Vector3_t5  RaycastHit_get_normal_m2599 (RaycastHit_t202 * __this, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = (__this->___m_Normal_1);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern MethodInfo RaycastHit_get_distance_m762_MethodInfo;
extern "C" float RaycastHit_get_distance_m762 (RaycastHit_t202 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Distance_3);
		return L_0;
	}
}
// System.Void UnityEngine.RaycastHit::CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" void RaycastHit_CalculateRaycastTexCoord_m6658 (Object_t * __this /* static, unused */, Vector2_t48 * ___output, Collider_t39 * ___col, Vector2_t48  ___uv, Vector3_t5  ___point, int32_t ___face, int32_t ___index, MethodInfo* method)
{
	{
		Vector2_t48 * L_0 = ___output;
		Collider_t39 * L_1 = ___col;
		int32_t L_2 = ___face;
		int32_t L_3 = ___index;
		RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m6659(NULL /*static, unused*/, L_0, L_1, (&___uv), (&___point), L_2, L_3, /*hidden argument*/&RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m6659_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)
extern "C" void RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m6659 (Object_t * __this /* static, unused */, Vector2_t48 * ___output, Collider_t39 * ___col, Vector2_t48 * ___uv, Vector3_t5 * ___point, int32_t ___face, int32_t ___index, MethodInfo* method)
{
	typedef void (*RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m6659_ftn) (Vector2_t48 *, Collider_t39 *, Vector2_t48 *, Vector3_t5 *, int32_t, int32_t);
	static RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m6659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RaycastHit_INTERNAL_CALL_CalculateRaycastTexCoord_m6659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RaycastHit::INTERNAL_CALL_CalculateRaycastTexCoord(UnityEngine.Vector2&,UnityEngine.Collider,UnityEngine.Vector2&,UnityEngine.Vector3&,System.Int32,System.Int32)");
	_il2cpp_icall_func(___output, ___col, ___uv, ___point, ___face, ___index);
}
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
extern MethodInfo RaycastHit_get_textureCoord_m763_MethodInfo;
extern "C" Vector2_t48  RaycastHit_get_textureCoord_m763 (RaycastHit_t202 * __this, MethodInfo* method)
{
	Vector2_t48  V_0 = {0};
	{
		Collider_t39 * L_0 = RaycastHit_get_collider_m2597(__this, /*hidden argument*/&RaycastHit_get_collider_m2597_MethodInfo);
		Vector2_t48  L_1 = (__this->___m_UV_4);
		Vector3_t5  L_2 = (__this->___m_Point_0);
		int32_t L_3 = (__this->___m_FaceID_2);
		RaycastHit_CalculateRaycastTexCoord_m6658(NULL /*static, unused*/, (&V_0), L_0, L_1, L_2, L_3, 0, /*hidden argument*/&RaycastHit_CalculateRaycastTexCoord_m6658_MethodInfo);
		Vector2_t48  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t39 * RaycastHit_get_collider_m2597 (RaycastHit_t202 * __this, MethodInfo* method)
{
	{
		Collider_t39 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPoint.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ContactPoint_t1083_il2cpp_TypeInfo;
// UnityEngine.ContactPoint
#include "UnityEngine_UnityEngine_ContactPointMethodDeclarations.h"



// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collision_t40_il2cpp_TypeInfo;
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"



// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern MethodInfo Collision_get_gameObject_m654_MethodInfo;
extern "C" GameObject_t7 * Collision_get_gameObject_m654 (Collision_t40 * __this, MethodInfo* method)
{
	GameObject_t7 * G_B3_0 = {0};
	{
		Rigidbody_t18 * L_0 = (__this->___m_Rigidbody_1);
		bool L_1 = Object_op_Inequality_m527(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Rigidbody_t18 * L_2 = (__this->___m_Rigidbody_1);
		NullCheck(L_2);
		GameObject_t7 * L_3 = Component_get_gameObject_m596(L_2, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_0021:
	{
		Collider_t39 * L_4 = (__this->___m_Collider_2);
		NullCheck(L_4);
		GameObject_t7 * L_5 = Component_get_gameObject_m596(L_4, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Physics2D_t499_il2cpp_TypeInfo;
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_53.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
extern TypeInfo List_1_t1085_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_53MethodDeclarations.h"
extern Il2CppType List_1_t1085_0_0_0;
extern MethodInfo List_1__ctor_m7302_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_Internal_Raycast_m6662_MethodInfo;
extern MethodInfo Physics2D_Raycast_m6663_MethodInfo;
extern MethodInfo Physics2D_Internal_Raycast_m6661_MethodInfo;
extern MethodInfo Physics2D_INTERNAL_CALL_RaycastAll_m6664_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m7302_GenericMethod;


// System.Void UnityEngine.Physics2D::.cctor()
extern MethodInfo Physics2D__cctor_m6660_MethodInfo;
extern TypeInfo* List_1_t1085_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m7302_MethodInfo_var;
extern "C" void Physics2D__cctor_m6660 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Physics2D__cctor_m6660_init;
	if (!Physics2D__cctor_m6660_init)
	{
		List_1_t1085_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1085_0_0_0);
		List_1__ctor_m7302_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m7302_GenericMethod);
		Physics2D__cctor_m6660_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1085_il2cpp_TypeInfo_var);
		List_1_t1085 * L_0 = (List_1_t1085 *)il2cpp_codegen_object_new (List_1_t1085_il2cpp_TypeInfo_var);
		List_1__ctor_m7302(L_0, /*hidden argument*/List_1__ctor_m7302_MethodInfo_var);
		((Physics2D_t499_StaticFields*)InitializedTypeInfo(&Physics2D_t499_il2cpp_TypeInfo)->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m6661 (Object_t * __this /* static, unused */, Vector2_t48  ___origin, Vector2_t48  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t502 * ___raycastHit, MethodInfo* method)
{
	{
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = ___minDepth;
		float L_3 = ___maxDepth;
		RaycastHit2D_t502 * L_4 = ___raycastHit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t499_il2cpp_TypeInfo));
		Physics2D_INTERNAL_CALL_Internal_Raycast_m6662(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Physics2D_INTERNAL_CALL_Internal_Raycast_m6662_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m6662 (Object_t * __this /* static, unused */, Vector2_t48 * ___origin, Vector2_t48 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t502 * ___raycastHit, MethodInfo* method)
{
	typedef void (*Physics2D_INTERNAL_CALL_Internal_Raycast_m6662_ftn) (Vector2_t48 *, Vector2_t48 *, float, int32_t, float, float, RaycastHit2D_t502 *);
	static Physics2D_INTERNAL_CALL_Internal_Raycast_m6662_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_Internal_Raycast_m6662_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)");
	_il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth, ___raycastHit);
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_Raycast_m2689_MethodInfo;
extern "C" RaycastHit2D_t502  Physics2D_Raycast_m2689 (Object_t * __this /* static, unused */, Vector2_t48  ___origin, Vector2_t48  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		Vector2_t48  L_0 = ___origin;
		Vector2_t48  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = V_1;
		float L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t499_il2cpp_TypeInfo));
		RaycastHit2D_t502  L_6 = Physics2D_Raycast_m6663(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/&Physics2D_Raycast_m6663_MethodInfo);
		return L_6;
	}
}
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t502  Physics2D_Raycast_m6663 (Object_t * __this /* static, unused */, Vector2_t48  ___origin, Vector2_t48  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	RaycastHit2D_t502  V_0 = {0};
	{
		Vector2_t48  L_0 = ___origin;
		Vector2_t48  L_1 = ___direction;
		float L_2 = ___distance;
		int32_t L_3 = ___layerMask;
		float L_4 = ___minDepth;
		float L_5 = ___maxDepth;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t499_il2cpp_TypeInfo));
		Physics2D_Internal_Raycast_m6661(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (&V_0), /*hidden argument*/&Physics2D_Internal_Raycast_m6661_MethodInfo);
		RaycastHit2D_t502  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern MethodInfo Physics2D_RaycastAll_m2585_MethodInfo;
extern "C" RaycastHit2DU5BU5D_t501* Physics2D_RaycastAll_m2585 (Object_t * __this /* static, unused */, Vector2_t48  ___origin, Vector2_t48  ___direction, float ___distance, int32_t ___layerMask, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		float L_0 = ___distance;
		int32_t L_1 = ___layerMask;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Physics2D_t499_il2cpp_TypeInfo));
		RaycastHit2DU5BU5D_t501* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m6664(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/&Physics2D_INTERNAL_CALL_RaycastAll_m6664_MethodInfo);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t501* Physics2D_INTERNAL_CALL_RaycastAll_m6664 (Object_t * __this /* static, unused */, Vector2_t48 * ___origin, Vector2_t48 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t501* (*Physics2D_INTERNAL_CALL_RaycastAll_m6664_ftn) (Vector2_t48 *, Vector2_t48 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m6664_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m6664_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RaycastHit2D_t502_il2cpp_TypeInfo;
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
extern MethodInfo RaycastHit2D_get_collider_m2586_MethodInfo;
extern MethodInfo Collider2D_get_attachedRigidbody_m6666_MethodInfo;
extern MethodInfo RaycastHit2D_get_rigidbody_m6665_MethodInfo;


// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern MethodInfo RaycastHit2D_get_point_m2588_MethodInfo;
extern "C" Vector2_t48  RaycastHit2D_get_point_m2588 (RaycastHit2D_t502 * __this, MethodInfo* method)
{
	{
		Vector2_t48  L_0 = (__this->___m_Point_1);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern MethodInfo RaycastHit2D_get_normal_m2589_MethodInfo;
extern "C" Vector2_t48  RaycastHit2D_get_normal_m2589 (RaycastHit2D_t502 * __this, MethodInfo* method)
{
	{
		Vector2_t48  L_0 = (__this->___m_Normal_2);
		return L_0;
	}
}
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern MethodInfo RaycastHit2D_get_fraction_m2690_MethodInfo;
extern "C" float RaycastHit2D_get_fraction_m2690 (RaycastHit2D_t502 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Fraction_4);
		return L_0;
	}
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t503 * RaycastHit2D_get_collider_m2586 (RaycastHit2D_t502 * __this, MethodInfo* method)
{
	{
		Collider2D_t503 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t1086 * RaycastHit2D_get_rigidbody_m6665 (RaycastHit2D_t502 * __this, MethodInfo* method)
{
	Rigidbody2D_t1086 * G_B3_0 = {0};
	{
		Collider2D_t503 * L_0 = RaycastHit2D_get_collider_m2586(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2586_MethodInfo);
		bool L_1 = Object_op_Inequality_m527(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t503 * L_2 = RaycastHit2D_get_collider_m2586(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2586_MethodInfo);
		NullCheck(L_2);
		Rigidbody2D_t1086 * L_3 = Collider2D_get_attachedRigidbody_m6666(L_2, /*hidden argument*/&Collider2D_get_attachedRigidbody_m6666_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t1086 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern MethodInfo RaycastHit2D_get_transform_m2587_MethodInfo;
extern "C" Transform_t2 * RaycastHit2D_get_transform_m2587 (RaycastHit2D_t502 * __this, MethodInfo* method)
{
	Rigidbody2D_t1086 * V_0 = {0};
	{
		Rigidbody2D_t1086 * L_0 = RaycastHit2D_get_rigidbody_m6665(__this, /*hidden argument*/&RaycastHit2D_get_rigidbody_m6665_MethodInfo);
		V_0 = L_0;
		Rigidbody2D_t1086 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m527(NULL /*static, unused*/, L_1, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t1086 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t2 * L_4 = Component_get_transform_m508(L_3, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t503 * L_5 = RaycastHit2D_get_collider_m2586(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2586_MethodInfo);
		bool L_6 = Object_op_Inequality_m527(NULL /*static, unused*/, L_5, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t503 * L_7 = RaycastHit2D_get_collider_m2586(__this, /*hidden argument*/&RaycastHit2D_get_collider_m2586_MethodInfo);
		NullCheck(L_7);
		Transform_t2 * L_8 = Component_get_transform_m508(L_7, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t2 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Rigidbody2D_t1086_il2cpp_TypeInfo;
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collider2D_t503_il2cpp_TypeInfo;



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t1086 * Collider2D_get_attachedRigidbody_m6666 (Collider2D_t503 * __this, MethodInfo* method)
{
	typedef Rigidbody2D_t1086 * (*Collider2D_get_attachedRigidbody_m6666_ftn) (Collider2D_t503 *);
	static Collider2D_get_attachedRigidbody_m6666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m6666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioConfigurationChangeHandler_t1087_il2cpp_TypeInfo;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern MethodInfo AudioConfigurationChangeHandler__ctor_m6667_MethodInfo;
extern "C" void AudioConfigurationChangeHandler__ctor_m6667 (AudioConfigurationChangeHandler_t1087 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern MethodInfo AudioConfigurationChangeHandler_Invoke_m6668_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_Invoke_m6668 (AudioConfigurationChangeHandler_t1087 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m6668((AudioConfigurationChangeHandler_t1087 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t1087(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m6669_MethodInfo;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m6669 (AudioConfigurationChangeHandler_t1087 * __this, bool ___deviceWasChanged, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo), &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern MethodInfo AudioConfigurationChangeHandler_EndInvoke_m6670_MethodInfo;
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m6670 (AudioConfigurationChangeHandler_t1087 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioSettings_t1088_il2cpp_TypeInfo;
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern MethodInfo AudioSettings_InvokeOnAudioConfigurationChanged_m6671_MethodInfo;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m6671 (AudioSettings_t1088 * __this, bool ___deviceWasChanged, MethodInfo* method)
{
	{
		AudioConfigurationChangeHandler_t1087 * L_0 = ((AudioSettings_t1088_StaticFields*)InitializedTypeInfo(&AudioSettings_t1088_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t1087 * L_1 = ((AudioSettings_t1088_StaticFields*)InitializedTypeInfo(&AudioSettings_t1088_il2cpp_TypeInfo)->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(&AudioConfigurationChangeHandler_Invoke_m6668_MethodInfo, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMReaderCallback_t1089_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMReaderCallback__ctor_m6672_MethodInfo;
extern "C" void PCMReaderCallback__ctor_m6672 (PCMReaderCallback_t1089 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern MethodInfo PCMReaderCallback_Invoke_m6673_MethodInfo;
extern "C" void PCMReaderCallback_Invoke_m6673 (PCMReaderCallback_t1089 * __this, SingleU5BU5D_t25* ___data, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m6673((PCMReaderCallback_t1089 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t25* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t25* ___data, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern TypeInfo Single_t43_il2cpp_TypeInfo;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t1089(Il2CppObject* delegate, SingleU5BU5D_t25* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern MethodInfo PCMReaderCallback_BeginInvoke_m6674_MethodInfo;
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m6674 (PCMReaderCallback_t1089 * __this, SingleU5BU5D_t25* ___data, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMReaderCallback_EndInvoke_m6675_MethodInfo;
extern "C" void PCMReaderCallback_EndInvoke_m6675 (PCMReaderCallback_t1089 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PCMSetPositionCallback_t1090_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PCMSetPositionCallback__ctor_m6676_MethodInfo;
extern "C" void PCMSetPositionCallback__ctor_m6676 (PCMSetPositionCallback_t1090 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern MethodInfo PCMSetPositionCallback_Invoke_m6677_MethodInfo;
extern "C" void PCMSetPositionCallback_Invoke_m6677 (PCMSetPositionCallback_t1090 * __this, int32_t ___position, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m6677((PCMSetPositionCallback_t1090 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t1090(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo PCMSetPositionCallback_BeginInvoke_m6678_MethodInfo;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m6678 (PCMSetPositionCallback_t1090 * __this, int32_t ___position, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PCMSetPositionCallback_EndInvoke_m6679_MethodInfo;
extern "C" void PCMSetPositionCallback_EndInvoke_m6679 (PCMSetPositionCallback_t1090 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AudioClip_t1091_il2cpp_TypeInfo;
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"

extern TypeInfo SingleU5BU5D_t25_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;


// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern MethodInfo AudioClip_InvokePCMReaderCallback_Internal_m6680_MethodInfo;
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m6680 (AudioClip_t1091 * __this, SingleU5BU5D_t25* ___data, MethodInfo* method)
{
	{
		PCMReaderCallback_t1089 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t1089 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t25* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t25* >::Invoke(&PCMReaderCallback_Invoke_m6673_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern MethodInfo AudioClip_InvokePCMSetPositionCallback_Internal_m6681_MethodInfo;
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m6681 (AudioClip_t1091 * __this, int32_t ___position, MethodInfo* method)
{
	{
		PCMSetPositionCallback_t1090 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t1090 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(&PCMSetPositionCallback_Invoke_m6677_MethodInfo, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamDevice_t931_il2cpp_TypeInfo;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern MethodInfo WebCamDevice_get_name_m5545_MethodInfo;
extern "C" String_t* WebCamDevice_get_name_m5545 (WebCamDevice_t931 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern MethodInfo WebCamDevice_get_isFrontFacing_m6682_MethodInfo;
extern "C" bool WebCamDevice_get_isFrontFacing_m6682 (WebCamDevice_t931 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t931_marshal(const WebCamDevice_t931& unmarshaled, WebCamDevice_t931_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t931_marshal_back(const WebCamDevice_t931_marshaled& marshaled, WebCamDevice_t931& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t931_marshal_cleanup(WebCamDevice_t931_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.WebCamTexture
#include "UnityEngine_UnityEngine_WebCamTexture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamTexture_t754_il2cpp_TypeInfo;
// UnityEngine.WebCamTexture
#include "UnityEngine_UnityEngine_WebCamTextureMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern MethodInfo Texture__ctor_m6054_MethodInfo;
extern MethodInfo WebCamTexture_Internal_CreateWebCamTexture_m6683_MethodInfo;
extern MethodInfo WebCamTexture_INTERNAL_CALL_Play_m6684_MethodInfo;
extern MethodInfo WebCamTexture_INTERNAL_CALL_Stop_m6685_MethodInfo;


// System.Void UnityEngine.WebCamTexture::.ctor()
extern MethodInfo WebCamTexture__ctor_m5200_MethodInfo;
extern "C" void WebCamTexture__ctor_m5200 (WebCamTexture_t754 * __this, MethodInfo* method)
{
	{
		Texture__ctor_m6054(__this, /*hidden argument*/&Texture__ctor_m6054_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		WebCamTexture_Internal_CreateWebCamTexture_m6683(NULL /*static, unused*/, __this, L_0, 0, 0, 0, /*hidden argument*/&WebCamTexture_Internal_CreateWebCamTexture_m6683_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C" void WebCamTexture_Internal_CreateWebCamTexture_m6683 (Object_t * __this /* static, unused */, WebCamTexture_t754 * ___self, String_t* ___scriptingDevice, int32_t ___requestedWidth, int32_t ___requestedHeight, int32_t ___maxFramerate, MethodInfo* method)
{
	typedef void (*WebCamTexture_Internal_CreateWebCamTexture_m6683_ftn) (WebCamTexture_t754 *, String_t*, int32_t, int32_t, int32_t);
	static WebCamTexture_Internal_CreateWebCamTexture_m6683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Internal_CreateWebCamTexture_m6683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___self, ___scriptingDevice, ___requestedWidth, ___requestedHeight, ___maxFramerate);
}
// System.Void UnityEngine.WebCamTexture::Play()
extern MethodInfo WebCamTexture_Play_m5205_MethodInfo;
extern "C" void WebCamTexture_Play_m5205 (WebCamTexture_t754 * __this, MethodInfo* method)
{
	{
		WebCamTexture_INTERNAL_CALL_Play_m6684(NULL /*static, unused*/, __this, /*hidden argument*/&WebCamTexture_INTERNAL_CALL_Play_m6684_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Play_m6684 (Object_t * __this /* static, unused */, WebCamTexture_t754 * ___self, MethodInfo* method)
{
	typedef void (*WebCamTexture_INTERNAL_CALL_Play_m6684_ftn) (WebCamTexture_t754 *);
	static WebCamTexture_INTERNAL_CALL_Play_m6684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_INTERNAL_CALL_Play_m6684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)");
	_il2cpp_icall_func(___self);
}
// System.Void UnityEngine.WebCamTexture::Stop()
extern MethodInfo WebCamTexture_Stop_m5206_MethodInfo;
extern "C" void WebCamTexture_Stop_m5206 (WebCamTexture_t754 * __this, MethodInfo* method)
{
	{
		WebCamTexture_INTERNAL_CALL_Stop_m6685(NULL /*static, unused*/, __this, /*hidden argument*/&WebCamTexture_INTERNAL_CALL_Stop_m6685_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Stop_m6685 (Object_t * __this /* static, unused */, WebCamTexture_t754 * ___self, MethodInfo* method)
{
	typedef void (*WebCamTexture_INTERNAL_CALL_Stop_m6685_ftn) (WebCamTexture_t754 *);
	static WebCamTexture_INTERNAL_CALL_Stop_m6685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_INTERNAL_CALL_Stop_m6685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)");
	_il2cpp_icall_func(___self);
}
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern MethodInfo WebCamTexture_get_isPlaying_m5199_MethodInfo;
extern "C" bool WebCamTexture_get_isPlaying_m5199 (WebCamTexture_t754 * __this, MethodInfo* method)
{
	typedef bool (*WebCamTexture_get_isPlaying_m5199_ftn) (WebCamTexture_t754 *);
	static WebCamTexture_get_isPlaying_m5199_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_isPlaying_m5199_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern MethodInfo WebCamTexture_set_deviceName_m5201_MethodInfo;
extern "C" void WebCamTexture_set_deviceName_m5201 (WebCamTexture_t754 * __this, String_t* ___value, MethodInfo* method)
{
	typedef void (*WebCamTexture_set_deviceName_m5201_ftn) (WebCamTexture_t754 *, String_t*);
	static WebCamTexture_set_deviceName_m5201_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_deviceName_m5201_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_deviceName(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern MethodInfo WebCamTexture_set_requestedFPS_m5202_MethodInfo;
extern "C" void WebCamTexture_set_requestedFPS_m5202 (WebCamTexture_t754 * __this, float ___value, MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedFPS_m5202_ftn) (WebCamTexture_t754 *, float);
	static WebCamTexture_set_requestedFPS_m5202_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedFPS_m5202_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedFPS(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern MethodInfo WebCamTexture_set_requestedWidth_m5203_MethodInfo;
extern "C" void WebCamTexture_set_requestedWidth_m5203 (WebCamTexture_t754 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedWidth_m5203_ftn) (WebCamTexture_t754 *, int32_t);
	static WebCamTexture_set_requestedWidth_m5203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedWidth_m5203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern MethodInfo WebCamTexture_set_requestedHeight_m5204_MethodInfo;
extern "C" void WebCamTexture_set_requestedHeight_m5204 (WebCamTexture_t754 * __this, int32_t ___value, MethodInfo* method)
{
	typedef void (*WebCamTexture_set_requestedHeight_m5204_ftn) (WebCamTexture_t754 *, int32_t);
	static WebCamTexture_set_requestedHeight_m5204_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedHeight_m5204_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern MethodInfo WebCamTexture_get_devices_m5544_MethodInfo;
extern "C" WebCamDeviceU5BU5D_t932* WebCamTexture_get_devices_m5544 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef WebCamDeviceU5BU5D_t932* (*WebCamTexture_get_devices_m5544_ftn) ();
	static WebCamTexture_get_devices_m5544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_devices_m5544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_devices()");
	return _il2cpp_icall_func();
}
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern MethodInfo WebCamTexture_get_didUpdateThisFrame_m5198_MethodInfo;
extern "C" bool WebCamTexture_get_didUpdateThisFrame_m5198 (WebCamTexture_t754 * __this, MethodInfo* method)
{
	typedef bool (*WebCamTexture_get_didUpdateThisFrame_m5198_ftn) (WebCamTexture_t754 *);
	static WebCamTexture_get_didUpdateThisFrame_m5198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_didUpdateThisFrame_m5198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_didUpdateThisFrame()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEventSource_t1092_il2cpp_TypeInfo;
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationEvent_t1094_il2cpp_TypeInfo;
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern MethodInfo AnimationEvent_get_isFiredByLegacy_m6703_MethodInfo;
extern MethodInfo AnimationEvent_get_isFiredByAnimator_m6704_MethodInfo;
extern MethodInfo AnimationEvent_get_functionName_m6697_MethodInfo;
extern MethodInfo String_GetHashCode_m7229_MethodInfo;
extern MethodInfo AnimationEvent_get_time_m6699_MethodInfo;
extern MethodInfo Single_GetHashCode_m7226_MethodInfo;


// System.Void UnityEngine.AnimationEvent::.ctor()
extern MethodInfo AnimationEvent__ctor_m6686_MethodInfo;
extern "C" void AnimationEvent__ctor_m6686 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t172 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t1093 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern MethodInfo AnimationEvent_get_data_m6687_MethodInfo;
extern "C" String_t* AnimationEvent_get_data_m6687 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern MethodInfo AnimationEvent_set_data_m6688_MethodInfo;
extern "C" void AnimationEvent_set_data_m6688 (AnimationEvent_t1094 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern MethodInfo AnimationEvent_get_stringParameter_m6689_MethodInfo;
extern "C" String_t* AnimationEvent_get_stringParameter_m6689 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern MethodInfo AnimationEvent_set_stringParameter_m6690_MethodInfo;
extern "C" void AnimationEvent_set_stringParameter_m6690 (AnimationEvent_t1094 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern MethodInfo AnimationEvent_get_floatParameter_m6691_MethodInfo;
extern "C" float AnimationEvent_get_floatParameter_m6691 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern MethodInfo AnimationEvent_set_floatParameter_m6692_MethodInfo;
extern "C" void AnimationEvent_set_floatParameter_m6692 (AnimationEvent_t1094 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern MethodInfo AnimationEvent_get_intParameter_m6693_MethodInfo;
extern "C" int32_t AnimationEvent_get_intParameter_m6693 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern MethodInfo AnimationEvent_set_intParameter_m6694_MethodInfo;
extern "C" void AnimationEvent_set_intParameter_m6694 (AnimationEvent_t1094 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern MethodInfo AnimationEvent_get_objectReferenceParameter_m6695_MethodInfo;
extern "C" Object_t172 * AnimationEvent_get_objectReferenceParameter_m6695 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		Object_t172 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern MethodInfo AnimationEvent_set_objectReferenceParameter_m6696_MethodInfo;
extern "C" void AnimationEvent_set_objectReferenceParameter_m6696 (AnimationEvent_t1094 * __this, Object_t172 * ___value, MethodInfo* method)
{
	{
		Object_t172 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m6697 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern MethodInfo AnimationEvent_set_functionName_m6698_MethodInfo;
extern "C" void AnimationEvent_set_functionName_m6698 (AnimationEvent_t1094 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m6699 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern MethodInfo AnimationEvent_set_time_m6700_MethodInfo;
extern "C" void AnimationEvent_set_time_m6700 (AnimationEvent_t1094 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern MethodInfo AnimationEvent_get_messageOptions_m6701_MethodInfo;
extern "C" int32_t AnimationEvent_get_messageOptions_m6701 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern MethodInfo AnimationEvent_set_messageOptions_m6702_MethodInfo;
extern "C" void AnimationEvent_set_messageOptions_m6702 (AnimationEvent_t1094 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m6703 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m6704 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern MethodInfo AnimationEvent_get_animationState_m6705_MethodInfo;
extern "C" AnimationState_t1093 * AnimationEvent_get_animationState_m6705 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m6703(__this, /*hidden argument*/&AnimationEvent_get_isFiredByLegacy_m6703_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m796(NULL /*static, unused*/, (String_t*) &_stringLiteral444, /*hidden argument*/&Debug_LogError_m796_MethodInfo);
	}

IL_0015:
	{
		AnimationState_t1093 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern MethodInfo AnimationEvent_get_animatorStateInfo_m6706_MethodInfo;
extern "C" AnimatorStateInfo_t1095  AnimationEvent_get_animatorStateInfo_m6706 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m6704(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m6704_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m796(NULL /*static, unused*/, (String_t*) &_stringLiteral445, /*hidden argument*/&Debug_LogError_m796_MethodInfo);
	}

IL_0015:
	{
		AnimatorStateInfo_t1095  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern MethodInfo AnimationEvent_get_animatorClipInfo_m6707_MethodInfo;
extern "C" AnimatorClipInfo_t1096  AnimationEvent_get_animatorClipInfo_m6707 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m6704(__this, /*hidden argument*/&AnimationEvent_get_isFiredByAnimator_m6704_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m796(NULL /*static, unused*/, (String_t*) &_stringLiteral446, /*hidden argument*/&Debug_LogError_m796_MethodInfo);
	}

IL_0015:
	{
		AnimatorClipInfo_t1096  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern MethodInfo AnimationEvent_GetHash_m6708_MethodInfo;
extern "C" int32_t AnimationEvent_GetHash_m6708 (AnimationEvent_t1094 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m6697(__this, /*hidden argument*/&AnimationEvent_get_functionName_m6697_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m7229_MethodInfo, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m6699(__this, /*hidden argument*/&AnimationEvent_get_time_m6699_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m7226((&V_1), /*hidden argument*/&Single_GetHashCode_m7226_MethodInfo);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Keyframe_t1097_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationCurve_t1098_il2cpp_TypeInfo;
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"

extern MethodInfo AnimationCurve_Init_m6713_MethodInfo;
extern MethodInfo AnimationCurve_Cleanup_m6711_MethodInfo;


// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern MethodInfo AnimationCurve__ctor_m6709_MethodInfo;
extern "C" void AnimationCurve__ctor_m6709 (AnimationCurve_t1098 * __this, KeyframeU5BU5D_t1099* ___keys, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		KeyframeU5BU5D_t1099* L_0 = ___keys;
		AnimationCurve_Init_m6713(__this, L_0, /*hidden argument*/&AnimationCurve_Init_m6713_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern MethodInfo AnimationCurve__ctor_m6710_MethodInfo;
extern "C" void AnimationCurve__ctor_m6710 (AnimationCurve_t1098 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		AnimationCurve_Init_m6713(__this, (KeyframeU5BU5D_t1099*)(KeyframeU5BU5D_t1099*)NULL, /*hidden argument*/&AnimationCurve_Init_m6713_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m6711 (AnimationCurve_t1098 * __this, MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m6711_ftn) (AnimationCurve_t1098 *);
	static AnimationCurve_Cleanup_m6711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m6711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern MethodInfo AnimationCurve_Finalize_m6712_MethodInfo;
extern "C" void AnimationCurve_Finalize_m6712 (AnimationCurve_t1098 * __this, MethodInfo* method)
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
		AnimationCurve_Cleanup_m6711(__this, /*hidden argument*/&AnimationCurve_Cleanup_m6711_MethodInfo);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1044(__this, /*hidden argument*/&Object_Finalize_m1044_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m6713 (AnimationCurve_t1098 * __this, KeyframeU5BU5D_t1099* ___keys, MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m6713_ftn) (AnimationCurve_t1098 *, KeyframeU5BU5D_t1099*);
	static AnimationCurve_Init_m6713_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m6713_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t1098_marshal(const AnimationCurve_t1098& unmarshaled, AnimationCurve_t1098_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t1098_marshal_back(const AnimationCurve_t1098_marshaled& marshaled, AnimationCurve_t1098& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t1098_marshal_cleanup(AnimationCurve_t1098_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimationState_t1093_il2cpp_TypeInfo;
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorClipInfo_t1096_il2cpp_TypeInfo;
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorStateInfo_t1095_il2cpp_TypeInfo;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo Animator_StringToHash_m6732_MethodInfo;


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern MethodInfo AnimatorStateInfo_IsName_m6714_MethodInfo;
extern "C" bool AnimatorStateInfo_IsName_m6714 (AnimatorStateInfo_t1095 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m6732(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m6732_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern MethodInfo AnimatorStateInfo_get_fullPathHash_m6715_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m6715 (AnimatorStateInfo_t1095 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern MethodInfo AnimatorStateInfo_get_nameHash_m6716_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_nameHash_m6716 (AnimatorStateInfo_t1095 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern MethodInfo AnimatorStateInfo_get_shortNameHash_m6717_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m6717 (AnimatorStateInfo_t1095 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern MethodInfo AnimatorStateInfo_get_normalizedTime_m6718_MethodInfo;
extern "C" float AnimatorStateInfo_get_normalizedTime_m6718 (AnimatorStateInfo_t1095 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern MethodInfo AnimatorStateInfo_get_length_m6719_MethodInfo;
extern "C" float AnimatorStateInfo_get_length_m6719 (AnimatorStateInfo_t1095 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern MethodInfo AnimatorStateInfo_get_tagHash_m6720_MethodInfo;
extern "C" int32_t AnimatorStateInfo_get_tagHash_m6720 (AnimatorStateInfo_t1095 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern MethodInfo AnimatorStateInfo_IsTag_m6721_MethodInfo;
extern "C" bool AnimatorStateInfo_IsTag_m6721 (AnimatorStateInfo_t1095 * __this, String_t* ___tag, MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m6732(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m6732_MethodInfo);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern MethodInfo AnimatorStateInfo_get_loop_m6722_MethodInfo;
extern "C" bool AnimatorStateInfo_get_loop_m6722 (AnimatorStateInfo_t1095 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AnimatorTransitionInfo_t1101_il2cpp_TypeInfo;
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsName_m6723_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsName_m6723 (AnimatorTransitionInfo_t1101 * __this, String_t* ___name, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m6732(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m6732_MethodInfo);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m6732(NULL /*static, unused*/, L_3, /*hidden argument*/&Animator_StringToHash_m6732_MethodInfo);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern MethodInfo AnimatorTransitionInfo_IsUserName_m6724_MethodInfo;
extern "C" bool AnimatorTransitionInfo_IsUserName_m6724 (AnimatorTransitionInfo_t1101 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m6732(NULL /*static, unused*/, L_0, /*hidden argument*/&Animator_StringToHash_m6732_MethodInfo);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern MethodInfo AnimatorTransitionInfo_get_fullPathHash_m6725_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m6725 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern MethodInfo AnimatorTransitionInfo_get_nameHash_m6726_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m6726 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern MethodInfo AnimatorTransitionInfo_get_userNameHash_m6727_MethodInfo;
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m6727 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern MethodInfo AnimatorTransitionInfo_get_normalizedTime_m6728_MethodInfo;
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m6728 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern MethodInfo AnimatorTransitionInfo_get_anyState_m6729_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_anyState_m6729 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern MethodInfo AnimatorTransitionInfo_get_entry_m6730_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_entry_m6730 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern MethodInfo AnimatorTransitionInfo_get_exit_m6731_MethodInfo;
extern "C" bool AnimatorTransitionInfo_get_exit_m6731 (AnimatorTransitionInfo_t1101 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t1101_marshal(const AnimatorTransitionInfo_t1101& unmarshaled, AnimatorTransitionInfo_t1101_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t1101_marshal_back(const AnimatorTransitionInfo_t1101_marshaled& marshaled, AnimatorTransitionInfo_t1101& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t1101_marshal_cleanup(AnimatorTransitionInfo_t1101_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Animator_t3_il2cpp_TypeInfo;

// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorController.h"
extern MethodInfo Animator_SetBoolString_m6733_MethodInfo;
extern MethodInfo Animator_SetTriggerString_m6734_MethodInfo;
extern MethodInfo Animator_ResetTriggerString_m6735_MethodInfo;


// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern MethodInfo Animator_SetBool_m519_MethodInfo;
extern "C" void Animator_SetBool_m519 (Animator_t3 * __this, String_t* ___name, bool ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		Animator_SetBoolString_m6733(__this, L_0, L_1, /*hidden argument*/&Animator_SetBoolString_m6733_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern MethodInfo Animator_SetTrigger_m2893_MethodInfo;
extern "C" void Animator_SetTrigger_m2893 (Animator_t3 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_SetTriggerString_m6734(__this, L_0, /*hidden argument*/&Animator_SetTriggerString_m6734_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern MethodInfo Animator_ResetTrigger_m2892_MethodInfo;
extern "C" void Animator_ResetTrigger_m2892 (Animator_t3 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Animator_ResetTriggerString_m6735(__this, L_0, /*hidden argument*/&Animator_ResetTriggerString_m6735_MethodInfo);
		return;
	}
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern MethodInfo Animator_get_runtimeAnimatorController_m2891_MethodInfo;
extern "C" RuntimeAnimatorController_t531 * Animator_get_runtimeAnimatorController_m2891 (Animator_t3 * __this, MethodInfo* method)
{
	typedef RuntimeAnimatorController_t531 * (*Animator_get_runtimeAnimatorController_m2891_ftn) (Animator_t3 *);
	static Animator_get_runtimeAnimatorController_m2891_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m2891_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m6732 (Object_t * __this /* static, unused */, String_t* ___name, MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m6732_ftn) (String_t*);
	static Animator_StringToHash_m6732_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m6732_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m6733 (Animator_t3 * __this, String_t* ___name, bool ___value, MethodInfo* method)
{
	typedef void (*Animator_SetBoolString_m6733_ftn) (Animator_t3 *, String_t*, bool);
	static Animator_SetBoolString_m6733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m6733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name, ___value);
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m6734 (Animator_t3 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_SetTriggerString_m6734_ftn) (Animator_t3 *, String_t*);
	static Animator_SetTriggerString_m6734_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m6734_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m6735 (Animator_t3 * __this, String_t* ___name, MethodInfo* method)
{
	typedef void (*Animator_ResetTriggerString_m6735_ftn) (Animator_t3 *, String_t*);
	static Animator_ResetTriggerString_m6735_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m6735_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkeletonBone_t1102_il2cpp_TypeInfo;
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t1102_marshal(const SkeletonBone_t1102& unmarshaled, SkeletonBone_t1102_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t1102_marshal_back(const SkeletonBone_t1102_marshaled& marshaled, SkeletonBone_t1102& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t1102_marshal_cleanup(SkeletonBone_t1102_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanLimit_t1103_il2cpp_TypeInfo;
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HumanBone_t1104_il2cpp_TypeInfo;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern MethodInfo HumanBone_get_boneName_m6736_MethodInfo;
extern "C" String_t* HumanBone_get_boneName_m6736 (HumanBone_t1104 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern MethodInfo HumanBone_set_boneName_m6737_MethodInfo;
extern "C" void HumanBone_set_boneName_m6737 (HumanBone_t1104 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern MethodInfo HumanBone_get_humanName_m6738_MethodInfo;
extern "C" String_t* HumanBone_get_humanName_m6738 (HumanBone_t1104 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern MethodInfo HumanBone_set_humanName_m6739_MethodInfo;
extern "C" void HumanBone_set_humanName_m6739 (HumanBone_t1104 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t1104_marshal(const HumanBone_t1104& unmarshaled, HumanBone_t1104_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t1104_marshal_back(const HumanBone_t1104_marshaled& marshaled, HumanBone_t1104& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t1104_marshal_cleanup(HumanBone_t1104_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RuntimeAnimatorController_t531_il2cpp_TypeInfo;
// UnityEngine.RuntimeAnimatorController
#include "UnityEngine_UnityEngine_RuntimeAnimatorControllerMethodDeclarations.h"



// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextAnchor_t538_il2cpp_TypeInfo;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HorizontalWrapMode_t569_il2cpp_TypeInfo;
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VerticalWrapMode_t570_il2cpp_TypeInfo;
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CharacterInfo_t1105_il2cpp_TypeInfo;
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

extern TypeInfo Vector2_t48_il2cpp_TypeInfo;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
extern MethodInfo Rect_get_width_m765_MethodInfo;
extern MethodInfo Rect_get_height_m767_MethodInfo;
extern MethodInfo Rect_get_x_m841_MethodInfo;
extern MethodInfo Rect_get_y_m845_MethodInfo;
extern MethodInfo Vector2__ctor_m588_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m6748_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m6751_MethodInfo;
extern MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m6749_MethodInfo;
extern MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m6750_MethodInfo;


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern MethodInfo CharacterInfo_get_advance_m6740_MethodInfo;
extern "C" int32_t CharacterInfo_get_advance_m6740 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern MethodInfo CharacterInfo_get_glyphWidth_m6741_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphWidth_m6741 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m765(L_0, /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern MethodInfo CharacterInfo_get_glyphHeight_m6742_MethodInfo;
extern "C" int32_t CharacterInfo_get_glyphHeight_m6742 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m767(L_0, /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern MethodInfo CharacterInfo_get_bearing_m6743_MethodInfo;
extern "C" int32_t CharacterInfo_get_bearing_m6743 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m841(L_0, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern MethodInfo CharacterInfo_get_minY_m6744_MethodInfo;
extern "C" int32_t CharacterInfo_get_minY_m6744 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t62 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m845(L_1, /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		Rect_t62 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m767(L_3, /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern MethodInfo CharacterInfo_get_maxY_m6745_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxY_m6745 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t62 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m845(L_1, /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern MethodInfo CharacterInfo_get_minX_m6746_MethodInfo;
extern "C" int32_t CharacterInfo_get_minX_m6746 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m841(L_0, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern MethodInfo CharacterInfo_get_maxX_m6747_MethodInfo;
extern "C" int32_t CharacterInfo_get_maxX_m6747 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m841(L_0, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		Rect_t62 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m765(L_2, /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t48  CharacterInfo_get_uvBottomLeftUnFlipped_m6748 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m841(L_0, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		Rect_t62 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m845(L_2, /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		Vector2_t48  L_4 = {0};
		Vector2__ctor_m588(&L_4, L_1, L_3, /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t48  CharacterInfo_get_uvBottomRightUnFlipped_m6749 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m841(L_0, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		Rect_t62 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m765(L_2, /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		Rect_t62 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m845(L_4, /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		Vector2_t48  L_6 = {0};
		Vector2__ctor_m588(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t48  CharacterInfo_get_uvTopRightUnFlipped_m6750 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m841(L_0, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		Rect_t62 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m765(L_2, /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		Rect_t62 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m845(L_4, /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		Rect_t62 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m767(L_6, /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		Vector2_t48  L_8 = {0};
		Vector2__ctor_m588(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t48  CharacterInfo_get_uvTopLeftUnFlipped_m6751 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	{
		Rect_t62 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m841(L_0, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		Rect_t62 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m845(L_2, /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		Rect_t62 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m767(L_4, /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		Vector2_t48  L_6 = {0};
		Vector2__ctor_m588(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern MethodInfo CharacterInfo_get_uvBottomLeft_m6752_MethodInfo;
extern "C" Vector2_t48  CharacterInfo_get_uvBottomLeft_m6752 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	Vector2_t48  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t48  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m6748(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m6748_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t48  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m6748(__this, /*hidden argument*/&CharacterInfo_get_uvBottomLeftUnFlipped_m6748_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern MethodInfo CharacterInfo_get_uvBottomRight_m6753_MethodInfo;
extern "C" Vector2_t48  CharacterInfo_get_uvBottomRight_m6753 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	Vector2_t48  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t48  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m6751(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m6751_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t48  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m6749(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m6749_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern MethodInfo CharacterInfo_get_uvTopRight_m6754_MethodInfo;
extern "C" Vector2_t48  CharacterInfo_get_uvTopRight_m6754 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	Vector2_t48  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t48  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m6750(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m6750_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t48  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m6750(__this, /*hidden argument*/&CharacterInfo_get_uvTopRightUnFlipped_m6750_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern MethodInfo CharacterInfo_get_uvTopLeft_m6755_MethodInfo;
extern "C" Vector2_t48  CharacterInfo_get_uvTopLeft_m6755 (CharacterInfo_t1105 * __this, MethodInfo* method)
{
	Vector2_t48  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t48  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m6749(__this, /*hidden argument*/&CharacterInfo_get_uvBottomRightUnFlipped_m6749_MethodInfo);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t48  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m6751(__this, /*hidden argument*/&CharacterInfo_get_uvTopLeftUnFlipped_m6751_MethodInfo);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t1105_marshal(const CharacterInfo_t1105& unmarshaled, CharacterInfo_t1105_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t1105_marshal_back(const CharacterInfo_t1105_marshaled& marshaled, CharacterInfo_t1105& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t1105_marshal_cleanup(CharacterInfo_t1105_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FontTextureRebuildCallback_t1106_il2cpp_TypeInfo;
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo FontTextureRebuildCallback__ctor_m6756_MethodInfo;
extern "C" void FontTextureRebuildCallback__ctor_m6756 (FontTextureRebuildCallback_t1106 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern MethodInfo FontTextureRebuildCallback_Invoke_m6757_MethodInfo;
extern "C" void FontTextureRebuildCallback_Invoke_m6757 (FontTextureRebuildCallback_t1106 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m6757((FontTextureRebuildCallback_t1106 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t1106(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo FontTextureRebuildCallback_BeginInvoke_m6758_MethodInfo;
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m6758 (FontTextureRebuildCallback_t1106 * __this, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo FontTextureRebuildCallback_EndInvoke_m6759_MethodInfo;
extern "C" void FontTextureRebuildCallback_EndInvoke_m6759 (FontTextureRebuildCallback_t1106 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Font_t364_il2cpp_TypeInfo;
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_2.h"
// System.Char
#include "mscorlib_System_Char.h"
extern TypeInfo Action_1_t507_il2cpp_TypeInfo;
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_2MethodDeclarations.h"
extern Il2CppType Action_1_t507_0_0_0;
extern MethodInfo Action_1_Invoke_m7303_MethodInfo;
extern Il2CppGenericMethod Action_1_Invoke_m7303_GenericMethod;


// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_add_textureRebuilt_m2633_MethodInfo;
extern TypeInfo* Action_1_t507_il2cpp_TypeInfo_var;
extern "C" void Font_add_textureRebuilt_m2633 (Object_t * __this /* static, unused */, Action_1_t507 * ___value, MethodInfo* method)
{
	static bool Font_add_textureRebuilt_m2633_init;
	if (!Font_add_textureRebuilt_m2633_init)
	{
		Action_1_t507_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t507_0_0_0);
		Font_add_textureRebuilt_m2633_init = true;
	}
	{
		Action_1_t507 * L_0 = ((Font_t364_StaticFields*)InitializedTypeInfo(&Font_t364_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t507 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Combine_m665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		((Font_t364_StaticFields*)InitializedTypeInfo(&Font_t364_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t507 *)Castclass(L_2, Action_1_t507_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern MethodInfo Font_remove_textureRebuilt_m6760_MethodInfo;
extern TypeInfo* Action_1_t507_il2cpp_TypeInfo_var;
extern "C" void Font_remove_textureRebuilt_m6760 (Object_t * __this /* static, unused */, Action_1_t507 * ___value, MethodInfo* method)
{
	static bool Font_remove_textureRebuilt_m6760_init;
	if (!Font_remove_textureRebuilt_m6760_init)
	{
		Action_1_t507_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t507_0_0_0);
		Font_remove_textureRebuilt_m6760_init = true;
	}
	{
		Action_1_t507 * L_0 = ((Font_t364_StaticFields*)InitializedTypeInfo(&Font_t364_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		Action_1_t507 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Remove_m666(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m666_MethodInfo);
		((Font_t364_StaticFields*)InitializedTypeInfo(&Font_t364_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2 = ((Action_1_t507 *)Castclass(L_2, Action_1_t507_il2cpp_TypeInfo_var));
		return;
	}
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern MethodInfo Font_get_material_m2914_MethodInfo;
extern "C" Material_t88 * Font_get_material_m2914 (Font_t364 * __this, MethodInfo* method)
{
	typedef Material_t88 * (*Font_get_material_m2914_ftn) (Font_t364 *);
	static Font_get_material_m2914_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m2914_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern MethodInfo Font_HasCharacter_m2783_MethodInfo;
extern "C" bool Font_HasCharacter_m2783 (Font_t364 * __this, uint16_t ___c, MethodInfo* method)
{
	typedef bool (*Font_HasCharacter_m2783_ftn) (Font_t364 *, uint16_t);
	static Font_HasCharacter_m2783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_HasCharacter_m2783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::HasCharacter(System.Char)");
	return _il2cpp_icall_func(__this, ___c);
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern MethodInfo Font_InvokeTextureRebuilt_Internal_m6761_MethodInfo;
extern MethodInfo* Action_1_Invoke_m7303_MethodInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m6761 (Object_t * __this /* static, unused */, Font_t364 * ___font, MethodInfo* method)
{
	static bool Font_InvokeTextureRebuilt_Internal_m6761_init;
	if (!Font_InvokeTextureRebuilt_Internal_m6761_init)
	{
		Action_1_Invoke_m7303_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1_Invoke_m7303_GenericMethod);
		Font_InvokeTextureRebuilt_Internal_m6761_init = true;
	}
	Action_1_t507 * V_0 = {0};
	{
		Action_1_t507 * L_0 = ((Font_t364_StaticFields*)InitializedTypeInfo(&Font_t364_il2cpp_TypeInfo)->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t507 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t507 * L_2 = V_0;
		Font_t364 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t364 * >::Invoke(Action_1_Invoke_m7303_MethodInfo_var, L_2, L_3);
	}

IL_0013:
	{
		Font_t364 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t1106 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t364 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t1106 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&FontTextureRebuildCallback_Invoke_m6757_MethodInfo, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern MethodInfo Font_get_dynamic_m2916_MethodInfo;
extern "C" bool Font_get_dynamic_m2916 (Font_t364 * __this, MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m2916_ftn) (Font_t364 *);
	static Font_get_dynamic_m2916_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m2916_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Font::get_fontSize()
extern MethodInfo Font_get_fontSize_m2918_MethodInfo;
extern "C" int32_t Font_get_fontSize_m2918 (Font_t364 * __this, MethodInfo* method)
{
	typedef int32_t (*Font_get_fontSize_m2918_ftn) (Font_t364 *);
	static Font_get_fontSize_m2918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontSize_m2918_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontSize()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UICharInfo_t525_il2cpp_TypeInfo;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UILineInfo_t523_il2cpp_TypeInfo;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextGenerator_t412_il2cpp_TypeInfo;
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_15.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_54.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_55.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
extern TypeInfo Mathf_t170_il2cpp_TypeInfo;
extern TypeInfo List_1_t377_il2cpp_TypeInfo;
extern TypeInfo List_1_t1107_il2cpp_TypeInfo;
extern TypeInfo List_1_t1108_il2cpp_TypeInfo;
extern TypeInfo TextGenerationSettings_t444_il2cpp_TypeInfo;
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_15MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_54MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_55MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"
extern Il2CppType List_1_t377_0_0_0;
extern Il2CppType List_1_t1107_0_0_0;
extern Il2CppType List_1_t1108_0_0_0;
extern MethodInfo String_IsNullOrEmpty_m2794_MethodInfo;
extern MethodInfo String_get_Length_m2751_MethodInfo;
extern MethodInfo TextGenerator_get_vertexCount_m6768_MethodInfo;
extern MethodInfo Mathf_Max_m923_MethodInfo;
extern MethodInfo Mathf_Min_m924_MethodInfo;
extern MethodInfo TextGenerator_GetVertices_m6780_MethodInfo;
extern MethodInfo TextGenerator_GetCharacters_m6778_MethodInfo;
extern MethodInfo TextGenerator_GetLines_m6779_MethodInfo;
extern MethodInfo TextGenerator__ctor_m2912_MethodInfo;
extern MethodInfo List_1__ctor_m7304_MethodInfo;
extern MethodInfo List_1__ctor_m7305_MethodInfo;
extern MethodInfo List_1__ctor_m7306_MethodInfo;
extern MethodInfo TextGenerator_Init_m6763_MethodInfo;
extern MethodInfo TextGenerator_Dispose_cpp_m6764_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_cpp_m6766_MethodInfo;
extern MethodInfo TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6767_MethodInfo;
extern MethodInfo TextGenerator_GetCharactersInternal_m6772_MethodInfo;
extern MethodInfo TextGenerator_GetLinesInternal_m6774_MethodInfo;
extern MethodInfo TextGenerator_GetVerticesInternal_m6769_MethodInfo;
extern MethodInfo TextGenerator_Populate_m2795_MethodInfo;
extern MethodInfo TextGenerator_get_rectExtents_m2797_MethodInfo;
extern MethodInfo String_op_Equality_m653_MethodInfo;
extern MethodInfo TextGenerationSettings_Equals_m7150_MethodInfo;
extern MethodInfo TextGenerator_PopulateAlways_m6781_MethodInfo;
extern MethodInfo TextGenerator_ValidatedSettings_m6777_MethodInfo;
extern MethodInfo TextGenerator_Populate_Internal_m6765_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m7304_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m7305_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m7306_GenericMethod;


// System.Void UnityEngine.TextGenerator::.ctor()
extern MethodInfo TextGenerator__ctor_m2747_MethodInfo;
extern "C" void TextGenerator__ctor_m2747 (TextGenerator_t412 * __this, MethodInfo* method)
{
	{
		TextGenerator__ctor_m2912(__this, ((int32_t)50), /*hidden argument*/&TextGenerator__ctor_m2912_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t377_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1107_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t1108_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m7304_MethodInfo_var;
extern MethodInfo* List_1__ctor_m7305_MethodInfo_var;
extern MethodInfo* List_1__ctor_m7306_MethodInfo_var;
extern "C" void TextGenerator__ctor_m2912 (TextGenerator_t412 * __this, int32_t ___initialCapacity, MethodInfo* method)
{
	static bool TextGenerator__ctor_m2912_init;
	if (!TextGenerator__ctor_m2912_init)
	{
		List_1_t377_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t377_0_0_0);
		List_1_t1107_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1107_0_0_0);
		List_1_t1108_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t1108_0_0_0);
		List_1__ctor_m7304_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m7304_GenericMethod);
		List_1__ctor_m7305_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m7305_GenericMethod);
		List_1__ctor_m7306_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m7306_GenericMethod);
		TextGenerator__ctor_m2912_init = true;
	}
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		int32_t L_0 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t377_il2cpp_TypeInfo_var);
		List_1_t377 * L_1 = (List_1_t377 *)il2cpp_codegen_object_new (List_1_t377_il2cpp_TypeInfo_var);
		List_1__ctor_m7304(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m7304_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1107_il2cpp_TypeInfo_var);
		List_1_t1107 * L_3 = (List_1_t1107 *)il2cpp_codegen_object_new (List_1_t1107_il2cpp_TypeInfo_var);
		List_1__ctor_m7305(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m7305_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1108_il2cpp_TypeInfo_var);
		List_1_t1108 * L_4 = (List_1_t1108 *)il2cpp_codegen_object_new (List_1_t1108_il2cpp_TypeInfo_var);
		List_1__ctor_m7306(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m7306_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m6763(__this, /*hidden argument*/&TextGenerator_Init_m6763_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern MethodInfo TextGenerator_System_IDisposable_Dispose_m6762_MethodInfo;
extern "C" void TextGenerator_System_IDisposable_Dispose_m6762 (TextGenerator_t412 * __this, MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m6764(__this, /*hidden argument*/&TextGenerator_Dispose_cpp_m6764_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m6763 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m6763_ftn) (TextGenerator_t412 *);
	static TextGenerator_Init_m6763_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m6763_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m6764 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m6764_ftn) (TextGenerator_t412 *);
	static TextGenerator_Dispose_cpp_m6764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m6764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m6765 (TextGenerator_t412 * __this, String_t* ___str, Font_t364 * ___font, Color_t51  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t48  ___extents, Vector2_t48  ___pivot, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t364 * L_1 = ___font;
		Color_t51  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m6766(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/&TextGenerator_Populate_Internal_cpp_m6766_MethodInfo);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m6766 (TextGenerator_t412 * __this, String_t* ___str, Font_t364 * ___font, Color_t51  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t364 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6767(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6767_MethodInfo);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6767 (Object_t * __this /* static, unused */, TextGenerator_t412 * ___self, String_t* ___str, Font_t364 * ___font, Color_t51 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6767_ftn) (TextGenerator_t412 *, String_t*, Font_t364 *, Color_t51 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m6767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t62  TextGenerator_get_rectExtents_m2797 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef Rect_t62  (*TextGenerator_get_rectExtents_m2797_ftn) (TextGenerator_t412 *);
	static TextGenerator_get_rectExtents_m2797_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m2797_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m6768 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m6768_ftn) (TextGenerator_t412 *);
	static TextGenerator_get_vertexCount_m6768_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m6768_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m6769 (TextGenerator_t412 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m6769_ftn) (TextGenerator_t412 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m6769_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m6769_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern MethodInfo TextGenerator_GetVerticesArray_m6770_MethodInfo;
extern "C" UIVertexU5BU5D_t411* TextGenerator_GetVerticesArray_m6770 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef UIVertexU5BU5D_t411* (*TextGenerator_GetVerticesArray_m6770_ftn) (TextGenerator_t412 *);
	static TextGenerator_GetVerticesArray_m6770_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m6770_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern MethodInfo TextGenerator_get_characterCount_m6771_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCount_m6771 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m6771_ftn) (TextGenerator_t412 *);
	static TextGenerator_get_characterCount_m6771_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m6771_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern MethodInfo TextGenerator_get_characterCountVisible_m2776_MethodInfo;
extern "C" int32_t TextGenerator_get_characterCountVisible_m2776 (TextGenerator_t412 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_1 = String_IsNullOrEmpty_m2794(NULL /*static, unused*/, L_0, /*hidden argument*/&String_IsNullOrEmpty_m2794_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m2751(L_2, /*hidden argument*/&String_get_Length_m2751_MethodInfo);
		int32_t L_4 = TextGenerator_get_vertexCount_m6768(__this, /*hidden argument*/&TextGenerator_get_vertexCount_m6768_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		int32_t L_5 = Mathf_Max_m923(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/&Mathf_Max_m923_MethodInfo);
		int32_t L_6 = Mathf_Min_m924(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/&Mathf_Min_m924_MethodInfo);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m6772 (TextGenerator_t412 * __this, Object_t * ___characters, MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m6772_ftn) (TextGenerator_t412 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m6772_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m6772_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern MethodInfo TextGenerator_GetCharactersArray_m6773_MethodInfo;
extern "C" UICharInfoU5BU5D_t1109* TextGenerator_GetCharactersArray_m6773 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t1109* (*TextGenerator_GetCharactersArray_m6773_ftn) (TextGenerator_t412 *);
	static TextGenerator_GetCharactersArray_m6773_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m6773_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern MethodInfo TextGenerator_get_lineCount_m2775_MethodInfo;
extern "C" int32_t TextGenerator_get_lineCount_m2775 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m2775_ftn) (TextGenerator_t412 *);
	static TextGenerator_get_lineCount_m2775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m2775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m6774 (TextGenerator_t412 * __this, Object_t * ___lines, MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m6774_ftn) (TextGenerator_t412 *, Object_t *);
	static TextGenerator_GetLinesInternal_m6774_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m6774_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern MethodInfo TextGenerator_GetLinesArray_m6775_MethodInfo;
extern "C" UILineInfoU5BU5D_t1110* TextGenerator_GetLinesArray_m6775 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t1110* (*TextGenerator_GetLinesArray_m6775_ftn) (TextGenerator_t412 *);
	static TextGenerator_GetLinesArray_m6775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m6775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m2813_MethodInfo;
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m2813 (TextGenerator_t412 * __this, MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m2813_ftn) (TextGenerator_t412 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m2813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m2813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern MethodInfo TextGenerator_Finalize_m6776_MethodInfo;
extern "C" void TextGenerator_Finalize_m6776 (TextGenerator_t412 * __this, MethodInfo* method)
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
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m1044(__this, /*hidden argument*/&Object_Finalize_m1044_MethodInfo);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t444  TextGenerator_ValidatedSettings_m6777 (TextGenerator_t412 * __this, TextGenerationSettings_t444  ___settings, MethodInfo* method)
{
	{
		Font_t364 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m527(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t364 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m2916(L_2, /*hidden argument*/&Font_get_dynamic_m2916_MethodInfo);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t444  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m746(NULL /*static, unused*/, (String_t*) &_stringLiteral447, /*hidden argument*/&Debug_LogWarning_m746_MethodInfo);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m746(NULL /*static, unused*/, (String_t*) &_stringLiteral448, /*hidden argument*/&Debug_LogWarning_m746_MethodInfo);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t444  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern MethodInfo TextGenerator_Invalidate_m2921_MethodInfo;
extern "C" void TextGenerator_Invalidate_m2921 (TextGenerator_t412 * __this, MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m6778 (TextGenerator_t412 * __this, List_1_t1107 * ___characters, MethodInfo* method)
{
	{
		List_1_t1107 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m6772(__this, L_0, /*hidden argument*/&TextGenerator_GetCharactersInternal_m6772_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m6779 (TextGenerator_t412 * __this, List_1_t1108 * ___lines, MethodInfo* method)
{
	{
		List_1_t1108 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m6774(__this, L_0, /*hidden argument*/&TextGenerator_GetLinesInternal_m6774_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m6780 (TextGenerator_t412 * __this, List_1_t377 * ___vertices, MethodInfo* method)
{
	{
		List_1_t377 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m6769(__this, L_0, /*hidden argument*/&TextGenerator_GetVerticesInternal_m6769_MethodInfo);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredWidth_m2919_MethodInfo;
extern "C" float TextGenerator_GetPreferredWidth_m2919 (TextGenerator_t412 * __this, String_t* ___str, TextGenerationSettings_t444  ___settings, MethodInfo* method)
{
	Rect_t62  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t444  L_1 = ___settings;
		TextGenerator_Populate_m2795(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2795_MethodInfo);
		Rect_t62  L_2 = TextGenerator_get_rectExtents_m2797(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2797_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_width_m765((&V_0), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern MethodInfo TextGenerator_GetPreferredHeight_m2920_MethodInfo;
extern "C" float TextGenerator_GetPreferredHeight_m2920 (TextGenerator_t412 * __this, String_t* ___str, TextGenerationSettings_t444  ___settings, MethodInfo* method)
{
	Rect_t62  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t444  L_1 = ___settings;
		TextGenerator_Populate_m2795(__this, L_0, L_1, /*hidden argument*/&TextGenerator_Populate_m2795_MethodInfo);
		Rect_t62  L_2 = TextGenerator_get_rectExtents_m2797(__this, /*hidden argument*/&TextGenerator_get_rectExtents_m2797_MethodInfo);
		V_0 = L_2;
		float L_3 = Rect_get_height_m767((&V_0), /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_Populate_m2795 (TextGenerator_t412 * __this, String_t* ___str, TextGenerationSettings_t444  ___settings, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Equality_m653(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t444  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m7150((&___settings), L_4, /*hidden argument*/&TextGenerationSettings_Equals_m7150_MethodInfo);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t444  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m6781(__this, L_7, L_8, /*hidden argument*/&TextGenerator_PopulateAlways_m6781_MethodInfo);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m6781 (TextGenerator_t412 * __this, String_t* ___str, TextGenerationSettings_t444  ___settings, MethodInfo* method)
{
	TextGenerationSettings_t444  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t444  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t444  L_2 = ___settings;
		TextGenerationSettings_t444  L_3 = TextGenerator_ValidatedSettings_m6777(__this, L_2, /*hidden argument*/&TextGenerator_ValidatedSettings_m6777_MethodInfo);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t364 * L_5 = ((&V_0)->___font_0);
		Color_t51  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t48  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t48  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m6765(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/&TextGenerator_Populate_Internal_m6765_MethodInfo);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern MethodInfo TextGenerator_get_verts_m2922_MethodInfo;
extern "C" Object_t* TextGenerator_get_verts_m2922 (TextGenerator_t412 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t377 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m6780(__this, L_1, /*hidden argument*/&TextGenerator_GetVertices_m6780_MethodInfo);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t377 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern MethodInfo TextGenerator_get_characters_m2777_MethodInfo;
extern "C" Object_t* TextGenerator_get_characters_m2777 (TextGenerator_t412 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t1107 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m6778(__this, L_1, /*hidden argument*/&TextGenerator_GetCharacters_m6778_MethodInfo);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t1107 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern MethodInfo TextGenerator_get_lines_m2773_MethodInfo;
extern "C" Object_t* TextGenerator_get_lines_m2773 (TextGenerator_t412 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t1108 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m6779(__this, L_1, /*hidden argument*/&TextGenerator_GetLines_m6779_MethodInfo);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t1108 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RenderMode_t1111_il2cpp_TypeInfo;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderModeMethodDeclarations.h"



// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WillRenderCanvases_t505_il2cpp_TypeInfo;
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern MethodInfo WillRenderCanvases__ctor_m2609_MethodInfo;
extern "C" void WillRenderCanvases__ctor_m2609 (WillRenderCanvases_t505 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern MethodInfo WillRenderCanvases_Invoke_m6782_MethodInfo;
extern "C" void WillRenderCanvases_Invoke_m6782 (WillRenderCanvases_t505 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m6782((WillRenderCanvases_t505 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t505(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo WillRenderCanvases_BeginInvoke_m6783_MethodInfo;
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m6783 (WillRenderCanvases_t505 * __this, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern MethodInfo WillRenderCanvases_EndInvoke_m6784_MethodInfo;
extern "C" void WillRenderCanvases_EndInvoke_m6784 (WillRenderCanvases_t505 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Canvas_t372_il2cpp_TypeInfo;
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"

extern MethodInfo Canvas_SendWillRenderCanvases_m6786_MethodInfo;


// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_add_willRenderCanvases_m2610_MethodInfo;
extern "C" void Canvas_add_willRenderCanvases_m2610 (Object_t * __this /* static, unused */, WillRenderCanvases_t505 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t505 * L_0 = ((Canvas_t372_StaticFields*)InitializedTypeInfo(&Canvas_t372_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t505 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Combine_m665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		((Canvas_t372_StaticFields*)InitializedTypeInfo(&Canvas_t372_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t505 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t505_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern MethodInfo Canvas_remove_willRenderCanvases_m6785_MethodInfo;
extern "C" void Canvas_remove_willRenderCanvases_m6785 (Object_t * __this /* static, unused */, WillRenderCanvases_t505 * ___value, MethodInfo* method)
{
	{
		WillRenderCanvases_t505 * L_0 = ((Canvas_t372_StaticFields*)InitializedTypeInfo(&Canvas_t372_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		WillRenderCanvases_t505 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Remove_m666(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m666_MethodInfo);
		((Canvas_t372_StaticFields*)InitializedTypeInfo(&Canvas_t372_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2 = ((WillRenderCanvases_t505 *)Castclass(L_2, InitializedTypeInfo(&WillRenderCanvases_t505_il2cpp_TypeInfo)));
		return;
	}
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern MethodInfo Canvas_get_renderMode_m2682_MethodInfo;
extern "C" int32_t Canvas_get_renderMode_m2682 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderMode_m2682_ftn) (Canvas_t372 *);
	static Canvas_get_renderMode_m2682_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderMode_m2682_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderMode()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern MethodInfo Canvas_get_isRootCanvas_m2941_MethodInfo;
extern "C" bool Canvas_get_isRootCanvas_m2941 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_isRootCanvas_m2941_ftn) (Canvas_t372 *);
	static Canvas_get_isRootCanvas_m2941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_isRootCanvas_m2941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_isRootCanvas()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern MethodInfo Canvas_get_worldCamera_m2685_MethodInfo;
extern "C" Camera_t15 * Canvas_get_worldCamera_m2685 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef Camera_t15 * (*Canvas_get_worldCamera_m2685_ftn) (Canvas_t372 *);
	static Canvas_get_worldCamera_m2685_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_worldCamera_m2685_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_worldCamera()");
	return _il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern MethodInfo Canvas_get_scaleFactor_m2917_MethodInfo;
extern "C" float Canvas_get_scaleFactor_m2917 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_scaleFactor_m2917_ftn) (Canvas_t372 *);
	static Canvas_get_scaleFactor_m2917_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_scaleFactor_m2917_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_scaleFactor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern MethodInfo Canvas_set_scaleFactor_m2943_MethodInfo;
extern "C" void Canvas_set_scaleFactor_m2943 (Canvas_t372 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_scaleFactor_m2943_ftn) (Canvas_t372 *, float);
	static Canvas_set_scaleFactor_m2943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_scaleFactor_m2943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_scaleFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern MethodInfo Canvas_get_referencePixelsPerUnit_m2712_MethodInfo;
extern "C" float Canvas_get_referencePixelsPerUnit_m2712 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef float (*Canvas_get_referencePixelsPerUnit_m2712_ftn) (Canvas_t372 *);
	static Canvas_get_referencePixelsPerUnit_m2712_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_referencePixelsPerUnit_m2712_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_referencePixelsPerUnit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern MethodInfo Canvas_set_referencePixelsPerUnit_m2944_MethodInfo;
extern "C" void Canvas_set_referencePixelsPerUnit_m2944 (Canvas_t372 * __this, float ___value, MethodInfo* method)
{
	typedef void (*Canvas_set_referencePixelsPerUnit_m2944_ftn) (Canvas_t372 *, float);
	static Canvas_set_referencePixelsPerUnit_m2944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_set_referencePixelsPerUnit_m2944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern MethodInfo Canvas_get_pixelPerfect_m2663_MethodInfo;
extern "C" bool Canvas_get_pixelPerfect_m2663 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef bool (*Canvas_get_pixelPerfect_m2663_ftn) (Canvas_t372 *);
	static Canvas_get_pixelPerfect_m2663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_pixelPerfect_m2663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_pixelPerfect()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern MethodInfo Canvas_get_renderOrder_m2684_MethodInfo;
extern "C" int32_t Canvas_get_renderOrder_m2684 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_renderOrder_m2684_ftn) (Canvas_t372 *);
	static Canvas_get_renderOrder_m2684_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_renderOrder_m2684_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_renderOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern MethodInfo Canvas_get_sortingOrder_m2683_MethodInfo;
extern "C" int32_t Canvas_get_sortingOrder_m2683 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_sortingOrder_m2683_ftn) (Canvas_t372 *);
	static Canvas_get_sortingOrder_m2683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_sortingOrder_m2683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_sortingOrder()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.Canvas::get_cachedSortingLayerValue()
extern MethodInfo Canvas_get_cachedSortingLayerValue_m2693_MethodInfo;
extern "C" int32_t Canvas_get_cachedSortingLayerValue_m2693 (Canvas_t372 * __this, MethodInfo* method)
{
	typedef int32_t (*Canvas_get_cachedSortingLayerValue_m2693_ftn) (Canvas_t372 *);
	static Canvas_get_cachedSortingLayerValue_m2693_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_get_cachedSortingLayerValue_m2693_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::get_cachedSortingLayerValue()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern MethodInfo Canvas_GetDefaultCanvasMaterial_m2638_MethodInfo;
extern "C" Material_t88 * Canvas_GetDefaultCanvasMaterial_m2638 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t88 * (*Canvas_GetDefaultCanvasMaterial_m2638_ftn) ();
	static Canvas_GetDefaultCanvasMaterial_m2638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasMaterial_m2638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasMaterial()");
	return _il2cpp_icall_func();
}
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
extern MethodInfo Canvas_GetDefaultCanvasTextMaterial_m2913_MethodInfo;
extern "C" Material_t88 * Canvas_GetDefaultCanvasTextMaterial_m2913 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Material_t88 * (*Canvas_GetDefaultCanvasTextMaterial_m2913_ftn) ();
	static Canvas_GetDefaultCanvasTextMaterial_m2913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Canvas_GetDefaultCanvasTextMaterial_m2913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Canvas::GetDefaultCanvasTextMaterial()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C" void Canvas_SendWillRenderCanvases_m6786 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		WillRenderCanvases_t505 * L_0 = ((Canvas_t372_StaticFields*)InitializedTypeInfo(&Canvas_t372_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t505 * L_1 = ((Canvas_t372_StaticFields*)InitializedTypeInfo(&Canvas_t372_il2cpp_TypeInfo)->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&WillRenderCanvases_Invoke_m6782_MethodInfo, L_1);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern MethodInfo Canvas_ForceUpdateCanvases_m2861_MethodInfo;
extern "C" void Canvas_ForceUpdateCanvases_m2861 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Canvas_SendWillRenderCanvases_m6786(NULL /*static, unused*/, /*hidden argument*/&Canvas_SendWillRenderCanvases_m6786_MethodInfo);
		return;
	}
}
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroup.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasGroup_t512_il2cpp_TypeInfo;
// UnityEngine.CanvasGroup
#include "UnityEngine_UnityEngine_CanvasGroupMethodDeclarations.h"

extern MethodInfo CanvasGroup_get_blocksRaycasts_m6787_MethodInfo;


// System.Boolean UnityEngine.CanvasGroup::get_interactable()
extern MethodInfo CanvasGroup_get_interactable_m2883_MethodInfo;
extern "C" bool CanvasGroup_get_interactable_m2883 (CanvasGroup_t512 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_interactable_m2883_ftn) (CanvasGroup_t512 *);
	static CanvasGroup_get_interactable_m2883_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_interactable_m2883_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_interactable()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
extern "C" bool CanvasGroup_get_blocksRaycasts_m6787 (CanvasGroup_t512 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_blocksRaycasts_m6787_ftn) (CanvasGroup_t512 *);
	static CanvasGroup_get_blocksRaycasts_m6787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_blocksRaycasts_m6787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_blocksRaycasts()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
extern MethodInfo CanvasGroup_get_ignoreParentGroups_m2661_MethodInfo;
extern "C" bool CanvasGroup_get_ignoreParentGroups_m2661 (CanvasGroup_t512 * __this, MethodInfo* method)
{
	typedef bool (*CanvasGroup_get_ignoreParentGroups_m2661_ftn) (CanvasGroup_t512 *);
	static CanvasGroup_get_ignoreParentGroups_m2661_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasGroup_get_ignoreParentGroups_m2661_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasGroup::get_ignoreParentGroups()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.CanvasGroup::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo CanvasGroup_IsRaycastLocationValid_m6788_MethodInfo;
extern "C" bool CanvasGroup_IsRaycastLocationValid_m6788 (CanvasGroup_t512 * __this, Vector2_t48  ___sp, Camera_t15 * ___eventCamera, MethodInfo* method)
{
	{
		bool L_0 = CanvasGroup_get_blocksRaycasts_m6787(__this, /*hidden argument*/&CanvasGroup_get_blocksRaycasts_m6787_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UIVertex_t395_il2cpp_TypeInfo;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
extern TypeInfo Color32_t492_il2cpp_TypeInfo;
extern TypeInfo Vector4_t173_il2cpp_TypeInfo;
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern MethodInfo Color32__ctor_m2625_MethodInfo;
extern MethodInfo Vector4__ctor_m837_MethodInfo;
extern MethodInfo Vector3_get_zero_m562_MethodInfo;
extern MethodInfo Vector3_get_back_m6316_MethodInfo;
extern MethodInfo Vector2_get_zero_m761_MethodInfo;


// System.Void UnityEngine.UIVertex::.cctor()
extern MethodInfo UIVertex__cctor_m6789_MethodInfo;
extern "C" void UIVertex__cctor_m6789 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	UIVertex_t395  V_0 = {0};
	{
		Color32_t492  L_0 = {0};
		Color32__ctor_m2625(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/&Color32__ctor_m2625_MethodInfo);
		((UIVertex_t395_StaticFields*)InitializedTypeInfo(&UIVertex_t395_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t173  L_1 = {0};
		Vector4__ctor_m837(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/&Vector4__ctor_m837_MethodInfo);
		((UIVertex_t395_StaticFields*)InitializedTypeInfo(&UIVertex_t395_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (InitializedTypeInfo(&UIVertex_t395_il2cpp_TypeInfo), (&V_0));
		Vector3_t5  L_2 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		(&V_0)->___position_0 = L_2;
		Vector3_t5  L_3 = Vector3_get_back_m6316(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m6316_MethodInfo);
		(&V_0)->___normal_1 = L_3;
		Vector4_t173  L_4 = ((UIVertex_t395_StaticFields*)InitializedTypeInfo(&UIVertex_t395_il2cpp_TypeInfo)->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t492  L_5 = ((UIVertex_t395_StaticFields*)InitializedTypeInfo(&UIVertex_t395_il2cpp_TypeInfo)->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t48  L_6 = Vector2_get_zero_m761(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m761_MethodInfo);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t48  L_7 = Vector2_get_zero_m761(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m761_MethodInfo);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t395  L_8 = V_0;
		((UIVertex_t395_StaticFields*)InitializedTypeInfo(&UIVertex_t395_il2cpp_TypeInfo)->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CanvasRenderer_t371_il2cpp_TypeInfo;
// UnityEngine.CanvasRenderer
#include "UnityEngine_UnityEngine_CanvasRendererMethodDeclarations.h"

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo ObjectU5BU5D_t178_il2cpp_TypeInfo;
extern TypeInfo UInt16_t879_il2cpp_TypeInfo;
extern Il2CppType ObjectU5BU5D_t178_0_0_0;
extern MethodInfo CanvasRenderer_INTERNAL_CALL_SetColor_m6790_MethodInfo;
extern MethodInfo List_1_get_Count_m2801_MethodInfo;
extern MethodInfo List_1_Clear_m2670_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternal_m6791_MethodInfo;
extern MethodInfo CanvasRenderer_SetVerticesInternalArray_m6792_MethodInfo;
extern Il2CppGenericMethod List_1_get_Count_m2801_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m2670_GenericMethod;


// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern MethodInfo CanvasRenderer_SetColor_m2668_MethodInfo;
extern "C" void CanvasRenderer_SetColor_m2668 (CanvasRenderer_t371 * __this, Color_t51  ___color, MethodInfo* method)
{
	{
		CanvasRenderer_INTERNAL_CALL_SetColor_m6790(NULL /*static, unused*/, __this, (&___color), /*hidden argument*/&CanvasRenderer_INTERNAL_CALL_SetColor_m6790_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m6790 (Object_t * __this /* static, unused */, CanvasRenderer_t371 * ___self, Color_t51 * ___color, MethodInfo* method)
{
	typedef void (*CanvasRenderer_INTERNAL_CALL_SetColor_m6790_ftn) (CanvasRenderer_t371 *, Color_t51 *);
	static CanvasRenderer_INTERNAL_CALL_SetColor_m6790_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_INTERNAL_CALL_SetColor_m6790_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)");
	_il2cpp_icall_func(___self, ___color);
}
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern MethodInfo CanvasRenderer_GetColor_m2666_MethodInfo;
extern "C" Color_t51  CanvasRenderer_GetColor_m2666 (CanvasRenderer_t371 * __this, MethodInfo* method)
{
	typedef Color_t51  (*CanvasRenderer_GetColor_m2666_ftn) (CanvasRenderer_t371 *);
	static CanvasRenderer_GetColor_m2666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_GetColor_m2666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::GetColor()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
extern MethodInfo CanvasRenderer_set_isMask_m2992_MethodInfo;
extern "C" void CanvasRenderer_set_isMask_m2992 (CanvasRenderer_t371 * __this, bool ___value, MethodInfo* method)
{
	typedef void (*CanvasRenderer_set_isMask_m2992_ftn) (CanvasRenderer_t371 *, bool);
	static CanvasRenderer_set_isMask_m2992_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_set_isMask_m2992_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::set_isMask(System.Boolean)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern MethodInfo CanvasRenderer_SetMaterial_m2657_MethodInfo;
extern "C" void CanvasRenderer_SetMaterial_m2657 (CanvasRenderer_t371 * __this, Material_t88 * ___material, Texture_t58 * ___texture, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetMaterial_m2657_ftn) (CanvasRenderer_t371 *, Material_t88 *, Texture_t58 *);
	static CanvasRenderer_SetMaterial_m2657_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetMaterial_m2657_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)");
	_il2cpp_icall_func(__this, ___material, ___texture);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern MethodInfo CanvasRenderer_SetVertices_m2656_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m2801_MethodInfo_var;
extern MethodInfo* List_1_Clear_m2670_MethodInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2656 (CanvasRenderer_t371 * __this, List_1_t377 * ___vertices, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2656_init;
	if (!CanvasRenderer_SetVertices_m2656_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		List_1_get_Count_m2801_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m2801_GenericMethod);
		List_1_Clear_m2670_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m2670_GenericMethod);
		CanvasRenderer_SetVertices_m2656_init = true;
	}
	{
		List_1_t377 * L_0 = ___vertices;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m2801_MethodInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t178* L_2 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 1));
		uint16_t L_3 = ((int32_t)65535);
		Object_t * L_4 = Box(InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), &L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_4;
		String_t* L_5 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral449, L_2, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		Debug_LogWarning_m2905(NULL /*static, unused*/, L_5, __this, /*hidden argument*/&Debug_LogWarning_m2905_MethodInfo);
		List_1_t377 * L_6 = ___vertices;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(List_1_Clear_m2670_MethodInfo_var, L_6);
	}

IL_0039:
	{
		List_1_t377 * L_7 = ___vertices;
		CanvasRenderer_SetVerticesInternal_m6791(__this, L_7, /*hidden argument*/&CanvasRenderer_SetVerticesInternal_m6791_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
extern "C" void CanvasRenderer_SetVerticesInternal_m6791 (CanvasRenderer_t371 * __this, Object_t * ___vertices, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternal_m6791_ftn) (CanvasRenderer_t371 *, Object_t *);
	static CanvasRenderer_SetVerticesInternal_m6791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternal_m6791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
extern MethodInfo CanvasRenderer_SetVertices_m2763_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void CanvasRenderer_SetVertices_m2763 (CanvasRenderer_t371 * __this, UIVertexU5BU5D_t411* ___vertices, int32_t ___size, MethodInfo* method)
{
	static bool CanvasRenderer_SetVertices_m2763_init;
	if (!CanvasRenderer_SetVertices_m2763_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		CanvasRenderer_SetVertices_m2763_init = true;
	}
	{
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t178* L_1 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 1));
		uint16_t L_2 = ((int32_t)65535);
		Object_t * L_3 = Box(InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo), &L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_3;
		String_t* L_4 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral449, L_1, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		Debug_LogWarning_m2905(NULL /*static, unused*/, L_4, __this, /*hidden argument*/&Debug_LogWarning_m2905_MethodInfo);
		___size = 0;
	}

IL_0031:
	{
		UIVertexU5BU5D_t411* L_5 = ___vertices;
		int32_t L_6 = ___size;
		CanvasRenderer_SetVerticesInternalArray_m6792(__this, L_5, L_6, /*hidden argument*/&CanvasRenderer_SetVerticesInternalArray_m6792_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
extern "C" void CanvasRenderer_SetVerticesInternalArray_m6792 (CanvasRenderer_t371 * __this, UIVertexU5BU5D_t411* ___vertices, int32_t ___size, MethodInfo* method)
{
	typedef void (*CanvasRenderer_SetVerticesInternalArray_m6792_ftn) (CanvasRenderer_t371 *, UIVertexU5BU5D_t411*, int32_t);
	static CanvasRenderer_SetVerticesInternalArray_m6792_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_SetVerticesInternalArray_m6792_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)");
	_il2cpp_icall_func(__this, ___vertices, ___size);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
extern MethodInfo CanvasRenderer_Clear_m2652_MethodInfo;
extern "C" void CanvasRenderer_Clear_m2652 (CanvasRenderer_t371 * __this, MethodInfo* method)
{
	typedef void (*CanvasRenderer_Clear_m2652_ftn) (CanvasRenderer_t371 *);
	static CanvasRenderer_Clear_m2652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_Clear_m2652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern MethodInfo CanvasRenderer_get_absoluteDepth_m2639_MethodInfo;
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m2639 (CanvasRenderer_t371 * __this, MethodInfo* method)
{
	typedef int32_t (*CanvasRenderer_get_absoluteDepth_m2639_ftn) (CanvasRenderer_t371 *);
	static CanvasRenderer_get_absoluteDepth_m2639_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CanvasRenderer_get_absoluteDepth_m2639_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CanvasRenderer::get_absoluteDepth()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RectTransformUtility_t513_il2cpp_TypeInfo;
// UnityEngine.RectTransformUtility
#include "UnityEngine_UnityEngine_RectTransformUtilityMethodDeclarations.h"

// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
extern TypeInfo Vector3U5BU5D_t8_il2cpp_TypeInfo;
extern TypeInfo Ray_t78_il2cpp_TypeInfo;
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_PlaneMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
extern Il2CppType Vector3U5BU5D_t8_0_0_0;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6794_MethodInfo;
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m6795_MethodInfo;
extern MethodInfo RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6796_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m2581_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToRay_m6798_MethodInfo;
extern MethodInfo Plane__ctor_m2770_MethodInfo;
extern MethodInfo Plane_Raycast_m2771_MethodInfo;
extern MethodInfo Ray_GetPoint_m2772_MethodInfo;
extern MethodInfo RectTransformUtility_ScreenPointToWorldPointInRectangle_m6797_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m769_MethodInfo;
extern MethodInfo Ray__ctor_m872_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutOnAxis_m2853_MethodInfo;
extern MethodInfo RectTransform_get_pivot_m2718_MethodInfo;
extern MethodInfo Vector2_get_Item_m2727_MethodInfo;
extern MethodInfo Vector2_set_Item_m2735_MethodInfo;
extern MethodInfo RectTransform_set_pivot_m2810_MethodInfo;
extern MethodInfo RectTransform_get_anchoredPosition_m2806_MethodInfo;
extern MethodInfo RectTransform_set_anchoredPosition_m2809_MethodInfo;
extern MethodInfo RectTransform_get_anchorMin_m2719_MethodInfo;
extern MethodInfo RectTransform_get_anchorMax_m2805_MethodInfo;
extern MethodInfo RectTransform_set_anchorMin_m2808_MethodInfo;
extern MethodInfo RectTransform_set_anchorMax_m2720_MethodInfo;
extern MethodInfo RectTransformUtility_FlipLayoutAxes_m2852_MethodInfo;
extern MethodInfo RectTransformUtility_GetTransposed_m6799_MethodInfo;
extern MethodInfo RectTransform_get_sizeDelta_m2807_MethodInfo;
extern MethodInfo RectTransform_set_sizeDelta_m2721_MethodInfo;


// System.Void UnityEngine.RectTransformUtility::.cctor()
extern MethodInfo RectTransformUtility__cctor_m6793_MethodInfo;
extern TypeInfo* Vector3U5BU5D_t8_il2cpp_TypeInfo_var;
extern "C" void RectTransformUtility__cctor_m6793 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool RectTransformUtility__cctor_m6793_init;
	if (!RectTransformUtility__cctor_m6793_init)
	{
		Vector3U5BU5D_t8_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t8_0_0_0);
		RectTransformUtility__cctor_m6793_init = true;
	}
	{
		((RectTransformUtility_t513_StaticFields*)InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo)->static_fields)->___s_Corners_0 = ((Vector3U5BU5D_t8*)SZArrayNew(Vector3U5BU5D_t8_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern MethodInfo RectTransformUtility_RectangleContainsScreenPoint_m2696_MethodInfo;
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m2696 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, Vector2_t48  ___screenPoint, Camera_t15 * ___cam, MethodInfo* method)
{
	{
		RectTransform_t370 * L_0 = ___rect;
		Camera_t15 * L_1 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		bool L_2 = RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6794(NULL /*static, unused*/, L_0, (&___screenPoint), L_1, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6794_MethodInfo);
		return L_2;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6794 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, Vector2_t48 * ___screenPoint, Camera_t15 * ___cam, MethodInfo* method)
{
	typedef bool (*RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6794_ftn) (RectTransform_t370 *, Vector2_t48 *, Camera_t15 *);
	static RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6794_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m6794_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)");
	return _il2cpp_icall_func(___rect, ___screenPoint, ___cam);
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustPoint_m2664_MethodInfo;
extern "C" Vector2_t48  RectTransformUtility_PixelAdjustPoint_m2664 (Object_t * __this /* static, unused */, Vector2_t48  ___point, Transform_t2 * ___elementTransform, Canvas_t372 * ___canvas, MethodInfo* method)
{
	Vector2_t48  V_0 = {0};
	{
		Vector2_t48  L_0 = ___point;
		Transform_t2 * L_1 = ___elementTransform;
		Canvas_t372 * L_2 = ___canvas;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		RectTransformUtility_PixelAdjustPoint_m6795(NULL /*static, unused*/, L_0, L_1, L_2, (&V_0), /*hidden argument*/&RectTransformUtility_PixelAdjustPoint_m6795_MethodInfo);
		Vector2_t48  L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m6795 (Object_t * __this /* static, unused */, Vector2_t48  ___point, Transform_t2 * ___elementTransform, Canvas_t372 * ___canvas, Vector2_t48 * ___output, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = ___elementTransform;
		Canvas_t372 * L_1 = ___canvas;
		Vector2_t48 * L_2 = ___output;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6796(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, /*hidden argument*/&RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6796_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6796 (Object_t * __this /* static, unused */, Vector2_t48 * ___point, Transform_t2 * ___elementTransform, Canvas_t372 * ___canvas, Vector2_t48 * ___output, MethodInfo* method)
{
	typedef void (*RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6796_ftn) (Vector2_t48 *, Transform_t2 *, Canvas_t372 *, Vector2_t48 *);
	static RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m6796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___point, ___elementTransform, ___canvas, ___output);
}
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern MethodInfo RectTransformUtility_PixelAdjustRect_m2665_MethodInfo;
extern "C" Rect_t62  RectTransformUtility_PixelAdjustRect_m2665 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rectTransform, Canvas_t372 * ___canvas, MethodInfo* method)
{
	typedef Rect_t62  (*RectTransformUtility_PixelAdjustRect_m2665_ftn) (RectTransform_t370 *, Canvas_t372 *);
	static RectTransformUtility_PixelAdjustRect_m2665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RectTransformUtility_PixelAdjustRect_m2665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)");
	return _il2cpp_icall_func(___rectTransform, ___canvas);
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m6797 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, Vector2_t48  ___screenPoint, Camera_t15 * ___cam, Vector3_t5 * ___worldPoint, MethodInfo* method)
{
	Ray_t78  V_0 = {0};
	Plane_t528  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t5 * L_0 = ___worldPoint;
		Vector2_t48  L_1 = Vector2_get_zero_m761(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m761_MethodInfo);
		Vector3_t5  L_2 = Vector2_op_Implicit_m2581(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector2_op_Implicit_m2581_MethodInfo);
		*L_0 = L_2;
		Camera_t15 * L_3 = ___cam;
		Vector2_t48  L_4 = ___screenPoint;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		Ray_t78  L_5 = RectTransformUtility_ScreenPointToRay_m6798(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&RectTransformUtility_ScreenPointToRay_m6798_MethodInfo);
		V_0 = L_5;
		RectTransform_t370 * L_6 = ___rect;
		NullCheck(L_6);
		Quaternion_t10  L_7 = Transform_get_rotation_m513(L_6, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		Vector3_t5  L_8 = Vector3_get_back_m6316(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_back_m6316_MethodInfo);
		Vector3_t5  L_9 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		RectTransform_t370 * L_10 = ___rect;
		NullCheck(L_10);
		Vector3_t5  L_11 = Transform_get_position_m506(L_10, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Plane__ctor_m2770((&V_1), L_9, L_11, /*hidden argument*/&Plane__ctor_m2770_MethodInfo);
		Ray_t78  L_12 = V_0;
		bool L_13 = Plane_Raycast_m2771((&V_1), L_12, (&V_2), /*hidden argument*/&Plane_Raycast_m2771_MethodInfo);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		Vector3_t5 * L_14 = ___worldPoint;
		float L_15 = V_2;
		Vector3_t5  L_16 = Ray_GetPoint_m2772((&V_0), L_15, /*hidden argument*/&Ray_GetPoint_m2772_MethodInfo);
		*L_14 = L_16;
		return 1;
	}
}
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern MethodInfo RectTransformUtility_ScreenPointToLocalPointInRectangle_m2729_MethodInfo;
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m2729 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, Vector2_t48  ___screenPoint, Camera_t15 * ___cam, Vector2_t48 * ___localPoint, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Vector2_t48 * L_0 = ___localPoint;
		Vector2_t48  L_1 = Vector2_get_zero_m761(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m761_MethodInfo);
		*L_0 = L_1;
		RectTransform_t370 * L_2 = ___rect;
		Vector2_t48  L_3 = ___screenPoint;
		Camera_t15 * L_4 = ___cam;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		bool L_5 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m6797(NULL /*static, unused*/, L_2, L_3, L_4, (&V_0), /*hidden argument*/&RectTransformUtility_ScreenPointToWorldPointInRectangle_m6797_MethodInfo);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		Vector2_t48 * L_6 = ___localPoint;
		RectTransform_t370 * L_7 = ___rect;
		Vector3_t5  L_8 = V_0;
		NullCheck(L_7);
		Vector3_t5  L_9 = Transform_InverseTransformPoint_m531(L_7, L_8, /*hidden argument*/&Transform_InverseTransformPoint_m531_MethodInfo);
		Vector2_t48  L_10 = Vector2_op_Implicit_m769(NULL /*static, unused*/, L_9, /*hidden argument*/&Vector2_op_Implicit_m769_MethodInfo);
		*L_6 = L_10;
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t78  RectTransformUtility_ScreenPointToRay_m6798 (Object_t * __this /* static, unused */, Camera_t15 * ___cam, Vector2_t48  ___screenPos, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Camera_t15 * L_0 = ___cam;
		bool L_1 = Object_op_Inequality_m527(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Camera_t15 * L_2 = ___cam;
		Vector2_t48  L_3 = ___screenPos;
		Vector3_t5  L_4 = Vector2_op_Implicit_m2581(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector2_op_Implicit_m2581_MethodInfo);
		NullCheck(L_2);
		Ray_t78  L_5 = Camera_ScreenPointToRay_m2582(L_2, L_4, /*hidden argument*/&Camera_ScreenPointToRay_m2582_MethodInfo);
		return L_5;
	}

IL_0019:
	{
		Vector2_t48  L_6 = ___screenPos;
		Vector3_t5  L_7 = Vector2_op_Implicit_m2581(NULL /*static, unused*/, L_6, /*hidden argument*/&Vector2_op_Implicit_m2581_MethodInfo);
		V_0 = L_7;
		Vector3_t5 * L_8 = (&V_0);
		float L_9 = (L_8->___z_3);
		L_8->___z_3 = ((float)((float)L_9-(float)(100.0f)));
		Vector3_t5  L_10 = V_0;
		Vector3_t5  L_11 = Vector3_get_forward_m610(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m610_MethodInfo);
		Ray_t78  L_12 = {0};
		Ray__ctor_m872(&L_12, L_10, L_11, /*hidden argument*/&Ray__ctor_m872_MethodInfo);
		return L_12;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m2853 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t370 * V_1 = {0};
	Vector2_t48  V_2 = {0};
	Vector2_t48  V_3 = {0};
	Vector2_t48  V_4 = {0};
	Vector2_t48  V_5 = {0};
	float V_6 = 0.0f;
	{
		RectTransform_t370 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		V_0 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		RectTransform_t370 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t2 * L_5 = Transform_GetChild_m524(L_3, L_4, /*hidden argument*/&Transform_GetChild_m524_MethodInfo);
		V_1 = ((RectTransform_t370 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t370_il2cpp_TypeInfo)));
		RectTransform_t370 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m527(NULL /*static, unused*/, L_6, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		RectTransform_t370 * L_8 = V_1;
		int32_t L_9 = ___axis;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutOnAxis_m2853(NULL /*static, unused*/, L_8, L_9, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutOnAxis_m2853_MethodInfo);
	}

IL_003c:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		RectTransform_t370 * L_12 = ___rect;
		NullCheck(L_12);
		int32_t L_13 = Transform_get_childCount_m523(L_12, /*hidden argument*/&Transform_get_childCount_m523_MethodInfo);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001a;
		}
	}

IL_004c:
	{
		RectTransform_t370 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t48  L_15 = RectTransform_get_pivot_m2718(L_14, /*hidden argument*/&RectTransform_get_pivot_m2718_MethodInfo);
		V_2 = L_15;
		int32_t L_16 = ___axis;
		int32_t L_17 = ___axis;
		float L_18 = Vector2_get_Item_m2727((&V_2), L_17, /*hidden argument*/&Vector2_get_Item_m2727_MethodInfo);
		Vector2_set_Item_m2735((&V_2), L_16, ((float)((float)(1.0f)-(float)L_18)), /*hidden argument*/&Vector2_set_Item_m2735_MethodInfo);
		RectTransform_t370 * L_19 = ___rect;
		Vector2_t48  L_20 = V_2;
		NullCheck(L_19);
		RectTransform_set_pivot_m2810(L_19, L_20, /*hidden argument*/&RectTransform_set_pivot_m2810_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0077;
		}
	}
	{
		return;
	}

IL_0077:
	{
		RectTransform_t370 * L_22 = ___rect;
		NullCheck(L_22);
		Vector2_t48  L_23 = RectTransform_get_anchoredPosition_m2806(L_22, /*hidden argument*/&RectTransform_get_anchoredPosition_m2806_MethodInfo);
		V_3 = L_23;
		int32_t L_24 = ___axis;
		int32_t L_25 = ___axis;
		float L_26 = Vector2_get_Item_m2727((&V_3), L_25, /*hidden argument*/&Vector2_get_Item_m2727_MethodInfo);
		Vector2_set_Item_m2735((&V_3), L_24, ((-L_26)), /*hidden argument*/&Vector2_set_Item_m2735_MethodInfo);
		RectTransform_t370 * L_27 = ___rect;
		Vector2_t48  L_28 = V_3;
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_m2809(L_27, L_28, /*hidden argument*/&RectTransform_set_anchoredPosition_m2809_MethodInfo);
		RectTransform_t370 * L_29 = ___rect;
		NullCheck(L_29);
		Vector2_t48  L_30 = RectTransform_get_anchorMin_m2719(L_29, /*hidden argument*/&RectTransform_get_anchorMin_m2719_MethodInfo);
		V_4 = L_30;
		RectTransform_t370 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t48  L_32 = RectTransform_get_anchorMax_m2805(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2805_MethodInfo);
		V_5 = L_32;
		int32_t L_33 = ___axis;
		float L_34 = Vector2_get_Item_m2727((&V_4), L_33, /*hidden argument*/&Vector2_get_Item_m2727_MethodInfo);
		V_6 = L_34;
		int32_t L_35 = ___axis;
		int32_t L_36 = ___axis;
		float L_37 = Vector2_get_Item_m2727((&V_5), L_36, /*hidden argument*/&Vector2_get_Item_m2727_MethodInfo);
		Vector2_set_Item_m2735((&V_4), L_35, ((float)((float)(1.0f)-(float)L_37)), /*hidden argument*/&Vector2_set_Item_m2735_MethodInfo);
		int32_t L_38 = ___axis;
		float L_39 = V_6;
		Vector2_set_Item_m2735((&V_5), L_38, ((float)((float)(1.0f)-(float)L_39)), /*hidden argument*/&Vector2_set_Item_m2735_MethodInfo);
		RectTransform_t370 * L_40 = ___rect;
		Vector2_t48  L_41 = V_4;
		NullCheck(L_40);
		RectTransform_set_anchorMin_m2808(L_40, L_41, /*hidden argument*/&RectTransform_set_anchorMin_m2808_MethodInfo);
		RectTransform_t370 * L_42 = ___rect;
		Vector2_t48  L_43 = V_5;
		NullCheck(L_42);
		RectTransform_set_anchorMax_m2720(L_42, L_43, /*hidden argument*/&RectTransform_set_anchorMax_m2720_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m2852 (Object_t * __this /* static, unused */, RectTransform_t370 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method)
{
	int32_t V_0 = 0;
	RectTransform_t370 * V_1 = {0};
	{
		RectTransform_t370 * L_0 = ___rect;
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_2 = ___recursive;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = 0;
		goto IL_003f;
	}

IL_001a:
	{
		RectTransform_t370 * L_3 = ___rect;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_t2 * L_5 = Transform_GetChild_m524(L_3, L_4, /*hidden argument*/&Transform_GetChild_m524_MethodInfo);
		V_1 = ((RectTransform_t370 *)IsInst(L_5, InitializedTypeInfo(&RectTransform_t370_il2cpp_TypeInfo)));
		RectTransform_t370 * L_6 = V_1;
		bool L_7 = Object_op_Inequality_m527(NULL /*static, unused*/, L_6, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		RectTransform_t370 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		RectTransformUtility_FlipLayoutAxes_m2852(NULL /*static, unused*/, L_8, 0, 1, /*hidden argument*/&RectTransformUtility_FlipLayoutAxes_m2852_MethodInfo);
	}

IL_003b:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		RectTransform_t370 * L_11 = ___rect;
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m523(L_11, /*hidden argument*/&Transform_get_childCount_m523_MethodInfo);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}

IL_004b:
	{
		RectTransform_t370 * L_13 = ___rect;
		RectTransform_t370 * L_14 = ___rect;
		NullCheck(L_14);
		Vector2_t48  L_15 = RectTransform_get_pivot_m2718(L_14, /*hidden argument*/&RectTransform_get_pivot_m2718_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		Vector2_t48  L_16 = RectTransformUtility_GetTransposed_m6799(NULL /*static, unused*/, L_15, /*hidden argument*/&RectTransformUtility_GetTransposed_m6799_MethodInfo);
		NullCheck(L_13);
		RectTransform_set_pivot_m2810(L_13, L_16, /*hidden argument*/&RectTransform_set_pivot_m2810_MethodInfo);
		RectTransform_t370 * L_17 = ___rect;
		RectTransform_t370 * L_18 = ___rect;
		NullCheck(L_18);
		Vector2_t48  L_19 = RectTransform_get_sizeDelta_m2807(L_18, /*hidden argument*/&RectTransform_get_sizeDelta_m2807_MethodInfo);
		Vector2_t48  L_20 = RectTransformUtility_GetTransposed_m6799(NULL /*static, unused*/, L_19, /*hidden argument*/&RectTransformUtility_GetTransposed_m6799_MethodInfo);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_m2721(L_17, L_20, /*hidden argument*/&RectTransform_set_sizeDelta_m2721_MethodInfo);
		bool L_21 = ___keepPositioning;
		if (!L_21)
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0074:
	{
		RectTransform_t370 * L_22 = ___rect;
		RectTransform_t370 * L_23 = ___rect;
		NullCheck(L_23);
		Vector2_t48  L_24 = RectTransform_get_anchoredPosition_m2806(L_23, /*hidden argument*/&RectTransform_get_anchoredPosition_m2806_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&RectTransformUtility_t513_il2cpp_TypeInfo));
		Vector2_t48  L_25 = RectTransformUtility_GetTransposed_m6799(NULL /*static, unused*/, L_24, /*hidden argument*/&RectTransformUtility_GetTransposed_m6799_MethodInfo);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_m2809(L_22, L_25, /*hidden argument*/&RectTransform_set_anchoredPosition_m2809_MethodInfo);
		RectTransform_t370 * L_26 = ___rect;
		RectTransform_t370 * L_27 = ___rect;
		NullCheck(L_27);
		Vector2_t48  L_28 = RectTransform_get_anchorMin_m2719(L_27, /*hidden argument*/&RectTransform_get_anchorMin_m2719_MethodInfo);
		Vector2_t48  L_29 = RectTransformUtility_GetTransposed_m6799(NULL /*static, unused*/, L_28, /*hidden argument*/&RectTransformUtility_GetTransposed_m6799_MethodInfo);
		NullCheck(L_26);
		RectTransform_set_anchorMin_m2808(L_26, L_29, /*hidden argument*/&RectTransform_set_anchorMin_m2808_MethodInfo);
		RectTransform_t370 * L_30 = ___rect;
		RectTransform_t370 * L_31 = ___rect;
		NullCheck(L_31);
		Vector2_t48  L_32 = RectTransform_get_anchorMax_m2805(L_31, /*hidden argument*/&RectTransform_get_anchorMax_m2805_MethodInfo);
		Vector2_t48  L_33 = RectTransformUtility_GetTransposed_m6799(NULL /*static, unused*/, L_32, /*hidden argument*/&RectTransformUtility_GetTransposed_m6799_MethodInfo);
		NullCheck(L_30);
		RectTransform_set_anchorMax_m2720(L_30, L_33, /*hidden argument*/&RectTransform_set_anchorMax_m2720_MethodInfo);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t48  RectTransformUtility_GetTransposed_m6799 (Object_t * __this /* static, unused */, Vector2_t48  ___input, MethodInfo* method)
{
	{
		float L_0 = ((&___input)->___y_2);
		float L_1 = ((&___input)->___x_1);
		Vector2_t48  L_2 = {0};
		Vector2__ctor_m588(&L_2, L_0, L_1, /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Request_t1112_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo SourceID_t1131_il2cpp_TypeInfo;
extern TypeInfo AppID_t1130_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
extern MethodInfo Request_get_sourceId_m6801_MethodInfo;
extern MethodInfo Enum_ToString_m7307_MethodInfo;
extern MethodInfo Request_get_appId_m6802_MethodInfo;
extern MethodInfo Request_get_domain_m6803_MethodInfo;


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern MethodInfo Request__ctor_m6800_MethodInfo;
extern "C" void Request__ctor_m6800 (Request_t1112 * __this, MethodInfo* method)
{
	{
		__this->___version_0 = 1;
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m6801 (Request_t1112 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m6802 (Request_t1112 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m6803 (Request_t1112 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern MethodInfo Request_ToString_m6804_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" String_t* Request_ToString_m6804 (Request_t1112 * __this, MethodInfo* method)
{
	static bool Request_ToString_m6804_init;
	if (!Request_ToString_m6804_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		Request_ToString_m6804_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1073(__this, /*hidden argument*/&Object_ToString_m1073_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m6801(__this, /*hidden argument*/&Request_get_sourceId_m6801_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&SourceID_t1131_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m7307(L_5, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t178* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m6802(__this, /*hidden argument*/&Request_get_appId_m6802_MethodInfo);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&AppID_t1130_il2cpp_TypeInfo), &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m7307(L_10, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t178* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m6803(__this, /*hidden argument*/&Request_get_domain_m6803_MethodInfo);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral450, L_12, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResponseBase_t1113_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern TypeInfo IDictionary_2_t1114_il2cpp_TypeInfo;
extern TypeInfo FormatException_t1249_il2cpp_TypeInfo;
extern TypeInfo Convert_t1243_il2cpp_TypeInfo;
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
extern Il2CppType IDictionary_2_t1114_0_0_0;
extern MethodInfo IDictionary_2_TryGetValue_m7308_MethodInfo;
extern MethodInfo String_Concat_m731_MethodInfo;
extern MethodInfo FormatException__ctor_m7309_MethodInfo;
extern MethodInfo Convert_ToInt32_m7310_MethodInfo;
extern MethodInfo Convert_ToUInt16_m7311_MethodInfo;
extern MethodInfo Convert_ToUInt64_m7312_MethodInfo;
extern MethodInfo Convert_ToBoolean_m7313_MethodInfo;
extern Il2CppGenericMethod IDictionary_2_TryGetValue_m7308_GenericMethod;


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern MethodInfo ResponseBase__ctor_m6805_MethodInfo;
extern "C" void ResponseBase__ctor_m6805 (ResponseBase_t1113 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONString_m6806_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m7308_MethodInfo_var;
extern "C" String_t* ResponseBase_ParseJSONString_m6806 (ResponseBase_t1113 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONString_m6806_init;
	if (!ResponseBase_ParseJSONString_m6806_init)
	{
		IDictionary_2_TryGetValue_m7308_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m7308_GenericMethod);
		ResponseBase_ParseJSONString_m6806_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m7308_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, (&String_t_il2cpp_TypeInfo)));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_5 = String_Concat_m731(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral452, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_6 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_6, L_5, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONInt32_m6807_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m7308_MethodInfo_var;
extern "C" int32_t ResponseBase_ParseJSONInt32_m6807 (ResponseBase_t1113 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONInt32_m6807_init;
	if (!ResponseBase_ParseJSONInt32_m6807_init)
	{
		IDictionary_2_TryGetValue_m7308_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m7308_GenericMethod);
		ResponseBase_ParseJSONInt32_m6807_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m7308_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t1243_il2cpp_TypeInfo));
		int32_t L_4 = Convert_ToInt32_m7310(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToInt32_m7310_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m731(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral452, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_7 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_7, L_6, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONUInt16_m6808_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m7308_MethodInfo_var;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m6808 (ResponseBase_t1113 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONUInt16_m6808_init;
	if (!ResponseBase_ParseJSONUInt16_m6808_init)
	{
		IDictionary_2_TryGetValue_m7308_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m7308_GenericMethod);
		ResponseBase_ParseJSONUInt16_m6808_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m7308_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t1243_il2cpp_TypeInfo));
		uint16_t L_4 = Convert_ToUInt16_m7311(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToUInt16_m7311_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m731(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral452, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_7 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_7, L_6, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONUInt64_m6809_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m7308_MethodInfo_var;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m6809 (ResponseBase_t1113 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONUInt64_m6809_init;
	if (!ResponseBase_ParseJSONUInt64_m6809_init)
	{
		IDictionary_2_TryGetValue_m7308_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m7308_GenericMethod);
		ResponseBase_ParseJSONUInt64_m6809_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m7308_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t1243_il2cpp_TypeInfo));
		uint64_t L_4 = Convert_ToUInt64_m7312(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToUInt64_m7312_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m731(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral452, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_7 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_7, L_6, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern MethodInfo ResponseBase_ParseJSONBool_m6810_MethodInfo;
extern MethodInfo* IDictionary_2_TryGetValue_m7308_MethodInfo_var;
extern "C" bool ResponseBase_ParseJSONBool_m6810 (ResponseBase_t1113 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, MethodInfo* method)
{
	static bool ResponseBase_ParseJSONBool_m6810_init;
	if (!ResponseBase_ParseJSONBool_m6810_init)
	{
		IDictionary_2_TryGetValue_m7308_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_TryGetValue_m7308_GenericMethod);
		ResponseBase_ParseJSONBool_m6810_init = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(IDictionary_2_TryGetValue_m7308_MethodInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t1243_il2cpp_TypeInfo));
		bool L_4 = Convert_ToBoolean_m7313(NULL /*static, unused*/, L_3, /*hidden argument*/&Convert_ToBoolean_m7313_MethodInfo);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_6 = String_Concat_m731(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral452, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_7 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_7, L_6, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Response_t1115_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"

extern MethodInfo Response_get_success_m6812_MethodInfo;
extern MethodInfo Response_get_extendedInfo_m6814_MethodInfo;
extern MethodInfo Response_set_success_m6813_MethodInfo;
extern MethodInfo Response_set_extendedInfo_m6815_MethodInfo;


// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern MethodInfo Response__ctor_m6811_MethodInfo;
extern "C" void Response__ctor_m6811 (Response_t1115 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m6805(__this, /*hidden argument*/&ResponseBase__ctor_m6805_MethodInfo);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m6812 (Response_t1115 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m6813 (Response_t1115 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m6814 (Response_t1115 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m6815 (Response_t1115 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern MethodInfo Response_ToString_m6816_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" String_t* Response_ToString_m6816 (Response_t1115 * __this, MethodInfo* method)
{
	static bool Response_ToString_m6816_init;
	if (!Response_ToString_m6816_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		Response_ToString_m6816_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m1073(__this, /*hidden argument*/&Object_ToString_m1073_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		bool L_3 = Response_get_success_m6812(__this, /*hidden argument*/&Response_get_success_m6812_MethodInfo);
		bool L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t178* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m6814(__this, /*hidden argument*/&Response_get_extendedInfo_m6814_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral453, L_6, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern MethodInfo Response_Parse_m6817_MethodInfo;
extern TypeInfo* IDictionary_2_t1114_il2cpp_TypeInfo_var;
extern "C" void Response_Parse_m6817 (Response_t1115 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool Response_Parse_m6817_init;
	if (!Response_Parse_m6817_init)
	{
		IDictionary_2_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t1114_0_0_0);
		Response_Parse_m6817_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t1114_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m6810(__this, (String_t*) &_stringLiteral454, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONBool_m6810_MethodInfo);
		Response_set_success_m6813(__this, L_4, /*hidden argument*/&Response_set_success_m6813_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m6806(__this, (String_t*) &_stringLiteral455, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m6806_MethodInfo);
		Response_set_extendedInfo_m6815(__this, L_7, /*hidden argument*/&Response_set_extendedInfo_m6815_MethodInfo);
		bool L_8 = Response_get_success_m6812(__this, /*hidden argument*/&Response_get_success_m6812_MethodInfo);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m6814(__this, /*hidden argument*/&Response_get_extendedInfo_m6814_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral456, L_9, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_11 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_11, L_10, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BasicResponse_t1116_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern MethodInfo BasicResponse__ctor_m6818_MethodInfo;
extern "C" void BasicResponse__ctor_m6818 (BasicResponse_t1116 * __this, MethodInfo* method)
{
	{
		Response__ctor_m6811(__this, /*hidden argument*/&Response__ctor_m6811_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateMatchRequest_t1118_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25.h"
extern TypeInfo UInt32_t1250_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t1117_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_25MethodDeclarations.h"
extern Il2CppType Dictionary_2_t1117_0_0_0;
extern MethodInfo CreateMatchRequest_get_name_m6820_MethodInfo;
extern MethodInfo CreateMatchRequest_get_size_m6822_MethodInfo;
extern MethodInfo CreateMatchRequest_get_advertise_m6824_MethodInfo;
extern MethodInfo CreateMatchRequest_get_password_m6826_MethodInfo;
extern MethodInfo CreateMatchRequest_get_matchAttributes_m6828_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m7314_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Count_m7314_GenericMethod;


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern MethodInfo CreateMatchRequest__ctor_m6819_MethodInfo;
extern "C" void CreateMatchRequest__ctor_m6819 (CreateMatchRequest_t1118 * __this, MethodInfo* method)
{
	{
		Request__ctor_m6800(__this, /*hidden argument*/&Request__ctor_m6800_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m6820 (CreateMatchRequest_t1118 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern MethodInfo CreateMatchRequest_set_name_m6821_MethodInfo;
extern "C" void CreateMatchRequest_set_name_m6821 (CreateMatchRequest_t1118 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m6822 (CreateMatchRequest_t1118 * __this, MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern MethodInfo CreateMatchRequest_set_size_m6823_MethodInfo;
extern "C" void CreateMatchRequest_set_size_m6823 (CreateMatchRequest_t1118 * __this, uint32_t ___value, MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m6824 (CreateMatchRequest_t1118 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern MethodInfo CreateMatchRequest_set_advertise_m6825_MethodInfo;
extern "C" void CreateMatchRequest_set_advertise_m6825 (CreateMatchRequest_t1118 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m6826 (CreateMatchRequest_t1118 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern MethodInfo CreateMatchRequest_set_password_m6827_MethodInfo;
extern "C" void CreateMatchRequest_set_password_m6827 (CreateMatchRequest_t1118 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t1117 * CreateMatchRequest_get_matchAttributes_m6828 (CreateMatchRequest_t1118 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1117 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern MethodInfo CreateMatchRequest_ToString_m6829_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m7314_MethodInfo_var;
extern "C" String_t* CreateMatchRequest_ToString_m6829 (CreateMatchRequest_t1118 * __this, MethodInfo* method)
{
	static bool CreateMatchRequest_ToString_m6829_init;
	if (!CreateMatchRequest_ToString_m6829_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		Dictionary_2_get_Count_m7314_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m7314_GenericMethod);
		CreateMatchRequest_ToString_m6829_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t178* G_B2_1 = {0};
	ObjectU5BU5D_t178* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t178* G_B1_1 = {0};
	ObjectU5BU5D_t178* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t178* G_B3_2 = {0};
	ObjectU5BU5D_t178* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t178* G_B5_1 = {0};
	ObjectU5BU5D_t178* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t178* G_B4_1 = {0};
	ObjectU5BU5D_t178* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t178* G_B6_2 = {0};
	ObjectU5BU5D_t178* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m6804(__this, /*hidden argument*/&Request_ToString_m6804_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m6820(__this, /*hidden argument*/&CreateMatchRequest_get_name_m6820_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t178* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m6822(__this, /*hidden argument*/&CreateMatchRequest_get_size_m6822_MethodInfo);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&UInt32_t1250_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t178* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m6824(__this, /*hidden argument*/&CreateMatchRequest_get_advertise_m6824_MethodInfo);
		bool L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo), &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t178* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m6826(__this, /*hidden argument*/&CreateMatchRequest_get_password_m6826_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m653(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral457;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral457;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral458;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (String_t*) &_stringLiteral459;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t178* L_16 = G_B3_3;
		Dictionary_2_t1117 * L_17 = CreateMatchRequest_get_matchAttributes_m6828(__this, /*hidden argument*/&CreateMatchRequest_get_matchAttributes_m6828_MethodInfo);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t1117 * L_18 = CreateMatchRequest_get_matchAttributes_m6828(__this, /*hidden argument*/&CreateMatchRequest_get_matchAttributes_m6828_MethodInfo);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m7314_MethodInfo_var, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m6494(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CreateMatchResponse_t1119_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo NetworkID_t1132_il2cpp_TypeInfo;
extern TypeInfo NodeID_t1133_il2cpp_TypeInfo;
extern MethodInfo CreateMatchResponse_get_address_m6831_MethodInfo;
extern MethodInfo CreateMatchResponse_get_port_m6833_MethodInfo;
extern MethodInfo CreateMatchResponse_get_networkId_m6835_MethodInfo;
extern MethodInfo CreateMatchResponse_get_nodeId_m6839_MethodInfo;
extern MethodInfo CreateMatchResponse_get_usingRelay_m6841_MethodInfo;
extern MethodInfo CreateMatchResponse_set_address_m6832_MethodInfo;
extern MethodInfo CreateMatchResponse_set_port_m6834_MethodInfo;
extern MethodInfo CreateMatchResponse_set_networkId_m6836_MethodInfo;
extern MethodInfo CreateMatchResponse_set_accessTokenString_m6838_MethodInfo;
extern MethodInfo CreateMatchResponse_set_nodeId_m6840_MethodInfo;
extern MethodInfo CreateMatchResponse_set_usingRelay_m6842_MethodInfo;


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern MethodInfo CreateMatchResponse__ctor_m6830_MethodInfo;
extern "C" void CreateMatchResponse__ctor_m6830 (CreateMatchResponse_t1119 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m6818(__this, /*hidden argument*/&BasicResponse__ctor_m6818_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m6831 (CreateMatchResponse_t1119 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m6832 (CreateMatchResponse_t1119 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m6833 (CreateMatchResponse_t1119 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m6834 (CreateMatchResponse_t1119 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m6835 (CreateMatchResponse_t1119 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m6836 (CreateMatchResponse_t1119 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern MethodInfo CreateMatchResponse_get_accessTokenString_m6837_MethodInfo;
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m6837 (CreateMatchResponse_t1119 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m6838 (CreateMatchResponse_t1119 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m6839 (CreateMatchResponse_t1119 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m6840 (CreateMatchResponse_t1119 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m6841 (CreateMatchResponse_t1119 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m6842 (CreateMatchResponse_t1119 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern MethodInfo CreateMatchResponse_ToString_m6843_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchResponse_ToString_m6843 (CreateMatchResponse_t1119 * __this, MethodInfo* method)
{
	static bool CreateMatchResponse_ToString_m6843_init;
	if (!CreateMatchResponse_ToString_m6843_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		CreateMatchResponse_ToString_m6843_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m6816(__this, /*hidden argument*/&Response_ToString_m6816_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m6831(__this, /*hidden argument*/&CreateMatchResponse_get_address_m6831_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t178* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m6833(__this, /*hidden argument*/&CreateMatchResponse_get_port_m6833_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t178* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m6835(__this, /*hidden argument*/&CreateMatchResponse_get_networkId_m6835_MethodInfo);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m7307(L_11, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t178* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m6839(__this, /*hidden argument*/&CreateMatchResponse_get_nodeId_m6839_MethodInfo);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&NodeID_t1133_il2cpp_TypeInfo), &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m7307(L_16, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t178* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m6841(__this, /*hidden argument*/&CreateMatchResponse_get_usingRelay_m6841_MethodInfo);
		bool L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral460, L_18, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern MethodInfo CreateMatchResponse_Parse_m6844_MethodInfo;
extern TypeInfo* IDictionary_2_t1114_il2cpp_TypeInfo_var;
extern "C" void CreateMatchResponse_Parse_m6844 (CreateMatchResponse_t1119 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool CreateMatchResponse_Parse_m6844_init;
	if (!CreateMatchResponse_Parse_m6844_init)
	{
		IDictionary_2_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t1114_0_0_0);
		CreateMatchResponse_Parse_m6844_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m6817(__this, L_0, /*hidden argument*/&Response_Parse_m6817_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t1114_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m6806(__this, (String_t*) &_stringLiteral461, L_3, L_4, /*hidden argument*/&ResponseBase_ParseJSONString_m6806_MethodInfo);
		CreateMatchResponse_set_address_m6832(__this, L_5, /*hidden argument*/&CreateMatchResponse_set_address_m6832_MethodInfo);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m6807(__this, (String_t*) &_stringLiteral462, L_6, L_7, /*hidden argument*/&ResponseBase_ParseJSONInt32_m6807_MethodInfo);
		CreateMatchResponse_set_port_m6834(__this, L_8, /*hidden argument*/&CreateMatchResponse_set_port_m6834_MethodInfo);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m6809(__this, (String_t*) &_stringLiteral463, L_9, L_10, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m6809_MethodInfo);
		CreateMatchResponse_set_networkId_m6836(__this, L_11, /*hidden argument*/&CreateMatchResponse_set_networkId_m6836_MethodInfo);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m6806(__this, (String_t*) &_stringLiteral464, L_12, L_13, /*hidden argument*/&ResponseBase_ParseJSONString_m6806_MethodInfo);
		CreateMatchResponse_set_accessTokenString_m6838(__this, L_14, /*hidden argument*/&CreateMatchResponse_set_accessTokenString_m6838_MethodInfo);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m6808(__this, (String_t*) &_stringLiteral465, L_15, L_16, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m6808_MethodInfo);
		CreateMatchResponse_set_nodeId_m6840(__this, L_17, /*hidden argument*/&CreateMatchResponse_set_nodeId_m6840_MethodInfo);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m6810(__this, (String_t*) &_stringLiteral466, L_18, L_19, /*hidden argument*/&ResponseBase_ParseJSONBool_m6810_MethodInfo);
		CreateMatchResponse_set_usingRelay_m6842(__this, L_20, /*hidden argument*/&CreateMatchResponse_set_usingRelay_m6842_MethodInfo);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral467, L_22, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_24 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_24, L_23, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JoinMatchRequest_t1120_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"

extern MethodInfo JoinMatchRequest_get_networkId_m6846_MethodInfo;
extern MethodInfo JoinMatchRequest_get_password_m6848_MethodInfo;


// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern MethodInfo JoinMatchRequest__ctor_m6845_MethodInfo;
extern "C" void JoinMatchRequest__ctor_m6845 (JoinMatchRequest_t1120 * __this, MethodInfo* method)
{
	{
		Request__ctor_m6800(__this, /*hidden argument*/&Request__ctor_m6800_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m6846 (JoinMatchRequest_t1120 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo JoinMatchRequest_set_networkId_m6847_MethodInfo;
extern "C" void JoinMatchRequest_set_networkId_m6847 (JoinMatchRequest_t1120 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m6848 (JoinMatchRequest_t1120 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern MethodInfo JoinMatchRequest_set_password_m6849_MethodInfo;
extern "C" void JoinMatchRequest_set_password_m6849 (JoinMatchRequest_t1120 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern MethodInfo JoinMatchRequest_ToString_m6850_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchRequest_ToString_m6850 (JoinMatchRequest_t1120 * __this, MethodInfo* method)
{
	static bool JoinMatchRequest_ToString_m6850_init;
	if (!JoinMatchRequest_ToString_m6850_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		JoinMatchRequest_ToString_m6850_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t178* G_B2_1 = {0};
	ObjectU5BU5D_t178* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t178* G_B1_1 = {0};
	ObjectU5BU5D_t178* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t178* G_B3_2 = {0};
	ObjectU5BU5D_t178* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m6804(__this, /*hidden argument*/&Request_ToString_m6804_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m6846(__this, /*hidden argument*/&JoinMatchRequest_get_networkId_m6846_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m7307(L_5, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t178* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m6848(__this, /*hidden argument*/&JoinMatchRequest_get_password_m6848_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m653(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (String_t*) &_stringLiteral468;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (String_t*) &_stringLiteral468;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral458;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (String_t*) &_stringLiteral459;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m6494(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JoinMatchResponse_t1121_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"

extern MethodInfo JoinMatchResponse_get_address_m6852_MethodInfo;
extern MethodInfo JoinMatchResponse_get_port_m6854_MethodInfo;
extern MethodInfo JoinMatchResponse_get_networkId_m6856_MethodInfo;
extern MethodInfo JoinMatchResponse_get_nodeId_m6860_MethodInfo;
extern MethodInfo JoinMatchResponse_get_usingRelay_m6862_MethodInfo;
extern MethodInfo JoinMatchResponse_set_address_m6853_MethodInfo;
extern MethodInfo JoinMatchResponse_set_port_m6855_MethodInfo;
extern MethodInfo JoinMatchResponse_set_networkId_m6857_MethodInfo;
extern MethodInfo JoinMatchResponse_set_accessTokenString_m6859_MethodInfo;
extern MethodInfo JoinMatchResponse_set_nodeId_m6861_MethodInfo;
extern MethodInfo JoinMatchResponse_set_usingRelay_m6863_MethodInfo;


// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern MethodInfo JoinMatchResponse__ctor_m6851_MethodInfo;
extern "C" void JoinMatchResponse__ctor_m6851 (JoinMatchResponse_t1121 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m6818(__this, /*hidden argument*/&BasicResponse__ctor_m6818_MethodInfo);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m6852 (JoinMatchResponse_t1121 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m6853 (JoinMatchResponse_t1121 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m6854 (JoinMatchResponse_t1121 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m6855 (JoinMatchResponse_t1121 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m6856 (JoinMatchResponse_t1121 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m6857 (JoinMatchResponse_t1121 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern MethodInfo JoinMatchResponse_get_accessTokenString_m6858_MethodInfo;
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m6858 (JoinMatchResponse_t1121 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m6859 (JoinMatchResponse_t1121 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m6860 (JoinMatchResponse_t1121 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m6861 (JoinMatchResponse_t1121 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m6862 (JoinMatchResponse_t1121 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m6863 (JoinMatchResponse_t1121 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern MethodInfo JoinMatchResponse_ToString_m6864_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchResponse_ToString_m6864 (JoinMatchResponse_t1121 * __this, MethodInfo* method)
{
	static bool JoinMatchResponse_ToString_m6864_init;
	if (!JoinMatchResponse_ToString_m6864_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		JoinMatchResponse_ToString_m6864_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m6816(__this, /*hidden argument*/&Response_ToString_m6816_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m6852(__this, /*hidden argument*/&JoinMatchResponse_get_address_m6852_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t178* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m6854(__this, /*hidden argument*/&JoinMatchResponse_get_port_m6854_MethodInfo);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t178* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m6856(__this, /*hidden argument*/&JoinMatchResponse_get_networkId_m6856_MethodInfo);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m7307(L_11, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t178* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m6860(__this, /*hidden argument*/&JoinMatchResponse_get_nodeId_m6860_MethodInfo);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&NodeID_t1133_il2cpp_TypeInfo), &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m7307(L_16, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t178* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m6862(__this, /*hidden argument*/&JoinMatchResponse_get_usingRelay_m6862_MethodInfo);
		bool L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo), &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral460, L_18, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern MethodInfo JoinMatchResponse_Parse_m6865_MethodInfo;
extern TypeInfo* IDictionary_2_t1114_il2cpp_TypeInfo_var;
extern "C" void JoinMatchResponse_Parse_m6865 (JoinMatchResponse_t1121 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool JoinMatchResponse_Parse_m6865_init;
	if (!JoinMatchResponse_Parse_m6865_init)
	{
		IDictionary_2_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t1114_0_0_0);
		JoinMatchResponse_Parse_m6865_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m6817(__this, L_0, /*hidden argument*/&Response_Parse_m6817_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t1114_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m6806(__this, (String_t*) &_stringLiteral461, L_3, L_4, /*hidden argument*/&ResponseBase_ParseJSONString_m6806_MethodInfo);
		JoinMatchResponse_set_address_m6853(__this, L_5, /*hidden argument*/&JoinMatchResponse_set_address_m6853_MethodInfo);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m6807(__this, (String_t*) &_stringLiteral462, L_6, L_7, /*hidden argument*/&ResponseBase_ParseJSONInt32_m6807_MethodInfo);
		JoinMatchResponse_set_port_m6855(__this, L_8, /*hidden argument*/&JoinMatchResponse_set_port_m6855_MethodInfo);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m6809(__this, (String_t*) &_stringLiteral463, L_9, L_10, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m6809_MethodInfo);
		JoinMatchResponse_set_networkId_m6857(__this, L_11, /*hidden argument*/&JoinMatchResponse_set_networkId_m6857_MethodInfo);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m6806(__this, (String_t*) &_stringLiteral464, L_12, L_13, /*hidden argument*/&ResponseBase_ParseJSONString_m6806_MethodInfo);
		JoinMatchResponse_set_accessTokenString_m6859(__this, L_14, /*hidden argument*/&JoinMatchResponse_set_accessTokenString_m6859_MethodInfo);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m6808(__this, (String_t*) &_stringLiteral465, L_15, L_16, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m6808_MethodInfo);
		JoinMatchResponse_set_nodeId_m6861(__this, L_17, /*hidden argument*/&JoinMatchResponse_set_nodeId_m6861_MethodInfo);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m6810(__this, (String_t*) &_stringLiteral466, L_18, L_19, /*hidden argument*/&ResponseBase_ParseJSONBool_m6810_MethodInfo);
		JoinMatchResponse_set_usingRelay_m6863(__this, L_20, /*hidden argument*/&JoinMatchResponse_set_usingRelay_m6863_MethodInfo);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_21);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_23 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral467, L_22, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_24 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_24, L_23, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DestroyMatchRequest_t1122_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"

extern MethodInfo DestroyMatchRequest_get_networkId_m6867_MethodInfo;


// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern MethodInfo DestroyMatchRequest__ctor_m6866_MethodInfo;
extern "C" void DestroyMatchRequest__ctor_m6866 (DestroyMatchRequest_t1122 * __this, MethodInfo* method)
{
	{
		Request__ctor_m6800(__this, /*hidden argument*/&Request__ctor_m6800_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m6867 (DestroyMatchRequest_t1122 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo DestroyMatchRequest_set_networkId_m6868_MethodInfo;
extern "C" void DestroyMatchRequest_set_networkId_m6868 (DestroyMatchRequest_t1122 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern MethodInfo DestroyMatchRequest_ToString_m6869_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" String_t* DestroyMatchRequest_ToString_m6869 (DestroyMatchRequest_t1122 * __this, MethodInfo* method)
{
	static bool DestroyMatchRequest_ToString_m6869_init;
	if (!DestroyMatchRequest_ToString_m6869_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		DestroyMatchRequest_ToString_m6869_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m6804(__this, /*hidden argument*/&Request_ToString_m6804_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m6867(__this, /*hidden argument*/&DestroyMatchRequest_get_networkId_m6867_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m7307(L_5, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral469, L_2, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DropConnectionRequest_t1123_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"

extern MethodInfo DropConnectionRequest_get_networkId_m6871_MethodInfo;
extern MethodInfo DropConnectionRequest_get_nodeId_m6873_MethodInfo;


// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern MethodInfo DropConnectionRequest__ctor_m6870_MethodInfo;
extern "C" void DropConnectionRequest__ctor_m6870 (DropConnectionRequest_t1123 * __this, MethodInfo* method)
{
	{
		Request__ctor_m6800(__this, /*hidden argument*/&Request__ctor_m6800_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m6871 (DropConnectionRequest_t1123 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo DropConnectionRequest_set_networkId_m6872_MethodInfo;
extern "C" void DropConnectionRequest_set_networkId_m6872 (DropConnectionRequest_t1123 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m6873 (DropConnectionRequest_t1123 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern MethodInfo DropConnectionRequest_set_nodeId_m6874_MethodInfo;
extern "C" void DropConnectionRequest_set_nodeId_m6874 (DropConnectionRequest_t1123 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern MethodInfo DropConnectionRequest_ToString_m6875_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" String_t* DropConnectionRequest_ToString_m6875 (DropConnectionRequest_t1123 * __this, MethodInfo* method)
{
	static bool DropConnectionRequest_ToString_m6875_init;
	if (!DropConnectionRequest_ToString_m6875_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		DropConnectionRequest_ToString_m6875_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m6804(__this, /*hidden argument*/&Request_ToString_m6804_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m6871(__this, /*hidden argument*/&DropConnectionRequest_get_networkId_m6871_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m7307(L_5, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t178* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m6873(__this, /*hidden argument*/&DropConnectionRequest_get_nodeId_m6873_MethodInfo);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(InitializedTypeInfo(&NodeID_t1133_il2cpp_TypeInfo), &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m7307(L_10, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral470, L_7, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ListMatchRequest_t1124_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"

extern MethodInfo ListMatchRequest_get_pageSize_m6877_MethodInfo;
extern MethodInfo ListMatchRequest_get_pageNum_m6879_MethodInfo;
extern MethodInfo ListMatchRequest_get_nameFilter_m6881_MethodInfo;
extern MethodInfo ListMatchRequest_get_matchAttributeFilterLessThan_m6883_MethodInfo;
extern MethodInfo ListMatchRequest_get_matchAttributeFilterGreaterThan_m6884_MethodInfo;


// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern MethodInfo ListMatchRequest__ctor_m6876_MethodInfo;
extern "C" void ListMatchRequest__ctor_m6876 (ListMatchRequest_t1124 * __this, MethodInfo* method)
{
	{
		Request__ctor_m6800(__this, /*hidden argument*/&Request__ctor_m6800_MethodInfo);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m6877 (ListMatchRequest_t1124 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern MethodInfo ListMatchRequest_set_pageSize_m6878_MethodInfo;
extern "C" void ListMatchRequest_set_pageSize_m6878 (ListMatchRequest_t1124 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m6879 (ListMatchRequest_t1124 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern MethodInfo ListMatchRequest_set_pageNum_m6880_MethodInfo;
extern "C" void ListMatchRequest_set_pageNum_m6880 (ListMatchRequest_t1124 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m6881 (ListMatchRequest_t1124 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern MethodInfo ListMatchRequest_set_nameFilter_m6882_MethodInfo;
extern "C" void ListMatchRequest_set_nameFilter_m6882 (ListMatchRequest_t1124 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t1117 * ListMatchRequest_get_matchAttributeFilterLessThan_m6883 (ListMatchRequest_t1124 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1117 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t1117 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m6884 (ListMatchRequest_t1124 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1117 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern MethodInfo ListMatchRequest_ToString_m6885_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m7314_MethodInfo_var;
extern "C" String_t* ListMatchRequest_ToString_m6885 (ListMatchRequest_t1124 * __this, MethodInfo* method)
{
	static bool ListMatchRequest_ToString_m6885_init;
	if (!ListMatchRequest_ToString_m6885_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		Dictionary_2_get_Count_m7314_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m7314_GenericMethod);
		ListMatchRequest_ToString_m6885_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t178* G_B2_1 = {0};
	ObjectU5BU5D_t178* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t178* G_B1_1 = {0};
	ObjectU5BU5D_t178* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t178* G_B3_2 = {0};
	ObjectU5BU5D_t178* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t178* G_B5_1 = {0};
	ObjectU5BU5D_t178* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t178* G_B4_1 = {0};
	ObjectU5BU5D_t178* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t178* G_B6_2 = {0};
	ObjectU5BU5D_t178* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m6804(__this, /*hidden argument*/&Request_ToString_m6804_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m6877(__this, /*hidden argument*/&ListMatchRequest_get_pageSize_m6877_MethodInfo);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t178* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m6879(__this, /*hidden argument*/&ListMatchRequest_get_pageNum_m6879_MethodInfo);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t178* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m6881(__this, /*hidden argument*/&ListMatchRequest_get_nameFilter_m6881_MethodInfo);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t178* L_12 = L_10;
		Dictionary_2_t1117 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m6883(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterLessThan_m6883_MethodInfo);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral471;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral471;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t1117 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m6883(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterLessThan_m6883_MethodInfo);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m7314_MethodInfo_var, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t178* L_18 = G_B3_3;
		Dictionary_2_t1117 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m6884(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterGreaterThan_m6884_MethodInfo);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t1117 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m6884(__this, /*hidden argument*/&ListMatchRequest_get_matchAttributeFilterGreaterThan_m6884_MethodInfo);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m7314_MethodInfo_var, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m6494(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchDirectConnectInfo_t1125_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"

extern MethodInfo MatchDirectConnectInfo_get_nodeId_m6887_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_publicAddress_m6889_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_get_privateAddress_m6891_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_nodeId_m6888_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_publicAddress_m6890_MethodInfo;
extern MethodInfo MatchDirectConnectInfo_set_privateAddress_m6892_MethodInfo;


// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern MethodInfo MatchDirectConnectInfo__ctor_m6886_MethodInfo;
extern "C" void MatchDirectConnectInfo__ctor_m6886 (MatchDirectConnectInfo_t1125 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m6805(__this, /*hidden argument*/&ResponseBase__ctor_m6805_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m6887 (MatchDirectConnectInfo_t1125 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m6888 (MatchDirectConnectInfo_t1125 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m6889 (MatchDirectConnectInfo_t1125 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m6890 (MatchDirectConnectInfo_t1125 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m6891 (MatchDirectConnectInfo_t1125 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m6892 (MatchDirectConnectInfo_t1125 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern MethodInfo MatchDirectConnectInfo_ToString_m6893_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDirectConnectInfo_ToString_m6893 (MatchDirectConnectInfo_t1125 * __this, MethodInfo* method)
{
	static bool MatchDirectConnectInfo_ToString_m6893_init;
	if (!MatchDirectConnectInfo_ToString_m6893_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		MatchDirectConnectInfo_ToString_m6893_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1073(__this, /*hidden argument*/&Object_ToString_m1073_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m6887(__this, /*hidden argument*/&MatchDirectConnectInfo_get_nodeId_m6887_MethodInfo);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NodeID_t1133_il2cpp_TypeInfo), &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t178* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m6889(__this, /*hidden argument*/&MatchDirectConnectInfo_get_publicAddress_m6889_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t178* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m6891(__this, /*hidden argument*/&MatchDirectConnectInfo_get_privateAddress_m6891_MethodInfo);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral472, L_8, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern MethodInfo MatchDirectConnectInfo_Parse_m6894_MethodInfo;
extern TypeInfo* IDictionary_2_t1114_il2cpp_TypeInfo_var;
extern "C" void MatchDirectConnectInfo_Parse_m6894 (MatchDirectConnectInfo_t1125 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool MatchDirectConnectInfo_Parse_m6894_init;
	if (!MatchDirectConnectInfo_Parse_m6894_init)
	{
		IDictionary_2_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t1114_0_0_0);
		MatchDirectConnectInfo_Parse_m6894_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t1114_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m6808(__this, (String_t*) &_stringLiteral465, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONUInt16_m6808_MethodInfo);
		MatchDirectConnectInfo_set_nodeId_m6888(__this, L_4, /*hidden argument*/&MatchDirectConnectInfo_set_nodeId_m6888_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m6806(__this, (String_t*) &_stringLiteral473, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m6806_MethodInfo);
		MatchDirectConnectInfo_set_publicAddress_m6890(__this, L_7, /*hidden argument*/&MatchDirectConnectInfo_set_publicAddress_m6890_MethodInfo);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m6806(__this, (String_t*) &_stringLiteral474, L_8, L_9, /*hidden argument*/&ResponseBase_ParseJSONString_m6806_MethodInfo);
		MatchDirectConnectInfo_set_privateAddress_m6892(__this, L_10, /*hidden argument*/&MatchDirectConnectInfo_set_privateAddress_m6892_MethodInfo);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_11);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral467, L_12, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_14 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_14, L_13, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MatchDesc_t1127_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_56.h"
extern TypeInfo List_1_t1126_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_56MethodDeclarations.h"
extern Il2CppType List_1_t1126_0_0_0;
extern MethodInfo MatchDesc_get_networkId_m6896_MethodInfo;
extern MethodInfo MatchDesc_get_name_m6898_MethodInfo;
extern MethodInfo MatchDesc_get_averageEloScore_m6900_MethodInfo;
extern MethodInfo MatchDesc_get_maxSize_m6901_MethodInfo;
extern MethodInfo MatchDesc_get_currentSize_m6903_MethodInfo;
extern MethodInfo MatchDesc_get_isPrivate_m6905_MethodInfo;
extern MethodInfo MatchDesc_get_matchAttributes_m6907_MethodInfo;
extern MethodInfo MatchDesc_get_directConnectInfos_m6909_MethodInfo;
extern MethodInfo List_1_get_Count_m7315_MethodInfo;
extern MethodInfo MatchDesc_set_networkId_m6897_MethodInfo;
extern MethodInfo MatchDesc_set_name_m6899_MethodInfo;
extern MethodInfo MatchDesc_set_maxSize_m6902_MethodInfo;
extern MethodInfo MatchDesc_set_currentSize_m6904_MethodInfo;
extern MethodInfo MatchDesc_set_isPrivate_m6906_MethodInfo;
extern MethodInfo MatchDesc_set_directConnectInfos_m6910_MethodInfo;
struct ResponseBase_t1113;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t1126 * ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t1125_m7316 (ResponseBase_t1113 * __this, String_t* p0, Object_t * p1, Object_t* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod List_1_get_Count_m7315_GenericMethod;
extern Il2CppGenericMethod ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t1125_m7316_GenericMethod;


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern MethodInfo MatchDesc__ctor_m6895_MethodInfo;
extern "C" void MatchDesc__ctor_m6895 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		ResponseBase__ctor_m6805(__this, /*hidden argument*/&ResponseBase__ctor_m6805_MethodInfo);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m6896 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m6897 (MatchDesc_t1127 * __this, uint64_t ___value, MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m6898 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m6899 (MatchDesc_t1127 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m6900 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m6901 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m6902 (MatchDesc_t1127 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m6903 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m6904 (MatchDesc_t1127 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m6905 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m6906 (MatchDesc_t1127 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t1117 * MatchDesc_get_matchAttributes_m6907 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t1117 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern MethodInfo MatchDesc_get_hostNodeId_m6908_MethodInfo;
extern "C" uint16_t MatchDesc_get_hostNodeId_m6908 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t1126 * MatchDesc_get_directConnectInfos_m6909 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	{
		List_1_t1126 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m6910 (MatchDesc_t1127 * __this, List_1_t1126 * ___value, MethodInfo* method)
{
	{
		List_1_t1126 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern MethodInfo MatchDesc_ToString_m6911_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_get_Count_m7314_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m7315_MethodInfo_var;
extern "C" String_t* MatchDesc_ToString_m6911 (MatchDesc_t1127 * __this, MethodInfo* method)
{
	static bool MatchDesc_ToString_m6911_init;
	if (!MatchDesc_ToString_m6911_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		Dictionary_2_get_Count_m7314_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m7314_GenericMethod);
		List_1_get_Count_m7315_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m7315_GenericMethod);
		MatchDesc_ToString_m6911_init = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t178* G_B2_1 = {0};
	ObjectU5BU5D_t178* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t178* G_B1_1 = {0};
	ObjectU5BU5D_t178* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t178* G_B3_2 = {0};
	ObjectU5BU5D_t178* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m1073(__this, /*hidden argument*/&Object_ToString_m1073_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m6896(__this, /*hidden argument*/&MatchDesc_get_networkId_m6896_MethodInfo);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m7307(L_5, (String_t*) &_stringLiteral451, /*hidden argument*/&Enum_ToString_m7307_MethodInfo);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t178* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m6898(__this, /*hidden argument*/&MatchDesc_get_name_m6898_MethodInfo);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t178* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m6900(__this, /*hidden argument*/&MatchDesc_get_averageEloScore_m6900_MethodInfo);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t178* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m6901(__this, /*hidden argument*/&MatchDesc_get_maxSize_m6901_MethodInfo);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t178* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m6903(__this, /*hidden argument*/&MatchDesc_get_currentSize_m6903_MethodInfo);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t178* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m6905(__this, /*hidden argument*/&MatchDesc_get_isPrivate_m6905_MethodInfo);
		bool L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo), &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t178* L_25 = L_21;
		Dictionary_2_t1117 * L_26 = MatchDesc_get_matchAttributes_m6907(__this, /*hidden argument*/&MatchDesc_get_matchAttributes_m6907_MethodInfo);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (String_t*) &_stringLiteral475;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (String_t*) &_stringLiteral475;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t1117 * L_27 = MatchDesc_get_matchAttributes_m6907(__this, /*hidden argument*/&MatchDesc_get_matchAttributes_m6907_MethodInfo);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m7314_MethodInfo_var, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t178* L_31 = G_B3_3;
		List_1_t1126 * L_32 = MatchDesc_get_directConnectInfos_m6909(__this, /*hidden argument*/&MatchDesc_get_directConnectInfos_m6909_MethodInfo);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m7315_MethodInfo_var, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m6494(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern MethodInfo MatchDesc_Parse_m6912_MethodInfo;
extern TypeInfo* IDictionary_2_t1114_il2cpp_TypeInfo_var;
extern MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t1125_m7316_MethodInfo_var;
extern "C" void MatchDesc_Parse_m6912 (MatchDesc_t1127 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool MatchDesc_Parse_m6912_init;
	if (!MatchDesc_Parse_m6912_init)
	{
		IDictionary_2_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t1114_0_0_0);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t1125_m7316_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t1125_m7316_GenericMethod);
		MatchDesc_Parse_m6912_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t1114_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m6809(__this, (String_t*) &_stringLiteral463, L_2, L_3, /*hidden argument*/&ResponseBase_ParseJSONUInt64_m6809_MethodInfo);
		MatchDesc_set_networkId_m6897(__this, L_4, /*hidden argument*/&MatchDesc_set_networkId_m6897_MethodInfo);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m6806(__this, (String_t*) &_stringLiteral476, L_5, L_6, /*hidden argument*/&ResponseBase_ParseJSONString_m6806_MethodInfo);
		MatchDesc_set_name_m6899(__this, L_7, /*hidden argument*/&MatchDesc_set_name_m6899_MethodInfo);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m6807(__this, (String_t*) &_stringLiteral477, L_8, L_9, /*hidden argument*/&ResponseBase_ParseJSONInt32_m6807_MethodInfo);
		MatchDesc_set_maxSize_m6902(__this, L_10, /*hidden argument*/&MatchDesc_set_maxSize_m6902_MethodInfo);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m6807(__this, (String_t*) &_stringLiteral478, L_11, L_12, /*hidden argument*/&ResponseBase_ParseJSONInt32_m6807_MethodInfo);
		MatchDesc_set_currentSize_m6904(__this, L_13, /*hidden argument*/&MatchDesc_set_currentSize_m6904_MethodInfo);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m6810(__this, (String_t*) &_stringLiteral479, L_14, L_15, /*hidden argument*/&ResponseBase_ParseJSONBool_m6810_MethodInfo);
		MatchDesc_set_isPrivate_m6906(__this, L_16, /*hidden argument*/&MatchDesc_set_isPrivate_m6906_MethodInfo);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t1126 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t1125_m7316(__this, (String_t*) &_stringLiteral480, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t1125_m7316_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m6910(__this, L_19, /*hidden argument*/&MatchDesc_set_directConnectInfos_m6910_MethodInfo);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_20);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral467, L_21, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_23 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_23, L_22, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ListMatchResponse_t1129_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_57.h"
extern TypeInfo List_1_t1128_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_57MethodDeclarations.h"
extern Il2CppType List_1_t1128_0_0_0;
extern MethodInfo ListMatchResponse_get_matches_m6914_MethodInfo;
extern MethodInfo List_1_get_Count_m7317_MethodInfo;
extern MethodInfo ListMatchResponse_set_matches_m6915_MethodInfo;
struct ResponseBase_t1113;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t1128 * ResponseBase_ParseJSONList_TisMatchDesc_t1127_m7318 (ResponseBase_t1113 * __this, String_t* p0, Object_t * p1, Object_t* p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod List_1_get_Count_m7317_GenericMethod;
extern Il2CppGenericMethod ResponseBase_ParseJSONList_TisMatchDesc_t1127_m7318_GenericMethod;


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern MethodInfo ListMatchResponse__ctor_m6913_MethodInfo;
extern "C" void ListMatchResponse__ctor_m6913 (ListMatchResponse_t1129 * __this, MethodInfo* method)
{
	{
		BasicResponse__ctor_m6818(__this, /*hidden argument*/&BasicResponse__ctor_m6818_MethodInfo);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t1128 * ListMatchResponse_get_matches_m6914 (ListMatchResponse_t1129 * __this, MethodInfo* method)
{
	{
		List_1_t1128 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m6915 (ListMatchResponse_t1129 * __this, List_1_t1128 * ___value, MethodInfo* method)
{
	{
		List_1_t1128 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern MethodInfo ListMatchResponse_ToString_m6916_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_get_Count_m7317_MethodInfo_var;
extern "C" String_t* ListMatchResponse_ToString_m6916 (ListMatchResponse_t1129 * __this, MethodInfo* method)
{
	static bool ListMatchResponse_ToString_m6916_init;
	if (!ListMatchResponse_ToString_m6916_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		List_1_get_Count_m7317_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m7317_GenericMethod);
		ListMatchResponse_ToString_m6916_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m6816(__this, /*hidden argument*/&Response_ToString_m6816_MethodInfo);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t178* L_2 = L_0;
		List_1_t1128 * L_3 = ListMatchResponse_get_matches_m6914(__this, /*hidden argument*/&ListMatchResponse_get_matches_m6914_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m7317_MethodInfo_var, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m6494(NULL /*static, unused*/, (String_t*) &_stringLiteral481, L_2, /*hidden argument*/&UnityString_Format_m6494_MethodInfo);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern MethodInfo ListMatchResponse_Parse_m6917_MethodInfo;
extern TypeInfo* IDictionary_2_t1114_il2cpp_TypeInfo_var;
extern MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t1127_m7318_MethodInfo_var;
extern "C" void ListMatchResponse_Parse_m6917 (ListMatchResponse_t1129 * __this, Object_t * ___obj, MethodInfo* method)
{
	static bool ListMatchResponse_Parse_m6917_init;
	if (!ListMatchResponse_Parse_m6917_init)
	{
		IDictionary_2_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t1114_0_0_0);
		ResponseBase_ParseJSONList_TisMatchDesc_t1127_m7318_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ResponseBase_ParseJSONList_TisMatchDesc_t1127_m7318_GenericMethod);
		ListMatchResponse_Parse_m6917_init = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m6817(__this, L_0, /*hidden argument*/&Response_Parse_m6817_MethodInfo);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t1114_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t1128 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t1127_m7318(__this, (String_t*) &_stringLiteral482, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t1127_m7318_MethodInfo_var);
		ListMatchResponse_set_matches_m6915(__this, L_5, /*hidden argument*/&ListMatchResponse_set_matches_m6915_MethodInfo);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, L_6);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral467, L_7, /*hidden argument*/&String_Concat_m731_MethodInfo);
		FormatException_t1249 * L_9 = (FormatException_t1249 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FormatException_t1249_il2cpp_TypeInfo));
		FormatException__ctor_m7309(L_9, L_8, /*hidden argument*/&FormatException__ctor_m7309_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NetworkAccessToken_t1134_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"

extern TypeInfo ByteU5BU5D_t679_il2cpp_TypeInfo;
extern TypeInfo Byte_t535_il2cpp_TypeInfo;
extern Il2CppType ByteU5BU5D_t679_0_0_0;
extern MethodInfo Convert_ToBase64String_m7319_MethodInfo;


// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern MethodInfo NetworkAccessToken__ctor_m6918_MethodInfo;
extern TypeInfo* ByteU5BU5D_t679_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m6918 (NetworkAccessToken_t1134 * __this, MethodInfo* method)
{
	static bool NetworkAccessToken__ctor_m6918_init;
	if (!NetworkAccessToken__ctor_m6918_init)
	{
		ByteU5BU5D_t679_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t679_0_0_0);
		NetworkAccessToken__ctor_m6918_init = true;
	}
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		__this->___array_0 = ((ByteU5BU5D_t679*)SZArrayNew(ByteU5BU5D_t679_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern MethodInfo NetworkAccessToken_GetByteString_m6919_MethodInfo;
extern "C" String_t* NetworkAccessToken_GetByteString_m6919 (NetworkAccessToken_t1134 * __this, MethodInfo* method)
{
	{
		ByteU5BU5D_t679* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t1243_il2cpp_TypeInfo));
		String_t* L_1 = Convert_ToBase64String_m7319(NULL /*static, unused*/, L_0, /*hidden argument*/&Convert_ToBase64String_m7319_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Utility_t1137_il2cpp_TypeInfo;
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_26.h"
extern TypeInfo Random_t1135_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t1136_il2cpp_TypeInfo;
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_26MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1136_0_0_0;
extern MethodInfo Environment_get_TickCount_m7320_MethodInfo;
extern MethodInfo Random__ctor_m7321_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m7322_MethodInfo;
extern MethodInfo SystemInfo_get_deviceUniqueIdentifier_m5936_MethodInfo;
extern MethodInfo String_Concat_m582_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m7323_MethodInfo;
extern Il2CppGenericMethod Dictionary_2__ctor_m7322_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m7323_GenericMethod;


// System.Void UnityEngine.Networking.Utility::.cctor()
extern MethodInfo Utility__cctor_m6920_MethodInfo;
extern TypeInfo* Dictionary_2_t1136_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m7322_MethodInfo_var;
extern "C" void Utility__cctor_m6920 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Utility__cctor_m6920_init;
	if (!Utility__cctor_m6920_init)
	{
		Dictionary_2_t1136_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t1136_0_0_0);
		Dictionary_2__ctor_m7322_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m7322_GenericMethod);
		Utility__cctor_m6920_init = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m7320(NULL /*static, unused*/, /*hidden argument*/&Environment_get_TickCount_m7320_MethodInfo);
		Random_t1135 * L_1 = (Random_t1135 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Random_t1135_il2cpp_TypeInfo));
		Random__ctor_m7321(L_1, L_0, /*hidden argument*/&Random__ctor_m7321_MethodInfo);
		((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t1136 * L_2 = (Dictionary_2_t1136 *)il2cpp_codegen_object_new (Dictionary_2_t1136_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7322(L_2, /*hidden argument*/Dictionary_2__ctor_m7322_MethodInfo_var);
		((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern MethodInfo Utility_GetSourceID_m6921_MethodInfo;
extern "C" uint64_t Utility_GetSourceID_m6921 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m5936(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_deviceUniqueIdentifier_m5936_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		int32_t L_1 = ((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m582(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&String_Concat_m582_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m7229_MethodInfo, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern MethodInfo Utility_SetAppID_m6922_MethodInfo;
extern "C" void Utility_SetAppID_m6922 (Object_t * __this /* static, unused */, uint64_t ___newAppID, MethodInfo* method)
{
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern MethodInfo Utility_GetAppID_m6923_MethodInfo;
extern "C" uint64_t Utility_GetAppID_m6923 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		uint64_t L_0 = ((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern MethodInfo Utility_GetAccessTokenForNetwork_m6924_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m7323_MethodInfo_var;
extern "C" NetworkAccessToken_t1134 * Utility_GetAccessTokenForNetwork_m6924 (Object_t * __this /* static, unused */, uint64_t ___netId, MethodInfo* method)
{
	static bool Utility_GetAccessTokenForNetwork_m6924_init;
	if (!Utility_GetAccessTokenForNetwork_m6924_init)
	{
		Dictionary_2_TryGetValue_m7323_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m7323_GenericMethod);
		Utility_GetAccessTokenForNetwork_m6924_init = true;
	}
	NetworkAccessToken_t1134 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		Dictionary_2_t1136 * L_0 = ((Utility_t1137_StaticFields*)InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo)->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t1134 ** >::Invoke(Dictionary_2_TryGetValue_m7323_MethodInfo_var, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t1134 * L_3 = (NetworkAccessToken_t1134 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetworkAccessToken_t1134_il2cpp_TypeInfo));
		NetworkAccessToken__ctor_m6918(L_3, /*hidden argument*/&NetworkAccessToken__ctor_m6918_MethodInfo);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t1134 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NetworkMatch_t1139_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
extern TypeInfo Uri_t1138_il2cpp_TypeInfo;
extern TypeInfo WWWForm_t1059_il2cpp_TypeInfo;
extern TypeInfo Enum_t244_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t1057_il2cpp_TypeInfo;
extern TypeInfo WWW_t1056_il2cpp_TypeInfo;
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_24MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1057_0_0_0;
extern MethodInfo Uri__ctor_m7324_MethodInfo;
extern MethodInfo UInt64_TryParse_m7325_MethodInfo;
extern MethodInfo NetworkMatch_SetProgramAppID_m6928_MethodInfo;
extern MethodInfo NetworkMatch_CreateMatch_m6930_MethodInfo;
extern MethodInfo NetworkMatch_get_baseUri_m6926_MethodInfo;
extern MethodInfo Uri__ctor_m7326_MethodInfo;
extern MethodInfo WWWForm__ctor_m6480_MethodInfo;
extern MethodInfo Enum_ToString_m1051_MethodInfo;
extern MethodInfo WWWForm_AddField_m6481_MethodInfo;
extern MethodInfo WWWForm_AddField_m6483_MethodInfo;
extern MethodInfo UInt32_ToString_m7327_MethodInfo;
extern MethodInfo Boolean_ToString_m7328_MethodInfo;
extern MethodInfo WWWForm_get_headers_m6484_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m7278_MethodInfo;
extern MethodInfo Uri_ToString_m7329_MethodInfo;
extern MethodInfo WWW__ctor_m6465_MethodInfo;
extern MethodInfo NetworkMatch_JoinMatch_m6932_MethodInfo;
extern MethodInfo NetworkMatch_DestroyMatch_m6934_MethodInfo;
extern MethodInfo NetworkMatch_DropConnection_m6936_MethodInfo;
extern MethodInfo NetworkMatch_ListMatches_m6938_MethodInfo;
struct NetworkMatch_t1139;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1119_m7330 (NetworkMatch_t1139 * __this, WWW_t1056 * p0, ResponseDelegate_1_t1140 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t1139;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_0.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t1121_m7331 (NetworkMatch_t1139 * __this, WWW_t1056 * p0, ResponseDelegate_1_t1141 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t1139;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_1.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332 (NetworkMatch_t1139 * __this, WWW_t1056 * p0, ResponseDelegate_1_t1142 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct NetworkMatch_t1139;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_U3CPro_2.h"
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t1129_m7333 (NetworkMatch_t1139 * __this, WWW_t1056 * p0, ResponseDelegate_1_t1143 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_set_Item_m7278_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1119_m7330_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t1121_m7331_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_GenericMethod;
extern Il2CppGenericMethod NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t1129_m7333_GenericMethod;


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern MethodInfo NetworkMatch__ctor_m6925_MethodInfo;
extern "C" void NetworkMatch__ctor_m6925 (NetworkMatch_t1139 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri_t1138 * L_0 = (Uri_t1138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri__ctor_m7324(L_0, (String_t*) &_stringLiteral483, /*hidden argument*/&Uri__ctor_m7324_MethodInfo);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		String_t* L_1 = PlayerPrefs_GetString_m6629(NULL /*static, unused*/, (String_t*) &_stringLiteral484, /*hidden argument*/&PlayerPrefs_GetString_m6629_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m7325(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/&UInt64_TryParse_m7325_MethodInfo);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral485, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m6928(__this, L_4, /*hidden argument*/&NetworkMatch_SetProgramAppID_m6928_MethodInfo);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t1138 * NetworkMatch_get_baseUri_m6926 (NetworkMatch_t1139 * __this, MethodInfo* method)
{
	{
		Uri_t1138 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern MethodInfo NetworkMatch_set_baseUri_m6927_MethodInfo;
extern "C" void NetworkMatch_set_baseUri_m6927 (NetworkMatch_t1139 * __this, Uri_t1138 * ___value, MethodInfo* method)
{
	{
		Uri_t1138 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m6928 (NetworkMatch_t1139 * __this, uint64_t ___programAppID, MethodInfo* method)
{
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		Utility_SetAppID_m6922(NULL /*static, unused*/, L_0, /*hidden argument*/&Utility_SetAppID_m6922_MethodInfo);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern MethodInfo NetworkMatch_CreateMatch_m6929_MethodInfo;
extern "C" Coroutine_t413 * NetworkMatch_CreateMatch_m6929 (NetworkMatch_t1139 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t1140 * ___callback, MethodInfo* method)
{
	CreateMatchRequest_t1118 * V_0 = {0};
	{
		CreateMatchRequest_t1118 * L_0 = (CreateMatchRequest_t1118 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CreateMatchRequest_t1118_il2cpp_TypeInfo));
		CreateMatchRequest__ctor_m6819(L_0, /*hidden argument*/&CreateMatchRequest__ctor_m6819_MethodInfo);
		V_0 = L_0;
		CreateMatchRequest_t1118 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m6821(L_1, L_2, /*hidden argument*/&CreateMatchRequest_set_name_m6821_MethodInfo);
		CreateMatchRequest_t1118 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m6823(L_3, L_4, /*hidden argument*/&CreateMatchRequest_set_size_m6823_MethodInfo);
		CreateMatchRequest_t1118 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m6825(L_5, L_6, /*hidden argument*/&CreateMatchRequest_set_advertise_m6825_MethodInfo);
		CreateMatchRequest_t1118 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m6827(L_7, L_8, /*hidden argument*/&CreateMatchRequest_set_password_m6827_MethodInfo);
		CreateMatchRequest_t1118 * L_9 = V_0;
		ResponseDelegate_1_t1140 * L_10 = ___callback;
		Coroutine_t413 * L_11 = NetworkMatch_CreateMatch_m6930(__this, L_9, L_10, /*hidden argument*/&NetworkMatch_CreateMatch_m6930_MethodInfo);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m7278_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1119_m7330_MethodInfo_var;
extern "C" Coroutine_t413 * NetworkMatch_CreateMatch_m6930 (NetworkMatch_t1139 * __this, CreateMatchRequest_t1118 * ___req, ResponseDelegate_1_t1140 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_CreateMatch_m6930_init;
	if (!NetworkMatch_CreateMatch_m6930_init)
	{
		Dictionary_2_set_Item_m7278_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m7278_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1119_m7330_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1119_m7330_GenericMethod);
		NetworkMatch_CreateMatch_m6930_init = true;
	}
	Uri_t1138 * V_0 = {0};
	WWWForm_t1059 * V_1 = {0};
	WWW_t1056 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t1138 * L_0 = NetworkMatch_get_baseUri_m6926(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m6926_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri_t1138 * L_1 = (Uri_t1138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri__ctor_m7326(L_1, L_0, (String_t*) &_stringLiteral486, /*hidden argument*/&Uri__ctor_m7326_MethodInfo);
		V_0 = L_1;
		Uri_t1138 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m582(NULL /*static, unused*/, (String_t*) &_stringLiteral487, L_2, /*hidden argument*/&String_Concat_m582_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		WWWForm_t1059 * L_4 = (WWWForm_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t1059_il2cpp_TypeInfo));
		WWWForm__ctor_m6480(L_4, /*hidden argument*/&WWWForm__ctor_m6480_MethodInfo);
		V_1 = L_4;
		WWWForm_t1059 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m6921(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m6921_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t1131_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m6481(L_5, (String_t*) &_stringLiteral488, L_9, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m6923(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m6923_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t1130_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m6481(L_10, (String_t*) &_stringLiteral489, L_14, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m6483(L_15, (String_t*) &_stringLiteral464, 0, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m6483(L_16, (String_t*) &_stringLiteral490, 0, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_17 = V_1;
		CreateMatchRequest_t1118 * L_18 = ___req;
		NullCheck(L_18);
		String_t* L_19 = CreateMatchRequest_get_name_m6820(L_18, /*hidden argument*/&CreateMatchRequest_get_name_m6820_MethodInfo);
		NullCheck(L_17);
		WWWForm_AddField_m6481(L_17, (String_t*) &_stringLiteral476, L_19, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_20 = V_1;
		CreateMatchRequest_t1118 * L_21 = ___req;
		NullCheck(L_21);
		uint32_t L_22 = CreateMatchRequest_get_size_m6822(L_21, /*hidden argument*/&CreateMatchRequest_get_size_m6822_MethodInfo);
		V_3 = L_22;
		String_t* L_23 = UInt32_ToString_m7327((&V_3), /*hidden argument*/&UInt32_ToString_m7327_MethodInfo);
		NullCheck(L_20);
		WWWForm_AddField_m6481(L_20, (String_t*) &_stringLiteral491, L_23, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_24 = V_1;
		CreateMatchRequest_t1118 * L_25 = ___req;
		NullCheck(L_25);
		bool L_26 = CreateMatchRequest_get_advertise_m6824(L_25, /*hidden argument*/&CreateMatchRequest_get_advertise_m6824_MethodInfo);
		V_4 = L_26;
		String_t* L_27 = Boolean_ToString_m7328((&V_4), /*hidden argument*/&Boolean_ToString_m7328_MethodInfo);
		NullCheck(L_24);
		WWWForm_AddField_m6481(L_24, (String_t*) &_stringLiteral492, L_27, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_28 = V_1;
		CreateMatchRequest_t1118 * L_29 = ___req;
		NullCheck(L_29);
		String_t* L_30 = CreateMatchRequest_get_password_m6826(L_29, /*hidden argument*/&CreateMatchRequest_get_password_m6826_MethodInfo);
		NullCheck(L_28);
		WWWForm_AddField_m6481(L_28, (String_t*) &_stringLiteral493, L_30, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t1057 * L_32 = WWWForm_get_headers_m6484(L_31, /*hidden argument*/&WWWForm_get_headers_m6484_MethodInfo);
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m7278_MethodInfo_var, L_32, (String_t*) &_stringLiteral494, (String_t*) &_stringLiteral495);
		Uri_t1138 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m7329_MethodInfo, L_33);
		WWWForm_t1059 * L_35 = V_1;
		WWW_t1056 * L_36 = (WWW_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t1056_il2cpp_TypeInfo));
		WWW__ctor_m6465(L_36, L_34, L_35, /*hidden argument*/&WWW__ctor_m6465_MethodInfo);
		V_2 = L_36;
		WWW_t1056 * L_37 = V_2;
		ResponseDelegate_1_t1140 * L_38 = ___callback;
		Object_t * L_39 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1119_m7330(__this, L_37, L_38, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1119_m7330_MethodInfo_var);
		Coroutine_t413 * L_40 = MonoBehaviour_StartCoroutine_m2607(__this, L_39, /*hidden argument*/&MonoBehaviour_StartCoroutine_m2607_MethodInfo);
		return L_40;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern MethodInfo NetworkMatch_JoinMatch_m6931_MethodInfo;
extern "C" Coroutine_t413 * NetworkMatch_JoinMatch_m6931 (NetworkMatch_t1139 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t1141 * ___callback, MethodInfo* method)
{
	JoinMatchRequest_t1120 * V_0 = {0};
	{
		JoinMatchRequest_t1120 * L_0 = (JoinMatchRequest_t1120 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JoinMatchRequest_t1120_il2cpp_TypeInfo));
		JoinMatchRequest__ctor_m6845(L_0, /*hidden argument*/&JoinMatchRequest__ctor_m6845_MethodInfo);
		V_0 = L_0;
		JoinMatchRequest_t1120 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m6847(L_1, L_2, /*hidden argument*/&JoinMatchRequest_set_networkId_m6847_MethodInfo);
		JoinMatchRequest_t1120 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m6849(L_3, L_4, /*hidden argument*/&JoinMatchRequest_set_password_m6849_MethodInfo);
		JoinMatchRequest_t1120 * L_5 = V_0;
		ResponseDelegate_1_t1141 * L_6 = ___callback;
		Coroutine_t413 * L_7 = NetworkMatch_JoinMatch_m6932(__this, L_5, L_6, /*hidden argument*/&NetworkMatch_JoinMatch_m6932_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m7278_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t1121_m7331_MethodInfo_var;
extern "C" Coroutine_t413 * NetworkMatch_JoinMatch_m6932 (NetworkMatch_t1139 * __this, JoinMatchRequest_t1120 * ___req, ResponseDelegate_1_t1141 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_JoinMatch_m6932_init;
	if (!NetworkMatch_JoinMatch_m6932_init)
	{
		Dictionary_2_set_Item_m7278_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m7278_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t1121_m7331_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t1121_m7331_GenericMethod);
		NetworkMatch_JoinMatch_m6932_init = true;
	}
	Uri_t1138 * V_0 = {0};
	WWWForm_t1059 * V_1 = {0};
	WWW_t1056 * V_2 = {0};
	{
		Uri_t1138 * L_0 = NetworkMatch_get_baseUri_m6926(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m6926_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri_t1138 * L_1 = (Uri_t1138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri__ctor_m7326(L_1, L_0, (String_t*) &_stringLiteral496, /*hidden argument*/&Uri__ctor_m7326_MethodInfo);
		V_0 = L_1;
		Uri_t1138 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m582(NULL /*static, unused*/, (String_t*) &_stringLiteral497, L_2, /*hidden argument*/&String_Concat_m582_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		WWWForm_t1059 * L_4 = (WWWForm_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t1059_il2cpp_TypeInfo));
		WWWForm__ctor_m6480(L_4, /*hidden argument*/&WWWForm__ctor_m6480_MethodInfo);
		V_1 = L_4;
		WWWForm_t1059 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m6921(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m6921_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t1131_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m6481(L_5, (String_t*) &_stringLiteral488, L_9, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m6923(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m6923_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t1130_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m6481(L_10, (String_t*) &_stringLiteral489, L_14, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m6483(L_15, (String_t*) &_stringLiteral464, 0, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m6483(L_16, (String_t*) &_stringLiteral490, 0, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_17 = V_1;
		JoinMatchRequest_t1120 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = JoinMatchRequest_get_networkId_m6846(L_18, /*hidden argument*/&JoinMatchRequest_get_networkId_m6846_MethodInfo);
		uint64_t L_20 = L_19;
		Object_t * L_21 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_20);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_21);
		NullCheck(L_17);
		WWWForm_AddField_m6481(L_17, (String_t*) &_stringLiteral463, L_22, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_23 = V_1;
		JoinMatchRequest_t1120 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m6848(L_24, /*hidden argument*/&JoinMatchRequest_get_password_m6848_MethodInfo);
		NullCheck(L_23);
		WWWForm_AddField_m6481(L_23, (String_t*) &_stringLiteral493, L_25, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t1057 * L_27 = WWWForm_get_headers_m6484(L_26, /*hidden argument*/&WWWForm_get_headers_m6484_MethodInfo);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m7278_MethodInfo_var, L_27, (String_t*) &_stringLiteral494, (String_t*) &_stringLiteral495);
		Uri_t1138 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m7329_MethodInfo, L_28);
		WWWForm_t1059 * L_30 = V_1;
		WWW_t1056 * L_31 = (WWW_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t1056_il2cpp_TypeInfo));
		WWW__ctor_m6465(L_31, L_29, L_30, /*hidden argument*/&WWW__ctor_m6465_MethodInfo);
		V_2 = L_31;
		WWW_t1056 * L_32 = V_2;
		ResponseDelegate_1_t1141 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t1121_m7331(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t1121_m7331_MethodInfo_var);
		Coroutine_t413 * L_35 = MonoBehaviour_StartCoroutine_m2607(__this, L_34, /*hidden argument*/&MonoBehaviour_StartCoroutine_m2607_MethodInfo);
		return L_35;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo NetworkMatch_DestroyMatch_m6933_MethodInfo;
extern "C" Coroutine_t413 * NetworkMatch_DestroyMatch_m6933 (NetworkMatch_t1139 * __this, uint64_t ___netId, ResponseDelegate_1_t1142 * ___callback, MethodInfo* method)
{
	DestroyMatchRequest_t1122 * V_0 = {0};
	{
		DestroyMatchRequest_t1122 * L_0 = (DestroyMatchRequest_t1122 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DestroyMatchRequest_t1122_il2cpp_TypeInfo));
		DestroyMatchRequest__ctor_m6866(L_0, /*hidden argument*/&DestroyMatchRequest__ctor_m6866_MethodInfo);
		V_0 = L_0;
		DestroyMatchRequest_t1122 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m6868(L_1, L_2, /*hidden argument*/&DestroyMatchRequest_set_networkId_m6868_MethodInfo);
		DestroyMatchRequest_t1122 * L_3 = V_0;
		ResponseDelegate_1_t1142 * L_4 = ___callback;
		Coroutine_t413 * L_5 = NetworkMatch_DestroyMatch_m6934(__this, L_3, L_4, /*hidden argument*/&NetworkMatch_DestroyMatch_m6934_MethodInfo);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo* Dictionary_2_set_Item_m7278_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_MethodInfo_var;
extern "C" Coroutine_t413 * NetworkMatch_DestroyMatch_m6934 (NetworkMatch_t1139 * __this, DestroyMatchRequest_t1122 * ___req, ResponseDelegate_1_t1142 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_DestroyMatch_m6934_init;
	if (!NetworkMatch_DestroyMatch_m6934_init)
	{
		Dictionary_2_set_Item_m7278_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m7278_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_GenericMethod);
		NetworkMatch_DestroyMatch_m6934_init = true;
	}
	Uri_t1138 * V_0 = {0};
	WWWForm_t1059 * V_1 = {0};
	WWW_t1056 * V_2 = {0};
	{
		Uri_t1138 * L_0 = NetworkMatch_get_baseUri_m6926(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m6926_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri_t1138 * L_1 = (Uri_t1138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri__ctor_m7326(L_1, L_0, (String_t*) &_stringLiteral498, /*hidden argument*/&Uri__ctor_m7326_MethodInfo);
		V_0 = L_1;
		Uri_t1138 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m7329_MethodInfo, L_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_4 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral499, L_3, /*hidden argument*/&String_Concat_m731_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_4, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		WWWForm_t1059 * L_5 = (WWWForm_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t1059_il2cpp_TypeInfo));
		WWWForm__ctor_m6480(L_5, /*hidden argument*/&WWWForm__ctor_m6480_MethodInfo);
		V_1 = L_5;
		WWWForm_t1059 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		uint64_t L_7 = Utility_GetSourceID_m6921(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m6921_MethodInfo);
		uint64_t L_8 = L_7;
		Object_t * L_9 = Box(InitializedTypeInfo(&SourceID_t1131_il2cpp_TypeInfo), &L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_9);
		NullCheck(L_6);
		WWWForm_AddField_m6481(L_6, (String_t*) &_stringLiteral488, L_10, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_11 = V_1;
		uint64_t L_12 = Utility_GetAppID_m6923(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m6923_MethodInfo);
		uint64_t L_13 = L_12;
		Object_t * L_14 = Box(InitializedTypeInfo(&AppID_t1130_il2cpp_TypeInfo), &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_14);
		NullCheck(L_11);
		WWWForm_AddField_m6481(L_11, (String_t*) &_stringLiteral489, L_15, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_16 = V_1;
		DestroyMatchRequest_t1122 * L_17 = ___req;
		NullCheck(L_17);
		uint64_t L_18 = DestroyMatchRequest_get_networkId_m6867(L_17, /*hidden argument*/&DestroyMatchRequest_get_networkId_m6867_MethodInfo);
		NetworkAccessToken_t1134 * L_19 = Utility_GetAccessTokenForNetwork_m6924(NULL /*static, unused*/, L_18, /*hidden argument*/&Utility_GetAccessTokenForNetwork_m6924_MethodInfo);
		NullCheck(L_19);
		String_t* L_20 = NetworkAccessToken_GetByteString_m6919(L_19, /*hidden argument*/&NetworkAccessToken_GetByteString_m6919_MethodInfo);
		NullCheck(L_16);
		WWWForm_AddField_m6481(L_16, (String_t*) &_stringLiteral464, L_20, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m6483(L_21, (String_t*) &_stringLiteral490, 0, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_22 = V_1;
		DestroyMatchRequest_t1122 * L_23 = ___req;
		NullCheck(L_23);
		uint64_t L_24 = DestroyMatchRequest_get_networkId_m6867(L_23, /*hidden argument*/&DestroyMatchRequest_get_networkId_m6867_MethodInfo);
		uint64_t L_25 = L_24;
		Object_t * L_26 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_25);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_26);
		NullCheck(L_22);
		WWWForm_AddField_m6481(L_22, (String_t*) &_stringLiteral463, L_27, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t1057 * L_29 = WWWForm_get_headers_m6484(L_28, /*hidden argument*/&WWWForm_get_headers_m6484_MethodInfo);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m7278_MethodInfo_var, L_29, (String_t*) &_stringLiteral494, (String_t*) &_stringLiteral495);
		Uri_t1138 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m7329_MethodInfo, L_30);
		WWWForm_t1059 * L_32 = V_1;
		WWW_t1056 * L_33 = (WWW_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t1056_il2cpp_TypeInfo));
		WWW__ctor_m6465(L_33, L_31, L_32, /*hidden argument*/&WWW__ctor_m6465_MethodInfo);
		V_2 = L_33;
		WWW_t1056 * L_34 = V_2;
		ResponseDelegate_1_t1142 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_MethodInfo_var);
		Coroutine_t413 * L_37 = MonoBehaviour_StartCoroutine_m2607(__this, L_36, /*hidden argument*/&MonoBehaviour_StartCoroutine_m2607_MethodInfo);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo NetworkMatch_DropConnection_m6935_MethodInfo;
extern "C" Coroutine_t413 * NetworkMatch_DropConnection_m6935 (NetworkMatch_t1139 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t1142 * ___callback, MethodInfo* method)
{
	DropConnectionRequest_t1123 * V_0 = {0};
	{
		DropConnectionRequest_t1123 * L_0 = (DropConnectionRequest_t1123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&DropConnectionRequest_t1123_il2cpp_TypeInfo));
		DropConnectionRequest__ctor_m6870(L_0, /*hidden argument*/&DropConnectionRequest__ctor_m6870_MethodInfo);
		V_0 = L_0;
		DropConnectionRequest_t1123 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m6872(L_1, L_2, /*hidden argument*/&DropConnectionRequest_set_networkId_m6872_MethodInfo);
		DropConnectionRequest_t1123 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m6874(L_3, L_4, /*hidden argument*/&DropConnectionRequest_set_nodeId_m6874_MethodInfo);
		DropConnectionRequest_t1123 * L_5 = V_0;
		ResponseDelegate_1_t1142 * L_6 = ___callback;
		Coroutine_t413 * L_7 = NetworkMatch_DropConnection_m6936(__this, L_5, L_6, /*hidden argument*/&NetworkMatch_DropConnection_m6936_MethodInfo);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern MethodInfo* Dictionary_2_set_Item_m7278_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_MethodInfo_var;
extern "C" Coroutine_t413 * NetworkMatch_DropConnection_m6936 (NetworkMatch_t1139 * __this, DropConnectionRequest_t1123 * ___req, ResponseDelegate_1_t1142 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_DropConnection_m6936_init;
	if (!NetworkMatch_DropConnection_m6936_init)
	{
		Dictionary_2_set_Item_m7278_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m7278_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_GenericMethod);
		NetworkMatch_DropConnection_m6936_init = true;
	}
	Uri_t1138 * V_0 = {0};
	WWWForm_t1059 * V_1 = {0};
	WWW_t1056 * V_2 = {0};
	{
		Uri_t1138 * L_0 = NetworkMatch_get_baseUri_m6926(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m6926_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri_t1138 * L_1 = (Uri_t1138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri__ctor_m7326(L_1, L_0, (String_t*) &_stringLiteral500, /*hidden argument*/&Uri__ctor_m7326_MethodInfo);
		V_0 = L_1;
		Uri_t1138 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m582(NULL /*static, unused*/, (String_t*) &_stringLiteral501, L_2, /*hidden argument*/&String_Concat_m582_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		WWWForm_t1059 * L_4 = (WWWForm_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t1059_il2cpp_TypeInfo));
		WWWForm__ctor_m6480(L_4, /*hidden argument*/&WWWForm__ctor_m6480_MethodInfo);
		V_1 = L_4;
		WWWForm_t1059 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m6921(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m6921_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t1131_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m6481(L_5, (String_t*) &_stringLiteral488, L_9, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m6923(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m6923_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t1130_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m6481(L_10, (String_t*) &_stringLiteral489, L_14, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_15 = V_1;
		DropConnectionRequest_t1123 * L_16 = ___req;
		NullCheck(L_16);
		uint64_t L_17 = DropConnectionRequest_get_networkId_m6871(L_16, /*hidden argument*/&DropConnectionRequest_get_networkId_m6871_MethodInfo);
		NetworkAccessToken_t1134 * L_18 = Utility_GetAccessTokenForNetwork_m6924(NULL /*static, unused*/, L_17, /*hidden argument*/&Utility_GetAccessTokenForNetwork_m6924_MethodInfo);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m6919(L_18, /*hidden argument*/&NetworkAccessToken_GetByteString_m6919_MethodInfo);
		NullCheck(L_15);
		WWWForm_AddField_m6481(L_15, (String_t*) &_stringLiteral464, L_19, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_20 = V_1;
		NullCheck(L_20);
		WWWForm_AddField_m6483(L_20, (String_t*) &_stringLiteral490, 0, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_21 = V_1;
		DropConnectionRequest_t1123 * L_22 = ___req;
		NullCheck(L_22);
		uint64_t L_23 = DropConnectionRequest_get_networkId_m6871(L_22, /*hidden argument*/&DropConnectionRequest_get_networkId_m6871_MethodInfo);
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(InitializedTypeInfo(&NetworkID_t1132_il2cpp_TypeInfo), &L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_25);
		NullCheck(L_21);
		WWWForm_AddField_m6481(L_21, (String_t*) &_stringLiteral463, L_26, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_27 = V_1;
		DropConnectionRequest_t1123 * L_28 = ___req;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m6873(L_28, /*hidden argument*/&DropConnectionRequest_get_nodeId_m6873_MethodInfo);
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(InitializedTypeInfo(&NodeID_t1133_il2cpp_TypeInfo), &L_30);
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_31);
		NullCheck(L_27);
		WWWForm_AddField_m6481(L_27, (String_t*) &_stringLiteral465, L_32, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t1057 * L_34 = WWWForm_get_headers_m6484(L_33, /*hidden argument*/&WWWForm_get_headers_m6484_MethodInfo);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m7278_MethodInfo_var, L_34, (String_t*) &_stringLiteral494, (String_t*) &_stringLiteral495);
		Uri_t1138 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m7329_MethodInfo, L_35);
		WWWForm_t1059 * L_37 = V_1;
		WWW_t1056 * L_38 = (WWW_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t1056_il2cpp_TypeInfo));
		WWW__ctor_m6465(L_38, L_36, L_37, /*hidden argument*/&WWW__ctor_m6465_MethodInfo);
		V_2 = L_38;
		WWW_t1056 * L_39 = V_2;
		ResponseDelegate_1_t1142 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1116_m7332_MethodInfo_var);
		Coroutine_t413 * L_42 = MonoBehaviour_StartCoroutine_m2607(__this, L_41, /*hidden argument*/&MonoBehaviour_StartCoroutine_m2607_MethodInfo);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern MethodInfo NetworkMatch_ListMatches_m6937_MethodInfo;
extern "C" Coroutine_t413 * NetworkMatch_ListMatches_m6937 (NetworkMatch_t1139 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t1143 * ___callback, MethodInfo* method)
{
	ListMatchRequest_t1124 * V_0 = {0};
	{
		ListMatchRequest_t1124 * L_0 = (ListMatchRequest_t1124 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ListMatchRequest_t1124_il2cpp_TypeInfo));
		ListMatchRequest__ctor_m6876(L_0, /*hidden argument*/&ListMatchRequest__ctor_m6876_MethodInfo);
		V_0 = L_0;
		ListMatchRequest_t1124 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m6880(L_1, L_2, /*hidden argument*/&ListMatchRequest_set_pageNum_m6880_MethodInfo);
		ListMatchRequest_t1124 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m6878(L_3, L_4, /*hidden argument*/&ListMatchRequest_set_pageSize_m6878_MethodInfo);
		ListMatchRequest_t1124 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m6882(L_5, L_6, /*hidden argument*/&ListMatchRequest_set_nameFilter_m6882_MethodInfo);
		ListMatchRequest_t1124 * L_7 = V_0;
		ResponseDelegate_1_t1143 * L_8 = ___callback;
		Coroutine_t413 * L_9 = NetworkMatch_ListMatches_m6938(__this, L_7, L_8, /*hidden argument*/&NetworkMatch_ListMatches_m6938_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern MethodInfo* Dictionary_2_set_Item_m7278_MethodInfo_var;
extern MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t1129_m7333_MethodInfo_var;
extern "C" Coroutine_t413 * NetworkMatch_ListMatches_m6938 (NetworkMatch_t1139 * __this, ListMatchRequest_t1124 * ___req, ResponseDelegate_1_t1143 * ___callback, MethodInfo* method)
{
	static bool NetworkMatch_ListMatches_m6938_init;
	if (!NetworkMatch_ListMatches_m6938_init)
	{
		Dictionary_2_set_Item_m7278_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m7278_GenericMethod);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t1129_m7333_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t1129_m7333_GenericMethod);
		NetworkMatch_ListMatches_m6938_init = true;
	}
	Uri_t1138 * V_0 = {0};
	WWWForm_t1059 * V_1 = {0};
	WWW_t1056 * V_2 = {0};
	{
		Uri_t1138 * L_0 = NetworkMatch_get_baseUri_m6926(__this, /*hidden argument*/&NetworkMatch_get_baseUri_m6926_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri_t1138 * L_1 = (Uri_t1138 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Uri_t1138_il2cpp_TypeInfo));
		Uri__ctor_m7326(L_1, L_0, (String_t*) &_stringLiteral502, /*hidden argument*/&Uri__ctor_m7326_MethodInfo);
		V_0 = L_1;
		Uri_t1138 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m582(NULL /*static, unused*/, (String_t*) &_stringLiteral503, L_2, /*hidden argument*/&String_Concat_m582_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_3, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		WWWForm_t1059 * L_4 = (WWWForm_t1059 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWWForm_t1059_il2cpp_TypeInfo));
		WWWForm__ctor_m6480(L_4, /*hidden argument*/&WWWForm__ctor_m6480_MethodInfo);
		V_1 = L_4;
		WWWForm_t1059 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Utility_t1137_il2cpp_TypeInfo));
		uint64_t L_6 = Utility_GetSourceID_m6921(NULL /*static, unused*/, /*hidden argument*/&Utility_GetSourceID_m6921_MethodInfo);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(InitializedTypeInfo(&SourceID_t1131_il2cpp_TypeInfo), &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m6481(L_5, (String_t*) &_stringLiteral488, L_9, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m6923(NULL /*static, unused*/, /*hidden argument*/&Utility_GetAppID_m6923_MethodInfo);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(InitializedTypeInfo(&AppID_t1130_il2cpp_TypeInfo), &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Enum_ToString_m1051_MethodInfo, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m6481(L_10, (String_t*) &_stringLiteral489, L_14, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m6483(L_15, (String_t*) &_stringLiteral464, 0, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m6483(L_16, (String_t*) &_stringLiteral490, 0, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_17 = V_1;
		ListMatchRequest_t1124 * L_18 = ___req;
		NullCheck(L_18);
		int32_t L_19 = ListMatchRequest_get_pageSize_m6877(L_18, /*hidden argument*/&ListMatchRequest_get_pageSize_m6877_MethodInfo);
		NullCheck(L_17);
		WWWForm_AddField_m6483(L_17, (String_t*) &_stringLiteral504, L_19, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_20 = V_1;
		ListMatchRequest_t1124 * L_21 = ___req;
		NullCheck(L_21);
		int32_t L_22 = ListMatchRequest_get_pageNum_m6879(L_21, /*hidden argument*/&ListMatchRequest_get_pageNum_m6879_MethodInfo);
		NullCheck(L_20);
		WWWForm_AddField_m6483(L_20, (String_t*) &_stringLiteral505, L_22, /*hidden argument*/&WWWForm_AddField_m6483_MethodInfo);
		WWWForm_t1059 * L_23 = V_1;
		ListMatchRequest_t1124 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = ListMatchRequest_get_nameFilter_m6881(L_24, /*hidden argument*/&ListMatchRequest_get_nameFilter_m6881_MethodInfo);
		NullCheck(L_23);
		WWWForm_AddField_m6481(L_23, (String_t*) &_stringLiteral506, L_25, /*hidden argument*/&WWWForm_AddField_m6481_MethodInfo);
		WWWForm_t1059 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t1057 * L_27 = WWWForm_get_headers_m6484(L_26, /*hidden argument*/&WWWForm_get_headers_m6484_MethodInfo);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(Dictionary_2_set_Item_m7278_MethodInfo_var, L_27, (String_t*) &_stringLiteral494, (String_t*) &_stringLiteral495);
		Uri_t1138 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Uri_ToString_m7329_MethodInfo, L_28);
		WWWForm_t1059 * L_30 = V_1;
		WWW_t1056 * L_31 = (WWW_t1056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WWW_t1056_il2cpp_TypeInfo));
		WWW__ctor_m6465(L_31, L_29, L_30, /*hidden argument*/&WWW__ctor_m6465_MethodInfo);
		V_2 = L_31;
		WWW_t1056 * L_32 = V_2;
		ResponseDelegate_1_t1143 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t1129_m7333(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t1129_m7333_MethodInfo_var);
		Coroutine_t413 * L_35 = MonoBehaviour_StartCoroutine_m2607(__this, L_34, /*hidden argument*/&MonoBehaviour_StartCoroutine_m2607_MethodInfo);
		return L_35;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JsonArray_t1144_il2cpp_TypeInfo;
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
extern MethodInfo SimpleJson_SerializeObject_m6961_MethodInfo;
extern Il2CppGenericMethod List_1__ctor_m7334_GenericMethod;


// System.Void SimpleJson.JsonArray::.ctor()
extern MethodInfo JsonArray__ctor_m6939_MethodInfo;
extern MethodInfo* List_1__ctor_m7334_MethodInfo_var;
extern "C" void JsonArray__ctor_m6939 (JsonArray_t1144 * __this, MethodInfo* method)
{
	static bool JsonArray__ctor_m6939_init;
	if (!JsonArray__ctor_m6939_init)
	{
		List_1__ctor_m7334_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m7334_GenericMethod);
		JsonArray__ctor_m6939_init = true;
	}
	{
		List_1__ctor_m7334(__this, /*hidden argument*/List_1__ctor_m7334_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern MethodInfo JsonArray_ToString_m6940_MethodInfo;
extern "C" String_t* JsonArray_ToString_m6940 (JsonArray_t1144 * __this, MethodInfo* method)
{
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m6961(NULL /*static, unused*/, __this, /*hidden argument*/&SimpleJson_SerializeObject_m6961_MethodInfo);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo JsonObject_t1146_il2cpp_TypeInfo;
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_4.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo Dictionary_2_t1145_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t1251_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t1151_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t1150_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_27MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern Il2CppType Dictionary_2_t1145_0_0_0;
extern Il2CppType Enumerator_t1251_0_0_0;
extern Il2CppType IEnumerator_1_t1151_0_0_0;
extern MethodInfo Dictionary_2_get_Item_m7335_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m7336_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m7337_MethodInfo;
extern MethodInfo Dictionary_2__ctor_m7338_MethodInfo;
extern MethodInfo Dictionary_2_Add_m7339_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m7340_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m7341_MethodInfo;
extern MethodInfo Dictionary_2_Clear_m7342_MethodInfo;
extern MethodInfo Dictionary_2_ContainsKey_m7343_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo JsonObject_get_Count_m6954_MethodInfo;
extern MethodInfo JsonObject_GetEnumerator_m6957_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m7345_MethodInfo;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m7346_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m7347_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m7335_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m7336_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m7337_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m7338_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m7348_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m7339_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m7340_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m7341_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m7349_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m7350_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Clear_m7342_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m7343_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m7345_GenericMethod;


// System.Void SimpleJson.JsonObject::.ctor()
extern MethodInfo JsonObject__ctor_m6941_MethodInfo;
extern TypeInfo* Dictionary_2_t1145_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2__ctor_m7338_MethodInfo_var;
extern "C" void JsonObject__ctor_m6941 (JsonObject_t1146 * __this, MethodInfo* method)
{
	static bool JsonObject__ctor_m6941_init;
	if (!JsonObject__ctor_m6941_init)
	{
		Dictionary_2_t1145_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Dictionary_2_t1145_0_0_0);
		Dictionary_2__ctor_m7338_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2__ctor_m7338_GenericMethod);
		JsonObject__ctor_m6941_init = true;
	}
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t1145 * L_0 = (Dictionary_2_t1145 *)il2cpp_codegen_object_new (Dictionary_2_t1145_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7338(L_0, /*hidden argument*/Dictionary_2__ctor_m7338_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo JsonObject_System_Collections_IEnumerable_GetEnumerator_m6942_MethodInfo;
extern TypeInfo* Enumerator_t1251_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m7348_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m6942 (JsonObject_t1146 * __this, MethodInfo* method)
{
	static bool JsonObject_System_Collections_IEnumerable_GetEnumerator_m6942_init;
	if (!JsonObject_System_Collections_IEnumerable_GetEnumerator_m6942_init)
	{
		Enumerator_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t1251_0_0_0);
		Dictionary_2_GetEnumerator_m7348_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m7348_GenericMethod);
		JsonObject_System_Collections_IEnumerable_GetEnumerator_m6942_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t1251  L_1 = Dictionary_2_GetEnumerator_m7348(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m7348_MethodInfo_var);
		Enumerator_t1251  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t1251_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern MethodInfo JsonObject_Add_m6943_MethodInfo;
extern MethodInfo* Dictionary_2_Add_m7339_MethodInfo_var;
extern "C" void JsonObject_Add_m6943 (JsonObject_t1146 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool JsonObject_Add_m6943_init;
	if (!JsonObject_Add_m6943_init)
	{
		Dictionary_2_Add_m7339_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m7339_GenericMethod);
		JsonObject_Add_m6943_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_Add_m7339_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern MethodInfo JsonObject_get_Keys_m6944_MethodInfo;
extern MethodInfo* Dictionary_2_get_Keys_m7346_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m6944 (JsonObject_t1146 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Keys_m6944_init;
	if (!JsonObject_get_Keys_m6944_init)
	{
		Dictionary_2_get_Keys_m7346_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Keys_m7346_GenericMethod);
		JsonObject_get_Keys_m6944_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t1253 * L_1 = Dictionary_2_get_Keys_m7346(L_0, /*hidden argument*/Dictionary_2_get_Keys_m7346_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern MethodInfo JsonObject_Remove_m6945_MethodInfo;
extern MethodInfo* Dictionary_2_Remove_m7340_MethodInfo_var;
extern "C" bool JsonObject_Remove_m6945 (JsonObject_t1146 * __this, String_t* ___key, MethodInfo* method)
{
	static bool JsonObject_Remove_m6945_init;
	if (!JsonObject_Remove_m6945_init)
	{
		Dictionary_2_Remove_m7340_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m7340_GenericMethod);
		JsonObject_Remove_m6945_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m7340_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern MethodInfo JsonObject_TryGetValue_m6946_MethodInfo;
extern MethodInfo* Dictionary_2_TryGetValue_m7341_MethodInfo_var;
extern "C" bool JsonObject_TryGetValue_m6946 (JsonObject_t1146 * __this, String_t* ___key, Object_t ** ___value, MethodInfo* method)
{
	static bool JsonObject_TryGetValue_m6946_init;
	if (!JsonObject_TryGetValue_m6946_init)
	{
		Dictionary_2_TryGetValue_m7341_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_TryGetValue_m7341_GenericMethod);
		JsonObject_TryGetValue_m6946_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(Dictionary_2_TryGetValue_m7341_MethodInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern MethodInfo JsonObject_get_Values_m6947_MethodInfo;
extern MethodInfo* Dictionary_2_get_Values_m7347_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m6947 (JsonObject_t1146 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Values_m6947_init;
	if (!JsonObject_get_Values_m6947_init)
	{
		Dictionary_2_get_Values_m7347_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Values_m7347_GenericMethod);
		JsonObject_get_Values_m6947_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t1254 * L_1 = Dictionary_2_get_Values_m7347(L_0, /*hidden argument*/Dictionary_2_get_Values_m7347_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern MethodInfo JsonObject_get_Item_m6948_MethodInfo;
extern MethodInfo* Dictionary_2_get_Item_m7335_MethodInfo_var;
extern "C" Object_t * JsonObject_get_Item_m6948 (JsonObject_t1146 * __this, String_t* ___key, MethodInfo* method)
{
	static bool JsonObject_get_Item_m6948_init;
	if (!JsonObject_get_Item_m6948_init)
	{
		Dictionary_2_get_Item_m7335_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m7335_GenericMethod);
		JsonObject_get_Item_m6948_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(Dictionary_2_get_Item_m7335_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern MethodInfo JsonObject_set_Item_m6949_MethodInfo;
extern MethodInfo* Dictionary_2_set_Item_m7336_MethodInfo_var;
extern "C" void JsonObject_set_Item_m6949 (JsonObject_t1146 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method)
{
	static bool JsonObject_set_Item_m6949_init;
	if (!JsonObject_set_Item_m6949_init)
	{
		Dictionary_2_set_Item_m7336_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_set_Item_m7336_GenericMethod);
		JsonObject_set_Item_m6949_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_set_Item_m7336_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Add_m6950_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m7349_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m7350_MethodInfo_var;
extern MethodInfo* Dictionary_2_Add_m7339_MethodInfo_var;
extern "C" void JsonObject_Add_m6950 (JsonObject_t1146 * __this, KeyValuePair_2_t1150  ___item, MethodInfo* method)
{
	static bool JsonObject_Add_m6950_init;
	if (!JsonObject_Add_m6950_init)
	{
		KeyValuePair_2_get_Key_m7349_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m7349_GenericMethod);
		KeyValuePair_2_get_Value_m7350_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m7350_GenericMethod);
		Dictionary_2_Add_m7339_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Add_m7339_GenericMethod);
		JsonObject_Add_m6950_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m7349((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m7349_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m7350((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m7350_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(Dictionary_2_Add_m7339_MethodInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern MethodInfo JsonObject_Clear_m6951_MethodInfo;
extern MethodInfo* Dictionary_2_Clear_m7342_MethodInfo_var;
extern "C" void JsonObject_Clear_m6951 (JsonObject_t1146 * __this, MethodInfo* method)
{
	static bool JsonObject_Clear_m6951_init;
	if (!JsonObject_Clear_m6951_init)
	{
		Dictionary_2_Clear_m7342_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Clear_m7342_GenericMethod);
		JsonObject_Clear_m6951_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(Dictionary_2_Clear_m7342_MethodInfo_var, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Contains_m6952_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m7349_MethodInfo_var;
extern MethodInfo* Dictionary_2_ContainsKey_m7343_MethodInfo_var;
extern MethodInfo* Dictionary_2_get_Item_m7335_MethodInfo_var;
extern MethodInfo* KeyValuePair_2_get_Value_m7350_MethodInfo_var;
extern "C" bool JsonObject_Contains_m6952 (JsonObject_t1146 * __this, KeyValuePair_2_t1150  ___item, MethodInfo* method)
{
	static bool JsonObject_Contains_m6952_init;
	if (!JsonObject_Contains_m6952_init)
	{
		KeyValuePair_2_get_Key_m7349_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m7349_GenericMethod);
		Dictionary_2_ContainsKey_m7343_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_ContainsKey_m7343_GenericMethod);
		Dictionary_2_get_Item_m7335_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Item_m7335_GenericMethod);
		KeyValuePair_2_get_Value_m7350_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Value_m7350_GenericMethod);
		JsonObject_Contains_m6952_init = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m7349((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m7349_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_ContainsKey_m7343_MethodInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t1145 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m7349((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m7349_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(Dictionary_2_get_Item_m7335_MethodInfo_var, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m7350((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m7350_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern MethodInfo JsonObject_CopyTo_m6953_MethodInfo;
extern MethodInfo* IEnumerator_1_get_Current_m7345_MethodInfo_var;
extern "C" void JsonObject_CopyTo_m6953 (JsonObject_t1146 * __this, KeyValuePair_2U5BU5D_t1149* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	static bool JsonObject_CopyTo_m6953_init;
	if (!JsonObject_CopyTo_m6953_init)
	{
		IEnumerator_1_get_Current_m7345_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IEnumerator_1_get_Current_m7345_GenericMethod);
		JsonObject_CopyTo_m6953_init = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t1150  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t1149* L_0 = ___array;
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
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&JsonObject_get_Count_m6954_MethodInfo, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(&JsonObject_GetEnumerator_m6957_MethodInfo, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t1150  L_5 = (KeyValuePair_2_t1150 )InterfaceFuncInvoker0< KeyValuePair_2_t1150  >::Invoke(IEnumerator_1_get_Current_m7345_MethodInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t1149* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t1150  L_9 = V_1;
			*((KeyValuePair_2_t1150 *)(KeyValuePair_2_t1150 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4885_MethodInfo, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern MethodInfo* Dictionary_2_get_Count_m7337_MethodInfo_var;
extern "C" int32_t JsonObject_get_Count_m6954 (JsonObject_t1146 * __this, MethodInfo* method)
{
	static bool JsonObject_get_Count_m6954_init;
	if (!JsonObject_get_Count_m6954_init)
	{
		Dictionary_2_get_Count_m7337_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_get_Count_m7337_GenericMethod);
		JsonObject_get_Count_m6954_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Dictionary_2_get_Count_m7337_MethodInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern MethodInfo JsonObject_get_IsReadOnly_m6955_MethodInfo;
extern "C" bool JsonObject_get_IsReadOnly_m6955 (JsonObject_t1146 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern MethodInfo JsonObject_Remove_m6956_MethodInfo;
extern MethodInfo* KeyValuePair_2_get_Key_m7349_MethodInfo_var;
extern MethodInfo* Dictionary_2_Remove_m7340_MethodInfo_var;
extern "C" bool JsonObject_Remove_m6956 (JsonObject_t1146 * __this, KeyValuePair_2_t1150  ___item, MethodInfo* method)
{
	static bool JsonObject_Remove_m6956_init;
	if (!JsonObject_Remove_m6956_init)
	{
		KeyValuePair_2_get_Key_m7349_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&KeyValuePair_2_get_Key_m7349_GenericMethod);
		Dictionary_2_Remove_m7340_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_Remove_m7340_GenericMethod);
		JsonObject_Remove_m6956_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m7349((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m7349_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(Dictionary_2_Remove_m7340_MethodInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t1251_il2cpp_TypeInfo_var;
extern MethodInfo* Dictionary_2_GetEnumerator_m7348_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m6957 (JsonObject_t1146 * __this, MethodInfo* method)
{
	static bool JsonObject_GetEnumerator_m6957_init;
	if (!JsonObject_GetEnumerator_m6957_init)
	{
		Enumerator_t1251_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t1251_0_0_0);
		Dictionary_2_GetEnumerator_m7348_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Dictionary_2_GetEnumerator_m7348_GenericMethod);
		JsonObject_GetEnumerator_m6957_init = true;
	}
	{
		Dictionary_2_t1145 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t1251  L_1 = Dictionary_2_GetEnumerator_m7348(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m7348_MethodInfo_var);
		Enumerator_t1251  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t1251_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern MethodInfo JsonObject_ToString_m6958_MethodInfo;
extern "C" String_t* JsonObject_ToString_m6958 (JsonObject_t1146 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m6961(NULL /*static, unused*/, __this, /*hidden argument*/&SimpleJson_SerializeObject_m6961_MethodInfo);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SimpleJson_t1154_il2cpp_TypeInfo;

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
extern TypeInfo PocoJsonSerializerStrategy_t1153_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t493_il2cpp_TypeInfo;
extern TypeInfo List_1_t227_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t1255_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t410_il2cpp_TypeInfo;
extern TypeInfo Char_t404_il2cpp_TypeInfo;
extern TypeInfo Double_t209_il2cpp_TypeInfo;
extern TypeInfo Int64_t1257_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t1147_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t1148_il2cpp_TypeInfo;
extern TypeInfo IDictionary_2_t1258_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t595_il2cpp_TypeInfo;
extern TypeInfo IJsonSerializerStrategy_t1152_il2cpp_TypeInfo;
extern TypeInfo IFormatProvider_t1259_il2cpp_TypeInfo;
extern TypeInfo UInt64_t1260_il2cpp_TypeInfo;
extern TypeInfo Decimal_t1261_il2cpp_TypeInfo;
extern TypeInfo SByte_t256_il2cpp_TypeInfo;
extern TypeInfo Int16_t573_il2cpp_TypeInfo;
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"
extern Il2CppType List_1_t227_0_0_0;
extern Il2CppType CharU5BU5D_t410_0_0_0;
extern Il2CppType IDictionary_2_t1258_0_0_0;
extern MethodInfo SimpleJson_get_PocoJsonSerializerStrategy_m6979_MethodInfo;
extern MethodInfo PocoJsonSerializerStrategy__ctor_m6980_MethodInfo;
extern MethodInfo String_ToCharArray_m7351_MethodInfo;
extern MethodInfo SimpleJson_ParseValue_m6964_MethodInfo;
extern MethodInfo StringBuilder__ctor_m4989_MethodInfo;
extern MethodInfo SimpleJson_SerializeValue_m6972_MethodInfo;
extern MethodInfo StringBuilder_ToString_m2471_MethodInfo;
extern MethodInfo SimpleJson_get_CurrentJsonSerializerStrategy_m6978_MethodInfo;
extern MethodInfo SimpleJson_SerializeObject_m6960_MethodInfo;
extern MethodInfo SimpleJson_NextToken_m6971_MethodInfo;
extern MethodInfo SimpleJson_LookAhead_m6970_MethodInfo;
extern MethodInfo SimpleJson_ParseString_m6965_MethodInfo;
extern MethodInfo IDictionary_2_set_Item_m7352_MethodInfo;
extern MethodInfo List_1_Add_m7353_MethodInfo;
extern MethodInfo SimpleJson_ParseNumber_m6967_MethodInfo;
extern MethodInfo SimpleJson_ParseObject_m6962_MethodInfo;
extern MethodInfo SimpleJson_ParseArray_m6963_MethodInfo;
extern MethodInfo SimpleJson_EatWhitespace_m6969_MethodInfo;
extern MethodInfo StringBuilder_Append_m2786_MethodInfo;
extern MethodInfo String__ctor_m7354_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m7355_MethodInfo;
extern MethodInfo UInt32_TryParse_m7356_MethodInfo;
extern MethodInfo SimpleJson_ConvertFromUtf32_m6966_MethodInfo;
extern MethodInfo StringBuilder_Append_m7357_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m7358_MethodInfo;
extern MethodInfo String__ctor_m2793_MethodInfo;
extern MethodInfo String__ctor_m7359_MethodInfo;
extern MethodInfo SimpleJson_GetLastIndexOfNumber_m6968_MethodInfo;
extern MethodInfo String_IndexOf_m7266_MethodInfo;
extern MethodInfo Double_TryParse_m7360_MethodInfo;
extern MethodInfo Int64_TryParse_m7361_MethodInfo;
extern MethodInfo String_IndexOf_m2821_MethodInfo;
extern MethodInfo SimpleJson_SerializeString_m6975_MethodInfo;
extern MethodInfo IDictionary_2_get_Keys_m7362_MethodInfo;
extern MethodInfo IDictionary_2_get_Values_m7363_MethodInfo;
extern MethodInfo SimpleJson_SerializeObject_m6973_MethodInfo;
extern MethodInfo IDictionary_2_get_Keys_m7364_MethodInfo;
extern MethodInfo IDictionary_2_get_Values_m7365_MethodInfo;
extern MethodInfo SimpleJson_SerializeArray_m6974_MethodInfo;
extern MethodInfo SimpleJson_IsNumeric_m6977_MethodInfo;
extern MethodInfo SimpleJson_SerializeNumber_m6976_MethodInfo;
extern MethodInfo IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7366_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo Int64_ToString_m7368_MethodInfo;
extern MethodInfo UInt64_ToString_m7369_MethodInfo;
extern MethodInfo Int32_ToString_m7370_MethodInfo;
extern MethodInfo UInt32_ToString_m7371_MethodInfo;
extern MethodInfo Decimal_ToString_m7372_MethodInfo;
extern MethodInfo Single_ToString_m7373_MethodInfo;
extern MethodInfo Convert_ToDouble_m7374_MethodInfo;
extern MethodInfo Double_ToString_m7375_MethodInfo;
extern Il2CppGenericMethod IDictionary_2_set_Item_m7352_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m7353_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Keys_m7362_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Values_m7363_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Keys_m7364_GenericMethod;
extern Il2CppGenericMethod IDictionary_2_get_Values_m7365_GenericMethod;


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern MethodInfo SimpleJson_TryDeserializeObject_m6959_MethodInfo;
extern "C" bool SimpleJson_TryDeserializeObject_m6959 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t410* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t410* L_2 = String_ToCharArray_m7351(L_1, /*hidden argument*/&String_ToCharArray_m7351_MethodInfo);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t410* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m6964(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/&SimpleJson_ParseValue_m6964_MethodInfo);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern "C" String_t* SimpleJson_SerializeObject_m6960 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, MethodInfo* method)
{
	StringBuilder_t493 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t493 * L_0 = (StringBuilder_t493 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t493_il2cpp_TypeInfo));
		StringBuilder__ctor_m4989(L_0, ((int32_t)2000), /*hidden argument*/&StringBuilder__ctor_m4989_MethodInfo);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t493 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m6972(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&SimpleJson_SerializeValue_m6972_MethodInfo);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t493 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2471_MethodInfo, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m6961 (Object_t * __this /* static, unused */, Object_t * ___json, MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m6978(NULL /*static, unused*/, /*hidden argument*/&SimpleJson_get_CurrentJsonSerializerStrategy_m6978_MethodInfo);
		String_t* L_2 = SimpleJson_SerializeObject_m6960(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_SerializeObject_m6960_MethodInfo);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern MethodInfo* IDictionary_2_set_Item_m7352_MethodInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m6962 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	static bool SimpleJson_ParseObject_m6962_init;
	if (!SimpleJson_ParseObject_m6962_init)
	{
		IDictionary_2_set_Item_m7352_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_set_Item_m7352_GenericMethod);
		SimpleJson_ParseObject_m6962_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t1146 * L_0 = (JsonObject_t1146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonObject_t1146_il2cpp_TypeInfo));
		JsonObject__ctor_m6941(L_0, /*hidden argument*/&JsonObject__ctor_m6941_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t410* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t410* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m6970(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/&SimpleJson_LookAhead_m6970_MethodInfo);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t410* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t410* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t410* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m6965(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&SimpleJson_ParseString_m6965_MethodInfo);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t410* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t410* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m6964(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&SimpleJson_ParseValue_m6964_MethodInfo);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(IDictionary_2_set_Item_m7352_MethodInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern MethodInfo* List_1_Add_m7353_MethodInfo_var;
extern "C" JsonArray_t1144 * SimpleJson_ParseArray_m6963 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	static bool SimpleJson_ParseArray_m6963_init;
	if (!SimpleJson_ParseArray_m6963_init)
	{
		List_1_Add_m7353_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m7353_GenericMethod);
		SimpleJson_ParseArray_m6963_init = true;
	}
	JsonArray_t1144 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t1144 * L_0 = (JsonArray_t1144 *)il2cpp_codegen_object_new (InitializedTypeInfo(&JsonArray_t1144_il2cpp_TypeInfo));
		JsonArray__ctor_m6939(L_0, /*hidden argument*/&JsonArray__ctor_m6939_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t410* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t410* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m6970(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/&SimpleJson_LookAhead_m6970_MethodInfo);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t1144 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t410* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t410* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t410* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m6964(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/&SimpleJson_ParseValue_m6964_MethodInfo);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t1144 *)NULL;
	}

IL_0063:
	{
		JsonArray_t1144 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(List_1_Add_m7353_MethodInfo_var, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t1144 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseValue_m6964 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		CharU5BU5D_t410* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m6970(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/&SimpleJson_LookAhead_m6970_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t410* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m6965(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/&SimpleJson_ParseString_m6965_MethodInfo);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t410* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m6967(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&SimpleJson_ParseNumber_m6967_MethodInfo);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t410* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m6962(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/&SimpleJson_ParseObject_m6962_MethodInfo);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t410* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t1144 * L_19 = SimpleJson_ParseArray_m6963(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/&SimpleJson_ParseArray_m6963_MethodInfo);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t410* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		bool L_22 = 1;
		Object_t * L_23 = Box(InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo), &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t410* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		bool L_26 = 0;
		Object_t * L_27 = Box(InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo), &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t410* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern "C" String_t* SimpleJson_ParseString_m6965 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	StringBuilder_t493 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t493 * L_0 = (StringBuilder_t493 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t493_il2cpp_TypeInfo));
		StringBuilder__ctor_m4989(L_0, ((int32_t)2000), /*hidden argument*/&StringBuilder__ctor_m4989_MethodInfo);
		V_0 = L_0;
		CharU5BU5D_t410* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m6969(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&SimpleJson_EatWhitespace_m6969_MethodInfo);
		CharU5BU5D_t410* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t410* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t410* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t410* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t410* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t493 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m2786(L_28, ((int32_t)34), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t493 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m2786(L_30, ((int32_t)92), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t493 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m2786(L_32, ((int32_t)47), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t493 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m2786(L_34, 8, /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t493 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m2786(L_36, ((int32_t)12), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t493 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m2786(L_38, ((int32_t)10), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t493 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m2786(L_40, ((int32_t)13), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t493 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m2786(L_42, ((int32_t)9), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t410* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t410* L_48 = ___json;
		int32_t* L_49 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_50 = String_CreateString_m7376(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/&String__ctor_m7354_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_51 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		bool L_52 = UInt32_TryParse_m7356(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/&UInt32_TryParse_m7356_MethodInfo);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_55 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t410* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t410* L_63 = ___json;
		int32_t* L_64 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_65 = String_CreateString_m7376(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/&String__ctor_m7354_MethodInfo);
		bool L_66 = String_op_Equality_m653(NULL /*static, unused*/, L_65, (String_t*) &_stringLiteral512, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t410* L_67 = ___json;
		int32_t* L_68 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_69 = String_CreateString_m7376(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/&String__ctor_m7354_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_70 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		bool L_71 = UInt32_TryParse_m7356(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/&UInt32_TryParse_m7356_MethodInfo);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t493 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m2786(L_74, (((uint16_t)L_75)), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		StringBuilder_t493 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m2786(L_76, (((uint16_t)L_77)), /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_81 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t493 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m6966(NULL /*static, unused*/, L_83, /*hidden argument*/&SimpleJson_ConvertFromUtf32_m6966_MethodInfo);
		NullCheck(L_82);
		StringBuilder_Append_m7357(L_82, L_84, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t493 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m2786(L_87, L_88, /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t493 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2471_MethodInfo, L_92);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* CharU5BU5D_t410_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m6966 (Object_t * __this /* static, unused */, int32_t ___utf32, MethodInfo* method)
{
	static bool SimpleJson_ConvertFromUtf32_m6966_init;
	if (!SimpleJson_ConvertFromUtf32_m6966_init)
	{
		CharU5BU5D_t410_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t410_0_0_0);
		SimpleJson_ConvertFromUtf32_m6966_init = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t1256 * L_2 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7358(L_2, (String_t*) &_stringLiteral513, (String_t*) &_stringLiteral514, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7358_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t1256 * L_5 = (ArgumentOutOfRangeException_t1256 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7358(L_5, (String_t*) &_stringLiteral513, (String_t*) &_stringLiteral515, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7358_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_8 = String_CreateString_m2843(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/&String__ctor_m2793_MethodInfo);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t410* L_10 = ((CharU5BU5D_t410*)SZArrayNew(CharU5BU5D_t410_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t410* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_14 = String_CreateString_m7377(L_14, L_12, /*hidden argument*/&String__ctor_m7359_MethodInfo);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern "C" Object_t * SimpleJson_ParseNumber_m6967 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t* ___index, bool* ___success, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t410* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m6969(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_EatWhitespace_m6969_MethodInfo);
		CharU5BU5D_t410* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m6968(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/&SimpleJson_GetLastIndexOfNumber_m6968_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t410* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_10 = String_CreateString_m7376(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/&String__ctor_m7354_MethodInfo);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m7266(L_11, (String_t*) &_stringLiteral135, 5, /*hidden argument*/&String_IndexOf_m7266_MethodInfo);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m7266(L_13, (String_t*) &_stringLiteral19, 5, /*hidden argument*/&String_IndexOf_m7266_MethodInfo);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t410* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_19 = String_CreateString_m7376(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/&String__ctor_m7354_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_20 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		bool L_21 = Double_TryParse_m7360(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/&Double_TryParse_m7360_MethodInfo);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(InitializedTypeInfo(&Double_t209_il2cpp_TypeInfo), &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t410* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_29 = String_CreateString_m7376(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/&String__ctor_m7354_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_30 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		bool L_31 = Int64_TryParse_m7361(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/&Int64_TryParse_m7361_MethodInfo);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(InitializedTypeInfo(&Int64_t1257_il2cpp_TypeInfo), &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m6968 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t410* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((String_t*) &_stringLiteral516);
		int32_t L_4 = String_IndexOf_m2821((String_t*) &_stringLiteral516, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/&String_IndexOf_m2821_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t410* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m6969 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t* ___index, MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t410* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck((String_t*) &_stringLiteral517);
		int32_t L_3 = String_IndexOf_m2821((String_t*) &_stringLiteral517, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/&String_IndexOf_m2821_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t410* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m6970 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t ___index, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t410* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m6971(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/&SimpleJson_NextToken_m6971_MethodInfo);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m6971 (Object_t * __this /* static, unused */, CharU5BU5D_t410* ___json, int32_t* ___index, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t410* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m6969(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&SimpleJson_EatWhitespace_m6969_MethodInfo);
		int32_t* L_2 = ___index;
		CharU5BU5D_t410* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t410* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t410* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t410* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t410* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t410* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t410* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t410* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t410* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t410* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t410* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t410* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t410* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t410* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t410* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t410* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* IDictionary_2_t1114_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t1258_il2cpp_TypeInfo_var;
extern MethodInfo* IDictionary_2_get_Keys_m7362_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Values_m7363_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Keys_m7364_MethodInfo_var;
extern MethodInfo* IDictionary_2_get_Values_m7365_MethodInfo_var;
extern "C" bool SimpleJson_SerializeValue_m6972 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t493 * ___builder, MethodInfo* method)
{
	static bool SimpleJson_SerializeValue_m6972_init;
	if (!SimpleJson_SerializeValue_m6972_init)
	{
		IDictionary_2_t1114_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t1114_0_0_0);
		IDictionary_2_t1258_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&IDictionary_2_t1258_0_0_0);
		IDictionary_2_get_Keys_m7362_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Keys_m7362_GenericMethod);
		IDictionary_2_get_Values_m7363_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Values_m7363_GenericMethod);
		IDictionary_2_get_Keys_m7364_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Keys_m7364_GenericMethod);
		IDictionary_2_get_Values_m7365_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&IDictionary_2_get_Values_m7365_GenericMethod);
		SimpleJson_SerializeValue_m6972_init = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t493 * G_B13_0 = {0};
	StringBuilder_t493 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t493 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t493 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m6975(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&SimpleJson_SerializeString_m6975_MethodInfo);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t1114_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Keys_m7362_MethodInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Values_m7363_MethodInfo_var, L_10);
		StringBuilder_t493 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m6973(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/&SimpleJson_SerializeObject_m6973_MethodInfo);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t1258_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Keys_m7364_MethodInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IDictionary_2_get_Values_m7365_MethodInfo_var, L_19);
		StringBuilder_t493 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m6973(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/&SimpleJson_SerializeObject_m6973_MethodInfo);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, InitializedTypeInfo(&IEnumerable_t595_il2cpp_TypeInfo)));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t493 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m6974(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/&SimpleJson_SerializeArray_m6974_MethodInfo);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m6977(NULL /*static, unused*/, L_29, /*hidden argument*/&SimpleJson_IsNumeric_m6977_MethodInfo);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t493 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m6976(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&SimpleJson_SerializeNumber_m6976_MethodInfo);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t493 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, InitializedTypeInfo(&Boolean_t175_il2cpp_TypeInfo))))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (String_t*) &_stringLiteral518;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (String_t*) &_stringLiteral519;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m7357(G_B14_1, G_B14_0, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t493 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m7357(L_38, (String_t*) &_stringLiteral520, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(&IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m7366_MethodInfo, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t493 * L_45 = ___builder;
		SimpleJson_SerializeValue_m6972(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/&SimpleJson_SerializeValue_m6972_MethodInfo);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeObject_m6973 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t493 * ___builder, MethodInfo* method)
{
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t493 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m7357(L_0, (String_t*) &_stringLiteral521, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m7367_MethodInfo, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m7367_MethodInfo, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m7301_MethodInfo, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m7301_MethodInfo, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t493 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m7357(L_10, (String_t*) &_stringLiteral11, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, (&String_t_il2cpp_TypeInfo)));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t493 * L_14 = ___builder;
		SimpleJson_SerializeString_m6975(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&SimpleJson_SerializeString_m6975_MethodInfo);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t493 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m6972(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&SimpleJson_SerializeValue_m6972_MethodInfo);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t493 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m7357(L_19, (String_t*) &_stringLiteral522, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t493 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m6972(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/&SimpleJson_SerializeValue_m6972_MethodInfo);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4885_MethodInfo, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4885_MethodInfo, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t493 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m7357(L_28, (String_t*) &_stringLiteral359, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeArray_m6974 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t493 * ___builder, MethodInfo* method)
{
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t493 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m7357(L_0, (String_t*) &_stringLiteral523, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m7367_MethodInfo, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerator_get_Current_m7301_MethodInfo, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t493 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m7357(L_6, (String_t*) &_stringLiteral11, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t493 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m6972(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/&SimpleJson_SerializeValue_m6972_MethodInfo);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m4885_MethodInfo, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, InitializedTypeInfo(&IDisposable_t176_il2cpp_TypeInfo)));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_006e:
	{
		StringBuilder_t493 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m7357(L_16, (String_t*) &_stringLiteral40, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m6975 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t493 * ___builder, MethodInfo* method)
{
	CharU5BU5D_t410* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t493 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m7357(L_0, (String_t*) &_stringLiteral425, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t410* L_2 = String_ToCharArray_m7351(L_1, /*hidden argument*/&String_ToCharArray_m7351_MethodInfo);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t410* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t493 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m7357(L_7, (String_t*) &_stringLiteral524, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t493 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m7357(L_9, (String_t*) &_stringLiteral525, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t493 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m7357(L_11, (String_t*) &_stringLiteral526, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t493 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m7357(L_13, (String_t*) &_stringLiteral527, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t493 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m7357(L_15, (String_t*) &_stringLiteral528, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t493 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m7357(L_17, (String_t*) &_stringLiteral529, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t493 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m7357(L_19, (String_t*) &_stringLiteral530, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t493 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m2786(L_20, L_21, /*hidden argument*/&StringBuilder_Append_m2786_MethodInfo);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t410* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t493 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m7357(L_25, (String_t*) &_stringLiteral425, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeNumber_m6976 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t493 * ___builder, MethodInfo* method)
{
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t1261  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&Int64_t1257_il2cpp_TypeInfo))))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t493 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, InitializedTypeInfo(&Int64_t1257_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_3 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		String_t* L_4 = Int64_ToString_m7368((&V_0), L_3, /*hidden argument*/&Int64_ToString_m7368_MethodInfo);
		NullCheck(L_1);
		StringBuilder_Append_m7357(L_1, L_4, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&UInt64_t1260_il2cpp_TypeInfo))))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t493 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, InitializedTypeInfo(&UInt64_t1260_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_8 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		String_t* L_9 = UInt64_ToString_m7369((&V_1), L_8, /*hidden argument*/&UInt64_ToString_m7369_MethodInfo);
		NullCheck(L_6);
		StringBuilder_Append_m7357(L_6, L_9, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo))))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t493 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_13 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		String_t* L_14 = Int32_ToString_m7370((&V_2), L_13, /*hidden argument*/&Int32_ToString_m7370_MethodInfo);
		NullCheck(L_11);
		StringBuilder_Append_m7357(L_11, L_14, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, InitializedTypeInfo(&UInt32_t1250_il2cpp_TypeInfo))))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t493 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, InitializedTypeInfo(&UInt32_t1250_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_18 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		String_t* L_19 = UInt32_ToString_m7371((&V_3), L_18, /*hidden argument*/&UInt32_ToString_m7371_MethodInfo);
		NullCheck(L_16);
		StringBuilder_Append_m7357(L_16, L_19, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, InitializedTypeInfo(&Decimal_t1261_il2cpp_TypeInfo))))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t493 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t1261 *)((Decimal_t1261 *)UnBox (L_22, InitializedTypeInfo(&Decimal_t1261_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_23 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		String_t* L_24 = Decimal_ToString_m7372((&V_4), L_23, /*hidden argument*/&Decimal_ToString_m7372_MethodInfo);
		NullCheck(L_21);
		StringBuilder_Append_m7357(L_21, L_24, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo))))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t493 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo)))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_28 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		String_t* L_29 = Single_ToString_m7373((&V_5), L_28, /*hidden argument*/&Single_ToString_m7373_MethodInfo);
		NullCheck(L_26);
		StringBuilder_Append_m7357(L_26, L_29, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t493 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1255_il2cpp_TypeInfo));
		CultureInfo_t1255 * L_32 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t1243_il2cpp_TypeInfo));
		double L_33 = Convert_ToDouble_m7374(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/&Convert_ToDouble_m7374_MethodInfo);
		V_6 = L_33;
		CultureInfo_t1255 * L_34 = CultureInfo_get_InvariantCulture_m7355(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m7355_MethodInfo);
		String_t* L_35 = Double_ToString_m7375((&V_6), (String_t*) &_stringLiteral531, L_34, /*hidden argument*/&Double_ToString_m7375_MethodInfo);
		NullCheck(L_30);
		StringBuilder_Append_m7357(L_30, L_35, /*hidden argument*/&StringBuilder_Append_m7357_MethodInfo);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern "C" bool SimpleJson_IsNumeric_m6977 (Object_t * __this /* static, unused */, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, InitializedTypeInfo(&SByte_t256_il2cpp_TypeInfo))))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, InitializedTypeInfo(&Byte_t535_il2cpp_TypeInfo))))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, InitializedTypeInfo(&Int16_t573_il2cpp_TypeInfo))))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, InitializedTypeInfo(&UInt16_t879_il2cpp_TypeInfo))))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo))))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, InitializedTypeInfo(&UInt32_t1250_il2cpp_TypeInfo))))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, InitializedTypeInfo(&Int64_t1257_il2cpp_TypeInfo))))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, InitializedTypeInfo(&UInt64_t1260_il2cpp_TypeInfo))))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo))))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, InitializedTypeInfo(&Double_t209_il2cpp_TypeInfo))))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, InitializedTypeInfo(&Decimal_t1261_il2cpp_TypeInfo))))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m6978 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t1154_StaticFields*)InitializedTypeInfo(&SimpleJson_t1154_il2cpp_TypeInfo)->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t1153 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m6979(NULL /*static, unused*/, /*hidden argument*/&SimpleJson_get_PocoJsonSerializerStrategy_m6979_MethodInfo);
		PocoJsonSerializerStrategy_t1153 * L_3 = L_2;
		((SimpleJson_t1154_StaticFields*)InitializedTypeInfo(&SimpleJson_t1154_il2cpp_TypeInfo)->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern "C" PocoJsonSerializerStrategy_t1153 * SimpleJson_get_PocoJsonSerializerStrategy_m6979 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	PocoJsonSerializerStrategy_t1153 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t1153 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t1153 * L_0 = ((SimpleJson_t1154_StaticFields*)InitializedTypeInfo(&SimpleJson_t1154_il2cpp_TypeInfo)->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t1153 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&PocoJsonSerializerStrategy_t1153_il2cpp_TypeInfo));
		PocoJsonSerializerStrategy_t1153 * L_2 = (PocoJsonSerializerStrategy_t1153 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PocoJsonSerializerStrategy_t1153_il2cpp_TypeInfo));
		PocoJsonSerializerStrategy__ctor_m6980(L_2, /*hidden argument*/&PocoJsonSerializerStrategy__ctor_m6980_MethodInfo);
		PocoJsonSerializerStrategy_t1153 * L_3 = L_2;
		((SimpleJson_t1154_StaticFields*)InitializedTypeInfo(&SimpleJson_t1154_il2cpp_TypeInfo)->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
