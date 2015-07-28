#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_92.h"
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
extern TypeInfo EqualityComparer_1_t4802_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_92MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_92.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Guid
#include "mscorlib_System_Guid.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4803_il2cpp_TypeInfo;
extern TypeInfo Guid_t1275_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_92MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4802_0_0_0;
extern Il2CppType IEquatable_1_t3036_0_0_0;
extern Il2CppType Guid_t1275_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t4803_0_0_0;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m32912_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39405_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m39406_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32912_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39405_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m39406_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m32907_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m32907_gshared (EqualityComparer_1_t4802 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m32908_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m32908_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4803 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4803 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4803 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4802_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32909_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32909_gshared (EqualityComparer_1_t4802 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t1275  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(Guid_t1275 *)((Guid_t1275 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32910_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32910_gshared (EqualityComparer_1_t4802 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Guid_t1275 , Guid_t1275  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(Guid_t1275 *)((Guid_t1275 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(Guid_t1275 *)((Guid_t1275 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m32911_GenericMethod;
extern "C" EqualityComparer_1_t4802 * EqualityComparer_1_get_Default_m32911_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4802 * L_0 = ((EqualityComparer_1_t4802_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6511_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo Object_t_il2cpp_TypeInfo;
extern MethodInfo Object_GetHashCode_m1072_MethodInfo;
extern MethodInfo Object_Equals_m1071_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m32912_gshared (DefaultComparer_t4803 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4802 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m32913_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m32913_gshared (DefaultComparer_t4803 * __this, Guid_t1275  ___obj, MethodInfo* method)
{
	{
		Guid_t1275  L_0 = ___obj;
		Guid_t1275  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m32914_GenericMethod;
extern "C" bool DefaultComparer_Equals_m32914_gshared (DefaultComparer_t4803 * __this, Guid_t1275  ___x, Guid_t1275  ___y, MethodInfo* method)
{
	{
		Guid_t1275  L_0 = ___x;
		Guid_t1275  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t1275  L_3 = ___y;
		Guid_t1275  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t1275  L_6 = ___y;
		Guid_t1275  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2584_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2MethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
extern TypeInfo TimeSpan_t868_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t3045_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_66MethodDeclarations.h"
extern Il2CppType IComparable_1_t3045_0_0_0;
extern MethodInfo IComparable_1_CompareTo_m39407_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m32916_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m39407_GenericMethod;


// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern Il2CppGenericMethod GenericComparer_1__ctor_m14735_GenericMethod;
extern "C" void GenericComparer_1__ctor_m14735_gshared (GenericComparer_1_t2584 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4804 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern Il2CppGenericMethod GenericComparer_1_Compare_m32915_GenericMethod;
extern "C" int32_t GenericComparer_1_Compare_m32915_gshared (GenericComparer_1_t2584 * __this, TimeSpan_t868  ___x, TimeSpan_t868  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t868  L_0 = ___x;
		TimeSpan_t868  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t868  L_3 = ___y;
		TimeSpan_t868  L_4 = L_3;
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
		TimeSpan_t868  L_6 = ___y;
		TimeSpan_t868  L_7 = L_6;
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
		TimeSpan_t868  L_9 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t868  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_9);
		return L_10;
	}
}
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_66.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t4804_il2cpp_TypeInfo;

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_66.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo DefaultComparer_t4805_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_66MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType Comparer_1_t4804_0_0_0;
extern Il2CppType TimeSpan_t868_0_0_0;
extern Il2CppType GenericComparer_1_t2830_0_0_0;
extern Il2CppType DefaultComparer_t4805_0_0_0;
extern MethodInfo DefaultComparer__ctor_m32920_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39408_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13771_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32920_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39408_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
extern "C" void Comparer_1__ctor_m32916_gshared (Comparer_1_t4804 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m32917_GenericMethod;
extern "C" void Comparer_1__cctor_m32917_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4805 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4805 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4805 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t4804_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m32918_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m32918_gshared (Comparer_1_t4804 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, TimeSpan_t868 , TimeSpan_t868  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(TimeSpan_t868 *)((TimeSpan_t868 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(TimeSpan_t868 *)((TimeSpan_t868 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_8, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m32919_GenericMethod;
extern "C" Comparer_1_t4804 * Comparer_1_get_Default_m32919_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t4804 * L_0 = ((Comparer_1_t4804_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t6512_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern MethodInfo IComparable_CompareTo_m14570_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m32920_gshared (DefaultComparer_t4805 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4804 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m32921_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m32921_gshared (DefaultComparer_t4805 * __this, TimeSpan_t868  ___x, TimeSpan_t868  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t868  L_0 = ___x;
		TimeSpan_t868  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t868  L_3 = ___y;
		TimeSpan_t868  L_4 = L_3;
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
		TimeSpan_t868  L_6 = ___y;
		TimeSpan_t868  L_7 = L_6;
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
		TimeSpan_t868  L_9 = ___x;
		TimeSpan_t868  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		TimeSpan_t868  L_12 = ___x;
		TimeSpan_t868  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		TimeSpan_t868  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t868  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		TimeSpan_t868  L_17 = ___x;
		TimeSpan_t868  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		TimeSpan_t868  L_20 = ___x;
		TimeSpan_t868  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		TimeSpan_t868  L_23 = ___y;
		TimeSpan_t868  L_24 = L_23;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2585_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"

extern TypeInfo IEquatable_1_t3046_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_93MethodDeclarations.h"
extern Il2CppType IEquatable_1_t3046_0_0_0;
extern MethodInfo IEquatable_1_Equals_m39409_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m32924_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m39409_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m14736_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m14736_gshared (GenericEqualityComparer_1_t2585 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4806 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m32922_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m32922_gshared (GenericEqualityComparer_1_t2585 * __this, TimeSpan_t868  ___obj, MethodInfo* method)
{
	{
		TimeSpan_t868  L_0 = ___obj;
		TimeSpan_t868  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m32923_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m32923_gshared (GenericEqualityComparer_1_t2585 * __this, TimeSpan_t868  ___x, TimeSpan_t868  ___y, MethodInfo* method)
{
	{
		TimeSpan_t868  L_0 = ___x;
		TimeSpan_t868  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t868  L_3 = ___y;
		TimeSpan_t868  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t868  L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, TimeSpan_t868  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_93.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4806_il2cpp_TypeInfo;

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_93.h"
extern TypeInfo DefaultComparer_t4807_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_93MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4806_0_0_0;
extern Il2CppType DefaultComparer_t4807_0_0_0;
extern MethodInfo DefaultComparer__ctor_m32929_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39410_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m39411_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32929_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39410_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m39411_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void EqualityComparer_1__ctor_m32924_gshared (EqualityComparer_1_t4806 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m32925_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m32925_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4807 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4807 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4807 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4806_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32926_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32926_gshared (EqualityComparer_1_t4806 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t868  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(TimeSpan_t868 *)((TimeSpan_t868 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32927_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32927_gshared (EqualityComparer_1_t4806 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, TimeSpan_t868 , TimeSpan_t868  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(TimeSpan_t868 *)((TimeSpan_t868 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(TimeSpan_t868 *)((TimeSpan_t868 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m32928_GenericMethod;
extern "C" EqualityComparer_1_t4806 * EqualityComparer_1_get_Default_m32928_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4806 * L_0 = ((EqualityComparer_1_t4806_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6513_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m32929_gshared (DefaultComparer_t4807 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4806 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m32930_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m32930_gshared (DefaultComparer_t4807 * __this, TimeSpan_t868  ___obj, MethodInfo* method)
{
	{
		TimeSpan_t868  L_0 = ___obj;
		TimeSpan_t868  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m32931_GenericMethod;
extern "C" bool DefaultComparer_Equals_m32931_gshared (DefaultComparer_t4807 * __this, TimeSpan_t868  ___x, TimeSpan_t868  ___y, MethodInfo* method)
{
	{
		TimeSpan_t868  L_0 = ___x;
		TimeSpan_t868  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t868  L_3 = ___y;
		TimeSpan_t868  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t868  L_6 = ___y;
		TimeSpan_t868  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3049_il2cpp_TypeInfo;

// System.Version
#include "mscorlib_System_Version.h"


// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3050_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
