#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
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
extern TypeInfo Enumerator_t3372_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_33.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo KeyValuePair_2_t3368_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1610_il2cpp_TypeInfo;
extern TypeInfo Dictionary_2_t3364_il2cpp_TypeInfo;
extern TypeInfo Link_t2110_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1984_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1784_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8MethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType KeyValuePair_2_t3368_0_0_0;
extern MethodInfo DictionaryEntry__ctor_m8812_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18401_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m10051_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m8811_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m18441_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18402_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18404_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentKey_m18438_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m18439_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m18440_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18401_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Enumerator__ctor_m18431_GenericMethod;
extern "C" void Enumerator__ctor_m18431_gshared (Enumerator_t3372 * __this, Dictionary_2_t3364 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t3364 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3364 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m18432_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18432_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3368  L_0 = (__this->___current_3);
		KeyValuePair_2_t3368  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18433_GenericMethod;
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18433_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3368 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3368 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3368 * L_3 = &(__this->___current_3);
		int32_t L_4 = (( int32_t (*) (KeyValuePair_2_t3368 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_5);
		DictionaryEntry_t1610  L_7 = {0};
		DictionaryEntry__ctor_m8812(&L_7, ((Object_t *)L_2), L_6, /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_7;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18434_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18434_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18435_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18435_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m18436_GenericMethod;
extern "C" bool Enumerator_MoveNext_m18436_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t3364 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t3364 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t178* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3364 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t34* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3368  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3368 *, Object_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t3364 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m18437_GenericMethod;
extern "C" KeyValuePair_2_t3368  Enumerator_get_Current_m18437_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3368  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18438_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3368 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3368 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m18439_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3368 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t3368 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m18440_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3364 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t3364 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18441_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m18442_GenericMethod;
extern "C" void Enumerator_Dispose_m18442_gshared (Enumerator_t3372 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3364 *)NULL;
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3373_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_8MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m18443_GenericMethod;
extern "C" void Transform_1__ctor_m18443_gshared (Transform_1_t3373 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18444_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m18444_gshared (Transform_1_t3373 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18444((Transform_1_t3373 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18445_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18445_gshared (Transform_1_t3373 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18446_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m18446_gshared (Transform_1_t3373 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_29.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ValueCollection_t3374_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_29MethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_30.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9.h"
extern TypeInfo ICollection_t1351_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t207_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3375_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t34_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3376_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_33MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_30MethodDeclarations.h"
extern Il2CppType Dictionary_2_t3364_0_0_0;
extern Il2CppType Enumerator_t3375_0_0_0;
extern Il2CppType Int32U5BU5D_t34_0_0_0;
extern Il2CppType ValueCollection_t3374_0_0_0;
extern Il2CppType Transform_1_t3376_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m14599_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18375_MethodInfo;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m8832_MethodInfo;
extern MethodInfo ValueCollection_CopyTo_m18458_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m18383_MethodInfo;
extern MethodInfo Transform_1__ctor_m18466_MethodInfo;
extern MethodInfo Enumerator__ctor_m18461_MethodInfo;
struct Dictionary_2_t3364;
// System.Type
#include "mscorlib_System_Type.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m34042_gshared (Dictionary_2_t3364 * __this, Array_t * p0, int32_t p1, Transform_1_t3376 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m34042(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3364 *, Array_t *, int32_t, Transform_1_t3376 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m34042_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3364;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t96_TisInt32_t96_m34043 (Dictionary_2_t3364 * __this, Int32U5BU5D_t34* p0, int32_t p1, Transform_1_t3376 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18375_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m18389_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m18459_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m18458_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18380_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m18383_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18466_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m34042_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t96_TisInt32_t96_m34043_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18461_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ValueCollection__ctor_m18447_GenericMethod;
extern "C" void ValueCollection__ctor_m18447_gshared (ValueCollection_t3374 * __this, Dictionary_2_t3364 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t3364 * L_0 = ___dictionary;
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
		Dictionary_2_t3364 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18448_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18448_gshared (ValueCollection_t3374 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18449_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18449_gshared (ValueCollection_t3374 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18450_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18450_gshared (ValueCollection_t3374 * __this, int32_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3364 * L_0 = (__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3364 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18451_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18451_gshared (ValueCollection_t3374 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18452_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18452_gshared (ValueCollection_t3374 * __this, MethodInfo* method)
{
	{
		Enumerator_t3375  L_0 = (( Enumerator_t3375  (*) (ValueCollection_t3374 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3375  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m18453_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18453_gshared (ValueCollection_t3374 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	Int32U5BU5D_t34* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((Int32U5BU5D_t34*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t34* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t34* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< Int32U5BU5D_t34*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t3364 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3364 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3364 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3376 * L_11 = (Transform_1_t3376 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3376 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3364 *, Array_t *, int32_t, Transform_1_t3376 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18454_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18454_gshared (ValueCollection_t3374 * __this, MethodInfo* method)
{
	{
		Enumerator_t3375  L_0 = (( Enumerator_t3375  (*) (ValueCollection_t3374 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3375  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18455_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18455_gshared (ValueCollection_t3374 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18456_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18456_gshared (ValueCollection_t3374 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m18457_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18457_gshared (ValueCollection_t3374 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3364 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18458_gshared (ValueCollection_t3374 * __this, Int32U5BU5D_t34* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3364 * L_0 = (__this->___dictionary_0);
		Int32U5BU5D_t34* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3364 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3364 * L_3 = (__this->___dictionary_0);
		Int32U5BU5D_t34* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3376 * L_7 = (Transform_1_t3376 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3376 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3364 *, Int32U5BU5D_t34*, int32_t, Transform_1_t3376 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3375  ValueCollection_GetEnumerator_m18459_gshared (ValueCollection_t3374 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3364 * L_0 = (__this->___dictionary_0);
		Enumerator_t3375  L_1 = {0};
		(( void (*) (Enumerator_t3375 *, Dictionary_2_t3364 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m18460_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m18460_gshared (ValueCollection_t3374 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3364 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern Il2CppType Enumerator_t3372_0_0_0;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m18399_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18461_gshared (Enumerator_t3375 * __this, Dictionary_2_t3364 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3364 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3372  L_1 = (( Enumerator_t3372  (*) (Dictionary_2_t3364 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m18462_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18462_gshared (Enumerator_t3375 * __this, MethodInfo* method)
{
	{
		Enumerator_t3372 * L_0 = &(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m18463_GenericMethod;
extern "C" void Enumerator_Dispose_m18463_gshared (Enumerator_t3375 * __this, MethodInfo* method)
{
	{
		Enumerator_t3372 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m18464_GenericMethod;
extern "C" bool Enumerator_MoveNext_m18464_gshared (Enumerator_t3375 * __this, MethodInfo* method)
{
	{
		Enumerator_t3372 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m18465_GenericMethod;
extern "C" int32_t Enumerator_get_Current_m18465_gshared (Enumerator_t3375 * __this, MethodInfo* method)
{
	{
		Enumerator_t3372 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3368 * L_1 = &(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t3368 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18466_gshared (Transform_1_t3376 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18467_GenericMethod;
extern "C" int32_t Transform_1_Invoke_m18467_gshared (Transform_1_t3376 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18467((Transform_1_t3376 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18468_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18468_gshared (Transform_1_t3376 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18469_GenericMethod;
extern "C" int32_t Transform_1_EndInvoke_m18469_gshared (Transform_1_t3376 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3367_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m18470_GenericMethod;
extern "C" void Transform_1__ctor_m18470_gshared (Transform_1_t3367 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18471_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_Invoke_m18471_gshared (Transform_1_t3367 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18471((Transform_1_t3367 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18472_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18472_gshared (Transform_1_t3367 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18473_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_EndInvoke_m18473_gshared (Transform_1_t3367 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1610 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3377_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_11MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m18474_GenericMethod;
extern "C" void Transform_1__ctor_m18474_gshared (Transform_1_t3377 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18475_GenericMethod;
extern "C" KeyValuePair_2_t3368  Transform_1_Invoke_m18475_gshared (Transform_1_t3377 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18475((Transform_1_t3377 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3368  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3368  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3368  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18476_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18476_gshared (Transform_1_t3377 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18477_GenericMethod;
extern "C" KeyValuePair_2_t3368  Transform_1_EndInvoke_m18477_gshared (Transform_1_t3377 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3368 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ShimEnumerator_t3378_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_1MethodDeclarations.h"

extern TypeInfo IDictionaryEnumerator_t1607_il2cpp_TypeInfo;
extern Il2CppType ShimEnumerator_t3378_0_0_0;
extern MethodInfo IDictionaryEnumerator_get_Entry_m14602_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m18480_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m18480_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern Il2CppGenericMethod ShimEnumerator__ctor_m18478_GenericMethod;
extern "C" void ShimEnumerator__ctor_m18478_gshared (ShimEnumerator_t3378 * __this, Dictionary_2_t3364 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t3364 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3372  L_1 = (( Enumerator_t3372  (*) (Dictionary_2_t3364 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m18479_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m18479_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method)
{
	{
		Enumerator_t3372 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m18480_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method)
{
	{
		Enumerator_t3372  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3372  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1610  L_3 = (DictionaryEntry_t1610 )InterfaceFuncInvoker0< DictionaryEntry_t1610  >::Invoke(&IDictionaryEnumerator_get_Entry_m14602_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m18481_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m18481_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3368  V_0 = {0};
	{
		Enumerator_t3372 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3368  L_1 = (( KeyValuePair_2_t3368  (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3368 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m18482_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m18482_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3368  V_0 = {0};
	{
		Enumerator_t3372 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3368  L_1 = (( KeyValuePair_2_t3368  (*) (Enumerator_t3372 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t3368 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m18483_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m18483_gshared (ShimEnumerator_t3378 * __this, MethodInfo* method)
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
extern TypeInfo IList_1_t3382_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t4860_il2cpp_TypeInfo;

#include "UnityEngine.UI_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4859_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4855_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3379_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70MethodDeclarations.h"

extern TypeInfo ICanvasElement_t362_il2cpp_TypeInfo;
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t3379_0_0_0;
extern MethodInfo Array_get_Length_m8815_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m32943(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ICanvasElement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ICanvasElement>(System.Int32)
#define Array_InternalArray__get_Item_TisICanvasElement_t362_m34049(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18488_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisICanvasElement_t362_m34049_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.ICanvasElement>::get_Current()
// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_61.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t3363_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_gen_61MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_14.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_gen.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_15.h"
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Comparison_1_gen_1.h"
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t853_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2504_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo;
extern TypeInfo ICanvasElementU5BU5D_t3380_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3381_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3383_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t361_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3387_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_14MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_15MethodDeclarations.h"
extern Il2CppType List_1_t3363_0_0_0;
extern Il2CppType ICollection_1_t4860_0_0_0;
extern Il2CppType ICanvasElementU5BU5D_t3380_0_0_0;
extern Il2CppType Enumerator_t3381_0_0_0;
extern Il2CppType IEnumerable_1_t4859_0_0_0;
extern Il2CppType IEnumerator_1_t4855_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3383_0_0_0;
extern Il2CppType Predicate_1_t361_0_0_0;
extern Il2CppType Comparer_1_t3387_0_0_0;
extern MethodInfo List_1_get_Item_m18537_MethodInfo;
extern MethodInfo List_1_set_Item_m18538_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8994_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8819_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38518_MethodInfo;
extern MethodInfo Array_Copy_m10846_MethodInfo;
extern MethodInfo List_1_Add_m18508_MethodInfo;
extern MethodInfo List_1_Contains_m18515_MethodInfo;
extern MethodInfo List_1_IndexOf_m18521_MethodInfo;
extern MethodInfo List_1_Insert_m18524_MethodInfo;
extern MethodInfo List_1_Remove_m18526_MethodInfo;
extern MethodInfo Math_Max_m10043_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m38519_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38520_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38521_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4885_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m18545_MethodInfo;
extern MethodInfo Array_Clear_m10034_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m18619_MethodInfo;
extern MethodInfo Enumerator__ctor_m18539_MethodInfo;
extern MethodInfo List_1_RemoveAt_m18528_MethodInfo;
extern MethodInfo Array_Reverse_m10075_MethodInfo;
extern MethodInfo Array_Copy_m9034_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m33054_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m33054(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<UnityEngine.UI.ICanvasElement>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UI.ICanvasElement>(!!0[]&,System.Int32)
#define Array_Resize_TisICanvasElement_t362_m34060(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t3380**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_15.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14600_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14600(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UI.ICanvasElement>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UI.ICanvasElement>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisICanvasElement_t362_m34062(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t3380*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33123_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m33123(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisICanvasElement_t362_m34064(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t3380*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33263_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, Comparison_1_t3104 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m33263(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, Comparison_1_t3104 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.ICanvasElement>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisICanvasElement_t362_m34072(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ICanvasElementU5BU5D_t3380*, int32_t, Comparison_1_t360 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m18537_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m18538_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisICanvasElement_t362_m34060_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m18523_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m18525_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m18511_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38518_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m18510_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m18520_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m18508_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m18515_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m18521_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m18524_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m18526_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m18509_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m18534_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m18535_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m38519_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38520_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38521_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m18545_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisICanvasElement_t362_m34062_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m18518_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m18519_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m18619_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18539_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m18522_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m18528_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m18625_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisICanvasElement_t362_m34064_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisICanvasElement_t362_m34072_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m8818_MethodInfo;
extern MethodInfo Object_GetType_m975_MethodInfo;
extern MethodInfo Type_get_FullName_m7409_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m18542_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.ICanvasElement>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t595_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_14MethodDeclarations.h"
extern Il2CppType IList_1_t3382_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m18574_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;
extern MethodInfo IList_1_get_Item_m38522_MethodInfo;
extern MethodInfo ICollection_CopyTo_m8807_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo ICollection_1_Contains_m38523_MethodInfo;
extern MethodInfo IList_1_IndexOf_m38524_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m18574_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m38522_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m18606_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m38523_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m38524_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_14.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3384_il2cpp_TypeInfo;

extern TypeInfo IList_t1352_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t3384_0_0_0;
extern Il2CppType ICanvasElement_t362_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m38525_MethodInfo;
extern MethodInfo Collection_1_SetItem_m18605_MethodInfo;
extern MethodInfo List_1__ctor_m18489_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m18598_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m18596_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m18601_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m18592_MethodInfo;
extern MethodInfo ICollection_1_Clear_m38526_MethodInfo;
extern MethodInfo IList_1_Insert_m38527_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m38528_MethodInfo;
extern MethodInfo IList_1_set_Item_m38529_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10897_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14878_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14879_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m38525_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m18609_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m18610_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m18607_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m18605_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m18489_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m18598_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m18608_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m18596_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m18601_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m18592_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m38526_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m38527_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m38528_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m38529_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.ICanvasElement>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3385_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_15MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_15.h"
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3386_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_15MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3385_0_0_0;
extern Il2CppType IEquatable_1_t5608_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t3386_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m18616_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m38530_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m34061_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18616_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m38530_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m34061_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ICanvasElement>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t3389_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5608_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UI.ICanvasElement>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m1072_MethodInfo;
extern MethodInfo Object_Equals_m1071_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m18611_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<UnityEngine.UI.ICanvasElement>::Invoke(T)
// System.IAsyncResult System.Predicate`1<UnityEngine.UI.ICanvasElement>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_15.h"
extern TypeInfo DefaultComparer_t3388_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_15MethodDeclarations.h"
extern Il2CppType IComparable_1_t5272_0_0_0;
extern Il2CppType GenericComparer_1_t2830_0_0_0;
extern Il2CppType DefaultComparer_t3388_0_0_0;
extern MethodInfo DefaultComparer__ctor_m18626_MethodInfo;
extern MethodInfo Comparer_1_Compare_m38531_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13771_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m18626_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m38531_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<UnityEngine.UI.ICanvasElement>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5271_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<UnityEngine.UI.ICanvasElement>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5272_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<UnityEngine.UI.ICanvasElement>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m34070_MethodInfo;
extern MethodInfo IComparable_CompareTo_m14570_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m18622_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m34070_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.UI.ICanvasElement>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t360_il2cpp_TypeInfo;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Comparison_1_gen_1MethodDeclarations.h"



// System.Void System.Comparison`1<UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<UnityEngine.UI.ICanvasElement>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<UnityEngine.UI.ICanvasElement>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t517_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_11.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_31.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_14.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
extern TypeInfo KeyNotFoundException_t2111_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3393_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3397_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5609_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5610_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4863_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3391_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4862_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3390_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3400_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3395_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3402_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2900_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1603_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3140_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3318_il2cpp_TypeInfo;
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_31MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_14MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_2MethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType Dictionary_2_t517_0_0_0;
extern Il2CppType IEqualityComparer_1_t3389_0_0_0;
extern Il2CppType KeyCollection_t3393_0_0_0;
extern Il2CppType ValueCollection_t3397_0_0_0;
extern Il2CppType ICollection_1_t5609_0_0_0;
extern Il2CppType IEnumerable_1_t5610_0_0_0;
extern Il2CppType IEnumerator_1_t4863_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4862_0_0_0;
extern Il2CppType KeyValuePair_2_t3391_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t5178_0_0_0;
extern Il2CppType Transform_1_t3390_0_0_0;
extern Il2CppType Transform_1_t3400_0_0_0;
extern Il2CppType Enumerator_t3395_0_0_0;
extern Il2CppType ShimEnumerator_t3402_0_0_0;
extern Il2CppType LinkU5BU5D_t2900_0_0_0;
extern Il2CppType EqualityComparer_1_t3140_0_0_0;
extern Il2CppType IEqualityComparer_1_t3318_0_0_0;
extern Il2CppType Int32_t96_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m18668_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m18656_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m18657_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38532_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38533_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m11463_MethodInfo;
extern MethodInfo KeyCollection__ctor_m18692_MethodInfo;
extern MethodInfo ValueCollection__ctor_m18727_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38534_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38535_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38536_MethodInfo;
extern MethodInfo Dictionary_2_Add_m18666_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m18672_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m18680_MethodInfo;
extern MethodInfo Transform_1__ctor_m18750_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m18661_MethodInfo;
extern MethodInfo Transform_1__ctor_m18754_MethodInfo;
extern MethodInfo Enumerator__ctor_m18711_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m18762_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18655_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18681_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m11630_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38490_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8828_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8841_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m8840_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m8829_MethodInfo;
extern MethodInfo Type_ToString_m10928_MethodInfo;
extern MethodInfo String_Concat_m731_MethodInfo;
extern MethodInfo ArgumentException__ctor_m8817_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m18673_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m33333_MethodInfo;
struct Dictionary_2_t517;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m34091 (Dictionary_2_t517 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t3390 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t517;
struct Dictionary_2_t3364;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3391_m34094_gshared (Dictionary_2_t3364 * __this, Array_t * p0, int32_t p1, Transform_1_t3401 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3391_m34094(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3364 *, Array_t *, int32_t, Transform_1_t3401 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3391_m34094_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3391_m34093(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t517 *, Array_t *, int32_t, Transform_1_t3400 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3391_m34094_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t517;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3391_TisKeyValuePair_2_t3391_m34096 (Dictionary_2_t517 * __this, KeyValuePair_2U5BU5D_t4862* p0, int32_t p1, Transform_1_t3400 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m18674_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m18675_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18668_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m18676_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m18656_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m18677_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m18657_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38532_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38533_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m18665_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m18692_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m18727_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m18658_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m18635_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38534_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38535_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38536_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18682_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18684_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m18666_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m18672_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m18678_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m18664_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18660_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m18680_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18750_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m34091_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m18661_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18754_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3391_m34093_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18711_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m18762_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m18615_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m18659_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18655_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18681_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3391_TisKeyValuePair_2_t3391_m34096_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16089_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38490_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m18673_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m33333_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo StringU5BU5D_t208_il2cpp_TypeInfo;
extern Il2CppType StringU5BU5D_t208_0_0_0;
extern MethodInfo Object_ToString_m1073_MethodInfo;
extern MethodInfo String_Concat_m7291_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m18683_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m18685_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_71.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3392_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_71MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3392_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>(System.Int32)
extern "C" KeyValuePair_2_t3391  Array_InternalArray__get_Item_TisKeyValuePair_2_t3391_m34075_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3391_m34075(__this, p0, method) (( KeyValuePair_2_t3391  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3391_m34075_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18691_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3391_m34075_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18687_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18687_gshared (InternalEnumerator_1_t3392 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18688_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18688_gshared (InternalEnumerator_1_t3392 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3391  L_0 = (( KeyValuePair_2_t3391  (*) (InternalEnumerator_1_t3392 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3391  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18689_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18689_gshared (InternalEnumerator_1_t3392 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18690_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18690_gshared (InternalEnumerator_1_t3392 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t3391  InternalEnumerator_1_get_Current_m18691_gshared (InternalEnumerator_1_t3392 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3391  L_8 = (( KeyValuePair_2_t3391  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5611_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t4861_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12.h"
extern TypeInfo Enumerator_t3394_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3396_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_12MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_12MethodDeclarations.h"
extern Il2CppType Enumerator_t3394_0_0_0;
extern Il2CppType Transform_1_t3396_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m18703_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m18662_MethodInfo;
extern MethodInfo Transform_1__ctor_m18723_MethodInfo;
extern MethodInfo Enumerator__ctor_m18706_MethodInfo;
struct Dictionary_2_t517;
struct Dictionary_2_t3364;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m34040_gshared (Dictionary_2_t3364 * __this, Array_t * p0, int32_t p1, Transform_1_t3373 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m34040(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3364 *, Array_t *, int32_t, Transform_1_t3373 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m34040_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<UnityEngine.UI.ICanvasElement>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<UnityEngine.UI.ICanvasElement>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisICanvasElement_t362_m34086(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t517 *, Array_t *, int32_t, Transform_1_t3396 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m34040_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t517;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisICanvasElement_t362_TisICanvasElement_t362_m34087 (Dictionary_2_t517 * __this, ICanvasElementU5BU5D_t3380* p0, int32_t p1, Transform_1_t3396 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m18704_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m18703_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m18662_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18723_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisICanvasElement_t362_m34086_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisICanvasElement_t362_TisICanvasElement_t362_m34087_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18706_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m18718_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m18679_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m18722_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m18716_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m18721_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m18719_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m18720_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,UnityEngine.UI.ICanvasElement>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_32.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13.h"
extern TypeInfo Enumerator_t3398_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3399_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_32MethodDeclarations.h"
extern Il2CppType Enumerator_t3398_0_0_0;
extern Il2CppType Transform_1_t3399_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m18738_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m18663_MethodInfo;
extern MethodInfo Transform_1__ctor_m18746_MethodInfo;
extern MethodInfo Enumerator__ctor_m18741_MethodInfo;
struct Dictionary_2_t517;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m34089(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t517 *, Array_t *, int32_t, Transform_1_t3399 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m34042_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t517;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t96_TisInt32_t96_m34090 (Dictionary_2_t517 * __this, Int32U5BU5D_t34* p0, int32_t p1, Transform_1_t3399 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m18669_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m18739_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m18738_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m18663_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18746_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m34089_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t96_TisInt32_t96_m34090_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18741_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t3401_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_16MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m18755_GenericMethod;
extern "C" void Transform_1__ctor_m18755_gshared (Transform_1_t3401 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18757_GenericMethod;
extern "C" KeyValuePair_2_t3391  Transform_1_Invoke_m18757_gshared (Transform_1_t3401 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18757((Transform_1_t3401 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3391  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3391  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3391  (*FunctionPointerType) (Object_t * __this, int32_t ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18759_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18759_gshared (Transform_1_t3401 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18761_GenericMethod;
extern "C" KeyValuePair_2_t3391  Transform_1_EndInvoke_m18761_gshared (Transform_1_t3401 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3391 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m18764_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m18717_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m18764_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.UI.ICanvasElement,System.Int32>::get_Current()
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t366_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_15.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_35.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_gen_13.h"
#include "UnityEngine_ArrayTypes.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_23.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Font>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_17.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_18.h"
extern TypeInfo Font_t364_il2cpp_TypeInfo;
extern TypeInfo List_1_t506_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3405_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3439_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3443_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5612_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5613_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4868_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3419_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4867_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3406_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3446_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3441_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3448_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3449_il2cpp_TypeInfo;
extern TypeInfo FontU5BU5D_t3403_il2cpp_TypeInfo;
extern TypeInfo List_1U5BU5D_t3404_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3451_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t5614_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_35MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_22MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_23MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_4MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<UnityEngine.Font>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_17MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Collections.Generic.List`1<UnityEngine.UI.Text>>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_18MethodDeclarations.h"
extern Il2CppType Dictionary_2_t366_0_0_0;
extern Il2CppType List_1_t506_0_0_0;
extern Il2CppType IEqualityComparer_1_t3405_0_0_0;
extern Il2CppType KeyCollection_t3439_0_0_0;
extern Il2CppType ValueCollection_t3443_0_0_0;
extern Il2CppType ICollection_1_t5612_0_0_0;
extern Il2CppType IEnumerable_1_t5613_0_0_0;
extern Il2CppType IEnumerator_1_t4868_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4867_0_0_0;
extern Il2CppType KeyValuePair_2_t3419_0_0_0;
extern Il2CppType Transform_1_t3406_0_0_0;
extern Il2CppType Transform_1_t3446_0_0_0;
extern Il2CppType Enumerator_t3441_0_0_0;
extern Il2CppType ShimEnumerator_t3448_0_0_0;
extern Il2CppType EqualityComparer_1_t3449_0_0_0;
extern Il2CppType FontU5BU5D_t3403_0_0_0;
extern Il2CppType List_1U5BU5D_t3404_0_0_0;
extern Il2CppType EqualityComparer_1_t3451_0_0_0;
extern Il2CppType IEqualityComparer_1_t5614_0_0_0;
extern Il2CppType Font_t364_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m18840_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m18817_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m18819_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38537_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38538_MethodInfo;
extern MethodInfo KeyCollection__ctor_m19129_MethodInfo;
extern MethodInfo ValueCollection__ctor_m19164_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38539_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38540_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38541_MethodInfo;
extern MethodInfo Dictionary_2_Add_m2631_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m18848_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m18863_MethodInfo;
extern MethodInfo Transform_1__ctor_m19187_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m18827_MethodInfo;
extern MethodInfo Transform_1__ctor_m19191_MethodInfo;
extern MethodInfo Enumerator__ctor_m19148_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m19199_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18815_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18944_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38542_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m2629_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m38543_MethodInfo;
struct Dictionary_2_t366;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m34223 (Dictionary_2_t366 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t3406 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t366;
struct Dictionary_2_t3408;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_34.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_24.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3419_m34226_gshared (Dictionary_2_t3408 * __this, Array_t * p0, int32_t p1, Transform_1_t3447 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3419_m34226(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, Transform_1_t3447 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3419_m34226_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3419_m34225(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t366 *, Array_t *, int32_t, Transform_1_t3446 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3419_m34226_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t366;
// Declaration System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3419_TisKeyValuePair_2_t3419_m34228 (Dictionary_2_t366 * __this, KeyValuePair_2U5BU5D_t4867* p0, int32_t p1, Transform_1_t3446 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m18851_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m18853_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18840_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m18855_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m18817_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m18857_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m18819_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38537_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38538_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m18835_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m19129_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m19164_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m18821_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m18775_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38539_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38540_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38541_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18945_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18947_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m2631_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m18848_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m18859_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m18833_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18825_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m18863_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m19187_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m34223_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m18827_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m19191_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3419_m34225_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m19148_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m19199_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m19209_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m18823_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18815_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18944_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3419_TisKeyValuePair_2_t3419_m34228_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m19217_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38542_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m2629_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m38543_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t3408_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_34MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_33.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3.h"
extern TypeInfo IEqualityComparer_1_t3366_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t3411_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t3415_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5615_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5616_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4871_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t3409_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t4870_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3407_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3417_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3413_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t3418_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3081_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t178_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_33MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_18MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_19MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_3MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"
extern Il2CppType Dictionary_2_t3408_0_0_0;
extern Il2CppType IEqualityComparer_1_t3366_0_0_0;
extern Il2CppType KeyCollection_t3411_0_0_0;
extern Il2CppType ValueCollection_t3415_0_0_0;
extern Il2CppType ICollection_1_t5615_0_0_0;
extern Il2CppType IEnumerable_1_t5616_0_0_0;
extern Il2CppType IEnumerator_1_t4871_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t4870_0_0_0;
extern Il2CppType KeyValuePair_2_t3409_0_0_0;
extern Il2CppType Transform_1_t3407_0_0_0;
extern Il2CppType Transform_1_t3417_0_0_0;
extern Il2CppType Enumerator_t3413_0_0_0;
extern Il2CppType ShimEnumerator_t3418_0_0_0;
extern Il2CppType EqualityComparer_1_t3081_0_0_0;
extern Il2CppType ObjectU5BU5D_t178_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m18841_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m18818_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m18820_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38514_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m34741_MethodInfo;
extern MethodInfo KeyCollection__ctor_m18876_MethodInfo;
extern MethodInfo ValueCollection__ctor_m18911_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38544_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38545_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38546_MethodInfo;
extern MethodInfo Dictionary_2_Add_m18837_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m18849_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m18864_MethodInfo;
extern MethodInfo Transform_1__ctor_m18930_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m18828_MethodInfo;
extern MethodInfo Transform_1__ctor_m18934_MethodInfo;
extern MethodInfo Enumerator__ctor_m18895_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m18938_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m18816_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m18865_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m18850_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m33055_MethodInfo;
struct Dictionary_2_t3408;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m34110 (Dictionary_2_t3408 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t3407 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t3408;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3409_m34112_gshared (Dictionary_2_t3408 * __this, Array_t * p0, int32_t p1, Transform_1_t3417 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3409_m34112(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, Transform_1_t3417 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3409_m34112_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3408;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3409_TisKeyValuePair_2_t3409_m34113 (Dictionary_2_t3408 * __this, KeyValuePair_2U5BU5D_t4870* p0, int32_t p1, Transform_1_t3417 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m18852_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m18854_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m18841_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m18856_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m18818_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m18858_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m18820_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38514_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34741_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m18836_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m18876_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m18911_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m18822_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m18776_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38544_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38545_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38546_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m18866_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m18868_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m18837_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m18849_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m18860_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m18834_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m18826_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m18864_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18930_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m34110_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m18828_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18934_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t3409_m34112_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18895_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m18938_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m15590_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m18824_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m18816_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m18865_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t3409_TisKeyValuePair_2_t3409_m34113_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m18850_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m33055_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m18768_GenericMethod;
extern "C" void Dictionary_2__ctor_m18768_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		(( void (*) (Dictionary_2_t3408 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m18770_GenericMethod;
extern "C" void Dictionary_2__ctor_m18770_gshared (Dictionary_2_t3408 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t3408 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m18772_GenericMethod;
extern "C" void Dictionary_2__ctor_m18772_gshared (Dictionary_2_t3408 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t3408 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m18774_GenericMethod;
extern "C" void Dictionary_2__ctor_m18774_gshared (Dictionary_2_t3408 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t3408 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m18776_gshared (Dictionary_2_t3408 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t3409  V_1 = {0};
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
		(( void (*) (Dictionary_2_t3408 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t3409  L_9 = (KeyValuePair_2_t3409 )InterfaceFuncInvoker0< KeyValuePair_2_t3409  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			Object_t * L_10 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m18778_GenericMethod;
extern "C" void Dictionary_2__ctor_m18778_gshared (Dictionary_2_t3408 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		SerializationInfo_t1208 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18780_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m18780_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3411 * L_0 = (( KeyCollection_t3411 * (*) (Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18782_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18782_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3415 * L_0 = (( ValueCollection_t3415 * (*) (Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m18784_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m18784_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method)
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
		Object_t * L_4 = (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		Object_t * L_6 = L_5;
		return ((Object_t *)L_6);
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m18786_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m18786_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m18788_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m18788_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		Object_t * L_3 = (( Object_t * (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m18790_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m18790_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m18792_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m18792_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18794_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m18794_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18796_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m18796_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18798_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m18798_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18800_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m18800_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2_t3409  ___keyValuePair, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18802_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m18802_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2_t3409  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3409  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3408 *, KeyValuePair_2_t3409 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18804_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m18804_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2U5BU5D_t4870* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4870* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3408 *, KeyValuePair_2U5BU5D_t4870*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18806_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m18806_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2_t3409  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t3409  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t3408 *, KeyValuePair_2_t3409 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m18808_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m18808_gshared (Dictionary_2_t3408 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m18808_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m18808_init)
	{
		DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t5178_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m18808_init = true;
	}
	KeyValuePair_2U5BU5D_t4870* V_0 = {0};
	DictionaryEntryU5BU5D_t5178* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t5178* G_B5_1 = {0};
	Dictionary_2_t3408 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t5178* G_B4_1 = {0};
	Dictionary_2_t3408 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t4870*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t4870* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4870* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t3408 *, KeyValuePair_2U5BU5D_t4870*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t3407 * L_10 = ((Dictionary_2_t3408_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t3408 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t3408 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t3407 * L_12 = (Transform_1_t3407 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t3407 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t3408_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t3408 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t3407 * L_13 = ((Dictionary_2_t3408_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t3408 *, DictionaryEntryU5BU5D_t5178*, int32_t, Transform_1_t3407 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3417 * L_17 = (Transform_1_t3417 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3417 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, Transform_1_t3417 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m18810_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413  L_0 = {0};
		(( void (*) (Enumerator_t3413 *, Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3413  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18812_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m18812_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413  L_0 = {0};
		(( void (*) (Enumerator_t3413 *, Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t3413  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18814_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m18814_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t3418 * L_0 = (ShimEnumerator_t3418 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t3418 *, Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m18816_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m18818_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method)
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
		ObjectU5BU5D_t178* L_20 = (__this->___valueSlots_7);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_20, L_22));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m18820_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
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
		(( void (*) (Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
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
		ObjectU5BU5D_t178* L_70 = (__this->___valueSlots_7);
		int32_t L_71 = V_2;
		Object_t * L_72 = ___value;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, L_71);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_70, L_71)) = (Object_t *)L_72;
		int32_t L_73 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_73+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t3081_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m18822_gshared (Dictionary_2_t3408 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m18822_init;
	if (!Dictionary_2_Init_m18822_init)
	{
		EqualityComparer_1_t3081_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3081_0_0_0);
		Dictionary_2_Init_m18822_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t3408 * G_B4_0 = {0};
	Dictionary_2_t3408 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t3408 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t3408 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t3408 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t3408 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3081_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3081 * L_5 = (( EqualityComparer_1_t3081 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t3408 *)(G_B4_0));
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
		(( void (*) (Dictionary_2_t3408 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2900_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m18824_gshared (Dictionary_2_t3408 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m18824_init;
	if (!Dictionary_2_InitArrays_m18824_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		LinkU5BU5D_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2900_0_0_0);
		Dictionary_2_InitArrays_m18824_init = true;
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
		__this->___valueSlots_7 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m18826_gshared (Dictionary_2_t3408 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3409  Dictionary_2_make_pair_m18828_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		KeyValuePair_2_t3409  L_2 = {0};
		(( void (*) (KeyValuePair_2_t3409 *, Object_t *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m18830_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_key_m18830_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m18832_GenericMethod;
extern "C" Object_t * Dictionary_2_pick_value_m18832_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m18834_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2U5BU5D_t4870* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t4870* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t4870* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t3417 * L_5 = (Transform_1_t3417 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t3417 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t3408 *, KeyValuePair_2U5BU5D_t4870*, int32_t, Transform_1_t3417 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2900_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m18836_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m18836_init;
	if (!Dictionary_2_Resize_m18836_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		LinkU5BU5D_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2900_0_0_0);
		Dictionary_2_Resize_m18836_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t34* V_1 = {0};
	LinkU5BU5D_t2900* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t178* V_7 = {0};
	ObjectU5BU5D_t178* V_8 = {0};
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
		V_8 = ((ObjectU5BU5D_t178*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		ObjectU5BU5D_t178* L_37 = (__this->___keySlots_6);
		ObjectU5BU5D_t178* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		ObjectU5BU5D_t178* L_40 = (__this->___valueSlots_7);
		ObjectU5BU5D_t178* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		ObjectU5BU5D_t178* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		ObjectU5BU5D_t178* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m18837_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
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
		(( void (*) (Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
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
		ObjectU5BU5D_t178* L_54 = (__this->___valueSlots_7);
		int32_t L_55 = V_2;
		Object_t * L_56 = ___value;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, L_55)) = (Object_t *)L_56;
		int32_t L_57 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_57+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m18839_GenericMethod;
extern "C" void Dictionary_2_Clear_m18839_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
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
		ObjectU5BU5D_t178* L_4 = (__this->___valueSlots_7);
		ObjectU5BU5D_t178* L_5 = (__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m18841_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m18843_GenericMethod;
extern TypeInfo* EqualityComparer_1_t3081_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m18843_gshared (Dictionary_2_t3408 * __this, Object_t * ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m18843_init;
	if (!Dictionary_2_ContainsValue_m18843_init)
	{
		EqualityComparer_1_t3081_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3081_0_0_0);
		Dictionary_2_ContainsValue_m18843_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3081_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3081 * L_0 = (( EqualityComparer_1_t3081 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
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
		ObjectU5BU5D_t178* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		Object_t * L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_7)), L_8);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m18845_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m18845_gshared (Dictionary_2_t3408 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t4870* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t4870*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t4870*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t4870* L_8 = V_0;
		(( void (*) (Dictionary_2_t3408 *, KeyValuePair_2U5BU5D_t4870*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1208 * L_9 = ___info;
		Int32U5BU5D_t34* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m8828(L_9, (String_t*) &_stringLiteral1575, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m8828_MethodInfo);
		SerializationInfo_t1208 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t4870* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m8841(L_11, (String_t*) &_stringLiteral1576, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m8841_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m18847_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m18847_gshared (Dictionary_2_t3408 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t4870* V_1 = {0};
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
		V_1 = ((KeyValuePair_2U5BU5D_t4870*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (Dictionary_2_t3408 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t4870* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t4870* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		Object_t * L_16 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t3409 *)(KeyValuePair_2_t3409 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t4870* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Object_t * L_19 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t3409 *)(KeyValuePair_2_t3409 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t4870* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m18849_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
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
		ObjectU5BU5D_t178* L_49 = (__this->___valueSlots_7);
		int32_t L_50 = V_2;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_5));
		Object_t * L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, L_50)) = (Object_t *)L_51;
		int32_t L_52 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_52+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m18850_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
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
		Object_t ** L_20 = ___value;
		ObjectU5BU5D_t178* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		*L_20 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23));
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
		Object_t ** L_28 = ___value;
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_2));
		Object_t * L_29 = V_2;
		*L_28 = L_29;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t3411 * Dictionary_2_get_Keys_m18852_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		KeyCollection_t3411 * L_0 = (KeyCollection_t3411 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t3411 *, Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t3415 * Dictionary_2_get_Values_m18854_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		ValueCollection_t3415 * L_0 = (ValueCollection_t3415 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t3415 *, Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m18856_gshared (Dictionary_2_t3408 * __this, Object_t * ___key, MethodInfo* method)
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
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m18858_gshared (Dictionary_2_t3408 * __this, Object_t * ___value, MethodInfo* method)
{
	Object_t * V_0 = {0};
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
		Initobj (InitializedTypeInfo(&Object_t_il2cpp_TypeInfo), (&V_0));
		Object_t * L_3 = V_0;
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
		return ((Object_t *)Castclass(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t3081_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m18860_gshared (Dictionary_2_t3408 * __this, KeyValuePair_2_t3409  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m18860_init;
	if (!Dictionary_2_ContainsKeyValuePair_m18860_init)
	{
		EqualityComparer_1_t3081_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3081_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m18860_init = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3081_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3081 * L_2 = (( EqualityComparer_1_t3081 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		Object_t * L_3 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m18862_GenericMethod;
extern "C" Enumerator_t3413  Dictionary_2_GetEnumerator_m18862_gshared (Dictionary_2_t3408 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413  L_0 = {0};
		(( void (*) (Enumerator_t3413 *, Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m18864_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = L_0;
		Object_t * L_2 = ___value;
		Object_t * L_3 = L_2;
		DictionaryEntry_t1610  L_4 = {0};
		DictionaryEntry__ctor_m8812(&L_4, ((Object_t *)L_1), ((Object_t *)L_3), /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m18867_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m18869_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m18865_gshared (KeyValuePair_2_t3409 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		(( void (*) (KeyValuePair_2_t3409 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Object_t * L_1 = ___value;
		(( void (*) (KeyValuePair_2_t3409 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" Object_t * KeyValuePair_2_get_Key_m18866_gshared (KeyValuePair_2_t3409 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m18867_gshared (KeyValuePair_2_t3409 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" Object_t * KeyValuePair_2_get_Value_m18868_gshared (KeyValuePair_2_t3409 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m18869_gshared (KeyValuePair_2_t3409 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m18870_GenericMethod;
extern TypeInfo* StringU5BU5D_t208_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m18870_gshared (KeyValuePair_2_t3409 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m18870_init;
	if (!KeyValuePair_2_ToString_m18870_init)
	{
		StringU5BU5D_t208_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t208_0_0_0);
		KeyValuePair_2_ToString_m18870_init = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
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
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		Object_t * L_9 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((Object_t *)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		Object_t * L_11 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_11;
		NullCheck((*(&V_1)));
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, (*(&V_1)));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_13;
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
		StringU5BU5D_t208* L_14 = G_B6_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 4);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral40);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, 4)) = (String_t*)(String_t*) &_stringLiteral40;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = String_Concat_m7291(NULL /*static, unused*/, L_14, /*hidden argument*/&String_Concat_m7291_MethodInfo);
		return L_15;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_72.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3410_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_72MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3410_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Int32)
extern "C" KeyValuePair_2_t3409  Array_InternalArray__get_Item_TisKeyValuePair_2_t3409_m34098_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t3409_m34098(__this, p0, method) (( KeyValuePair_2_t3409  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t3409_m34098_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18875_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t3409_m34098_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18871_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m18871_gshared (InternalEnumerator_1_t3410 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18872_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18872_gshared (InternalEnumerator_1_t3410 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3409  L_0 = (( KeyValuePair_2_t3409  (*) (InternalEnumerator_1_t3410 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18873_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m18873_gshared (InternalEnumerator_1_t3410 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18874_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m18874_gshared (InternalEnumerator_1_t3410 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3409  InternalEnumerator_1_get_Current_m18875_gshared (InternalEnumerator_1_t3410 * __this, MethodInfo* method)
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
		KeyValuePair_2_t3409  L_8 = (( KeyValuePair_2_t3409  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5617_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t4869_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Object,System.Object>::get_Values()
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17.h"
extern TypeInfo Enumerator_t3412_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t3414_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_17MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_14MethodDeclarations.h"
extern Il2CppType Enumerator_t3412_0_0_0;
extern Il2CppType Transform_1_t3414_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m18887_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m18830_MethodInfo;
extern MethodInfo Transform_1__ctor_m18907_MethodInfo;
extern MethodInfo Enumerator__ctor_m18890_MethodInfo;
struct Dictionary_2_t3408;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m34109_gshared (Dictionary_2_t3408 * __this, Array_t * p0, int32_t p1, Transform_1_t3414 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m34109(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, Transform_1_t3414 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m34109_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t3408;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Do_CopyTo<System.Object,System.Object>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m34108 (Dictionary_2_t3408 * __this, ObjectU5BU5D_t178* p0, int32_t p1, Transform_1_t3414 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m18888_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m18887_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m18907_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m34109_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisObject_t_TisObject_t_m34108_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18890_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m18876_gshared (KeyCollection_t3411 * __this, Dictionary_2_t3408 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t3408 * L_0 = ___dictionary;
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
		Dictionary_2_t3408 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18877_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m18877_gshared (KeyCollection_t3411 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18878_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m18878_gshared (KeyCollection_t3411 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18879_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m18879_gshared (KeyCollection_t3411 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18880_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m18880_gshared (KeyCollection_t3411 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18881_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m18881_gshared (KeyCollection_t3411 * __this, MethodInfo* method)
{
	{
		Enumerator_t3412  L_0 = (( Enumerator_t3412  (*) (KeyCollection_t3411 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3412  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m18882_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m18882_gshared (KeyCollection_t3411 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t3408 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3408 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3414 * L_11 = (Transform_1_t3414 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3414 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, Transform_1_t3414 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18883_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m18883_gshared (KeyCollection_t3411 * __this, MethodInfo* method)
{
	{
		Enumerator_t3412  L_0 = (( Enumerator_t3412  (*) (KeyCollection_t3411 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3412  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18884_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m18884_gshared (KeyCollection_t3411 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18885_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m18885_gshared (KeyCollection_t3411 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m18886_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m18886_gshared (KeyCollection_t3411 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m18887_gshared (KeyCollection_t3411 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t178* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3408 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t178* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3414 * L_7 = (Transform_1_t3414 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3414 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3408 *, ObjectU5BU5D_t178*, int32_t, Transform_1_t3414 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3412  KeyCollection_GetEnumerator_m18888_gshared (KeyCollection_t3411 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		Enumerator_t3412  L_1 = {0};
		(( void (*) (Enumerator_t3412 *, Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m18889_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m18889_gshared (KeyCollection_t3411 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m18902_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m18906_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m18900_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18890_gshared (Enumerator_t3412 * __this, Dictionary_2_t3408 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3413  L_1 = (( Enumerator_t3413  (*) (Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m18891_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18891_gshared (Enumerator_t3412 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m18892_GenericMethod;
extern "C" void Enumerator_Dispose_m18892_gshared (Enumerator_t3412 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m18893_GenericMethod;
extern "C" bool Enumerator_MoveNext_m18893_gshared (Enumerator_t3412 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m18894_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m18894_gshared (Enumerator_t3412 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3409 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m18905_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m18903_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m18904_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18895_gshared (Enumerator_t3413 * __this, Dictionary_2_t3408 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t3408 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m18896_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18896_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3409  L_0 = (__this->___current_3);
		KeyValuePair_2_t3409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18897_GenericMethod;
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m18897_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3409 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Object_t * L_2 = L_1;
		KeyValuePair_2_t3409 * L_3 = &(__this->___current_3);
		Object_t * L_4 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_5 = L_4;
		DictionaryEntry_t1610  L_6 = {0};
		DictionaryEntry__ctor_m8812(&L_6, ((Object_t *)L_2), ((Object_t *)L_5), /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_6;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18898_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m18898_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18899_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m18899_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m18900_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t3408 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t3408 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		ObjectU5BU5D_t178* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t3408 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		ObjectU5BU5D_t178* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t3409  L_16 = {0};
		(( void (*) (KeyValuePair_2_t3409 *, Object_t *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), (*(Object_t **)(Object_t **)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t3408 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m18901_GenericMethod;
extern "C" KeyValuePair_2_t3409  Enumerator_get_Current_m18901_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t3409  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m18902_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3409 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m18903_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t3409 * L_0 = &(__this->___current_3);
		Object_t * L_1 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m18904_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t3408 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m18905_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m18906_gshared (Enumerator_t3413 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t3408 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18907_gshared (Transform_1_t3414 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18908_GenericMethod;
extern "C" Object_t * Transform_1_Invoke_m18908_gshared (Transform_1_t3414 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18908((Transform_1_t3414 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18909_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18909_gshared (Transform_1_t3414 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18910_GenericMethod;
extern "C" Object_t * Transform_1_EndInvoke_m18910_gshared (Transform_1_t3414 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34.h"
extern TypeInfo Enumerator_t3416_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_34MethodDeclarations.h"
extern Il2CppType Enumerator_t3416_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m18922_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m18832_MethodInfo;
extern MethodInfo Enumerator__ctor_m18925_MethodInfo;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m18923_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m18922_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m18925_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18911_gshared (ValueCollection_t3415 * __this, Dictionary_2_t3408 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t3408 * L_0 = ___dictionary;
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
		Dictionary_2_t3408 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18912_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18912_gshared (ValueCollection_t3415 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18913_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18913_gshared (ValueCollection_t3415 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18914_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18914_gshared (ValueCollection_t3415 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		Object_t * L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t3408 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18915_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18915_gshared (ValueCollection_t3415 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18916_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18916_gshared (ValueCollection_t3415 * __this, MethodInfo* method)
{
	{
		Enumerator_t3416  L_0 = (( Enumerator_t3416  (*) (ValueCollection_t3415 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3416  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m18917_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18917_gshared (ValueCollection_t3415 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t3408 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3408 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3414 * L_11 = (Transform_1_t3414 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3414 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, Transform_1_t3414 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18918_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18918_gshared (ValueCollection_t3415 * __this, MethodInfo* method)
{
	{
		Enumerator_t3416  L_0 = (( Enumerator_t3416  (*) (ValueCollection_t3415 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t3416  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18919_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18919_gshared (ValueCollection_t3415 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18920_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18920_gshared (ValueCollection_t3415 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m18921_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18921_gshared (ValueCollection_t3415 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18922_gshared (ValueCollection_t3415 * __this, ObjectU5BU5D_t178* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		ObjectU5BU5D_t178* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t3408 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t3408 * L_3 = (__this->___dictionary_0);
		ObjectU5BU5D_t178* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t3414 * L_7 = (Transform_1_t3414 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t3414 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t3408 *, ObjectU5BU5D_t178*, int32_t, Transform_1_t3414 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t3416  ValueCollection_GetEnumerator_m18923_gshared (ValueCollection_t3415 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		Enumerator_t3416  L_1 = {0};
		(( void (*) (Enumerator_t3416 *, Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m18924_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m18924_gshared (ValueCollection_t3415 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m18925_gshared (Enumerator_t3416 * __this, Dictionary_2_t3408 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t3408 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3413  L_1 = (( Enumerator_t3413  (*) (Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m18926_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m18926_gshared (Enumerator_t3416 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		Object_t * L_1 = (( Object_t * (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Object_t * L_2 = L_1;
		return ((Object_t *)L_2);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m18927_GenericMethod;
extern "C" void Enumerator_Dispose_m18927_gshared (Enumerator_t3416 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m18928_GenericMethod;
extern "C" bool Enumerator_MoveNext_m18928_gshared (Enumerator_t3416 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m18929_GenericMethod;
extern "C" Object_t * Enumerator_get_Current_m18929_gshared (Enumerator_t3416 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3409 * L_1 = &(L_0->___current_3);
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18930_gshared (Transform_1_t3407 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18931_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_Invoke_m18931_gshared (Transform_1_t3407 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18931((Transform_1_t3407 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18932_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18932_gshared (Transform_1_t3407 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18933_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_EndInvoke_m18933_gshared (Transform_1_t3407 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1610 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18934_gshared (Transform_1_t3417 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m18935_GenericMethod;
extern "C" KeyValuePair_2_t3409  Transform_1_Invoke_m18935_gshared (Transform_1_t3417 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m18935((Transform_1_t3417 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3409  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef KeyValuePair_2_t3409  (*FunctionPointerType) (Object_t * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t3409  (*FunctionPointerType) (Object_t * __this, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m18936_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m18936_gshared (Transform_1_t3417 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___key;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m18937_GenericMethod;
extern "C" KeyValuePair_2_t3409  Transform_1_EndInvoke_m18937_gshared (Transform_1_t3417 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t3409 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m18940_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m18940_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m18938_gshared (ShimEnumerator_t3418 * __this, Dictionary_2_t3408 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t3408 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t3413  L_1 = (( Enumerator_t3413  (*) (Dictionary_2_t3408 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m18939_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m18939_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m18940_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method)
{
	{
		Enumerator_t3413  L_0 = (__this->___host_enumerator_0);
		Enumerator_t3413  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1610  L_3 = (DictionaryEntry_t1610 )InterfaceFuncInvoker0< DictionaryEntry_t1610  >::Invoke(&IDictionaryEnumerator_get_Entry_m14602_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m18941_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m18941_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3409  V_0 = {0};
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3409  L_1 = (( KeyValuePair_2_t3409  (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m18942_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m18942_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method)
{
	KeyValuePair_2_t3409  V_0 = {0};
	{
		Enumerator_t3413 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t3409  L_1 = (( KeyValuePair_2_t3409  (*) (Enumerator_t3413 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		Object_t * L_2 = (( Object_t * (*) (KeyValuePair_2_t3409 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m18943_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m18943_gshared (ShimEnumerator_t3418 * __this, MethodInfo* method)
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



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m18946_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m18948_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::ToString()
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_gen_13MethodDeclarations.h"

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_15.h"
// System.Predicate`1<UnityEngine.UI.Text>
#include "mscorlib_System_Predicate_1_gen_18.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_16.h"
// System.Comparison`1<UnityEngine.UI.Text>
#include "mscorlib_System_Comparison_1_gen_17.h"
extern TypeInfo Text_t50_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4874_il2cpp_TypeInfo;
extern TypeInfo TextU5BU5D_t3420_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t3426_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4872_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4873_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t3428_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t3432_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t3433_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_15MethodDeclarations.h"
// System.Predicate`1<UnityEngine.UI.Text>
#include "mscorlib_System_Predicate_1_gen_18MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_38MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_16MethodDeclarations.h"
extern Il2CppType ICollection_1_t4874_0_0_0;
extern Il2CppType TextU5BU5D_t3420_0_0_0;
extern Il2CppType Enumerator_t3426_0_0_0;
extern Il2CppType IEnumerable_1_t4872_0_0_0;
extern Il2CppType IEnumerator_1_t4873_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t3428_0_0_0;
extern Il2CppType Predicate_1_t3432_0_0_0;
extern Il2CppType Comparer_1_t3433_0_0_0;
extern MethodInfo List_1_get_Item_m2634_MethodInfo;
extern MethodInfo List_1_set_Item_m18994_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38547_MethodInfo;
extern MethodInfo List_1_Add_m2636_MethodInfo;
extern MethodInfo List_1_Contains_m18974_MethodInfo;
extern MethodInfo List_1_IndexOf_m18980_MethodInfo;
extern MethodInfo List_1_Insert_m18983_MethodInfo;
extern MethodInfo List_1_Remove_m2637_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m38548_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m38549_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m38550_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m19026_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m19101_MethodInfo;
extern MethodInfo Enumerator__ctor_m19020_MethodInfo;
extern MethodInfo List_1_RemoveAt_m18986_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<UnityEngine.UI.Text>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<UnityEngine.UI.Text>(!!0[]&,System.Int32)
#define Array_Resize_TisText_t50_m34170(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t3420**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_16.h"
// Declaration System.Int32 System.Array::IndexOf<UnityEngine.UI.Text>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<UnityEngine.UI.Text>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisText_t50_m34172(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, TextU5BU5D_t3420*, Text_t50 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisText_t50_m34174(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t3420*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<UnityEngine.UI.Text>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisText_t50_m34182(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, TextU5BU5D_t3420*, int32_t, Comparison_1_t3435 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m2634_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m18994_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisText_t50_m34170_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m18982_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m18984_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m18970_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38547_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m18969_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m18979_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m2636_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m18974_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m18980_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m18983_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m2637_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m18968_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m18992_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m18993_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m38548_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m38549_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m38550_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m19026_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisText_t50_m34172_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m18977_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m18978_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m19101_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m19020_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m18981_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m18986_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m19107_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisText_t50_m34174_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisText_t50_m34182_GenericMethod;


// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Add(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Clear()
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Text>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Text>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Reverse()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Text>::ToArray()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Capacity()
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Count()
// T System.Collections.Generic.List`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Text>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Text>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Text>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_73.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3421_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Text>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_73MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t3421_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Text>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Text>(System.Int32)
#define Array_InternalArray__get_Item_TisText_t50_m34115(__this, p0, method) (( Text_t50 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18999_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisText_t50_m34115_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Text>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t3427_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5618_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.ILayoutElement>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5619_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.ILayoutElement>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5620_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ILayoutElement>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3422_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_74MethodDeclarations.h"

extern TypeInfo ILayoutElement_t478_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3422_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ILayoutElement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.ILayoutElement>(System.Int32)
#define Array_InternalArray__get_Item_TisILayoutElement_t478_m34126(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19004_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisILayoutElement_t478_m34126_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.ILayoutElement>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5621_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.ILayoutElement>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5622_il2cpp_TypeInfo;

// UnityEngine.UI.MaskableGraphic
#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.MaskableGraphic>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5623_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.MaskableGraphic>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5624_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.MaskableGraphic>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_75.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3423_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_75MethodDeclarations.h"

extern TypeInfo MaskableGraphic_t394_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3423_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.MaskableGraphic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.MaskableGraphic>(System.Int32)
#define Array_InternalArray__get_Item_TisMaskableGraphic_t394_m34137(__this, p0, method) (( MaskableGraphic_t394 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19009_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMaskableGraphic_t394_m34137_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.MaskableGraphic>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5625_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.MaskableGraphic>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5626_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.IMaskable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5627_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.IMaskable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5628_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.IMaskable>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_76.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3424_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_76MethodDeclarations.h"

extern TypeInfo IMaskable_t543_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3424_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.IMaskable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.IMaskable>(System.Int32)
#define Array_InternalArray__get_Item_TisIMaskable_t543_m34148(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19014_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIMaskable_t543_m34148_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.IMaskable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5629_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.IMaskable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t514_il2cpp_TypeInfo;

// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_Graphic.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.UI.Graphic>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t4883_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Graphic>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4884_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>::get_Current()
// System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_77.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3425_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_77MethodDeclarations.h"

extern TypeInfo Graphic_t376_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t3425_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Graphic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.UI.Graphic>(System.Int32)
#define Array_InternalArray__get_Item_TisGraphic_t376_m34159(__this, p0, method) (( Graphic_t376 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19019_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisGraphic_t376_m34159_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.UI.Graphic>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t384_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m19023_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Text>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_15MethodDeclarations.h"
extern Il2CppType IList_1_t3427_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m19055_MethodInfo;
extern MethodInfo IList_1_get_Item_m38551_MethodInfo;
extern MethodInfo ICollection_1_Contains_m38552_MethodInfo;
extern MethodInfo IList_1_IndexOf_m38553_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m19055_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m38551_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m19087_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m38552_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m38553_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_15.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t3429_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t3429_0_0_0;
extern Il2CppType Text_t50_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m38554_MethodInfo;
extern MethodInfo Collection_1_SetItem_m19086_MethodInfo;
extern MethodInfo List_1__ctor_m2630_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m19079_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m19077_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m19082_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m19073_MethodInfo;
extern MethodInfo ICollection_1_Clear_m38555_MethodInfo;
extern MethodInfo IList_1_Insert_m38556_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m38557_MethodInfo;
extern MethodInfo IList_1_set_Item_m38558_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m38554_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m19090_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m19091_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m19088_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m19086_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m2630_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m19079_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m19089_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m19077_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m19082_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m19073_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m38555_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m38556_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m38557_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m38558_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::get_Count()
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.UI.Text>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t3430_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_16MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_16.h"
extern TypeInfo DefaultComparer_t3431_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UI.Text>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_16MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t3430_0_0_0;
extern Il2CppType IEquatable_1_t5630_0_0_0;
extern Il2CppType DefaultComparer_t3431_0_0_0;
extern MethodInfo DefaultComparer__ctor_m19097_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m38559_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m34171_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m19097_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m38559_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m34171_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Text>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5631_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Text>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Text>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5630_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<UnityEngine.UI.Text>::Equals(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
