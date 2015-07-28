﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "System_Core_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t1435_il2cpp_TypeInfo;
// <Module>
#include "System_Core_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ExtensionAttribute_t948_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m4798_MethodInfo;


// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
extern MethodInfo ExtensionAttribute__ctor_m5772_MethodInfo;
extern "C" void ExtensionAttribute__ctor_m5772 (ExtensionAttribute_t948 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4798(__this, /*hidden argument*/&Attribute__ctor_m4798_MethodInfo);
		return;
	}
}
// System.MonoTODOAttribute
#include "System_Core_System_MonoTODOAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoTODOAttribute_t1436_il2cpp_TypeInfo;
// System.MonoTODOAttribute
#include "System_Core_System_MonoTODOAttributeMethodDeclarations.h"



// System.Void System.MonoTODOAttribute::.ctor()
extern MethodInfo MonoTODOAttribute__ctor_m7687_MethodInfo;
extern "C" void MonoTODOAttribute__ctor_m7687 (MonoTODOAttribute_t1436 * __this, MethodInfo* method)
{
	{
		Attribute__ctor_m4798(__this, /*hidden argument*/&Attribute__ctor_m4798_MethodInfo);
		return;
	}
}
// System.Linq.Check
#include "System_Core_System_Linq_Check.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Check_t1437_il2cpp_TypeInfo;
// System.Linq.Check
#include "System_Core_System_Linq_CheckMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;


// System.Void System.Linq.Check::Source(System.Object)
extern MethodInfo Check_Source_m7688_MethodInfo;
extern "C" void Check_Source_m7688 (Object_t * __this /* static, unused */, Object_t * ___source, MethodInfo* method)
{
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral602, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndSelector(System.Object,System.Object)
extern MethodInfo Check_SourceAndSelector_m7689_MethodInfo;
extern "C" void Check_SourceAndSelector_m7689 (Object_t * __this /* static, unused */, Object_t * ___source, Object_t * ___selector, MethodInfo* method)
{
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral602, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___selector;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral603, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern MethodInfo Check_SourceAndPredicate_m7690_MethodInfo;
extern "C" void Check_SourceAndPredicate_m7690 (Object_t * __this /* static, unused */, Object_t * ___source, Object_t * ___predicate, MethodInfo* method)
{
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral602, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___predicate;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral604, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndKeySelector(System.Object,System.Object)
extern MethodInfo Check_SourceAndKeySelector_m7691_MethodInfo;
extern "C" void Check_SourceAndKeySelector_m7691 (Object_t * __this /* static, unused */, Object_t * ___source, Object_t * ___keySelector, MethodInfo* method)
{
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1252 * L_1 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_1, (String_t*) &_stringLiteral602, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___keySelector;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral605, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Linq.Enumerable/Fallback
#include "System_Core_System_Linq_Enumerable_Fallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Fallback_t1438_il2cpp_TypeInfo;
// System.Linq.Enumerable/Fallback
#include "System_Core_System_Linq_Enumerable_FallbackMethodDeclarations.h"



// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Enumerable_t179_il2cpp_TypeInfo;
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"



// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SortDirection_t1439_il2cpp_TypeInfo;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirectionMethodDeclarations.h"



// System.Action
#include "System_Core_System_Action.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Action_t71_il2cpp_TypeInfo;
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern MethodInfo Action__ctor_m4879_MethodInfo;
extern "C" void Action__ctor_m4879 (Action_t71 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action::Invoke()
extern MethodInfo Action_Invoke_m810_MethodInfo;
extern "C" void Action_Invoke_m810 (Action_t71 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_Invoke_m810((Action_t71 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_Action_t71(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo Action_BeginInvoke_m7692_MethodInfo;
extern "C" Object_t * Action_BeginInvoke_m7692 (Action_t71 * __this, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern MethodInfo Action_EndInvoke_m7693_MethodInfo;
extern "C" void Action_EndInvoke_m7693 (Action_t71 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// <PrivateImplementationDetails>/$ArrayType$136
#include "System_Core_U3CPrivateImplementationDetailsU3E_$ArrayType$13.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$136_t1440_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$136
#include "System_Core_U3CPrivateImplementationDetailsU3E_$ArrayType$13MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void $ArrayType$136_t1440_marshal(const $ArrayType$136_t1440& unmarshaled, $ArrayType$136_t1440_marshaled& marshaled)
{
}
void $ArrayType$136_t1440_marshal_back(const $ArrayType$136_t1440_marshaled& marshaled, $ArrayType$136_t1440& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$136
void $ArrayType$136_t1440_marshal_cleanup($ArrayType$136_t1440_marshaled& marshaled)
{
}
// <PrivateImplementationDetails>
#include "System_Core_U3CPrivateImplementationDetailsU3E.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1441_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "System_Core_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
