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
extern TypeInfo IEnumerator_1_t6464_il2cpp_TypeInfo;

// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Array
#include "mscorlib_System_Array.h"

// T System.Collections.Generic.IEnumerator`1<System.Decimal>::get_Current()
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_325.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4771_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_325MethodDeclarations.h"

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
extern TypeInfo Decimal_t1261_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t4771_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m8811_MethodInfo;
extern MethodInfo Array_get_Length_m8815_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" Decimal_t1261  Array_InternalArray__get_Item_TisDecimal_t1261_m38147_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisDecimal_t1261_m38147(__this, p0, method) (( Decimal_t1261  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisDecimal_t1261_m38147_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32666_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisDecimal_t1261_m38147_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m32662_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m32662_gshared (InternalEnumerator_1_t4771 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32663_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32663_gshared (InternalEnumerator_1_t4771 * __this, MethodInfo* method)
{
	{
		Decimal_t1261  L_0 = (( Decimal_t1261  (*) (InternalEnumerator_1_t4771 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Decimal_t1261  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m32664_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m32664_gshared (InternalEnumerator_1_t4771 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m32665_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m32665_gshared (InternalEnumerator_1_t4771 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern "C" Decimal_t1261  InternalEnumerator_1_get_Current_m32666_gshared (InternalEnumerator_1_t4771 * __this, MethodInfo* method)
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
		Decimal_t1261  L_8 = (( Decimal_t1261  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6465_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Decimal>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6466_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Decimal>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6467_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Decimal>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Decimal>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6468_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6469_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6470_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_326.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4772_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_326MethodDeclarations.h"

extern TypeInfo IComparable_1_t2637_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4772_0_0_0;
extern Il2CppType IComparable_1_t2637_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m32943(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2637_m38158(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32671_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t2637_m38158_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6471_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6472_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6473_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6474_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_327.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4773_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_327MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2638_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4773_0_0_0;
extern Il2CppType IEquatable_1_t2638_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2638_m38169(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32676_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t2638_m38169_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6475_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6476_il2cpp_TypeInfo;

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"


// T System.Collections.Generic.IEnumerator`1<System.TimeSpan>::get_Current()
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_328.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4774_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_328MethodDeclarations.h"

extern TypeInfo TimeSpan_t868_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4774_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" TimeSpan_t868  Array_InternalArray__get_Item_TisTimeSpan_t868_m38180_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeSpan_t868_m38180(__this, p0, method) (( TimeSpan_t868  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisTimeSpan_t868_m38180_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32681_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTimeSpan_t868_m38180_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m32677_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m32677_gshared (InternalEnumerator_1_t4774 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32678_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m32678_gshared (InternalEnumerator_1_t4774 * __this, MethodInfo* method)
{
	{
		TimeSpan_t868  L_0 = (( TimeSpan_t868  (*) (InternalEnumerator_1_t4774 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TimeSpan_t868  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m32679_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m32679_gshared (InternalEnumerator_1_t4774 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m32680_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m32680_gshared (InternalEnumerator_1_t4774 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t868  InternalEnumerator_1_get_Current_m32681_gshared (InternalEnumerator_1_t4774 * __this, MethodInfo* method)
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
		TimeSpan_t868  L_8 = (( TimeSpan_t868  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6477_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.TimeSpan>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6478_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TimeSpan>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6479_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.TimeSpan>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TimeSpan>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6480_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6481_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6482_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3045_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T)
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_329.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4775_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_329MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4775_0_0_0;
extern Il2CppType IComparable_1_t3045_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t3045_m38191(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32686_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIComparable_1_t3045_m38191_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6483_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6484_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6485_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6486_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3046_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T)
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_330.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4776_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_330MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4776_0_0_0;
extern Il2CppType IEquatable_1_t3046_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t3046_m38202(__this, p0, method) (( Object_t* (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32691_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIEquatable_1_t3046_m38202_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6487_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6488_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_331.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4777_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_331MethodDeclarations.h"

extern TypeInfo TypeTag_t2340_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4777_0_0_0;
struct Array_t;
struct Array_t;
// System.Byte
#include "mscorlib_System_Byte.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte>(System.Int32)
extern "C" uint8_t Array_InternalArray__get_Item_TisByte_t535_m34942_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisByte_t535_m34942(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t535_m34942_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeTag_t2340_m38213(__this, p0, method) (( uint8_t (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisByte_t535_m34942_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32696_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTypeTag_t2340_m38213_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6489_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6490_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6491_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6492_il2cpp_TypeInfo;

// System.MonoType
#include "mscorlib_System_MonoType.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_332.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4778_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_332MethodDeclarations.h"

extern TypeInfo MonoType_t_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4778_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoType_t_m38224(__this, p0, method) (( MonoType_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32701_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisMonoType_t_m38224_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6493_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6494_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6495_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2413_il2cpp_TypeInfo;

// System.Security.Policy.StrongName
#include "mscorlib_System_Security_Policy_StrongName.h"


// System.Int32 System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5147_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5145_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5146_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_333.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4779_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_333MethodDeclarations.h"

extern TypeInfo StrongName_t2417_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4779_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Policy.StrongName>(System.Int32)
#define Array_InternalArray__get_Item_TisStrongName_t2417_m38235(__this, p0, method) (( StrongName_t2417 * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32706_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisStrongName_t2417_m38235_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Policy.StrongName>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6496_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IBuiltInEvidence>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6497_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Policy.IBuiltInEvidence>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6498_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Policy.IBuiltInEvidence>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_334.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4780_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_334MethodDeclarations.h"

extern TypeInfo IBuiltInEvidence_t3017_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4780_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Policy.IBuiltInEvidence>(System.Int32)
#define Array_InternalArray__get_Item_TisIBuiltInEvidence_t3017_m38246(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32711_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIBuiltInEvidence_t3017_m38246_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Policy.IBuiltInEvidence>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6499_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IBuiltInEvidence>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6500_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.IIdentityPermissionFactory>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t6501_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Policy.IIdentityPermissionFactory>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6502_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::get_Current()
// System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_335.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4781_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_335MethodDeclarations.h"

extern TypeInfo IIdentityPermissionFactory_t3018_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4781_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Policy.IIdentityPermissionFactory>(System.Int32)
#define Array_InternalArray__get_Item_TisIIdentityPermissionFactory_t3018_m38257(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m32716_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisIIdentityPermissionFactory_t3018_m38257_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Policy.IIdentityPermissionFactory>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6503_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.IIdentityPermissionFactory>::set_Item(System.Int32,T)
// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_gen_60.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t2577_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_gen_60MethodDeclarations.h"

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_61.h"
// System.Predicate`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Predicate_1_gen_62.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_62.h"
// System.Comparison`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Comparison_1_gen_62.h"
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t853_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2504_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo;
extern TypeInfo StrongNameU5BU5D_t4782_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4783_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4784_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4788_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4789_il2cpp_TypeInfo;
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_61MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Predicate`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Predicate_1_gen_62MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_61MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_62MethodDeclarations.h"
extern Il2CppType List_1_t2577_0_0_0;
extern Il2CppType ICollection_1_t5147_0_0_0;
extern Il2CppType StrongNameU5BU5D_t4782_0_0_0;
extern Il2CppType Enumerator_t4783_0_0_0;
extern Il2CppType IEnumerable_1_t5145_0_0_0;
extern Il2CppType IEnumerator_1_t5146_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4784_0_0_0;
extern Il2CppType Predicate_1_t4788_0_0_0;
extern Il2CppType Comparer_1_t4789_0_0_0;
extern MethodInfo List_1_get_Item_m32764_MethodInfo;
extern MethodInfo List_1_set_Item_m32765_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8994_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8819_MethodInfo;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39378_MethodInfo;
extern MethodInfo Array_Copy_m10846_MethodInfo;
extern MethodInfo List_1_Add_m32735_MethodInfo;
extern MethodInfo List_1_Contains_m32742_MethodInfo;
extern MethodInfo List_1_IndexOf_m32748_MethodInfo;
extern MethodInfo List_1_Insert_m32751_MethodInfo;
extern MethodInfo List_1_Remove_m32753_MethodInfo;
extern MethodInfo Math_Max_m10043_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39379_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39380_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39381_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4885_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m32772_MethodInfo;
extern MethodInfo Array_Clear_m10034_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m32847_MethodInfo;
extern MethodInfo Enumerator__ctor_m32766_MethodInfo;
extern MethodInfo List_1_RemoveAt_m32755_MethodInfo;
extern MethodInfo Array_Reverse_m10075_MethodInfo;
extern MethodInfo Array_Copy_m9034_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m33054_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m33054(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<System.Security.Policy.StrongName>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Security.Policy.StrongName>(!!0[]&,System.Int32)
#define Array_Resize_TisStrongName_t2417_m38268(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t4782**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_89.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14600_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14600(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Security.Policy.StrongName>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisStrongName_t2417_m38270(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t4782*, StrongName_t2417 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33123_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m33123(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisStrongName_t2417_m38272(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t4782*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
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
// Declaration System.Void System.Array::Sort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Security.Policy.StrongName>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisStrongName_t2417_m38280(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, StrongNameU5BU5D_t4782*, int32_t, Comparison_1_t4791 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m32764_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m32765_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisStrongName_t2417_m38268_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m32750_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m32752_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m32738_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39378_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m32737_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m32747_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m32735_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m32742_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m32748_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m32751_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m32753_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m32736_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m32761_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m32762_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39379_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39380_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39381_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m32772_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisStrongName_t2417_m38270_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m32745_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m32746_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m32847_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m32766_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m32749_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m32755_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m32853_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisStrongName_t2417_m38272_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisStrongName_t2417_m38280_GenericMethod;


// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
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
extern Il2CppGenericMethod Enumerator_VerifyState_m32769_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>::get_Current()
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
// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_61MethodDeclarations.h"
extern Il2CppType IList_1_t2413_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m32801_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;
extern MethodInfo IList_1_get_Item_m39382_MethodInfo;
extern MethodInfo ICollection_CopyTo_m8807_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39383_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39384_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m32801_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m39382_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m32833_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39383_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39384_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_61.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4785_il2cpp_TypeInfo;

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo IList_t1352_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t4785_0_0_0;
extern Il2CppType StrongName_t2417_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39385_MethodInfo;
extern MethodInfo Collection_1_SetItem_m32832_MethodInfo;
extern MethodInfo List_1__ctor_m32717_MethodInfo;
extern MethodInfo ICollection_get_SyncRoot_m14599_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m32825_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m32823_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m32828_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m32819_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39386_MethodInfo;
extern MethodInfo IList_1_Insert_m39387_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39388_MethodInfo;
extern MethodInfo IList_1_set_Item_m39389_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10897_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14878_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14879_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39385_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m32836_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m32837_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m32834_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m32832_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m32717_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m32825_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m32835_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m32823_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m32828_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m32819_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39386_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39387_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39388_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39389_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Count()
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Security.Policy.StrongName>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4786_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_89MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_89.h"
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4787_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_89MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4786_0_0_0;
extern Il2CppType IEquatable_1_t6504_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t4787_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m32843_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39390_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m38269_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32843_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39390_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m38269_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Security.Policy.StrongName>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6505_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Security.Policy.StrongName>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Security.Policy.StrongName>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t6504_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Security.Policy.StrongName>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Object_GetHashCode_m1072_MethodInfo;
extern MethodInfo Object_Equals_m1071_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m32838_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Security.Policy.StrongName>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Predicate`1<System.Security.Policy.StrongName>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::Invoke(T)
// System.IAsyncResult System.Predicate`1<System.Security.Policy.StrongName>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<System.Security.Policy.StrongName>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_62.h"
extern TypeInfo DefaultComparer_t4790_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_62MethodDeclarations.h"
extern Il2CppType IComparable_1_t5369_0_0_0;
extern Il2CppType GenericComparer_1_t2830_0_0_0;
extern Il2CppType DefaultComparer_t4790_0_0_0;
extern MethodInfo DefaultComparer__ctor_m32854_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39391_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13771_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32854_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39391_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Security.Policy.StrongName>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5368_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Security.Policy.StrongName>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5369_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Security.Policy.StrongName>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m38278_MethodInfo;
extern MethodInfo IComparable_CompareTo_m14570_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m32850_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m38278_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Security.Policy.StrongName>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4791_il2cpp_TypeInfo;
// System.Comparison`1<System.Security.Policy.StrongName>
#include "mscorlib_System_Comparison_1_gen_62MethodDeclarations.h"



// System.Void System.Comparison`1<System.Security.Policy.StrongName>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<System.Security.Policy.StrongName>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<System.Security.Policy.StrongName>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<System.Security.Policy.StrongName>::EndInvoke(System.IAsyncResult)
// System.Collections.Generic.GenericComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2578_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_genMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
extern TypeInfo DateTime_t700_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t3026_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_63MethodDeclarations.h"
extern Il2CppType IComparable_1_t3026_0_0_0;
extern MethodInfo IComparable_1_CompareTo_m39392_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m32861_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m39392_GenericMethod;


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern Il2CppGenericMethod GenericComparer_1__ctor_m14711_GenericMethod;
extern "C" void GenericComparer_1__ctor_m14711_gshared (GenericComparer_1_t2578 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4792 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern Il2CppGenericMethod GenericComparer_1_Compare_m32860_GenericMethod;
extern "C" int32_t GenericComparer_1_Compare_m32860_gshared (GenericComparer_1_t2578 * __this, DateTime_t700  ___x, DateTime_t700  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		DateTime_t700  L_0 = ___x;
		DateTime_t700  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DateTime_t700  L_3 = ___y;
		DateTime_t700  L_4 = L_3;
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
		DateTime_t700  L_6 = ___y;
		DateTime_t700  L_7 = L_6;
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
		DateTime_t700  L_9 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTime_t700  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_9);
		return L_10;
	}
}
// System.Collections.Generic.Comparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_63.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t4792_il2cpp_TypeInfo;

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_63.h"
extern TypeInfo DefaultComparer_t4793_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_63MethodDeclarations.h"
extern Il2CppType Comparer_1_t4792_0_0_0;
extern Il2CppType DateTime_t700_0_0_0;
extern Il2CppType DefaultComparer_t4793_0_0_0;
extern MethodInfo DefaultComparer__ctor_m32865_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39393_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32865_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39393_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.ctor()
extern "C" void Comparer_1__ctor_m32861_gshared (Comparer_1_t4792 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m32862_GenericMethod;
extern "C" void Comparer_1__cctor_m32862_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4793 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4793 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4793 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t4792_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m32863_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m32863_gshared (Comparer_1_t4792 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, DateTime_t700 , DateTime_t700  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(DateTime_t700 *)((DateTime_t700 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(DateTime_t700 *)((DateTime_t700 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_8, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTime>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m32864_GenericMethod;
extern "C" Comparer_1_t4792 * Comparer_1_get_Default_m32864_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t4792 * L_0 = ((Comparer_1_t4792_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t6506_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.DateTime>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m32865_gshared (DefaultComparer_t4793 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4792 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m32866_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m32866_gshared (DefaultComparer_t4793 * __this, DateTime_t700  ___x, DateTime_t700  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		DateTime_t700  L_0 = ___x;
		DateTime_t700  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DateTime_t700  L_3 = ___y;
		DateTime_t700  L_4 = L_3;
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
		DateTime_t700  L_6 = ___y;
		DateTime_t700  L_7 = L_6;
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
		DateTime_t700  L_9 = ___x;
		DateTime_t700  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		DateTime_t700  L_12 = ___x;
		DateTime_t700  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		DateTime_t700  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTime_t700  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		DateTime_t700  L_17 = ___x;
		DateTime_t700  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		DateTime_t700  L_20 = ___x;
		DateTime_t700  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		DateTime_t700  L_23 = ___y;
		DateTime_t700  L_24 = L_23;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2579_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_MethodDeclarations.h"

extern TypeInfo IEquatable_1_t3027_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_90MethodDeclarations.h"
extern Il2CppType IEquatable_1_t3027_0_0_0;
extern MethodInfo IEquatable_1_Equals_m39394_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m32869_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m39394_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m14712_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m14712_gshared (GenericEqualityComparer_1_t2579 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4794 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m32867_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m32867_gshared (GenericEqualityComparer_1_t2579 * __this, DateTime_t700  ___obj, MethodInfo* method)
{
	{
		DateTime_t700  L_0 = ___obj;
		DateTime_t700  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m32868_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m32868_gshared (GenericEqualityComparer_1_t2579 * __this, DateTime_t700  ___x, DateTime_t700  ___y, MethodInfo* method)
{
	{
		DateTime_t700  L_0 = ___x;
		DateTime_t700  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DateTime_t700  L_3 = ___y;
		DateTime_t700  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTime_t700  L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, DateTime_t700  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_90.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4794_il2cpp_TypeInfo;

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_90.h"
extern TypeInfo DefaultComparer_t4795_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_90MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4794_0_0_0;
extern Il2CppType DefaultComparer_t4795_0_0_0;
extern MethodInfo DefaultComparer__ctor_m32874_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39395_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m39396_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32874_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39395_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m39396_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
extern "C" void EqualityComparer_1__ctor_m32869_gshared (EqualityComparer_1_t4794 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m32870_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m32870_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4795 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4795 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4795 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4794_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32871_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32871_gshared (EqualityComparer_1_t4794 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DateTime_t700  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(DateTime_t700 *)((DateTime_t700 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32872_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32872_gshared (EqualityComparer_1_t4794 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, DateTime_t700 , DateTime_t700  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(DateTime_t700 *)((DateTime_t700 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(DateTime_t700 *)((DateTime_t700 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m32873_GenericMethod;
extern "C" EqualityComparer_1_t4794 * EqualityComparer_1_get_Default_m32873_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4794 * L_0 = ((EqualityComparer_1_t4794_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6507_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTime>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m32874_gshared (DefaultComparer_t4795 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4794 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m32875_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m32875_gshared (DefaultComparer_t4795 * __this, DateTime_t700  ___obj, MethodInfo* method)
{
	{
		DateTime_t700  L_0 = ___obj;
		DateTime_t700  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m32876_GenericMethod;
extern "C" bool DefaultComparer_Equals_m32876_gshared (DefaultComparer_t4795 * __this, DateTime_t700  ___x, DateTime_t700  ___y, MethodInfo* method)
{
	{
		DateTime_t700  L_0 = ___x;
		DateTime_t700  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DateTime_t700  L_3 = ___y;
		DateTime_t700  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTime_t700  L_6 = ___y;
		DateTime_t700  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3028_il2cpp_TypeInfo;

// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"


// System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3029_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T)
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2580_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0MethodDeclarations.h"

extern TypeInfo DateTimeOffset_t1274_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_64MethodDeclarations.h"
extern Il2CppType IComparable_1_t3028_0_0_0;
extern MethodInfo IComparable_1_CompareTo_m39397_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m32878_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m39397_GenericMethod;


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern Il2CppGenericMethod GenericComparer_1__ctor_m14714_GenericMethod;
extern "C" void GenericComparer_1__ctor_m14714_gshared (GenericComparer_1_t2580 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4796 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern Il2CppGenericMethod GenericComparer_1_Compare_m32877_GenericMethod;
extern "C" int32_t GenericComparer_1_Compare_m32877_gshared (GenericComparer_1_t2580 * __this, DateTimeOffset_t1274  ___x, DateTimeOffset_t1274  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t1274  L_0 = ___x;
		DateTimeOffset_t1274  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t1274  L_3 = ___y;
		DateTimeOffset_t1274  L_4 = L_3;
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
		DateTimeOffset_t1274  L_6 = ___y;
		DateTimeOffset_t1274  L_7 = L_6;
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
		DateTimeOffset_t1274  L_9 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t1274  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_9);
		return L_10;
	}
}
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_64.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t4796_il2cpp_TypeInfo;

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_64.h"
extern TypeInfo DefaultComparer_t4797_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_64MethodDeclarations.h"
extern Il2CppType Comparer_1_t4796_0_0_0;
extern Il2CppType DateTimeOffset_t1274_0_0_0;
extern Il2CppType DefaultComparer_t4797_0_0_0;
extern MethodInfo DefaultComparer__ctor_m32882_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39398_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32882_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39398_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
extern "C" void Comparer_1__ctor_m32878_gshared (Comparer_1_t4796 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m32879_GenericMethod;
extern "C" void Comparer_1__cctor_m32879_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4797 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4797 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4797 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t4796_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m32880_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m32880_gshared (Comparer_1_t4796 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, DateTimeOffset_t1274 , DateTimeOffset_t1274  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(DateTimeOffset_t1274 *)((DateTimeOffset_t1274 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(DateTimeOffset_t1274 *)((DateTimeOffset_t1274 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_8, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m32881_GenericMethod;
extern "C" Comparer_1_t4796 * Comparer_1_get_Default_m32881_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t4796 * L_0 = ((Comparer_1_t4796_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t6508_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.DateTimeOffset>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m32882_gshared (DefaultComparer_t4797 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4796 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m32883_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m32883_gshared (DefaultComparer_t4797 * __this, DateTimeOffset_t1274  ___x, DateTimeOffset_t1274  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t1274  L_0 = ___x;
		DateTimeOffset_t1274  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t1274  L_3 = ___y;
		DateTimeOffset_t1274  L_4 = L_3;
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
		DateTimeOffset_t1274  L_6 = ___y;
		DateTimeOffset_t1274  L_7 = L_6;
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
		DateTimeOffset_t1274  L_9 = ___x;
		DateTimeOffset_t1274  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		DateTimeOffset_t1274  L_12 = ___x;
		DateTimeOffset_t1274  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		DateTimeOffset_t1274  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t1274  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		DateTimeOffset_t1274  L_17 = ___x;
		DateTimeOffset_t1274  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		DateTimeOffset_t1274  L_20 = ___x;
		DateTimeOffset_t1274  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		DateTimeOffset_t1274  L_23 = ___y;
		DateTimeOffset_t1274  L_24 = L_23;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2581_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__0MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_91MethodDeclarations.h"
extern Il2CppType IEquatable_1_t3029_0_0_0;
extern MethodInfo IEquatable_1_Equals_m39399_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m32886_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m39399_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m14715_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m14715_gshared (GenericEqualityComparer_1_t2581 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4798 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m32884_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m32884_gshared (GenericEqualityComparer_1_t2581 * __this, DateTimeOffset_t1274  ___obj, MethodInfo* method)
{
	{
		DateTimeOffset_t1274  L_0 = ___obj;
		DateTimeOffset_t1274  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m32885_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m32885_gshared (GenericEqualityComparer_1_t2581 * __this, DateTimeOffset_t1274  ___x, DateTimeOffset_t1274  ___y, MethodInfo* method)
{
	{
		DateTimeOffset_t1274  L_0 = ___x;
		DateTimeOffset_t1274  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t1274  L_3 = ___y;
		DateTimeOffset_t1274  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTimeOffset_t1274  L_6 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, DateTimeOffset_t1274  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_91.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4798_il2cpp_TypeInfo;

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_91.h"
extern TypeInfo DefaultComparer_t4799_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_91MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4798_0_0_0;
extern Il2CppType DefaultComparer_t4799_0_0_0;
extern MethodInfo DefaultComparer__ctor_m32891_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39400_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m39401_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32891_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39400_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m39401_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void EqualityComparer_1__ctor_m32886_gshared (EqualityComparer_1_t4798 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m32887_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m32887_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4799 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4799 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4799 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4798_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32888_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m32888_gshared (EqualityComparer_1_t4798 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DateTimeOffset_t1274  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(DateTimeOffset_t1274 *)((DateTimeOffset_t1274 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32889_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m32889_gshared (EqualityComparer_1_t4798 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, DateTimeOffset_t1274 , DateTimeOffset_t1274  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(DateTimeOffset_t1274 *)((DateTimeOffset_t1274 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(DateTimeOffset_t1274 *)((DateTimeOffset_t1274 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m32890_GenericMethod;
extern "C" EqualityComparer_1_t4798 * EqualityComparer_1_get_Default_m32890_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4798 * L_0 = ((EqualityComparer_1_t4798_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t6509_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m32891_gshared (DefaultComparer_t4799 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4798 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m32892_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m32892_gshared (DefaultComparer_t4799 * __this, DateTimeOffset_t1274  ___obj, MethodInfo* method)
{
	{
		DateTimeOffset_t1274  L_0 = ___obj;
		DateTimeOffset_t1274  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m32893_GenericMethod;
extern "C" bool DefaultComparer_Equals_m32893_gshared (DefaultComparer_t4799 * __this, DateTimeOffset_t1274  ___x, DateTimeOffset_t1274  ___y, MethodInfo* method)
{
	{
		DateTimeOffset_t1274  L_0 = ___x;
		DateTimeOffset_t1274  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t1274  L_3 = ___y;
		DateTimeOffset_t1274  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTimeOffset_t1274  L_6 = ___y;
		DateTimeOffset_t1274  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Nullable_1_t2484_il2cpp_TypeInfo;
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"

// System.ValueType
#include "mscorlib_System_ValueType.h"
extern TypeInfo ValueType_t248_il2cpp_TypeInfo;
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern Il2CppType Nullable_1_t2484_0_0_0;
extern MethodInfo ValueType_Equals_m1074_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1075_MethodInfo;
extern MethodInfo ValueType_ToString_m1076_MethodInfo;
extern Il2CppGenericMethod Nullable_1_Equals_m32895_GenericMethod;


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern Il2CppGenericMethod Nullable_1__ctor_m14716_GenericMethod;
extern "C" void Nullable_1__ctor_m14716 (Nullable_1_t2484 * __this, TimeSpan_t868  ___value, MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		TimeSpan_t868  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern Il2CppGenericMethod Nullable_1_get_HasValue_m14722_GenericMethod;
extern "C" bool Nullable_1_get_HasValue_m14722 (Nullable_1_t2484 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern Il2CppGenericMethod Nullable_1_get_Value_m14723_GenericMethod;
extern "C" TimeSpan_t868  Nullable_1_get_Value_m14723 (Nullable_1_t2484 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___has_value_1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1784 * L_1 = (InvalidOperationException_t1784 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1784_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m8811(L_1, (String_t*) &_stringLiteral1486, /*hidden argument*/&InvalidOperationException__ctor_m8811_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		TimeSpan_t868  L_2 = (__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern Il2CppGenericMethod Nullable_1_Equals_m32894_GenericMethod;
extern TypeInfo* Nullable_1_t2484_il2cpp_TypeInfo_var;
extern MethodInfo* Nullable_1_Equals_m32895_MethodInfo_var;
extern "C" bool Nullable_1_Equals_m32894 (Nullable_1_t2484 * __this, Object_t * ___other, MethodInfo* method)
{
	static bool Nullable_1_Equals_m32894_init;
	if (!Nullable_1_Equals_m32894_init)
	{
		Nullable_1_t2484_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Nullable_1_t2484_0_0_0);
		Nullable_1_Equals_m32895_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Nullable_1_Equals_m32895_GenericMethod);
		Nullable_1_Equals_m32894_init = true;
	}
	{
		Object_t * L_0 = ___other;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = (__this->___has_value_1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		Object_t * L_2 = ___other;
		if (((Object_t *)IsInst(L_2, Nullable_1_t2484_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		Object_t * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t2484 ));
		UnBoxNullable(L_3, Nullable_1_t2484_il2cpp_TypeInfo_var, L_4);
		bool L_5 = Nullable_1_Equals_m32895(__this, ((*(Nullable_1_t2484 *)((Nullable_1_t2484 *)L_4))), /*hidden argument*/Nullable_1_Equals_m32895_MethodInfo_var);
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m32895 (Nullable_1_t2484 * __this, Nullable_1_t2484  ___other, MethodInfo* method)
{
	{
		bool L_0 = ((&___other)->___has_value_1);
		bool L_1 = (__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (__this->___has_value_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		TimeSpan_t868 * L_3 = &((&___other)->___value_0);
		TimeSpan_t868  L_4 = (__this->___value_0);
		TimeSpan_t868  L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&TimeSpan_t868_il2cpp_TypeInfo), &L_5);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t868_il2cpp_TypeInfo), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m1074_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t868_il2cpp_TypeInfo), L_3), L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern Il2CppGenericMethod Nullable_1_GetHashCode_m32896_GenericMethod;
extern "C" int32_t Nullable_1_GetHashCode_m32896 (Nullable_1_t2484 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___has_value_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		TimeSpan_t868 * L_1 = &(__this->___value_0);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t868_il2cpp_TypeInfo), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ValueType_GetHashCode_m1075_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t868_il2cpp_TypeInfo), L_1));
		return L_2;
	}
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern Il2CppGenericMethod Nullable_1_ToString_m32897_GenericMethod;
extern "C" String_t* Nullable_1_ToString_m32897 (Nullable_1_t2484 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TimeSpan_t868 * L_1 = &(__this->___value_0);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t868_il2cpp_TypeInfo), L_1));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ValueType_ToString_m1076_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t868_il2cpp_TypeInfo), L_1));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3030_il2cpp_TypeInfo;

// System.SByte
#include "mscorlib_System_SByte.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.SByte>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3031_il2cpp_TypeInfo;

// System.Int16
#include "mscorlib_System_Int16.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.Int16>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t3033_il2cpp_TypeInfo;

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.Int64>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t3035_il2cpp_TypeInfo;

// System.Guid
#include "mscorlib_System_Guid.h"


// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t3036_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2582_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1MethodDeclarations.h"

extern TypeInfo Guid_t1275_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_65MethodDeclarations.h"
extern Il2CppType IComparable_1_t3035_0_0_0;
extern MethodInfo IComparable_1_CompareTo_m39402_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m32899_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m39402_GenericMethod;


// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern Il2CppGenericMethod GenericComparer_1__ctor_m14724_GenericMethod;
extern "C" void GenericComparer_1__ctor_m14724_gshared (GenericComparer_1_t2582 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4800 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern Il2CppGenericMethod GenericComparer_1_Compare_m32898_GenericMethod;
extern "C" int32_t GenericComparer_1_Compare_m32898_gshared (GenericComparer_1_t2582 * __this, Guid_t1275  ___x, Guid_t1275  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Guid_t1275  L_0 = ___x;
		Guid_t1275  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t1275  L_3 = ___y;
		Guid_t1275  L_4 = L_3;
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
		Guid_t1275  L_6 = ___y;
		Guid_t1275  L_7 = L_6;
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
		Guid_t1275  L_9 = ___y;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t1275  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_9);
		return L_10;
	}
}
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_65.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t4800_il2cpp_TypeInfo;

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_65.h"
extern TypeInfo DefaultComparer_t4801_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_65MethodDeclarations.h"
extern Il2CppType Comparer_1_t4800_0_0_0;
extern Il2CppType Guid_t1275_0_0_0;
extern Il2CppType DefaultComparer_t4801_0_0_0;
extern MethodInfo DefaultComparer__ctor_m32903_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39403_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m32903_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39403_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
extern "C" void Comparer_1__ctor_m32899_gshared (Comparer_1_t4800 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m32900_GenericMethod;
extern "C" void Comparer_1__cctor_m32900_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4801 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4801 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4801 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t4800_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m32901_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m32901_gshared (Comparer_1_t4800 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Guid_t1275 , Guid_t1275  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(Guid_t1275 *)((Guid_t1275 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(Guid_t1275 *)((Guid_t1275 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_8, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern Il2CppGenericMethod Comparer_1_get_Default_m32902_GenericMethod;
extern "C" Comparer_1_t4800 * Comparer_1_get_Default_m32902_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t4800 * L_0 = ((Comparer_1_t4800_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t6510_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m32903_gshared (DefaultComparer_t4801 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4800 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m32904_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m32904_gshared (DefaultComparer_t4801 * __this, Guid_t1275  ___x, Guid_t1275  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Guid_t1275  L_0 = ___x;
		Guid_t1275  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t1275  L_3 = ___y;
		Guid_t1275  L_4 = L_3;
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
		Guid_t1275  L_6 = ___y;
		Guid_t1275  L_7 = L_6;
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
		Guid_t1275  L_9 = ___x;
		Guid_t1275  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		Guid_t1275  L_12 = ___x;
		Guid_t1275  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		Guid_t1275  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t1275  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		Guid_t1275  L_17 = ___x;
		Guid_t1275  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Guid_t1275  L_20 = ___x;
		Guid_t1275  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		Guid_t1275  L_23 = ___y;
		Guid_t1275  L_24 = L_23;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2583_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_92MethodDeclarations.h"
extern Il2CppType IEquatable_1_t3036_0_0_0;
extern MethodInfo IEquatable_1_Equals_m39404_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m32907_GenericMethod;
extern Il2CppGenericMethod IEquatable_1_Equals_m39404_GenericMethod;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m14725_GenericMethod;
extern "C" void GenericEqualityComparer_1__ctor_m14725_gshared (GenericEqualityComparer_1_t2583 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4802 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m32905_GenericMethod;
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m32905_gshared (GenericEqualityComparer_1_t2583 * __this, Guid_t1275  ___obj, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m32906_GenericMethod;
extern "C" bool GenericEqualityComparer_1_Equals_m32906_gshared (GenericEqualityComparer_1_t2583 * __this, Guid_t1275  ___x, Guid_t1275  ___y, MethodInfo* method)
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
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, Guid_t1275  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_6);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
