#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_52.h"
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
extern TypeInfo DefaultComparer_t4050_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_52MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo TrackableResultData_t710_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_52MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Object_GetHashCode_m1072_MethodInfo;
extern MethodInfo Object_Equals_m1071_MethodInfo;
extern Il2CppGenericMethod EqualityComparer_1__ctor_m25775_GenericMethod;

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/TrackableResultData>::.ctor()
extern Il2CppGenericMethod DefaultComparer__ctor_m25780_GenericMethod;
extern "C" void DefaultComparer__ctor_m25780_gshared (DefaultComparer_t4050 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4049 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/TrackableResultData>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m25781_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m25781_gshared (DefaultComparer_t4050 * __this, TrackableResultData_t710  ___obj, MethodInfo* method)
{
	{
		TrackableResultData_t710  L_0 = ___obj;
		TrackableResultData_t710  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/TrackableResultData>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m25782_GenericMethod;
extern "C" bool DefaultComparer_Equals_m25782_gshared (DefaultComparer_t4050 * __this, TrackableResultData_t710  ___x, TrackableResultData_t710  ___y, MethodInfo* method)
{
	{
		TrackableResultData_t710  L_0 = ___x;
		TrackableResultData_t710  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TrackableResultData_t710  L_3 = ___y;
		TrackableResultData_t710  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TrackableResultData_t710  L_6 = ___y;
		TrackableResultData_t710  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t920_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_18MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_46.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_51.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
#include "Qualcomm.Vuforia.UnityExtensions_ArrayTypes.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundException.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_110.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_111.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_22.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_53.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
extern TypeInfo VirtualButtonData_t711_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1252_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t3318_il2cpp_TypeInfo;
extern TypeInfo Link_t2110_il2cpp_TypeInfo;
extern TypeInfo KeyNotFoundException_t2111_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t4056_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t4060_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5917_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5918_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5003_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t4053_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_t74_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t5002_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo;
extern TypeInfo DictionaryEntry_t1610_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4052_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4063_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4058_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t4064_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1256_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t3140_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t34_il2cpp_TypeInfo;
extern TypeInfo LinkU5BU5D_t2900_il2cpp_TypeInfo;
extern TypeInfo VirtualButtonDataU5BU5D_t4051_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t534_il2cpp_TypeInfo;
extern TypeInfo Hashtable_t1603_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t4065_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t5919_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Collections.Generic.KeyNotFoundException
#include "mscorlib_System_Collections_Generic_KeyNotFoundExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_46MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_51MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_110MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_111MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_22MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_2MethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_53MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
extern Il2CppType Dictionary_2_t920_0_0_0;
extern Il2CppType IEqualityComparer_1_t3318_0_0_0;
extern Il2CppType KeyCollection_t4056_0_0_0;
extern Il2CppType ValueCollection_t4060_0_0_0;
extern Il2CppType ICollection_1_t5917_0_0_0;
extern Il2CppType IEnumerable_1_t5918_0_0_0;
extern Il2CppType IEnumerator_1_t5003_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t5002_0_0_0;
extern Il2CppType KeyValuePair_2_t4053_0_0_0;
extern Il2CppType DictionaryEntryU5BU5D_t5178_0_0_0;
extern Il2CppType Transform_1_t4052_0_0_0;
extern Il2CppType Transform_1_t4063_0_0_0;
extern Il2CppType Enumerator_t4058_0_0_0;
extern Il2CppType ShimEnumerator_t4064_0_0_0;
extern Il2CppType EqualityComparer_1_t3140_0_0_0;
extern Il2CppType Int32U5BU5D_t34_0_0_0;
extern Il2CppType LinkU5BU5D_t2900_0_0_0;
extern Il2CppType VirtualButtonDataU5BU5D_t4051_0_0_0;
extern Il2CppType EqualityComparer_1_t4065_0_0_0;
extern Il2CppType IEqualityComparer_1_t5919_0_0_0;
extern Il2CppType Int32_t96_0_0_0;
extern Il2CppType VirtualButtonData_t711_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m25818_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m25807_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m25808_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m7344_MethodInfo;
extern MethodInfo IEqualityComparer_1_GetHashCode_m38489_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m38490_MethodInfo;
extern MethodInfo KeyNotFoundException__ctor_m11463_MethodInfo;
extern MethodInfo KeyCollection__ctor_m25846_MethodInfo;
extern MethodInfo ValueCollection__ctor_m25881_MethodInfo;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m38999_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39000_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39001_MethodInfo;
extern MethodInfo Dictionary_2_Add_m5467_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m4885_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m25822_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m25829_MethodInfo;
extern MethodInfo Transform_1__ctor_m25904_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m25812_MethodInfo;
extern MethodInfo Transform_1__ctor_m25908_MethodInfo;
extern MethodInfo Enumerator__ctor_m25865_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m25912_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8819_MethodInfo;
extern MethodInfo Array_get_Length_m8815_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2930_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m25806_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m25830_MethodInfo;
extern MethodInfo Hashtable_ToPrime_m11630_MethodInfo;
extern MethodInfo Array_Copy_m10846_MethodInfo;
extern MethodInfo Array_Clear_m10034_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m39002_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8828_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8841_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m8840_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m8829_MethodInfo;
extern MethodInfo Type_ToString_m10928_MethodInfo;
extern MethodInfo String_Concat_m731_MethodInfo;
extern MethodInfo ArgumentException__ctor_m8817_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10897_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m5472_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m39003_MethodInfo;
extern MethodInfo DictionaryEntry__ctor_m8812_MethodInfo;
struct Dictionary_2_t920;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m35923 (Dictionary_2_t920 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t4052 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t920;
// System.Exception
#include "mscorlib_System_Exception.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4053_m35925_gshared (Dictionary_2_t920 * __this, Array_t * p0, int32_t p1, Transform_1_t4063 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4053_m35925(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, Transform_1_t4063 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4053_m35925_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t920;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4053_TisKeyValuePair_2_t4053_m35926 (Dictionary_2_t920 * __this, KeyValuePair_2U5BU5D_t5002* p0, int32_t p1, Transform_1_t4063 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m25823_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m25824_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m25818_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m25825_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m25807_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m25826_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m25808_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m38489_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m38490_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m25816_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m25846_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m25881_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m25809_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m25786_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m38999_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39000_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39001_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m25831_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m25833_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m5467_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m25822_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m25827_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m25815_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m25811_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m25829_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25904_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m35923_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m25812_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25908_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4053_m35925_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25865_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m25912_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m16089_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m25810_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m25806_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m25830_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4053_TisKeyValuePair_2_t4053_m35926_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m25922_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m39002_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m5472_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m39003_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor()
extern Il2CppGenericMethod Dictionary_2__ctor_m5466_GenericMethod;
extern "C" void Dictionary_2__ctor_m5466_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		(( void (*) (Dictionary_2_t920 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern Il2CppGenericMethod Dictionary_2__ctor_m25783_GenericMethod;
extern "C" void Dictionary_2__ctor_m25783_gshared (Dictionary_2_t920 * __this, Object_t* ___comparer, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___comparer;
		(( void (*) (Dictionary_2_t920 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, ((int32_t)10), L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2__ctor_m25784_GenericMethod;
extern "C" void Dictionary_2__ctor_m25784_gshared (Dictionary_2_t920 * __this, Object_t* ___dictionary, MethodInfo* method)
{
	{
		Object_t* L_0 = ___dictionary;
		(( void (*) (Dictionary_2_t920 *, Object_t*, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Int32)
extern Il2CppGenericMethod Dictionary_2__ctor_m25785_GenericMethod;
extern "C" void Dictionary_2__ctor_m25785_gshared (Dictionary_2_t920 * __this, int32_t ___capacity, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		int32_t L_0 = ___capacity;
		(( void (*) (Dictionary_2_t920 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, (Object_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25786_gshared (Dictionary_2_t920 * __this, Object_t* ___dictionary, Object_t* ___comparer, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_t4053  V_1 = {0};
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
		(( void (*) (Dictionary_2_t920 *, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
			KeyValuePair_2_t4053  L_9 = (KeyValuePair_2_t4053 )InterfaceFuncInvoker0< KeyValuePair_2_t4053  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			V_1 = L_9;
			int32_t L_10 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
			VirtualButtonData_t711  L_11 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
			VirtActionInvoker2< int32_t, VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_10, L_11);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2__ctor_m25787_GenericMethod;
extern "C" void Dictionary_2__ctor_m25787_gshared (Dictionary_2_t920 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		SerializationInfo_t1208 * L_0 = ___info;
		__this->___serialization_info_13 = L_0;
		return;
	}
}
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25788_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25788_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		KeyCollection_t4056 * L_0 = (( KeyCollection_t4056 * (*) (Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return L_0;
	}
}
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25789_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25789_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		ValueCollection_t4060 * L_0 = (( ValueCollection_t4060 * (*) (Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return L_0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionary.get_Item(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_get_Item_m25790_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25790_gshared (Dictionary_2_t920 * __this, Object_t * ___key, MethodInfo* method)
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
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(int32_t*)((int32_t*)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		Object_t * L_3 = ___key;
		int32_t L_4 = (( int32_t (*) (Dictionary_2_t920 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		VirtualButtonData_t711  L_5 = (VirtualButtonData_t711 )VirtFuncInvoker1< VirtualButtonData_t711 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		VirtualButtonData_t711  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_6);
		return L_7;
	}

IL_0029:
	{
		return NULL;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_set_Item_m25791_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25791_gshared (Dictionary_2_t920 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t920 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		VirtualButtonData_t711  L_3 = (( VirtualButtonData_t711  (*) (Dictionary_2_t920 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< int32_t, VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_1, L_3);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Add_m25792_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25792_gshared (Dictionary_2_t920 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = (( int32_t (*) (Dictionary_2_t920 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		Object_t * L_2 = ___value;
		VirtualButtonData_t711  L_3 = (( VirtualButtonData_t711  (*) (Dictionary_2_t920 *, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(__this, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		VirtActionInvoker2< int32_t, VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_1, L_3);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Contains(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Contains_m25793_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25793_gshared (Dictionary_2_t920 * __this, Object_t * ___key, MethodInfo* method)
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
		bool L_4 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
		return L_4;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Remove(System.Object)
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_Remove_m25794_GenericMethod;
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25794_gshared (Dictionary_2_t920 * __this, Object_t * ___key, MethodInfo* method)
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
		VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, ((*(int32_t*)((int32_t*)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10))))));
	}

IL_0023:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25795_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25795_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25796_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25796_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25797_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25797_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25798_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25798_gshared (Dictionary_2_t920 * __this, KeyValuePair_2_t4053  ___keyValuePair, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtualButtonData_t711  L_1 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< int32_t, VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_0, L_1);
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25799_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25799_gshared (Dictionary_2_t920 * __this, KeyValuePair_2_t4053  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t4053  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t920 *, KeyValuePair_2_t4053 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25800_GenericMethod;
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25800_gshared (Dictionary_2_t920 * __this, KeyValuePair_2U5BU5D_t5002* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t5002* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t920 *, KeyValuePair_2U5BU5D_t5002*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25801_GenericMethod;
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25801_gshared (Dictionary_2_t920 * __this, KeyValuePair_2_t4053  ___keyValuePair, MethodInfo* method)
{
	{
		KeyValuePair_2_t4053  L_0 = ___keyValuePair;
		bool L_1 = (( bool (*) (Dictionary_2_t920 *, KeyValuePair_2_t4053 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
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
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___keyValuePair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_3 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Dictionary_2_System_Collections_ICollection_CopyTo_m25802_GenericMethod;
extern TypeInfo* DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25802_gshared (Dictionary_2_t920 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	static bool Dictionary_2_System_Collections_ICollection_CopyTo_m25802_init;
	if (!Dictionary_2_System_Collections_ICollection_CopyTo_m25802_init)
	{
		DictionaryEntryU5BU5D_t5178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DictionaryEntryU5BU5D_t5178_0_0_0);
		Dictionary_2_System_Collections_ICollection_CopyTo_m25802_init = true;
	}
	KeyValuePair_2U5BU5D_t5002* V_0 = {0};
	DictionaryEntryU5BU5D_t5178* V_1 = {0};
	int32_t G_B5_0 = 0;
	DictionaryEntryU5BU5D_t5178* G_B5_1 = {0};
	Dictionary_2_t920 * G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	DictionaryEntryU5BU5D_t5178* G_B4_1 = {0};
	Dictionary_2_t920 * G_B4_2 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((KeyValuePair_2U5BU5D_t5002*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
		KeyValuePair_2U5BU5D_t5002* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		KeyValuePair_2U5BU5D_t5002* L_2 = V_0;
		int32_t L_3 = ___index;
		(( void (*) (Dictionary_2_t920 *, KeyValuePair_2U5BU5D_t5002*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_2, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		return;
	}

IL_0013:
	{
		Array_t * L_4 = ___array;
		int32_t L_5 = ___index;
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, L_4, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
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
		Transform_1_t4052 * L_10 = ((Dictionary_2_t920_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		G_B4_0 = L_9;
		G_B4_1 = L_8;
		G_B4_2 = ((Dictionary_2_t920 *)(__this));
		if (L_10)
		{
			G_B5_0 = L_9;
			G_B5_1 = L_8;
			G_B5_2 = ((Dictionary_2_t920 *)(__this));
			goto IL_0040;
		}
	}
	{
		IntPtr_t L_11 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23) };
		Transform_1_t4052 * L_12 = (Transform_1_t4052 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (Transform_1_t4052 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_12, NULL, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		((Dictionary_2_t920_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15 = L_12;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = ((Dictionary_2_t920 *)(G_B4_2));
	}

IL_0040:
	{
		Transform_1_t4052 * L_13 = ((Dictionary_2_t920_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22)->static_fields)->___U3CU3Ef__am$cacheB_15;
		NullCheck(G_B5_2);
		(( void (*) (Dictionary_2_t920 *, DictionaryEntryU5BU5D_t5178*, int32_t, Transform_1_t4052 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(G_B5_2, G_B5_1, G_B5_0, L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return;
	}

IL_004b:
	{
		Array_t * L_14 = ___array;
		int32_t L_15 = ___index;
		IntPtr_t L_16 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t4063 * L_17 = (Transform_1_t4063 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t4063 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_17, NULL, L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, Transform_1_t4063 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(__this, L_14, L_15, L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25803_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25803_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058  L_0 = {0};
		(( void (*) (Enumerator_t4058 *, Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t4058  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25804_GenericMethod;
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25804_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058  L_0 = {0};
		(( void (*) (Enumerator_t4058 *, Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		Enumerator_t4058  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionary.GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25805_GenericMethod;
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25805_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		ShimEnumerator_t4064 * L_0 = (ShimEnumerator_t4064 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (ShimEnumerator_t4064 *, Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25806_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___count_10);
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Item(TKey)
extern "C" VirtualButtonData_t711  Dictionary_2_get_Item_m25807_gshared (Dictionary_2_t920 * __this, int32_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t34* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t34* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_008f;
	}

IL_0042:
	{
		LinkU5BU5D_t2900* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
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
		Int32U5BU5D_t34* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_007d;
		}
	}
	{
		VirtualButtonDataU5BU5D_t4051* L_21 = (__this->___valueSlots_7);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		return (*(VirtualButtonData_t711 *)(VirtualButtonData_t711 *)SZArrayLdElema(L_21, L_23));
	}

IL_007d:
	{
		LinkU5BU5D_t2900* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_1 = L_26;
	}

IL_008f:
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		KeyNotFoundException_t2111 * L_28 = (KeyNotFoundException_t2111 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyNotFoundException_t2111_il2cpp_TypeInfo));
		KeyNotFoundException__ctor_m11463(L_28, /*hidden argument*/&KeyNotFoundException__ctor_m11463_MethodInfo);
		il2cpp_codegen_raise_exception(L_28);
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25808_gshared (Dictionary_2_t920 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t34* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		V_3 = (-1);
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0090;
		}
	}

IL_0048:
	{
		LinkU5BU5D_t2900* L_13 = (__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		Object_t* L_17 = (__this->___hcp_12);
		Int32U5BU5D_t34* L_18 = (__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = ___key;
		NullCheck(L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_17, (*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), L_21);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		goto IL_0090;
	}

IL_0078:
	{
		int32_t L_23 = V_2;
		V_3 = L_23;
		LinkU5BU5D_t2900* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}

IL_0090:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_29 = (__this->___count_10);
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)1));
		V_4 = L_30;
		__this->___count_10 = L_30;
		int32_t L_31 = V_4;
		int32_t L_32 = (__this->___threshold_11);
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00c9;
		}
	}
	{
		(( void (*) (Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_33 = V_0;
		Int32U5BU5D_t34* L_34 = (__this->___table_4);
		NullCheck(L_34);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))));
	}

IL_00c9:
	{
		int32_t L_35 = (__this->___emptySlot_9);
		V_2 = L_35;
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_37 = (__this->___touchedSlots_8);
		int32_t L_38 = L_37;
		V_4 = L_38;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_4;
		V_2 = L_39;
		goto IL_0101;
	}

IL_00ea:
	{
		LinkU5BU5D_t2900* L_40 = (__this->___linkSlots_5);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_40, L_41))->___Next_1);
		__this->___emptySlot_9 = L_42;
	}

IL_0101:
	{
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
		LinkU5BU5D_t2900* L_51 = (__this->___linkSlots_5);
		int32_t L_52 = V_2;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = V_0;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_51, L_52))->___HashCode_0 = L_53;
		Int32U5BU5D_t34* L_54 = (__this->___keySlots_6);
		int32_t L_55 = V_2;
		int32_t L_56 = ___key;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_56;
		goto IL_0194;
	}

IL_0148:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) == ((int32_t)(-1))))
		{
			goto IL_0194;
		}
	}
	{
		LinkU5BU5D_t2900* L_58 = (__this->___linkSlots_5);
		int32_t L_59 = V_3;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_59);
		LinkU5BU5D_t2900* L_60 = (__this->___linkSlots_5);
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		int32_t L_62 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_60, L_61))->___Next_1);
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_58, L_59))->___Next_1 = L_62;
		LinkU5BU5D_t2900* L_63 = (__this->___linkSlots_5);
		int32_t L_64 = V_2;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, L_64);
		Int32U5BU5D_t34* L_65 = (__this->___table_4);
		int32_t L_66 = V_1;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_63, L_64))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_65, L_67))-(int32_t)1));
		Int32U5BU5D_t34* L_68 = (__this->___table_4);
		int32_t L_69 = V_1;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_68, L_69)) = (int32_t)((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_0194:
	{
		VirtualButtonDataU5BU5D_t4051* L_71 = (__this->___valueSlots_7);
		int32_t L_72 = V_2;
		VirtualButtonData_t711  L_73 = ___value;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((VirtualButtonData_t711 *)(VirtualButtonData_t711 *)SZArrayLdElema(L_71, L_72)) = (VirtualButtonData_t711 )L_73;
		int32_t L_74 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_74+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern TypeInfo* EqualityComparer_1_t3140_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Init_m25809_gshared (Dictionary_2_t920 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method)
{
	static bool Dictionary_2_Init_m25809_init;
	if (!Dictionary_2_Init_m25809_init)
	{
		EqualityComparer_1_t3140_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t3140_0_0_0);
		Dictionary_2_Init_m25809_init = true;
	}
	Object_t* V_0 = {0};
	Dictionary_2_t920 * G_B4_0 = {0};
	Dictionary_2_t920 * G_B3_0 = {0};
	Object_t* G_B5_0 = {0};
	Dictionary_2_t920 * G_B5_1 = {0};
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
		G_B3_0 = ((Dictionary_2_t920 *)(__this));
		if (!L_2)
		{
			G_B4_0 = ((Dictionary_2_t920 *)(__this));
			goto IL_0018;
		}
	}
	{
		Object_t* L_3 = ___hcp;
		V_0 = L_3;
		Object_t* L_4 = V_0;
		G_B5_0 = L_4;
		G_B5_1 = ((Dictionary_2_t920 *)(G_B3_0));
		goto IL_001d;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t3140_il2cpp_TypeInfo_var);
		EqualityComparer_1_t3140 * L_5 = (( EqualityComparer_1_t3140 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 38));
		G_B5_0 = ((Object_t*)(L_5));
		G_B5_1 = ((Dictionary_2_t920 *)(G_B4_0));
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
		(( void (*) (Dictionary_2_t920 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___generation_14 = 0;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::InitArrays(System.Int32)
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2900_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_InitArrays_m25810_gshared (Dictionary_2_t920 * __this, int32_t ___size, MethodInfo* method)
{
	static bool Dictionary_2_InitArrays_m25810_init;
	if (!Dictionary_2_InitArrays_m25810_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		LinkU5BU5D_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2900_0_0_0);
		Dictionary_2_InitArrays_m25810_init = true;
	}
	{
		int32_t L_0 = ___size;
		__this->___table_4 = ((Int32U5BU5D_t34*)SZArrayNew(Int32U5BU5D_t34_il2cpp_TypeInfo_var, L_0));
		int32_t L_1 = ___size;
		__this->___linkSlots_5 = ((LinkU5BU5D_t2900*)SZArrayNew(LinkU5BU5D_t2900_il2cpp_TypeInfo_var, L_1));
		__this->___emptySlot_9 = (-1);
		int32_t L_2 = ___size;
		__this->___keySlots_6 = ((Int32U5BU5D_t34*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_2));
		int32_t L_3 = ___size;
		__this->___valueSlots_7 = ((VirtualButtonDataU5BU5D_t4051*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_3));
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25811_gshared (Dictionary_2_t920 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t4053  Dictionary_2_make_pair_m25812_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		VirtualButtonData_t711  L_1 = ___value;
		KeyValuePair_2_t4053  L_2 = {0};
		(( void (*) (KeyValuePair_2_t4053 *, int32_t, VirtualButtonData_t711 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44)->method)(&L_2, L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 44));
		return L_2;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::pick_key(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_key_m25813_GenericMethod;
extern "C" int32_t Dictionary_2_pick_key_m25813_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		return L_0;
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::pick_value(TKey,TValue)
extern Il2CppGenericMethod Dictionary_2_pick_value_m25814_GenericMethod;
extern "C" VirtualButtonData_t711  Dictionary_2_pick_value_m25814_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	{
		VirtualButtonData_t711  L_0 = ___value;
		return L_0;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25815_gshared (Dictionary_2_t920 * __this, KeyValuePair_2U5BU5D_t5002* ___array, int32_t ___index, MethodInfo* method)
{
	{
		KeyValuePair_2U5BU5D_t5002* L_0 = ___array;
		int32_t L_1 = ___index;
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21)->method)(__this, (Array_t *)(Array_t *)L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21));
		KeyValuePair_2U5BU5D_t5002* L_2 = ___array;
		int32_t L_3 = ___index;
		IntPtr_t L_4 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27) };
		Transform_1_t4063 * L_5 = (Transform_1_t4063 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		(( void (*) (Transform_1_t4063 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29)->method)(L_5, NULL, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29));
		(( void (*) (Dictionary_2_t920 *, KeyValuePair_2U5BU5D_t5002*, int32_t, Transform_1_t4063 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45)->method)(__this, L_2, L_3, L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 45));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Resize()
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* LinkU5BU5D_t2900_il2cpp_TypeInfo_var;
extern "C" void Dictionary_2_Resize_m25816_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	static bool Dictionary_2_Resize_m25816_init;
	if (!Dictionary_2_Resize_m25816_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		LinkU5BU5D_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&LinkU5BU5D_t2900_0_0_0);
		Dictionary_2_Resize_m25816_init = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t34* V_1 = {0};
	LinkU5BU5D_t2900* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Int32U5BU5D_t34* V_7 = {0};
	VirtualButtonDataU5BU5D_t4051* V_8 = {0};
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
		Int32U5BU5D_t34* L_10 = (__this->___keySlots_6);
		int32_t L_11 = V_4;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck(L_9);
		int32_t L_13 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_9, (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)));
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
		V_7 = ((Int32U5BU5D_t34*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 40), L_35));
		int32_t L_36 = V_0;
		V_8 = ((VirtualButtonDataU5BU5D_t4051*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 41), L_36));
		Int32U5BU5D_t34* L_37 = (__this->___keySlots_6);
		Int32U5BU5D_t34* L_38 = V_7;
		int32_t L_39 = (__this->___touchedSlots_8);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_37, 0, (Array_t *)(Array_t *)L_38, 0, L_39, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		VirtualButtonDataU5BU5D_t4051* L_40 = (__this->___valueSlots_7);
		VirtualButtonDataU5BU5D_t4051* L_41 = V_8;
		int32_t L_42 = (__this->___touchedSlots_8);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_40, 0, (Array_t *)(Array_t *)L_41, 0, L_42, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		Int32U5BU5D_t34* L_43 = V_7;
		__this->___keySlots_6 = L_43;
		VirtualButtonDataU5BU5D_t4051* L_44 = V_8;
		__this->___valueSlots_7 = L_44;
		int32_t L_45 = V_0;
		__this->___threshold_11 = (((int32_t)((float)((float)(((float)L_45))*(float)(0.9f)))));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m5467_gshared (Dictionary_2_t920 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t34* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		goto IL_008f;
	}

IL_0044:
	{
		LinkU5BU5D_t2900* L_12 = (__this->___linkSlots_5);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_12, L_13))->___HashCode_0);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_007d;
		}
	}
	{
		Object_t* L_16 = (__this->___hcp_12);
		Int32U5BU5D_t34* L_17 = (__this->___keySlots_6);
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		int32_t L_20 = ___key;
		NullCheck(L_16);
		bool L_21 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_16, (*(int32_t*)(int32_t*)SZArrayLdElema(L_17, L_19)), L_20);
		if (!L_21)
		{
			goto IL_007d;
		}
	}
	{
		ArgumentException_t534 * L_22 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_22, (String_t*) &_stringLiteral1574, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_007d:
	{
		LinkU5BU5D_t2900* L_23 = (__this->___linkSlots_5);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_23, L_24))->___Next_1);
		V_2 = L_25;
	}

IL_008f:
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)(-1)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_27 = (__this->___count_10);
		int32_t L_28 = ((int32_t)((int32_t)L_27+(int32_t)1));
		V_3 = L_28;
		__this->___count_10 = L_28;
		int32_t L_29 = V_3;
		int32_t L_30 = (__this->___threshold_11);
		if ((((int32_t)L_29) <= ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		(( void (*) (Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 37));
		int32_t L_31 = V_0;
		Int32U5BU5D_t34* L_32 = (__this->___table_4);
		NullCheck(L_32);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
	}

IL_00c3:
	{
		int32_t L_33 = (__this->___emptySlot_9);
		V_2 = L_33;
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00e2;
		}
	}
	{
		int32_t L_35 = (__this->___touchedSlots_8);
		int32_t L_36 = L_35;
		V_3 = L_36;
		__this->___touchedSlots_8 = ((int32_t)((int32_t)L_36+(int32_t)1));
		int32_t L_37 = V_3;
		V_2 = L_37;
		goto IL_00f9;
	}

IL_00e2:
	{
		LinkU5BU5D_t2900* L_38 = (__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		__this->___emptySlot_9 = L_40;
	}

IL_00f9:
	{
		LinkU5BU5D_t2900* L_41 = (__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = V_0;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_41, L_42))->___HashCode_0 = L_43;
		LinkU5BU5D_t2900* L_44 = (__this->___linkSlots_5);
		int32_t L_45 = V_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		Int32U5BU5D_t34* L_46 = (__this->___table_4);
		int32_t L_47 = V_1;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_44, L_45))->___Next_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_46, L_48))-(int32_t)1));
		Int32U5BU5D_t34* L_49 = (__this->___table_4);
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_49, L_50)) = (int32_t)((int32_t)((int32_t)L_51+(int32_t)1));
		Int32U5BU5D_t34* L_52 = (__this->___keySlots_6);
		int32_t L_53 = V_2;
		int32_t L_54 = ___key;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_52, L_53)) = (int32_t)L_54;
		VirtualButtonDataU5BU5D_t4051* L_55 = (__this->___valueSlots_7);
		int32_t L_56 = V_2;
		VirtualButtonData_t711  L_57 = ___value;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		*((VirtualButtonData_t711 *)(VirtualButtonData_t711 *)SZArrayLdElema(L_55, L_56)) = (VirtualButtonData_t711 )L_57;
		int32_t L_58 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_58+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Clear()
extern Il2CppGenericMethod Dictionary_2_Clear_m25817_GenericMethod;
extern "C" void Dictionary_2_Clear_m25817_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		__this->___count_10 = 0;
		Int32U5BU5D_t34* L_0 = (__this->___table_4);
		Int32U5BU5D_t34* L_1 = (__this->___table_4);
		NullCheck(L_1);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		Int32U5BU5D_t34* L_2 = (__this->___keySlots_6);
		Int32U5BU5D_t34* L_3 = (__this->___keySlots_6);
		NullCheck(L_3);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, 0, (((int32_t)(((Array_t *)L_3)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		VirtualButtonDataU5BU5D_t4051* L_4 = (__this->___valueSlots_7);
		VirtualButtonDataU5BU5D_t4051* L_5 = (__this->___valueSlots_7);
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25818_gshared (Dictionary_2_t920 * __this, int32_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t34* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t34* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0084;
	}

IL_0042:
	{
		LinkU5BU5D_t2900* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		Int32U5BU5D_t34* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_0072;
		}
	}
	{
		return 1;
	}

IL_0072:
	{
		LinkU5BU5D_t2900* L_21 = (__this->___linkSlots_5);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_21, L_22))->___Next_1);
		V_1 = L_23;
	}

IL_0084:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::ContainsValue(TValue)
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m25819_GenericMethod;
extern TypeInfo* EqualityComparer_1_t4065_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsValue_m25819_gshared (Dictionary_2_t920 * __this, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	static bool Dictionary_2_ContainsValue_m25819_init;
	if (!Dictionary_2_ContainsValue_m25819_init)
	{
		EqualityComparer_1_t4065_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t4065_0_0_0);
		Dictionary_2_ContainsValue_m25819_init = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4065_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4065 * L_0 = (( EqualityComparer_1_t4065 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
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
		VirtualButtonDataU5BU5D_t4051* L_5 = (__this->___valueSlots_7);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		VirtualButtonData_t711  L_8 = ___value;
		NullCheck(L_4);
		bool L_9 = (bool)InterfaceFuncInvoker2< bool, VirtualButtonData_t711 , VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 47), L_4, (*(VirtualButtonData_t711 *)(VirtualButtonData_t711 *)SZArrayLdElema(L_5, L_7)), L_8);
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
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppGenericMethod Dictionary_2_GetObjectData_m25820_GenericMethod;
extern "C" void Dictionary_2_GetObjectData_m25820_gshared (Dictionary_2_t920 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method)
{
	KeyValuePair_2U5BU5D_t5002* V_0 = {0};
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
		V_0 = (KeyValuePair_2U5BU5D_t5002*)NULL;
		int32_t L_6 = (__this->___count_10);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = (__this->___count_10);
		V_0 = ((KeyValuePair_2U5BU5D_t5002*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 48), L_7));
		KeyValuePair_2U5BU5D_t5002* L_8 = V_0;
		(( void (*) (Dictionary_2_t920 *, KeyValuePair_2U5BU5D_t5002*, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, L_8, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
	}

IL_004f:
	{
		SerializationInfo_t1208 * L_9 = ___info;
		Int32U5BU5D_t34* L_10 = (__this->___table_4);
		NullCheck(L_10);
		NullCheck(L_9);
		SerializationInfo_AddValue_m8828(L_9, (String_t*) &_stringLiteral1575, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/&SerializationInfo_AddValue_m8828_MethodInfo);
		SerializationInfo_t1208 * L_11 = ___info;
		KeyValuePair_2U5BU5D_t5002* L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m8841(L_11, (String_t*) &_stringLiteral1576, (Object_t *)(Object_t *)L_12, /*hidden argument*/&SerializationInfo_AddValue_m8841_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::OnDeserialization(System.Object)
extern Il2CppGenericMethod Dictionary_2_OnDeserialization_m25821_GenericMethod;
extern "C" void Dictionary_2_OnDeserialization_m25821_gshared (Dictionary_2_t920 * __this, Object_t * ___sender, MethodInfo* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2U5BU5D_t5002* V_1 = {0};
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
		V_1 = ((KeyValuePair_2U5BU5D_t5002*)Castclass(L_10, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)));
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
		(( void (*) (Dictionary_2_t920 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39)->method)(__this, L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 39));
		__this->___count_10 = 0;
		KeyValuePair_2U5BU5D_t5002* L_13 = V_1;
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
		KeyValuePair_2U5BU5D_t5002* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(((KeyValuePair_2_t4053 *)(KeyValuePair_2_t4053 *)SZArrayLdElema(L_14, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		KeyValuePair_2U5BU5D_t5002* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		VirtualButtonData_t711  L_19 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(((KeyValuePair_2_t4053 *)(KeyValuePair_2_t4053 *)SZArrayLdElema(L_17, L_18)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtActionInvoker2< int32_t, VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, L_16, L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00b4:
	{
		int32_t L_21 = V_2;
		KeyValuePair_2U5BU5D_t5002* L_22 = V_1;
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
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25822_gshared (Dictionary_2_t920 * __this, int32_t ___key, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	VirtualButtonData_t711  V_5 = {0};
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t34* L_8 = (__this->___table_4);
		NullCheck(L_8);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))));
		Int32U5BU5D_t34* L_9 = (__this->___table_4);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_2 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11))-(int32_t)1));
		int32_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
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
		LinkU5BU5D_t2900* L_13 = (__this->___linkSlots_5);
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_13, L_14))->___HashCode_0);
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_007a;
		}
	}
	{
		Object_t* L_17 = (__this->___hcp_12);
		Int32U5BU5D_t34* L_18 = (__this->___keySlots_6);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		int32_t L_21 = ___key;
		NullCheck(L_17);
		bool L_22 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_17, (*(int32_t*)(int32_t*)SZArrayLdElema(L_18, L_20)), L_21);
		if (!L_22)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0092;
	}

IL_007a:
	{
		int32_t L_23 = V_2;
		V_3 = L_23;
		LinkU5BU5D_t2900* L_24 = (__this->___linkSlots_5);
		int32_t L_25 = V_2;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_24, L_25))->___Next_1);
		V_2 = L_26;
		int32_t L_27 = V_2;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}

IL_0092:
	{
		int32_t L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0098;
		}
	}
	{
		return 0;
	}

IL_0098:
	{
		int32_t L_29 = (__this->___count_10);
		__this->___count_10 = ((int32_t)((int32_t)L_29-(int32_t)1));
		int32_t L_30 = V_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00c7;
		}
	}
	{
		Int32U5BU5D_t34* L_31 = (__this->___table_4);
		int32_t L_32 = V_1;
		LinkU5BU5D_t2900* L_33 = (__this->___linkSlots_5);
		int32_t L_34 = V_2;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_33, L_34))->___Next_1);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_31, L_32)) = (int32_t)((int32_t)((int32_t)L_35+(int32_t)1));
		goto IL_00e9;
	}

IL_00c7:
	{
		LinkU5BU5D_t2900* L_36 = (__this->___linkSlots_5);
		int32_t L_37 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		LinkU5BU5D_t2900* L_38 = (__this->___linkSlots_5);
		int32_t L_39 = V_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_38, L_39))->___Next_1);
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_36, L_37))->___Next_1 = L_40;
	}

IL_00e9:
	{
		LinkU5BU5D_t2900* L_41 = (__this->___linkSlots_5);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = (__this->___emptySlot_9);
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_41, L_42))->___Next_1 = L_43;
		int32_t L_44 = V_2;
		__this->___emptySlot_9 = L_44;
		LinkU5BU5D_t2900* L_45 = (__this->___linkSlots_5);
		int32_t L_46 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_45, L_46))->___HashCode_0 = 0;
		Int32U5BU5D_t34* L_47 = (__this->___keySlots_6);
		int32_t L_48 = V_2;
		Initobj (InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), (&V_4));
		int32_t L_49 = V_4;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_47, L_48)) = (int32_t)L_49;
		VirtualButtonDataU5BU5D_t4051* L_50 = (__this->___valueSlots_7);
		int32_t L_51 = V_2;
		Initobj (InitializedTypeInfo(&VirtualButtonData_t711_il2cpp_TypeInfo), (&V_5));
		VirtualButtonData_t711  L_52 = V_5;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		*((VirtualButtonData_t711 *)(VirtualButtonData_t711 *)SZArrayLdElema(L_50, L_51)) = (VirtualButtonData_t711 )L_52;
		int32_t L_53 = (__this->___generation_14);
		__this->___generation_14 = ((int32_t)((int32_t)L_53+(int32_t)1));
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m5472_gshared (Dictionary_2_t920 * __this, int32_t ___key, VirtualButtonData_t711 * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	VirtualButtonData_t711  V_2 = {0};
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t1252 * L_3 = (ArgumentNullException_t1252 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1252_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m7344(L_3, (String_t*) &_stringLiteral613, /*hidden argument*/&ArgumentNullException__ctor_m7344_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0013:
	{
		Object_t* L_4 = (__this->___hcp_12);
		int32_t L_5 = ___key;
		NullCheck(L_4);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35), L_4, L_5);
		V_0 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)-2147483648)));
		Int32U5BU5D_t34* L_7 = (__this->___table_4);
		int32_t L_8 = V_0;
		Int32U5BU5D_t34* L_9 = (__this->___table_4);
		NullCheck(L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))));
		int32_t L_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)2147483647)))%(int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))));
		V_1 = ((int32_t)((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_7, L_10))-(int32_t)1));
		goto IL_0096;
	}

IL_0042:
	{
		LinkU5BU5D_t2900* L_11 = (__this->___linkSlots_5);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_11, L_12))->___HashCode_0);
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0084;
		}
	}
	{
		Object_t* L_15 = (__this->___hcp_12);
		Int32U5BU5D_t34* L_16 = (__this->___keySlots_6);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		int32_t L_19 = ___key;
		NullCheck(L_15);
		bool L_20 = (bool)InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36), L_15, (*(int32_t*)(int32_t*)SZArrayLdElema(L_16, L_18)), L_19);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		VirtualButtonData_t711 * L_21 = ___value;
		VirtualButtonDataU5BU5D_t4051* L_22 = (__this->___valueSlots_7);
		int32_t L_23 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		*L_21 = (*(VirtualButtonData_t711 *)(VirtualButtonData_t711 *)SZArrayLdElema(L_22, L_24));
		return 1;
	}

IL_0084:
	{
		LinkU5BU5D_t2900* L_25 = (__this->___linkSlots_5);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (((Link_t2110 *)(Link_t2110 *)SZArrayLdElema(L_25, L_26))->___Next_1);
		V_1 = L_27;
	}

IL_0096:
	{
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		VirtualButtonData_t711 * L_29 = ___value;
		Initobj (InitializedTypeInfo(&VirtualButtonData_t711_il2cpp_TypeInfo), (&V_2));
		VirtualButtonData_t711  L_30 = V_2;
		*L_29 = L_30;
		return 0;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Keys()
extern "C" KeyCollection_t4056 * Dictionary_2_get_Keys_m25823_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		KeyCollection_t4056 * L_0 = (KeyCollection_t4056 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 52));
		(( void (*) (KeyCollection_t4056 *, Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 53));
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Values()
extern "C" ValueCollection_t4060 * Dictionary_2_get_Values_m25824_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		ValueCollection_t4060 * L_0 = (ValueCollection_t4060 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 54));
		(( void (*) (ValueCollection_t4060 *, Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 55));
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m25825_gshared (Dictionary_2_t920 * __this, Object_t * ___key, MethodInfo* method)
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
		return ((*(int32_t*)((int32_t*)UnBox (L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)))));
	}
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::ToTValue(System.Object)
extern "C" VirtualButtonData_t711  Dictionary_2_ToTValue_m25826_gshared (Dictionary_2_t920 * __this, Object_t * ___value, MethodInfo* method)
{
	VirtualButtonData_t711  V_0 = {0};
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
		Initobj (InitializedTypeInfo(&VirtualButtonData_t711_il2cpp_TypeInfo), (&V_0));
		VirtualButtonData_t711  L_3 = V_0;
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
		return ((*(VirtualButtonData_t711 *)((VirtualButtonData_t711 *)UnBox (L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)))));
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern TypeInfo* EqualityComparer_1_t4065_il2cpp_TypeInfo_var;
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25827_gshared (Dictionary_2_t920 * __this, KeyValuePair_2_t4053  ___pair, MethodInfo* method)
{
	static bool Dictionary_2_ContainsKeyValuePair_m25827_init;
	if (!Dictionary_2_ContainsKeyValuePair_m25827_init)
	{
		EqualityComparer_1_t4065_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&EqualityComparer_1_t4065_0_0_0);
		Dictionary_2_ContainsKeyValuePair_m25827_init = true;
	}
	VirtualButtonData_t711  V_0 = {0};
	{
		int32_t L_0 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		bool L_1 = (bool)VirtFuncInvoker2< bool, int32_t, VirtualButtonData_t711 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 58), __this, L_0, (&V_0));
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
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t4065_il2cpp_TypeInfo_var);
		EqualityComparer_1_t4065 * L_2 = (( EqualityComparer_1_t4065 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 46));
		VirtualButtonData_t711  L_3 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&___pair), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtualButtonData_t711  L_4 = V_0;
		NullCheck(L_2);
		bool L_5 = (bool)VirtFuncInvoker2< bool, VirtualButtonData_t711 , VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 59), L_2, L_3, L_4);
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::GetEnumerator()
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m25828_GenericMethod;
extern "C" Enumerator_t4058  Dictionary_2_GetEnumerator_m25828_gshared (Dictionary_2_t920 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058  L_0 = {0};
		(( void (*) (Enumerator_t4058 *, Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 32));
		return L_0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1610  Dictionary_2_U3CCopyToU3Em__0_m25829_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), &L_1);
		VirtualButtonData_t711  L_3 = ___value;
		VirtualButtonData_t711  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), &L_4);
		DictionaryEntry_t1610  L_6 = {0};
		DictionaryEntry__ctor_m8812(&L_6, L_2, L_5, /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo StringU5BU5D_t208_il2cpp_TypeInfo;
extern Il2CppType StringU5BU5D_t208_0_0_0;
extern MethodInfo Object_ToString_m1073_MethodInfo;
extern MethodInfo String_Concat_m7291_MethodInfo;
extern Il2CppGenericMethod KeyValuePair_2_set_Key_m25832_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m25834_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C" void KeyValuePair_2__ctor_m25830_gshared (KeyValuePair_2_t4053 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___key;
		(( void (*) (KeyValuePair_2_t4053 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		VirtualButtonData_t711  L_1 = ___value;
		(( void (*) (KeyValuePair_2_t4053 *, VirtualButtonData_t711 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Key()
extern "C" int32_t KeyValuePair_2_get_Key_m25831_gshared (KeyValuePair_2_t4053 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___key_0);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C" void KeyValuePair_2_set_Key_m25832_gshared (KeyValuePair_2_t4053 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___key_0 = L_0;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Value()
extern "C" VirtualButtonData_t711  KeyValuePair_2_get_Value_m25833_gshared (KeyValuePair_2_t4053 * __this, MethodInfo* method)
{
	{
		VirtualButtonData_t711  L_0 = (__this->___value_1);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C" void KeyValuePair_2_set_Value_m25834_gshared (KeyValuePair_2_t4053 * __this, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	{
		VirtualButtonData_t711  L_0 = ___value;
		__this->___value_1 = L_0;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::ToString()
extern Il2CppGenericMethod KeyValuePair_2_ToString_m25835_GenericMethod;
extern TypeInfo* StringU5BU5D_t208_il2cpp_TypeInfo_var;
extern "C" String_t* KeyValuePair_2_ToString_m25835_gshared (KeyValuePair_2_t4053 * __this, MethodInfo* method)
{
	static bool KeyValuePair_2_ToString_m25835_init;
	if (!KeyValuePair_2_ToString_m25835_init)
	{
		StringU5BU5D_t208_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t208_0_0_0);
		KeyValuePair_2_ToString_m25835_init = true;
	}
	int32_t V_0 = 0;
	VirtualButtonData_t711  V_1 = {0};
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
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = L_5;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0)));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B3_0 = L_7;
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
		StringU5BU5D_t208* L_8 = G_B3_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral585);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 2)) = (String_t*)(String_t*) &_stringLiteral585;
		StringU5BU5D_t208* L_9 = L_8;
		VirtualButtonData_t711  L_10 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		VirtualButtonData_t711  L_11 = L_10;
		Object_t * L_12 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_11);
		G_B4_0 = 3;
		G_B4_1 = L_9;
		G_B4_2 = L_9;
		if (!L_12)
		{
			G_B5_0 = 3;
			G_B5_1 = L_9;
			G_B5_2 = L_9;
			goto IL_0066;
		}
	}
	{
		VirtualButtonData_t711  L_13 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = L_13;
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m1073_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1)));
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B6_0 = L_15;
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
		StringU5BU5D_t208* L_16 = G_B6_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 4);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral40);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 4)) = (String_t*)(String_t*) &_stringLiteral40;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_17 = String_Concat_m7291(NULL /*static, unused*/, L_16, /*hidden argument*/&String_Concat_m7291_MethodInfo);
		return L_17;
	}
}
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_173.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4054_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_173MethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1784_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType InternalEnumerator_1_t4054_0_0_0;
extern MethodInfo InvalidOperationException__ctor_m8811_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>(System.Int32)
extern "C" KeyValuePair_2_t4053  Array_InternalArray__get_Item_TisKeyValuePair_2_t4053_m35896_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t4053_m35896(__this, p0, method) (( KeyValuePair_2_t4053  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t4053_m35896_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25840_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t4053_m35896_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25836_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m25836_gshared (InternalEnumerator_1_t4054 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25837_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25837_gshared (InternalEnumerator_1_t4054 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t4053  L_0 = (( KeyValuePair_2_t4053  (*) (InternalEnumerator_1_t4054 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4053  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25838_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m25838_gshared (InternalEnumerator_1_t4054 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25839_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m25839_gshared (InternalEnumerator_1_t4054 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::get_Current()
extern "C" KeyValuePair_2_t4053  InternalEnumerator_1_get_Current_m25840_gshared (InternalEnumerator_1_t4054 * __this, MethodInfo* method)
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
		KeyValuePair_2_t4053  L_8 = (( KeyValuePair_2_t4053  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5920_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t5001_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5000_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/VirtualButtonData>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/VirtualButtonData>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/VirtualButtonData>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5921_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/VirtualButtonData>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5004_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_174.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4055_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_174MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4055_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.QCARManagerImpl/VirtualButtonData>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.QCARManagerImpl/VirtualButtonData>(System.Int32)
extern "C" VirtualButtonData_t711  Array_InternalArray__get_Item_TisVirtualButtonData_t711_m35907_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisVirtualButtonData_t711_m35907(__this, p0, method) (( VirtualButtonData_t711  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisVirtualButtonData_t711_m35907_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25845_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisVirtualButtonData_t711_m35907_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25841_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m25841_gshared (InternalEnumerator_1_t4055 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25842_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25842_gshared (InternalEnumerator_1_t4055 * __this, MethodInfo* method)
{
	{
		VirtualButtonData_t711  L_0 = (( VirtualButtonData_t711  (*) (InternalEnumerator_1_t4055 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		VirtualButtonData_t711  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25843_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m25843_gshared (InternalEnumerator_1_t4055 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/VirtualButtonData>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25844_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m25844_gshared (InternalEnumerator_1_t4055 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
extern "C" VirtualButtonData_t711  InternalEnumerator_1_get_Current_m25845_gshared (InternalEnumerator_1_t4055 * __this, MethodInfo* method)
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
		VirtualButtonData_t711  L_8 = (( VirtualButtonData_t711  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5922_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/VirtualButtonData>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/VirtualButtonData>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/VirtualButtonData>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.QCARManagerImpl/VirtualButtonData>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_47.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_108.h"
extern TypeInfo ICollection_t1351_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t207_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4057_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4059_il2cpp_TypeInfo;
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_108MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_47MethodDeclarations.h"
extern Il2CppType Enumerator_t4057_0_0_0;
extern Il2CppType Transform_1_t4059_0_0_0;
extern MethodInfo ICollection_get_SyncRoot_m14599_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m8832_MethodInfo;
extern MethodInfo KeyCollection_CopyTo_m25857_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m25813_MethodInfo;
extern MethodInfo Transform_1__ctor_m25877_MethodInfo;
extern MethodInfo Enumerator__ctor_m25860_MethodInfo;
struct Dictionary_2_t920;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m35918_gshared (Dictionary_2_t920 * __this, Array_t * p0, int32_t p1, Transform_1_t4059 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m35918(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, Transform_1_t4059 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m35918_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t920;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t96_TisInt32_t96_m35919 (Dictionary_2_t920 * __this, Int32U5BU5D_t34* p0, int32_t p1, Transform_1_t4059 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m25858_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m25857_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25877_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m35918_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t96_TisInt32_t96_m35919_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25860_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m25846_gshared (KeyCollection_t4056 * __this, Dictionary_2_t920 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t920 * L_0 = ___dictionary;
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
		Dictionary_2_t920 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m25847_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m25847_gshared (KeyCollection_t4056 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TKey>.Clear()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m25848_GenericMethod;
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m25848_gshared (KeyCollection_t4056 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m25849_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m25849_gshared (KeyCollection_t4056 * __this, int32_t ___item, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m25850_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m25850_gshared (KeyCollection_t4056 * __this, int32_t ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m25851_GenericMethod;
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m25851_gshared (KeyCollection_t4056 * __this, MethodInfo* method)
{
	{
		Enumerator_t4057  L_0 = (( Enumerator_t4057  (*) (KeyCollection_t4056 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4057  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_CopyTo_m25852_GenericMethod;
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m25852_gshared (KeyCollection_t4056 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
		Dictionary_2_t920 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t920 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t4059 * L_11 = (Transform_1_t4059 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t4059 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, Transform_1_t4059 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod KeyCollection_System_Collections_IEnumerable_GetEnumerator_m25853_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m25853_gshared (KeyCollection_t4056 * __this, MethodInfo* method)
{
	{
		Enumerator_t4057  L_0 = (( Enumerator_t4057  (*) (KeyCollection_t4056 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4057  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern Il2CppGenericMethod KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m25854_GenericMethod;
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m25854_gshared (KeyCollection_t4056 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_IsSynchronized_m25855_GenericMethod;
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m25855_gshared (KeyCollection_t4056 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod KeyCollection_System_Collections_ICollection_get_SyncRoot_m25856_GenericMethod;
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m25856_gshared (KeyCollection_t4056 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m25857_gshared (KeyCollection_t4056 * __this, Int32U5BU5D_t34* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		Int32U5BU5D_t34* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t920 * L_3 = (__this->___dictionary_0);
		Int32U5BU5D_t34* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t4059 * L_7 = (Transform_1_t4059 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t4059 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t920 *, Int32U5BU5D_t34*, int32_t, Transform_1_t4059 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::GetEnumerator()
extern "C" Enumerator_t4057  KeyCollection_GetEnumerator_m25858_gshared (KeyCollection_t4056 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		Enumerator_t4057  L_1 = {0};
		(( void (*) (Enumerator_t4057 *, Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Count()
extern Il2CppGenericMethod KeyCollection_get_Count_m25859_GenericMethod;
extern "C" int32_t KeyCollection_get_Count_m25859_gshared (KeyCollection_t4056 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m25872_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m25876_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m25870_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25860_gshared (Enumerator_t4057 * __this, Dictionary_2_t920 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t4058  L_1 = (( Enumerator_t4058  (*) (Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m25861_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25861_gshared (Enumerator_t4057 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m25862_GenericMethod;
extern "C" void Enumerator_Dispose_m25862_gshared (Enumerator_t4057 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m25863_GenericMethod;
extern "C" bool Enumerator_MoveNext_m25863_gshared (Enumerator_t4057 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m25864_GenericMethod;
extern "C" int32_t Enumerator_get_Current_m25864_gshared (Enumerator_t4057 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t4053 * L_1 = &(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
extern TypeInfo ObjectDisposedException_t1984_il2cpp_TypeInfo;
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
extern MethodInfo ObjectDisposedException__ctor_m10051_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyCurrent_m25875_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m25873_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m25874_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25865_gshared (Enumerator_t4058 * __this, Dictionary_2_t920 * ___dictionary, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t920 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m25866_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25866_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4053  L_0 = (__this->___current_3);
		KeyValuePair_2_t4053  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25867_GenericMethod;
extern "C" DictionaryEntry_t1610  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25867_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4053 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t4053 * L_4 = &(__this->___current_3);
		VirtualButtonData_t711  L_5 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		VirtualButtonData_t711  L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		DictionaryEntry_t1610  L_8 = {0};
		DictionaryEntry__ctor_m8812(&L_8, L_3, L_7, /*hidden argument*/&DictionaryEntry__ctor_m8812_MethodInfo);
		return L_8;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Key()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25868_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25868_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Value()
extern Il2CppGenericMethod Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25869_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25869_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		VirtualButtonData_t711  L_0 = (( VirtualButtonData_t711  (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		VirtualButtonData_t711  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25870_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
		Dictionary_2_t920 * L_4 = (__this->___dictionary_0);
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
		Dictionary_2_t920 * L_8 = (__this->___dictionary_0);
		NullCheck(L_8);
		Int32U5BU5D_t34* L_9 = (L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t920 * L_12 = (__this->___dictionary_0);
		NullCheck(L_12);
		VirtualButtonDataU5BU5D_t4051* L_13 = (L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t4053  L_16 = {0};
		(( void (*) (KeyValuePair_2_t4053 *, int32_t, VirtualButtonData_t711 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)), (*(VirtualButtonData_t711 *)(VirtualButtonData_t711 *)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (__this->___next_1);
		Dictionary_2_t920 * L_18 = (__this->___dictionary_0);
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
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m25871_GenericMethod;
extern "C" KeyValuePair_2_t4053  Enumerator_get_Current_m25871_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t4053  L_0 = (__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m25872_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4053 * L_0 = &(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_CurrentValue()
extern "C" VirtualButtonData_t711  Enumerator_get_CurrentValue_m25873_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4053 * L_0 = &(__this->___current_3);
		VirtualButtonData_t711  L_1 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::VerifyState()
extern "C" void Enumerator_VerifyState_m25874_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
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
		Dictionary_2_t920 * L_2 = (__this->___dictionary_0);
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25875_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
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
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Dispose()
extern "C" void Enumerator_Dispose_m25876_gshared (Enumerator_t4058 * __this, MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t920 *)NULL;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25877_gshared (Transform_1_t4059 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Int32>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25878_GenericMethod;
extern "C" int32_t Transform_1_Invoke_m25878_gshared (Transform_1_t4059 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25878((Transform_1_t4059 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25879_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25879_gshared (Transform_1_t4059 * __this, int32_t ___key, VirtualButtonData_t711  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___key);
	__d_args[1] = Box(InitializedTypeInfo(&VirtualButtonData_t711_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Int32>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25880_GenericMethod;
extern "C" int32_t Transform_1_EndInvoke_m25880_gshared (Transform_1_t4059 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_52.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_109.h"
extern TypeInfo Enumerator_t4061_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4062_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_109MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_52MethodDeclarations.h"
extern Il2CppType Enumerator_t4061_0_0_0;
extern Il2CppType Transform_1_t4062_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m25892_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m25814_MethodInfo;
extern MethodInfo Transform_1__ctor_m25900_MethodInfo;
extern MethodInfo Enumerator__ctor_m25895_MethodInfo;
struct Dictionary_2_t920;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_ICollectionCopyTo<Vuforia.QCARManagerImpl/VirtualButtonData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_ICollectionCopyTo<Vuforia.QCARManagerImpl/VirtualButtonData>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisVirtualButtonData_t711_m35921_gshared (Dictionary_2_t920 * __this, Array_t * p0, int32_t p1, Transform_1_t4062 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisVirtualButtonData_t711_m35921(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, Transform_1_t4062 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisVirtualButtonData_t711_m35921_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t920;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_CopyTo<Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Do_CopyTo<Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisVirtualButtonData_t711_TisVirtualButtonData_t711_m35922 (Dictionary_2_t920 * __this, VirtualButtonDataU5BU5D_t4051* p0, int32_t p1, Transform_1_t4062 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m25893_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m25892_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m25900_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisVirtualButtonData_t711_m35921_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisVirtualButtonData_t711_TisVirtualButtonData_t711_m35922_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25895_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m25881_gshared (ValueCollection_t4060 * __this, Dictionary_2_t920 * ___dictionary, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t920 * L_0 = ___dictionary;
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
		Dictionary_2_t920 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25882_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m25882_gshared (ValueCollection_t4060 * __this, VirtualButtonData_t711  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TValue>.Clear()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25883_GenericMethod;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m25883_gshared (ValueCollection_t4060 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25884_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m25884_gshared (ValueCollection_t4060 * __this, VirtualButtonData_t711  ___item, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		VirtualButtonData_t711  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t920 *, VirtualButtonData_t711 , MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25885_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m25885_gshared (ValueCollection_t4060 * __this, VirtualButtonData_t711  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m8832(L_0, (String_t*) &_stringLiteral1579, /*hidden argument*/&NotSupportedException__ctor_m8832_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25886_GenericMethod;
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m25886_gshared (ValueCollection_t4060 * __this, MethodInfo* method)
{
	{
		Enumerator_t4061  L_0 = (( Enumerator_t4061  (*) (ValueCollection_t4060 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4061  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_CopyTo_m25887_GenericMethod;
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m25887_gshared (ValueCollection_t4060 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
{
	VirtualButtonDataU5BU5D_t4051* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = ((VirtualButtonDataU5BU5D_t4051*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		VirtualButtonDataU5BU5D_t4051* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		VirtualButtonDataU5BU5D_t4051* L_2 = V_0;
		int32_t L_3 = ___index;
		VirtActionInvoker2< VirtualButtonDataU5BU5D_t4051*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), __this, L_2, L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t920 * L_4 = (__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck(L_4);
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_4, L_5, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t920 * L_7 = (__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t4062 * L_11 = (Transform_1_t4062 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t4062 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, NULL, L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_7);
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, Transform_1_t4062 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(L_7, L_8, L_9, L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25888_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m25888_gshared (ValueCollection_t4060 * __this, MethodInfo* method)
{
	{
		Enumerator_t4061  L_0 = (( Enumerator_t4061  (*) (ValueCollection_t4060 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t4061  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern Il2CppGenericMethod ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25889_GenericMethod;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m25889_gshared (ValueCollection_t4060 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_IsSynchronized_m25890_GenericMethod;
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m25890_gshared (ValueCollection_t4060 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ValueCollection_System_Collections_ICollection_get_SyncRoot_m25891_GenericMethod;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m25891_gshared (ValueCollection_t4060 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m25892_gshared (ValueCollection_t4060 * __this, VirtualButtonDataU5BU5D_t4051* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		VirtualButtonDataU5BU5D_t4051* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		(( void (*) (Dictionary_2_t920 *, Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_0, (Array_t *)(Array_t *)L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t920 * L_3 = (__this->___dictionary_0);
		VirtualButtonDataU5BU5D_t4051* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t4062 * L_7 = (Transform_1_t4062 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t4062 *, Object_t *, IntPtr_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, NULL, L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck(L_3);
		(( void (*) (Dictionary_2_t920 *, VirtualButtonDataU5BU5D_t4051*, int32_t, Transform_1_t4062 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)(L_3, L_4, L_5, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::GetEnumerator()
extern "C" Enumerator_t4061  ValueCollection_GetEnumerator_m25893_gshared (ValueCollection_t4060 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		Enumerator_t4061  L_1 = {0};
		(( void (*) (Enumerator_t4061 *, Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Count()
extern Il2CppGenericMethod ValueCollection_get_Count_m25894_GenericMethod;
extern "C" int32_t ValueCollection_get_Count_m25894_gshared (ValueCollection_t4060 * __this, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = (__this->___dictionary_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25895_gshared (Enumerator_t4061 * __this, Dictionary_2_t920 * ___host, MethodInfo* method)
{
	{
		Dictionary_2_t920 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t4058  L_1 = (( Enumerator_t4058  (*) (Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m25896_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25896_gshared (Enumerator_t4061 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		VirtualButtonData_t711  L_1 = (( VirtualButtonData_t711  (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		VirtualButtonData_t711  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m25897_GenericMethod;
extern "C" void Enumerator_Dispose_m25897_gshared (Enumerator_t4061 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m25898_GenericMethod;
extern "C" bool Enumerator_MoveNext_m25898_gshared (Enumerator_t4061 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m25899_GenericMethod;
extern "C" VirtualButtonData_t711  Enumerator_get_Current_m25899_gshared (Enumerator_t4061 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t4053 * L_1 = &(L_0->___current_3);
		VirtualButtonData_t711  L_2 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25900_gshared (Transform_1_t4062 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25901_GenericMethod;
extern "C" VirtualButtonData_t711  Transform_1_Invoke_m25901_gshared (Transform_1_t4062 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25901((Transform_1_t4062 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef VirtualButtonData_t711  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef VirtualButtonData_t711  (*FunctionPointerType) (Object_t * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25902_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25902_gshared (Transform_1_t4062 * __this, int32_t ___key, VirtualButtonData_t711  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___key);
	__d_args[1] = Box(InitializedTypeInfo(&VirtualButtonData_t711_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25903_GenericMethod;
extern "C" VirtualButtonData_t711  Transform_1_EndInvoke_m25903_gshared (Transform_1_t4062 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(VirtualButtonData_t711 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25904_gshared (Transform_1_t4052 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25905_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_Invoke_m25905_gshared (Transform_1_t4052 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25905((Transform_1_t4052 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef DictionaryEntry_t1610  (*FunctionPointerType) (Object_t * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25906_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25906_gshared (Transform_1_t4052 * __this, int32_t ___key, VirtualButtonData_t711  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___key);
	__d_args[1] = Box(InitializedTypeInfo(&VirtualButtonData_t711_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25907_GenericMethod;
extern "C" DictionaryEntry_t1610  Transform_1_EndInvoke_m25907_gshared (Transform_1_t4052 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t1610 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25908_gshared (Transform_1_t4063 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m25909_GenericMethod;
extern "C" KeyValuePair_2_t4053  Transform_1_Invoke_m25909_gshared (Transform_1_t4063 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m25909((Transform_1_t4063 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t4053  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t4053  (*FunctionPointerType) (Object_t * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m25910_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m25910_gshared (Transform_1_t4063 * __this, int32_t ___key, VirtualButtonData_t711  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___key);
	__d_args[1] = Box(InitializedTypeInfo(&VirtualButtonData_t711_il2cpp_TypeInfo), &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m25911_GenericMethod;
extern "C" KeyValuePair_2_t4053  Transform_1_EndInvoke_m25911_gshared (Transform_1_t4063 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t4053 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IDictionaryEnumerator_t1607_il2cpp_TypeInfo;
extern MethodInfo IDictionaryEnumerator_get_Entry_m14602_MethodInfo;
extern MethodInfo ShimEnumerator_get_Entry_m25914_MethodInfo;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m25914_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25912_gshared (ShimEnumerator_t4064 * __this, Dictionary_2_t920 * ___host, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Dictionary_2_t920 * L_0 = ___host;
		NullCheck(L_0);
		Enumerator_t4058  L_1 = (( Enumerator_t4058  (*) (Dictionary_2_t920 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::MoveNext()
extern Il2CppGenericMethod ShimEnumerator_MoveNext_m25913_GenericMethod;
extern "C" bool ShimEnumerator_MoveNext_m25913_gshared (ShimEnumerator_t4064 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m25914_gshared (ShimEnumerator_t4064 * __this, MethodInfo* method)
{
	{
		Enumerator_t4058  L_0 = (__this->___host_enumerator_0);
		Enumerator_t4058  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck(L_2);
		DictionaryEntry_t1610  L_3 = (DictionaryEntry_t1610 )InterfaceFuncInvoker0< DictionaryEntry_t1610  >::Invoke(&IDictionaryEnumerator_get_Entry_m14602_MethodInfo, L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Key()
extern Il2CppGenericMethod ShimEnumerator_get_Key_m25915_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Key_m25915_gshared (ShimEnumerator_t4064 * __this, MethodInfo* method)
{
	KeyValuePair_2_t4053  V_0 = {0};
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t4053  L_1 = (( KeyValuePair_2_t4053  (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Value()
extern Il2CppGenericMethod ShimEnumerator_get_Value_m25916_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Value_m25916_gshared (ShimEnumerator_t4064 * __this, MethodInfo* method)
{
	KeyValuePair_2_t4053  V_0 = {0};
	{
		Enumerator_t4058 * L_0 = &(__this->___host_enumerator_0);
		KeyValuePair_2_t4053  L_1 = (( KeyValuePair_2_t4053  (*) (Enumerator_t4058 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = L_1;
		VirtualButtonData_t711  L_2 = (( VirtualButtonData_t711  (*) (KeyValuePair_2_t4053 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		VirtualButtonData_t711  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
extern Il2CppGenericMethod ShimEnumerator_get_Current_m25917_GenericMethod;
extern "C" Object_t * ShimEnumerator_get_Current_m25917_gshared (ShimEnumerator_t4064 * __this, MethodInfo* method)
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



// System.Boolean System.Collections.Generic.IEqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_53.h"
extern TypeInfo TypeU5BU5D_t930_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t4066_il2cpp_TypeInfo;
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_53MethodDeclarations.h"
extern Il2CppType IEquatable_1_t5923_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2919_0_0_0;
extern Il2CppType TypeU5BU5D_t930_0_0_0;
extern Il2CppType DefaultComparer_t4066_0_0_0;
extern MethodInfo Type_IsAssignableFrom_m7470_MethodInfo;
extern MethodInfo Type_MakeGenericType_m7468_MethodInfo;
extern MethodInfo Activator_CreateInstance_m13747_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m25923_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39004_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m25923_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39004_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m25918_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m25918_gshared (EqualityComparer_1_t4065 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m25919_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m25919_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4066 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4066 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4066 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4065_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m25920_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m25920_gshared (EqualityComparer_1_t4065 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(VirtualButtonData_t711 *)((VirtualButtonData_t711 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m25921_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m25921_gshared (EqualityComparer_1_t4065 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, VirtualButtonData_t711 , VirtualButtonData_t711  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(VirtualButtonData_t711 *)((VirtualButtonData_t711 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(VirtualButtonData_t711 *)((VirtualButtonData_t711 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Vuforia.QCARManagerImpl/VirtualButtonData>::get_Default()
extern "C" EqualityComparer_1_t4065 * EqualityComparer_1_get_Default_m25922_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4065 * L_0 = ((EqualityComparer_1_t4065_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5923_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<Vuforia.QCARManagerImpl/VirtualButtonData>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor()
extern "C" void DefaultComparer__ctor_m25923_gshared (DefaultComparer_t4066 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4065 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/VirtualButtonData>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m25924_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m25924_gshared (DefaultComparer_t4066 * __this, VirtualButtonData_t711  ___obj, MethodInfo* method)
{
	{
		VirtualButtonData_t711  L_0 = ___obj;
		VirtualButtonData_t711  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.QCARManagerImpl/VirtualButtonData>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m25925_GenericMethod;
extern "C" bool DefaultComparer_Equals_m25925_gshared (DefaultComparer_t4066 * __this, VirtualButtonData_t711  ___x, VirtualButtonData_t711  ___y, MethodInfo* method)
{
	{
		VirtualButtonData_t711  L_0 = ___x;
		VirtualButtonData_t711  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		VirtualButtonData_t711  L_3 = ___y;
		VirtualButtonData_t711  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		VirtualButtonData_t711  L_6 = ___y;
		VirtualButtonData_t711  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
// System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_42.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t921_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_gen_42MethodDeclarations.h"

// Vuforia.VirtualButtonAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButtonAbstra.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_43.h"
// System.Predicate`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Predicate_1_gen_45.h"
// System.Collections.Generic.Comparer`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_44.h"
// System.Comparison`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Comparison_1_gen_44.h"
extern TypeInfo VirtualButtonAbstractBehaviour_t128_il2cpp_TypeInfo;
extern TypeInfo NullReferenceException_t853_il2cpp_TypeInfo;
extern TypeInfo InvalidCastException_t2504_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5005_il2cpp_TypeInfo;
extern TypeInfo VirtualButtonAbstractBehaviourU5BU5D_t800_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t924_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t821_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t923_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4068_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4072_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4073_il2cpp_TypeInfo;
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_43MethodDeclarations.h"
// System.Predicate`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Predicate_1_gen_45MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_16MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_44MethodDeclarations.h"
extern Il2CppType List_1_t921_0_0_0;
extern Il2CppType ICollection_1_t5005_0_0_0;
extern Il2CppType VirtualButtonAbstractBehaviourU5BU5D_t800_0_0_0;
extern Il2CppType Enumerator_t924_0_0_0;
extern Il2CppType IEnumerable_1_t821_0_0_0;
extern Il2CppType IEnumerator_1_t923_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4068_0_0_0;
extern Il2CppType Predicate_1_t4072_0_0_0;
extern Il2CppType Comparer_1_t4073_0_0_0;
extern MethodInfo List_1_get_Item_m25970_MethodInfo;
extern MethodInfo List_1_set_Item_m25971_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8994_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39005_MethodInfo;
extern MethodInfo List_1_Add_m5471_MethodInfo;
extern MethodInfo List_1_Contains_m25949_MethodInfo;
extern MethodInfo List_1_IndexOf_m25954_MethodInfo;
extern MethodInfo List_1_Insert_m25957_MethodInfo;
extern MethodInfo List_1_Remove_m25959_MethodInfo;
extern MethodInfo Math_Max_m10043_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39006_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m5469_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m5470_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m25976_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m26051_MethodInfo;
extern MethodInfo Enumerator__ctor_m25972_MethodInfo;
extern MethodInfo List_1_RemoveAt_m25961_MethodInfo;
extern MethodInfo Array_Reverse_m10075_MethodInfo;
extern MethodInfo Array_Copy_m9034_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisObject_t_m33054_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisObject_t_m33054(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Void System.Array::Resize<Vuforia.VirtualButtonAbstractBehaviour>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<Vuforia.VirtualButtonAbstractBehaviour>(!!0[]&,System.Int32)
#define Array_Resize_TisVirtualButtonAbstractBehaviour_t128_m35928(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, VirtualButtonAbstractBehaviourU5BU5D_t800**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_54.h"
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisObject_t_m14600_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, Object_t * p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14600(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Int32 System.Array::IndexOf<Vuforia.VirtualButtonAbstractBehaviour>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<Vuforia.VirtualButtonAbstractBehaviour>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisVirtualButtonAbstractBehaviour_t128_m35930(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, VirtualButtonAbstractBehaviourU5BU5D_t800*, VirtualButtonAbstractBehaviour_t128 *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33123_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisObject_t_m33123(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// Declaration System.Void System.Array::Sort<Vuforia.VirtualButtonAbstractBehaviour>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<Vuforia.VirtualButtonAbstractBehaviour>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisVirtualButtonAbstractBehaviour_t128_m35932(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, VirtualButtonAbstractBehaviourU5BU5D_t800*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
struct Array_t;
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3.h"
// Declaration System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<System.Object>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisObject_t_m33263_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* p0, int32_t p1, Comparison_1_t3104 * p2, MethodInfo* method);
#define Array_Sort_TisObject_t_m33263(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ObjectU5BU5D_t178*, int32_t, Comparison_1_t3104 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Void System.Array::Sort<Vuforia.VirtualButtonAbstractBehaviour>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<Vuforia.VirtualButtonAbstractBehaviour>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisVirtualButtonAbstractBehaviour_t128_m35940(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, VirtualButtonAbstractBehaviourU5BU5D_t800*, int32_t, Comparison_1_t4075 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m25970_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m25971_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisVirtualButtonAbstractBehaviour_t128_m35928_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m25956_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m25958_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m25945_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39005_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m25944_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m5498_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m5471_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m25949_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m25954_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m25957_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m25959_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m25943_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m25967_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m25968_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39006_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m5469_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m5470_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m25976_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisVirtualButtonAbstractBehaviour_t128_m35930_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m25952_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m25953_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m26051_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m25972_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m25955_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m25961_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m26057_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisVirtualButtonAbstractBehaviour_t128_m35932_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisVirtualButtonAbstractBehaviour_t128_m35940_GenericMethod;


// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor()
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Add(T)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Clear()
// System.Boolean System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Contains(T)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Reverse()
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Sort()
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::ToArray()
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Capacity()
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Count()
// T System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.VirtualButtonAbstractBehaviour>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo InvalidOperationException__ctor_m8818_MethodInfo;
extern MethodInfo Object_GetType_m975_MethodInfo;
extern MethodInfo Type_get_FullName_m7409_MethodInfo;
extern Il2CppGenericMethod Enumerator_VerifyState_m25975_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.VirtualButtonAbstractBehaviour>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.VirtualButtonAbstractBehaviour>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.VirtualButtonAbstractBehaviour>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<Vuforia.VirtualButtonAbstractBehaviour>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IList_1_t4067_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_t595_il2cpp_TypeInfo;
// System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_43MethodDeclarations.h"
extern Il2CppType IList_1_t4067_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m26005_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;
extern MethodInfo IList_1_get_Item_m39007_MethodInfo;
extern MethodInfo ICollection_CopyTo_m8807_MethodInfo;
extern MethodInfo IEnumerable_GetEnumerator_m7367_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39008_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39009_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m26005_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m39007_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m26037_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39008_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39009_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Item(System.Int32)
// System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4069_il2cpp_TypeInfo;

extern TypeInfo IList_t1352_il2cpp_TypeInfo;
extern Il2CppType Collection_1_t4069_0_0_0;
extern Il2CppType VirtualButtonAbstractBehaviour_t128_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39010_MethodInfo;
extern MethodInfo Collection_1_SetItem_m26036_MethodInfo;
extern MethodInfo List_1__ctor_m5468_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m26029_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m26027_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m26032_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m26023_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39011_MethodInfo;
extern MethodInfo IList_1_Insert_m39012_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39013_MethodInfo;
extern MethodInfo IList_1_set_Item_m39014_MethodInfo;
extern MethodInfo ICollection_get_IsSynchronized_m14878_MethodInfo;
extern MethodInfo IList_get_IsFixedSize_m14879_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39010_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m26040_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m26041_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m26038_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m26036_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m5468_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m26029_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m26039_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m26027_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m26032_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m26023_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39011_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39012_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39013_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39014_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::Add(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::Clear()
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::ClearItems()
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::Contains(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::IndexOf(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::Insert(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::InsertItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::Remove(T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::RemoveAt(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::RemoveItem(System.Int32)
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Count()
// T System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::set_Item(System.Int32,T)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::SetItem(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::IsValidItem(System.Object)
// T System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::ConvertItem(System.Object)
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::CheckWritable(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::IsSynchronized(System.Collections.Generic.IList`1<T>)
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.VirtualButtonAbstractBehaviour>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t4070_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_54MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_54.h"
extern TypeInfo DefaultComparer_t4071_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_54MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4070_0_0_0;
extern Il2CppType IEquatable_1_t5924_0_0_0;
extern Il2CppType DefaultComparer_t4071_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26047_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39015_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m35929_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m26047_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39015_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m35929_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5925_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5924_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<Vuforia.VirtualButtonAbstractBehaviour>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m26042_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>::Equals(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Object,System.IntPtr)
// System.Boolean System.Predicate`1<Vuforia.VirtualButtonAbstractBehaviour>::Invoke(T)
// System.IAsyncResult System.Predicate`1<Vuforia.VirtualButtonAbstractBehaviour>::BeginInvoke(T,System.AsyncCallback,System.Object)
// System.Boolean System.Predicate`1<Vuforia.VirtualButtonAbstractBehaviour>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_44.h"
extern TypeInfo DefaultComparer_t4074_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_44MethodDeclarations.h"
extern Il2CppType IComparable_1_t5333_0_0_0;
extern Il2CppType GenericComparer_1_t2830_0_0_0;
extern Il2CppType DefaultComparer_t4074_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26058_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39016_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13771_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m26058_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39016_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor()
// System.Void System.Collections.Generic.Comparer`1<Vuforia.VirtualButtonAbstractBehaviour>::.cctor()
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.VirtualButtonAbstractBehaviour>::System.Collections.IComparer.Compare(System.Object,System.Object)
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.VirtualButtonAbstractBehaviour>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<Vuforia.VirtualButtonAbstractBehaviour>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5332_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<Vuforia.VirtualButtonAbstractBehaviour>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5333_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<Vuforia.VirtualButtonAbstractBehaviour>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t243_il2cpp_TypeInfo;
extern MethodInfo IComparable_1_CompareTo_m35938_MethodInfo;
extern MethodInfo IComparable_CompareTo_m14570_MethodInfo;
extern Il2CppGenericMethod Comparer_1__ctor_m26054_GenericMethod;
extern Il2CppGenericMethod IComparable_1_CompareTo_m35938_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>::.ctor()
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.VirtualButtonAbstractBehaviour>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparison_1_t4075_il2cpp_TypeInfo;
// System.Comparison`1<Vuforia.VirtualButtonAbstractBehaviour>
#include "mscorlib_System_Comparison_1_gen_44MethodDeclarations.h"



// System.Void System.Comparison`1<Vuforia.VirtualButtonAbstractBehaviour>::.ctor(System.Object,System.IntPtr)
// System.Int32 System.Comparison`1<Vuforia.VirtualButtonAbstractBehaviour>::Invoke(T,T)
// System.IAsyncResult System.Comparison`1<Vuforia.VirtualButtonAbstractBehaviour>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
// System.Int32 System.Comparison`1<Vuforia.VirtualButtonAbstractBehaviour>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t805_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5011_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Vuforia.ImageTarget>::get_Current()
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_43.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t808_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_43MethodDeclarations.h"

// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_44.h"
// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Predicate_1_gen_46.h"
// System.Collections.Generic.Comparer`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_45.h"
// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Comparison_1_gen_45.h"
extern TypeInfo TargetSearchResult_t803_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5006_il2cpp_TypeInfo;
extern TypeInfo TargetSearchResultU5BU5D_t4076_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4078_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t804_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t849_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4080_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4084_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4085_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_44MethodDeclarations.h"
// System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Predicate_1_gen_46MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_52MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_45MethodDeclarations.h"
extern Il2CppType List_1_t808_0_0_0;
extern Il2CppType ICollection_1_t5006_0_0_0;
extern Il2CppType TargetSearchResultU5BU5D_t4076_0_0_0;
extern Il2CppType Enumerator_t4078_0_0_0;
extern Il2CppType IEnumerable_1_t804_0_0_0;
extern Il2CppType IEnumerator_1_t849_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4080_0_0_0;
extern Il2CppType Predicate_1_t4084_0_0_0;
extern Il2CppType Comparer_1_t4085_0_0_0;
extern MethodInfo List_1_get_Item_m26110_MethodInfo;
extern MethodInfo List_1_set_Item_m26111_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39017_MethodInfo;
extern MethodInfo List_1_Add_m5513_MethodInfo;
extern MethodInfo List_1_Contains_m26088_MethodInfo;
extern MethodInfo List_1_IndexOf_m26094_MethodInfo;
extern MethodInfo List_1_Insert_m26097_MethodInfo;
extern MethodInfo List_1_Remove_m26099_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m39018_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m4882_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m4883_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m26123_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m26198_MethodInfo;
extern MethodInfo Enumerator__ctor_m26117_MethodInfo;
extern MethodInfo List_1_RemoveAt_m26101_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<Vuforia.TargetFinder/TargetSearchResult>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<Vuforia.TargetFinder/TargetSearchResult>(!!0[]&,System.Int32)
extern "C" void Array_Resize_TisTargetSearchResult_t803_m35954_gshared (Object_t * __this /* static, unused */, TargetSearchResultU5BU5D_t4076** p0, int32_t p1, MethodInfo* method);
#define Array_Resize_TisTargetSearchResult_t803_m35954(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076**, int32_t, MethodInfo*))Array_Resize_TisTargetSearchResult_t803_m35954_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_55.h"
// Declaration System.Int32 System.Array::IndexOf<Vuforia.TargetFinder/TargetSearchResult>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<Vuforia.TargetFinder/TargetSearchResult>(!!0[],!!0,System.Int32,System.Int32)
extern "C" int32_t Array_IndexOf_TisTargetSearchResult_t803_m35956_gshared (Object_t * __this /* static, unused */, TargetSearchResultU5BU5D_t4076* p0, TargetSearchResult_t803  p1, int32_t p2, int32_t p3, MethodInfo* method);
#define Array_IndexOf_TisTargetSearchResult_t803_m35956(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076*, TargetSearchResult_t803 , int32_t, int32_t, MethodInfo*))Array_IndexOf_TisTargetSearchResult_t803_m35956_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<Vuforia.TargetFinder/TargetSearchResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<Vuforia.TargetFinder/TargetSearchResult>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
extern "C" void Array_Sort_TisTargetSearchResult_t803_m35958_gshared (Object_t * __this /* static, unused */, TargetSearchResultU5BU5D_t4076* p0, int32_t p1, int32_t p2, Object_t* p3, MethodInfo* method);
#define Array_Sort_TisTargetSearchResult_t803_m35958(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisTargetSearchResult_t803_m35958_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<Vuforia.TargetFinder/TargetSearchResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<Vuforia.TargetFinder/TargetSearchResult>(!!0[],System.Int32,System.Comparison`1<!!0>)
extern "C" void Array_Sort_TisTargetSearchResult_t803_m35966_gshared (Object_t * __this /* static, unused */, TargetSearchResultU5BU5D_t4076* p0, int32_t p1, Comparison_1_t4087 * p2, MethodInfo* method);
#define Array_Sort_TisTargetSearchResult_t803_m35966(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076*, int32_t, Comparison_1_t4087 *, MethodInfo*))Array_Sort_TisTargetSearchResult_t803_m35966_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m26110_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m26111_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisTargetSearchResult_t803_m35954_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m26096_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m26098_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m26084_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39017_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m26083_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m26093_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m5513_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m26088_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m26094_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m26097_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m26099_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m26082_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m26107_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m26108_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m39018_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m4882_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m4883_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m26123_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisTargetSearchResult_t803_m35956_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m26091_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m26092_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m26198_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m26117_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m26095_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m26101_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m26204_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisTargetSearchResult_t803_m35958_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisTargetSearchResult_t803_m35966_GenericMethod;


// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern Il2CppGenericMethod List_1__ctor_m5511_GenericMethod;
extern "C" void List_1__ctor_m5511_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TargetSearchResultU5BU5D_t4076* L_0 = ((List_1_t808_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_0;
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1__ctor_m26064_GenericMethod;
extern "C" void List_1__ctor_m26064_gshared (List_1_t808 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t808 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		TargetSearchResultU5BU5D_t4076* L_3 = ((List_1_t808_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4;
		__this->____items_1 = L_3;
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t808 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		goto IL_0043;
	}

IL_002b:
	{
		Object_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_5);
		__this->____items_1 = ((TargetSearchResultU5BU5D_t4076*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_6));
		Object_t* L_7 = V_0;
		(( void (*) (List_1_t808 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Int32)
extern Il2CppGenericMethod List_1__ctor_m26065_GenericMethod;
extern "C" void List_1__ctor_m26065_gshared (List_1_t808 * __this, int32_t ___capacity, MethodInfo* method)
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
		__this->____items_1 = ((TargetSearchResultU5BU5D_t4076*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_2));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::.cctor()
extern Il2CppGenericMethod List_1__cctor_m26066_GenericMethod;
extern "C" void List_1__cctor_m26066_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((List_1_t808_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->static_fields)->___EmptyArray_4 = ((TargetSearchResultU5BU5D_t4076*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), 0));
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26067_GenericMethod;
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26067_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		Enumerator_t4078  L_0 = (( Enumerator_t4078  (*) (List_1_t808 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t4078  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m26068_GenericMethod;
extern "C" void List_1_System_Collections_ICollection_CopyTo_m26068_gshared (List_1_t808 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m26069_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m26069_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		Enumerator_t4078  L_0 = (( Enumerator_t4078  (*) (List_1_t808 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		Enumerator_t4078  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Add_m26070_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_Add_m26070_gshared (List_1_t808 * __this, Object_t * ___item, MethodInfo* method)
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
			VirtActionInvoker1< TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
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
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Contains_m26071_GenericMethod;
extern "C" bool List_1_System_Collections_IList_Contains_m26071_gshared (List_1_t808 * __this, Object_t * ___item, MethodInfo* method)
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
			bool L_1 = (bool)VirtFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), __this, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
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
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m26072_GenericMethod;
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m26072_gshared (List_1_t808 * __this, Object_t * ___item, MethodInfo* method)
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
			int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
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
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Insert_m26073_GenericMethod;
extern "C" void List_1_System_Collections_IList_Insert_m26073_gshared (List_1_t808 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t808 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = ___index;
			Object_t * L_2 = ___item;
			VirtActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14), __this, L_1, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
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
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_Remove_m26074_GenericMethod;
extern "C" void List_1_System_Collections_IList_Remove_m26074_gshared (List_1_t808 * __this, Object_t * ___item, MethodInfo* method)
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
			VirtFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15), __this, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
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
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26075_GenericMethod;
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26075_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_IsSynchronized_m26076_GenericMethod;
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m26076_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m26077_GenericMethod;
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m26077_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsFixedSize_m26078_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m26078_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod List_1_System_Collections_IList_get_IsReadOnly_m26079_GenericMethod;
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m26079_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m26080_GenericMethod;
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m26080_gshared (List_1_t808 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		TargetSearchResult_t803  L_1 = (TargetSearchResult_t803 )VirtFuncInvoker1< TargetSearchResult_t803 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), __this, L_0);
		TargetSearchResult_t803  L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m26081_GenericMethod;
extern "C" void List_1_System_Collections_IList_set_Item_m26081_gshared (List_1_t808 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
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
			VirtActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9))))));
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
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Add(T)
extern "C" void List_1_Add_m5513_gshared (List_1_t808 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		TargetSearchResultU5BU5D_t4076* L_1 = (__this->____items_1);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		(( void (*) (List_1_t808 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_0017:
	{
		TargetSearchResultU5BU5D_t4076* L_2 = (__this->____items_1);
		int32_t L_3 = (__this->____size_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->____size_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		TargetSearchResult_t803  L_6 = ___item;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_5);
		*((TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_2, L_5)) = (TargetSearchResult_t803 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m26082_gshared (List_1_t808 * __this, int32_t ___newCount, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->____size_2);
		int32_t L_1 = ___newCount;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_1));
		int32_t L_2 = V_0;
		TargetSearchResultU5BU5D_t4076* L_3 = (__this->____items_1);
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = (( int32_t (*) (List_1_t808 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19));
		int32_t L_5 = Math_Max_m10043(NULL /*static, unused*/, ((int32_t)((int32_t)L_4*(int32_t)2)), 4, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		int32_t L_6 = V_0;
		int32_t L_7 = Math_Max_m10043(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math_Max_m10043_MethodInfo);
		(( void (*) (List_1_t808 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m26083_gshared (List_1_t808 * __this, Object_t* ___collection, MethodInfo* method)
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
		(( void (*) (List_1_t808 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		Object_t* L_4 = ___collection;
		TargetSearchResultU5BU5D_t4076* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		NullCheck(L_4);
		InterfaceActionInvoker2< TargetSearchResultU5BU5D_t4076*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_4, L_5, L_6);
		int32_t L_7 = (__this->____size_2);
		int32_t L_8 = V_0;
		__this->____size_2 = ((int32_t)((int32_t)L_7+(int32_t)L_8));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m26084_gshared (List_1_t808 * __this, Object_t* ___enumerable, MethodInfo* method)
{
	TargetSearchResult_t803  V_0 = {0};
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
			TargetSearchResult_t803  L_3 = (TargetSearchResult_t803 )InterfaceFuncInvoker0< TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_2);
			V_0 = L_3;
			TargetSearchResult_t803  L_4 = V_0;
			VirtActionInvoker1< TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), __this, L_4);
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
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern Il2CppGenericMethod List_1_AddRange_m26085_GenericMethod;
extern "C" void List_1_AddRange_m26085_gshared (List_1_t808 * __this, Object_t* ___collection, MethodInfo* method)
{
	Object_t* V_0 = {0};
	{
		Object_t* L_0 = ___collection;
		(( void (*) (List_1_t808 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
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
		(( void (*) (List_1_t808 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(__this, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		goto IL_0021;
	}

IL_001a:
	{
		Object_t* L_4 = ___collection;
		(( void (*) (List_1_t808 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)(__this, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
	}

IL_0021:
	{
		int32_t L_5 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_5+(int32_t)1));
		return;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::AsReadOnly()
extern Il2CppGenericMethod List_1_AsReadOnly_m26086_GenericMethod;
extern "C" ReadOnlyCollection_1_t4080 * List_1_AsReadOnly_m26086_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		ReadOnlyCollection_1_t4080 * L_0 = (ReadOnlyCollection_1_t4080 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 24));
		(( void (*) (ReadOnlyCollection_1_t4080 *, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25)->method)(L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 25));
		return L_0;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Clear()
extern Il2CppGenericMethod List_1_Clear_m26087_GenericMethod;
extern "C" void List_1_Clear_m26087_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		TargetSearchResultU5BU5D_t4076* L_1 = (__this->____items_1);
		NullCheck(L_1);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (((int32_t)(((Array_t *)L_1)->max_length))), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		__this->____size_2 = 0;
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Contains(T)
extern "C" bool List_1_Contains_m26088_gshared (List_1_t808 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		TargetSearchResult_t803  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076*, TargetSearchResult_t803 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod List_1_CopyTo_m26089_GenericMethod;
extern "C" void List_1_CopyTo_m26089_gshared (List_1_t808 * __this, TargetSearchResultU5BU5D_t4076* ___array, int32_t ___arrayIndex, MethodInfo* method)
{
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		TargetSearchResultU5BU5D_t4076* L_1 = ___array;
		int32_t L_2 = ___arrayIndex;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m10846(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, (Array_t *)(Array_t *)L_1, L_2, L_3, /*hidden argument*/&Array_Copy_m10846_MethodInfo);
		return;
	}
}
// T System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Find(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_Find_m26090_GenericMethod;
extern TypeInfo* List_1_t808_il2cpp_TypeInfo_var;
extern "C" TargetSearchResult_t803  List_1_Find_m26090_gshared (List_1_t808 * __this, Predicate_1_t4084 * ___match, MethodInfo* method)
{
	static bool List_1_Find_m26090_init;
	if (!List_1_Find_m26090_init)
	{
		List_1_t808_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t808_0_0_0);
		List_1_Find_m26090_init = true;
	}
	int32_t V_0 = 0;
	TargetSearchResult_t803  V_1 = {0};
	TargetSearchResult_t803  G_B3_0 = {0};
	{
		Predicate_1_t4084 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t808_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t4084 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		int32_t L_1 = (__this->____size_2);
		Predicate_1_t4084 * L_2 = ___match;
		int32_t L_3 = (( int32_t (*) (List_1_t808 *, int32_t, int32_t, Predicate_1_t4084 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28)->method)(__this, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 28));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0027;
		}
	}
	{
		TargetSearchResultU5BU5D_t4076* L_5 = (__this->____items_1);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		G_B3_0 = (*(TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_5, L_7));
		goto IL_0030;
	}

IL_0027:
	{
		Initobj (InitializedTypeInfo(&TargetSearchResult_t803_il2cpp_TypeInfo), (&V_1));
		TargetSearchResult_t803  L_8 = V_1;
		G_B3_0 = L_8;
	}

IL_0030:
	{
		return G_B3_0;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m26091_gshared (Object_t * __this /* static, unused */, Predicate_1_t4084 * ___match, MethodInfo* method)
{
	{
		Predicate_1_t4084 * L_0 = ___match;
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
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m26092_gshared (List_1_t808 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t4084 * ___match, MethodInfo* method)
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
		Predicate_1_t4084 * L_3 = ___match;
		TargetSearchResultU5BU5D_t4076* L_4 = (__this->____items_1);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		bool L_7 = (bool)VirtFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_3, (*(TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_4, L_6)));
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::GetEnumerator()
extern "C" Enumerator_t4078  List_1_GetEnumerator_m26093_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		Enumerator_t4078  L_0 = {0};
		(( void (*) (Enumerator_t4078 *, List_1_t808 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30)->method)(&L_0, __this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 30));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m26094_gshared (List_1_t808 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		TargetSearchResult_t803  L_1 = ___item;
		int32_t L_2 = (__this->____size_2);
		int32_t L_3 = (( int32_t (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076*, TargetSearchResult_t803 , int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26)->method)(NULL /*static, unused*/, L_0, L_1, 0, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 26));
		return L_3;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m26095_gshared (List_1_t808 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method)
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
		TargetSearchResultU5BU5D_t4076* L_5 = (__this->____items_1);
		int32_t L_6 = ___start;
		TargetSearchResultU5BU5D_t4076* L_7 = (__this->____items_1);
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
		TargetSearchResultU5BU5D_t4076* L_15 = (__this->____items_1);
		int32_t L_16 = (__this->____size_2);
		int32_t L_17 = ___delta;
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, L_16, ((-L_17)), /*hidden argument*/&Array_Clear_m10034_MethodInfo);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m26096_gshared (List_1_t808 * __this, int32_t ___index, MethodInfo* method)
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
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m26097_gshared (List_1_t808 * __this, int32_t ___index, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t808 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		int32_t L_1 = (__this->____size_2);
		TargetSearchResultU5BU5D_t4076* L_2 = (__this->____items_1);
		NullCheck(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)(((int32_t)(((Array_t *)L_2)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		(( void (*) (List_1_t808 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)(__this, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
	}

IL_001e:
	{
		int32_t L_3 = ___index;
		(( void (*) (List_1_t808 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_3, 1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		TargetSearchResultU5BU5D_t4076* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		TargetSearchResult_t803  L_6 = ___item;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_4, L_5)) = (TargetSearchResult_t803 )L_6;
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m26098_gshared (List_1_t808 * __this, Object_t* ___collection, MethodInfo* method)
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
// System.Boolean System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Remove(T)
extern "C" bool List_1_Remove_m26099_gshared (List_1_t808 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TargetSearchResult_t803  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
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
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAll(System.Predicate`1<T>)
extern Il2CppGenericMethod List_1_RemoveAll_m26100_GenericMethod;
extern TypeInfo* List_1_t808_il2cpp_TypeInfo_var;
extern "C" int32_t List_1_RemoveAll_m26100_gshared (List_1_t808 * __this, Predicate_1_t4084 * ___match, MethodInfo* method)
{
	static bool List_1_RemoveAll_m26100_init;
	if (!List_1_RemoveAll_m26100_init)
	{
		List_1_t808_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t808_0_0_0);
		List_1_RemoveAll_m26100_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t4084 * L_0 = ___match;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t808_il2cpp_TypeInfo_var);
		(( void (*) (Object_t * /* static, unused */, Predicate_1_t4084 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 27));
		V_0 = 0;
		V_1 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_000e:
	{
		Predicate_1_t4084 * L_1 = ___match;
		TargetSearchResultU5BU5D_t4076* L_2 = (__this->____items_1);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		bool L_5 = (bool)VirtFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_1, (*(TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_2, L_4)));
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
		Predicate_1_t4084 * L_13 = ___match;
		TargetSearchResultU5BU5D_t4076* L_14 = (__this->____items_1);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		bool L_17 = (bool)VirtFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 29), L_13, (*(TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_14, L_16)));
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		TargetSearchResultU5BU5D_t4076* L_18 = (__this->____items_1);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		TargetSearchResultU5BU5D_t4076* L_21 = (__this->____items_1);
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		*((TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_18, L_20)) = (TargetSearchResult_t803 )(*(TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_21, L_23));
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
		TargetSearchResultU5BU5D_t4076* L_29 = (__this->____items_1);
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
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m26101_gshared (List_1_t808 * __this, int32_t ___index, MethodInfo* method)
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
		(( void (*) (List_1_t808 *, int32_t, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31)->method)(__this, L_4, (-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 31));
		TargetSearchResultU5BU5D_t4076* L_5 = (__this->____items_1);
		int32_t L_6 = (__this->____size_2);
		Array_Clear_m10034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, L_6, 1, /*hidden argument*/&Array_Clear_m10034_MethodInfo);
		int32_t L_7 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Reverse()
extern Il2CppGenericMethod List_1_Reverse_m26102_GenericMethod;
extern "C" void List_1_Reverse_m26102_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Array_Reverse_m10075(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, 0, L_1, /*hidden argument*/&Array_Reverse_m10075_MethodInfo);
		int32_t L_2 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort()
extern Il2CppGenericMethod List_1_Sort_m26103_GenericMethod;
extern TypeInfo* Comparer_1_t4085_il2cpp_TypeInfo_var;
extern "C" void List_1_Sort_m26103_gshared (List_1_t808 * __this, MethodInfo* method)
{
	static bool List_1_Sort_m26103_init;
	if (!List_1_Sort_m26103_init)
	{
		Comparer_1_t4085_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Comparer_1_t4085_0_0_0);
		List_1_Sort_m26103_init = true;
	}
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t4085_il2cpp_TypeInfo_var);
		Comparer_1_t4085 * L_2 = (( Comparer_1_t4085 * (*) (Object_t * /* static, unused */, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 33));
		(( void (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076*, int32_t, int32_t, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34)->method)(NULL /*static, unused*/, L_0, 0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 34));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::Sort(System.Comparison`1<T>)
extern Il2CppGenericMethod List_1_Sort_m26104_GenericMethod;
extern "C" void List_1_Sort_m26104_gshared (List_1_t808 * __this, Comparison_1_t4087 * ___comparison, MethodInfo* method)
{
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		int32_t L_1 = (__this->____size_2);
		Comparison_1_t4087 * L_2 = ___comparison;
		(( void (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076*, int32_t, Comparison_1_t4087 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35)->method)(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 35));
		int32_t L_3 = (__this->____version_3);
		__this->____version_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// T[] System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::ToArray()
extern Il2CppGenericMethod List_1_ToArray_m26105_GenericMethod;
extern "C" TargetSearchResultU5BU5D_t4076* List_1_ToArray_m26105_gshared (List_1_t808 * __this, MethodInfo* method)
{
	TargetSearchResultU5BU5D_t4076* V_0 = {0};
	{
		int32_t L_0 = (__this->____size_2);
		V_0 = ((TargetSearchResultU5BU5D_t4076*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0));
		TargetSearchResultU5BU5D_t4076* L_1 = (__this->____items_1);
		TargetSearchResultU5BU5D_t4076* L_2 = V_0;
		int32_t L_3 = (__this->____size_2);
		Array_Copy_m9034(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/&Array_Copy_m9034_MethodInfo);
		TargetSearchResultU5BU5D_t4076* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::TrimExcess()
extern Il2CppGenericMethod List_1_TrimExcess_m26106_GenericMethod;
extern "C" void List_1_TrimExcess_m26106_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		(( void (*) (List_1_t808 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m26107_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		TargetSearchResultU5BU5D_t4076* L_0 = (__this->____items_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m26108_gshared (List_1_t808 * __this, int32_t ___value, MethodInfo* method)
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
		TargetSearchResultU5BU5D_t4076** L_3 = &(__this->____items_1);
		int32_t L_4 = ___value;
		(( void (*) (Object_t * /* static, unused */, TargetSearchResultU5BU5D_t4076**, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36)->method)(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 36));
		return;
	}
}
// System.Int32 System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Count()
extern Il2CppGenericMethod List_1_get_Count_m26109_GenericMethod;
extern "C" int32_t List_1_get_Count_m26109_gshared (List_1_t808 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____size_2);
		return L_0;
	}
}
// T System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::get_Item(System.Int32)
extern "C" TargetSearchResult_t803  List_1_get_Item_m26110_gshared (List_1_t808 * __this, int32_t ___index, MethodInfo* method)
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
		TargetSearchResultU5BU5D_t4076* L_3 = (__this->____items_1);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m26111_gshared (List_1_t808 * __this, int32_t ___index, TargetSearchResult_t803  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		(( void (*) (List_1_t808 *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)(__this, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
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
		TargetSearchResultU5BU5D_t4076* L_4 = (__this->____items_1);
		int32_t L_5 = ___index;
		TargetSearchResult_t803  L_6 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_4, L_5)) = (TargetSearchResult_t803 )L_6;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.TargetFinder/TargetSearchResult>::Remove(T)
// System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_175.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4077_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_175MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4077_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.TargetFinder/TargetSearchResult>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.TargetFinder/TargetSearchResult>(System.Int32)
extern "C" TargetSearchResult_t803  Array_InternalArray__get_Item_TisTargetSearchResult_t803_m35943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisTargetSearchResult_t803_m35943(__this, p0, method) (( TargetSearchResult_t803  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisTargetSearchResult_t803_m35943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26116_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisTargetSearchResult_t803_m35943_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26112_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m26112_gshared (InternalEnumerator_1_t4077 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26113_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26113_gshared (InternalEnumerator_1_t4077 * __this, MethodInfo* method)
{
	{
		TargetSearchResult_t803  L_0 = (( TargetSearchResult_t803  (*) (InternalEnumerator_1_t4077 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TargetSearchResult_t803  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26114_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m26114_gshared (InternalEnumerator_1_t4077 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26115_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m26115_gshared (InternalEnumerator_1_t4077 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<Vuforia.TargetFinder/TargetSearchResult>::get_Current()
extern "C" TargetSearchResult_t803  InternalEnumerator_1_get_Current_m26116_gshared (InternalEnumerator_1_t4077 * __this, MethodInfo* method)
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
		TargetSearchResult_t803  L_8 = (( TargetSearchResult_t803  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4079_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.TargetFinder/TargetSearchResult>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.TargetFinder/TargetSearchResult>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.TargetFinder/TargetSearchResult>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.TargetFinder/TargetSearchResult>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m26120_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m26117_gshared (Enumerator_t4078 * __this, List_1_t808 * ___l, MethodInfo* method)
{
	{
		List_1_t808 * L_0 = ___l;
		__this->___l_0 = L_0;
		List_1_t808 * L_1 = ___l;
		NullCheck(L_1);
		int32_t L_2 = (L_1->____version_3);
		__this->___ver_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod Enumerator_System_Collections_IEnumerator_get_Current_m26118_GenericMethod;
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m26118_gshared (Enumerator_t4078 * __this, MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t4078 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		TargetSearchResult_t803  L_2 = (__this->___current_3);
		TargetSearchResult_t803  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>::Dispose()
extern Il2CppGenericMethod Enumerator_Dispose_m26119_GenericMethod;
extern "C" void Enumerator_Dispose_m26119_gshared (Enumerator_t4078 * __this, MethodInfo* method)
{
	{
		__this->___l_0 = (List_1_t808 *)NULL;
		return;
	}
}
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>::VerifyState()
extern "C" void Enumerator_VerifyState_m26120_gshared (Enumerator_t4078 * __this, MethodInfo* method)
{
	{
		List_1_t808 * L_0 = (__this->___l_0);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Enumerator_t4078  L_1 = (*(Enumerator_t4078 *)__this);
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
		List_1_t808 * L_7 = (__this->___l_0);
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
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>::MoveNext()
extern Il2CppGenericMethod Enumerator_MoveNext_m26121_GenericMethod;
extern "C" bool Enumerator_MoveNext_m26121_gshared (Enumerator_t4078 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		(( void (*) (Enumerator_t4078 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
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
		List_1_t808 * L_2 = (__this->___l_0);
		NullCheck(L_2);
		int32_t L_3 = (L_2->____size_2);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_004d;
		}
	}
	{
		List_1_t808 * L_4 = (__this->___l_0);
		NullCheck(L_4);
		TargetSearchResultU5BU5D_t4076* L_5 = (L_4->____items_1);
		int32_t L_6 = (__this->___next_1);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___next_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		__this->___current_3 = (*(TargetSearchResult_t803 *)(TargetSearchResult_t803 *)SZArrayLdElema(L_5, L_9));
		return 1;
	}

IL_004d:
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// T System.Collections.Generic.List`1/Enumerator<Vuforia.TargetFinder/TargetSearchResult>::get_Current()
extern Il2CppGenericMethod Enumerator_get_Current_m26122_GenericMethod;
extern "C" TargetSearchResult_t803  Enumerator_get_Current_m26122_gshared (Enumerator_t4078 * __this, MethodInfo* method)
{
	{
		TargetSearchResult_t803  L_0 = (__this->___current_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_44MethodDeclarations.h"
extern Il2CppType IList_1_t4079_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m26152_MethodInfo;
extern MethodInfo IList_1_get_Item_m39019_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39020_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39021_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m26152_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m39019_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m26184_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39020_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39021_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C" void ReadOnlyCollection_1__ctor_m26123_gshared (ReadOnlyCollection_1_t4080 * __this, Object_t* ___list, MethodInfo* method)
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
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.Add(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26124_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m26124_gshared (ReadOnlyCollection_1_t4080 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m26125_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m26125_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m26126_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m26126_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.Remove(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m26127_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m26127_gshared (ReadOnlyCollection_1_t4080 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m26128_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m26128_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m26129_GenericMethod;
extern "C" TargetSearchResult_t803  ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m26129_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		TargetSearchResult_t803  L_1 = (TargetSearchResult_t803 )VirtFuncInvoker1< TargetSearchResult_t803 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this, L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m26130_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m26130_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, TargetSearchResult_t803  ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26131_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26131_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m26132_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m26132_gshared (ReadOnlyCollection_1_t4080 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m26133_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m26133_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&IEnumerable_GetEnumerator_m7367_MethodInfo, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Add_m26134_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m26134_gshared (ReadOnlyCollection_1_t4080 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Clear()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Clear_m26135_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m26135_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Contains_m26136_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m26136_gshared (ReadOnlyCollection_1_t4080 * __this, Object_t * ___value, MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_2, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_IndexOf_m26137_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m26137_gshared (ReadOnlyCollection_1_t4080 * __this, Object_t * ___value, MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_2, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Insert_m26138_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m26138_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_Remove_m26139_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m26139_gshared (ReadOnlyCollection_1_t4080 * __this, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.RemoveAt(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m26140_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m26140_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m26141_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m26141_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m26142_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m26142_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m26143_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m26143_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m26144_GenericMethod;
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m26144_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_get_Item_m26145_GenericMethod;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m26145_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		TargetSearchResult_t803  L_2 = (TargetSearchResult_t803 )InterfaceFuncInvoker1< TargetSearchResult_t803 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		TargetSearchResult_t803  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod ReadOnlyCollection_1_System_Collections_IList_set_Item_m26146_GenericMethod;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m26146_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::Contains(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_Contains_m26147_GenericMethod;
extern "C" bool ReadOnlyCollection_1_Contains_m26147_gshared (ReadOnlyCollection_1_t4080 * __this, TargetSearchResult_t803  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		TargetSearchResult_t803  L_1 = ___value;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod ReadOnlyCollection_1_CopyTo_m26148_GenericMethod;
extern "C" void ReadOnlyCollection_1_CopyTo_m26148_gshared (ReadOnlyCollection_1_t4080 * __this, TargetSearchResultU5BU5D_t4076* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		TargetSearchResultU5BU5D_t4076* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< TargetSearchResultU5BU5D_t4076*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::GetEnumerator()
extern Il2CppGenericMethod ReadOnlyCollection_1_GetEnumerator_m26149_GenericMethod;
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m26149_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::IndexOf(T)
extern Il2CppGenericMethod ReadOnlyCollection_1_IndexOf_m26150_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m26150_gshared (ReadOnlyCollection_1_t4080 * __this, TargetSearchResult_t803  ___value, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		TargetSearchResult_t803  L_1 = ___value;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::get_Count()
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Count_m26151_GenericMethod;
extern "C" int32_t ReadOnlyCollection_1_get_Count_m26151_gshared (ReadOnlyCollection_1_t4080 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.TargetFinder/TargetSearchResult>::get_Item(System.Int32)
extern "C" TargetSearchResult_t803  ReadOnlyCollection_1_get_Item_m26152_gshared (ReadOnlyCollection_1_t4080 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		TargetSearchResult_t803  L_2 = (TargetSearchResult_t803 )InterfaceFuncInvoker1< TargetSearchResult_t803 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_0, L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Collection_1_t4081_il2cpp_TypeInfo;

extern Il2CppType Collection_1_t4081_0_0_0;
extern Il2CppType TargetSearchResult_t803_0_0_0;
extern MethodInfo ICollection_1_get_IsReadOnly_m39022_MethodInfo;
extern MethodInfo Collection_1_SetItem_m26183_MethodInfo;
extern MethodInfo List_1__ctor_m5511_MethodInfo;
extern MethodInfo Collection_1_InsertItem_m26176_MethodInfo;
extern MethodInfo Collection_1_IndexOf_m26174_MethodInfo;
extern MethodInfo Collection_1_RemoveItem_m26179_MethodInfo;
extern MethodInfo Collection_1_ClearItems_m26170_MethodInfo;
extern MethodInfo ICollection_1_Clear_m39023_MethodInfo;
extern MethodInfo IList_1_Insert_m39024_MethodInfo;
extern MethodInfo IList_1_RemoveAt_m39025_MethodInfo;
extern MethodInfo IList_1_set_Item_m39026_MethodInfo;
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m39022_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsSynchronized_m26187_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsFixedSize_m26188_GenericMethod;
extern Il2CppGenericMethod Collection_1_ConvertItem_m26185_GenericMethod;
extern Il2CppGenericMethod Collection_1_SetItem_m26183_GenericMethod;
extern Il2CppGenericMethod Collection_1_InsertItem_m26176_GenericMethod;
extern Il2CppGenericMethod Collection_1_CheckWritable_m26186_GenericMethod;
extern Il2CppGenericMethod Collection_1_IndexOf_m26174_GenericMethod;
extern Il2CppGenericMethod Collection_1_RemoveItem_m26179_GenericMethod;
extern Il2CppGenericMethod Collection_1_ClearItems_m26170_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Clear_m39023_GenericMethod;
extern Il2CppGenericMethod IList_1_Insert_m39024_GenericMethod;
extern Il2CppGenericMethod IList_1_RemoveAt_m39025_GenericMethod;
extern Il2CppGenericMethod IList_1_set_Item_m39026_GenericMethod;


// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern Il2CppGenericMethod Collection_1__ctor_m26153_GenericMethod;
extern TypeInfo* List_1_t808_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m26153_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	static bool Collection_1__ctor_m26153_init;
	if (!Collection_1__ctor_m26153_init)
	{
		List_1_t808_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t808_0_0_0);
		Collection_1__ctor_m26153_init = true;
	}
	List_1_t808 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t808_il2cpp_TypeInfo_var);
		List_1_t808 * L_0 = (List_1_t808 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t808 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_0;
		List_1_t808 * L_1 = V_0;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(&ICollection_get_SyncRoot_m14599_MethodInfo, L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t808 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26154_GenericMethod;
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26154_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_CopyTo_m26155_GenericMethod;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m26155_gshared (Collection_1_t4081 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method)
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
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEnumerable.GetEnumerator()
extern Il2CppGenericMethod Collection_1_System_Collections_IEnumerable_GetEnumerator_m26156_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m26156_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Add(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Add_m26157_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_Add_m26157_gshared (Collection_1_t4081 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		TargetSearchResult_t803  L_4 = (( TargetSearchResult_t803  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Contains(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Contains_m26158_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_Contains_m26158_gshared (Collection_1_t4081 * __this, Object_t * ___value, MethodInfo* method)
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
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_2, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.IndexOf(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_IndexOf_m26159_GenericMethod;
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m26159_gshared (Collection_1_t4081 * __this, Object_t * ___value, MethodInfo* method)
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
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_2, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8))))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Insert_m26160_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Insert_m26160_gshared (Collection_1_t4081 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		TargetSearchResult_t803  L_2 = (( TargetSearchResult_t803  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.Remove(System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_Remove_m26161_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_Remove_m26161_gshared (Collection_1_t4081 * __this, Object_t * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		Object_t * L_1 = ___value;
		TargetSearchResult_t803  L_2 = (( TargetSearchResult_t803  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_4);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_IsSynchronized()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_IsSynchronized_m26162_GenericMethod;
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m26162_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.ICollection.get_SyncRoot()
extern Il2CppGenericMethod Collection_1_System_Collections_ICollection_get_SyncRoot_m26163_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m26163_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___syncRoot_1);
		return L_0;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsFixedSize()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsFixedSize_m26164_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m26164_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15)->method)(NULL /*static, unused*/, L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		return L_1;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_IsReadOnly()
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_IsReadOnly_m26165_GenericMethod;
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m26165_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_0);
		return L_1;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_get_Item_m26166_GenericMethod;
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m26166_gshared (Collection_1_t4081 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		TargetSearchResult_t803  L_2 = (TargetSearchResult_t803 )InterfaceFuncInvoker1< TargetSearchResult_t803 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		TargetSearchResult_t803  L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), &L_3);
		return L_4;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern Il2CppGenericMethod Collection_1_System_Collections_IList_set_Item_m26167_GenericMethod;
extern "C" void Collection_1_System_Collections_IList_set_Item_m26167_gshared (Collection_1_t4081 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		TargetSearchResult_t803  L_2 = (( TargetSearchResult_t803  (*) (Object_t * /* static, unused */, Object_t *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		VirtActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::Add(T)
extern Il2CppGenericMethod Collection_1_Add_m26168_GenericMethod;
extern "C" void Collection_1_Add_m26168_gshared (Collection_1_t4081 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		TargetSearchResult_t803  L_3 = ___item;
		VirtActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_2, L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::Clear()
extern Il2CppGenericMethod Collection_1_Clear_m26169_GenericMethod;
extern "C" void Collection_1_Clear_m26169_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18), __this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::ClearItems()
extern "C" void Collection_1_ClearItems_m26170_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 19), L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::Contains(T)
extern Il2CppGenericMethod Collection_1_Contains_m26171_GenericMethod;
extern "C" bool Collection_1_Contains_m26171_gshared (Collection_1_t4081 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		TargetSearchResult_t803  L_1 = ___item;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::CopyTo(T[],System.Int32)
extern Il2CppGenericMethod Collection_1_CopyTo_m26172_GenericMethod;
extern "C" void Collection_1_CopyTo_m26172_gshared (Collection_1_t4081 * __this, TargetSearchResultU5BU5D_t4076* ___array, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		TargetSearchResultU5BU5D_t4076* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< TargetSearchResultU5BU5D_t4076*, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 20), L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::GetEnumerator()
extern Il2CppGenericMethod Collection_1_GetEnumerator_m26173_GenericMethod;
extern "C" Object_t* Collection_1_GetEnumerator_m26173_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m26174_gshared (Collection_1_t4081 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		TargetSearchResult_t803  L_1 = ___item;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::Insert(System.Int32,T)
extern Il2CppGenericMethod Collection_1_Insert_m26175_GenericMethod;
extern "C" void Collection_1_Insert_m26175_gshared (Collection_1_t4081 * __this, int32_t ___index, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		TargetSearchResult_t803  L_1 = ___item;
		VirtActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m26176_gshared (Collection_1_t4081 * __this, int32_t ___index, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		TargetSearchResult_t803  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 21), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::Remove(T)
extern Il2CppGenericMethod Collection_1_Remove_m26177_GenericMethod;
extern "C" bool Collection_1_Remove_m26177_gshared (Collection_1_t4081 * __this, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TargetSearchResult_t803  L_0 = ___item;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12), __this, L_0);
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
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveAt(System.Int32)
extern Il2CppGenericMethod Collection_1_RemoveAt_m26178_GenericMethod;
extern "C" void Collection_1_RemoveAt_m26178_gshared (Collection_1_t4081 * __this, int32_t ___index, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		VirtActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13), __this, L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m26179_gshared (Collection_1_t4081 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 22), L_0, L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::get_Count()
extern Il2CppGenericMethod Collection_1_get_Count_m26180_GenericMethod;
extern "C" int32_t Collection_1_get_Count_m26180_gshared (Collection_1_t4081 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::get_Item(System.Int32)
extern Il2CppGenericMethod Collection_1_get_Item_m26181_GenericMethod;
extern "C" TargetSearchResult_t803  Collection_1_get_Item_m26181_gshared (Collection_1_t4081 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		TargetSearchResult_t803  L_2 = (TargetSearchResult_t803 )InterfaceFuncInvoker1< TargetSearchResult_t803 , int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16), L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::set_Item(System.Int32,T)
extern Il2CppGenericMethod Collection_1_set_Item_m26182_GenericMethod;
extern "C" void Collection_1_set_Item_m26182_gshared (Collection_1_t4081 * __this, int32_t ___index, TargetSearchResult_t803  ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		TargetSearchResult_t803  L_1 = ___value;
		VirtActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17), __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m26183_gshared (Collection_1_t4081 * __this, int32_t ___index, TargetSearchResult_t803  ___item, MethodInfo* method)
{
	{
		Object_t* L_0 = (__this->___list_0);
		int32_t L_1 = ___index;
		TargetSearchResult_t803  L_2 = ___item;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 23), L_0, L_1, L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m26184_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
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
// T System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::ConvertItem(System.Object)
extern "C" TargetSearchResult_t803  Collection_1_ConvertItem_m26185_gshared (Object_t * __this /* static, unused */, Object_t * ___item, MethodInfo* method)
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
		return ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)))));
	}

IL_000f:
	{
		ArgumentException_t534 * L_3 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m2930(L_3, (String_t*) &_stringLiteral1581, /*hidden argument*/&ArgumentException__ctor_m2930_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m26186_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m26187_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
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
// System.Boolean System.Collections.ObjectModel.Collection`1<Vuforia.TargetFinder/TargetSearchResult>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m26188_gshared (Object_t * __this /* static, unused */, Object_t* ___list, MethodInfo* method)
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
extern TypeInfo EqualityComparer_1_t4082_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_55MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_55.h"
extern TypeInfo DefaultComparer_t4083_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_55MethodDeclarations.h"
extern Il2CppType EqualityComparer_1_t4082_0_0_0;
extern Il2CppType IEquatable_1_t5926_0_0_0;
extern Il2CppType DefaultComparer_t4083_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26194_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39027_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m35955_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m26194_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39027_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m35955_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern Il2CppGenericMethod EqualityComparer_1__ctor_m26189_GenericMethod;
extern "C" void EqualityComparer_1__ctor_m26189_gshared (EqualityComparer_1_t4082 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::.cctor()
extern Il2CppGenericMethod EqualityComparer_1__cctor_m26190_GenericMethod;
extern "C" void EqualityComparer_1__cctor_m26190_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4083 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4083 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4083 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((EqualityComparer_1_t4082_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26191_GenericMethod;
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m26191_gshared (EqualityComparer_1_t4082 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26192_GenericMethod;
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m26192_gshared (EqualityComparer_1_t4082 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		bool L_2 = (bool)VirtFuncInvoker2< bool, TargetSearchResult_t803 , TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), __this, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::get_Default()
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m26193_GenericMethod;
extern "C" EqualityComparer_1_t4082 * EqualityComparer_1_get_Default_m26193_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t4082 * L_0 = ((EqualityComparer_1_t4082_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t5927_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5926_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<Vuforia.TargetFinder/TargetSearchResult>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m26194_gshared (DefaultComparer_t4083 * __this, MethodInfo* method)
{
	{
		(( void (*) (EqualityComparer_1_t4082 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m26195_GenericMethod;
extern "C" int32_t DefaultComparer_GetHashCode_m26195_gshared (DefaultComparer_t4083 * __this, TargetSearchResult_t803  ___obj, MethodInfo* method)
{
	{
		TargetSearchResult_t803  L_0 = ___obj;
		TargetSearchResult_t803  L_1 = L_0;
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
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
extern Il2CppGenericMethod DefaultComparer_Equals_m26196_GenericMethod;
extern "C" bool DefaultComparer_Equals_m26196_gshared (DefaultComparer_t4083 * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, MethodInfo* method)
{
	{
		TargetSearchResult_t803  L_0 = ___x;
		TargetSearchResult_t803  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TargetSearchResult_t803  L_3 = ___y;
		TargetSearchResult_t803  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TargetSearchResult_t803  L_6 = ___y;
		TargetSearchResult_t803  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck(Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1071_MethodInfo, Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Predicate_1__ctor_m26197_GenericMethod;
extern "C" void Predicate_1__ctor_m26197_gshared (Predicate_1_t4084 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m26198_gshared (Predicate_1_t4084 * __this, TargetSearchResult_t803  ___obj, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m26198((Predicate_1_t4084 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, TargetSearchResult_t803  ___obj, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef bool (*FunctionPointerType) (Object_t * __this, TargetSearchResult_t803  ___obj, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Predicate_1_BeginInvoke_m26199_GenericMethod;
extern "C" Object_t * Predicate_1_BeginInvoke_m26199_gshared (Predicate_1_t4084 * __this, TargetSearchResult_t803  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&TargetSearchResult_t803_il2cpp_TypeInfo), &___obj);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Predicate_1_EndInvoke_m26200_GenericMethod;
extern "C" bool Predicate_1_EndInvoke_m26200_gshared (Predicate_1_t4084 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_45.h"
extern TypeInfo DefaultComparer_t4086_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_45MethodDeclarations.h"
extern Il2CppType IComparable_1_t5335_0_0_0;
extern Il2CppType DefaultComparer_t4086_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26205_MethodInfo;
extern MethodInfo Comparer_1_Compare_m39028_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m26205_GenericMethod;
extern Il2CppGenericMethod Comparer_1_Compare_m39028_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern Il2CppGenericMethod Comparer_1__ctor_m26201_GenericMethod;
extern "C" void Comparer_1__ctor_m26201_gshared (Comparer_1_t4085 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<Vuforia.TargetFinder/TargetSearchResult>::.cctor()
extern Il2CppGenericMethod Comparer_1__cctor_m26202_GenericMethod;
extern "C" void Comparer_1__cctor_m26202_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	DefaultComparer_t4086 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t4086 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
	(( void (*) (DefaultComparer_t4086 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
	((Comparer_1_t4085_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.TargetFinder/TargetSearchResult>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m26203_GenericMethod;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m26203_gshared (Comparer_1_t4085 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method)
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
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, TargetSearchResult_t803 , TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), __this, ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), ((*(TargetSearchResult_t803 *)((TargetSearchResult_t803 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t534 * L_8 = (ArgumentException_t534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t534_il2cpp_TypeInfo));
		ArgumentException__ctor_m13771(L_8, /*hidden argument*/&ArgumentException__ctor_m13771_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<Vuforia.TargetFinder/TargetSearchResult>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<Vuforia.TargetFinder/TargetSearchResult>::get_Default()
extern "C" Comparer_1_t4085 * Comparer_1_get_Default_m26204_gshared (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t4085 * L_0 = ((Comparer_1_t4085_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t5334_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<Vuforia.TargetFinder/TargetSearchResult>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t5335_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<Vuforia.TargetFinder/TargetSearchResult>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

extern MethodInfo IComparable_1_CompareTo_m35964_MethodInfo;
extern Il2CppGenericMethod IComparable_1_CompareTo_m35964_GenericMethod;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m26205_gshared (DefaultComparer_t4086 * __this, MethodInfo* method)
{
	{
		(( void (*) (Comparer_1_t4085 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Compare(T,T)
extern Il2CppGenericMethod DefaultComparer_Compare_m26206_GenericMethod;
extern "C" int32_t DefaultComparer_Compare_m26206_gshared (DefaultComparer_t4086 * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		TargetSearchResult_t803  L_0 = ___x;
		TargetSearchResult_t803  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		TargetSearchResult_t803  L_3 = ___y;
		TargetSearchResult_t803  L_4 = L_3;
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
		TargetSearchResult_t803  L_6 = ___y;
		TargetSearchResult_t803  L_7 = L_6;
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
		TargetSearchResult_t803  L_9 = ___x;
		TargetSearchResult_t803  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		TargetSearchResult_t803  L_12 = ___x;
		TargetSearchResult_t803  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		TargetSearchResult_t803  L_15 = ___y;
		NullCheck(((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, TargetSearchResult_t803  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), ((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), L_15);
		return L_16;
	}

IL_003e:
	{
		TargetSearchResult_t803  L_17 = ___x;
		TargetSearchResult_t803  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, InitializedTypeInfo(&IComparable_t243_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		TargetSearchResult_t803  L_20 = ___x;
		TargetSearchResult_t803  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		TargetSearchResult_t803  L_23 = ___y;
		TargetSearchResult_t803  L_24 = L_23;
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
extern TypeInfo Comparison_1_t4087_il2cpp_TypeInfo;
// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
#include "mscorlib_System_Comparison_1_gen_45MethodDeclarations.h"



// System.Void System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Comparison_1__ctor_m26207_GenericMethod;
extern "C" void Comparison_1__ctor_m26207_gshared (Comparison_1_t4087 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T,T)
extern Il2CppGenericMethod Comparison_1_Invoke_m26208_GenericMethod;
extern "C" int32_t Comparison_1_Invoke_m26208_gshared (Comparison_1_t4087 * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m26208((Comparison_1_t4087 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef int32_t (*FunctionPointerType) (Object_t * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Comparison_1_BeginInvoke_m26209_GenericMethod;
extern "C" Object_t * Comparison_1_BeginInvoke_m26209_gshared (Comparison_1_t4087 * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&TargetSearchResult_t803_il2cpp_TypeInfo), &___x);
	__d_args[1] = Box(InitializedTypeInfo(&TargetSearchResult_t803_il2cpp_TypeInfo), &___y);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Comparison_1_EndInvoke_m26210_GenericMethod;
extern "C" int32_t Comparison_1_EndInvoke_m26210_gshared (Comparison_1_t4087 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Dictionary_2_t809_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19MethodDeclarations.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_48.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_114.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_115.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_23.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_56.h"
extern TypeInfo ImageTarget_t644_il2cpp_TypeInfo;
extern TypeInfo KeyCollection_t4094_il2cpp_TypeInfo;
extern TypeInfo ValueCollection_t929_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5928_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5929_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5010_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t4089_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2U5BU5D_t5009_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4088_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4099_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t4096_il2cpp_TypeInfo;
extern TypeInfo ShimEnumerator_t4101_il2cpp_TypeInfo;
extern TypeInfo ImageTargetU5BU5D_t928_il2cpp_TypeInfo;
extern TypeInfo EqualityComparer_1_t4102_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_1_t5930_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_48MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_21MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_114MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_115MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__25MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_23MethodDeclarations.h"
// System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_56MethodDeclarations.h"
extern Il2CppType Dictionary_2_t809_0_0_0;
extern Il2CppType KeyCollection_t4094_0_0_0;
extern Il2CppType ValueCollection_t929_0_0_0;
extern Il2CppType ICollection_1_t5928_0_0_0;
extern Il2CppType IEnumerable_1_t5929_0_0_0;
extern Il2CppType IEnumerator_1_t5010_0_0_0;
extern Il2CppType KeyValuePair_2U5BU5D_t5009_0_0_0;
extern Il2CppType KeyValuePair_2_t4089_0_0_0;
extern Il2CppType Transform_1_t4088_0_0_0;
extern Il2CppType Transform_1_t4099_0_0_0;
extern Il2CppType Enumerator_t4096_0_0_0;
extern Il2CppType ShimEnumerator_t4101_0_0_0;
extern Il2CppType ImageTargetU5BU5D_t928_0_0_0;
extern Il2CppType EqualityComparer_1_t4102_0_0_0;
extern Il2CppType IEqualityComparer_1_t5930_0_0_0;
extern Il2CppType ImageTarget_t644_0_0_0;
extern MethodInfo Dictionary_2_ContainsKey_m26245_MethodInfo;
extern MethodInfo Dictionary_2_get_Item_m26235_MethodInfo;
extern MethodInfo Dictionary_2_set_Item_m5516_MethodInfo;
extern MethodInfo KeyCollection__ctor_m26282_MethodInfo;
extern MethodInfo ValueCollection__ctor_m26317_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m39029_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39030_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39031_MethodInfo;
extern MethodInfo Dictionary_2_Add_m26244_MethodInfo;
extern MethodInfo Dictionary_2_Remove_m5519_MethodInfo;
extern MethodInfo Dictionary_2_U3CCopyToU3Em__0_m26255_MethodInfo;
extern MethodInfo Transform_1__ctor_m26337_MethodInfo;
extern MethodInfo Dictionary_2_make_pair_m26239_MethodInfo;
extern MethodInfo Transform_1__ctor_m26341_MethodInfo;
extern MethodInfo Enumerator__ctor_m26301_MethodInfo;
extern MethodInfo ShimEnumerator__ctor_m26349_MethodInfo;
extern MethodInfo Dictionary_2_get_Count_m26234_MethodInfo;
extern MethodInfo KeyValuePair_2__ctor_m26256_MethodInfo;
extern MethodInfo IEqualityComparer_1_Equals_m39032_MethodInfo;
extern MethodInfo Dictionary_2_TryGetValue_m26249_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m36028_MethodInfo;
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_CopyTo<System.Collections.DictionaryEntry,System.Collections.DictionaryEntry>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m36018 (Dictionary_2_t809 * __this, DictionaryEntryU5BU5D_t5178* p0, int32_t p1, Transform_1_t4088 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Dictionary_2_t809;
struct Dictionary_2_t3321;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_32.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_116.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4089_m36021_gshared (Dictionary_2_t3321 * __this, Array_t * p0, int32_t p1, Transform_1_t4100 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4089_m36021(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3321 *, Array_t *, int32_t, Transform_1_t4100 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4089_m36021_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_ICollectionCopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4089_m36020(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t809 *, Array_t *, int32_t, Transform_1_t4099 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4089_m36021_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_CopyTo<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4089_TisKeyValuePair_2_t4089_m36023 (Dictionary_2_t809 * __this, KeyValuePair_2U5BU5D_t5009* p0, int32_t p1, Transform_1_t4099 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_get_Keys_m26250_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Values_m5523_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKey_m26245_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTKey_m26251_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Item_m26235_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ToTValue_m26252_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_set_Item_m5516_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Resize_m26243_GenericMethod;
extern Il2CppGenericMethod KeyCollection__ctor_m26282_GenericMethod;
extern Il2CppGenericMethod ValueCollection__ctor_m26317_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Init_m26236_GenericMethod;
extern Il2CppGenericMethod Dictionary_2__ctor_m26214_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m39029_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39030_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39031_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Key_m26257_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_get_Value_m26259_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Add_m26244_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Remove_m5519_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_ContainsKeyValuePair_m26253_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyTo_m26242_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_CopyToCheck_m26238_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_U3CCopyToU3Em__0_m26255_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m26337_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisDictionaryEntry_t1610_TisDictionaryEntry_t1610_m36018_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_make_pair_m26239_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m26341_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisKeyValuePair_2_t4089_m36020_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m26301_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator__ctor_m26349_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_InitArrays_m26237_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_get_Count_m26234_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2__ctor_m26256_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisKeyValuePair_2_t4089_TisKeyValuePair_2_t4089_m36023_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m26359_GenericMethod;
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m39032_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_TryGetValue_m26249_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_Equals_m36028_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.get_Item(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.Add(System.Object,System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.Contains(System.Object)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.Remove(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionary.GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Count()
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Item(TKey)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::set_Item(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::InitArrays(System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::CopyToCheck(System.Array,System.Int32)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::make_pair(TKey,TValue)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::pick_key(TKey,TValue)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::pick_value(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Resize()
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Add(TKey,TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Clear()
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsKey(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsValue(TValue)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::OnDeserialization(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Remove(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::TryGetValue(TKey,TValue&)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Keys()
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::get_Values()
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ToTKey(System.Object)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ToTValue(System.Object)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::GetEnumerator()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::<CopyTo>m__0(TKey,TValue)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod KeyValuePair_2_set_Key_m26258_GenericMethod;
extern Il2CppGenericMethod KeyValuePair_2_set_Value_m26260_GenericMethod;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>::.ctor(TKey,TValue)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>::get_Key()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>::set_Key(TKey)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>::get_Value()
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>::set_Value(TValue)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>::ToString()
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_176.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4090_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_176MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4090_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>(System.Int32)
extern "C" KeyValuePair_2_t4089  Array_InternalArray__get_Item_TisKeyValuePair_2_t4089_m35969_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisKeyValuePair_2_t4089_m35969(__this, p0, method) (( KeyValuePair_2_t4089  (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisKeyValuePair_2_t4089_m35969_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26266_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisKeyValuePair_2_t4089_m35969_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::.ctor(System.Array)
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26262_GenericMethod;
extern "C" void InternalEnumerator_1__ctor_m26262_gshared (InternalEnumerator_1_t4090 * __this, Array_t * ___array, MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::System.Collections.IEnumerator.get_Current()
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_GenericMethod;
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_gshared (InternalEnumerator_1_t4090 * __this, MethodInfo* method)
{
	{
		KeyValuePair_2_t4089  L_0 = (( KeyValuePair_2_t4089  (*) (InternalEnumerator_1_t4090 *, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t4089  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Dispose()
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26264_GenericMethod;
extern "C" void InternalEnumerator_1_Dispose_m26264_gshared (InternalEnumerator_1_t4090 * __this, MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::MoveNext()
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26265_GenericMethod;
extern "C" bool InternalEnumerator_1_MoveNext_m26265_gshared (InternalEnumerator_1_t4090 * __this, MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::get_Current()
extern "C" KeyValuePair_2_t4089  InternalEnumerator_1_get_Current_m26266_gshared (InternalEnumerator_1_t4090 * __this, MethodInfo* method)
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
		KeyValuePair_2_t4089  L_8 = (( KeyValuePair_2_t4089  (*) (Array_t *, int32_t, MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(L_4, ((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5931_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IDictionary_2_t5008_il2cpp_TypeInfo;



// System.Void System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.ImageTarget>::Add(TKey,TValue)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.ImageTarget>::Remove(TKey)
// System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.ImageTarget>::TryGetValue(TKey,TValue&)
// TValue System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.ImageTarget>::get_Item(TKey)
// System.Void System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.ImageTarget>::set_Item(TKey,TValue)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.ImageTarget>::get_Keys()
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.ImageTarget>::get_Values()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5007_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ImageTarget>::Remove(T)
// System.Array/InternalEnumerator`1<Vuforia.ImageTarget>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_177.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4091_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.ImageTarget>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_177MethodDeclarations.h"

extern Il2CppType InternalEnumerator_1_t4091_0_0_0;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
extern "C" Object_t * Array_InternalArray__get_Item_TisObject_t_m32943_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m32943(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.ImageTarget>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.ImageTarget>(System.Int32)
#define Array_InternalArray__get_Item_TisImageTarget_t644_m35980(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26271_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisImageTarget_t644_m35980_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.ImageTarget>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.ImageTarget>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.ImageTarget>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.ImageTarget>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.ImageTarget>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t4106_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.ImageTarget>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.ImageTarget>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.ImageTarget>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.ImageTarget>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.ImageTarget>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5932_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.ObjectTarget>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ObjectTarget>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ObjectTarget>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ObjectTarget>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ObjectTarget>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ObjectTarget>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ObjectTarget>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5933_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.ObjectTarget>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5934_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Vuforia.ObjectTarget>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.ObjectTarget>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_178.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4092_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.ObjectTarget>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_178MethodDeclarations.h"

extern TypeInfo ObjectTarget_t626_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4092_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.ObjectTarget>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.ObjectTarget>(System.Int32)
#define Array_InternalArray__get_Item_TisObjectTarget_t626_m35991(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26276_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisObjectTarget_t626_m35991_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.ObjectTarget>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.ObjectTarget>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.ObjectTarget>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.ObjectTarget>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.ObjectTarget>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5935_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.ObjectTarget>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.ObjectTarget>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.ObjectTarget>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.ObjectTarget>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.ObjectTarget>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t5936_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Vuforia.ExtendedTrackable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ExtendedTrackable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ExtendedTrackable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ExtendedTrackable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ExtendedTrackable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Vuforia.ExtendedTrackable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Vuforia.ExtendedTrackable>::Remove(T)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t5937_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Vuforia.ExtendedTrackable>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5938_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<Vuforia.ExtendedTrackable>::get_Current()
// System.Array/InternalEnumerator`1<Vuforia.ExtendedTrackable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_179.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4093_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Vuforia.ExtendedTrackable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_179MethodDeclarations.h"

extern TypeInfo ExtendedTrackable_t847_il2cpp_TypeInfo;
extern Il2CppType InternalEnumerator_1_t4093_0_0_0;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Vuforia.ExtendedTrackable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Vuforia.ExtendedTrackable>(System.Int32)
#define Array_InternalArray__get_Item_TisExtendedTrackable_t847_m36002(__this, p0, method) (( Object_t * (*) (Array_t *, int32_t, MethodInfo*))Array_InternalArray__get_Item_TisObject_t_m32943_gshared)(__this, p0, method)
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26281_GenericMethod;
extern Il2CppGenericMethod Array_InternalArray__get_Item_TisExtendedTrackable_t847_m36002_GenericMethod;


// System.Void System.Array/InternalEnumerator`1<Vuforia.ExtendedTrackable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Vuforia.ExtendedTrackable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Vuforia.ExtendedTrackable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Vuforia.ExtendedTrackable>::MoveNext()
// T System.Array/InternalEnumerator`1<Vuforia.ExtendedTrackable>::get_Current()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t5939_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Vuforia.ExtendedTrackable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Vuforia.ExtendedTrackable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Vuforia.ExtendedTrackable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Vuforia.ExtendedTrackable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Vuforia.ExtendedTrackable>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_49.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_112.h"
extern TypeInfo Enumerator_t4095_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4097_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_112MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_49MethodDeclarations.h"
extern Il2CppType Enumerator_t4095_0_0_0;
extern Il2CppType Transform_1_t4097_0_0_0;
extern MethodInfo KeyCollection_CopyTo_m26293_MethodInfo;
extern MethodInfo Dictionary_2_pick_key_m26240_MethodInfo;
extern MethodInfo Transform_1__ctor_m26313_MethodInfo;
extern MethodInfo Enumerator__ctor_m26296_MethodInfo;
struct Dictionary_2_t809;
struct Dictionary_2_t3321;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m33896_gshared (Dictionary_2_t3321 * __this, Array_t * p0, int32_t p1, Transform_1_t3328 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m33896(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3321 *, Array_t *, int32_t, Transform_1_t3328 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m33896_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m36013(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t809 *, Array_t *, int32_t, Transform_1_t4097 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m33896_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t96_TisInt32_t96_m36014 (Dictionary_2_t809 * __this, Int32U5BU5D_t34* p0, int32_t p1, Transform_1_t4097 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod KeyCollection_GetEnumerator_m26294_GenericMethod;
extern Il2CppGenericMethod KeyCollection_CopyTo_m26293_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_key_m26240_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m26313_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisInt32_t96_m36013_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisInt32_t96_TisInt32_t96_m36014_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m26296_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TKey>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::CopyTo(TKey[],System.Int32)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ImageTarget>::get_Count()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_get_CurrentKey_m26308_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_GetEnumerator_m26254_GenericMethod;
extern Il2CppGenericMethod Enumerator_Dispose_m26312_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m26306_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::MoveNext()
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::get_Current()
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyCurrent_m26311_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_CurrentValue_m26309_GenericMethod;
extern Il2CppGenericMethod Enumerator_VerifyState_m26310_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::System.Collections.IEnumerator.get_Current()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionaryEnumerator.get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionaryEnumerator.get_Key()
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::System.Collections.IDictionaryEnumerator.get_Value()
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::MoveNext()
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::get_Current()
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::get_CurrentKey()
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::get_CurrentValue()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::VerifyState()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::VerifyCurrent()
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.ImageTarget>::Dispose()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Int32>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Int32>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Int32>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22.h"
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_113.h"
extern TypeInfo Enumerator_t927_il2cpp_TypeInfo;
extern TypeInfo Transform_1_t4098_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_113MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22MethodDeclarations.h"
extern Il2CppType Enumerator_t927_0_0_0;
extern Il2CppType Transform_1_t4098_0_0_0;
extern MethodInfo ValueCollection_CopyTo_m26328_MethodInfo;
extern MethodInfo Dictionary_2_pick_value_m26241_MethodInfo;
extern MethodInfo Transform_1__ctor_m26333_MethodInfo;
extern MethodInfo Enumerator__ctor_m26330_MethodInfo;
struct Dictionary_2_t809;
struct Dictionary_2_t3321;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0.h"
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Do_ICollectionCopyTo<System.Object>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m33899_gshared (Dictionary_2_t3321 * __this, Array_t * p0, int32_t p1, Transform_1_t3331 * p2, MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m33899(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t3321 *, Array_t *, int32_t, Transform_1_t3331 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m33899_gshared)(__this, p0, p1, p2, method)
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_ICollectionCopyTo<Vuforia.ImageTarget>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_ICollectionCopyTo<Vuforia.ImageTarget>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
#define Dictionary_2_Do_ICollectionCopyTo_TisImageTarget_t644_m36016(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t809 *, Array_t *, int32_t, Transform_1_t4098 *, MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisObject_t_m33899_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t809;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_CopyTo<Vuforia.ImageTarget,Vuforia.ImageTarget>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ImageTarget>::Do_CopyTo<Vuforia.ImageTarget,Vuforia.ImageTarget>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisImageTarget_t644_TisImageTarget_t644_m36017 (Dictionary_2_t809 * __this, ImageTargetU5BU5D_t928* p0, int32_t p1, Transform_1_t4098 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Dictionary_2_ContainsValue_m26246_GenericMethod;
extern Il2CppGenericMethod ValueCollection_GetEnumerator_m5524_GenericMethod;
extern Il2CppGenericMethod ValueCollection_CopyTo_m26328_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_pick_value_m26241_GenericMethod;
extern Il2CppGenericMethod Transform_1__ctor_m26333_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_ICollectionCopyTo_TisImageTarget_t644_m36016_GenericMethod;
extern Il2CppGenericMethod Dictionary_2_Do_CopyTo_TisImageTarget_t644_TisImageTarget_t644_m36017_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m26330_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TValue>.Clear()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::CopyTo(TValue[],System.Int32)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::GetEnumerator()
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ImageTarget>::get_Count()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::Dispose()
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::MoveNext()
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Vuforia.ImageTarget>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,Vuforia.ImageTarget>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,Vuforia.ImageTarget>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,Vuforia.ImageTarget>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,Vuforia.ImageTarget>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::.ctor(System.Object,System.IntPtr)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Invoke(TKey,TValue)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.ImageTarget,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::EndInvoke(System.IAsyncResult)
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Transform_1_t4100_il2cpp_TypeInfo;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_116MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::.ctor(System.Object,System.IntPtr)
extern Il2CppGenericMethod Transform_1__ctor_m26342_GenericMethod;
extern "C" void Transform_1__ctor_m26342_gshared (Transform_1_t4100 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::Invoke(TKey,TValue)
extern Il2CppGenericMethod Transform_1_Invoke_m26344_GenericMethod;
extern "C" KeyValuePair_2_t4089  Transform_1_Invoke_m26344_gshared (Transform_1_t4100 * __this, int32_t ___key, Object_t * ___value, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m26344((Transform_1_t4100 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t4089  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef KeyValuePair_2_t4089  (*FunctionPointerType) (Object_t * __this, int32_t ___key, Object_t * ___value, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern Il2CppGenericMethod Transform_1_BeginInvoke_m26346_GenericMethod;
extern "C" Object_t * Transform_1_BeginInvoke_m26346_gshared (Transform_1_t4100 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___key);
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.ImageTarget>>::EndInvoke(System.IAsyncResult)
extern Il2CppGenericMethod Transform_1_EndInvoke_m26348_GenericMethod;
extern "C" KeyValuePair_2_t4089  Transform_1_EndInvoke_m26348_gshared (Transform_1_t4100 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t4089 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo ShimEnumerator_get_Entry_m26351_MethodInfo;
extern Il2CppGenericMethod Enumerator_get_Current_m26307_GenericMethod;
extern Il2CppGenericMethod ShimEnumerator_get_Entry_m26351_GenericMethod;


// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.ImageTarget>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.ImageTarget>::MoveNext()
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.ImageTarget>::get_Entry()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.ImageTarget>::get_Key()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.ImageTarget>::get_Value()
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.ImageTarget>::get_Current()
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<Vuforia.ImageTarget>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<Vuforia.ImageTarget>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_56.h"
extern TypeInfo DefaultComparer_t4103_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_56MethodDeclarations.h"
extern Il2CppType IEquatable_1_t5940_0_0_0;
extern Il2CppType DefaultComparer_t4103_0_0_0;
extern MethodInfo DefaultComparer__ctor_m26360_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m39033_MethodInfo;
extern Il2CppGenericMethod DefaultComparer__ctor_m26360_GenericMethod;
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m39033_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>::.ctor()
// System.Void System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>::.cctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
// System.Int32 System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Vuforia.ImageTarget>::get_Default()
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t5940_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<Vuforia.ImageTarget>::Equals(T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod EqualityComparer_1__ctor_m26355_GenericMethod;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ImageTarget>::.ctor()
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ImageTarget>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.ImageTarget>::Equals(T,T)
// System.Collections.Generic.List`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_List_1_gen_44.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo List_1_t4104_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_List_1_gen_44MethodDeclarations.h"

// System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53.h"
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_45.h"
// System.Predicate`1<Vuforia.ImageTarget>
#include "mscorlib_System_Predicate_1_gen_47.h"
// System.Collections.Generic.Comparer`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_46.h"
// System.Comparison`1<Vuforia.ImageTarget>
#include "mscorlib_System_Comparison_1_gen_46.h"
extern TypeInfo Enumerator_t4105_il2cpp_TypeInfo;
extern TypeInfo ReadOnlyCollection_1_t4107_il2cpp_TypeInfo;
extern TypeInfo Predicate_1_t4109_il2cpp_TypeInfo;
extern TypeInfo Comparer_1_t4110_il2cpp_TypeInfo;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_45MethodDeclarations.h"
// System.Predicate`1<Vuforia.ImageTarget>
#include "mscorlib_System_Predicate_1_gen_47MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_53MethodDeclarations.h"
// System.Collections.Generic.Comparer`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_46MethodDeclarations.h"
extern Il2CppType List_1_t4104_0_0_0;
extern Il2CppType ICollection_1_t5007_0_0_0;
extern Il2CppType Enumerator_t4105_0_0_0;
extern Il2CppType IEnumerable_1_t805_0_0_0;
extern Il2CppType IEnumerator_1_t5011_0_0_0;
extern Il2CppType ReadOnlyCollection_1_t4107_0_0_0;
extern Il2CppType Predicate_1_t4109_0_0_0;
extern Il2CppType Comparer_1_t4110_0_0_0;
extern MethodInfo List_1_get_Item_m26411_MethodInfo;
extern MethodInfo List_1_set_Item_m26412_MethodInfo;
extern MethodInfo ICollection_1_get_Count_m36024_MethodInfo;
extern MethodInfo List_1_Add_m26382_MethodInfo;
extern MethodInfo List_1_Contains_m26389_MethodInfo;
extern MethodInfo List_1_IndexOf_m26395_MethodInfo;
extern MethodInfo List_1_Insert_m26398_MethodInfo;
extern MethodInfo List_1_Remove_m26400_MethodInfo;
extern MethodInfo ICollection_1_CopyTo_m36025_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m39034_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m39035_MethodInfo;
extern MethodInfo ReadOnlyCollection_1__ctor_m26419_MethodInfo;
extern MethodInfo Predicate_1_Invoke_m26486_MethodInfo;
extern MethodInfo Enumerator__ctor_m26413_MethodInfo;
extern MethodInfo List_1_RemoveAt_m26402_MethodInfo;
struct Array_t;
// Declaration System.Void System.Array::Resize<Vuforia.ImageTarget>(!!0[]&,System.Int32)
// System.Void System.Array::Resize<Vuforia.ImageTarget>(!!0[]&,System.Int32)
#define Array_Resize_TisImageTarget_t644_m36027(__this /* static, unused */, p0, p1, method) (( void (*) (Object_t * /* static, unused */, ImageTargetU5BU5D_t928**, int32_t, MethodInfo*))Array_Resize_TisObject_t_m33054_gshared)(__this /* static, unused */, p0, p1, method)
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<Vuforia.ImageTarget>(!!0[],!!0,System.Int32,System.Int32)
// System.Int32 System.Array::IndexOf<Vuforia.ImageTarget>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisImageTarget_t644_m36029(__this /* static, unused */, p0, p1, p2, p3, method) (( int32_t (*) (Object_t * /* static, unused */, ImageTargetU5BU5D_t928*, Object_t *, int32_t, int32_t, MethodInfo*))Array_IndexOf_TisObject_t_m14600_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<Vuforia.ImageTarget>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
// System.Void System.Array::Sort<Vuforia.ImageTarget>(!!0[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<!!0>)
#define Array_Sort_TisImageTarget_t644_m36031(__this /* static, unused */, p0, p1, p2, p3, method) (( void (*) (Object_t * /* static, unused */, ImageTargetU5BU5D_t928*, int32_t, int32_t, Object_t*, MethodInfo*))Array_Sort_TisObject_t_m33123_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
struct Array_t;
// Declaration System.Void System.Array::Sort<Vuforia.ImageTarget>(!!0[],System.Int32,System.Comparison`1<!!0>)
// System.Void System.Array::Sort<Vuforia.ImageTarget>(!!0[],System.Int32,System.Comparison`1<!!0>)
#define Array_Sort_TisImageTarget_t644_m36039(__this /* static, unused */, p0, p1, p2, method) (( void (*) (Object_t * /* static, unused */, ImageTargetU5BU5D_t928*, int32_t, Comparison_1_t4112 *, MethodInfo*))Array_Sort_TisObject_t_m33263_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_get_Item_m26411_GenericMethod;
extern Il2CppGenericMethod List_1_set_Item_m26412_GenericMethod;
extern Il2CppGenericMethod Array_Resize_TisImageTarget_t644_m36027_GenericMethod;
extern Il2CppGenericMethod List_1_CheckIndex_m26397_GenericMethod;
extern Il2CppGenericMethod List_1_CheckCollection_m26399_GenericMethod;
extern Il2CppGenericMethod List_1_AddEnumerable_m26385_GenericMethod;
extern Il2CppGenericMethod ICollection_1_get_Count_m36024_GenericMethod;
extern Il2CppGenericMethod List_1_AddCollection_m26384_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m26394_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m26382_GenericMethod;
extern Il2CppGenericMethod List_1_Contains_m26389_GenericMethod;
extern Il2CppGenericMethod List_1_IndexOf_m26395_GenericMethod;
extern Il2CppGenericMethod List_1_Insert_m26398_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m26400_GenericMethod;
extern Il2CppGenericMethod List_1_GrowIfNeeded_m26383_GenericMethod;
extern Il2CppGenericMethod List_1_get_Capacity_m26408_GenericMethod;
extern Il2CppGenericMethod List_1_set_Capacity_m26409_GenericMethod;
extern Il2CppGenericMethod ICollection_1_CopyTo_m36025_GenericMethod;
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m39034_GenericMethod;
extern Il2CppGenericMethod IEnumerator_1_get_Current_m39035_GenericMethod;
extern Il2CppGenericMethod ReadOnlyCollection_1__ctor_m26419_GenericMethod;
extern Il2CppGenericMethod Array_IndexOf_TisImageTarget_t644_m36029_GenericMethod;
extern Il2CppGenericMethod List_1_CheckMatch_m26392_GenericMethod;
extern Il2CppGenericMethod List_1_GetIndex_m26393_GenericMethod;
extern Il2CppGenericMethod Predicate_1_Invoke_m26486_GenericMethod;
extern Il2CppGenericMethod Enumerator__ctor_m26413_GenericMethod;
extern Il2CppGenericMethod List_1_Shift_m26396_GenericMethod;
extern Il2CppGenericMethod List_1_RemoveAt_m26402_GenericMethod;
extern Il2CppGenericMethod Comparer_1_get_Default_m26492_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisImageTarget_t644_m36031_GenericMethod;
extern Il2CppGenericMethod Array_Sort_TisImageTarget_t644_m36039_GenericMethod;


// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor()
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.ctor(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::.cctor()
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Add(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.Remove(System.Object)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Add(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::GrowIfNeeded(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddCollection(System.Collections.Generic.ICollection`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::AsReadOnly()
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Clear()
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::Contains(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CopyTo(T[],System.Int32)
// T System.Collections.Generic.List`1<Vuforia.ImageTarget>::Find(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckMatch(System.Predicate`1<T>)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Vuforia.ImageTarget>::GetEnumerator()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::IndexOf(T)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Shift(System.Int32,System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckIndex(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
// System.Boolean System.Collections.Generic.List`1<Vuforia.ImageTarget>::Remove(T)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::RemoveAll(System.Predicate`1<T>)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::RemoveAt(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Reverse()
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Sort()
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::Sort(System.Comparison`1<T>)
// T[] System.Collections.Generic.List`1<Vuforia.ImageTarget>::ToArray()
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::TrimExcess()
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Capacity()
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::set_Capacity(System.Int32)
// System.Int32 System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Count()
// T System.Collections.Generic.List`1<Vuforia.ImageTarget>::get_Item(System.Int32)
// System.Void System.Collections.Generic.List`1<Vuforia.ImageTarget>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

extern Il2CppGenericMethod Enumerator_VerifyState_m26416_GenericMethod;


// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>::.ctor(System.Collections.Generic.List`1<T>)
// System.Object System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>::System.Collections.IEnumerator.get_Current()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>::Dispose()
// System.Void System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>::VerifyState()
// System.Boolean System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>::MoveNext()
// T System.Collections.Generic.List`1/Enumerator<Vuforia.ImageTarget>::get_Current()
#ifndef _MSC_VER
#else
#endif

// System.Collections.ObjectModel.Collection`1<Vuforia.ImageTarget>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen_45MethodDeclarations.h"
extern Il2CppType IList_1_t4106_0_0_0;
extern MethodInfo ReadOnlyCollection_1_get_Item_m26448_MethodInfo;
extern MethodInfo IList_1_get_Item_m39036_MethodInfo;
extern MethodInfo ICollection_1_Contains_m39037_MethodInfo;
extern MethodInfo IList_1_IndexOf_m39038_MethodInfo;
extern Il2CppGenericMethod ReadOnlyCollection_1_get_Item_m26448_GenericMethod;
extern Il2CppGenericMethod IList_1_get_Item_m39036_GenericMethod;
extern Il2CppGenericMethod Collection_1_IsValidItem_m26480_GenericMethod;
extern Il2CppGenericMethod ICollection_1_Contains_m39037_GenericMethod;
extern Il2CppGenericMethod IList_1_IndexOf_m39038_GenericMethod;


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.Generic.ICollection<T>.Add(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.Generic.ICollection<T>.Clear()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.Generic.ICollection<T>.Remove(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IEnumerable.GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.Add(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.Clear()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.Contains(System.Object)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.IndexOf(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.Insert(System.Int32,System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.Remove(System.Object)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.RemoveAt(System.Int32)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.ICollection.get_IsSynchronized()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.ICollection.get_SyncRoot()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.get_IsFixedSize()
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.get_IsReadOnly()
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.get_Item(System.Int32)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::System.Collections.IList.set_Item(System.Int32,System.Object)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::Contains(T)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::CopyTo(T[],System.Int32)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::GetEnumerator()
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::IndexOf(T)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::get_Count()
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Vuforia.ImageTarget>::get_Item(System.Int32)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
