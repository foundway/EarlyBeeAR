#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// Bee
#include "AssemblyU2DCSharp_Bee.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Bee_t1_il2cpp_TypeInfo;
// Bee
#include "AssemblyU2DCSharp_BeeMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// Director
#include "AssemblyU2DCSharp_Director.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// System.String
#include "mscorlib_System_String.h"
extern TypeInfo Director_t6_il2cpp_TypeInfo;
extern TypeInfo Vector3_t5_il2cpp_TypeInfo;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// Director
#include "AssemblyU2DCSharp_DirectorMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern MethodInfo MonoBehaviour__ctor_m504_MethodInfo;
extern MethodInfo GameObject_get_activeSelf_m505_MethodInfo;
extern MethodInfo Transform_get_position_m506_MethodInfo;
extern MethodInfo Vector3_Lerp_m507_MethodInfo;
extern MethodInfo Component_get_transform_m508_MethodInfo;
extern MethodInfo Vector3_op_Subtraction_m509_MethodInfo;
extern MethodInfo Vector3__ctor_m510_MethodInfo;
extern MethodInfo Quaternion_LookRotation_m511_MethodInfo;
extern MethodInfo Transform_set_rotation_m512_MethodInfo;
extern MethodInfo Transform_get_rotation_m513_MethodInfo;
extern MethodInfo Vector3_ClampMagnitude_m514_MethodInfo;
extern MethodInfo Time_get_deltaTime_m515_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m516_MethodInfo;
extern MethodInfo Vector3_op_Addition_m517_MethodInfo;
extern MethodInfo Transform_set_position_m518_MethodInfo;
extern MethodInfo Animator_SetBool_m519_MethodInfo;
struct Component_t167;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.CastHelper`1<UnityEngine.Animator>
#include "UnityEngine_UnityEngine_CastHelper_1_gen.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
struct Component_t167;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.CastHelper`1<System.Object>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_0.h"
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m521_gshared (Component_t167 * __this, MethodInfo* method);
#define Component_GetComponent_TisObject_t_m521(__this, method) (( Object_t * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t3_m520(__this, method) (( Animator_t3 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisAnimator_t3_m520_GenericMethod;


// System.Void Bee::.ctor()
extern MethodInfo Bee__ctor_m0_MethodInfo;
extern "C" void Bee__ctor_m0 (Bee_t1 * __this, MethodInfo* method)
{
	{
		__this->___MaxVel_7 = (1.0f);
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Bee::Awake()
extern MethodInfo Bee_Awake_m1_MethodInfo;
extern "C" void Bee_Awake_m1 (Bee_t1 * __this, MethodInfo* method)
{
	{
		((Bee_t1_StaticFields*)InitializedTypeInfo(&Bee_t1_il2cpp_TypeInfo)->static_fields)->___Instance_2 = __this;
		return;
	}
}
// System.Void Bee::Start()
extern MethodInfo Bee_Start_m2_MethodInfo;
extern MethodInfo* Component_GetComponent_TisAnimator_t3_m520_MethodInfo_var;
extern "C" void Bee_Start_m2 (Bee_t1 * __this, MethodInfo* method)
{
	static bool Bee_Start_m2_init;
	if (!Bee_Start_m2_init)
	{
		Component_GetComponent_TisAnimator_t3_m520_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisAnimator_t3_m520_GenericMethod);
		Bee_Start_m2_init = true;
	}
	{
		Animator_t3 * L_0 = Component_GetComponent_TisAnimator_t3_m520(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t3_m520_MethodInfo_var);
		__this->___anim_8 = L_0;
		return;
	}
}
// System.Void Bee::Update()
extern MethodInfo Bee_Update_m3_MethodInfo;
extern "C" void Bee_Update_m3 (Bee_t1 * __this, MethodInfo* method)
{
	{
		Director_t6 * L_0 = ((Director_t6_StaticFields*)InitializedTypeInfo(&Director_t6_il2cpp_TypeInfo)->static_fields)->___Instance_2;
		NullCheck(L_0);
		GameObject_t7 * L_1 = (L_0->___FlowerField_5);
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeSelf_m505(L_1, /*hidden argument*/&GameObject_get_activeSelf_m505_MethodInfo);
		if (!L_2)
		{
			goto IL_0102;
		}
	}
	{
		bool L_3 = (__this->___Flying_3);
		if (!L_3)
		{
			goto IL_0089;
		}
	}
	{
		Transform_t2 * L_4 = (__this->___Cursor_5);
		NullCheck(L_4);
		Vector3_t5  L_5 = Transform_get_position_m506(L_4, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_6 = (__this->___Cam_6);
		NullCheck(L_6);
		Vector3_t5  L_7 = Transform_get_position_m506(L_6, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_8 = Vector3_Lerp_m507(NULL /*static, unused*/, L_5, L_7, (0.2f), /*hidden argument*/&Vector3_Lerp_m507_MethodInfo);
		__this->___goal_9 = L_8;
		Transform_t2 * L_9 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_10 = (__this->___Cursor_5);
		NullCheck(L_10);
		Vector3_t5  L_11 = Transform_get_position_m506(L_10, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_12 = (__this->___Cam_6);
		NullCheck(L_12);
		Vector3_t5  L_13 = Transform_get_position_m506(L_12, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_14 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		Vector3_t5  L_15 = {0};
		Vector3__ctor_m510(&L_15, (0.0f), (1.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Quaternion_t10  L_16 = Quaternion_LookRotation_m511(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Quaternion_LookRotation_m511_MethodInfo);
		NullCheck(L_9);
		Transform_set_rotation_m512(L_9, L_16, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		goto IL_00b0;
	}

IL_0089:
	{
		Transform_t2 * L_17 = (__this->___Tracker_4);
		NullCheck(L_17);
		Vector3_t5  L_18 = Transform_get_position_m506(L_17, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		__this->___goal_9 = L_18;
		Transform_t2 * L_19 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_20 = (__this->___Tracker_4);
		NullCheck(L_20);
		Quaternion_t10  L_21 = Transform_get_rotation_m513(L_20, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		NullCheck(L_19);
		Transform_set_rotation_m512(L_19, L_21, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
	}

IL_00b0:
	{
		Vector3_t5  L_22 = (__this->___goal_9);
		Transform_t2 * L_23 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_23);
		Vector3_t5  L_24 = Transform_get_position_m506(L_23, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_25 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		float L_26 = (__this->___MaxVel_7);
		Vector3_t5  L_27 = Vector3_ClampMagnitude_m514(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&Vector3_ClampMagnitude_m514_MethodInfo);
		__this->___vel_11 = L_27;
		Transform_t2 * L_28 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_29 = (__this->___prev_10);
		Vector3_t5  L_30 = (__this->___vel_11);
		float L_31 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		Vector3_t5  L_32 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_33 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_29, L_32, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		NullCheck(L_28);
		Transform_set_position_m518(L_28, L_33, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		goto IL_012e;
	}

IL_0102:
	{
		Transform_t2 * L_34 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_35 = (__this->___Tracker_4);
		NullCheck(L_35);
		Vector3_t5  L_36 = Transform_get_position_m506(L_35, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_34);
		Transform_set_position_m518(L_34, L_36, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_37 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_38 = (__this->___Tracker_4);
		NullCheck(L_38);
		Quaternion_t10  L_39 = Transform_get_rotation_m513(L_38, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		NullCheck(L_37);
		Transform_set_rotation_m512(L_37, L_39, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
	}

IL_012e:
	{
		Transform_t2 * L_40 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_40);
		Vector3_t5  L_41 = Transform_get_position_m506(L_40, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		__this->___prev_10 = L_41;
		return;
	}
}
// System.Void Bee::OnTrackingFound()
extern MethodInfo Bee_OnTrackingFound_m4_MethodInfo;
extern "C" void Bee_OnTrackingFound_m4 (Bee_t1 * __this, MethodInfo* method)
{
	{
		__this->___Flying_3 = 0;
		Animator_t3 * L_0 = (__this->___anim_8);
		NullCheck(L_0);
		Animator_SetBool_m519(L_0, (String_t*) &_stringLiteral1, 0, /*hidden argument*/&Animator_SetBool_m519_MethodInfo);
		return;
	}
}
// System.Void Bee::OnTrackingLost()
extern MethodInfo Bee_OnTrackingLost_m5_MethodInfo;
extern "C" void Bee_OnTrackingLost_m5 (Bee_t1 * __this, MethodInfo* method)
{
	{
		__this->___Flying_3 = 1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo GameObject_SetActive_m522_MethodInfo;


// System.Void Director::.ctor()
extern MethodInfo Director__ctor_m6_MethodInfo;
extern "C" void Director__ctor_m6 (Director_t6 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Director::Awake()
extern MethodInfo Director_Awake_m7_MethodInfo;
extern "C" void Director_Awake_m7 (Director_t6 * __this, MethodInfo* method)
{
	{
		((Director_t6_StaticFields*)InitializedTypeInfo(&Director_t6_il2cpp_TypeInfo)->static_fields)->___Instance_2 = __this;
		GameObject_t7 * L_0 = (__this->___FlowerField_5);
		NullCheck(L_0);
		GameObject_SetActive_m522(L_0, 0, /*hidden argument*/&GameObject_SetActive_m522_MethodInfo);
		return;
	}
}
// System.Void Director::Start()
extern MethodInfo Director_Start_m8_MethodInfo;
extern "C" void Director_Start_m8 (Director_t6 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Director::Update()
extern MethodInfo Director_Update_m9_MethodInfo;
extern "C" void Director_Update_m9 (Director_t6 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Director::OnTrackingFound()
extern MethodInfo Director_OnTrackingFound_m10_MethodInfo;
extern "C" void Director_OnTrackingFound_m10 (Director_t6 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___FlowerReady_3);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		__this->___FlowerReady_3 = 1;
	}

IL_0012:
	{
		Bee_t1 * L_1 = ((Bee_t1_StaticFields*)InitializedTypeInfo(&Bee_t1_il2cpp_TypeInfo)->static_fields)->___Instance_2;
		NullCheck(L_1);
		Bee_OnTrackingFound_m4(L_1, /*hidden argument*/&Bee_OnTrackingFound_m4_MethodInfo);
		return;
	}
}
// System.Void Director::OnTrackingLost()
extern MethodInfo Director_OnTrackingLost_m11_MethodInfo;
extern "C" void Director_OnTrackingLost_m11 (Director_t6 * __this, MethodInfo* method)
{
	{
		Bee_t1 * L_0 = ((Bee_t1_StaticFields*)InitializedTypeInfo(&Bee_t1_il2cpp_TypeInfo)->static_fields)->___Instance_2;
		NullCheck(L_0);
		Bee_OnTrackingLost_m5(L_0, /*hidden argument*/&Bee_OnTrackingLost_m5_MethodInfo);
		bool L_1 = (__this->___FlowerReady_3);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		GameObject_t7 * L_2 = (__this->___FlowerField_5);
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m505(L_2, /*hidden argument*/&GameObject_get_activeSelf_m505_MethodInfo);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		GameObject_t7 * L_4 = (__this->___FlowerField_5);
		NullCheck(L_4);
		GameObject_SetActive_m522(L_4, 1, /*hidden argument*/&GameObject_SetActive_m522_MethodInfo);
	}

IL_0031:
	{
		return;
	}
}
// BottleModule
#include "AssemblyU2DCSharp_BottleModule.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BottleModule_t11_il2cpp_TypeInfo;
// BottleModule
#include "AssemblyU2DCSharp_BottleModuleMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
#include "UnityEngine_ArrayTypes.h"
extern TypeInfo Vector3U5BU5D_t8_il2cpp_TypeInfo;
extern TypeInfo QuaternionU5BU5D_t9_il2cpp_TypeInfo;
extern TypeInfo Quaternion_t10_il2cpp_TypeInfo;
extern Il2CppType Vector3U5BU5D_t8_0_0_0;
extern Il2CppType QuaternionU5BU5D_t9_0_0_0;
extern MethodInfo Transform_get_childCount_m523_MethodInfo;
extern MethodInfo Transform_GetChild_m524_MethodInfo;


// System.Void BottleModule::.ctor()
extern MethodInfo BottleModule__ctor_m12_MethodInfo;
extern "C" void BottleModule__ctor_m12 (BottleModule_t11 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void BottleModule::Start()
extern MethodInfo BottleModule_Start_m13_MethodInfo;
extern TypeInfo* Vector3U5BU5D_t8_il2cpp_TypeInfo_var;
extern TypeInfo* QuaternionU5BU5D_t9_il2cpp_TypeInfo_var;
extern "C" void BottleModule_Start_m13 (BottleModule_t11 * __this, MethodInfo* method)
{
	static bool BottleModule_Start_m13_init;
	if (!BottleModule_Start_m13_init)
	{
		Vector3U5BU5D_t8_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t8_0_0_0);
		QuaternionU5BU5D_t9_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&QuaternionU5BU5D_t9_0_0_0);
		BottleModule_Start_m13_init = true;
	}
	int32_t V_0 = 0;
	Transform_t2 * V_1 = {0};
	{
		Transform_t2 * L_0 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m523(L_0, /*hidden argument*/&Transform_get_childCount_m523_MethodInfo);
		__this->___numBottles_2 = L_1;
		int32_t L_2 = (__this->___numBottles_2);
		__this->___originalPositions_3 = ((Vector3U5BU5D_t8*)SZArrayNew(Vector3U5BU5D_t8_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = (__this->___numBottles_2);
		__this->___originalRotations_4 = ((QuaternionU5BU5D_t9*)SZArrayNew(QuaternionU5BU5D_t9_il2cpp_TypeInfo_var, L_3));
		V_0 = 0;
		goto IL_0079;
	}

IL_003a:
	{
		Transform_t2 * L_4 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_t2 * L_6 = Transform_GetChild_m524(L_4, L_5, /*hidden argument*/&Transform_GetChild_m524_MethodInfo);
		V_1 = L_6;
		Vector3U5BU5D_t8* L_7 = (__this->___originalPositions_3);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Transform_t2 * L_9 = V_1;
		NullCheck(L_9);
		Vector3_t5  L_10 = Transform_get_position_m506(L_9, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		*((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_7, L_8)) = L_10;
		QuaternionU5BU5D_t9* L_11 = (__this->___originalRotations_4);
		int32_t L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		Transform_t2 * L_13 = V_1;
		NullCheck(L_13);
		Quaternion_t10  L_14 = Transform_get_rotation_m513(L_13, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		*((Quaternion_t10 *)(Quaternion_t10 *)SZArrayLdElema(L_11, L_12)) = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = (__this->___numBottles_2);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}
}
// System.Void BottleModule::Reset()
extern MethodInfo BottleModule_Reset_m14_MethodInfo;
extern "C" void BottleModule_Reset_m14 (BottleModule_t11 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Transform_t2 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_0007:
	{
		Transform_t2 * L_0 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Transform_t2 * L_2 = Transform_GetChild_m524(L_0, L_1, /*hidden argument*/&Transform_GetChild_m524_MethodInfo);
		V_1 = L_2;
		Transform_t2 * L_3 = V_1;
		Vector3U5BU5D_t8* L_4 = (__this->___originalPositions_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		NullCheck(L_3);
		Transform_set_position_m518(L_3, (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_4, L_5))), /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_6 = V_1;
		QuaternionU5BU5D_t9* L_7 = (__this->___originalRotations_4);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		NullCheck(L_6);
		Transform_set_rotation_m512(L_6, (*(Quaternion_t10 *)((Quaternion_t10 *)(Quaternion_t10 *)SZArrayLdElema(L_7, L_8))), /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0046:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = (__this->___numBottles_2);
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Cursor
#include "AssemblyU2DCSharp_Cursor.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Cursor_t13_il2cpp_TypeInfo;
// Cursor
#include "AssemblyU2DCSharp_CursorMethodDeclarations.h"

// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
extern MethodInfo Transform_LookAt_m525_MethodInfo;
extern MethodInfo Image_set_fillAmount_m526_MethodInfo;


// System.Void Cursor::.ctor()
extern MethodInfo Cursor__ctor_m15_MethodInfo;
extern "C" void Cursor__ctor_m15 (Cursor_t13 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Cursor::SetOffset(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo Cursor_SetOffset_m16_MethodInfo;
extern "C" void Cursor_SetOffset_m16 (Cursor_t13 * __this, Vector3_t5  ___camPosition, Vector3_t5  ___forward, float ___distance, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_1 = ___camPosition;
		Vector3_t5  L_2 = ___forward;
		float L_3 = ___distance;
		Vector3_t5  L_4 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_5 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		NullCheck(L_0);
		Transform_set_position_m518(L_0, L_5, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_6 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_7 = (__this->___eyeTransform_2);
		NullCheck(L_7);
		Vector3_t5  L_8 = Transform_get_position_m506(L_7, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_6);
		Transform_LookAt_m525(L_6, L_8, /*hidden argument*/&Transform_LookAt_m525_MethodInfo);
		return;
	}
}
// System.Void Cursor::SetProgress(System.Single)
extern MethodInfo Cursor_SetProgress_m17_MethodInfo;
extern "C" void Cursor_SetProgress_m17 (Cursor_t13 * __this, float ___progress, MethodInfo* method)
{
	{
		Image_t12 * L_0 = (__this->___radialImage_3);
		float L_1 = ___progress;
		NullCheck(L_0);
		Image_set_fillAmount_m526(L_0, L_1, /*hidden argument*/&Image_set_fillAmount_m526_MethodInfo);
		return;
	}
}
// Grabbable
#include "AssemblyU2DCSharp_Grabbable.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Grabbable_t14_il2cpp_TypeInfo;
// Grabbable
#include "AssemblyU2DCSharp_GrabbableMethodDeclarations.h"



// System.Void Grabbable::.ctor()
extern MethodInfo Grabbable__ctor_m18_MethodInfo;
extern "C" void Grabbable__ctor_m18 (Grabbable_t14 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Grabbable::OnGrabStart(System.Single,System.Single)
// System.Void Grabbable::OnGrabEnd()
// System.Void Grabbable::OnGrabUpdate(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
// GrabManager
#include "AssemblyU2DCSharp_GrabManager.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GrabManager_t17_il2cpp_TypeInfo;
// GrabManager
#include "AssemblyU2DCSharp_GrabManagerMethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// StareInputModule/StareEvent
#include "AssemblyU2DCSharp_StareInputModule_StareEvent.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystem.h"
// StareInputModule
#include "AssemblyU2DCSharp_StareInputModule.h"
// Cardboard
#include "AssemblyU2DCSharp_Cardboard.h"
extern TypeInfo StareEvent_t44_il2cpp_TypeInfo;
extern TypeInfo Void_t168_il2cpp_TypeInfo;
extern TypeInfo Single_t43_il2cpp_TypeInfo;
extern TypeInfo Input_t169_il2cpp_TypeInfo;
extern TypeInfo Mathf_t170_il2cpp_TypeInfo;
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// StareInputModule/StareEvent
#include "AssemblyU2DCSharp_StareInputModule_StareEventMethodDeclarations.h"
// StareInputModule
#include "AssemblyU2DCSharp_StareInputModuleMethodDeclarations.h"
// Cardboard
#include "AssemblyU2DCSharp_CardboardMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
extern MethodInfo Object_op_Inequality_m527_MethodInfo;
extern MethodInfo GrabManager_StartGrab_m22_MethodInfo;
extern MethodInfo StareEvent__ctor_m103_MethodInfo;
extern MethodInfo StareInputModule_add_OnStare_m108_MethodInfo;
extern MethodInfo Cardboard_get_VRModeEnabled_m182_MethodInfo;
extern MethodInfo Object_op_Equality_m528_MethodInfo;
extern MethodInfo Grabbable_OnGrabStart_m529_MethodInfo;
extern MethodInfo Behaviour_set_enabled_m530_MethodInfo;
extern MethodInfo Transform_InverseTransformPoint_m531_MethodInfo;
extern MethodInfo Transform_get_localPosition_m532_MethodInfo;
extern MethodInfo GrabManager_GetShakePoint_m25_MethodInfo;
extern MethodInfo Grabbable_OnGrabEnd_m533_MethodInfo;
extern MethodInfo GrabManager_get_hasGrab_m21_MethodInfo;
extern MethodInfo Input_GetKey_m534_MethodInfo;
extern MethodInfo GrabManager_EndGrab_m23_MethodInfo;
extern MethodInfo Transform_get_forward_m535_MethodInfo;
extern MethodInfo Mathf_Max_m536_MethodInfo;
extern MethodInfo Camera_get_nearClipPlane_m537_MethodInfo;
extern MethodInfo Transform_TransformPoint_m538_MethodInfo;
extern MethodInfo Vector3_Distance_m539_MethodInfo;
extern MethodInfo Grabbable_OnGrabUpdate_m540_MethodInfo;
extern MethodInfo Vector3_Angle_m541_MethodInfo;
extern MethodInfo Vector3_get_magnitude_m542_MethodInfo;
struct Object_t172;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
extern "C" EventSystem_t171 * Object_FindObjectOfType_TisEventSystem_t171_m543 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Component_t167;
// UnityEngine.CastHelper`1<StareInputModule>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_1.h"
// Declaration !!0 UnityEngine.Component::GetComponent<StareInputModule>()
// !!0 UnityEngine.Component::GetComponent<StareInputModule>()
#define Component_GetComponent_TisStareInputModule_t16_m544(__this, method) (( StareInputModule_t16 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
struct Object_t172;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<Cardboard>()
// !!0 UnityEngine.Object::FindObjectOfType<Cardboard>()
extern "C" Cardboard_t67 * Object_FindObjectOfType_TisCardboard_t67_m545 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// UnityEngine.CastHelper`1<Grabbable>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_2.h"
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m547_gshared (GameObject_t7 * __this, MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m547(__this, method) (( Object_t * (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m547_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<Grabbable>()
// !!0 UnityEngine.GameObject::GetComponent<Grabbable>()
#define GameObject_GetComponent_TisGrabbable_t14_m546(__this, method) (( Grabbable_t14 * (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m547_gshared)(__this, method)
extern Il2CppGenericMethod Object_FindObjectOfType_TisEventSystem_t171_m543_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisStareInputModule_t16_m544_GenericMethod;
extern Il2CppGenericMethod Object_FindObjectOfType_TisCardboard_t67_m545_GenericMethod;
extern Il2CppGenericMethod GameObject_GetComponent_TisGrabbable_t14_m546_GenericMethod;


// System.Void GrabManager::.ctor()
extern MethodInfo GrabManager__ctor_m19_MethodInfo;
extern "C" void GrabManager__ctor_m19 (GrabManager_t17 * __this, MethodInfo* method)
{
	{
		__this->___DistanceChangeFactor_5 = (35.0f);
		__this->___Springiness_6 = (2.0f);
		__this->___Damping_7 = (5.0f);
		__this->___AngularDamping_8 = (8.0f);
		__this->___DropShakesRequired_10 = 3;
		__this->___ShakeTimeout_11 = (1.0f);
		__this->___ShakeThreshold_12 = (0.15f);
		__this->___ShakeAngleThreshold_13 = (25.0f);
		__this->___vrMode_14 = 1;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void GrabManager::Start()
extern MethodInfo GrabManager_Start_m20_MethodInfo;
extern MethodInfo* Object_FindObjectOfType_TisEventSystem_t171_m543_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisStareInputModule_t16_m544_MethodInfo_var;
extern MethodInfo* Object_FindObjectOfType_TisCardboard_t67_m545_MethodInfo_var;
extern "C" void GrabManager_Start_m20 (GrabManager_t17 * __this, MethodInfo* method)
{
	static bool GrabManager_Start_m20_init;
	if (!GrabManager_Start_m20_init)
	{
		Object_FindObjectOfType_TisEventSystem_t171_m543_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Object_FindObjectOfType_TisEventSystem_t171_m543_GenericMethod);
		Component_GetComponent_TisStareInputModule_t16_m544_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisStareInputModule_t16_m544_GenericMethod);
		Object_FindObjectOfType_TisCardboard_t67_m545_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Object_FindObjectOfType_TisCardboard_t67_m545_GenericMethod);
		GrabManager_Start_m20_init = true;
	}
	{
		IntPtr_t L_0 = { &GrabManager_StartGrab_m22_MethodInfo };
		StareEvent_t44 * L_1 = (StareEvent_t44 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StareEvent_t44_il2cpp_TypeInfo));
		StareEvent__ctor_m103(L_1, __this, L_0, /*hidden argument*/&StareEvent__ctor_m103_MethodInfo);
		StareInputModule_add_OnStare_m108(NULL /*static, unused*/, L_1, /*hidden argument*/&StareInputModule_add_OnStare_m108_MethodInfo);
		EventSystem_t171 * L_2 = Object_FindObjectOfType_TisEventSystem_t171_m543(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisEventSystem_t171_m543_MethodInfo_var);
		NullCheck(L_2);
		StareInputModule_t16 * L_3 = Component_GetComponent_TisStareInputModule_t16_m544(L_2, /*hidden argument*/Component_GetComponent_TisStareInputModule_t16_m544_MethodInfo_var);
		__this->___stareInput_17 = L_3;
		Cardboard_t67 * L_4 = Object_FindObjectOfType_TisCardboard_t67_m545(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCardboard_t67_m545_MethodInfo_var);
		NullCheck(L_4);
		bool L_5 = Cardboard_get_VRModeEnabled_m182(L_4, /*hidden argument*/&Cardboard_get_VRModeEnabled_m182_MethodInfo);
		__this->___vrMode_14 = L_5;
		return;
	}
}
// System.Boolean GrabManager::get_hasGrab()
extern "C" bool GrabManager_get_hasGrab_m21 (GrabManager_t17 * __this, MethodInfo* method)
{
	{
		Grabbable_t14 * L_0 = (__this->___grabbedObject_15);
		bool L_1 = Object_op_Inequality_m527(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		return L_1;
	}
}
// System.Void GrabManager::StartGrab(UnityEngine.GameObject,UnityEngine.Camera,System.Single)
extern MethodInfo* GameObject_GetComponent_TisGrabbable_t14_m546_MethodInfo_var;
extern "C" void GrabManager_StartGrab_m22 (GrabManager_t17 * __this, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___dist, MethodInfo* method)
{
	static bool GrabManager_StartGrab_m22_init;
	if (!GrabManager_StartGrab_m22_init)
	{
		GameObject_GetComponent_TisGrabbable_t14_m546_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisGrabbable_t14_m546_GenericMethod);
		GrabManager_StartGrab_m22_init = true;
	}
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	{
		float L_0 = ___dist;
		float L_1 = (__this->___MinimumDistance_4);
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t7 * L_2 = ___obj;
		NullCheck(L_2);
		Grabbable_t14 * L_3 = GameObject_GetComponent_TisGrabbable_t14_m546(L_2, /*hidden argument*/GameObject_GetComponent_TisGrabbable_t14_m546_MethodInfo_var);
		bool L_4 = Object_op_Equality_m528(NULL /*static, unused*/, L_3, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_4)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		return;
	}

IL_001e:
	{
		GameObject_t7 * L_5 = ___obj;
		NullCheck(L_5);
		Grabbable_t14 * L_6 = GameObject_GetComponent_TisGrabbable_t14_m546(L_5, /*hidden argument*/GameObject_GetComponent_TisGrabbable_t14_m546_MethodInfo_var);
		__this->___grabbedObject_15 = L_6;
		Grabbable_t14 * L_7 = (__this->___grabbedObject_15);
		float L_8 = (__this->___Damping_7);
		float L_9 = (__this->___AngularDamping_8);
		NullCheck(L_7);
		VirtActionInvoker2< float, float >::Invoke(&Grabbable_OnGrabStart_m529_MethodInfo, L_7, L_8, L_9);
		Camera_t15 * L_10 = ___cam;
		__this->___cam_16 = L_10;
		StareInputModule_t16 * L_11 = (__this->___stareInput_17);
		bool L_12 = Object_op_Inequality_m527(NULL /*static, unused*/, L_11, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		StareInputModule_t16 * L_13 = (__this->___stareInput_17);
		NullCheck(L_13);
		Behaviour_set_enabled_m530(L_13, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
	}

IL_0065:
	{
		Grabbable_t14 * L_14 = (__this->___grabbedObject_15);
		NullCheck(L_14);
		Transform_t2 * L_15 = Component_get_transform_m508(L_14, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Cursor_t13 * L_16 = (__this->___cursor_2);
		NullCheck(L_16);
		Transform_t2 * L_17 = Component_get_transform_m508(L_16, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_17);
		Vector3_t5  L_18 = Transform_get_position_m506(L_17, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_15);
		Vector3_t5  L_19 = Transform_InverseTransformPoint_m531(L_15, L_18, /*hidden argument*/&Transform_InverseTransformPoint_m531_MethodInfo);
		__this->___offset_18 = L_19;
		float L_20 = ___dist;
		__this->___distance_19 = L_20;
		Transform_t2 * L_21 = (__this->___ImageTarget_3);
		NullCheck(L_21);
		Vector3_t5  L_22 = Transform_get_localPosition_m532(L_21, /*hidden argument*/&Transform_get_localPosition_m532_MethodInfo);
		V_0 = L_22;
		float L_23 = ((&V_0)->___z_3);
		__this->___startingImageDistance_20 = L_23;
		__this->___shakeCounter_21 = 0;
		Initobj (InitializedTypeInfo(&Vector3_t5_il2cpp_TypeInfo), (&V_1));
		Vector3_t5  L_24 = V_1;
		__this->___lastShakeVel_23 = L_24;
		Vector3_t5  L_25 = GrabManager_GetShakePoint_m25(__this, /*hidden argument*/&GrabManager_GetShakePoint_m25_MethodInfo);
		__this->___lastShakePoint_24 = L_25;
		return;
	}
}
// System.Void GrabManager::EndGrab()
extern "C" void GrabManager_EndGrab_m23 (GrabManager_t17 * __this, MethodInfo* method)
{
	{
		Grabbable_t14 * L_0 = (__this->___grabbedObject_15);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&Grabbable_OnGrabEnd_m533_MethodInfo, L_0);
		__this->___grabbedObject_15 = (Grabbable_t14 *)NULL;
		StareInputModule_t16 * L_1 = (__this->___stareInput_17);
		bool L_2 = Object_op_Inequality_m527(NULL /*static, unused*/, L_1, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		StareInputModule_t16 * L_3 = (__this->___stareInput_17);
		NullCheck(L_3);
		Behaviour_set_enabled_m530(L_3, 1, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
	}

IL_002f:
	{
		return;
	}
}
// System.Void GrabManager::Update()
extern MethodInfo GrabManager_Update_m24_MethodInfo;
extern "C" void GrabManager_Update_m24 (GrabManager_t17 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t5  V_1 = {0};
	Vector3_t5  V_2 = {0};
	Vector3_t5  V_3 = {0};
	float V_4 = 0.0f;
	Vector3_t5  V_5 = {0};
	{
		bool L_0 = GrabManager_get_hasGrab_m21(__this, /*hidden argument*/&GrabManager_get_hasGrab_m21_MethodInfo);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_1 = Input_GetKey_m534(NULL /*static, unused*/, (String_t*) &_stringLiteral2, /*hidden argument*/&Input_GetKey_m534_MethodInfo);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		GrabManager_EndGrab_m23(__this, /*hidden argument*/&GrabManager_EndGrab_m23_MethodInfo);
		return;
	}

IL_0022:
	{
		Transform_t2 * L_2 = (__this->___ImageTarget_3);
		NullCheck(L_2);
		Vector3_t5  L_3 = Transform_get_localPosition_m532(L_2, /*hidden argument*/&Transform_get_localPosition_m532_MethodInfo);
		V_5 = L_3;
		float L_4 = ((&V_5)->___z_3);
		float L_5 = (__this->___startingImageDistance_20);
		float L_6 = (__this->___DistanceChangeFactor_5);
		V_0 = ((float)((float)((float)((float)L_4-(float)L_5))*(float)L_6));
		float L_7 = V_0;
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		float L_8 = V_0;
		V_0 = ((float)((float)L_8*(float)(1.5f)));
	}

IL_0058:
	{
		Cursor_t13 * L_9 = (__this->___cursor_2);
		Camera_t15 * L_10 = (__this->___cam_16);
		NullCheck(L_10);
		Transform_t2 * L_11 = Component_get_transform_m508(L_10, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_11);
		Vector3_t5  L_12 = Transform_get_position_m506(L_11, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Camera_t15 * L_13 = (__this->___cam_16);
		NullCheck(L_13);
		Transform_t2 * L_14 = Component_get_transform_m508(L_13, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_14);
		Vector3_t5  L_15 = Transform_get_forward_m535(L_14, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		float L_16 = (__this->___distance_19);
		float L_17 = V_0;
		float L_18 = (__this->___MinimumDistance_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_19 = Mathf_Max_m536(NULL /*static, unused*/, ((float)((float)L_16+(float)L_17)), L_18, /*hidden argument*/&Mathf_Max_m536_MethodInfo);
		Camera_t15 * L_20 = (__this->___cam_16);
		NullCheck(L_20);
		float L_21 = Camera_get_nearClipPlane_m537(L_20, /*hidden argument*/&Camera_get_nearClipPlane_m537_MethodInfo);
		NullCheck(L_9);
		Cursor_SetOffset_m16(L_9, L_12, L_15, ((float)((float)L_19+(float)L_21)), /*hidden argument*/&Cursor_SetOffset_m16_MethodInfo);
		Grabbable_t14 * L_22 = (__this->___grabbedObject_15);
		NullCheck(L_22);
		Transform_t2 * L_23 = Component_get_transform_m508(L_22, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_24 = (__this->___offset_18);
		NullCheck(L_23);
		Vector3_t5  L_25 = Transform_TransformPoint_m538(L_23, L_24, /*hidden argument*/&Transform_TransformPoint_m538_MethodInfo);
		V_1 = L_25;
		float L_26 = (__this->___BreakDistance_9);
		if ((!(((double)(((double)L_26))) > ((double)(0.1)))))
		{
			goto IL_00f6;
		}
	}
	{
		Vector3_t5  L_27 = V_1;
		Cursor_t13 * L_28 = (__this->___cursor_2);
		NullCheck(L_28);
		Transform_t2 * L_29 = Component_get_transform_m508(L_28, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_29);
		Vector3_t5  L_30 = Transform_get_position_m506(L_29, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		float L_31 = Vector3_Distance_m539(NULL /*static, unused*/, L_27, L_30, /*hidden argument*/&Vector3_Distance_m539_MethodInfo);
		float L_32 = (__this->___BreakDistance_9);
		if ((!(((float)L_31) > ((float)L_32))))
		{
			goto IL_00f6;
		}
	}
	{
		GrabManager_EndGrab_m23(__this, /*hidden argument*/&GrabManager_EndGrab_m23_MethodInfo);
		return;
	}

IL_00f6:
	{
		Grabbable_t14 * L_33 = (__this->___grabbedObject_15);
		Vector3_t5  L_34 = V_1;
		Cursor_t13 * L_35 = (__this->___cursor_2);
		NullCheck(L_35);
		Transform_t2 * L_36 = Component_get_transform_m508(L_35, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_36);
		Vector3_t5  L_37 = Transform_get_position_m506(L_36, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		float L_38 = (__this->___Springiness_6);
		NullCheck(L_33);
		VirtActionInvoker3< Vector3_t5 , Vector3_t5 , float >::Invoke(&Grabbable_OnGrabUpdate_m540_MethodInfo, L_33, L_34, L_37, L_38);
		bool L_39 = (__this->___vrMode_14);
		if (L_39)
		{
			goto IL_0124;
		}
	}
	{
		return;
	}

IL_0124:
	{
		Vector3_t5  L_40 = GrabManager_GetShakePoint_m25(__this, /*hidden argument*/&GrabManager_GetShakePoint_m25_MethodInfo);
		V_2 = L_40;
		Vector3_t5  L_41 = V_2;
		Vector3_t5  L_42 = (__this->___lastShakePoint_24);
		Vector3_t5  L_43 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_3 = L_43;
		Vector3_t5  L_44 = V_3;
		Vector3_t5  L_45 = (__this->___lastShakeVel_23);
		float L_46 = Vector3_Angle_m541(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/&Vector3_Angle_m541_MethodInfo);
		V_4 = L_46;
		float L_47 = Vector3_get_magnitude_m542((&V_3), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		float L_48 = (__this->___ShakeThreshold_12);
		if ((((float)L_47) > ((float)L_48)))
		{
			goto IL_016e;
		}
	}
	{
		Vector3_t5 * L_49 = &(__this->___lastShakeVel_23);
		float L_50 = Vector3_get_magnitude_m542(L_49, /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		float L_51 = (__this->___ShakeThreshold_12);
		if ((!(((float)L_50) > ((float)L_51))))
		{
			goto IL_01ac;
		}
	}

IL_016e:
	{
		float L_52 = V_4;
		float L_53 = (__this->___ShakeAngleThreshold_13);
		if ((!(((float)L_52) > ((float)L_53))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t L_54 = (__this->___shakeCounter_21);
		__this->___shakeCounter_21 = ((int32_t)((int32_t)L_54+(int32_t)1));
		float L_55 = (__this->___ShakeTimeout_11);
		__this->___shakeTimer_22 = L_55;
		int32_t L_56 = (__this->___shakeCounter_21);
		int32_t L_57 = (__this->___DropShakesRequired_10);
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_01ac;
		}
	}
	{
		GrabManager_EndGrab_m23(__this, /*hidden argument*/&GrabManager_EndGrab_m23_MethodInfo);
	}

IL_01ac:
	{
		float L_58 = (__this->___shakeTimer_22);
		if ((!(((float)L_58) > ((float)(0.0f)))))
		{
			goto IL_01e5;
		}
	}
	{
		float L_59 = (__this->___shakeTimer_22);
		float L_60 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		__this->___shakeTimer_22 = ((float)((float)L_59-(float)L_60));
		float L_61 = (__this->___shakeTimer_22);
		if ((!(((float)L_61) <= ((float)(0.0f)))))
		{
			goto IL_01e5;
		}
	}
	{
		__this->___shakeCounter_21 = 0;
	}

IL_01e5:
	{
		Vector3_t5  L_62 = V_3;
		__this->___lastShakeVel_23 = L_62;
		Vector3_t5  L_63 = V_2;
		__this->___lastShakePoint_24 = L_63;
		return;
	}
}
// UnityEngine.Vector3 GrabManager::GetShakePoint()
extern "C" Vector3_t5  GrabManager_GetShakePoint_m25 (GrabManager_t17 * __this, MethodInfo* method)
{
	{
		Camera_t15 * L_0 = (__this->___cam_16);
		NullCheck(L_0);
		Transform_t2 * L_1 = Component_get_transform_m508(L_0, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_1);
		Vector3_t5  L_2 = Transform_get_position_m506(L_1, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Camera_t15 * L_3 = (__this->___cam_16);
		NullCheck(L_3);
		Transform_t2 * L_4 = Component_get_transform_m508(L_3, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_4);
		Vector3_t5  L_5 = Transform_get_forward_m535(L_4, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		Vector3_t5  L_6 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_5, (2.0f), /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_7 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_2, L_6, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		Transform_t2 * L_8 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_8);
		Vector3_t5  L_9 = Transform_get_position_m506(L_8, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_10 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		return L_10;
	}
}
// GrabbableObject
#include "AssemblyU2DCSharp_GrabbableObject.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GrabbableObject_t19_il2cpp_TypeInfo;
// GrabbableObject
#include "AssemblyU2DCSharp_GrabbableObjectMethodDeclarations.h"

// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_Rigidbody.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventData.h"
// UnityEngine.ForceMode
#include "UnityEngine_UnityEngine_ForceMode.h"
// UnityEngine.Rigidbody
#include "UnityEngine_UnityEngine_RigidbodyMethodDeclarations.h"
extern MethodInfo Rigidbody_set_freezeRotation_m548_MethodInfo;
extern MethodInfo Rigidbody_get_drag_m549_MethodInfo;
extern MethodInfo Rigidbody_get_angularDrag_m550_MethodInfo;
extern MethodInfo Rigidbody_set_drag_m551_MethodInfo;
extern MethodInfo Rigidbody_set_angularDrag_m552_MethodInfo;
extern MethodInfo Rigidbody_set_angularVelocity_m553_MethodInfo;
extern MethodInfo Rigidbody_set_velocity_m554_MethodInfo;
extern MethodInfo Rigidbody_AddForceAtPosition_m555_MethodInfo;
struct Component_t167;
// UnityEngine.CastHelper`1<UnityEngine.Rigidbody>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_3.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t18_m556(__this, method) (( Rigidbody_t18 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRigidbody_t18_m556_GenericMethod;


// System.Void GrabbableObject::.ctor()
extern MethodInfo GrabbableObject__ctor_m26_MethodInfo;
extern "C" void GrabbableObject__ctor_m26 (GrabbableObject_t19 * __this, MethodInfo* method)
{
	{
		Grabbable__ctor_m18(__this, /*hidden argument*/&Grabbable__ctor_m18_MethodInfo);
		return;
	}
}
// System.Void GrabbableObject::Start()
extern MethodInfo GrabbableObject_Start_m27_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRigidbody_t18_m556_MethodInfo_var;
extern "C" void GrabbableObject_Start_m27 (GrabbableObject_t19 * __this, MethodInfo* method)
{
	static bool GrabbableObject_Start_m27_init;
	if (!GrabbableObject_Start_m27_init)
	{
		Component_GetComponent_TisRigidbody_t18_m556_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t18_m556_GenericMethod);
		GrabbableObject_Start_m27_init = true;
	}
	{
		Rigidbody_t18 * L_0 = Component_GetComponent_TisRigidbody_t18_m556(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t18_m556_MethodInfo_var);
		__this->___body_3 = L_0;
		return;
	}
}
// System.Void GrabbableObject::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern MethodInfo GrabbableObject_OnSelect_m28_MethodInfo;
extern "C" void GrabbableObject_OnSelect_m28 (GrabbableObject_t19 * __this, BaseEventData_t20 * ___eventData, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GrabbableObject::OnGrabStart(System.Single,System.Single)
extern MethodInfo GrabbableObject_OnGrabStart_m29_MethodInfo;
extern "C" void GrabbableObject_OnGrabStart_m29 (GrabbableObject_t19 * __this, float ___damping, float ___angularDamping, MethodInfo* method)
{
	{
		bool L_0 = (__this->___FreezeRotation_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Rigidbody_t18 * L_1 = (__this->___body_3);
		NullCheck(L_1);
		Rigidbody_set_freezeRotation_m548(L_1, 1, /*hidden argument*/&Rigidbody_set_freezeRotation_m548_MethodInfo);
	}

IL_0017:
	{
		Rigidbody_t18 * L_2 = (__this->___body_3);
		NullCheck(L_2);
		float L_3 = Rigidbody_get_drag_m549(L_2, /*hidden argument*/&Rigidbody_get_drag_m549_MethodInfo);
		__this->___savedDrag_4 = L_3;
		Rigidbody_t18 * L_4 = (__this->___body_3);
		NullCheck(L_4);
		float L_5 = Rigidbody_get_angularDrag_m550(L_4, /*hidden argument*/&Rigidbody_get_angularDrag_m550_MethodInfo);
		__this->___savedAngularDrag_5 = L_5;
		Rigidbody_t18 * L_6 = (__this->___body_3);
		float L_7 = ___damping;
		NullCheck(L_6);
		Rigidbody_set_drag_m551(L_6, L_7, /*hidden argument*/&Rigidbody_set_drag_m551_MethodInfo);
		Rigidbody_t18 * L_8 = (__this->___body_3);
		float L_9 = ___angularDamping;
		NullCheck(L_8);
		Rigidbody_set_angularDrag_m552(L_8, L_9, /*hidden argument*/&Rigidbody_set_angularDrag_m552_MethodInfo);
		return;
	}
}
// System.Void GrabbableObject::OnGrabEnd()
extern MethodInfo GrabbableObject_OnGrabEnd_m30_MethodInfo;
extern "C" void GrabbableObject_OnGrabEnd_m30 (GrabbableObject_t19 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	{
		Rigidbody_t18 * L_0 = (__this->___body_3);
		Initobj (InitializedTypeInfo(&Vector3_t5_il2cpp_TypeInfo), (&V_0));
		Vector3_t5  L_1 = V_0;
		NullCheck(L_0);
		Rigidbody_set_angularVelocity_m553(L_0, L_1, /*hidden argument*/&Rigidbody_set_angularVelocity_m553_MethodInfo);
		Rigidbody_t18 * L_2 = (__this->___body_3);
		Initobj (InitializedTypeInfo(&Vector3_t5_il2cpp_TypeInfo), (&V_1));
		Vector3_t5  L_3 = V_1;
		NullCheck(L_2);
		Rigidbody_set_velocity_m554(L_2, L_3, /*hidden argument*/&Rigidbody_set_velocity_m554_MethodInfo);
		Rigidbody_t18 * L_4 = (__this->___body_3);
		float L_5 = (__this->___savedDrag_4);
		NullCheck(L_4);
		Rigidbody_set_drag_m551(L_4, L_5, /*hidden argument*/&Rigidbody_set_drag_m551_MethodInfo);
		Rigidbody_t18 * L_6 = (__this->___body_3);
		float L_7 = (__this->___savedAngularDrag_5);
		NullCheck(L_6);
		Rigidbody_set_angularDrag_m552(L_6, L_7, /*hidden argument*/&Rigidbody_set_angularDrag_m552_MethodInfo);
		bool L_8 = (__this->___FreezeRotation_2);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		Rigidbody_t18 * L_9 = (__this->___body_3);
		NullCheck(L_9);
		Rigidbody_set_freezeRotation_m548(L_9, 0, /*hidden argument*/&Rigidbody_set_freezeRotation_m548_MethodInfo);
	}

IL_0061:
	{
		return;
	}
}
// System.Void GrabbableObject::OnGrabUpdate(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern MethodInfo GrabbableObject_OnGrabUpdate_m31_MethodInfo;
extern "C" void GrabbableObject_OnGrabUpdate_m31 (GrabbableObject_t19 * __this, Vector3_t5  ___grabbedPosition, Vector3_t5  ___targetPosition, float ___springiness, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Vector3_t5  L_0 = ___targetPosition;
		Vector3_t5  L_1 = ___grabbedPosition;
		Vector3_t5  L_2 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		float L_3 = ___springiness;
		Vector3_t5  L_4 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		V_0 = L_4;
		Rigidbody_t18 * L_5 = (__this->___body_3);
		Vector3_t5  L_6 = V_0;
		float L_7 = Vector3_get_magnitude_m542((&V_0), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		Vector3_t5  L_8 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_9 = ___grabbedPosition;
		NullCheck(L_5);
		Rigidbody_AddForceAtPosition_m555(L_5, L_8, L_9, 2, /*hidden argument*/&Rigidbody_AddForceAtPosition_m555_MethodInfo);
		return;
	}
}
// IKLimb/HandRotations
#include "AssemblyU2DCSharp_IKLimb_HandRotations.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HandRotations_t21_il2cpp_TypeInfo;
// IKLimb/HandRotations
#include "AssemblyU2DCSharp_IKLimb_HandRotationsMethodDeclarations.h"



// IKLimb
#include "AssemblyU2DCSharp_IKLimb.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IKLimb_t22_il2cpp_TypeInfo;
// IKLimb
#include "AssemblyU2DCSharp_IKLimbMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
extern TypeInfo GameObject_t7_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo GameObject__ctor_m557_MethodInfo;
extern MethodInfo GameObject_get_transform_m558_MethodInfo;
extern MethodInfo Transform_set_parent_m559_MethodInfo;
extern MethodInfo Vector3_get_up_m560_MethodInfo;
extern MethodInfo Vector3_op_Multiply_m561_MethodInfo;
extern MethodInfo IKLimb_CalculateIK_m35_MethodInfo;
extern MethodInfo Vector3_get_zero_m562_MethodInfo;
extern MethodInfo Vector3_op_Equality_m563_MethodInfo;
extern MethodInfo Color_get_yellow_m564_MethodInfo;
extern MethodInfo Debug_DrawLine_m565_MethodInfo;
extern MethodInfo Color_get_red_m566_MethodInfo;
extern MethodInfo Mathf_Min_m567_MethodInfo;
extern MethodInfo Mathf_Acos_m568_MethodInfo;
extern MethodInfo Transform_get_parent_m569_MethodInfo;
extern MethodInfo Transform_get_localScale_m570_MethodInfo;
extern MethodInfo Transform_get_localRotation_m571_MethodInfo;
extern MethodInfo Transform_LookAt_m572_MethodInfo;
extern MethodInfo Transform_get_up_m573_MethodInfo;
extern MethodInfo Transform_LookAt_m574_MethodInfo;
extern MethodInfo Quaternion_get_eulerAngles_m575_MethodInfo;
extern MethodInfo Quaternion_Euler_m576_MethodInfo;
extern MethodInfo Transform_set_localRotation_m577_MethodInfo;
extern MethodInfo Transform_set_localScale_m578_MethodInfo;
extern MethodInfo Transform_set_localPosition_m579_MethodInfo;
extern MethodInfo Mathf_Clamp01_m580_MethodInfo;
extern MethodInfo Quaternion_Slerp_m581_MethodInfo;
extern MethodInfo String_Concat_m582_MethodInfo;
extern MethodInfo Debug_Log_m583_MethodInfo;


// System.Void IKLimb::.ctor()
extern MethodInfo IKLimb__ctor_m32_MethodInfo;
extern "C" void IKLimb__ctor_m32 (IKLimb_t22 * __this, MethodInfo* method)
{
	{
		__this->___transition_9 = (1.0f);
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void IKLimb::Start()
extern MethodInfo IKLimb_Start_m33_MethodInfo;
extern "C" void IKLimb_Start_m33 (IKLimb_t22 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = (__this->___upperArm_2);
		NullCheck(L_0);
		Quaternion_t10  L_1 = Transform_get_rotation_m513(L_0, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		__this->___upperArmStartRotation_12 = L_1;
		Transform_t2 * L_2 = (__this->___forearm_3);
		NullCheck(L_2);
		Quaternion_t10  L_3 = Transform_get_rotation_m513(L_2, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		__this->___forearmStartRotation_13 = L_3;
		Transform_t2 * L_4 = (__this->___hand_4);
		NullCheck(L_4);
		Quaternion_t10  L_5 = Transform_get_rotation_m513(L_4, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		__this->___handStartRotation_14 = L_5;
		Transform_t2 * L_6 = (__this->___elbowTarget_6);
		NullCheck(L_6);
		Vector3_t5  L_7 = Transform_get_position_m506(L_6, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_8 = (__this->___upperArm_2);
		NullCheck(L_8);
		Vector3_t5  L_9 = Transform_get_position_m506(L_8, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_10 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		__this->___elbowTargetRelativeStartPosition_16 = L_10;
		GameObject_t7 * L_11 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m557(L_11, (String_t*) &_stringLiteral3, /*hidden argument*/&GameObject__ctor_m557_MethodInfo);
		__this->___upperArmAxisCorrection_17 = L_11;
		GameObject_t7 * L_12 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m557(L_12, (String_t*) &_stringLiteral4, /*hidden argument*/&GameObject__ctor_m557_MethodInfo);
		__this->___forearmAxisCorrection_18 = L_12;
		GameObject_t7 * L_13 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m557(L_13, (String_t*) &_stringLiteral5, /*hidden argument*/&GameObject__ctor_m557_MethodInfo);
		__this->___handAxisCorrection_19 = L_13;
		GameObject_t7 * L_14 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_14);
		Transform_t2 * L_15 = GameObject_get_transform_m558(L_14, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_16 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_15);
		Transform_set_parent_m559(L_15, L_16, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		GameObject_t7 * L_17 = (__this->___forearmAxisCorrection_18);
		NullCheck(L_17);
		Transform_t2 * L_18 = GameObject_get_transform_m558(L_17, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		GameObject_t7 * L_19 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_19);
		Transform_t2 * L_20 = GameObject_get_transform_m558(L_19, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_18);
		Transform_set_parent_m559(L_18, L_20, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		GameObject_t7 * L_21 = (__this->___handAxisCorrection_19);
		NullCheck(L_21);
		Transform_t2 * L_22 = GameObject_get_transform_m558(L_21, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		GameObject_t7 * L_23 = (__this->___forearmAxisCorrection_18);
		NullCheck(L_23);
		Transform_t2 * L_24 = GameObject_get_transform_m558(L_23, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_22);
		Transform_set_parent_m559(L_22, L_24, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		Transform_t2 * L_25 = (__this->___upperArm_2);
		NullCheck(L_25);
		Vector3_t5  L_26 = Transform_get_position_m506(L_25, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_27 = Vector3_get_up_m560(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m560_MethodInfo);
		Vector3_t5  L_28 = Vector3_op_Multiply_m561(NULL /*static, unused*/, (5.0f), L_27, /*hidden argument*/&Vector3_op_Multiply_m561_MethodInfo);
		Vector3_t5  L_29 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_26, L_28, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		__this->___lastUpperArmPosition_20 = L_29;
		return;
	}
}
// System.Void IKLimb::LateUpdate()
extern MethodInfo IKLimb_LateUpdate_m34_MethodInfo;
extern "C" void IKLimb_LateUpdate_m34 (IKLimb_t22 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___IsEnabled_7);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IKLimb_CalculateIK_m35(__this, /*hidden argument*/&IKLimb_CalculateIK_m35_MethodInfo);
		return;
	}
}
// System.Void IKLimb::CalculateIK()
extern "C" void IKLimb_CalculateIK_m35 (IKLimb_t22 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t5  V_7 = {0};
	Vector3_t5  V_8 = {0};
	Transform_t2 * V_9 = {0};
	Transform_t2 * V_10 = {0};
	Transform_t2 * V_11 = {0};
	Vector3_t5  V_12 = {0};
	Vector3_t5  V_13 = {0};
	Vector3_t5  V_14 = {0};
	Vector3_t5  V_15 = {0};
	Vector3_t5  V_16 = {0};
	Vector3_t5  V_17 = {0};
	Quaternion_t10  V_18 = {0};
	Quaternion_t10  V_19 = {0};
	Quaternion_t10  V_20 = {0};
	Quaternion_t10  V_21 = {0};
	Quaternion_t10  V_22 = {0};
	int32_t V_23 = {0};
	{
		Transform_t2 * L_0 = (__this->___target_5);
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t5  L_2 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		__this->___targetRelativeStartPosition_15 = L_2;
		return;
	}

IL_001d:
	{
		Vector3_t5  L_3 = (__this->___targetRelativeStartPosition_15);
		Vector3_t5  L_4 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		bool L_5 = Vector3_op_Equality_m563(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Equality_m563_MethodInfo);
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		Transform_t2 * L_6 = (__this->___target_5);
		bool L_7 = Object_op_Inequality_m527(NULL /*static, unused*/, L_6, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		Transform_t2 * L_8 = (__this->___target_5);
		NullCheck(L_8);
		Vector3_t5  L_9 = Transform_get_position_m506(L_8, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_10 = (__this->___upperArm_2);
		NullCheck(L_10);
		Vector3_t5  L_11 = Transform_get_position_m506(L_10, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_12 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		__this->___targetRelativeStartPosition_15 = L_12;
	}

IL_0064:
	{
		bool L_13 = (__this->___idleOptimization_10);
		if (!L_13)
		{
			goto IL_010c;
		}
	}
	{
		Vector3_t5  L_14 = (__this->___lastUpperArmPosition_20);
		Transform_t2 * L_15 = (__this->___upperArm_2);
		NullCheck(L_15);
		Vector3_t5  L_16 = Transform_get_position_m506(L_15, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		bool L_17 = Vector3_op_Equality_m563(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/&Vector3_op_Equality_m563_MethodInfo);
		if (!L_17)
		{
			goto IL_010c;
		}
	}
	{
		Vector3_t5  L_18 = (__this->___lastTargetPosition_21);
		Transform_t2 * L_19 = (__this->___target_5);
		NullCheck(L_19);
		Vector3_t5  L_20 = Transform_get_position_m506(L_19, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		bool L_21 = Vector3_op_Equality_m563(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/&Vector3_op_Equality_m563_MethodInfo);
		if (!L_21)
		{
			goto IL_010c;
		}
	}
	{
		Vector3_t5  L_22 = (__this->___lastElbowTargetPosition_22);
		Transform_t2 * L_23 = (__this->___elbowTarget_6);
		NullCheck(L_23);
		Vector3_t5  L_24 = Transform_get_position_m506(L_23, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		bool L_25 = Vector3_op_Equality_m563(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/&Vector3_op_Equality_m563_MethodInfo);
		if (!L_25)
		{
			goto IL_010c;
		}
	}
	{
		bool L_26 = (__this->___debug_8);
		if (!L_26)
		{
			goto IL_010b;
		}
	}
	{
		Transform_t2 * L_27 = (__this->___forearm_3);
		NullCheck(L_27);
		Vector3_t5  L_28 = Transform_get_position_m506(L_27, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_29 = (__this->___elbowTarget_6);
		NullCheck(L_29);
		Vector3_t5  L_30 = Transform_get_position_m506(L_29, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Color_t51  L_31 = Color_get_yellow_m564(NULL /*static, unused*/, /*hidden argument*/&Color_get_yellow_m564_MethodInfo);
		Debug_DrawLine_m565(NULL /*static, unused*/, L_28, L_30, L_31, /*hidden argument*/&Debug_DrawLine_m565_MethodInfo);
		Transform_t2 * L_32 = (__this->___upperArm_2);
		NullCheck(L_32);
		Vector3_t5  L_33 = Transform_get_position_m506(L_32, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_34 = (__this->___target_5);
		NullCheck(L_34);
		Vector3_t5  L_35 = Transform_get_position_m506(L_34, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Color_t51  L_36 = Color_get_red_m566(NULL /*static, unused*/, /*hidden argument*/&Color_get_red_m566_MethodInfo);
		Debug_DrawLine_m565(NULL /*static, unused*/, L_33, L_35, L_36, /*hidden argument*/&Debug_DrawLine_m565_MethodInfo);
	}

IL_010b:
	{
		return;
	}

IL_010c:
	{
		Transform_t2 * L_37 = (__this->___upperArm_2);
		NullCheck(L_37);
		Vector3_t5  L_38 = Transform_get_position_m506(L_37, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		__this->___lastUpperArmPosition_20 = L_38;
		Transform_t2 * L_39 = (__this->___target_5);
		NullCheck(L_39);
		Vector3_t5  L_40 = Transform_get_position_m506(L_39, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		__this->___lastTargetPosition_21 = L_40;
		Transform_t2 * L_41 = (__this->___elbowTarget_6);
		NullCheck(L_41);
		Vector3_t5  L_42 = Transform_get_position_m506(L_41, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		__this->___lastElbowTargetPosition_22 = L_42;
		Transform_t2 * L_43 = (__this->___upperArm_2);
		NullCheck(L_43);
		Vector3_t5  L_44 = Transform_get_position_m506(L_43, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_45 = (__this->___forearm_3);
		NullCheck(L_45);
		Vector3_t5  L_46 = Transform_get_position_m506(L_45, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		float L_47 = Vector3_Distance_m539(NULL /*static, unused*/, L_44, L_46, /*hidden argument*/&Vector3_Distance_m539_MethodInfo);
		V_0 = L_47;
		Transform_t2 * L_48 = (__this->___forearm_3);
		NullCheck(L_48);
		Vector3_t5  L_49 = Transform_get_position_m506(L_48, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_50 = (__this->___hand_4);
		NullCheck(L_50);
		Vector3_t5  L_51 = Transform_get_position_m506(L_50, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		float L_52 = Vector3_Distance_m539(NULL /*static, unused*/, L_49, L_51, /*hidden argument*/&Vector3_Distance_m539_MethodInfo);
		V_1 = L_52;
		float L_53 = V_0;
		float L_54 = V_1;
		V_2 = ((float)((float)L_53+(float)L_54));
		float L_55 = V_0;
		V_3 = L_55;
		Transform_t2 * L_56 = (__this->___upperArm_2);
		NullCheck(L_56);
		Vector3_t5  L_57 = Transform_get_position_m506(L_56, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_58 = (__this->___target_5);
		NullCheck(L_58);
		Vector3_t5  L_59 = Transform_get_position_m506(L_58, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		float L_60 = Vector3_Distance_m539(NULL /*static, unused*/, L_57, L_59, /*hidden argument*/&Vector3_Distance_m539_MethodInfo);
		V_4 = L_60;
		float L_61 = V_4;
		float L_62 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_63 = Mathf_Min_m567(NULL /*static, unused*/, L_61, ((float)((float)L_62-(float)(0.0001f))), /*hidden argument*/&Mathf_Min_m567_MethodInfo);
		V_4 = L_63;
		float L_64 = V_3;
		float L_65 = V_3;
		float L_66 = V_1;
		float L_67 = V_1;
		float L_68 = V_4;
		float L_69 = V_4;
		float L_70 = V_4;
		V_5 = ((float)((float)((float)((float)((float)((float)((float)((float)L_64*(float)L_65))-(float)((float)((float)L_66*(float)L_67))))+(float)((float)((float)L_68*(float)L_69))))/(float)((float)((float)(2.0f)*(float)L_70))));
		float L_71 = V_5;
		float L_72 = V_3;
		float L_73 = acosf(((float)((float)L_71/(float)L_72)));
		V_6 = ((float)((float)L_73*(float)(57.29578f)));
		Transform_t2 * L_74 = (__this->___target_5);
		NullCheck(L_74);
		Vector3_t5  L_75 = Transform_get_position_m506(L_74, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		V_7 = L_75;
		Transform_t2 * L_76 = (__this->___elbowTarget_6);
		NullCheck(L_76);
		Vector3_t5  L_77 = Transform_get_position_m506(L_76, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		V_8 = L_77;
		Transform_t2 * L_78 = (__this->___upperArm_2);
		NullCheck(L_78);
		Transform_t2 * L_79 = Transform_get_parent_m569(L_78, /*hidden argument*/&Transform_get_parent_m569_MethodInfo);
		V_9 = L_79;
		Transform_t2 * L_80 = (__this->___forearm_3);
		NullCheck(L_80);
		Transform_t2 * L_81 = Transform_get_parent_m569(L_80, /*hidden argument*/&Transform_get_parent_m569_MethodInfo);
		V_10 = L_81;
		Transform_t2 * L_82 = (__this->___hand_4);
		NullCheck(L_82);
		Transform_t2 * L_83 = Transform_get_parent_m569(L_82, /*hidden argument*/&Transform_get_parent_m569_MethodInfo);
		V_11 = L_83;
		Transform_t2 * L_84 = (__this->___upperArm_2);
		NullCheck(L_84);
		Vector3_t5  L_85 = Transform_get_localScale_m570(L_84, /*hidden argument*/&Transform_get_localScale_m570_MethodInfo);
		V_12 = L_85;
		Transform_t2 * L_86 = (__this->___forearm_3);
		NullCheck(L_86);
		Vector3_t5  L_87 = Transform_get_localScale_m570(L_86, /*hidden argument*/&Transform_get_localScale_m570_MethodInfo);
		V_13 = L_87;
		Transform_t2 * L_88 = (__this->___hand_4);
		NullCheck(L_88);
		Vector3_t5  L_89 = Transform_get_localScale_m570(L_88, /*hidden argument*/&Transform_get_localScale_m570_MethodInfo);
		V_14 = L_89;
		Transform_t2 * L_90 = (__this->___upperArm_2);
		NullCheck(L_90);
		Vector3_t5  L_91 = Transform_get_localPosition_m532(L_90, /*hidden argument*/&Transform_get_localPosition_m532_MethodInfo);
		V_15 = L_91;
		Transform_t2 * L_92 = (__this->___forearm_3);
		NullCheck(L_92);
		Vector3_t5  L_93 = Transform_get_localPosition_m532(L_92, /*hidden argument*/&Transform_get_localPosition_m532_MethodInfo);
		V_16 = L_93;
		Transform_t2 * L_94 = (__this->___hand_4);
		NullCheck(L_94);
		Vector3_t5  L_95 = Transform_get_localPosition_m532(L_94, /*hidden argument*/&Transform_get_localPosition_m532_MethodInfo);
		V_17 = L_95;
		Transform_t2 * L_96 = (__this->___upperArm_2);
		NullCheck(L_96);
		Quaternion_t10  L_97 = Transform_get_rotation_m513(L_96, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		V_18 = L_97;
		Transform_t2 * L_98 = (__this->___forearm_3);
		NullCheck(L_98);
		Quaternion_t10  L_99 = Transform_get_rotation_m513(L_98, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		V_19 = L_99;
		Transform_t2 * L_100 = (__this->___hand_4);
		NullCheck(L_100);
		Quaternion_t10  L_101 = Transform_get_rotation_m513(L_100, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		V_20 = L_101;
		Transform_t2 * L_102 = (__this->___hand_4);
		NullCheck(L_102);
		Quaternion_t10  L_103 = Transform_get_localRotation_m571(L_102, /*hidden argument*/&Transform_get_localRotation_m571_MethodInfo);
		V_21 = L_103;
		Transform_t2 * L_104 = (__this->___target_5);
		Vector3_t5  L_105 = (__this->___targetRelativeStartPosition_15);
		Transform_t2 * L_106 = (__this->___upperArm_2);
		NullCheck(L_106);
		Vector3_t5  L_107 = Transform_get_position_m506(L_106, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_108 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_105, L_107, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		NullCheck(L_104);
		Transform_set_position_m518(L_104, L_108, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_109 = (__this->___elbowTarget_6);
		Vector3_t5  L_110 = (__this->___elbowTargetRelativeStartPosition_16);
		Transform_t2 * L_111 = (__this->___upperArm_2);
		NullCheck(L_111);
		Vector3_t5  L_112 = Transform_get_position_m506(L_111, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_113 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_110, L_112, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		NullCheck(L_109);
		Transform_set_position_m518(L_109, L_113, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_114 = (__this->___upperArm_2);
		Quaternion_t10  L_115 = (__this->___upperArmStartRotation_12);
		NullCheck(L_114);
		Transform_set_rotation_m512(L_114, L_115, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		Transform_t2 * L_116 = (__this->___forearm_3);
		Quaternion_t10  L_117 = (__this->___forearmStartRotation_13);
		NullCheck(L_116);
		Transform_set_rotation_m512(L_116, L_117, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		Transform_t2 * L_118 = (__this->___hand_4);
		Quaternion_t10  L_119 = (__this->___handStartRotation_14);
		NullCheck(L_118);
		Transform_set_rotation_m512(L_118, L_119, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		Transform_t2 * L_120 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_121 = (__this->___upperArm_2);
		NullCheck(L_121);
		Vector3_t5  L_122 = Transform_get_position_m506(L_121, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_120);
		Transform_set_position_m518(L_120, L_122, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_123 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_124 = V_7;
		Vector3_t5  L_125 = V_8;
		Transform_t2 * L_126 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_126);
		Vector3_t5  L_127 = Transform_get_position_m506(L_126, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_128 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_125, L_127, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		NullCheck(L_123);
		Transform_LookAt_m572(L_123, L_124, L_128, /*hidden argument*/&Transform_LookAt_m572_MethodInfo);
		GameObject_t7 * L_129 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_129);
		Transform_t2 * L_130 = GameObject_get_transform_m558(L_129, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_131 = (__this->___upperArm_2);
		NullCheck(L_131);
		Vector3_t5  L_132 = Transform_get_position_m506(L_131, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_130);
		Transform_set_position_m518(L_130, L_132, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		GameObject_t7 * L_133 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_133);
		Transform_t2 * L_134 = GameObject_get_transform_m558(L_133, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_135 = (__this->___forearm_3);
		NullCheck(L_135);
		Vector3_t5  L_136 = Transform_get_position_m506(L_135, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_137 = (__this->___upperArm_2);
		NullCheck(L_137);
		Vector3_t5  L_138 = Transform_get_up_m573(L_137, /*hidden argument*/&Transform_get_up_m573_MethodInfo);
		NullCheck(L_134);
		Transform_LookAt_m572(L_134, L_136, L_138, /*hidden argument*/&Transform_LookAt_m572_MethodInfo);
		Transform_t2 * L_139 = (__this->___upperArm_2);
		GameObject_t7 * L_140 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_140);
		Transform_t2 * L_141 = GameObject_get_transform_m558(L_140, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_139);
		Transform_set_parent_m559(L_139, L_141, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		GameObject_t7 * L_142 = (__this->___forearmAxisCorrection_18);
		NullCheck(L_142);
		Transform_t2 * L_143 = GameObject_get_transform_m558(L_142, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_144 = (__this->___forearm_3);
		NullCheck(L_144);
		Vector3_t5  L_145 = Transform_get_position_m506(L_144, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_143);
		Transform_set_position_m518(L_143, L_145, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		GameObject_t7 * L_146 = (__this->___forearmAxisCorrection_18);
		NullCheck(L_146);
		Transform_t2 * L_147 = GameObject_get_transform_m558(L_146, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_148 = (__this->___hand_4);
		NullCheck(L_148);
		Vector3_t5  L_149 = Transform_get_position_m506(L_148, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_150 = (__this->___forearm_3);
		NullCheck(L_150);
		Vector3_t5  L_151 = Transform_get_up_m573(L_150, /*hidden argument*/&Transform_get_up_m573_MethodInfo);
		NullCheck(L_147);
		Transform_LookAt_m572(L_147, L_149, L_151, /*hidden argument*/&Transform_LookAt_m572_MethodInfo);
		Transform_t2 * L_152 = (__this->___forearm_3);
		GameObject_t7 * L_153 = (__this->___forearmAxisCorrection_18);
		NullCheck(L_153);
		Transform_t2 * L_154 = GameObject_get_transform_m558(L_153, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_152);
		Transform_set_parent_m559(L_152, L_154, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		GameObject_t7 * L_155 = (__this->___handAxisCorrection_19);
		NullCheck(L_155);
		Transform_t2 * L_156 = GameObject_get_transform_m558(L_155, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_157 = (__this->___hand_4);
		NullCheck(L_157);
		Vector3_t5  L_158 = Transform_get_position_m506(L_157, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_156);
		Transform_set_position_m518(L_156, L_158, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_159 = (__this->___hand_4);
		GameObject_t7 * L_160 = (__this->___handAxisCorrection_19);
		NullCheck(L_160);
		Transform_t2 * L_161 = GameObject_get_transform_m558(L_160, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_159);
		Transform_set_parent_m559(L_159, L_161, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		Transform_t2 * L_162 = (__this->___target_5);
		Vector3_t5  L_163 = V_7;
		NullCheck(L_162);
		Transform_set_position_m518(L_162, L_163, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_164 = (__this->___elbowTarget_6);
		Vector3_t5  L_165 = V_8;
		NullCheck(L_164);
		Transform_set_position_m518(L_164, L_165, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		GameObject_t7 * L_166 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_166);
		Transform_t2 * L_167 = GameObject_get_transform_m558(L_166, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_168 = (__this->___target_5);
		Transform_t2 * L_169 = (__this->___elbowTarget_6);
		NullCheck(L_169);
		Vector3_t5  L_170 = Transform_get_position_m506(L_169, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		GameObject_t7 * L_171 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_171);
		Transform_t2 * L_172 = GameObject_get_transform_m558(L_171, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_172);
		Vector3_t5  L_173 = Transform_get_position_m506(L_172, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_174 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_170, L_173, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		NullCheck(L_167);
		Transform_LookAt_m574(L_167, L_168, L_174, /*hidden argument*/&Transform_LookAt_m574_MethodInfo);
		GameObject_t7 * L_175 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_175);
		Transform_t2 * L_176 = GameObject_get_transform_m558(L_175, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		GameObject_t7 * L_177 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_177);
		Transform_t2 * L_178 = GameObject_get_transform_m558(L_177, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_178);
		Quaternion_t10  L_179 = Transform_get_localRotation_m571(L_178, /*hidden argument*/&Transform_get_localRotation_m571_MethodInfo);
		V_22 = L_179;
		Vector3_t5  L_180 = Quaternion_get_eulerAngles_m575((&V_22), /*hidden argument*/&Quaternion_get_eulerAngles_m575_MethodInfo);
		float L_181 = V_6;
		Vector3_t5  L_182 = {0};
		Vector3__ctor_m510(&L_182, L_181, (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_183 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_180, L_182, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		Quaternion_t10  L_184 = Quaternion_Euler_m576(NULL /*static, unused*/, L_183, /*hidden argument*/&Quaternion_Euler_m576_MethodInfo);
		NullCheck(L_176);
		Transform_set_localRotation_m577(L_176, L_184, /*hidden argument*/&Transform_set_localRotation_m577_MethodInfo);
		GameObject_t7 * L_185 = (__this->___forearmAxisCorrection_18);
		NullCheck(L_185);
		Transform_t2 * L_186 = GameObject_get_transform_m558(L_185, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_187 = (__this->___target_5);
		Transform_t2 * L_188 = (__this->___elbowTarget_6);
		NullCheck(L_188);
		Vector3_t5  L_189 = Transform_get_position_m506(L_188, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		GameObject_t7 * L_190 = (__this->___upperArmAxisCorrection_17);
		NullCheck(L_190);
		Transform_t2 * L_191 = GameObject_get_transform_m558(L_190, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_191);
		Vector3_t5  L_192 = Transform_get_position_m506(L_191, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_193 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_189, L_192, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		NullCheck(L_186);
		Transform_LookAt_m574(L_186, L_187, L_193, /*hidden argument*/&Transform_LookAt_m574_MethodInfo);
		GameObject_t7 * L_194 = (__this->___handAxisCorrection_19);
		NullCheck(L_194);
		Transform_t2 * L_195 = GameObject_get_transform_m558(L_194, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_196 = (__this->___target_5);
		NullCheck(L_196);
		Quaternion_t10  L_197 = Transform_get_rotation_m513(L_196, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		NullCheck(L_195);
		Transform_set_rotation_m512(L_195, L_197, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		Transform_t2 * L_198 = (__this->___upperArm_2);
		Transform_t2 * L_199 = V_9;
		NullCheck(L_198);
		Transform_set_parent_m559(L_198, L_199, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		Transform_t2 * L_200 = (__this->___forearm_3);
		Transform_t2 * L_201 = V_10;
		NullCheck(L_200);
		Transform_set_parent_m559(L_200, L_201, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		Transform_t2 * L_202 = (__this->___hand_4);
		Transform_t2 * L_203 = V_11;
		NullCheck(L_202);
		Transform_set_parent_m559(L_202, L_203, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		Transform_t2 * L_204 = (__this->___upperArm_2);
		Vector3_t5  L_205 = V_12;
		NullCheck(L_204);
		Transform_set_localScale_m578(L_204, L_205, /*hidden argument*/&Transform_set_localScale_m578_MethodInfo);
		Transform_t2 * L_206 = (__this->___forearm_3);
		Vector3_t5  L_207 = V_13;
		NullCheck(L_206);
		Transform_set_localScale_m578(L_206, L_207, /*hidden argument*/&Transform_set_localScale_m578_MethodInfo);
		Transform_t2 * L_208 = (__this->___hand_4);
		Vector3_t5  L_209 = V_14;
		NullCheck(L_208);
		Transform_set_localScale_m578(L_208, L_209, /*hidden argument*/&Transform_set_localScale_m578_MethodInfo);
		Transform_t2 * L_210 = (__this->___upperArm_2);
		Vector3_t5  L_211 = V_15;
		NullCheck(L_210);
		Transform_set_localPosition_m579(L_210, L_211, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		Transform_t2 * L_212 = (__this->___forearm_3);
		Vector3_t5  L_213 = V_16;
		NullCheck(L_212);
		Transform_set_localPosition_m579(L_212, L_213, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		Transform_t2 * L_214 = (__this->___hand_4);
		Vector3_t5  L_215 = V_17;
		NullCheck(L_214);
		Transform_set_localPosition_m579(L_214, L_215, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		float L_216 = (__this->___transition_9);
		float L_217 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_216, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		__this->___transition_9 = L_217;
		Transform_t2 * L_218 = (__this->___upperArm_2);
		Quaternion_t10  L_219 = V_18;
		Transform_t2 * L_220 = (__this->___upperArm_2);
		NullCheck(L_220);
		Quaternion_t10  L_221 = Transform_get_rotation_m513(L_220, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		float L_222 = (__this->___transition_9);
		Quaternion_t10  L_223 = Quaternion_Slerp_m581(NULL /*static, unused*/, L_219, L_221, L_222, /*hidden argument*/&Quaternion_Slerp_m581_MethodInfo);
		NullCheck(L_218);
		Transform_set_rotation_m512(L_218, L_223, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		Transform_t2 * L_224 = (__this->___forearm_3);
		Quaternion_t10  L_225 = V_19;
		Transform_t2 * L_226 = (__this->___forearm_3);
		NullCheck(L_226);
		Quaternion_t10  L_227 = Transform_get_rotation_m513(L_226, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		float L_228 = (__this->___transition_9);
		Quaternion_t10  L_229 = Quaternion_Slerp_m581(NULL /*static, unused*/, L_225, L_227, L_228, /*hidden argument*/&Quaternion_Slerp_m581_MethodInfo);
		NullCheck(L_224);
		Transform_set_rotation_m512(L_224, L_229, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		int32_t L_230 = (__this->___handRotationPolicy_11);
		V_23 = L_230;
		int32_t L_231 = V_23;
		if (L_231 == 0)
		{
			goto IL_05f0;
		}
		if (L_231 == 1)
		{
			goto IL_0602;
		}
		if (L_231 == 2)
		{
			goto IL_0614;
		}
	}
	{
		goto IL_062f;
	}

IL_05f0:
	{
		Transform_t2 * L_232 = (__this->___hand_4);
		Quaternion_t10  L_233 = V_21;
		NullCheck(L_232);
		Transform_set_localRotation_m577(L_232, L_233, /*hidden argument*/&Transform_set_localRotation_m577_MethodInfo);
		goto IL_062f;
	}

IL_0602:
	{
		Transform_t2 * L_234 = (__this->___hand_4);
		Quaternion_t10  L_235 = V_20;
		NullCheck(L_234);
		Transform_set_rotation_m512(L_234, L_235, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		goto IL_062f;
	}

IL_0614:
	{
		Transform_t2 * L_236 = (__this->___hand_4);
		Transform_t2 * L_237 = (__this->___target_5);
		NullCheck(L_237);
		Quaternion_t10  L_238 = Transform_get_rotation_m513(L_237, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		NullCheck(L_236);
		Transform_set_rotation_m512(L_236, L_238, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		goto IL_062f;
	}

IL_062f:
	{
		bool L_239 = (__this->___debug_8);
		if (!L_239)
		{
			goto IL_0690;
		}
	}
	{
		Transform_t2 * L_240 = (__this->___forearm_3);
		NullCheck(L_240);
		Vector3_t5  L_241 = Transform_get_position_m506(L_240, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_242 = (__this->___elbowTarget_6);
		NullCheck(L_242);
		Vector3_t5  L_243 = Transform_get_position_m506(L_242, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Color_t51  L_244 = Color_get_yellow_m564(NULL /*static, unused*/, /*hidden argument*/&Color_get_yellow_m564_MethodInfo);
		Debug_DrawLine_m565(NULL /*static, unused*/, L_241, L_243, L_244, /*hidden argument*/&Debug_DrawLine_m565_MethodInfo);
		Transform_t2 * L_245 = (__this->___upperArm_2);
		NullCheck(L_245);
		Vector3_t5  L_246 = Transform_get_position_m506(L_245, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_247 = (__this->___target_5);
		NullCheck(L_247);
		Vector3_t5  L_248 = Transform_get_position_m506(L_247, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Color_t51  L_249 = Color_get_red_m566(NULL /*static, unused*/, /*hidden argument*/&Color_get_red_m566_MethodInfo);
		Debug_DrawLine_m565(NULL /*static, unused*/, L_246, L_248, L_249, /*hidden argument*/&Debug_DrawLine_m565_MethodInfo);
		float L_250 = V_5;
		float L_251 = L_250;
		Object_t * L_252 = Box(InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo), &L_251);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_253 = String_Concat_m582(NULL /*static, unused*/, (String_t*) &_stringLiteral6, L_252, /*hidden argument*/&String_Concat_m582_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_253, /*hidden argument*/&Debug_Log_m583_MethodInfo);
	}

IL_0690:
	{
		return;
	}
}
// Realiteer.LiquidBehavior
#include "AssemblyU2DCSharp_Realiteer_LiquidBehavior.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo LiquidBehavior_t24_il2cpp_TypeInfo;
// Realiteer.LiquidBehavior
#include "AssemblyU2DCSharp_Realiteer_LiquidBehaviorMethodDeclarations.h"

// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
extern TypeInfo Vector2_t48_il2cpp_TypeInfo;
extern TypeInfo Math3d_t26_il2cpp_TypeInfo;
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// Realiteer.Math3d
#include "AssemblyU2DCSharp_Realiteer_Math3dMethodDeclarations.h"
extern MethodInfo Mathf_Pow_m584_MethodInfo;
extern MethodInfo Mathf_Sqrt_m585_MethodInfo;
extern MethodInfo Renderer_get_material_m586_MethodInfo;
extern MethodInfo Mathf_Asin_m587_MethodInfo;
extern MethodInfo Vector2__ctor_m588_MethodInfo;
extern MethodInfo Material_SetTextureOffset_m589_MethodInfo;
extern MethodInfo Math3d_LinearAcceleration_m74_MethodInfo;
extern MethodInfo Transform_TransformDirection_m590_MethodInfo;
extern MethodInfo Vector3_op_UnaryNegation_m591_MethodInfo;
extern MethodInfo Vector3_Cross_m592_MethodInfo;
extern MethodInfo Transform_RotateAround_m593_MethodInfo;
struct Component_t167;
// UnityEngine.CastHelper`1<UnityEngine.Renderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_4.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t23_m594(__this, method) (( Renderer_t23 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisRenderer_t23_m594_GenericMethod;


// System.Void Realiteer.LiquidBehavior::.ctor()
extern MethodInfo LiquidBehavior__ctor_m36_MethodInfo;
extern "C" void LiquidBehavior__ctor_m36 (LiquidBehavior_t24 * __this, MethodInfo* method)
{
	{
		__this->___Level_3 = (0.5f);
		__this->___Gravity_6 = (-50.0f);
		__this->___Acceleration_7 = (100.0f);
		__this->___Damp_8 = (0.9f);
		Vector3_t5  L_0 = {0};
		Vector3__ctor_m510(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		__this->___axisAdjust_11 = L_0;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Realiteer.LiquidBehavior::Start()
extern MethodInfo LiquidBehavior_Start_m37_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var;
extern "C" void LiquidBehavior_Start_m37 (LiquidBehavior_t24 * __this, MethodInfo* method)
{
	static bool LiquidBehavior_Start_m37_init;
	if (!LiquidBehavior_Start_m37_init)
	{
		Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t23_m594_GenericMethod);
		LiquidBehavior_Start_m37_init = true;
	}
	{
		Vector3_t5  L_0 = {0};
		Vector3__ctor_m510(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		__this->___AngularVelocity_10 = L_0;
		Transform_t2 * L_1 = (__this->___SideShape_5);
		NullCheck(L_1);
		Renderer_t23 * L_2 = Component_GetComponent_TisRenderer_t23_m594(L_1, /*hidden argument*/Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var);
		__this->___r_13 = L_2;
		return;
	}
}
// System.Void Realiteer.LiquidBehavior::Update()
extern MethodInfo LiquidBehavior_Update_m38_MethodInfo;
extern "C" void LiquidBehavior_Update_m38 (LiquidBehavior_t24 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t5  V_1 = {0};
	Vector3_t5  V_2 = {0};
	Vector3_t5  V_3 = {0};
	Vector3_t5  V_4 = {0};
	{
		float L_0 = (__this->___Level_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		__this->___Level_3 = L_1;
		Transform_t2 * L_2 = (__this->___TopShape_4);
		float L_3 = (__this->___Level_3);
		Vector3_t5  L_4 = {0};
		Vector3__ctor_m510(&L_4, (0.0f), ((float)((float)L_3-(float)(0.5f))), (0.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		NullCheck(L_2);
		Transform_set_localPosition_m579(L_2, L_4, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		float L_5 = (__this->___Level_3);
		float L_6 = powf(((float)((float)L_5-(float)(0.5f))), (2.0f));
		float L_7 = sqrtf(((float)((float)(0.25f)-(float)L_6)));
		V_0 = ((float)((float)L_7*(float)(2.0f)));
		Transform_t2 * L_8 = (__this->___TopShape_4);
		float L_9 = V_0;
		float L_10 = V_0;
		Vector3_t5  L_11 = {0};
		Vector3__ctor_m510(&L_11, L_9, (0.0001f), L_10, /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		NullCheck(L_8);
		Transform_set_localScale_m578(L_8, L_11, /*hidden argument*/&Transform_set_localScale_m578_MethodInfo);
		Renderer_t23 * L_12 = (__this->___r_13);
		NullCheck(L_12);
		Material_t88 * L_13 = Renderer_get_material_m586(L_12, /*hidden argument*/&Renderer_get_material_m586_MethodInfo);
		float L_14 = (__this->___Level_3);
		float L_15 = asinf(((float)((float)((float)((float)L_14-(float)(0.5f)))/(float)(0.5f))));
		Vector2_t48  L_16 = {0};
		Vector2__ctor_m588(&L_16, (0.0f), ((float)((float)(0.25f)-(float)((float)((float)((float)((float)L_15/(float)(2.0f)))/(float)(3.14159274f))))), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		NullCheck(L_13);
		Material_SetTextureOffset_m589(L_13, (String_t*) &_stringLiteral7, L_16, /*hidden argument*/&Material_SetTextureOffset_m589_MethodInfo);
		Initobj (InitializedTypeInfo(&Vector3_t5_il2cpp_TypeInfo), (&V_1));
		bool L_17 = (__this->___UseRootMotion_2);
		if (!L_17)
		{
			goto IL_0137;
		}
	}
	{
		Transform_t2 * L_18 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_18);
		Vector3_t5  L_19 = Transform_get_position_m506(L_18, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		V_2 = L_19;
		Vector3_t5  L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Math3d_LinearAcceleration_m74(NULL /*static, unused*/, (&V_1), L_20, 2, /*hidden argument*/&Math3d_LinearAcceleration_m74_MethodInfo);
		Vector3_t5 * L_21 = (&V_1);
		float L_22 = (L_21->___x_1);
		Vector3_t5 * L_23 = &(__this->___axisAdjust_11);
		float L_24 = (L_23->___x_1);
		L_21->___x_1 = ((float)((float)L_22*(float)L_24));
		Vector3_t5 * L_25 = (&V_1);
		float L_26 = (L_25->___y_2);
		Vector3_t5 * L_27 = &(__this->___axisAdjust_11);
		float L_28 = (L_27->___y_2);
		L_25->___y_2 = ((float)((float)L_26*(float)L_28));
		Vector3_t5 * L_29 = (&V_1);
		float L_30 = (L_29->___z_3);
		Vector3_t5 * L_31 = &(__this->___axisAdjust_11);
		float L_32 = (L_31->___z_3);
		L_29->___z_3 = ((float)((float)L_30*(float)L_32));
		goto IL_01ba;
	}

IL_0137:
	{
		Transform_t2 * L_33 = (__this->___Root_12);
		NullCheck(L_33);
		Transform_t2 * L_34 = Component_get_transform_m508(L_33, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_35 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_35);
		Vector3_t5  L_36 = Transform_get_position_m506(L_35, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_34);
		Vector3_t5  L_37 = Transform_InverseTransformPoint_m531(L_34, L_36, /*hidden argument*/&Transform_InverseTransformPoint_m531_MethodInfo);
		V_2 = L_37;
		Vector3_t5  L_38 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Math3d_LinearAcceleration_m74(NULL /*static, unused*/, (&V_1), L_38, 2, /*hidden argument*/&Math3d_LinearAcceleration_m74_MethodInfo);
		Vector3_t5 * L_39 = (&V_1);
		float L_40 = (L_39->___x_1);
		Vector3_t5 * L_41 = &(__this->___axisAdjust_11);
		float L_42 = (L_41->___x_1);
		L_39->___x_1 = ((float)((float)L_40*(float)L_42));
		Vector3_t5 * L_43 = (&V_1);
		float L_44 = (L_43->___y_2);
		Vector3_t5 * L_45 = &(__this->___axisAdjust_11);
		float L_46 = (L_45->___y_2);
		L_43->___y_2 = ((float)((float)L_44*(float)L_46));
		Vector3_t5 * L_47 = (&V_1);
		float L_48 = (L_47->___z_3);
		Vector3_t5 * L_49 = &(__this->___axisAdjust_11);
		float L_50 = (L_49->___z_3);
		L_47->___z_3 = ((float)((float)L_48*(float)L_50));
		Transform_t2 * L_51 = (__this->___Root_12);
		NullCheck(L_51);
		Transform_t2 * L_52 = Component_get_transform_m508(L_51, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_53 = V_1;
		NullCheck(L_52);
		Vector3_t5  L_54 = Transform_TransformDirection_m590(L_52, L_53, /*hidden argument*/&Transform_TransformDirection_m590_MethodInfo);
		V_1 = L_54;
	}

IL_01ba:
	{
		float L_55 = ((&V_1)->___x_1);
		float L_56 = (__this->___Gravity_6);
		float L_57 = ((&V_1)->___y_2);
		float L_58 = ((&V_1)->___z_3);
		Vector3__ctor_m510((&V_3), ((-L_55)), ((float)((float)L_56-(float)L_57)), ((-L_58)), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Transform_t2 * L_59 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_59);
		Vector3_t5  L_60 = Transform_get_up_m573(L_59, /*hidden argument*/&Transform_get_up_m573_MethodInfo);
		Vector3_t5  L_61 = Vector3_op_UnaryNegation_m591(NULL /*static, unused*/, L_60, /*hidden argument*/&Vector3_op_UnaryNegation_m591_MethodInfo);
		Vector3_t5  L_62 = V_3;
		Vector3_t5  L_63 = Vector3_Cross_m592(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/&Vector3_Cross_m592_MethodInfo);
		float L_64 = (__this->___Acceleration_7);
		Vector3_t5  L_65 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		V_4 = L_65;
		Vector3_t5  L_66 = (__this->___AngularVelocity_10);
		Vector3_t5  L_67 = V_4;
		float L_68 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		Vector3_t5  L_69 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_70 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_66, L_69, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		__this->___AngularVelocity_10 = L_70;
		Vector3_t5  L_71 = (__this->___AngularVelocity_10);
		float L_72 = (__this->___Damp_8);
		Vector3_t5  L_73 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		__this->___AngularVelocity_10 = L_73;
		Transform_t2 * L_74 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_75 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_75);
		Vector3_t5  L_76 = Transform_get_position_m506(L_75, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_77 = (__this->___AngularVelocity_10);
		Vector3_t5 * L_78 = &(__this->___AngularVelocity_10);
		float L_79 = Vector3_get_magnitude_m542(L_78, /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		float L_80 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		NullCheck(L_74);
		Transform_RotateAround_m593(L_74, L_76, L_77, ((float)((float)L_79*(float)L_80)), /*hidden argument*/&Transform_RotateAround_m593_MethodInfo);
		Vector3_t5  L_81 = V_1;
		__this->___Accel_9 = L_81;
		return;
	}
}
// Realiteer.Math3d
#include "AssemblyU2DCSharp_Realiteer_Math3d.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// System.Double
#include "mscorlib_System_Double.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
#include "mscorlib_ArrayTypes.h"
extern TypeInfo Vector4_t173_il2cpp_TypeInfo;
extern TypeInfo SingleU5BU5D_t25_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"
extern Il2CppType SingleU5BU5D_t25_0_0_0;
extern MethodInfo Object__ctor_m595_MethodInfo;
extern MethodInfo Component_get_gameObject_m596_MethodInfo;
extern MethodInfo Object_set_hideFlags_m597_MethodInfo;
extern MethodInfo Object_DontDestroyOnLoad_m598_MethodInfo;
extern MethodInfo Vector3_Magnitude_m599_MethodInfo;
extern MethodInfo Vector3_Normalize_m600_MethodInfo;
extern MethodInfo Quaternion_Inverse_m601_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m602_MethodInfo;
extern MethodInfo Vector3_Dot_m603_MethodInfo;
extern MethodInfo Mathf_Abs_m604_MethodInfo;
extern MethodInfo Math3d_SetVectorLength_m43_MethodInfo;
extern MethodInfo Vector3_get_sqrMagnitude_m605_MethodInfo;
extern MethodInfo Vector3_get_normalized_m606_MethodInfo;
extern MethodInfo Math3d_ProjectPointOnLine_m49_MethodInfo;
extern MethodInfo Math3d_PointOnWhichSideOfLineSegment_m68_MethodInfo;
extern MethodInfo Math3d_SignedDistancePlanePoint_m53_MethodInfo;
extern MethodInfo Mathf_Sign_m607_MethodInfo;
extern MethodInfo Math_Acos_m608_MethodInfo;
extern MethodInfo Vector3_op_Division_m609_MethodInfo;
extern MethodInfo Math3d_ClosestPointsOnTwoLines_m48_MethodInfo;
extern MethodInfo Vector3_get_forward_m610_MethodInfo;
extern MethodInfo Quaternion_op_Multiply_m611_MethodInfo;
extern MethodInfo Vector3_get_right_m612_MethodInfo;
extern MethodInfo Matrix4x4_GetColumn_m613_MethodInfo;
extern MethodInfo Vector4_op_Implicit_m614_MethodInfo;
extern MethodInfo Quaternion_get_identity_m615_MethodInfo;
extern MethodInfo Vector3_get_one_m616_MethodInfo;
extern MethodInfo Math3d_LookRotationExtended_m64_MethodInfo;
extern MethodInfo Transform_Translate_m617_MethodInfo;
extern MethodInfo Camera_get_main_m618_MethodInfo;
extern MethodInfo Input_get_mousePosition_m619_MethodInfo;
extern MethodInfo Camera_WorldToScreenPoint_m620_MethodInfo;
extern MethodInfo Math3d_ProjectPointOnLineSegment_m50_MethodInfo;
extern MethodInfo Math3d_IsPointInRectangle_m72_MethodInfo;
extern MethodInfo Math3d_AreLineSegmentsCrossing_m73_MethodInfo;
extern MethodInfo Math3d_AddVectorLength_m42_MethodInfo;
extern MethodInfo Time_get_time_m621_MethodInfo;


// System.Void Realiteer.Math3d::.ctor()
extern MethodInfo Math3d__ctor_m39_MethodInfo;
extern "C" void Math3d__ctor_m39 (Math3d_t26 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void Realiteer.Math3d::.cctor()
extern MethodInfo Math3d__cctor_m40_MethodInfo;
extern "C" void Math3d__cctor_m40 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Realiteer.Math3d::Init()
extern MethodInfo Math3d_Init_m41_MethodInfo;
extern "C" void Math3d_Init_m41 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		GameObject_t7 * L_0 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m557(L_0, (String_t*) &_stringLiteral8, /*hidden argument*/&GameObject__ctor_m557_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = GameObject_get_transform_m558(L_0, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0 = L_1;
		GameObject_t7 * L_2 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m557(L_2, (String_t*) &_stringLiteral9, /*hidden argument*/&GameObject__ctor_m557_MethodInfo);
		NullCheck(L_2);
		Transform_t2 * L_3 = GameObject_get_transform_m558(L_2, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1 = L_3;
		Transform_t2 * L_4 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0;
		NullCheck(L_4);
		GameObject_t7 * L_5 = Component_get_gameObject_m596(L_4, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_5);
		Object_set_hideFlags_m597(L_5, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m597_MethodInfo);
		Transform_t2 * L_6 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0;
		NullCheck(L_6);
		GameObject_t7 * L_7 = Component_get_gameObject_m596(L_6, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		Object_DontDestroyOnLoad_m598(NULL /*static, unused*/, L_7, /*hidden argument*/&Object_DontDestroyOnLoad_m598_MethodInfo);
		Transform_t2 * L_8 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1;
		NullCheck(L_8);
		GameObject_t7 * L_9 = Component_get_gameObject_m596(L_8, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_9);
		Object_set_hideFlags_m597(L_9, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m597_MethodInfo);
		Transform_t2 * L_10 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1;
		NullCheck(L_10);
		GameObject_t7 * L_11 = Component_get_gameObject_m596(L_10, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		Object_DontDestroyOnLoad_m598(NULL /*static, unused*/, L_11, /*hidden argument*/&Object_DontDestroyOnLoad_m598_MethodInfo);
		Transform_t2 * L_12 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0;
		Transform_t2 * L_13 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1;
		NullCheck(L_12);
		Transform_set_parent_m559(L_12, L_13, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::AddVectorLength(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5  Math3d_AddVectorLength_m42 (Object_t * __this /* static, unused */, Vector3_t5  ___vector, float ___size, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector3_t5  L_0 = ___vector;
		float L_1 = Vector3_Magnitude_m599(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector3_Magnitude_m599_MethodInfo);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = ___size;
		V_1 = ((float)((float)L_2+(float)L_3));
		float L_4 = V_1;
		float L_5 = V_0;
		V_2 = ((float)((float)L_4/(float)L_5));
		Vector3_t5  L_6 = ___vector;
		float L_7 = V_2;
		Vector3_t5  L_8 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		return L_8;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::SetVectorLength(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t5  Math3d_SetVectorLength_m43 (Object_t * __this /* static, unused */, Vector3_t5  ___vector, float ___size, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	{
		Vector3_t5  L_0 = ___vector;
		Vector3_t5  L_1 = Vector3_Normalize_m600(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector3_Normalize_m600_MethodInfo);
		V_0 = L_1;
		Vector3_t5  L_2 = V_0;
		float L_3 = ___size;
		Vector3_t5  L_4 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_5 = L_4;
		V_0 = L_5;
		return L_5;
	}
}
// UnityEngine.Quaternion Realiteer.Math3d::SubtractRotation(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern MethodInfo Math3d_SubtractRotation_m44_MethodInfo;
extern "C" Quaternion_t10  Math3d_SubtractRotation_m44 (Object_t * __this /* static, unused */, Quaternion_t10  ___B, Quaternion_t10  ___A, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	{
		Quaternion_t10  L_0 = ___A;
		Quaternion_t10  L_1 = Quaternion_Inverse_m601(NULL /*static, unused*/, L_0, /*hidden argument*/&Quaternion_Inverse_m601_MethodInfo);
		Quaternion_t10  L_2 = ___B;
		Quaternion_t10  L_3 = Quaternion_op_Multiply_m602(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Quaternion_op_Multiply_m602_MethodInfo);
		V_0 = L_3;
		Quaternion_t10  L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Realiteer.Math3d::PlanePlaneIntersection(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_PlanePlaneIntersection_m45_MethodInfo;
extern "C" bool Math3d_PlanePlaneIntersection_m45 (Object_t * __this /* static, unused */, Vector3_t5 * ___linePoint, Vector3_t5 * ___lineVec, Vector3_t5  ___plane1Normal, Vector3_t5  ___plane1Position, Vector3_t5  ___plane2Normal, Vector3_t5  ___plane2Position, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t5  V_2 = {0};
	float V_3 = 0.0f;
	{
		Vector3_t5 * L_0 = ___linePoint;
		Vector3_t5  L_1 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_0 = L_1;
		Vector3_t5 * L_2 = ___lineVec;
		Vector3_t5  L_3 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_2 = L_3;
		Vector3_t5 * L_4 = ___lineVec;
		Vector3_t5  L_5 = ___plane1Normal;
		Vector3_t5  L_6 = ___plane2Normal;
		Vector3_t5  L_7 = Vector3_Cross_m592(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_Cross_m592_MethodInfo);
		*L_4 = L_7;
		Vector3_t5  L_8 = ___plane2Normal;
		Vector3_t5 * L_9 = ___lineVec;
		Vector3_t5  L_10 = Vector3_Cross_m592(NULL /*static, unused*/, L_8, (*(Vector3_t5 *)L_9), /*hidden argument*/&Vector3_Cross_m592_MethodInfo);
		V_0 = L_10;
		Vector3_t5  L_11 = ___plane1Normal;
		Vector3_t5  L_12 = V_0;
		float L_13 = Vector3_Dot_m603(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_1 = L_13;
		float L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_15 = fabsf(L_14);
		if ((!(((float)L_15) > ((float)(0.006f)))))
		{
			goto IL_0073;
		}
	}
	{
		Vector3_t5  L_16 = ___plane1Position;
		Vector3_t5  L_17 = ___plane2Position;
		Vector3_t5  L_18 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_2 = L_18;
		Vector3_t5  L_19 = ___plane1Normal;
		Vector3_t5  L_20 = V_2;
		float L_21 = Vector3_Dot_m603(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		float L_22 = V_1;
		V_3 = ((float)((float)L_21/(float)L_22));
		Vector3_t5 * L_23 = ___linePoint;
		Vector3_t5  L_24 = ___plane2Position;
		float L_25 = V_3;
		Vector3_t5  L_26 = V_0;
		Vector3_t5  L_27 = Vector3_op_Multiply_m561(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&Vector3_op_Multiply_m561_MethodInfo);
		Vector3_t5  L_28 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_24, L_27, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		*L_23 = L_28;
		return 1;
	}

IL_0073:
	{
		return 0;
	}
}
// System.Boolean Realiteer.Math3d::LinePlaneIntersection(UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_LinePlaneIntersection_m46_MethodInfo;
extern "C" bool Math3d_LinePlaneIntersection_m46 (Object_t * __this /* static, unused */, Vector3_t5 * ___intersection, Vector3_t5  ___linePoint, Vector3_t5  ___lineVec, Vector3_t5  ___planeNormal, Vector3_t5  ___planePoint, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t5  V_3 = {0};
	{
		Vector3_t5 * L_0 = ___intersection;
		Vector3_t5  L_1 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_0 = L_1;
		Vector3_t5  L_2 = ___planePoint;
		Vector3_t5  L_3 = ___linePoint;
		Vector3_t5  L_4 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		Vector3_t5  L_5 = ___planeNormal;
		float L_6 = Vector3_Dot_m603(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_1 = L_6;
		Vector3_t5  L_7 = ___lineVec;
		Vector3_t5  L_8 = ___planeNormal;
		float L_9 = Vector3_Dot_m603(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_2 = L_9;
		float L_10 = V_2;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		float L_11 = V_1;
		float L_12 = V_2;
		V_0 = ((float)((float)L_11/(float)L_12));
		Vector3_t5  L_13 = ___lineVec;
		float L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3_t5  L_15 = Math3d_SetVectorLength_m43(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/&Math3d_SetVectorLength_m43_MethodInfo);
		V_3 = L_15;
		Vector3_t5 * L_16 = ___intersection;
		Vector3_t5  L_17 = ___linePoint;
		Vector3_t5  L_18 = V_3;
		Vector3_t5  L_19 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		*L_16 = L_19;
		return 1;
	}

IL_0048:
	{
		return 0;
	}
}
// System.Boolean Realiteer.Math3d::LineLineIntersection(UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_LineLineIntersection_m47_MethodInfo;
extern "C" bool Math3d_LineLineIntersection_m47 (Object_t * __this /* static, unused */, Vector3_t5 * ___intersection, Vector3_t5  ___linePoint1, Vector3_t5  ___lineVec1, Vector3_t5  ___linePoint2, Vector3_t5  ___lineVec2, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	Vector3_t5  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		Vector3_t5 * L_0 = ___intersection;
		Vector3_t5  L_1 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_0 = L_1;
		Vector3_t5  L_2 = ___linePoint2;
		Vector3_t5  L_3 = ___linePoint1;
		Vector3_t5  L_4 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_0 = L_4;
		Vector3_t5  L_5 = ___lineVec1;
		Vector3_t5  L_6 = ___lineVec2;
		Vector3_t5  L_7 = Vector3_Cross_m592(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_Cross_m592_MethodInfo);
		V_1 = L_7;
		Vector3_t5  L_8 = V_0;
		Vector3_t5  L_9 = ___lineVec2;
		Vector3_t5  L_10 = Vector3_Cross_m592(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&Vector3_Cross_m592_MethodInfo);
		V_2 = L_10;
		Vector3_t5  L_11 = V_0;
		Vector3_t5  L_12 = V_1;
		float L_13 = Vector3_Dot_m603(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_3 = L_13;
		float L_14 = V_3;
		if ((((float)L_14) >= ((float)(1.0E-05f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_15 = V_3;
		if ((!(((float)L_15) <= ((float)(-1.0E-05f)))))
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		return 0;
	}

IL_0045:
	{
		Vector3_t5  L_16 = V_2;
		Vector3_t5  L_17 = V_1;
		float L_18 = Vector3_Dot_m603(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		float L_19 = Vector3_get_sqrMagnitude_m605((&V_1), /*hidden argument*/&Vector3_get_sqrMagnitude_m605_MethodInfo);
		V_4 = ((float)((float)L_18/(float)L_19));
		float L_20 = V_4;
		if ((!(((float)L_20) >= ((float)(0.0f)))))
		{
			goto IL_0084;
		}
	}
	{
		float L_21 = V_4;
		if ((!(((float)L_21) <= ((float)(1.0f)))))
		{
			goto IL_0084;
		}
	}
	{
		Vector3_t5 * L_22 = ___intersection;
		Vector3_t5  L_23 = ___linePoint1;
		Vector3_t5  L_24 = ___lineVec1;
		float L_25 = V_4;
		Vector3_t5  L_26 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_27 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_23, L_26, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		*L_22 = L_27;
		return 1;
	}

IL_0084:
	{
		return 0;
	}
}
// System.Boolean Realiteer.Math3d::ClosestPointsOnTwoLines(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_ClosestPointsOnTwoLines_m48 (Object_t * __this /* static, unused */, Vector3_t5 * ___closestPointLine1, Vector3_t5 * ___closestPointLine2, Vector3_t5  ___linePoint1, Vector3_t5  ___lineVec1, Vector3_t5  ___linePoint2, Vector3_t5  ___lineVec2, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t5  V_4 = {0};
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		Vector3_t5 * L_0 = ___closestPointLine1;
		Vector3_t5  L_1 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_0 = L_1;
		Vector3_t5 * L_2 = ___closestPointLine2;
		Vector3_t5  L_3 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_2 = L_3;
		Vector3_t5  L_4 = ___lineVec1;
		Vector3_t5  L_5 = ___lineVec1;
		float L_6 = Vector3_Dot_m603(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_0 = L_6;
		Vector3_t5  L_7 = ___lineVec1;
		Vector3_t5  L_8 = ___lineVec2;
		float L_9 = Vector3_Dot_m603(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_1 = L_9;
		Vector3_t5  L_10 = ___lineVec2;
		Vector3_t5  L_11 = ___lineVec2;
		float L_12 = Vector3_Dot_m603(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_2 = L_12;
		float L_13 = V_0;
		float L_14 = V_2;
		float L_15 = V_1;
		float L_16 = V_1;
		V_3 = ((float)((float)((float)((float)L_13*(float)L_14))-(float)((float)((float)L_15*(float)L_16))));
		float L_17 = V_3;
		if ((((float)L_17) == ((float)(0.0f))))
		{
			goto IL_00a9;
		}
	}
	{
		Vector3_t5  L_18 = ___linePoint1;
		Vector3_t5  L_19 = ___linePoint2;
		Vector3_t5  L_20 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_4 = L_20;
		Vector3_t5  L_21 = ___lineVec1;
		Vector3_t5  L_22 = V_4;
		float L_23 = Vector3_Dot_m603(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_5 = L_23;
		Vector3_t5  L_24 = ___lineVec2;
		Vector3_t5  L_25 = V_4;
		float L_26 = Vector3_Dot_m603(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_6 = L_26;
		float L_27 = V_1;
		float L_28 = V_6;
		float L_29 = V_5;
		float L_30 = V_2;
		float L_31 = V_3;
		V_7 = ((float)((float)((float)((float)((float)((float)L_27*(float)L_28))-(float)((float)((float)L_29*(float)L_30))))/(float)L_31));
		float L_32 = V_0;
		float L_33 = V_6;
		float L_34 = V_5;
		float L_35 = V_1;
		float L_36 = V_3;
		V_8 = ((float)((float)((float)((float)((float)((float)L_32*(float)L_33))-(float)((float)((float)L_34*(float)L_35))))/(float)L_36));
		Vector3_t5 * L_37 = ___closestPointLine1;
		Vector3_t5  L_38 = ___linePoint1;
		Vector3_t5  L_39 = ___lineVec1;
		float L_40 = V_7;
		Vector3_t5  L_41 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_42 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_38, L_41, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		*L_37 = L_42;
		Vector3_t5 * L_43 = ___closestPointLine2;
		Vector3_t5  L_44 = ___linePoint2;
		Vector3_t5  L_45 = ___lineVec2;
		float L_46 = V_8;
		Vector3_t5  L_47 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_48 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_44, L_47, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		*L_43 = L_48;
		return 1;
	}

IL_00a9:
	{
		return 0;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::ProjectPointOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5  Math3d_ProjectPointOnLine_m49 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint, Vector3_t5  ___lineVec, Vector3_t5  ___point, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	float V_1 = 0.0f;
	{
		Vector3_t5  L_0 = ___point;
		Vector3_t5  L_1 = ___linePoint;
		Vector3_t5  L_2 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_0 = L_2;
		Vector3_t5  L_3 = V_0;
		Vector3_t5  L_4 = ___lineVec;
		float L_5 = Vector3_Dot_m603(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_1 = L_5;
		Vector3_t5  L_6 = ___linePoint;
		Vector3_t5  L_7 = ___lineVec;
		float L_8 = V_1;
		Vector3_t5  L_9 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_10 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		return L_10;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::ProjectPointOnLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t5  Math3d_ProjectPointOnLineSegment_m50 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint1, Vector3_t5  ___linePoint2, Vector3_t5  ___point, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	int32_t V_2 = 0;
	{
		Vector3_t5  L_0 = ___linePoint2;
		Vector3_t5  L_1 = ___linePoint1;
		Vector3_t5  L_2 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_0 = L_2;
		Vector3_t5  L_3 = ___linePoint1;
		Vector3_t5  L_4 = Vector3_get_normalized_m606((&V_0), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		Vector3_t5  L_5 = ___point;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3_t5  L_6 = Math3d_ProjectPointOnLine_m49(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/&Math3d_ProjectPointOnLine_m49_MethodInfo);
		V_1 = L_6;
		Vector3_t5  L_7 = ___linePoint1;
		Vector3_t5  L_8 = ___linePoint2;
		Vector3_t5  L_9 = V_1;
		int32_t L_10 = Math3d_PointOnWhichSideOfLineSegment_m68(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/&Math3d_PointOnWhichSideOfLineSegment_m68_MethodInfo);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if (L_11)
		{
			goto IL_0028;
		}
	}
	{
		Vector3_t5  L_12 = V_1;
		return L_12;
	}

IL_0028:
	{
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		Vector3_t5  L_14 = ___linePoint1;
		return L_14;
	}

IL_0031:
	{
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_003a;
		}
	}
	{
		Vector3_t5  L_16 = ___linePoint2;
		return L_16;
	}

IL_003a:
	{
		Vector3_t5  L_17 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		return L_17;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::ProjectPointOnPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_ProjectPointOnPlane_m51_MethodInfo;
extern "C" Vector3_t5  Math3d_ProjectPointOnPlane_m51 (Object_t * __this /* static, unused */, Vector3_t5  ___planeNormal, Vector3_t5  ___planePoint, Vector3_t5  ___point, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t5  V_1 = {0};
	{
		Vector3_t5  L_0 = ___planeNormal;
		Vector3_t5  L_1 = ___planePoint;
		Vector3_t5  L_2 = ___point;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		float L_3 = Math3d_SignedDistancePlanePoint_m53(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/&Math3d_SignedDistancePlanePoint_m53_MethodInfo);
		V_0 = L_3;
		float L_4 = V_0;
		V_0 = ((float)((float)L_4*(float)(-1.0f)));
		Vector3_t5  L_5 = ___planeNormal;
		float L_6 = V_0;
		Vector3_t5  L_7 = Math3d_SetVectorLength_m43(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Math3d_SetVectorLength_m43_MethodInfo);
		V_1 = L_7;
		Vector3_t5  L_8 = ___point;
		Vector3_t5  L_9 = V_1;
		Vector3_t5  L_10 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		return L_10;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::ProjectVectorOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_ProjectVectorOnPlane_m52_MethodInfo;
extern "C" Vector3_t5  Math3d_ProjectVectorOnPlane_m52 (Object_t * __this /* static, unused */, Vector3_t5  ___planeNormal, Vector3_t5  ___vector, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = ___vector;
		Vector3_t5  L_1 = ___vector;
		Vector3_t5  L_2 = ___planeNormal;
		float L_3 = Vector3_Dot_m603(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		Vector3_t5  L_4 = ___planeNormal;
		Vector3_t5  L_5 = Vector3_op_Multiply_m561(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Multiply_m561_MethodInfo);
		Vector3_t5  L_6 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_0, L_5, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		return L_6;
	}
}
// System.Single Realiteer.Math3d::SignedDistancePlanePoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float Math3d_SignedDistancePlanePoint_m53 (Object_t * __this /* static, unused */, Vector3_t5  ___planeNormal, Vector3_t5  ___planePoint, Vector3_t5  ___point, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = ___planeNormal;
		Vector3_t5  L_1 = ___point;
		Vector3_t5  L_2 = ___planePoint;
		Vector3_t5  L_3 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		float L_4 = Vector3_Dot_m603(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		return L_4;
	}
}
// System.Single Realiteer.Math3d::SignedDotProduct(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_SignedDotProduct_m54_MethodInfo;
extern "C" float Math3d_SignedDotProduct_m54 (Object_t * __this /* static, unused */, Vector3_t5  ___vectorA, Vector3_t5  ___vectorB, Vector3_t5  ___normal, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	float V_1 = 0.0f;
	{
		Vector3_t5  L_0 = ___normal;
		Vector3_t5  L_1 = ___vectorA;
		Vector3_t5  L_2 = Vector3_Cross_m592(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Cross_m592_MethodInfo);
		V_0 = L_2;
		Vector3_t5  L_3 = V_0;
		Vector3_t5  L_4 = ___vectorB;
		float L_5 = Vector3_Dot_m603(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_1 = L_5;
		float L_6 = V_1;
		return L_6;
	}
}
// System.Single Realiteer.Math3d::SignedVectorAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_SignedVectorAngle_m55_MethodInfo;
extern "C" float Math3d_SignedVectorAngle_m55 (Object_t * __this /* static, unused */, Vector3_t5  ___referenceVector, Vector3_t5  ___otherVector, Vector3_t5  ___normal, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	float V_1 = 0.0f;
	{
		Vector3_t5  L_0 = ___normal;
		Vector3_t5  L_1 = ___referenceVector;
		Vector3_t5  L_2 = Vector3_Cross_m592(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Cross_m592_MethodInfo);
		V_0 = L_2;
		Vector3_t5  L_3 = ___referenceVector;
		Vector3_t5  L_4 = ___otherVector;
		float L_5 = Vector3_Angle_m541(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_Angle_m541_MethodInfo);
		V_1 = L_5;
		float L_6 = V_1;
		Vector3_t5  L_7 = V_0;
		Vector3_t5  L_8 = ___otherVector;
		float L_9 = Vector3_Dot_m603(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_10 = Mathf_Sign_m607(NULL /*static, unused*/, L_9, /*hidden argument*/&Mathf_Sign_m607_MethodInfo);
		V_1 = ((float)((float)L_6*(float)L_10));
		float L_11 = V_1;
		return L_11;
	}
}
// System.Single Realiteer.Math3d::AngleVectorPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_AngleVectorPlane_m56_MethodInfo;
extern "C" float Math3d_AngleVectorPlane_m56 (Object_t * __this /* static, unused */, Vector3_t5  ___vector, Vector3_t5  ___normal, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t5  L_0 = ___vector;
		Vector3_t5  L_1 = ___normal;
		float L_2 = Vector3_Dot_m603(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_0 = L_2;
		float L_3 = V_0;
		double L_4 = acos((((double)L_3)));
		V_1 = (((float)L_4));
		float L_5 = V_1;
		return ((float)((float)(1.57079637f)-(float)L_5));
	}
}
// System.Single Realiteer.Math3d::DotProductAngle(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_DotProductAngle_m57_MethodInfo;
extern "C" float Math3d_DotProductAngle_m57 (Object_t * __this /* static, unused */, Vector3_t5  ___vec1, Vector3_t5  ___vec2, MethodInfo* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		Vector3_t5  L_0 = ___vec1;
		Vector3_t5  L_1 = ___vec2;
		float L_2 = Vector3_Dot_m603(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_0 = (((double)L_2));
		double L_3 = V_0;
		if ((!(((double)L_3) < ((double)(-1.0)))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = (-1.0);
	}

IL_0022:
	{
		double L_4 = V_0;
		if ((!(((double)L_4) > ((double)(1.0)))))
		{
			goto IL_003b;
		}
	}
	{
		V_0 = (1.0);
	}

IL_003b:
	{
		double L_5 = V_0;
		double L_6 = acos(L_5);
		V_1 = L_6;
		double L_7 = V_1;
		return (((float)L_7));
	}
}
// System.Void Realiteer.Math3d::PlaneFrom3Points(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_PlaneFrom3Points_m58_MethodInfo;
extern "C" void Math3d_PlaneFrom3Points_m58 (Object_t * __this /* static, unused */, Vector3_t5 * ___planeNormal, Vector3_t5 * ___planePoint, Vector3_t5  ___pointA, Vector3_t5  ___pointB, Vector3_t5  ___pointC, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	Vector3_t5  V_2 = {0};
	Vector3_t5  V_3 = {0};
	Vector3_t5  V_4 = {0};
	Vector3_t5  V_5 = {0};
	Vector3_t5  V_6 = {0};
	{
		Vector3_t5 * L_0 = ___planeNormal;
		Vector3_t5  L_1 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_0 = L_1;
		Vector3_t5 * L_2 = ___planePoint;
		Vector3_t5  L_3 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_2 = L_3;
		Vector3_t5  L_4 = ___pointB;
		Vector3_t5  L_5 = ___pointA;
		Vector3_t5  L_6 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_0 = L_6;
		Vector3_t5  L_7 = ___pointC;
		Vector3_t5  L_8 = ___pointA;
		Vector3_t5  L_9 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_1 = L_9;
		Vector3_t5 * L_10 = ___planeNormal;
		Vector3_t5  L_11 = V_0;
		Vector3_t5  L_12 = V_1;
		Vector3_t5  L_13 = Vector3_Cross_m592(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&Vector3_Cross_m592_MethodInfo);
		Vector3_t5  L_14 = Vector3_Normalize_m600(NULL /*static, unused*/, L_13, /*hidden argument*/&Vector3_Normalize_m600_MethodInfo);
		*L_10 = L_14;
		Vector3_t5  L_15 = ___pointA;
		Vector3_t5  L_16 = V_0;
		Vector3_t5  L_17 = Vector3_op_Division_m609(NULL /*static, unused*/, L_16, (2.0f), /*hidden argument*/&Vector3_op_Division_m609_MethodInfo);
		Vector3_t5  L_18 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		V_2 = L_18;
		Vector3_t5  L_19 = ___pointA;
		Vector3_t5  L_20 = V_1;
		Vector3_t5  L_21 = Vector3_op_Division_m609(NULL /*static, unused*/, L_20, (2.0f), /*hidden argument*/&Vector3_op_Division_m609_MethodInfo);
		Vector3_t5  L_22 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		V_3 = L_22;
		Vector3_t5  L_23 = ___pointC;
		Vector3_t5  L_24 = V_2;
		Vector3_t5  L_25 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_4 = L_25;
		Vector3_t5  L_26 = ___pointB;
		Vector3_t5  L_27 = V_3;
		Vector3_t5  L_28 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_5 = L_28;
		Vector3_t5 * L_29 = ___planePoint;
		Vector3_t5  L_30 = V_2;
		Vector3_t5  L_31 = V_4;
		Vector3_t5  L_32 = V_3;
		Vector3_t5  L_33 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Math3d_ClosestPointsOnTwoLines_m48(NULL /*static, unused*/, L_29, (&V_6), L_30, L_31, L_32, L_33, /*hidden argument*/&Math3d_ClosestPointsOnTwoLines_m48_MethodInfo);
		return;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::GetForwardVector(UnityEngine.Quaternion)
extern MethodInfo Math3d_GetForwardVector_m59_MethodInfo;
extern "C" Vector3_t5  Math3d_GetForwardVector_m59 (Object_t * __this /* static, unused */, Quaternion_t10  ___q, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = ___q;
		Vector3_t5  L_1 = Vector3_get_forward_m610(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m610_MethodInfo);
		Vector3_t5  L_2 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::GetUpVector(UnityEngine.Quaternion)
extern MethodInfo Math3d_GetUpVector_m60_MethodInfo;
extern "C" Vector3_t5  Math3d_GetUpVector_m60 (Object_t * __this /* static, unused */, Quaternion_t10  ___q, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = ___q;
		Vector3_t5  L_1 = Vector3_get_up_m560(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m560_MethodInfo);
		Vector3_t5  L_2 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::GetRightVector(UnityEngine.Quaternion)
extern MethodInfo Math3d_GetRightVector_m61_MethodInfo;
extern "C" Vector3_t5  Math3d_GetRightVector_m61 (Object_t * __this /* static, unused */, Quaternion_t10  ___q, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = ___q;
		Vector3_t5  L_1 = Vector3_get_right_m612(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m612_MethodInfo);
		Vector3_t5  L_2 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Quaternion Realiteer.Math3d::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Math3d_QuaternionFromMatrix_m62_MethodInfo;
extern "C" Quaternion_t10  Math3d_QuaternionFromMatrix_m62 (Object_t * __this /* static, unused */, Matrix4x4_t27  ___m, MethodInfo* method)
{
	{
		Vector4_t173  L_0 = Matrix4x4_GetColumn_m613((&___m), 2, /*hidden argument*/&Matrix4x4_GetColumn_m613_MethodInfo);
		Vector3_t5  L_1 = Vector4_op_Implicit_m614(NULL /*static, unused*/, L_0, /*hidden argument*/&Vector4_op_Implicit_m614_MethodInfo);
		Vector4_t173  L_2 = Matrix4x4_GetColumn_m613((&___m), 1, /*hidden argument*/&Matrix4x4_GetColumn_m613_MethodInfo);
		Vector3_t5  L_3 = Vector4_op_Implicit_m614(NULL /*static, unused*/, L_2, /*hidden argument*/&Vector4_op_Implicit_m614_MethodInfo);
		Quaternion_t10  L_4 = Quaternion_LookRotation_m511(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/&Quaternion_LookRotation_m511_MethodInfo);
		return L_4;
	}
}
// UnityEngine.Vector3 Realiteer.Math3d::PositionFromMatrix(UnityEngine.Matrix4x4)
extern MethodInfo Math3d_PositionFromMatrix_m63_MethodInfo;
extern "C" Vector3_t5  Math3d_PositionFromMatrix_m63 (Object_t * __this /* static, unused */, Matrix4x4_t27  ___m, MethodInfo* method)
{
	Vector4_t173  V_0 = {0};
	{
		Vector4_t173  L_0 = Matrix4x4_GetColumn_m613((&___m), 3, /*hidden argument*/&Matrix4x4_GetColumn_m613_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		float L_2 = ((&V_0)->___y_2);
		float L_3 = ((&V_0)->___z_3);
		Vector3_t5  L_4 = {0};
		Vector3__ctor_m510(&L_4, L_1, L_2, L_3, /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		return L_4;
	}
}
// System.Void Realiteer.Math3d::LookRotationExtended(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Math3d_LookRotationExtended_m64 (Object_t * __this /* static, unused */, GameObject_t7 ** ___gameObjectInOut, Vector3_t5  ___alignWithVector, Vector3_t5  ___alignWithNormal, Vector3_t5  ___customForward, Vector3_t5  ___customUp, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	Quaternion_t10  V_1 = {0};
	{
		Vector3_t5  L_0 = ___alignWithVector;
		Vector3_t5  L_1 = ___alignWithNormal;
		Quaternion_t10  L_2 = Quaternion_LookRotation_m511(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Quaternion_LookRotation_m511_MethodInfo);
		V_0 = L_2;
		Vector3_t5  L_3 = ___customForward;
		Vector3_t5  L_4 = ___customUp;
		Quaternion_t10  L_5 = Quaternion_LookRotation_m511(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Quaternion_LookRotation_m511_MethodInfo);
		V_1 = L_5;
		GameObject_t7 ** L_6 = ___gameObjectInOut;
		NullCheck((*((GameObject_t7 **)L_6)));
		Transform_t2 * L_7 = GameObject_get_transform_m558((*((GameObject_t7 **)L_6)), /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Quaternion_t10  L_8 = V_0;
		Quaternion_t10  L_9 = V_1;
		Quaternion_t10  L_10 = Quaternion_Inverse_m601(NULL /*static, unused*/, L_9, /*hidden argument*/&Quaternion_Inverse_m601_MethodInfo);
		Quaternion_t10  L_11 = Quaternion_op_Multiply_m602(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/&Quaternion_op_Multiply_m602_MethodInfo);
		NullCheck(L_7);
		Transform_set_rotation_m512(L_7, L_11, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		return;
	}
}
// System.Void Realiteer.Math3d::TransformWithParent(UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern MethodInfo Math3d_TransformWithParent_m65_MethodInfo;
extern "C" void Math3d_TransformWithParent_m65 (Object_t * __this /* static, unused */, Quaternion_t10 * ___childRotation, Vector3_t5 * ___childPosition, Quaternion_t10  ___parentRotation, Vector3_t5  ___parentPosition, Quaternion_t10  ___startParentRotation, Vector3_t5  ___startParentPosition, Quaternion_t10  ___startChildRotation, Vector3_t5  ___startChildPosition, MethodInfo* method)
{
	{
		Quaternion_t10 * L_0 = ___childRotation;
		Quaternion_t10  L_1 = Quaternion_get_identity_m615(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m615_MethodInfo);
		*L_0 = L_1;
		Vector3_t5 * L_2 = ___childPosition;
		Vector3_t5  L_3 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_2 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Transform_t2 * L_4 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1;
		Quaternion_t10  L_5 = ___startParentRotation;
		NullCheck(L_4);
		Transform_set_rotation_m512(L_4, L_5, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		Transform_t2 * L_6 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1;
		Vector3_t5  L_7 = ___startParentPosition;
		NullCheck(L_6);
		Transform_set_position_m518(L_6, L_7, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_8 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1;
		Vector3_t5  L_9 = Vector3_get_one_m616(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m616_MethodInfo);
		NullCheck(L_8);
		Transform_set_localScale_m578(L_8, L_9, /*hidden argument*/&Transform_set_localScale_m578_MethodInfo);
		Transform_t2 * L_10 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0;
		Quaternion_t10  L_11 = ___startChildRotation;
		NullCheck(L_10);
		Transform_set_rotation_m512(L_10, L_11, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		Transform_t2 * L_12 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0;
		Vector3_t5  L_13 = ___startChildPosition;
		NullCheck(L_12);
		Transform_set_position_m518(L_12, L_13, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Transform_t2 * L_14 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0;
		Vector3_t5  L_15 = Vector3_get_one_m616(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m616_MethodInfo);
		NullCheck(L_14);
		Transform_set_localScale_m578(L_14, L_15, /*hidden argument*/&Transform_set_localScale_m578_MethodInfo);
		Transform_t2 * L_16 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1;
		Quaternion_t10  L_17 = ___parentRotation;
		NullCheck(L_16);
		Transform_set_rotation_m512(L_16, L_17, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		Transform_t2 * L_18 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempParent_1;
		Vector3_t5  L_19 = ___parentPosition;
		NullCheck(L_18);
		Transform_set_position_m518(L_18, L_19, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		Quaternion_t10 * L_20 = ___childRotation;
		Transform_t2 * L_21 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0;
		NullCheck(L_21);
		Quaternion_t10  L_22 = Transform_get_rotation_m513(L_21, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		*L_20 = L_22;
		Vector3_t5 * L_23 = ___childPosition;
		Transform_t2 * L_24 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___tempChild_0;
		NullCheck(L_24);
		Vector3_t5  L_25 = Transform_get_position_m506(L_24, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		*L_23 = L_25;
		return;
	}
}
// System.Void Realiteer.Math3d::PreciseAlign(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_PreciseAlign_m66_MethodInfo;
extern "C" void Math3d_PreciseAlign_m66 (Object_t * __this /* static, unused */, GameObject_t7 ** ___gameObjectInOut, Vector3_t5  ___alignWithVector, Vector3_t5  ___alignWithNormal, Vector3_t5  ___alignWithPosition, Vector3_t5  ___triangleForward, Vector3_t5  ___triangleNormal, Vector3_t5  ___trianglePosition, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	{
		GameObject_t7 ** L_0 = ___gameObjectInOut;
		Vector3_t5  L_1 = ___alignWithVector;
		Vector3_t5  L_2 = ___alignWithNormal;
		Vector3_t5  L_3 = ___triangleForward;
		Vector3_t5  L_4 = ___triangleNormal;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Math3d_LookRotationExtended_m64(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Math3d_LookRotationExtended_m64_MethodInfo);
		GameObject_t7 ** L_5 = ___gameObjectInOut;
		NullCheck((*((GameObject_t7 **)L_5)));
		Transform_t2 * L_6 = GameObject_get_transform_m558((*((GameObject_t7 **)L_5)), /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Vector3_t5  L_7 = ___trianglePosition;
		NullCheck(L_6);
		Vector3_t5  L_8 = Transform_TransformPoint_m538(L_6, L_7, /*hidden argument*/&Transform_TransformPoint_m538_MethodInfo);
		V_0 = L_8;
		Vector3_t5  L_9 = ___alignWithPosition;
		Vector3_t5  L_10 = V_0;
		Vector3_t5  L_11 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_1 = L_11;
		GameObject_t7 ** L_12 = ___gameObjectInOut;
		NullCheck((*((GameObject_t7 **)L_12)));
		Transform_t2 * L_13 = GameObject_get_transform_m558((*((GameObject_t7 **)L_12)), /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Vector3_t5  L_14 = V_1;
		NullCheck(L_13);
		Transform_Translate_m617(L_13, L_14, 0, /*hidden argument*/&Transform_Translate_m617_MethodInfo);
		return;
	}
}
// System.Void Realiteer.Math3d::VectorsToTransform(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_VectorsToTransform_m67_MethodInfo;
extern "C" void Math3d_VectorsToTransform_m67 (Object_t * __this /* static, unused */, GameObject_t7 ** ___gameObjectInOut, Vector3_t5  ___positionVector, Vector3_t5  ___directionVector, Vector3_t5  ___normalVector, MethodInfo* method)
{
	{
		GameObject_t7 ** L_0 = ___gameObjectInOut;
		NullCheck((*((GameObject_t7 **)L_0)));
		Transform_t2 * L_1 = GameObject_get_transform_m558((*((GameObject_t7 **)L_0)), /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Vector3_t5  L_2 = ___positionVector;
		NullCheck(L_1);
		Transform_set_position_m518(L_1, L_2, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		GameObject_t7 ** L_3 = ___gameObjectInOut;
		NullCheck((*((GameObject_t7 **)L_3)));
		Transform_t2 * L_4 = GameObject_get_transform_m558((*((GameObject_t7 **)L_3)), /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Vector3_t5  L_5 = ___directionVector;
		Vector3_t5  L_6 = ___normalVector;
		Quaternion_t10  L_7 = Quaternion_LookRotation_m511(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Quaternion_LookRotation_m511_MethodInfo);
		NullCheck(L_4);
		Transform_set_rotation_m512(L_4, L_7, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
		return;
	}
}
// System.Int32 Realiteer.Math3d::PointOnWhichSideOfLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" int32_t Math3d_PointOnWhichSideOfLineSegment_m68 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint1, Vector3_t5  ___linePoint2, Vector3_t5  ___point, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	float V_2 = 0.0f;
	{
		Vector3_t5  L_0 = ___linePoint2;
		Vector3_t5  L_1 = ___linePoint1;
		Vector3_t5  L_2 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_0 = L_2;
		Vector3_t5  L_3 = ___point;
		Vector3_t5  L_4 = ___linePoint1;
		Vector3_t5  L_5 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_1 = L_5;
		Vector3_t5  L_6 = V_1;
		Vector3_t5  L_7 = V_0;
		float L_8 = Vector3_Dot_m603(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&Vector3_Dot_m603_MethodInfo);
		V_2 = L_8;
		float L_9 = V_2;
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		float L_10 = Vector3_get_magnitude_m542((&V_1), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		float L_11 = Vector3_get_magnitude_m542((&V_0), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		if ((!(((float)L_10) <= ((float)L_11))))
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		return 2;
	}

IL_003a:
	{
		return 1;
	}
}
// System.Single Realiteer.Math3d::MouseDistanceToLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_MouseDistanceToLine_m69_MethodInfo;
extern "C" float Math3d_MouseDistanceToLine_m69 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint1, Vector3_t5  ___linePoint2, MethodInfo* method)
{
	Camera_t15 * V_0 = {0};
	Vector3_t5  V_1 = {0};
	Vector3_t5  V_2 = {0};
	Vector3_t5  V_3 = {0};
	Vector3_t5  V_4 = {0};
	Vector3_t5  V_5 = {0};
	{
		Camera_t15 * L_0 = Camera_get_main_m618(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m618_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		Vector3_t5  L_1 = Input_get_mousePosition_m619(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m619_MethodInfo);
		V_1 = L_1;
		Camera_t15 * L_2 = V_0;
		Vector3_t5  L_3 = ___linePoint1;
		NullCheck(L_2);
		Vector3_t5  L_4 = Camera_WorldToScreenPoint_m620(L_2, L_3, /*hidden argument*/&Camera_WorldToScreenPoint_m620_MethodInfo);
		V_2 = L_4;
		Camera_t15 * L_5 = V_0;
		Vector3_t5  L_6 = ___linePoint2;
		NullCheck(L_5);
		Vector3_t5  L_7 = Camera_WorldToScreenPoint_m620(L_5, L_6, /*hidden argument*/&Camera_WorldToScreenPoint_m620_MethodInfo);
		V_3 = L_7;
		Vector3_t5  L_8 = V_2;
		Vector3_t5  L_9 = V_3;
		Vector3_t5  L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3_t5  L_11 = Math3d_ProjectPointOnLineSegment_m50(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/&Math3d_ProjectPointOnLineSegment_m50_MethodInfo);
		V_4 = L_11;
		float L_12 = ((&V_4)->___x_1);
		float L_13 = ((&V_4)->___y_2);
		Vector3__ctor_m510((&V_4), L_12, L_13, (0.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_14 = V_4;
		Vector3_t5  L_15 = V_1;
		Vector3_t5  L_16 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_5 = L_16;
		float L_17 = Vector3_get_magnitude_m542((&V_5), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		return L_17;
	}
}
// System.Single Realiteer.Math3d::MouseDistanceToCircle(UnityEngine.Vector3,System.Single)
extern MethodInfo Math3d_MouseDistanceToCircle_m70_MethodInfo;
extern "C" float Math3d_MouseDistanceToCircle_m70 (Object_t * __this /* static, unused */, Vector3_t5  ___point, float ___radius, MethodInfo* method)
{
	Camera_t15 * V_0 = {0};
	Vector3_t5  V_1 = {0};
	Vector3_t5  V_2 = {0};
	Vector3_t5  V_3 = {0};
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		Camera_t15 * L_0 = Camera_get_main_m618(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m618_MethodInfo);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		Vector3_t5  L_1 = Input_get_mousePosition_m619(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m619_MethodInfo);
		V_1 = L_1;
		Camera_t15 * L_2 = V_0;
		Vector3_t5  L_3 = ___point;
		NullCheck(L_2);
		Vector3_t5  L_4 = Camera_WorldToScreenPoint_m620(L_2, L_3, /*hidden argument*/&Camera_WorldToScreenPoint_m620_MethodInfo);
		V_2 = L_4;
		float L_5 = ((&V_2)->___x_1);
		float L_6 = ((&V_2)->___y_2);
		Vector3__ctor_m510((&V_2), L_5, L_6, (0.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_7 = V_2;
		Vector3_t5  L_8 = V_1;
		Vector3_t5  L_9 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_3 = L_9;
		float L_10 = Vector3_get_magnitude_m542((&V_3), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		V_4 = L_10;
		float L_11 = V_4;
		float L_12 = ___radius;
		V_5 = ((float)((float)L_11-(float)L_12));
		float L_13 = V_5;
		return L_13;
	}
}
// System.Boolean Realiteer.Math3d::IsLineInRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern MethodInfo Math3d_IsLineInRectangle_m71_MethodInfo;
extern "C" bool Math3d_IsLineInRectangle_m71 (Object_t * __this /* static, unused */, Vector3_t5  ___linePoint1, Vector3_t5  ___linePoint2, Vector3_t5  ___rectA, Vector3_t5  ___rectB, Vector3_t5  ___rectC, Vector3_t5  ___rectD, MethodInfo* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		V_0 = 0;
		V_1 = 0;
		Vector3_t5  L_0 = ___linePoint1;
		Vector3_t5  L_1 = ___rectA;
		Vector3_t5  L_2 = ___rectC;
		Vector3_t5  L_3 = ___rectB;
		Vector3_t5  L_4 = ___rectD;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		bool L_5 = Math3d_IsPointInRectangle_m72(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/&Math3d_IsPointInRectangle_m72_MethodInfo);
		V_0 = L_5;
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		Vector3_t5  L_7 = ___linePoint2;
		Vector3_t5  L_8 = ___rectA;
		Vector3_t5  L_9 = ___rectC;
		Vector3_t5  L_10 = ___rectB;
		Vector3_t5  L_11 = ___rectD;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		bool L_12 = Math3d_IsPointInRectangle_m72(NULL /*static, unused*/, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/&Math3d_IsPointInRectangle_m72_MethodInfo);
		V_1 = L_12;
	}

IL_0024:
	{
		bool L_13 = V_0;
		if (L_13)
		{
			goto IL_007c;
		}
	}
	{
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_007c;
		}
	}
	{
		Vector3_t5  L_15 = ___linePoint1;
		Vector3_t5  L_16 = ___linePoint2;
		Vector3_t5  L_17 = ___rectA;
		Vector3_t5  L_18 = ___rectB;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		bool L_19 = Math3d_AreLineSegmentsCrossing_m73(NULL /*static, unused*/, L_15, L_16, L_17, L_18, /*hidden argument*/&Math3d_AreLineSegmentsCrossing_m73_MethodInfo);
		V_2 = L_19;
		Vector3_t5  L_20 = ___linePoint1;
		Vector3_t5  L_21 = ___linePoint2;
		Vector3_t5  L_22 = ___rectB;
		Vector3_t5  L_23 = ___rectC;
		bool L_24 = Math3d_AreLineSegmentsCrossing_m73(NULL /*static, unused*/, L_20, L_21, L_22, L_23, /*hidden argument*/&Math3d_AreLineSegmentsCrossing_m73_MethodInfo);
		V_3 = L_24;
		Vector3_t5  L_25 = ___linePoint1;
		Vector3_t5  L_26 = ___linePoint2;
		Vector3_t5  L_27 = ___rectC;
		Vector3_t5  L_28 = ___rectD;
		bool L_29 = Math3d_AreLineSegmentsCrossing_m73(NULL /*static, unused*/, L_25, L_26, L_27, L_28, /*hidden argument*/&Math3d_AreLineSegmentsCrossing_m73_MethodInfo);
		V_4 = L_29;
		Vector3_t5  L_30 = ___linePoint1;
		Vector3_t5  L_31 = ___linePoint2;
		Vector3_t5  L_32 = ___rectD;
		Vector3_t5  L_33 = ___rectA;
		bool L_34 = Math3d_AreLineSegmentsCrossing_m73(NULL /*static, unused*/, L_30, L_31, L_32, L_33, /*hidden argument*/&Math3d_AreLineSegmentsCrossing_m73_MethodInfo);
		V_5 = L_34;
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_0078;
		}
	}
	{
		bool L_36 = V_3;
		if (L_36)
		{
			goto IL_0078;
		}
	}
	{
		bool L_37 = V_4;
		if (L_37)
		{
			goto IL_0078;
		}
	}
	{
		bool L_38 = V_5;
		if (!L_38)
		{
			goto IL_007a;
		}
	}

IL_0078:
	{
		return 1;
	}

IL_007a:
	{
		return 0;
	}

IL_007c:
	{
		return 1;
	}
}
// System.Boolean Realiteer.Math3d::IsPointInRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_IsPointInRectangle_m72 (Object_t * __this /* static, unused */, Vector3_t5  ___point, Vector3_t5  ___rectA, Vector3_t5  ___rectC, Vector3_t5  ___rectB, Vector3_t5  ___rectD, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t5  V_3 = {0};
	Vector3_t5  V_4 = {0};
	float V_5 = 0.0f;
	Vector3_t5  V_6 = {0};
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	{
		Vector3_t5  L_0 = ___rectC;
		Vector3_t5  L_1 = ___rectA;
		Vector3_t5  L_2 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_0 = L_2;
		float L_3 = Vector3_get_magnitude_m542((&V_0), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		V_2 = ((-((float)((float)L_3/(float)(2.0f)))));
		Vector3_t5  L_4 = V_0;
		float L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3_t5  L_6 = Math3d_AddVectorLength_m42(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&Math3d_AddVectorLength_m42_MethodInfo);
		V_0 = L_6;
		Vector3_t5  L_7 = ___rectA;
		Vector3_t5  L_8 = V_0;
		Vector3_t5  L_9 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		V_3 = L_9;
		Vector3_t5  L_10 = ___rectB;
		Vector3_t5  L_11 = ___rectA;
		Vector3_t5  L_12 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_4 = L_12;
		float L_13 = Vector3_get_magnitude_m542((&V_4), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		V_5 = ((float)((float)L_13/(float)(2.0f)));
		Vector3_t5  L_14 = ___rectD;
		Vector3_t5  L_15 = ___rectA;
		Vector3_t5  L_16 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_6 = L_16;
		float L_17 = Vector3_get_magnitude_m542((&V_6), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		V_7 = ((float)((float)L_17/(float)(2.0f)));
		Vector3_t5  L_18 = V_3;
		Vector3_t5  L_19 = Vector3_get_normalized_m606((&V_4), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		Vector3_t5  L_20 = ___point;
		Vector3_t5  L_21 = Math3d_ProjectPointOnLine_m49(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/&Math3d_ProjectPointOnLine_m49_MethodInfo);
		V_1 = L_21;
		Vector3_t5  L_22 = V_1;
		Vector3_t5  L_23 = ___point;
		Vector3_t5  L_24 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_0 = L_24;
		float L_25 = Vector3_get_magnitude_m542((&V_0), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		V_8 = L_25;
		Vector3_t5  L_26 = V_3;
		Vector3_t5  L_27 = Vector3_get_normalized_m606((&V_6), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		Vector3_t5  L_28 = ___point;
		Vector3_t5  L_29 = Math3d_ProjectPointOnLine_m49(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/&Math3d_ProjectPointOnLine_m49_MethodInfo);
		V_1 = L_29;
		Vector3_t5  L_30 = V_1;
		Vector3_t5  L_31 = ___point;
		Vector3_t5  L_32 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_0 = L_32;
		float L_33 = Vector3_get_magnitude_m542((&V_0), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		V_9 = L_33;
		float L_34 = V_9;
		float L_35 = V_5;
		if ((!(((float)L_34) <= ((float)L_35))))
		{
			goto IL_00ac;
		}
	}
	{
		float L_36 = V_8;
		float L_37 = V_7;
		if ((!(((float)L_36) <= ((float)L_37))))
		{
			goto IL_00ac;
		}
	}
	{
		return 1;
	}

IL_00ac:
	{
		return 0;
	}
}
// System.Boolean Realiteer.Math3d::AreLineSegmentsCrossing(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Math3d_AreLineSegmentsCrossing_m73 (Object_t * __this /* static, unused */, Vector3_t5  ___pointA1, Vector3_t5  ___pointA2, Vector3_t5  ___pointB1, Vector3_t5  ___pointB2, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t5  V_4 = {0};
	Vector3_t5  V_5 = {0};
	bool V_6 = false;
	{
		Vector3_t5  L_0 = ___pointA2;
		Vector3_t5  L_1 = ___pointA1;
		Vector3_t5  L_2 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_4 = L_2;
		Vector3_t5  L_3 = ___pointB2;
		Vector3_t5  L_4 = ___pointB1;
		Vector3_t5  L_5 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_5 = L_5;
		Vector3_t5  L_6 = ___pointA1;
		Vector3_t5  L_7 = Vector3_get_normalized_m606((&V_4), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		Vector3_t5  L_8 = ___pointB1;
		Vector3_t5  L_9 = Vector3_get_normalized_m606((&V_5), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		bool L_10 = Math3d_ClosestPointsOnTwoLines_m48(NULL /*static, unused*/, (&V_0), (&V_1), L_6, L_7, L_8, L_9, /*hidden argument*/&Math3d_ClosestPointsOnTwoLines_m48_MethodInfo);
		V_6 = L_10;
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		Vector3_t5  L_12 = ___pointA1;
		Vector3_t5  L_13 = ___pointA2;
		Vector3_t5  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		int32_t L_15 = Math3d_PointOnWhichSideOfLineSegment_m68(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/&Math3d_PointOnWhichSideOfLineSegment_m68_MethodInfo);
		V_2 = L_15;
		Vector3_t5  L_16 = ___pointB1;
		Vector3_t5  L_17 = ___pointB2;
		Vector3_t5  L_18 = V_1;
		int32_t L_19 = Math3d_PointOnWhichSideOfLineSegment_m68(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/&Math3d_PointOnWhichSideOfLineSegment_m68_MethodInfo);
		V_3 = L_19;
		int32_t L_20 = V_2;
		if (L_20)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_21 = V_3;
		if (L_21)
		{
			goto IL_0054;
		}
	}
	{
		return 1;
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 0;
	}
}
// System.Boolean Realiteer.Math3d::LinearAcceleration(UnityEngine.Vector3&,UnityEngine.Vector3,System.Int32)
extern TypeInfo* Vector3U5BU5D_t8_il2cpp_TypeInfo_var;
extern TypeInfo* SingleU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" bool Math3d_LinearAcceleration_m74 (Object_t * __this /* static, unused */, Vector3_t5 * ___vector, Vector3_t5  ___position, int32_t ___samples, MethodInfo* method)
{
	static bool Math3d_LinearAcceleration_m74_init;
	if (!Math3d_LinearAcceleration_m74_init)
	{
		Vector3U5BU5D_t8_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Vector3U5BU5D_t8_0_0_0);
		SingleU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t25_0_0_0);
		Math3d_LinearAcceleration_m74_init = true;
	}
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	float V_2 = 0.0f;
	Vector3_t5  V_3 = {0};
	Vector3_t5  V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	{
		Vector3_t5  L_0 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		V_0 = L_0;
		Vector3_t5 * L_1 = ___vector;
		Vector3_t5  L_2 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		*L_1 = L_2;
		int32_t L_3 = ___samples;
		if ((((int32_t)L_3) >= ((int32_t)3)))
		{
			goto IL_001b;
		}
	}
	{
		___samples = 3;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3U5BU5D_t8* L_4 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_5 = ___samples;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2 = ((Vector3U5BU5D_t8*)SZArrayNew(Vector3U5BU5D_t8_il2cpp_TypeInfo_var, L_5));
		int32_t L_6 = ___samples;
		((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3 = ((SingleU5BU5D_t25*)SZArrayNew(SingleU5BU5D_t25_il2cpp_TypeInfo_var, L_6));
	}

IL_003b:
	{
		V_5 = 0;
		goto IL_007f;
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3U5BU5D_t8* L_7 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Vector3U5BU5D_t8* L_9 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)));
		*((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_7, L_8)) = (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)1)))));
		SingleU5BU5D_t25* L_11 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		int32_t L_12 = V_5;
		SingleU5BU5D_t25* L_13 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14+(int32_t)1)));
		int32_t L_15 = ((int32_t)((int32_t)L_14+(int32_t)1));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		*((float*)(float*)SZArrayLdElema(L_11, L_12)) = (float)(*(float*)(float*)SZArrayLdElema(L_13, L_15));
		int32_t L_16 = V_5;
		V_5 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_007f:
	{
		int32_t L_17 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3U5BU5D_t8* L_18 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_18)->max_length)))-(int32_t)1)))))
		{
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3U5BU5D_t8* L_19 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		Vector3U5BU5D_t8* L_20 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		NullCheck(L_20);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_20)->max_length)))-(int32_t)1)));
		Vector3_t5  L_21 = ___position;
		*((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_19, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_20)->max_length)))-(int32_t)1)))) = L_21;
		SingleU5BU5D_t25* L_22 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		SingleU5BU5D_t25* L_23 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		NullCheck(L_23);
		float L_24 = Time_get_time_m621(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m621_MethodInfo);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_23)->max_length)))-(int32_t)1)));
		*((float*)(float*)SZArrayLdElema(L_22, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_23)->max_length)))-(int32_t)1)))) = (float)L_24;
		int32_t L_25 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionSamplesTaken_4;
		((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionSamplesTaken_4 = ((int32_t)((int32_t)L_25+(int32_t)1));
		int32_t L_26 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionSamplesTaken_4;
		int32_t L_27 = ___samples;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_01e5;
		}
	}
	{
		V_6 = 0;
		goto IL_019b;
	}

IL_00db:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3U5BU5D_t8* L_28 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)1)));
		Vector3U5BU5D_t8* L_30 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		Vector3_t5  L_32 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_28, ((int32_t)((int32_t)L_29+(int32_t)1))))), (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_30, L_31))), /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_1 = L_32;
		SingleU5BU5D_t25* L_33 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		int32_t L_34 = V_6;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)((int32_t)L_34+(int32_t)1)));
		int32_t L_35 = ((int32_t)((int32_t)L_34+(int32_t)1));
		SingleU5BU5D_t25* L_36 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		int32_t L_38 = L_37;
		V_2 = ((float)((float)(*(float*)(float*)SZArrayLdElema(L_33, L_35))-(float)(*(float*)(float*)SZArrayLdElema(L_36, L_38))));
		float L_39 = V_2;
		if ((!(((float)L_39) == ((float)(0.0f)))))
		{
			goto IL_0126;
		}
	}
	{
		return 0;
	}

IL_0126:
	{
		Vector3_t5  L_40 = V_1;
		float L_41 = V_2;
		Vector3_t5  L_42 = Vector3_op_Division_m609(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/&Vector3_op_Division_m609_MethodInfo);
		V_3 = L_42;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3U5BU5D_t8* L_43 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		int32_t L_44 = V_6;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)((int32_t)L_44+(int32_t)2)));
		Vector3U5BU5D_t8* L_45 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		int32_t L_46 = V_6;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)L_46+(int32_t)1)));
		Vector3_t5  L_47 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_43, ((int32_t)((int32_t)L_44+(int32_t)2))))), (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_45, ((int32_t)((int32_t)L_46+(int32_t)1))))), /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_1 = L_47;
		SingleU5BU5D_t25* L_48 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)((int32_t)L_49+(int32_t)2)));
		int32_t L_50 = ((int32_t)((int32_t)L_49+(int32_t)2));
		SingleU5BU5D_t25* L_51 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		int32_t L_52 = V_6;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, ((int32_t)((int32_t)L_52+(int32_t)1)));
		int32_t L_53 = ((int32_t)((int32_t)L_52+(int32_t)1));
		V_2 = ((float)((float)(*(float*)(float*)SZArrayLdElema(L_48, L_50))-(float)(*(float*)(float*)SZArrayLdElema(L_51, L_53))));
		float L_54 = V_2;
		if ((!(((float)L_54) == ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		return 0;
	}

IL_017d:
	{
		Vector3_t5  L_55 = V_1;
		float L_56 = V_2;
		Vector3_t5  L_57 = Vector3_op_Division_m609(NULL /*static, unused*/, L_55, L_56, /*hidden argument*/&Vector3_op_Division_m609_MethodInfo);
		V_4 = L_57;
		Vector3_t5  L_58 = V_0;
		Vector3_t5  L_59 = V_4;
		Vector3_t5  L_60 = V_3;
		Vector3_t5  L_61 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		Vector3_t5  L_62 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_58, L_61, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		V_0 = L_62;
		int32_t L_63 = V_6;
		V_6 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_019b:
	{
		int32_t L_64 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3U5BU5D_t8* L_65 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_65)->max_length)))-(int32_t)2)))))
		{
			goto IL_00db;
		}
	}
	{
		Vector3_t5  L_66 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo));
		Vector3U5BU5D_t8* L_67 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___positionRegister_2;
		NullCheck(L_67);
		Vector3_t5  L_68 = Vector3_op_Division_m609(NULL /*static, unused*/, L_66, (((float)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_67)->max_length)))-(int32_t)2)))), /*hidden argument*/&Vector3_op_Division_m609_MethodInfo);
		V_0 = L_68;
		SingleU5BU5D_t25* L_69 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		SingleU5BU5D_t25* L_70 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		NullCheck(L_70);
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_70)->max_length)))-(int32_t)1)));
		int32_t L_71 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_70)->max_length)))-(int32_t)1));
		SingleU5BU5D_t25* L_72 = ((Math3d_t26_StaticFields*)InitializedTypeInfo(&Math3d_t26_il2cpp_TypeInfo)->static_fields)->___posTimeRegister_3;
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, 0);
		int32_t L_73 = 0;
		V_7 = ((float)((float)(*(float*)(float*)SZArrayLdElema(L_69, L_71))-(float)(*(float*)(float*)SZArrayLdElema(L_72, L_73))));
		Vector3_t5 * L_74 = ___vector;
		Vector3_t5  L_75 = V_0;
		float L_76 = V_7;
		Vector3_t5  L_77 = Vector3_op_Division_m609(NULL /*static, unused*/, L_75, L_76, /*hidden argument*/&Vector3_op_Division_m609_MethodInfo);
		*L_74 = L_77;
		return 1;
	}

IL_01e5:
	{
		return 0;
	}
}
// System.Single Realiteer.Math3d::LinearFunction2DBasic(System.Single,System.Single,System.Single)
extern MethodInfo Math3d_LinearFunction2DBasic_m75_MethodInfo;
extern "C" float Math3d_LinearFunction2DBasic_m75 (Object_t * __this /* static, unused */, float ___x, float ___Qx, float ___Qy, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___x;
		float L_1 = ___Qy;
		float L_2 = ___Qx;
		V_0 = ((float)((float)L_0*(float)((float)((float)L_1/(float)L_2))));
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single Realiteer.Math3d::LinearFunction2DFull(System.Single,System.Single,System.Single,System.Single,System.Single)
extern MethodInfo Math3d_LinearFunction2DFull_m76_MethodInfo;
extern "C" float Math3d_LinearFunction2DFull_m76 (Object_t * __this /* static, unused */, float ___x, float ___Px, float ___Py, float ___Qx, float ___Qy, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		V_0 = (0.0f);
		float L_0 = ___Qy;
		float L_1 = ___Py;
		V_1 = ((float)((float)L_0-(float)L_1));
		float L_2 = ___Qx;
		float L_3 = ___Px;
		V_2 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = V_2;
		V_3 = ((float)((float)L_4/(float)L_5));
		float L_6 = ___Py;
		float L_7 = V_3;
		float L_8 = ___x;
		float L_9 = ___Px;
		V_0 = ((float)((float)L_6+(float)((float)((float)L_7*(float)((float)((float)L_8-(float)L_9))))));
		float L_10 = V_0;
		return L_10;
	}
}
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoord.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MazeCoord_t28_il2cpp_TypeInfo;
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoordMethodDeclarations.h"



// System.Void MazeCoord::.ctor(System.Int32,System.Int32)
extern MethodInfo MazeCoord__ctor_m77_MethodInfo;
extern "C" void MazeCoord__ctor_m77 (MazeCoord_t28 * __this, int32_t ___x, int32_t ___z, MethodInfo* method)
{
	{
		int32_t L_0 = ___x;
		__this->___x_0 = L_0;
		int32_t L_1 = ___z;
		__this->___z_1 = L_1;
		return;
	}
}
// MazeCell
#include "AssemblyU2DCSharp_MazeCell.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MazeCell_t29_il2cpp_TypeInfo;
// MazeCell
#include "AssemblyU2DCSharp_MazeCellMethodDeclarations.h"



// Conversion methods for marshalling of: MazeCell
void MazeCell_t29_marshal(const MazeCell_t29& unmarshaled, MazeCell_t29_marshaled& marshaled)
{
	marshaled.___wall_0 = unmarshaled.___wall_0;
	marshaled.___carveCount_1 = unmarshaled.___carveCount_1;
	marshaled.___distanceFromStart_2 = unmarshaled.___distanceFromStart_2;
}
void MazeCell_t29_marshal_back(const MazeCell_t29_marshaled& marshaled, MazeCell_t29& unmarshaled)
{
	unmarshaled.___wall_0 = marshaled.___wall_0;
	unmarshaled.___carveCount_1 = marshaled.___carveCount_1;
	unmarshaled.___distanceFromStart_2 = marshaled.___distanceFromStart_2;
}
// Conversion method for clean up from marshalling of: MazeCell
void MazeCell_t29_marshal_cleanup(MazeCell_t29_marshaled& marshaled)
{
}
// MazeGenerator
#include "AssemblyU2DCSharp_MazeGenerator.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MazeGenerator_t33_il2cpp_TypeInfo;
// MazeGenerator
#include "AssemblyU2DCSharp_MazeGeneratorMethodDeclarations.h"

#include "Assembly-CSharp_ArrayTypes.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Collections.Generic.List`1<MazeCoord>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Func`2<System.Int32,System.Single>
#include "System_Core_System_Func_2_gen.h"
extern TypeInfo MazeCellU5BU2CU5D_t30_il2cpp_TypeInfo;
extern TypeInfo List_1_t31_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t174_il2cpp_TypeInfo;
extern TypeInfo Boolean_t175_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t176_il2cpp_TypeInfo;
extern TypeInfo List_1_t177_il2cpp_TypeInfo;
extern TypeInfo Int32_t96_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t178_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t34_il2cpp_TypeInfo;
extern TypeInfo Func_2_t32_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"
// System.Collections.Generic.List`1<MazeCoord>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Func`2<System.Int32,System.Single>
#include "System_Core_System_Func_2_genMethodDeclarations.h"
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
extern Il2CppType MazeCellU5BU2CU5D_t30_0_0_0;
extern Il2CppType MazeCell_t29_0_0_0;
extern Il2CppType List_1_t31_0_0_0;
extern Il2CppType Enumerator_t174_0_0_0;
extern Il2CppType List_1_t177_0_0_0;
extern Il2CppType ObjectU5BU5D_t178_0_0_0;
extern Il2CppType Int32U5BU5D_t34_0_0_0;
extern Il2CppType Func_2_t32_0_0_0;
extern MethodInfo MazeCellU5BU2CU5D__ctor_m622_MethodInfo;
extern MethodInfo List_1__ctor_m623_MethodInfo;
extern MethodInfo MazeGenerator_GenerateMaze_m80_MethodInfo;
extern MethodInfo MazeCellU5BU2CU5D_Address_m624_MethodInfo;
extern MethodInfo Object_Destroy_m625_MethodInfo;
extern MethodInfo IDisposable_Dispose_m626_MethodInfo;
extern MethodInfo List_1_Clear_m627_MethodInfo;
extern MethodInfo List_1__ctor_m628_MethodInfo;
extern MethodInfo List_1_Add_m629_MethodInfo;
extern MethodInfo MazeGenerator_DoCarve_m83_MethodInfo;
extern MethodInfo List_1_get_Count_m630_MethodInfo;
extern MethodInfo List_1_get_Item_m631_MethodInfo;
extern MethodInfo MazeGenerator_GetRandomDirections_m81_MethodInfo;
extern MethodInfo MazeGenerator_TryCarve_m82_MethodInfo;
extern MethodInfo List_1_Remove_m632_MethodInfo;
extern MethodInfo String_Concat_m633_MethodInfo;
extern MethodInfo Object_set_name_m634_MethodInfo;
extern MethodInfo List_1_Add_m635_MethodInfo;
extern MethodInfo MazeGenerator_U3CGetRandomDirectionsU3Em__0_m84_MethodInfo;
extern MethodInfo Func_2__ctor_m636_MethodInfo;
extern MethodInfo Random_get_value_m637_MethodInfo;
struct Object_t172;
// Declaration !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
extern "C" GameObject_t7 * Object_Instantiate_TisGameObject_t7_m638 (Object_t * __this /* static, unused */, GameObject_t7 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct Enumerable_t179;
// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
// Declaration System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Int32,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderBy<System.Int32,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t32 * p1, MethodInfo* method);
#define Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t32 *, MethodInfo*))Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t179;
// System.Collections.Generic.List`1<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" Int32U5BU5D_t34* Enumerable_ToArray_TisInt32_t96_m640_gshared (Object_t * __this /* static, unused */, Object_t* p0, MethodInfo* method);
#define Enumerable_ToArray_TisInt32_t96_m640(__this /* static, unused */, p0, method) (( Int32U5BU5D_t34* (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_ToArray_TisInt32_t96_m640_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod List_1__ctor_m623_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m641_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m642_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m643_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m627_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m628_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m629_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m630_GenericMethod;
extern Il2CppGenericMethod List_1_get_Item_m631_GenericMethod;
extern Il2CppGenericMethod List_1_Remove_m632_GenericMethod;
extern Il2CppGenericMethod Object_Instantiate_TisGameObject_t7_m638_GenericMethod;
extern Il2CppGenericMethod List_1_Add_m635_GenericMethod;
extern Il2CppGenericMethod Func_2__ctor_m636_GenericMethod;
extern Il2CppGenericMethod Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639_GenericMethod;
extern Il2CppGenericMethod Enumerable_ToArray_TisInt32_t96_m640_GenericMethod;


// System.Void MazeGenerator::.ctor()
extern MethodInfo MazeGenerator__ctor_m78_MethodInfo;
extern "C" void MazeGenerator__ctor_m78 (MazeGenerator_t33 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void MazeGenerator::Start()
extern MethodInfo MazeGenerator_Start_m79_MethodInfo;
extern TypeInfo* MazeCellU5BU2CU5D_t30_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t31_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m623_MethodInfo_var;
extern "C" void MazeGenerator_Start_m79 (MazeGenerator_t33 * __this, MethodInfo* method)
{
	static bool MazeGenerator_Start_m79_init;
	if (!MazeGenerator_Start_m79_init)
	{
		MazeCellU5BU2CU5D_t30_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MazeCellU5BU2CU5D_t30_0_0_0);
		List_1_t31_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t31_0_0_0);
		List_1__ctor_m623_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m623_GenericMethod);
		MazeGenerator_Start_m79_init = true;
	}
	{
		MazeCoord_t28 * L_0 = &(__this->___SizeInTiles_3);
		int32_t L_1 = (L_0->___x_0);
		MazeCoord_t28 * L_2 = &(__this->___SizeInTiles_3);
		int32_t L_3 = (L_2->___z_1);
		MazeCellU5BU2CU5D_t30* L_4 = (MazeCellU5BU2CU5D_t30*)GenArrayNew2(MazeCellU5BU2CU5D_t30_il2cpp_TypeInfo_var, L_1, L_3);
		__this->___cells_6 = L_4;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t31_il2cpp_TypeInfo_var);
		List_1_t31 * L_5 = (List_1_t31 *)il2cpp_codegen_object_new (List_1_t31_il2cpp_TypeInfo_var);
		List_1__ctor_m623(L_5, /*hidden argument*/List_1__ctor_m623_MethodInfo_var);
		__this->___mazeWalls_7 = L_5;
		MazeGenerator_GenerateMaze_m80(__this, /*hidden argument*/&MazeGenerator_GenerateMaze_m80_MethodInfo);
		return;
	}
}
// System.Void MazeGenerator::GenerateMaze()
extern TypeInfo* Enumerator_t174_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t177_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m641_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m642_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m643_MethodInfo_var;
extern MethodInfo* List_1_Clear_m627_MethodInfo_var;
extern MethodInfo* List_1__ctor_m628_MethodInfo_var;
extern MethodInfo* List_1_Add_m629_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m630_MethodInfo_var;
extern MethodInfo* List_1_get_Item_m631_MethodInfo_var;
extern MethodInfo* List_1_Remove_m632_MethodInfo_var;
extern MethodInfo* Object_Instantiate_TisGameObject_t7_m638_MethodInfo_var;
extern MethodInfo* List_1_Add_m635_MethodInfo_var;
extern "C" void MazeGenerator_GenerateMaze_m80 (MazeGenerator_t33 * __this, MethodInfo* method)
{
	static bool MazeGenerator_GenerateMaze_m80_init;
	if (!MazeGenerator_GenerateMaze_m80_init)
	{
		Enumerator_t174_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t174_0_0_0);
		List_1_t177_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t177_0_0_0);
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		List_1_GetEnumerator_m641_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m641_GenericMethod);
		Enumerator_get_Current_m642_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m642_GenericMethod);
		Enumerator_MoveNext_m643_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m643_GenericMethod);
		List_1_Clear_m627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m627_GenericMethod);
		List_1__ctor_m628_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m628_GenericMethod);
		List_1_Add_m629_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m629_GenericMethod);
		List_1_get_Count_m630_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m630_GenericMethod);
		List_1_get_Item_m631_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Item_m631_GenericMethod);
		List_1_Remove_m632_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Remove_m632_GenericMethod);
		Object_Instantiate_TisGameObject_t7_m638_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Object_Instantiate_TisGameObject_t7_m638_GenericMethod);
		List_1_Add_m635_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m635_GenericMethod);
		MazeGenerator_GenerateMaze_m80_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t7 * V_2 = {0};
	Enumerator_t174  V_3 = {0};
	MazeCoord_t28  V_4 = {0};
	List_1_t177 * V_5 = {0};
	MazeCoord_t28  V_6 = {0};
	bool V_7 = false;
	Int32U5BU5D_t34* V_8 = {0};
	int32_t V_9 = 0;
	Int32U5BU5D_t34* V_10 = {0};
	int32_t V_11 = 0;
	MazeCoord_t28  V_12 = {0};
	MazeCoord_t28  V_13 = {0};
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	GameObject_t7 * V_17 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		goto IL_00aa;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0095;
	}

IL_000e:
	{
		MazeCellU5BU2CU5D_t30* L_0 = (__this->___cells_6);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		MazeCell_t29 * L_3 = (MazeCell_t29 *)GenArrayAddress2(L_0, L_1, L_2);;
		L_3->___wall_0 = 1;
		MazeCellU5BU2CU5D_t30* L_4 = (__this->___cells_6);
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		MazeCell_t29 * L_7 = (MazeCell_t29 *)GenArrayAddress2(L_4, L_5, L_6);;
		L_7->___distanceFromStart_2 = 0;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_9 = V_1;
		if (!L_9)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_10 = V_0;
		MazeCoord_t28 * L_11 = &(__this->___SizeInTiles_3);
		int32_t L_12 = (L_11->___x_0);
		if ((((int32_t)L_10) == ((int32_t)((int32_t)((int32_t)L_12-(int32_t)1)))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_13 = V_1;
		MazeCoord_t28 * L_14 = &(__this->___SizeInTiles_3);
		int32_t L_15 = (L_14->___z_1);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)((int32_t)L_15-(int32_t)1))))))
		{
			goto IL_007e;
		}
	}

IL_0066:
	{
		MazeCellU5BU2CU5D_t30* L_16 = (__this->___cells_6);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_16);
		MazeCell_t29 * L_19 = (MazeCell_t29 *)GenArrayAddress2(L_16, L_17, L_18);;
		L_19->___carveCount_1 = 5;
		goto IL_0091;
	}

IL_007e:
	{
		MazeCellU5BU2CU5D_t30* L_20 = (__this->___cells_6);
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_20);
		MazeCell_t29 * L_23 = (MazeCell_t29 *)GenArrayAddress2(L_20, L_21, L_22);;
		L_23->___carveCount_1 = 0;
	}

IL_0091:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0095:
	{
		int32_t L_25 = V_1;
		MazeCoord_t28 * L_26 = &(__this->___SizeInTiles_3);
		int32_t L_27 = (L_26->___z_1);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_28 = V_0;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00aa:
	{
		int32_t L_29 = V_0;
		MazeCoord_t28 * L_30 = &(__this->___SizeInTiles_3);
		int32_t L_31 = (L_30->___x_0);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0007;
		}
	}
	{
		List_1_t31 * L_32 = (__this->___mazeWalls_7);
		NullCheck(L_32);
		Enumerator_t174  L_33 = List_1_GetEnumerator_m641(L_32, /*hidden argument*/List_1_GetEnumerator_m641_MethodInfo_var);
		V_3 = L_33;
	}

IL_00c7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00da;
		}

IL_00cc:
		{
			GameObject_t7 * L_34 = Enumerator_get_Current_m642((&V_3), /*hidden argument*/Enumerator_get_Current_m642_MethodInfo_var);
			V_2 = L_34;
			GameObject_t7 * L_35 = V_2;
			Object_Destroy_m625(NULL /*static, unused*/, L_35, /*hidden argument*/&Object_Destroy_m625_MethodInfo);
		}

IL_00da:
		{
			bool L_36 = Enumerator_MoveNext_m643((&V_3), /*hidden argument*/Enumerator_MoveNext_m643_MethodInfo_var);
			if (L_36)
			{
				goto IL_00cc;
			}
		}

IL_00e6:
		{
			IL2CPP_LEAVE(0xF7, FINALLY_00eb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_00eb;
	}

FINALLY_00eb:
	{ // begin finally (depth: 1)
		Enumerator_t174  L_37 = V_3;
		Enumerator_t174  L_38 = L_37;
		Object_t * L_39 = Box(Enumerator_t174_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_39);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_39);
		IL2CPP_END_FINALLY(235)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(235)
	{
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_00f7:
	{
		List_1_t31 * L_40 = (__this->___mazeWalls_7);
		NullCheck(L_40);
		VirtActionInvoker0::Invoke(List_1_Clear_m627_MethodInfo_var, L_40);
		MazeCoord__ctor_m77((&V_4), 1, 1, /*hidden argument*/&MazeCoord__ctor_m77_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t177_il2cpp_TypeInfo_var);
		List_1_t177 * L_41 = (List_1_t177 *)il2cpp_codegen_object_new (List_1_t177_il2cpp_TypeInfo_var);
		List_1__ctor_m628(L_41, /*hidden argument*/List_1__ctor_m628_MethodInfo_var);
		V_5 = L_41;
		List_1_t177 * L_42 = V_5;
		MazeCoord_t28  L_43 = V_4;
		NullCheck(L_42);
		VirtActionInvoker1< MazeCoord_t28  >::Invoke(List_1_Add_m629_MethodInfo_var, L_42, L_43);
		MazeCoord_t28  L_44 = V_4;
		MazeGenerator_DoCarve_m83(__this, L_44, /*hidden argument*/&MazeGenerator_DoCarve_m83_MethodInfo);
		goto IL_019e;
	}

IL_0128:
	{
		List_1_t177 * L_45 = V_5;
		List_1_t177 * L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m630_MethodInfo_var, L_46);
		NullCheck(L_45);
		MazeCoord_t28  L_48 = (MazeCoord_t28 )VirtFuncInvoker1< MazeCoord_t28 , int32_t >::Invoke(List_1_get_Item_m631_MethodInfo_var, L_45, ((int32_t)((int32_t)L_47-(int32_t)1)));
		V_6 = L_48;
		V_7 = 0;
		Int32U5BU5D_t34* L_49 = MazeGenerator_GetRandomDirections_m81(__this, /*hidden argument*/&MazeGenerator_GetRandomDirections_m81_MethodInfo);
		V_8 = L_49;
		Int32U5BU5D_t34* L_50 = V_8;
		V_10 = L_50;
		V_11 = 0;
		goto IL_0182;
	}

IL_0151:
	{
		Int32U5BU5D_t34* L_51 = V_10;
		int32_t L_52 = V_11;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_52);
		int32_t L_53 = L_52;
		V_9 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_51, L_53));
		MazeCoord_t28  L_54 = V_6;
		V_12 = L_54;
		int32_t L_55 = V_9;
		bool L_56 = MazeGenerator_TryCarve_m82(__this, (&V_12), L_55, /*hidden argument*/&MazeGenerator_TryCarve_m82_MethodInfo);
		if (!L_56)
		{
			goto IL_017c;
		}
	}
	{
		List_1_t177 * L_57 = V_5;
		MazeCoord_t28  L_58 = V_12;
		NullCheck(L_57);
		VirtActionInvoker1< MazeCoord_t28  >::Invoke(List_1_Add_m629_MethodInfo_var, L_57, L_58);
		V_7 = 1;
		goto IL_018d;
	}

IL_017c:
	{
		int32_t L_59 = V_11;
		V_11 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_0182:
	{
		int32_t L_60 = V_11;
		Int32U5BU5D_t34* L_61 = V_10;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)(((Array_t *)L_61)->max_length))))))
		{
			goto IL_0151;
		}
	}

IL_018d:
	{
		bool L_62 = V_7;
		if (L_62)
		{
			goto IL_019e;
		}
	}
	{
		List_1_t177 * L_63 = V_5;
		MazeCoord_t28  L_64 = V_6;
		NullCheck(L_63);
		VirtFuncInvoker1< bool, MazeCoord_t28  >::Invoke(List_1_Remove_m632_MethodInfo_var, L_63, L_64);
	}

IL_019e:
	{
		List_1_t177 * L_65 = V_5;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m630_MethodInfo_var, L_65);
		if ((((int32_t)L_66) > ((int32_t)0)))
		{
			goto IL_0128;
		}
	}
	{
		Initobj (InitializedTypeInfo(&MazeCoord_t28_il2cpp_TypeInfo), (&V_13));
		V_14 = 0;
		V_15 = 0;
		goto IL_02ca;
	}

IL_01be:
	{
		V_16 = 0;
		goto IL_02b2;
	}

IL_01c6:
	{
		MazeCellU5BU2CU5D_t30* L_67 = (__this->___cells_6);
		int32_t L_68 = V_15;
		int32_t L_69 = V_16;
		NullCheck(L_67);
		MazeCell_t29 * L_70 = (MazeCell_t29 *)GenArrayAddress2(L_67, L_68, L_69);;
		bool L_71 = (L_70->___wall_0);
		if (!L_71)
		{
			goto IL_0270;
		}
	}
	{
		GameObject_t7 * L_72 = (__this->___WallPrefab_4);
		GameObject_t7 * L_73 = Object_Instantiate_TisGameObject_t7_m638(NULL /*static, unused*/, L_72, /*hidden argument*/Object_Instantiate_TisGameObject_t7_m638_MethodInfo_var);
		V_17 = L_73;
		GameObject_t7 * L_74 = V_17;
		ObjectU5BU5D_t178* L_75 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, 4));
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, 0);
		ArrayElementTypeCheck (L_75, (String_t*) &_stringLiteral10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_75, 0)) = (Object_t *)(String_t*) &_stringLiteral10;
		ObjectU5BU5D_t178* L_76 = L_75;
		int32_t L_77 = V_15;
		int32_t L_78 = L_77;
		Object_t * L_79 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_78);
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, 1);
		ArrayElementTypeCheck (L_76, L_79);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_76, 1)) = (Object_t *)L_79;
		ObjectU5BU5D_t178* L_80 = L_76;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, 2);
		ArrayElementTypeCheck (L_80, (String_t*) &_stringLiteral11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_80, 2)) = (Object_t *)(String_t*) &_stringLiteral11;
		ObjectU5BU5D_t178* L_81 = L_80;
		int32_t L_82 = V_16;
		int32_t L_83 = L_82;
		Object_t * L_84 = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &L_83);
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 3);
		ArrayElementTypeCheck (L_81, L_84);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_81, 3)) = (Object_t *)L_84;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_85 = String_Concat_m633(NULL /*static, unused*/, L_81, /*hidden argument*/&String_Concat_m633_MethodInfo);
		NullCheck(L_74);
		Object_set_name_m634(L_74, L_85, /*hidden argument*/&Object_set_name_m634_MethodInfo);
		GameObject_t7 * L_86 = V_17;
		NullCheck(L_86);
		Transform_t2 * L_87 = GameObject_get_transform_m558(L_86, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_88 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_87);
		Transform_set_parent_m559(L_87, L_88, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		GameObject_t7 * L_89 = V_17;
		NullCheck(L_89);
		Transform_t2 * L_90 = GameObject_get_transform_m558(L_89, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		int32_t L_91 = V_15;
		float L_92 = (__this->___TileSize_2);
		int32_t L_93 = V_16;
		float L_94 = (__this->___TileSize_2);
		Vector3_t5  L_95 = {0};
		Vector3__ctor_m510(&L_95, ((float)((float)(((float)L_91))*(float)L_92)), (0.0f), ((float)((float)(((float)L_93))*(float)L_94)), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		NullCheck(L_90);
		Transform_set_localPosition_m579(L_90, L_95, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		List_1_t31 * L_96 = (__this->___mazeWalls_7);
		GameObject_t7 * L_97 = V_17;
		NullCheck(L_96);
		VirtActionInvoker1< GameObject_t7 * >::Invoke(List_1_Add_m635_MethodInfo_var, L_96, L_97);
		goto IL_02ac;
	}

IL_0270:
	{
		MazeCellU5BU2CU5D_t30* L_98 = (__this->___cells_6);
		int32_t L_99 = V_15;
		int32_t L_100 = V_16;
		NullCheck(L_98);
		MazeCell_t29 * L_101 = (MazeCell_t29 *)GenArrayAddress2(L_98, L_99, L_100);;
		int32_t L_102 = (L_101->___distanceFromStart_2);
		int32_t L_103 = V_14;
		if ((((int32_t)L_102) <= ((int32_t)L_103)))
		{
			goto IL_02ac;
		}
	}
	{
		MazeCellU5BU2CU5D_t30* L_104 = (__this->___cells_6);
		int32_t L_105 = V_15;
		int32_t L_106 = V_16;
		NullCheck(L_104);
		MazeCell_t29 * L_107 = (MazeCell_t29 *)GenArrayAddress2(L_104, L_105, L_106);;
		int32_t L_108 = (L_107->___distanceFromStart_2);
		V_14 = L_108;
		int32_t L_109 = V_15;
		int32_t L_110 = V_16;
		MazeCoord__ctor_m77((&V_13), L_109, L_110, /*hidden argument*/&MazeCoord__ctor_m77_MethodInfo);
	}

IL_02ac:
	{
		int32_t L_111 = V_16;
		V_16 = ((int32_t)((int32_t)L_111+(int32_t)1));
	}

IL_02b2:
	{
		int32_t L_112 = V_16;
		MazeCoord_t28 * L_113 = &(__this->___SizeInTiles_3);
		int32_t L_114 = (L_113->___z_1);
		if ((((int32_t)L_112) < ((int32_t)L_114)))
		{
			goto IL_01c6;
		}
	}
	{
		int32_t L_115 = V_15;
		V_15 = ((int32_t)((int32_t)L_115+(int32_t)1));
	}

IL_02ca:
	{
		int32_t L_116 = V_15;
		MazeCoord_t28 * L_117 = &(__this->___SizeInTiles_3);
		int32_t L_118 = (L_117->___x_0);
		if ((((int32_t)L_116) < ((int32_t)L_118)))
		{
			goto IL_01be;
		}
	}
	{
		GameObject_t7 * L_119 = (__this->___Ending_5);
		NullCheck(L_119);
		Transform_t2 * L_120 = GameObject_get_transform_m558(L_119, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_121 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_121);
		Vector3_t5  L_122 = Transform_get_position_m506(L_121, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		int32_t L_123 = ((&V_13)->___x_0);
		float L_124 = (__this->___TileSize_2);
		int32_t L_125 = ((&V_13)->___z_1);
		float L_126 = (__this->___TileSize_2);
		Vector3_t5  L_127 = {0};
		Vector3__ctor_m510(&L_127, ((float)((float)(((float)L_123))*(float)L_124)), (0.0f), ((float)((float)(((float)L_125))*(float)L_126)), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_128 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_122, L_127, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		NullCheck(L_120);
		Transform_set_position_m518(L_120, L_128, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		return;
	}
}
// System.Int32[] MazeGenerator::GetRandomDirections()
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern TypeInfo* Func_2_t32_il2cpp_TypeInfo_var;
extern MethodInfo* Func_2__ctor_m636_MethodInfo_var;
extern MethodInfo* Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639_MethodInfo_var;
extern MethodInfo* Enumerable_ToArray_TisInt32_t96_m640_MethodInfo_var;
extern "C" Int32U5BU5D_t34* MazeGenerator_GetRandomDirections_m81 (MazeGenerator_t33 * __this, MethodInfo* method)
{
	static bool MazeGenerator_GetRandomDirections_m81_init;
	if (!MazeGenerator_GetRandomDirections_m81_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		Func_2_t32_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Func_2_t32_0_0_0);
		Func_2__ctor_m636_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Func_2__ctor_m636_GenericMethod);
		Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639_GenericMethod);
		Enumerable_ToArray_TisInt32_t96_m640_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_ToArray_TisInt32_t96_m640_GenericMethod);
		MazeGenerator_GetRandomDirections_m81_init = true;
	}
	Int32U5BU5D_t34* V_0 = {0};
	Int32U5BU5D_t34* G_B2_0 = {0};
	Int32U5BU5D_t34* G_B1_0 = {0};
	{
		Int32U5BU5D_t34* L_0 = ((Int32U5BU5D_t34*)SZArrayNew(Int32U5BU5D_t34_il2cpp_TypeInfo_var, 4));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_0, 1)) = (int32_t)1;
		Int32U5BU5D_t34* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, 2)) = (int32_t)2;
		Int32U5BU5D_t34* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, 3)) = (int32_t)3;
		V_0 = L_2;
		Int32U5BU5D_t34* L_3 = V_0;
		Func_2_t32 * L_4 = ((MazeGenerator_t33_StaticFields*)InitializedTypeInfo(&MazeGenerator_t33_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cache6_8;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_002c;
		}
	}
	{
		IntPtr_t L_5 = { &MazeGenerator_U3CGetRandomDirectionsU3Em__0_m84_MethodInfo };
		Func_2_t32 * L_6 = (Func_2_t32 *)il2cpp_codegen_object_new (Func_2_t32_il2cpp_TypeInfo_var);
		Func_2__ctor_m636(L_6, NULL, L_5, /*hidden argument*/Func_2__ctor_m636_MethodInfo_var);
		((MazeGenerator_t33_StaticFields*)InitializedTypeInfo(&MazeGenerator_t33_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cache6_8 = L_6;
		G_B2_0 = G_B1_0;
	}

IL_002c:
	{
		Func_2_t32 * L_7 = ((MazeGenerator_t33_StaticFields*)InitializedTypeInfo(&MazeGenerator_t33_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cache6_8;
		Object_t* L_8 = Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639(NULL /*static, unused*/, (Object_t*)(Object_t*)G_B2_0, L_7, /*hidden argument*/Enumerable_OrderBy_TisInt32_t96_TisSingle_t43_m639_MethodInfo_var);
		Int32U5BU5D_t34* L_9 = Enumerable_ToArray_TisInt32_t96_m640(NULL /*static, unused*/, L_8, /*hidden argument*/Enumerable_ToArray_TisInt32_t96_m640_MethodInfo_var);
		return L_9;
	}
}
// System.Boolean MazeGenerator::TryCarve(MazeCoord&,System.Int32)
extern "C" bool MazeGenerator_TryCarve_m82 (MazeGenerator_t33 * __this, MazeCoord_t28 * ___coord, int32_t ___direction, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MazeCellU5BU2CU5D_t30* L_0 = (__this->___cells_6);
		MazeCoord_t28 * L_1 = ___coord;
		int32_t L_2 = (L_1->___x_0);
		MazeCoord_t28 * L_3 = ___coord;
		int32_t L_4 = (L_3->___z_1);
		NullCheck(L_0);
		MazeCell_t29 * L_5 = (MazeCell_t29 *)GenArrayAddress2(L_0, L_2, L_4);;
		int32_t L_6 = (L_5->___distanceFromStart_2);
		V_0 = L_6;
		int32_t L_7 = ___direction;
		V_1 = L_7;
		int32_t L_8 = V_1;
		if (L_8 == 0)
		{
			goto IL_003a;
		}
		if (L_8 == 1)
		{
			goto IL_004d;
		}
		if (L_8 == 2)
		{
			goto IL_0060;
		}
		if (L_8 == 3)
		{
			goto IL_0073;
		}
	}
	{
		goto IL_0086;
	}

IL_003a:
	{
		MazeCoord_t28 * L_9 = ___coord;
		MazeCoord_t28 * L_10 = L_9;
		int32_t L_11 = (L_10->___x_0);
		L_10->___x_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		goto IL_0088;
	}

IL_004d:
	{
		MazeCoord_t28 * L_12 = ___coord;
		MazeCoord_t28 * L_13 = L_12;
		int32_t L_14 = (L_13->___x_0);
		L_13->___x_0 = ((int32_t)((int32_t)L_14-(int32_t)1));
		goto IL_0088;
	}

IL_0060:
	{
		MazeCoord_t28 * L_15 = ___coord;
		MazeCoord_t28 * L_16 = L_15;
		int32_t L_17 = (L_16->___z_1);
		L_16->___z_1 = ((int32_t)((int32_t)L_17+(int32_t)1));
		goto IL_0088;
	}

IL_0073:
	{
		MazeCoord_t28 * L_18 = ___coord;
		MazeCoord_t28 * L_19 = L_18;
		int32_t L_20 = (L_19->___z_1);
		L_19->___z_1 = ((int32_t)((int32_t)L_20-(int32_t)1));
		goto IL_0088;
	}

IL_0086:
	{
		return 0;
	}

IL_0088:
	{
		MazeCellU5BU2CU5D_t30* L_21 = (__this->___cells_6);
		MazeCoord_t28 * L_22 = ___coord;
		int32_t L_23 = (L_22->___x_0);
		MazeCoord_t28 * L_24 = ___coord;
		int32_t L_25 = (L_24->___z_1);
		NullCheck(L_21);
		MazeCell_t29 * L_26 = (MazeCell_t29 *)GenArrayAddress2(L_21, L_23, L_25);;
		bool L_27 = (L_26->___wall_0);
		if (!L_27)
		{
			goto IL_00cb;
		}
	}
	{
		MazeCellU5BU2CU5D_t30* L_28 = (__this->___cells_6);
		MazeCoord_t28 * L_29 = ___coord;
		int32_t L_30 = (L_29->___x_0);
		MazeCoord_t28 * L_31 = ___coord;
		int32_t L_32 = (L_31->___z_1);
		NullCheck(L_28);
		MazeCell_t29 * L_33 = (MazeCell_t29 *)GenArrayAddress2(L_28, L_30, L_32);;
		int32_t L_34 = (L_33->___carveCount_1);
		if ((((int32_t)L_34) < ((int32_t)2)))
		{
			goto IL_00cd;
		}
	}

IL_00cb:
	{
		return 0;
	}

IL_00cd:
	{
		MazeCellU5BU2CU5D_t30* L_35 = (__this->___cells_6);
		MazeCoord_t28 * L_36 = ___coord;
		int32_t L_37 = (L_36->___x_0);
		MazeCoord_t28 * L_38 = ___coord;
		int32_t L_39 = (L_38->___z_1);
		NullCheck(L_35);
		MazeCell_t29 * L_40 = (MazeCell_t29 *)GenArrayAddress2(L_35, L_37, L_39);;
		int32_t L_41 = V_0;
		L_40->___distanceFromStart_2 = ((int32_t)((int32_t)L_41+(int32_t)1));
		MazeCoord_t28 * L_42 = ___coord;
		MazeGenerator_DoCarve_m83(__this, (*(MazeCoord_t28 *)L_42), /*hidden argument*/&MazeGenerator_DoCarve_m83_MethodInfo);
		return 1;
	}
}
// System.Void MazeGenerator::DoCarve(MazeCoord)
extern "C" void MazeGenerator_DoCarve_m83 (MazeGenerator_t33 * __this, MazeCoord_t28  ___coord, MethodInfo* method)
{
	{
		MazeCellU5BU2CU5D_t30* L_0 = (__this->___cells_6);
		int32_t L_1 = ((&___coord)->___x_0);
		int32_t L_2 = ((&___coord)->___z_1);
		NullCheck(L_0);
		MazeCell_t29 * L_3 = (MazeCell_t29 *)GenArrayAddress2(L_0, L_1, L_2);;
		L_3->___wall_0 = 0;
		MazeCellU5BU2CU5D_t30* L_4 = (__this->___cells_6);
		int32_t L_5 = ((&___coord)->___x_0);
		int32_t L_6 = ((&___coord)->___z_1);
		NullCheck(L_4);
		MazeCell_t29 * L_7 = (MazeCell_t29 *)GenArrayAddress2(L_4, ((int32_t)((int32_t)L_5-(int32_t)1)), L_6);;
		MazeCell_t29 * L_8 = L_7;
		int32_t L_9 = (L_8->___carveCount_1);
		L_8->___carveCount_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		MazeCellU5BU2CU5D_t30* L_10 = (__this->___cells_6);
		int32_t L_11 = ((&___coord)->___x_0);
		int32_t L_12 = ((&___coord)->___z_1);
		NullCheck(L_10);
		MazeCell_t29 * L_13 = (MazeCell_t29 *)GenArrayAddress2(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)), L_12);;
		MazeCell_t29 * L_14 = L_13;
		int32_t L_15 = (L_14->___carveCount_1);
		L_14->___carveCount_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
		MazeCellU5BU2CU5D_t30* L_16 = (__this->___cells_6);
		int32_t L_17 = ((&___coord)->___x_0);
		int32_t L_18 = ((&___coord)->___z_1);
		NullCheck(L_16);
		MazeCell_t29 * L_19 = (MazeCell_t29 *)GenArrayAddress2(L_16, L_17, ((int32_t)((int32_t)L_18-(int32_t)1)));;
		MazeCell_t29 * L_20 = L_19;
		int32_t L_21 = (L_20->___carveCount_1);
		L_20->___carveCount_1 = ((int32_t)((int32_t)L_21+(int32_t)1));
		MazeCellU5BU2CU5D_t30* L_22 = (__this->___cells_6);
		int32_t L_23 = ((&___coord)->___x_0);
		int32_t L_24 = ((&___coord)->___z_1);
		NullCheck(L_22);
		MazeCell_t29 * L_25 = (MazeCell_t29 *)GenArrayAddress2(L_22, L_23, ((int32_t)((int32_t)L_24+(int32_t)1)));;
		MazeCell_t29 * L_26 = L_25;
		int32_t L_27 = (L_26->___carveCount_1);
		L_26->___carveCount_1 = ((int32_t)((int32_t)L_27+(int32_t)1));
		return;
	}
}
// System.Single MazeGenerator::<GetRandomDirections>m__0(System.Int32)
extern "C" float MazeGenerator_U3CGetRandomDirectionsU3Em__0_m84 (Object_t * __this /* static, unused */, int32_t ___x, MethodInfo* method)
{
	{
		float L_0 = Random_get_value_m637(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m637_MethodInfo);
		return L_0;
	}
}
// Note
#include "AssemblyU2DCSharp_Note.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Note_t35_il2cpp_TypeInfo;
// Note
#include "AssemblyU2DCSharp_NoteMethodDeclarations.h"



// System.Void Note::.ctor()
extern MethodInfo Note__ctor_m85_MethodInfo;
extern "C" void Note__ctor_m85 (Note_t35 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// Pedometer
#include "AssemblyU2DCSharp_Pedometer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Pedometer_t36_il2cpp_TypeInfo;
// Pedometer
#include "AssemblyU2DCSharp_PedometerMethodDeclarations.h"

extern MethodInfo Input_get_acceleration_m644_MethodInfo;
extern MethodInfo Mathf_Lerp_m645_MethodInfo;
extern MethodInfo Pedometer_stepDetector_m87_MethodInfo;


// System.Void Pedometer::.ctor()
extern MethodInfo Pedometer__ctor_m86_MethodInfo;
extern "C" void Pedometer__ctor_m86 (Pedometer_t36 * __this, MethodInfo* method)
{
	{
		__this->___cooldown_2 = (0.2f);
		__this->___loLim_3 = (0.05f);
		__this->___hiLim_4 = (0.1f);
		__this->___jumpLim_5 = (0.25f);
		__this->___fHigh_9 = (15.0f);
		__this->___fLow_10 = (0.1f);
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Int32 Pedometer::stepDetector()
extern "C" int32_t Pedometer_stepDetector_m87 (Pedometer_t36 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t5  V_1 = {0};
	Vector3_t5  V_2 = {0};
	{
		float L_0 = (__this->___curAcc_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		Vector3_t5  L_1 = Input_get_acceleration_m644(NULL /*static, unused*/, /*hidden argument*/&Input_get_acceleration_m644_MethodInfo);
		V_1 = L_1;
		float L_2 = ((&V_1)->___y_2);
		float L_3 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		float L_4 = (__this->___fHigh_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_5 = Mathf_Lerp_m645(NULL /*static, unused*/, L_0, L_2, ((float)((float)L_3*(float)L_4)), /*hidden argument*/&Mathf_Lerp_m645_MethodInfo);
		__this->___curAcc_11 = L_5;
		float L_6 = (__this->___avgAcc_12);
		Vector3_t5  L_7 = Input_get_acceleration_m644(NULL /*static, unused*/, /*hidden argument*/&Input_get_acceleration_m644_MethodInfo);
		V_2 = L_7;
		float L_8 = ((&V_2)->___y_2);
		float L_9 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		float L_10 = (__this->___fLow_10);
		float L_11 = Mathf_Lerp_m645(NULL /*static, unused*/, L_6, L_8, ((float)((float)L_9*(float)L_10)), /*hidden argument*/&Mathf_Lerp_m645_MethodInfo);
		__this->___avgAcc_12 = L_11;
		float L_12 = (__this->___curAcc_11);
		float L_13 = (__this->___avgAcc_12);
		V_0 = ((float)((float)L_12-(float)L_13));
		float L_14 = (__this->___cooldownTimer_8);
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_00af;
		}
	}
	{
		bool L_15 = (__this->___stateH_7);
		if (L_15)
		{
			goto IL_00af;
		}
	}
	{
		float L_16 = V_0;
		float L_17 = (__this->___hiLim_4);
		if ((!(((float)L_16) > ((float)L_17))))
		{
			goto IL_00aa;
		}
	}
	{
		__this->___stateH_7 = 1;
		float L_18 = (__this->___cooldown_2);
		__this->___cooldownTimer_8 = L_18;
		int32_t L_19 = (__this->___steps_6);
		__this->___steps_6 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_00aa:
	{
		goto IL_00c1;
	}

IL_00af:
	{
		float L_20 = (__this->___cooldownTimer_8);
		float L_21 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		__this->___cooldownTimer_8 = ((float)((float)L_20-(float)L_21));
	}

IL_00c1:
	{
		float L_22 = (__this->___curAcc_11);
		float L_23 = (__this->___jumpLim_5);
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_00d9;
		}
	}
	{
		__this->___jump_13 = 1;
	}

IL_00d9:
	{
		float L_24 = V_0;
		float L_25 = (__this->___loLim_3);
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_00ec;
		}
	}
	{
		__this->___stateH_7 = 0;
	}

IL_00ec:
	{
		float L_26 = (__this->___curAcc_11);
		__this->___avgAcc_12 = L_26;
		int32_t L_27 = (__this->___steps_6);
		return L_27;
	}
}
// System.Int32 Pedometer::get_Steps()
extern MethodInfo Pedometer_get_Steps_m88_MethodInfo;
extern "C" int32_t Pedometer_get_Steps_m88 (Pedometer_t36 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___steps_6);
		return L_0;
	}
}
// System.Void Pedometer::set_Steps(System.Int32)
extern MethodInfo Pedometer_set_Steps_m89_MethodInfo;
extern "C" void Pedometer_set_Steps_m89 (Pedometer_t36 * __this, int32_t ___value, MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___steps_6 = L_0;
		return;
	}
}
// System.Void Pedometer::FixedUpdate()
extern MethodInfo Pedometer_FixedUpdate_m90_MethodInfo;
extern "C" void Pedometer_FixedUpdate_m90 (Pedometer_t36 * __this, MethodInfo* method)
{
	{
		Pedometer_stepDetector_m87(__this, /*hidden argument*/&Pedometer_stepDetector_m87_MethodInfo);
		return;
	}
}
// Realiteer.Player
#include "AssemblyU2DCSharp_Realiteer_Player.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Player_t38_il2cpp_TypeInfo;
// Realiteer.Player
#include "AssemblyU2DCSharp_Realiteer_PlayerMethodDeclarations.h"

// Realiteer.PlayerTossModule
#include "AssemblyU2DCSharp_Realiteer_PlayerTossModule.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_Collision.h"
// UnityEngine.Collision
#include "UnityEngine_UnityEngine_CollisionMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
extern MethodInfo Rigidbody_set_useGravity_m646_MethodInfo;
extern MethodInfo Player_Walk_m94_MethodInfo;
extern MethodInfo Rigidbody_get_velocity_m647_MethodInfo;
extern MethodInfo Vector3_get_down_m648_MethodInfo;
extern MethodInfo Rigidbody_AddForce_m649_MethodInfo;
extern MethodInfo Renderer_get_enabled_m650_MethodInfo;
extern MethodInfo Transform_get_right_m651_MethodInfo;
extern MethodInfo Object_get_name_m652_MethodInfo;
extern MethodInfo String_op_Equality_m653_MethodInfo;
extern MethodInfo Collision_get_gameObject_m654_MethodInfo;
extern MethodInfo GameObject_get_tag_m655_MethodInfo;
extern MethodInfo Application_get_loadedLevel_m656_MethodInfo;
extern MethodInfo Application_LoadLevel_m657_MethodInfo;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t23_m658(__this, method) (( Renderer_t23 * (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m547_gshared)(__this, method)
struct Component_t167;
// UnityEngine.CastHelper`1<Realiteer.PlayerTossModule>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_5.h"
// Declaration !!0 UnityEngine.Component::GetComponent<Realiteer.PlayerTossModule>()
// !!0 UnityEngine.Component::GetComponent<Realiteer.PlayerTossModule>()
#define Component_GetComponent_TisPlayerTossModule_t37_m659(__this, method) (( PlayerTossModule_t37 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponent_TisRenderer_t23_m658_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisPlayerTossModule_t37_m659_GenericMethod;


// System.Void Realiteer.Player::.ctor()
extern MethodInfo Player__ctor_m91_MethodInfo;
extern "C" void Player__ctor_m91 (Player_t38 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Realiteer.Player::Start()
extern MethodInfo Player_Start_m92_MethodInfo;
extern MethodInfo* GameObject_GetComponent_TisRenderer_t23_m658_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisRigidbody_t18_m556_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisPlayerTossModule_t37_m659_MethodInfo_var;
extern "C" void Player_Start_m92 (Player_t38 * __this, MethodInfo* method)
{
	static bool Player_Start_m92_init;
	if (!Player_Start_m92_init)
	{
		GameObject_GetComponent_TisRenderer_t23_m658_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisRenderer_t23_m658_GenericMethod);
		Component_GetComponent_TisRigidbody_t18_m556_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRigidbody_t18_m556_GenericMethod);
		Component_GetComponent_TisPlayerTossModule_t37_m659_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisPlayerTossModule_t37_m659_GenericMethod);
		Player_Start_m92_init = true;
	}
	{
		GameObject_t7 * L_0 = (__this->___HandTarget_12);
		NullCheck(L_0);
		Renderer_t23 * L_1 = GameObject_GetComponent_TisRenderer_t23_m658(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t23_m658_MethodInfo_var);
		__this->___r_13 = L_1;
		Rigidbody_t18 * L_2 = Component_GetComponent_TisRigidbody_t18_m556(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t18_m556_MethodInfo_var);
		__this->___rbd_14 = L_2;
		Rigidbody_t18 * L_3 = (__this->___rbd_14);
		NullCheck(L_3);
		Rigidbody_set_useGravity_m646(L_3, 0, /*hidden argument*/&Rigidbody_set_useGravity_m646_MethodInfo);
		PlayerTossModule_t37 * L_4 = Component_GetComponent_TisPlayerTossModule_t37_m659(__this, /*hidden argument*/Component_GetComponent_TisPlayerTossModule_t37_m659_MethodInfo_var);
		__this->___tossModule_15 = L_4;
		return;
	}
}
// System.Void Realiteer.Player::FixedUpdate()
extern MethodInfo Player_FixedUpdate_m93_MethodInfo;
extern "C" void Player_FixedUpdate_m93 (Player_t38 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Player_t38 * G_B2_0 = {0};
	Player_t38 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	Player_t38 * G_B3_1 = {0};
	{
		Player_Walk_m94(__this, /*hidden argument*/&Player_Walk_m94_MethodInfo);
		Rigidbody_t18 * L_0 = (__this->___rbd_14);
		NullCheck(L_0);
		Vector3_t5  L_1 = Rigidbody_get_velocity_m647(L_0, /*hidden argument*/&Rigidbody_get_velocity_m647_MethodInfo);
		float L_2 = (__this->___Damping_10);
		Vector3_t5  L_3 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		float L_4 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		Vector3_t5  L_5 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		V_0 = L_5;
		(&V_0)->___y_2 = (0.0f);
		Rigidbody_t18 * L_6 = (__this->___rbd_14);
		Rigidbody_t18 * L_7 = L_6;
		NullCheck(L_7);
		Vector3_t5  L_8 = Rigidbody_get_velocity_m647(L_7, /*hidden argument*/&Rigidbody_get_velocity_m647_MethodInfo);
		Vector3_t5  L_9 = V_0;
		Vector3_t5  L_10 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		NullCheck(L_7);
		Rigidbody_set_velocity_m554(L_7, L_10, /*hidden argument*/&Rigidbody_set_velocity_m554_MethodInfo);
		Rigidbody_t18 * L_11 = (__this->___rbd_14);
		Vector3_t5  L_12 = Vector3_get_down_m648(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_down_m648_MethodInfo);
		float L_13 = (__this->___GravityScale_11);
		Vector3_t5  L_14 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		NullCheck(L_11);
		Rigidbody_AddForce_m649(L_11, L_14, 5, /*hidden argument*/&Rigidbody_AddForce_m649_MethodInfo);
		Renderer_t23 * L_15 = (__this->___r_13);
		NullCheck(L_15);
		bool L_16 = Renderer_get_enabled_m650(L_15, /*hidden argument*/&Renderer_get_enabled_m650_MethodInfo);
		G_B1_0 = __this;
		if (!L_16)
		{
			G_B2_0 = __this;
			goto IL_007d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_007e;
	}

IL_007d:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_007e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___Ready_2 = G_B3_0;
		__this->___onGround_3 = 0;
		return;
	}
}
// System.Void Realiteer.Player::Walk()
extern "C" void Player_Walk_m94 (Player_t38 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	Vector3_t5  V_1 = {0};
	Vector3_t5  V_2 = {0};
	Vector3_t5  V_3 = {0};
	Vector3_t5  V_4 = {0};
	Vector3_t5  V_5 = {0};
	Vector3_t5  V_6 = {0};
	Vector3_t5  V_7 = {0};
	Vector3_t5  V_8 = {0};
	Vector3_t5  V_9 = {0};
	Vector3_t5  V_10 = {0};
	Vector3_t5  V_11 = {0};
	Vector3_t5  V_12 = {0};
	Vector3_t5  V_13 = {0};
	Vector3_t5  V_14 = {0};
	Vector3_t5  V_15 = {0};
	Vector3_t5  V_16 = {0};
	Vector3_t5  V_17 = {0};
	Vector3_t5  V_18 = {0};
	Vector3_t5  V_19 = {0};
	{
		int32_t L_0 = (__this->___lastStep_9);
		Pedometer_t36 * L_1 = (__this->___Pedo_4);
		NullCheck(L_1);
		int32_t L_2 = Pedometer_get_Steps_m88(L_1, /*hidden argument*/&Pedometer_get_Steps_m88_MethodInfo);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0086;
		}
	}
	{
		bool L_3 = (__this->___onGround_3);
		if (!L_3)
		{
			goto IL_0075;
		}
	}
	{
		Transform_t2 * L_4 = (__this->___Head_5);
		NullCheck(L_4);
		Vector3_t5  L_5 = Transform_get_forward_m535(L_4, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		V_10 = L_5;
		float L_6 = ((&V_10)->___x_1);
		Transform_t2 * L_7 = (__this->___Head_5);
		NullCheck(L_7);
		Vector3_t5  L_8 = Transform_get_forward_m535(L_7, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		V_11 = L_8;
		float L_9 = ((&V_11)->___z_3);
		Vector3__ctor_m510((&V_0), L_6, (0.0f), L_9, /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_10 = Vector3_get_normalized_m606((&V_0), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		float L_11 = (__this->___StepSpan_6);
		Vector3_t5  L_12 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		V_1 = L_12;
		Rigidbody_t18 * L_13 = (__this->___rbd_14);
		Vector3_t5  L_14 = V_1;
		NullCheck(L_13);
		Rigidbody_AddForce_m649(L_13, L_14, 2, /*hidden argument*/&Rigidbody_AddForce_m649_MethodInfo);
	}

IL_0075:
	{
		Pedometer_t36 * L_15 = (__this->___Pedo_4);
		NullCheck(L_15);
		int32_t L_16 = Pedometer_get_Steps_m88(L_15, /*hidden argument*/&Pedometer_get_Steps_m88_MethodInfo);
		__this->___lastStep_9 = L_16;
	}

IL_0086:
	{
		Pedometer_t36 * L_17 = (__this->___Pedo_4);
		NullCheck(L_17);
		bool L_18 = (L_17->___jump_13);
		if (L_18)
		{
			goto IL_00a5;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_19 = Input_GetKey_m534(NULL /*static, unused*/, (String_t*) &_stringLiteral12, /*hidden argument*/&Input_GetKey_m534_MethodInfo);
		if (!L_19)
		{
			goto IL_00e3;
		}
	}

IL_00a5:
	{
		bool L_20 = (__this->___onGround_3);
		if (!L_20)
		{
			goto IL_00d7;
		}
	}
	{
		bool L_21 = (__this->___CanJump_7);
		if (!L_21)
		{
			goto IL_00d7;
		}
	}
	{
		Rigidbody_t18 * L_22 = (__this->___rbd_14);
		Vector3_t5  L_23 = Vector3_get_up_m560(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_up_m560_MethodInfo);
		float L_24 = (__this->___JumpScale_8);
		Vector3_t5  L_25 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		NullCheck(L_22);
		Rigidbody_AddForce_m649(L_22, L_25, 1, /*hidden argument*/&Rigidbody_AddForce_m649_MethodInfo);
	}

IL_00d7:
	{
		Pedometer_t36 * L_26 = (__this->___Pedo_4);
		NullCheck(L_26);
		L_26->___jump_13 = 0;
	}

IL_00e3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_27 = Input_GetKey_m534(NULL /*static, unused*/, (String_t*) &_stringLiteral13, /*hidden argument*/&Input_GetKey_m534_MethodInfo);
		if (!L_27)
		{
			goto IL_0155;
		}
	}
	{
		Transform_t2 * L_28 = (__this->___Head_5);
		NullCheck(L_28);
		Vector3_t5  L_29 = Transform_get_forward_m535(L_28, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		V_12 = L_29;
		float L_30 = ((&V_12)->___x_1);
		Transform_t2 * L_31 = (__this->___Head_5);
		NullCheck(L_31);
		Vector3_t5  L_32 = Transform_get_forward_m535(L_31, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		V_13 = L_32;
		float L_33 = ((&V_13)->___z_3);
		Vector3__ctor_m510((&V_2), L_30, (0.0f), L_33, /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_34 = Vector3_get_normalized_m606((&V_2), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		float L_35 = (__this->___StepSpan_6);
		Vector3_t5  L_36 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_37 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_36, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		V_3 = L_37;
		Rigidbody_t18 * L_38 = (__this->___rbd_14);
		Vector3_t5  L_39 = V_3;
		NullCheck(L_38);
		Rigidbody_AddForce_m649(L_38, L_39, 2, /*hidden argument*/&Rigidbody_AddForce_m649_MethodInfo);
		goto IL_02b0;
	}

IL_0155:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_40 = Input_GetKey_m534(NULL /*static, unused*/, (String_t*) &_stringLiteral14, /*hidden argument*/&Input_GetKey_m534_MethodInfo);
		if (!L_40)
		{
			goto IL_01cb;
		}
	}
	{
		Transform_t2 * L_41 = (__this->___Head_5);
		NullCheck(L_41);
		Vector3_t5  L_42 = Transform_get_forward_m535(L_41, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		V_14 = L_42;
		float L_43 = ((&V_14)->___x_1);
		Transform_t2 * L_44 = (__this->___Head_5);
		NullCheck(L_44);
		Vector3_t5  L_45 = Transform_get_forward_m535(L_44, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		V_15 = L_45;
		float L_46 = ((&V_15)->___z_3);
		Vector3__ctor_m510((&V_4), ((-L_43)), (0.0f), ((-L_46)), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_47 = Vector3_get_normalized_m606((&V_4), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		float L_48 = (__this->___StepSpan_6);
		Vector3_t5  L_49 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_50 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_49, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		V_5 = L_50;
		Rigidbody_t18 * L_51 = (__this->___rbd_14);
		Vector3_t5  L_52 = V_5;
		NullCheck(L_51);
		Rigidbody_AddForce_m649(L_51, L_52, 2, /*hidden argument*/&Rigidbody_AddForce_m649_MethodInfo);
		goto IL_02b0;
	}

IL_01cb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_53 = Input_GetKey_m534(NULL /*static, unused*/, (String_t*) &_stringLiteral15, /*hidden argument*/&Input_GetKey_m534_MethodInfo);
		if (!L_53)
		{
			goto IL_023f;
		}
	}
	{
		Transform_t2 * L_54 = (__this->___Head_5);
		NullCheck(L_54);
		Vector3_t5  L_55 = Transform_get_right_m651(L_54, /*hidden argument*/&Transform_get_right_m651_MethodInfo);
		V_16 = L_55;
		float L_56 = ((&V_16)->___x_1);
		Transform_t2 * L_57 = (__this->___Head_5);
		NullCheck(L_57);
		Vector3_t5  L_58 = Transform_get_right_m651(L_57, /*hidden argument*/&Transform_get_right_m651_MethodInfo);
		V_17 = L_58;
		float L_59 = ((&V_17)->___z_3);
		Vector3__ctor_m510((&V_6), L_56, (0.0f), L_59, /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_60 = Vector3_get_normalized_m606((&V_6), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		float L_61 = (__this->___StepSpan_6);
		Vector3_t5  L_62 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_60, L_61, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_63 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_62, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		V_7 = L_63;
		Rigidbody_t18 * L_64 = (__this->___rbd_14);
		Vector3_t5  L_65 = V_7;
		NullCheck(L_64);
		Rigidbody_AddForce_m649(L_64, L_65, 2, /*hidden argument*/&Rigidbody_AddForce_m649_MethodInfo);
		goto IL_02b0;
	}

IL_023f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_66 = Input_GetKey_m534(NULL /*static, unused*/, (String_t*) &_stringLiteral16, /*hidden argument*/&Input_GetKey_m534_MethodInfo);
		if (!L_66)
		{
			goto IL_02b0;
		}
	}
	{
		Transform_t2 * L_67 = (__this->___Head_5);
		NullCheck(L_67);
		Vector3_t5  L_68 = Transform_get_right_m651(L_67, /*hidden argument*/&Transform_get_right_m651_MethodInfo);
		V_18 = L_68;
		float L_69 = ((&V_18)->___x_1);
		Transform_t2 * L_70 = (__this->___Head_5);
		NullCheck(L_70);
		Vector3_t5  L_71 = Transform_get_right_m651(L_70, /*hidden argument*/&Transform_get_right_m651_MethodInfo);
		V_19 = L_71;
		float L_72 = ((&V_19)->___z_3);
		Vector3__ctor_m510((&V_8), ((-L_69)), (0.0f), ((-L_72)), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Vector3_t5  L_73 = Vector3_get_normalized_m606((&V_8), /*hidden argument*/&Vector3_get_normalized_m606_MethodInfo);
		float L_74 = (__this->___StepSpan_6);
		Vector3_t5  L_75 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_76 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_75, (0.5f), /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		V_9 = L_76;
		Rigidbody_t18 * L_77 = (__this->___rbd_14);
		Vector3_t5  L_78 = V_9;
		NullCheck(L_77);
		Rigidbody_AddForce_m649(L_77, L_78, 2, /*hidden argument*/&Rigidbody_AddForce_m649_MethodInfo);
	}

IL_02b0:
	{
		return;
	}
}
// System.Void Realiteer.Player::OnTriggerEnter(UnityEngine.Collider)
extern MethodInfo Player_OnTriggerEnter_m95_MethodInfo;
extern "C" void Player_OnTriggerEnter_m95 (Player_t38 * __this, Collider_t39 * ___other, MethodInfo* method)
{
	{
		Collider_t39 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m652(L_0, /*hidden argument*/&Object_get_name_m652_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Equality_m653(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral17, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		PlayerTossModule_t37 * L_3 = (__this->___tossModule_15);
		bool L_4 = Object_op_Inequality_m527(NULL /*static, unused*/, L_3, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		PlayerTossModule_t37 * L_5 = (__this->___tossModule_15);
		NullCheck(L_5);
		Behaviour_set_enabled_m530(L_5, 1, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Realiteer.Player::OnTriggerExit(UnityEngine.Collider)
extern MethodInfo Player_OnTriggerExit_m96_MethodInfo;
extern "C" void Player_OnTriggerExit_m96 (Player_t38 * __this, Collider_t39 * ___other, MethodInfo* method)
{
	{
		Collider_t39 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m652(L_0, /*hidden argument*/&Object_get_name_m652_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Equality_m653(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral17, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		PlayerTossModule_t37 * L_3 = (__this->___tossModule_15);
		bool L_4 = Object_op_Inequality_m527(NULL /*static, unused*/, L_3, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		PlayerTossModule_t37 * L_5 = (__this->___tossModule_15);
		NullCheck(L_5);
		Behaviour_set_enabled_m530(L_5, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Realiteer.Player::OnCollisionStay(UnityEngine.Collision)
extern MethodInfo Player_OnCollisionStay_m97_MethodInfo;
extern "C" void Player_OnCollisionStay_m97 (Player_t38 * __this, Collision_t40 * ___collisionInfo, MethodInfo* method)
{
	{
		Collision_t40 * L_0 = ___collisionInfo;
		NullCheck(L_0);
		GameObject_t7 * L_1 = Collision_get_gameObject_m654(L_0, /*hidden argument*/&Collision_get_gameObject_m654_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m655(L_1, /*hidden argument*/&GameObject_get_tag_m655_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_3 = String_op_Equality_m653(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral18, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		__this->___onGround_3 = 1;
	}

IL_0021:
	{
		return;
	}
}
// System.Void Realiteer.Player::Reset()
extern MethodInfo Player_Reset_m98_MethodInfo;
extern "C" void Player_Reset_m98 (Player_t38 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_loadedLevel_m656(NULL /*static, unused*/, /*hidden argument*/&Application_get_loadedLevel_m656_MethodInfo);
		Application_LoadLevel_m657(NULL /*static, unused*/, L_0, /*hidden argument*/&Application_LoadLevel_m657_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PlayerTossModule_t37_il2cpp_TypeInfo;
// Realiteer.PlayerTossModule
#include "AssemblyU2DCSharp_Realiteer_PlayerTossModuleMethodDeclarations.h"

extern MethodInfo Mathf_Clamp_m660_MethodInfo;
extern MethodInfo Object_Instantiate_m661_MethodInfo;
struct GameObject_t7;
// UnityEngine.CastHelper`1<Realiteer.Player>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_6.h"
// Declaration !!0 UnityEngine.GameObject::GetComponent<Realiteer.Player>()
// !!0 UnityEngine.GameObject::GetComponent<Realiteer.Player>()
#define GameObject_GetComponent_TisPlayer_t38_m662(__this, method) (( Player_t38 * (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m547_gshared)(__this, method)
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t18_m663(__this, method) (( Rigidbody_t18 * (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m547_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponent_TisPlayer_t38_m662_GenericMethod;
extern Il2CppGenericMethod GameObject_GetComponent_TisRigidbody_t18_m663_GenericMethod;


// System.Void Realiteer.PlayerTossModule::.ctor()
extern MethodInfo PlayerTossModule__ctor_m99_MethodInfo;
extern "C" void PlayerTossModule__ctor_m99 (PlayerTossModule_t37 * __this, MethodInfo* method)
{
	{
		__this->___loLim_2 = (1.0f);
		__this->___hiLim_3 = (2.0f);
		__this->___fLow_5 = (5.0f);
		__this->___fHigh_6 = (20.0f);
		__this->___VelocityMult_10 = (1.0f);
		__this->___ChargeMax_11 = (1.0f);
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Realiteer.PlayerTossModule::Start()
extern MethodInfo PlayerTossModule_Start_m100_MethodInfo;
extern TypeInfo* List_1_t31_il2cpp_TypeInfo_var;
extern MethodInfo* GameObject_GetComponent_TisPlayer_t38_m662_MethodInfo_var;
extern MethodInfo* List_1__ctor_m623_MethodInfo_var;
extern "C" void PlayerTossModule_Start_m100 (PlayerTossModule_t37 * __this, MethodInfo* method)
{
	static bool PlayerTossModule_Start_m100_init;
	if (!PlayerTossModule_Start_m100_init)
	{
		List_1_t31_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t31_0_0_0);
		GameObject_GetComponent_TisPlayer_t38_m662_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisPlayer_t38_m662_GenericMethod);
		List_1__ctor_m623_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m623_GenericMethod);
		PlayerTossModule_Start_m100_init = true;
	}
	{
		GameObject_t7 * L_0 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_0);
		Player_t38 * L_1 = GameObject_GetComponent_TisPlayer_t38_m662(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayer_t38_m662_MethodInfo_var);
		__this->___Player_16 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t31_il2cpp_TypeInfo_var);
		List_1_t31 * L_2 = (List_1_t31 *)il2cpp_codegen_object_new (List_1_t31_il2cpp_TypeInfo_var);
		List_1__ctor_m623(L_2, /*hidden argument*/List_1__ctor_m623_MethodInfo_var);
		__this->___bullets_17 = L_2;
		return;
	}
}
// System.Void Realiteer.PlayerTossModule::Update()
extern MethodInfo PlayerTossModule_Update_m101_MethodInfo;
extern MethodInfo* GameObject_GetComponent_TisRigidbody_t18_m663_MethodInfo_var;
extern MethodInfo* List_1_Add_m635_MethodInfo_var;
extern "C" void PlayerTossModule_Update_m101 (PlayerTossModule_t37 * __this, MethodInfo* method)
{
	static bool PlayerTossModule_Update_m101_init;
	if (!PlayerTossModule_Update_m101_init)
	{
		GameObject_GetComponent_TisRigidbody_t18_m663_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisRigidbody_t18_m663_GenericMethod);
		List_1_Add_m635_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m635_GenericMethod);
		PlayerTossModule_Update_m101_init = true;
	}
	float V_0 = 0.0f;
	GameObject_t7 * V_1 = {0};
	{
		Player_t38 * L_0 = (__this->___Player_16);
		NullCheck(L_0);
		bool L_1 = (L_0->___Ready_2);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		float L_2 = (__this->___Charging_12);
		float L_3 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		float L_4 = (__this->___ChargeMax_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_5 = Mathf_Clamp_m660(NULL /*static, unused*/, ((float)((float)L_2+(float)L_3)), (0.0f), L_4, /*hidden argument*/&Mathf_Clamp_m660_MethodInfo);
		__this->___Charging_12 = L_5;
		goto IL_0042;
	}

IL_0037:
	{
		__this->___Charging_12 = (0.0f);
	}

IL_0042:
	{
		Vector3_t5  L_6 = (__this->___curAcc_7);
		LiquidBehavior_t24 * L_7 = (__this->___Accelerometer_14);
		NullCheck(L_7);
		Vector3_t5  L_8 = (L_7->___Accel_9);
		float L_9 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		float L_10 = (__this->___fHigh_6);
		Vector3_t5  L_11 = Vector3_Lerp_m507(NULL /*static, unused*/, L_6, L_8, ((float)((float)L_9*(float)L_10)), /*hidden argument*/&Vector3_Lerp_m507_MethodInfo);
		__this->___curAcc_7 = L_11;
		Vector3_t5  L_12 = (__this->___avgAcc_8);
		LiquidBehavior_t24 * L_13 = (__this->___Accelerometer_14);
		NullCheck(L_13);
		Vector3_t5  L_14 = (L_13->___Accel_9);
		float L_15 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		float L_16 = (__this->___fLow_5);
		Vector3_t5  L_17 = Vector3_Lerp_m507(NULL /*static, unused*/, L_12, L_14, ((float)((float)L_15*(float)L_16)), /*hidden argument*/&Vector3_Lerp_m507_MethodInfo);
		__this->___avgAcc_8 = L_17;
		Vector3_t5 * L_18 = &(__this->___curAcc_7);
		float L_19 = Vector3_get_magnitude_m542(L_18, /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		Vector3_t5 * L_20 = &(__this->___avgAcc_8);
		float L_21 = Vector3_get_magnitude_m542(L_20, /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		V_0 = ((float)((float)L_19-(float)L_21));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_22 = Input_GetKey_m534(NULL /*static, unused*/, (String_t*) &_stringLiteral19, /*hidden argument*/&Input_GetKey_m534_MethodInfo);
		if (!L_22)
		{
			goto IL_00bf;
		}
	}
	{
		V_0 = (1000.0f);
	}

IL_00bf:
	{
		bool L_23 = (__this->___stateH_4);
		if (L_23)
		{
			goto IL_019f;
		}
	}
	{
		float L_24 = V_0;
		float L_25 = (__this->___hiLim_3);
		if ((!(((float)L_24) > ((float)L_25))))
		{
			goto IL_0175;
		}
	}
	{
		float L_26 = (__this->___Charging_12);
		float L_27 = (__this->___ChargeMax_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_28 = fabsf(((float)((float)L_26-(float)L_27)));
		if ((!(((float)L_28) < ((float)(0.001f)))))
		{
			goto IL_0175;
		}
	}
	{
		Player_t38 * L_29 = (__this->___Player_16);
		NullCheck(L_29);
		bool L_30 = (L_29->___Ready_2);
		if (!L_30)
		{
			goto IL_0175;
		}
	}
	{
		__this->___stateH_4 = 1;
		int32_t L_31 = (__this->___counts_9);
		__this->___counts_9 = ((int32_t)((int32_t)L_31+(int32_t)1));
		GameObject_t7 * L_32 = (__this->___Bullet_15);
		Transform_t2 * L_33 = (__this->___SpawnPoint_13);
		NullCheck(L_33);
		Vector3_t5  L_34 = Transform_get_position_m506(L_33, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Quaternion_t10  L_35 = Quaternion_get_identity_m615(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m615_MethodInfo);
		Object_t172 * L_36 = Object_Instantiate_m661(NULL /*static, unused*/, L_32, L_34, L_35, /*hidden argument*/&Object_Instantiate_m661_MethodInfo);
		V_1 = ((GameObject_t7 *)IsInst(L_36, InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo)));
		GameObject_t7 * L_37 = V_1;
		NullCheck(L_37);
		Rigidbody_t18 * L_38 = GameObject_GetComponent_TisRigidbody_t18_m663(L_37, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t18_m663_MethodInfo_var);
		Transform_t2 * L_39 = (__this->___SpawnPoint_13);
		NullCheck(L_39);
		Vector3_t5  L_40 = Transform_get_forward_m535(L_39, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		float L_41 = (__this->___VelocityMult_10);
		Vector3_t5  L_42 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		NullCheck(L_38);
		Rigidbody_set_velocity_m554(L_38, L_42, /*hidden argument*/&Rigidbody_set_velocity_m554_MethodInfo);
		List_1_t31 * L_43 = (__this->___bullets_17);
		GameObject_t7 * L_44 = V_1;
		NullCheck(L_43);
		VirtActionInvoker1< GameObject_t7 * >::Invoke(List_1_Add_m635_MethodInfo_var, L_43, L_44);
		__this->___Charging_12 = (0.0f);
		goto IL_0198;
	}

IL_0175:
	{
		float L_45 = V_0;
		float L_46 = (__this->___loLim_2);
		if ((((float)L_45) < ((float)L_46)))
		{
			goto IL_0191;
		}
	}
	{
		Player_t38 * L_47 = (__this->___Player_16);
		NullCheck(L_47);
		bool L_48 = (L_47->___Ready_2);
		if (L_48)
		{
			goto IL_0198;
		}
	}

IL_0191:
	{
		__this->___stateH_4 = 0;
	}

IL_0198:
	{
		__this->___stateH_4 = 0;
	}

IL_019f:
	{
		Vector3_t5  L_49 = (__this->___curAcc_7);
		__this->___avgAcc_8 = L_49;
		return;
	}
}
// System.Void Realiteer.PlayerTossModule::DestroyBullets()
extern MethodInfo PlayerTossModule_DestroyBullets_m102_MethodInfo;
extern TypeInfo* Enumerator_t174_il2cpp_TypeInfo_var;
extern MethodInfo* List_1_GetEnumerator_m641_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m642_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m643_MethodInfo_var;
extern MethodInfo* List_1_Clear_m627_MethodInfo_var;
extern "C" void PlayerTossModule_DestroyBullets_m102 (PlayerTossModule_t37 * __this, MethodInfo* method)
{
	static bool PlayerTossModule_DestroyBullets_m102_init;
	if (!PlayerTossModule_DestroyBullets_m102_init)
	{
		Enumerator_t174_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t174_0_0_0);
		List_1_GetEnumerator_m641_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m641_GenericMethod);
		Enumerator_get_Current_m642_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m642_GenericMethod);
		Enumerator_MoveNext_m643_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m643_GenericMethod);
		List_1_Clear_m627_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m627_GenericMethod);
		PlayerTossModule_DestroyBullets_m102_init = true;
	}
	GameObject_t7 * V_0 = {0};
	Enumerator_t174  V_1 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t31 * L_0 = (__this->___bullets_17);
		NullCheck(L_0);
		Enumerator_t174  L_1 = List_1_GetEnumerator_m641(L_0, /*hidden argument*/List_1_GetEnumerator_m641_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0011:
		{
			GameObject_t7 * L_2 = Enumerator_get_Current_m642((&V_1), /*hidden argument*/Enumerator_get_Current_m642_MethodInfo_var);
			V_0 = L_2;
			GameObject_t7 * L_3 = V_0;
			Object_Destroy_m625(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_Destroy_m625_MethodInfo);
		}

IL_001f:
		{
			bool L_4 = Enumerator_MoveNext_m643((&V_1), /*hidden argument*/Enumerator_MoveNext_m643_MethodInfo_var);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_t174  L_5 = V_1;
		Enumerator_t174  L_6 = L_5;
		Object_t * L_7 = Box(Enumerator_t174_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_7);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_003c:
	{
		List_1_t31 * L_8 = (__this->___bullets_17);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(List_1_Clear_m627_MethodInfo_var, L_8);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void StareInputModule/StareEvent::.ctor(System.Object,System.IntPtr)
extern "C" void StareEvent__ctor_m103 (StareEvent_t44 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void StareInputModule/StareEvent::Invoke(UnityEngine.GameObject,UnityEngine.Camera,System.Single)
extern MethodInfo StareEvent_Invoke_m104_MethodInfo;
extern "C" void StareEvent_Invoke_m104 (StareEvent_t44 * __this, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___distance, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StareEvent_Invoke_m104((StareEvent_t44 *)__this->___prev_9,___obj, ___cam, ___distance, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___distance, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj, ___cam, ___distance,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___distance, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj, ___cam, ___distance,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Camera_t15 * ___cam, float ___distance, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___obj, ___cam, ___distance,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_StareEvent_t44(Il2CppObject* delegate, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___distance)
{
	// Marshaling of parameter '___obj' to native representation
	GameObject_t7 * ____obj_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'UnityEngine.GameObject'."));
}
// System.IAsyncResult StareInputModule/StareEvent::BeginInvoke(UnityEngine.GameObject,UnityEngine.Camera,System.Single,System.AsyncCallback,System.Object)
extern MethodInfo StareEvent_BeginInvoke_m105_MethodInfo;
extern "C" Object_t * StareEvent_BeginInvoke_m105 (StareEvent_t44 * __this, GameObject_t7 * ___obj, Camera_t15 * ___cam, float ___distance, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___obj;
	__d_args[1] = ___cam;
	__d_args[2] = Box(InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo), &___distance);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void StareInputModule/StareEvent::EndInvoke(System.IAsyncResult)
extern MethodInfo StareEvent_EndInvoke_m106_MethodInfo;
extern "C" void StareEvent_EndInvoke_m106 (StareEvent_t44 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StareInputModule_t16_il2cpp_TypeInfo;

// System.Delegate
#include "mscorlib_System_Delegate.h"
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_2.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_0.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_1.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_2.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_3.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_4.h"
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_5.h"
extern TypeInfo BaseInputModule_t47_il2cpp_TypeInfo;
extern TypeInfo Cardboard_t67_il2cpp_TypeInfo;
extern TypeInfo BaseEventData_t20_il2cpp_TypeInfo;
extern TypeInfo PointerEventData_t46_il2cpp_TypeInfo;
extern TypeInfo List_1_t181_il2cpp_TypeInfo;
extern TypeInfo RaycastResult_t182_il2cpp_TypeInfo;
extern TypeInfo ExecuteEvents_t183_il2cpp_TypeInfo;
extern TypeInfo Camera_t15_il2cpp_TypeInfo;
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModuleMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// UnityEngine.EventSystems.EventSystem
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSystemMethodDeclarations.h"
// UnityEngine.EventSystems.PointerEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventDataMethodDeclarations.h"
// UnityEngine.EventSystems.BaseEventData
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventDataMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResultMethodDeclarations.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMaskMethodDeclarations.h"
// UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEventsMethodDeclarations.h"
extern Il2CppType List_1_t181_0_0_0;
extern MethodInfo BaseInputModule__ctor_m664_MethodInfo;
extern MethodInfo Delegate_Combine_m665_MethodInfo;
extern MethodInfo Delegate_Remove_m666_MethodInfo;
extern MethodInfo BaseInputModule_ShouldActivateModule_m667_MethodInfo;
extern MethodInfo Cardboard_get_SDK_m179_MethodInfo;
extern MethodInfo BaseInputModule_DeactivateModule_m668_MethodInfo;
extern MethodInfo StareInputModule_HandlePendingClick_m118_MethodInfo;
extern MethodInfo BaseInputModule_HandlePointerExitAndEnter_m669_MethodInfo;
extern MethodInfo BaseInputModule_get_eventSystem_m670_MethodInfo;
extern MethodInfo BaseInputModule_GetBaseEventData_m671_MethodInfo;
extern MethodInfo EventSystem_SetSelectedGameObject_m672_MethodInfo;
extern MethodInfo PointerEventData_get_pointerEnter_m673_MethodInfo;
extern MethodInfo GameObject__ctor_m674_MethodInfo;
extern MethodInfo Behaviour_get_enabled_m675_MethodInfo;
extern MethodInfo StareInputModule_CastRayFromGaze_m115_MethodInfo;
extern MethodInfo StareInputModule_UpdateCurrentObject_m116_MethodInfo;
extern MethodInfo StareInputModule_PlaceCursor_m117_MethodInfo;
extern MethodInfo StareInputModule_HandleTrigger_m119_MethodInfo;
extern MethodInfo PointerEventData__ctor_m676_MethodInfo;
extern MethodInfo BaseEventData_Reset_m677_MethodInfo;
extern MethodInfo Screen_get_width_m678_MethodInfo;
extern MethodInfo Screen_get_height_m679_MethodInfo;
extern MethodInfo PointerEventData_set_position_m680_MethodInfo;
extern MethodInfo EventSystem_RaycastAll_m681_MethodInfo;
extern MethodInfo BaseInputModule_FindFirstRaycast_m682_MethodInfo;
extern MethodInfo PointerEventData_set_pointerCurrentRaycast_m683_MethodInfo;
extern MethodInfo PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo;
extern MethodInfo List_1_Remove_m685_MethodInfo;
extern MethodInfo RaycastResult_get_gameObject_m686_MethodInfo;
extern MethodInfo GameObject_get_layer_m687_MethodInfo;
extern MethodInfo LayerMask_NameToLayer_m688_MethodInfo;
extern MethodInfo List_1_Clear_m689_MethodInfo;
extern MethodInfo EventSystem_get_currentSelectedGameObject_m690_MethodInfo;
extern MethodInfo ExecuteEvents_get_updateSelectedHandler_m691_MethodInfo;
extern MethodInfo Time_get_fixedDeltaTime_m692_MethodInfo;
extern MethodInfo GameObject_get_activeInHierarchy_m693_MethodInfo;
extern MethodInfo PointerEventData_get_enterEventCamera_m694_MethodInfo;
extern MethodInfo PointerEventData_get_eligibleForClick_m695_MethodInfo;
extern MethodInfo PointerEventData_get_pointerPress_m696_MethodInfo;
extern MethodInfo ExecuteEvents_get_dragHandler_m697_MethodInfo;
extern MethodInfo ExecuteEvents_get_beginDragHandler_m698_MethodInfo;
extern MethodInfo ExecuteEvents_get_pointerUpHandler_m699_MethodInfo;
extern MethodInfo ExecuteEvents_get_endDragHandler_m700_MethodInfo;
extern MethodInfo PointerEventData_set_pointerPress_m701_MethodInfo;
extern MethodInfo PointerEventData_set_rawPointerPress_m702_MethodInfo;
extern MethodInfo PointerEventData_set_eligibleForClick_m703_MethodInfo;
extern MethodInfo PointerEventData_set_clickCount_m704_MethodInfo;
extern MethodInfo PointerEventData_get_position_m705_MethodInfo;
extern MethodInfo PointerEventData_set_pressPosition_m706_MethodInfo;
extern MethodInfo PointerEventData_set_pointerPressRaycast_m707_MethodInfo;
extern MethodInfo ExecuteEvents_get_pointerDownHandler_m708_MethodInfo;
extern MethodInfo PointerEventData_get_clickCount_m709_MethodInfo;
extern MethodInfo ExecuteEvents_get_pointerClickHandler_m710_MethodInfo;
extern MethodInfo Time_get_unscaledTime_m711_MethodInfo;
extern MethodInfo PointerEventData_set_clickTime_m712_MethodInfo;
struct ExecuteEvents_t183;
// UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents.h"
struct ExecuteEvents_t183;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
extern "C" GameObject_t7 * ExecuteEvents_GetEventHandler_TisObject_t_m714_gshared (Object_t * __this /* static, unused */, GameObject_t7 * p0, MethodInfo* method);
#define ExecuteEvents_GetEventHandler_TisObject_t_m714(__this /* static, unused */, p0, method) (( GameObject_t7 * (*) (Object_t * /* static, unused */, GameObject_t7 *, MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m714_gshared)(__this /* static, unused */, p0, method)
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.ISelectHandler>(UnityEngine.GameObject)
#define ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713(__this /* static, unused */, p0, method) (( GameObject_t7 * (*) (Object_t * /* static, unused */, GameObject_t7 *, MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m714_gshared)(__this /* static, unused */, p0, method)
struct ExecuteEvents_t183;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
#include "mscorlib_System_Collections_Generic_List_1_gen_3.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
struct ExecuteEvents_t183;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_6.h"
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
extern "C" bool ExecuteEvents_Execute_TisObject_t_m716_gshared (Object_t * __this /* static, unused */, GameObject_t7 * p0, BaseEventData_t20 * p1, EventFunction_1_t186 * p2, MethodInfo* method);
#define ExecuteEvents_Execute_TisObject_t_m716(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t186 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m716_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t187 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m716_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t183;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIDragHandler_t188_m717(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t189 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m716_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t183;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IBeginDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IBeginDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIBeginDragHandler_t190_m718(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t191 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m716_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t183;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t193 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m716_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t183;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IEndDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IEndDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIEndDragHandler_t194_m720(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t195 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m716_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t183;
// System.Collections.Generic.List`1<UnityEngine.Transform>
#include "mscorlib_System_Collections_Generic_List_1_gen_4.h"
struct ExecuteEvents_t183;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
extern "C" GameObject_t7 * ExecuteEvents_ExecuteHierarchy_TisObject_t_m722_gshared (Object_t * __this /* static, unused */, GameObject_t7 * p0, BaseEventData_t20 * p1, EventFunction_1_t186 * p2, MethodInfo* method);
#define ExecuteEvents_ExecuteHierarchy_TisObject_t_m722(__this /* static, unused */, p0, p1, p2, method) (( GameObject_t7 * (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t186 *, MethodInfo*))ExecuteEvents_ExecuteHierarchy_TisObject_t_m722_gshared)(__this /* static, unused */, p0, p1, p2, method)
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721(__this /* static, unused */, p0, p1, p2, method) (( GameObject_t7 * (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t197 *, MethodInfo*))ExecuteEvents_ExecuteHierarchy_TisObject_t_m722_gshared)(__this /* static, unused */, p0, p1, p2, method)
struct ExecuteEvents_t183;
// Declaration UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
#define ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723(__this /* static, unused */, p0, method) (( GameObject_t7 * (*) (Object_t * /* static, unused */, GameObject_t7 *, MethodInfo*))ExecuteEvents_GetEventHandler_TisObject_t_m714_gshared)(__this /* static, unused */, p0, method)
struct ExecuteEvents_t183;
// Declaration System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
#define ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724(__this /* static, unused */, p0, p1, p2, method) (( bool (*) (Object_t * /* static, unused */, GameObject_t7 *, BaseEventData_t20 *, EventFunction_1_t199 *, MethodInfo*))ExecuteEvents_Execute_TisObject_t_m716_gshared)(__this /* static, unused */, p0, p1, p2, method)
extern Il2CppGenericMethod List_1_Remove_m685_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m689_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIDragHandler_t188_m717_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIBeginDragHandler_t190_m718_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIEndDragHandler_t194_m720_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_GenericMethod;
extern Il2CppGenericMethod ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_GenericMethod;


// System.Void StareInputModule::.ctor()
extern MethodInfo StareInputModule__ctor_m107_MethodInfo;
extern "C" void StareInputModule__ctor_m107 (StareInputModule_t16 * __this, MethodInfo* method)
{
	{
		__this->___chargeTimeDown_9 = (1.0f);
		__this->___clickTime_11 = (0.1f);
		Vector2_t48  L_0 = {0};
		Vector2__ctor_m588(&L_0, (0.5f), (0.5f), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		__this->___hotspot_12 = L_0;
		BaseInputModule__ctor_m664(__this, /*hidden argument*/&BaseInputModule__ctor_m664_MethodInfo);
		return;
	}
}
// System.Void StareInputModule::add_OnStare(StareInputModule/StareEvent)
extern "C" void StareInputModule_add_OnStare_m108 (Object_t * __this /* static, unused */, StareEvent_t44 * ___value, MethodInfo* method)
{
	{
		StareEvent_t44 * L_0 = ((StareInputModule_t16_StaticFields*)InitializedTypeInfo(&StareInputModule_t16_il2cpp_TypeInfo)->static_fields)->___OnStare_14;
		StareEvent_t44 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Combine_m665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		((StareInputModule_t16_StaticFields*)InitializedTypeInfo(&StareInputModule_t16_il2cpp_TypeInfo)->static_fields)->___OnStare_14 = ((StareEvent_t44 *)Castclass(L_2, InitializedTypeInfo(&StareEvent_t44_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void StareInputModule::remove_OnStare(StareInputModule/StareEvent)
extern MethodInfo StareInputModule_remove_OnStare_m109_MethodInfo;
extern "C" void StareInputModule_remove_OnStare_m109 (Object_t * __this /* static, unused */, StareEvent_t44 * ___value, MethodInfo* method)
{
	{
		StareEvent_t44 * L_0 = ((StareInputModule_t16_StaticFields*)InitializedTypeInfo(&StareInputModule_t16_il2cpp_TypeInfo)->static_fields)->___OnStare_14;
		StareEvent_t44 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Remove_m666(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m666_MethodInfo);
		((StareInputModule_t16_StaticFields*)InitializedTypeInfo(&StareInputModule_t16_il2cpp_TypeInfo)->static_fields)->___OnStare_14 = ((StareEvent_t44 *)Castclass(L_2, InitializedTypeInfo(&StareEvent_t44_il2cpp_TypeInfo)));
		return;
	}
}
// System.Boolean StareInputModule::ShouldActivateModule()
extern MethodInfo StareInputModule_ShouldActivateModule_m110_MethodInfo;
extern "C" bool StareInputModule_ShouldActivateModule_m110 (StareInputModule_t16 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		bool L_0 = BaseInputModule_ShouldActivateModule_m667(__this, /*hidden argument*/&BaseInputModule_ShouldActivateModule_m667_MethodInfo);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_1 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m182(L_1, /*hidden argument*/&Cardboard_get_VRModeEnabled_m182_MethodInfo);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = (__this->___vrModeOnly_6);
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 1;
	}

IL_0028:
	{
		return G_B5_0;
	}
}
// System.Void StareInputModule::DeactivateModule()
extern MethodInfo StareInputModule_DeactivateModule_m111_MethodInfo;
extern "C" void StareInputModule_DeactivateModule_m111 (StareInputModule_t16 * __this, MethodInfo* method)
{
	{
		BaseInputModule_DeactivateModule_m668(__this, /*hidden argument*/&BaseInputModule_DeactivateModule_m668_MethodInfo);
		PointerEventData_t46 * L_0 = (__this->___pointerData_13);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		StareInputModule_HandlePendingClick_m118(__this, /*hidden argument*/&StareInputModule_HandlePendingClick_m118_MethodInfo);
		PointerEventData_t46 * L_1 = (__this->___pointerData_13);
		BaseInputModule_HandlePointerExitAndEnter_m669(__this, L_1, (GameObject_t7 *)NULL, /*hidden argument*/&BaseInputModule_HandlePointerExitAndEnter_m669_MethodInfo);
		__this->___pointerData_13 = (PointerEventData_t46 *)NULL;
	}

IL_002b:
	{
		EventSystem_t171 * L_2 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		BaseEventData_t20 * L_3 = (BaseEventData_t20 *)VirtFuncInvoker0< BaseEventData_t20 * >::Invoke(&BaseInputModule_GetBaseEventData_m671_MethodInfo, __this);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m672(L_2, (GameObject_t7 *)NULL, L_3, /*hidden argument*/&EventSystem_SetSelectedGameObject_m672_MethodInfo);
		Cursor_t13 * L_4 = (__this->___cursor_7);
		bool L_5 = Object_op_Inequality_m527(NULL /*static, unused*/, L_4, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		Cursor_t13 * L_6 = (__this->___cursor_7);
		NullCheck(L_6);
		GameObject_t7 * L_7 = Component_get_gameObject_m596(L_6, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_7);
		GameObject_SetActive_m522(L_7, 0, /*hidden argument*/&GameObject_SetActive_m522_MethodInfo);
	}

IL_005f:
	{
		return;
	}
}
// System.Boolean StareInputModule::IsPointerOverGameObject(System.Int32)
extern MethodInfo StareInputModule_IsPointerOverGameObject_m112_MethodInfo;
extern "C" bool StareInputModule_IsPointerOverGameObject_m112 (StareInputModule_t16 * __this, int32_t ___pointerId, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		PointerEventData_t46 * L_0 = (__this->___pointerData_13);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		PointerEventData_t46 * L_1 = (__this->___pointerData_13);
		NullCheck(L_1);
		GameObject_t7 * L_2 = PointerEventData_get_pointerEnter_m673(L_1, /*hidden argument*/&PointerEventData_get_pointerEnter_m673_MethodInfo);
		bool L_3 = Object_op_Inequality_m527(NULL /*static, unused*/, L_2, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// UnityEngine.GameObject StareInputModule::CurrentHoverObject()
extern MethodInfo StareInputModule_CurrentHoverObject_m113_MethodInfo;
extern "C" GameObject_t7 * StareInputModule_CurrentHoverObject_m113 (StareInputModule_t16 * __this, MethodInfo* method)
{
	GameObject_t7 * V_0 = {0};
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral20, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		GameObject_t7 * L_0 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m674(L_0, /*hidden argument*/&GameObject__ctor_m674_MethodInfo);
		V_0 = L_0;
		GameObject_t7 * L_1 = V_0;
		return L_1;
	}
}
// System.Void StareInputModule::Process()
extern MethodInfo StareInputModule_Process_m114_MethodInfo;
extern "C" void StareInputModule_Process_m114 (StareInputModule_t16 * __this, MethodInfo* method)
{
	{
		bool L_0 = Behaviour_get_enabled_m675(__this, /*hidden argument*/&Behaviour_get_enabled_m675_MethodInfo);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		StareInputModule_CastRayFromGaze_m115(__this, /*hidden argument*/&StareInputModule_CastRayFromGaze_m115_MethodInfo);
		StareInputModule_UpdateCurrentObject_m116(__this, /*hidden argument*/&StareInputModule_UpdateCurrentObject_m116_MethodInfo);
		StareInputModule_PlaceCursor_m117(__this, /*hidden argument*/&StareInputModule_PlaceCursor_m117_MethodInfo);
		StareInputModule_HandlePendingClick_m118(__this, /*hidden argument*/&StareInputModule_HandlePendingClick_m118_MethodInfo);
		StareInputModule_HandleTrigger_m119(__this, /*hidden argument*/&StareInputModule_HandleTrigger_m119_MethodInfo);
		return;
	}
}
// System.Void StareInputModule::CastRayFromGaze()
extern MethodInfo* List_1_Remove_m685_MethodInfo_var;
extern MethodInfo* List_1_Clear_m689_MethodInfo_var;
extern "C" void StareInputModule_CastRayFromGaze_m115 (StareInputModule_t16 * __this, MethodInfo* method)
{
	static bool StareInputModule_CastRayFromGaze_m115_init;
	if (!StareInputModule_CastRayFromGaze_m115_init)
	{
		List_1_Remove_m685_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Remove_m685_GenericMethod);
		List_1_Clear_m689_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m689_GenericMethod);
		StareInputModule_CastRayFromGaze_m115_init = true;
	}
	RaycastResult_t182  V_0 = {0};
	RaycastResult_t182  V_1 = {0};
	{
		PointerEventData_t46 * L_0 = (__this->___pointerData_13);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		EventSystem_t171 * L_1 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		PointerEventData_t46 * L_2 = (PointerEventData_t46 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PointerEventData_t46_il2cpp_TypeInfo));
		PointerEventData__ctor_m676(L_2, L_1, /*hidden argument*/&PointerEventData__ctor_m676_MethodInfo);
		__this->___pointerData_13 = L_2;
	}

IL_001c:
	{
		PointerEventData_t46 * L_3 = (__this->___pointerData_13);
		NullCheck(L_3);
		BaseEventData_Reset_m677(L_3, /*hidden argument*/&BaseEventData_Reset_m677_MethodInfo);
		PointerEventData_t46 * L_4 = (__this->___pointerData_13);
		Vector2_t48 * L_5 = &(__this->___hotspot_12);
		float L_6 = (L_5->___x_1);
		int32_t L_7 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		Vector2_t48 * L_8 = &(__this->___hotspot_12);
		float L_9 = (L_8->___y_2);
		int32_t L_10 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Vector2_t48  L_11 = {0};
		Vector2__ctor_m588(&L_11, ((float)((float)L_6*(float)(((float)L_7)))), ((float)((float)L_9*(float)(((float)L_10)))), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		NullCheck(L_4);
		PointerEventData_set_position_m680(L_4, L_11, /*hidden argument*/&PointerEventData_set_position_m680_MethodInfo);
		EventSystem_t171 * L_12 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		PointerEventData_t46 * L_13 = (__this->___pointerData_13);
		List_1_t181 * L_14 = (__this->___m_RaycastResultCache_2);
		NullCheck(L_12);
		EventSystem_RaycastAll_m681(L_12, L_13, L_14, /*hidden argument*/&EventSystem_RaycastAll_m681_MethodInfo);
		PointerEventData_t46 * L_15 = (__this->___pointerData_13);
		List_1_t181 * L_16 = (__this->___m_RaycastResultCache_2);
		RaycastResult_t182  L_17 = BaseInputModule_FindFirstRaycast_m682(NULL /*static, unused*/, L_16, /*hidden argument*/&BaseInputModule_FindFirstRaycast_m682_MethodInfo);
		NullCheck(L_15);
		PointerEventData_set_pointerCurrentRaycast_m683(L_15, L_17, /*hidden argument*/&PointerEventData_set_pointerCurrentRaycast_m683_MethodInfo);
		goto IL_00ba;
	}

IL_008d:
	{
		List_1_t181 * L_18 = (__this->___m_RaycastResultCache_2);
		PointerEventData_t46 * L_19 = (__this->___pointerData_13);
		NullCheck(L_19);
		RaycastResult_t182  L_20 = PointerEventData_get_pointerCurrentRaycast_m684(L_19, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		NullCheck(L_18);
		VirtFuncInvoker1< bool, RaycastResult_t182  >::Invoke(List_1_Remove_m685_MethodInfo_var, L_18, L_20);
		PointerEventData_t46 * L_21 = (__this->___pointerData_13);
		List_1_t181 * L_22 = (__this->___m_RaycastResultCache_2);
		RaycastResult_t182  L_23 = BaseInputModule_FindFirstRaycast_m682(NULL /*static, unused*/, L_22, /*hidden argument*/&BaseInputModule_FindFirstRaycast_m682_MethodInfo);
		NullCheck(L_21);
		PointerEventData_set_pointerCurrentRaycast_m683(L_21, L_23, /*hidden argument*/&PointerEventData_set_pointerCurrentRaycast_m683_MethodInfo);
	}

IL_00ba:
	{
		PointerEventData_t46 * L_24 = (__this->___pointerData_13);
		NullCheck(L_24);
		RaycastResult_t182  L_25 = PointerEventData_get_pointerCurrentRaycast_m684(L_24, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_0 = L_25;
		GameObject_t7 * L_26 = RaycastResult_get_gameObject_m686((&V_0), /*hidden argument*/&RaycastResult_get_gameObject_m686_MethodInfo);
		bool L_27 = Object_op_Inequality_m527(NULL /*static, unused*/, L_26, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_27)
		{
			goto IL_00ff;
		}
	}
	{
		PointerEventData_t46 * L_28 = (__this->___pointerData_13);
		NullCheck(L_28);
		RaycastResult_t182  L_29 = PointerEventData_get_pointerCurrentRaycast_m684(L_28, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_1 = L_29;
		GameObject_t7 * L_30 = RaycastResult_get_gameObject_m686((&V_1), /*hidden argument*/&RaycastResult_get_gameObject_m686_MethodInfo);
		NullCheck(L_30);
		int32_t L_31 = GameObject_get_layer_m687(L_30, /*hidden argument*/&GameObject_get_layer_m687_MethodInfo);
		int32_t L_32 = LayerMask_NameToLayer_m688(NULL /*static, unused*/, (String_t*) &_stringLiteral21, /*hidden argument*/&LayerMask_NameToLayer_m688_MethodInfo);
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_008d;
		}
	}

IL_00ff:
	{
		List_1_t181 * L_33 = (__this->___m_RaycastResultCache_2);
		NullCheck(L_33);
		VirtActionInvoker0::Invoke(List_1_Clear_m689_MethodInfo_var, L_33);
		return;
	}
}
// System.Void StareInputModule::UpdateCurrentObject()
extern MethodInfo* ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_MethodInfo_var;
extern "C" void StareInputModule_UpdateCurrentObject_m116 (StareInputModule_t16 * __this, MethodInfo* method)
{
	static bool StareInputModule_UpdateCurrentObject_m116_init;
	if (!StareInputModule_UpdateCurrentObject_m116_init)
	{
		ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_GenericMethod);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_GenericMethod);
		StareInputModule_UpdateCurrentObject_m116_init = true;
	}
	GameObject_t7 * V_0 = {0};
	GameObject_t7 * V_1 = {0};
	RaycastResult_t182  V_2 = {0};
	{
		PointerEventData_t46 * L_0 = (__this->___pointerData_13);
		NullCheck(L_0);
		RaycastResult_t182  L_1 = PointerEventData_get_pointerCurrentRaycast_m684(L_0, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_2 = L_1;
		GameObject_t7 * L_2 = RaycastResult_get_gameObject_m686((&V_2), /*hidden argument*/&RaycastResult_get_gameObject_m686_MethodInfo);
		V_0 = L_2;
		PointerEventData_t46 * L_3 = (__this->___pointerData_13);
		GameObject_t7 * L_4 = V_0;
		BaseInputModule_HandlePointerExitAndEnter_m669(__this, L_3, L_4, /*hidden argument*/&BaseInputModule_HandlePointerExitAndEnter_m669_MethodInfo);
		GameObject_t7 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		GameObject_t7 * L_6 = ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713(NULL /*static, unused*/, L_5, /*hidden argument*/ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_MethodInfo_var);
		V_1 = L_6;
		GameObject_t7 * L_7 = V_1;
		EventSystem_t171 * L_8 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		NullCheck(L_8);
		GameObject_t7 * L_9 = EventSystem_get_currentSelectedGameObject_m690(L_8, /*hidden argument*/&EventSystem_get_currentSelectedGameObject_m690_MethodInfo);
		bool L_10 = Object_op_Equality_m528(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		EventSystem_t171 * L_11 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		NullCheck(L_11);
		GameObject_t7 * L_12 = EventSystem_get_currentSelectedGameObject_m690(L_11, /*hidden argument*/&EventSystem_get_currentSelectedGameObject_m690_MethodInfo);
		BaseEventData_t20 * L_13 = (BaseEventData_t20 *)VirtFuncInvoker0< BaseEventData_t20 * >::Invoke(&BaseInputModule_GetBaseEventData_m671_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		EventFunction_1_t187 * L_14 = ExecuteEvents_get_updateSelectedHandler_m691(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_updateSelectedHandler_m691_MethodInfo);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_MethodInfo_var);
		__this->___chargeTime_8 = (0.0f);
		Cursor_t13 * L_15 = (__this->___cursor_7);
		NullCheck(L_15);
		Cursor_SetProgress_m17(L_15, (0.0f), /*hidden argument*/&Cursor_SetProgress_m17_MethodInfo);
		goto IL_00ea;
	}

IL_007a:
	{
		EventSystem_t171 * L_16 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		PointerEventData_t46 * L_17 = (__this->___pointerData_13);
		NullCheck(L_16);
		EventSystem_SetSelectedGameObject_m672(L_16, (GameObject_t7 *)NULL, L_17, /*hidden argument*/&EventSystem_SetSelectedGameObject_m672_MethodInfo);
		float L_18 = (__this->___chargeTime_8);
		float L_19 = Time_get_fixedDeltaTime_m692(NULL /*static, unused*/, /*hidden argument*/&Time_get_fixedDeltaTime_m692_MethodInfo);
		__this->___chargeTime_8 = ((float)((float)L_18+(float)L_19));
		float L_20 = (__this->___chargeTime_8);
		float L_21 = (__this->___chargeTimeDown_9);
		if ((!(((float)L_20) > ((float)L_21))))
		{
			goto IL_00cb;
		}
	}
	{
		__this->___stared_10 = 1;
		Cursor_t13 * L_22 = (__this->___cursor_7);
		NullCheck(L_22);
		Cursor_SetProgress_m17(L_22, (1.0f), /*hidden argument*/&Cursor_SetProgress_m17_MethodInfo);
		goto IL_00ea;
	}

IL_00cb:
	{
		__this->___stared_10 = 0;
		Cursor_t13 * L_23 = (__this->___cursor_7);
		float L_24 = (__this->___chargeTime_8);
		float L_25 = (__this->___chargeTimeDown_9);
		NullCheck(L_23);
		Cursor_SetProgress_m17(L_23, ((float)((float)L_24/(float)L_25)), /*hidden argument*/&Cursor_SetProgress_m17_MethodInfo);
	}

IL_00ea:
	{
		return;
	}
}
// System.Void StareInputModule::PlaceCursor()
extern "C" void StareInputModule_PlaceCursor_m117 (StareInputModule_t16 * __this, MethodInfo* method)
{
	GameObject_t7 * V_0 = {0};
	Camera_t15 * V_1 = {0};
	float V_2 = 0.0f;
	RaycastResult_t182  V_3 = {0};
	RaycastResult_t182  V_4 = {0};
	{
		Cursor_t13 * L_0 = (__this->___cursor_7);
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		PointerEventData_t46 * L_2 = (__this->___pointerData_13);
		NullCheck(L_2);
		RaycastResult_t182  L_3 = PointerEventData_get_pointerCurrentRaycast_m684(L_2, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_3 = L_3;
		GameObject_t7 * L_4 = RaycastResult_get_gameObject_m686((&V_3), /*hidden argument*/&RaycastResult_get_gameObject_m686_MethodInfo);
		V_0 = L_4;
		Cursor_t13 * L_5 = (__this->___cursor_7);
		NullCheck(L_5);
		GameObject_t7 * L_6 = Component_get_gameObject_m596(L_5, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		GameObject_t7 * L_7 = V_0;
		bool L_8 = Object_op_Inequality_m527(NULL /*static, unused*/, L_7, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		NullCheck(L_6);
		GameObject_SetActive_m522(L_6, L_8, /*hidden argument*/&GameObject_SetActive_m522_MethodInfo);
		Cursor_t13 * L_9 = (__this->___cursor_7);
		NullCheck(L_9);
		GameObject_t7 * L_10 = Component_get_gameObject_m596(L_9, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_10);
		bool L_11 = GameObject_get_activeInHierarchy_m693(L_10, /*hidden argument*/&GameObject_get_activeInHierarchy_m693_MethodInfo);
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		PointerEventData_t46 * L_12 = (__this->___pointerData_13);
		NullCheck(L_12);
		Camera_t15 * L_13 = PointerEventData_get_enterEventCamera_m694(L_12, /*hidden argument*/&PointerEventData_get_enterEventCamera_m694_MethodInfo);
		V_1 = L_13;
		PointerEventData_t46 * L_14 = (__this->___pointerData_13);
		NullCheck(L_14);
		RaycastResult_t182  L_15 = PointerEventData_get_pointerCurrentRaycast_m684(L_14, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_4 = L_15;
		float L_16 = ((&V_4)->___distance_2);
		Camera_t15 * L_17 = V_1;
		NullCheck(L_17);
		float L_18 = Camera_get_nearClipPlane_m537(L_17, /*hidden argument*/&Camera_get_nearClipPlane_m537_MethodInfo);
		V_2 = ((float)((float)L_16+(float)L_18));
		Cursor_t13 * L_19 = (__this->___cursor_7);
		Camera_t15 * L_20 = V_1;
		NullCheck(L_20);
		Transform_t2 * L_21 = Component_get_transform_m508(L_20, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_21);
		Vector3_t5  L_22 = Transform_get_position_m506(L_21, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Camera_t15 * L_23 = V_1;
		NullCheck(L_23);
		Transform_t2 * L_24 = Component_get_transform_m508(L_23, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_24);
		Vector3_t5  L_25 = Transform_get_forward_m535(L_24, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		float L_26 = V_2;
		NullCheck(L_19);
		Cursor_SetOffset_m16(L_19, L_22, L_25, L_26, /*hidden argument*/&Cursor_SetOffset_m16_MethodInfo);
	}

IL_009c:
	{
		return;
	}
}
// System.Void StareInputModule::HandlePendingClick()
extern MethodInfo* ExecuteEvents_Execute_TisIDragHandler_t188_m717_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIBeginDragHandler_t190_m718_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIEndDragHandler_t194_m720_MethodInfo_var;
extern "C" void StareInputModule_HandlePendingClick_m118 (StareInputModule_t16 * __this, MethodInfo* method)
{
	static bool StareInputModule_HandlePendingClick_m118_init;
	if (!StareInputModule_HandlePendingClick_m118_init)
	{
		ExecuteEvents_Execute_TisIDragHandler_t188_m717_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIDragHandler_t188_m717_GenericMethod);
		ExecuteEvents_Execute_TisIBeginDragHandler_t190_m718_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIBeginDragHandler_t190_m718_GenericMethod);
		ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_GenericMethod);
		ExecuteEvents_Execute_TisIEndDragHandler_t194_m720_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIEndDragHandler_t194_m720_GenericMethod);
		StareInputModule_HandlePendingClick_m118_init = true;
	}
	{
		PointerEventData_t46 * L_0 = (__this->___pointerData_13);
		NullCheck(L_0);
		bool L_1 = PointerEventData_get_eligibleForClick_m695(L_0, /*hidden argument*/&PointerEventData_get_eligibleForClick_m695_MethodInfo);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		PointerEventData_t46 * L_2 = (__this->___pointerData_13);
		NullCheck(L_2);
		GameObject_t7 * L_3 = PointerEventData_get_pointerPress_m696(L_2, /*hidden argument*/&PointerEventData_get_pointerPress_m696_MethodInfo);
		PointerEventData_t46 * L_4 = (__this->___pointerData_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		EventFunction_1_t189 * L_5 = ExecuteEvents_get_dragHandler_m697(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_dragHandler_m697_MethodInfo);
		ExecuteEvents_Execute_TisIDragHandler_t188_m717(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/ExecuteEvents_Execute_TisIDragHandler_t188_m717_MethodInfo_var);
		PointerEventData_t46 * L_6 = (__this->___pointerData_13);
		NullCheck(L_6);
		GameObject_t7 * L_7 = PointerEventData_get_pointerPress_m696(L_6, /*hidden argument*/&PointerEventData_get_pointerPress_m696_MethodInfo);
		PointerEventData_t46 * L_8 = (__this->___pointerData_13);
		EventFunction_1_t191 * L_9 = ExecuteEvents_get_beginDragHandler_m698(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_beginDragHandler_m698_MethodInfo);
		ExecuteEvents_Execute_TisIBeginDragHandler_t190_m718(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/ExecuteEvents_Execute_TisIBeginDragHandler_t190_m718_MethodInfo_var);
		bool L_10 = (__this->___stared_10);
		if (L_10)
		{
			goto IL_00bc;
		}
	}
	{
		PointerEventData_t46 * L_11 = (__this->___pointerData_13);
		NullCheck(L_11);
		GameObject_t7 * L_12 = PointerEventData_get_pointerPress_m696(L_11, /*hidden argument*/&PointerEventData_get_pointerPress_m696_MethodInfo);
		PointerEventData_t46 * L_13 = (__this->___pointerData_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		EventFunction_1_t193 * L_14 = ExecuteEvents_get_pointerUpHandler_m699(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerUpHandler_m699_MethodInfo);
		ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_MethodInfo_var);
		PointerEventData_t46 * L_15 = (__this->___pointerData_13);
		NullCheck(L_15);
		GameObject_t7 * L_16 = PointerEventData_get_pointerPress_m696(L_15, /*hidden argument*/&PointerEventData_get_pointerPress_m696_MethodInfo);
		PointerEventData_t46 * L_17 = (__this->___pointerData_13);
		EventFunction_1_t195 * L_18 = ExecuteEvents_get_endDragHandler_m700(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_endDragHandler_m700_MethodInfo);
		ExecuteEvents_Execute_TisIEndDragHandler_t194_m720(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/ExecuteEvents_Execute_TisIEndDragHandler_t194_m720_MethodInfo_var);
		PointerEventData_t46 * L_19 = (__this->___pointerData_13);
		NullCheck(L_19);
		PointerEventData_set_pointerPress_m701(L_19, (GameObject_t7 *)NULL, /*hidden argument*/&PointerEventData_set_pointerPress_m701_MethodInfo);
		PointerEventData_t46 * L_20 = (__this->___pointerData_13);
		NullCheck(L_20);
		PointerEventData_set_rawPointerPress_m702(L_20, (GameObject_t7 *)NULL, /*hidden argument*/&PointerEventData_set_rawPointerPress_m702_MethodInfo);
		PointerEventData_t46 * L_21 = (__this->___pointerData_13);
		NullCheck(L_21);
		PointerEventData_set_eligibleForClick_m703(L_21, 0, /*hidden argument*/&PointerEventData_set_eligibleForClick_m703_MethodInfo);
		PointerEventData_t46 * L_22 = (__this->___pointerData_13);
		NullCheck(L_22);
		PointerEventData_set_clickCount_m704(L_22, 0, /*hidden argument*/&PointerEventData_set_clickCount_m704_MethodInfo);
	}

IL_00bc:
	{
		return;
	}
}
// System.Void StareInputModule::HandleTrigger()
extern MethodInfo* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_MethodInfo_var;
extern MethodInfo* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_MethodInfo_var;
extern "C" void StareInputModule_HandleTrigger_m119 (StareInputModule_t16 * __this, MethodInfo* method)
{
	static bool StareInputModule_HandleTrigger_m119_init;
	if (!StareInputModule_HandleTrigger_m119_init)
	{
		ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_GenericMethod);
		ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_GenericMethod);
		ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_GenericMethod);
		StareInputModule_HandleTrigger_m119_init = true;
	}
	GameObject_t7 * V_0 = {0};
	RaycastResult_t182  V_1 = {0};
	RaycastResult_t182  V_2 = {0};
	GameObject_t7 * G_B4_0 = {0};
	PointerEventData_t46 * G_B4_1 = {0};
	GameObject_t7 * G_B3_0 = {0};
	PointerEventData_t46 * G_B3_1 = {0};
	{
		bool L_0 = (__this->___stared_10);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		PointerEventData_t46 * L_1 = (__this->___pointerData_13);
		NullCheck(L_1);
		RaycastResult_t182  L_2 = PointerEventData_get_pointerCurrentRaycast_m684(L_1, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_1 = L_2;
		GameObject_t7 * L_3 = RaycastResult_get_gameObject_m686((&V_1), /*hidden argument*/&RaycastResult_get_gameObject_m686_MethodInfo);
		V_0 = L_3;
		PointerEventData_t46 * L_4 = (__this->___pointerData_13);
		PointerEventData_t46 * L_5 = (__this->___pointerData_13);
		NullCheck(L_5);
		Vector2_t48  L_6 = PointerEventData_get_position_m705(L_5, /*hidden argument*/&PointerEventData_get_position_m705_MethodInfo);
		NullCheck(L_4);
		PointerEventData_set_pressPosition_m706(L_4, L_6, /*hidden argument*/&PointerEventData_set_pressPosition_m706_MethodInfo);
		PointerEventData_t46 * L_7 = (__this->___pointerData_13);
		PointerEventData_t46 * L_8 = (__this->___pointerData_13);
		NullCheck(L_8);
		RaycastResult_t182  L_9 = PointerEventData_get_pointerCurrentRaycast_m684(L_8, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		NullCheck(L_7);
		PointerEventData_set_pointerPressRaycast_m707(L_7, L_9, /*hidden argument*/&PointerEventData_set_pointerPressRaycast_m707_MethodInfo);
		PointerEventData_t46 * L_10 = (__this->___pointerData_13);
		GameObject_t7 * L_11 = V_0;
		PointerEventData_t46 * L_12 = (__this->___pointerData_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		EventFunction_1_t197 * L_13 = ExecuteEvents_get_pointerDownHandler_m708(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerDownHandler_m708_MethodInfo);
		GameObject_t7 * L_14 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_MethodInfo_var);
		GameObject_t7 * L_15 = L_14;
		G_B3_0 = L_15;
		G_B3_1 = L_10;
		if (L_15)
		{
			G_B4_0 = L_15;
			G_B4_1 = L_10;
			goto IL_0070;
		}
	}
	{
		GameObject_t7 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		GameObject_t7 * L_17 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723(NULL /*static, unused*/, L_16, /*hidden argument*/ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_MethodInfo_var);
		G_B4_0 = L_17;
		G_B4_1 = G_B3_1;
	}

IL_0070:
	{
		NullCheck(G_B4_1);
		PointerEventData_set_pointerPress_m701(G_B4_1, G_B4_0, /*hidden argument*/&PointerEventData_set_pointerPress_m701_MethodInfo);
		PointerEventData_t46 * L_18 = (__this->___pointerData_13);
		NullCheck(L_18);
		int32_t L_19 = PointerEventData_get_clickCount_m709(L_18, /*hidden argument*/&PointerEventData_get_clickCount_m709_MethodInfo);
		if (L_19)
		{
			goto IL_00ca;
		}
	}
	{
		PointerEventData_t46 * L_20 = (__this->___pointerData_13);
		NullCheck(L_20);
		GameObject_t7 * L_21 = PointerEventData_get_pointerPress_m696(L_20, /*hidden argument*/&PointerEventData_get_pointerPress_m696_MethodInfo);
		PointerEventData_t46 * L_22 = (__this->___pointerData_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		EventFunction_1_t199 * L_23 = ExecuteEvents_get_pointerClickHandler_m710(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerClickHandler_m710_MethodInfo);
		ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724(NULL /*static, unused*/, L_21, L_22, L_23, /*hidden argument*/ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_MethodInfo_var);
		StareEvent_t44 * L_24 = ((StareInputModule_t16_StaticFields*)InitializedTypeInfo(&StareInputModule_t16_il2cpp_TypeInfo)->static_fields)->___OnStare_14;
		GameObject_t7 * L_25 = V_0;
		PointerEventData_t46 * L_26 = (__this->___pointerData_13);
		NullCheck(L_26);
		Camera_t15 * L_27 = PointerEventData_get_enterEventCamera_m694(L_26, /*hidden argument*/&PointerEventData_get_enterEventCamera_m694_MethodInfo);
		PointerEventData_t46 * L_28 = (__this->___pointerData_13);
		NullCheck(L_28);
		RaycastResult_t182  L_29 = PointerEventData_get_pointerCurrentRaycast_m684(L_28, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_2 = L_29;
		float L_30 = ((&V_2)->___distance_2);
		NullCheck(L_24);
		VirtActionInvoker3< GameObject_t7 *, Camera_t15 *, float >::Invoke(&StareEvent_Invoke_m104_MethodInfo, L_24, L_25, L_27, L_30);
	}

IL_00ca:
	{
		PointerEventData_t46 * L_31 = (__this->___pointerData_13);
		GameObject_t7 * L_32 = V_0;
		NullCheck(L_31);
		PointerEventData_set_rawPointerPress_m702(L_31, L_32, /*hidden argument*/&PointerEventData_set_rawPointerPress_m702_MethodInfo);
		PointerEventData_t46 * L_33 = (__this->___pointerData_13);
		NullCheck(L_33);
		PointerEventData_set_eligibleForClick_m703(L_33, 1, /*hidden argument*/&PointerEventData_set_eligibleForClick_m703_MethodInfo);
		PointerEventData_t46 * L_34 = (__this->___pointerData_13);
		NullCheck(L_34);
		PointerEventData_set_clickCount_m704(L_34, 1, /*hidden argument*/&PointerEventData_set_clickCount_m704_MethodInfo);
		PointerEventData_t46 * L_35 = (__this->___pointerData_13);
		float L_36 = Time_get_unscaledTime_m711(NULL /*static, unused*/, /*hidden argument*/&Time_get_unscaledTime_m711_MethodInfo);
		NullCheck(L_35);
		PointerEventData_set_clickTime_m712(L_35, L_36, /*hidden argument*/&PointerEventData_set_clickTime_m712_MethodInfo);
		return;
	}
}
// Teleporter
#include "AssemblyU2DCSharp_Teleporter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Teleporter_t49_il2cpp_TypeInfo;
// Teleporter
#include "AssemblyU2DCSharp_TeleporterMethodDeclarations.h"

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
extern TypeInfo Color_t51_il2cpp_TypeInfo;
extern TypeInfo Text_t50_il2cpp_TypeInfo;
// UnityEngine.UI.Graphic
#include "UnityEngine_UI_UnityEngine_UI_GraphicMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
extern MethodInfo Teleporter_ResetTime_m124_MethodInfo;
extern MethodInfo Color_get_black_m725_MethodInfo;
extern MethodInfo Teleporter_FadeColor_m126_MethodInfo;
extern MethodInfo Graphic_get_color_m726_MethodInfo;
extern MethodInfo Teleporter_DoTeleport_m125_MethodInfo;
extern MethodInfo Color_get_clear_m727_MethodInfo;
extern MethodInfo Graphic_set_color_m728_MethodInfo;
extern MethodInfo Text_set_text_m729_MethodInfo;
extern MethodInfo Single_ToString_m730_MethodInfo;
extern MethodInfo String_Concat_m731_MethodInfo;
extern MethodInfo Text_get_text_m732_MethodInfo;
extern MethodInfo Cardboard_Recenter_m218_MethodInfo;
extern MethodInfo Color_Lerp_m733_MethodInfo;
struct GameObject_t7;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" Object_t * GameObject_GetComponentInChildren_TisObject_t_m735_gshared (GameObject_t7 * __this, MethodInfo* method);
#define GameObject_GetComponentInChildren_TisObject_t_m735(__this, method) (( Object_t * (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponentInChildren_TisObject_t_m735_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponentInChildren<Cardboard>()
// !!0 UnityEngine.GameObject::GetComponentInChildren<Cardboard>()
#define GameObject_GetComponentInChildren_TisCardboard_t67_m734(__this, method) (( Cardboard_t67 * (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponentInChildren_TisObject_t_m735_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponentInChildren_TisCardboard_t67_m734_GenericMethod;


// System.Void Teleporter::.ctor()
extern MethodInfo Teleporter__ctor_m120_MethodInfo;
extern "C" void Teleporter__ctor_m120 (Teleporter_t49 * __this, MethodInfo* method)
{
	{
		__this->___FadeSpeed_4 = (1.0f);
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Teleporter::Start()
extern MethodInfo Teleporter_Start_m121_MethodInfo;
extern "C" void Teleporter_Start_m121 (Teleporter_t49 * __this, MethodInfo* method)
{
	{
		Image_t12 * L_0 = (__this->___FadeToBlack_3);
		NullCheck(L_0);
		Behaviour_set_enabled_m530(L_0, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		__this->___stage_11 = (-1);
		Teleporter_ResetTime_m124(__this, /*hidden argument*/&Teleporter_ResetTime_m124_MethodInfo);
		return;
	}
}
// System.Void Teleporter::Update()
extern MethodInfo Teleporter_Update_m122_MethodInfo;
extern "C" void Teleporter_Update_m122 (Teleporter_t49 * __this, MethodInfo* method)
{
	Color_t51  V_0 = {0};
	Color_t51  V_1 = {0};
	{
		int32_t L_0 = (__this->___stage_11);
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		Color_t51  L_1 = Color_get_black_m725(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m725_MethodInfo);
		Teleporter_FadeColor_m126(__this, L_1, /*hidden argument*/&Teleporter_FadeColor_m126_MethodInfo);
		Image_t12 * L_2 = (__this->___FadeToBlack_3);
		NullCheck(L_2);
		Color_t51  L_3 = Graphic_get_color_m726(L_2, /*hidden argument*/&Graphic_get_color_m726_MethodInfo);
		V_0 = L_3;
		float L_4 = ((&V_0)->___a_3);
		if ((!(((float)L_4) >= ((float)(0.95f)))))
		{
			goto IL_0039;
		}
	}
	{
		Teleporter_DoTeleport_m125(__this, /*hidden argument*/&Teleporter_DoTeleport_m125_MethodInfo);
	}

IL_0039:
	{
		goto IL_0085;
	}

IL_003e:
	{
		int32_t L_5 = (__this->___stage_11);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0085;
		}
	}
	{
		Color_t51  L_6 = Color_get_clear_m727(NULL /*static, unused*/, /*hidden argument*/&Color_get_clear_m727_MethodInfo);
		Teleporter_FadeColor_m126(__this, L_6, /*hidden argument*/&Teleporter_FadeColor_m126_MethodInfo);
		Image_t12 * L_7 = (__this->___FadeToBlack_3);
		NullCheck(L_7);
		Color_t51  L_8 = Graphic_get_color_m726(L_7, /*hidden argument*/&Graphic_get_color_m726_MethodInfo);
		V_1 = L_8;
		float L_9 = ((&V_1)->___a_3);
		if ((!(((float)L_9) <= ((float)(0.05f)))))
		{
			goto IL_0085;
		}
	}
	{
		Image_t12 * L_10 = (__this->___FadeToBlack_3);
		NullCheck(L_10);
		Behaviour_set_enabled_m530(L_10, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		__this->___stage_11 = (-1);
	}

IL_0085:
	{
		return;
	}
}
// System.Void Teleporter::OnTriggerEnter(UnityEngine.Collider)
extern MethodInfo Teleporter_OnTriggerEnter_m123_MethodInfo;
extern "C" void Teleporter_OnTriggerEnter_m123 (Teleporter_t49 * __this, Collider_t39 * ___other, MethodInfo* method)
{
	{
		Collider_t39 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m652(L_0, /*hidden argument*/&Object_get_name_m652_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_2 = String_op_Equality_m653(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral22, /*hidden argument*/&String_op_Equality_m653_MethodInfo);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		Collider_t39 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t7 * L_4 = Component_get_gameObject_m596(L_3, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		__this->___player_10 = L_4;
		Image_t12 * L_5 = (__this->___FadeToBlack_3);
		NullCheck(L_5);
		Behaviour_set_enabled_m530(L_5, 1, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		Image_t12 * L_6 = (__this->___FadeToBlack_3);
		Color_t51  L_7 = Color_get_clear_m727(NULL /*static, unused*/, /*hidden argument*/&Color_get_clear_m727_MethodInfo);
		NullCheck(L_6);
		Graphic_set_color_m728(L_6, L_7, /*hidden argument*/&Graphic_set_color_m728_MethodInfo);
		__this->___stage_11 = 0;
	}

IL_0044:
	{
		return;
	}
}
// System.Void Teleporter::ResetTime()
extern "C" void Teleporter_ResetTime_m124 (Teleporter_t49 * __this, MethodInfo* method)
{
	{
		Teleporter_t49 * L_0 = (__this->___StartingTeleporter_5);
		bool L_1 = Object_op_Inequality_m527(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		Text_t50 * L_2 = (__this->___LastTimeText_6);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m729_MethodInfo, L_2, (String_t*) &_stringLiteral23);
		Text_t50 * L_3 = (__this->___BestTimeText_7);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m729_MethodInfo, L_3, (String_t*) &_stringLiteral23);
		__this->___bestTime_9 = (99999.0f);
	}

IL_003c:
	{
		return;
	}
}
// System.Void Teleporter::DoTeleport()
extern MethodInfo* GameObject_GetComponentInChildren_TisCardboard_t67_m734_MethodInfo_var;
extern "C" void Teleporter_DoTeleport_m125 (Teleporter_t49 * __this, MethodInfo* method)
{
	static bool Teleporter_DoTeleport_m125_init;
	if (!Teleporter_DoTeleport_m125_init)
	{
		GameObject_GetComponentInChildren_TisCardboard_t67_m734_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponentInChildren_TisCardboard_t67_m734_GenericMethod);
		Teleporter_DoTeleport_m125_init = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_time_m621(NULL /*static, unused*/, /*hidden argument*/&Time_get_time_m621_MethodInfo);
		__this->___TimeEntered_8 = L_0;
		Teleporter_t49 * L_1 = (__this->___StartingTeleporter_5);
		bool L_2 = Object_op_Inequality_m527(NULL /*static, unused*/, L_1, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		float L_3 = (__this->___TimeEntered_8);
		Teleporter_t49 * L_4 = (__this->___StartingTeleporter_5);
		NullCheck(L_4);
		float L_5 = (L_4->___TimeEntered_8);
		V_0 = ((float)((float)L_3-(float)L_5));
		Text_t50 * L_6 = (__this->___LastTimeText_6);
		String_t* L_7 = Single_ToString_m730((&V_0), (String_t*) &_stringLiteral24, /*hidden argument*/&Single_ToString_m730_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m731(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral25, /*hidden argument*/&String_Concat_m731_MethodInfo);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m729_MethodInfo, L_6, L_8);
		float L_9 = V_0;
		float L_10 = (__this->___bestTime_9);
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_0079;
		}
	}
	{
		float L_11 = V_0;
		__this->___bestTime_9 = L_11;
		Text_t50 * L_12 = (__this->___BestTimeText_7);
		Text_t50 * L_13 = (__this->___LastTimeText_6);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Text_get_text_m732_MethodInfo, L_13);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(&Text_set_text_m729_MethodInfo, L_12, L_14);
	}

IL_0079:
	{
		GameObject_t7 * L_15 = (__this->___player_10);
		NullCheck(L_15);
		Transform_t2 * L_16 = GameObject_get_transform_m558(L_15, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		GameObject_t7 * L_17 = (__this->___Destination_2);
		NullCheck(L_17);
		Transform_t2 * L_18 = GameObject_get_transform_m558(L_17, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_18);
		Vector3_t5  L_19 = Transform_get_position_m506(L_18, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		NullCheck(L_16);
		Transform_set_position_m518(L_16, L_19, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
		GameObject_t7 * L_20 = (__this->___player_10);
		NullCheck(L_20);
		Cardboard_t67 * L_21 = GameObject_GetComponentInChildren_TisCardboard_t67_m734(L_20, /*hidden argument*/GameObject_GetComponentInChildren_TisCardboard_t67_m734_MethodInfo_var);
		NullCheck(L_21);
		Cardboard_Recenter_m218(L_21, /*hidden argument*/&Cardboard_Recenter_m218_MethodInfo);
		__this->___stage_11 = 1;
		return;
	}
}
// System.Void Teleporter::FadeColor(UnityEngine.Color)
extern "C" void Teleporter_FadeColor_m126 (Teleporter_t49 * __this, Color_t51  ___color, MethodInfo* method)
{
	{
		Image_t12 * L_0 = (__this->___FadeToBlack_3);
		Image_t12 * L_1 = (__this->___FadeToBlack_3);
		NullCheck(L_1);
		Color_t51  L_2 = Graphic_get_color_m726(L_1, /*hidden argument*/&Graphic_get_color_m726_MethodInfo);
		Color_t51  L_3 = ___color;
		float L_4 = (__this->___FadeSpeed_4);
		float L_5 = Time_get_deltaTime_m515(NULL /*static, unused*/, /*hidden argument*/&Time_get_deltaTime_m515_MethodInfo);
		Color_t51  L_6 = Color_Lerp_m733(NULL /*static, unused*/, L_2, L_3, ((float)((float)L_4*(float)L_5)), /*hidden argument*/&Color_Lerp_m733_MethodInfo);
		NullCheck(L_0);
		Graphic_set_color_m728(L_0, L_6, /*hidden argument*/&Graphic_set_color_m728_MethodInfo);
		return;
	}
}
// Teleport
#include "AssemblyU2DCSharp_Teleport.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Teleport_t52_il2cpp_TypeInfo;
// Teleport
#include "AssemblyU2DCSharp_TeleportMethodDeclarations.h"

extern MethodInfo Teleport_SetGazedAt_m129_MethodInfo;
extern MethodInfo Color_get_green_m736_MethodInfo;
extern MethodInfo Material_set_color_m737_MethodInfo;
extern MethodInfo Application_LoadLevel_m738_MethodInfo;
extern MethodInfo Cardboard_set_VRModeEnabled_m183_MethodInfo;
extern MethodInfo Random_get_onUnitSphere_m739_MethodInfo;


// System.Void Teleport::.ctor()
extern MethodInfo Teleport__ctor_m127_MethodInfo;
extern "C" void Teleport__ctor_m127 (Teleport_t52 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Teleport::Start()
extern MethodInfo Teleport_Start_m128_MethodInfo;
extern "C" void Teleport_Start_m128 (Teleport_t52 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_0);
		Vector3_t5  L_1 = Transform_get_localPosition_m532(L_0, /*hidden argument*/&Transform_get_localPosition_m532_MethodInfo);
		__this->___startingPosition_2 = L_1;
		Teleport_SetGazedAt_m129(__this, 0, /*hidden argument*/&Teleport_SetGazedAt_m129_MethodInfo);
		return;
	}
}
// System.Void Teleport::SetGazedAt(System.Boolean)
extern MethodInfo* Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var;
extern "C" void Teleport_SetGazedAt_m129 (Teleport_t52 * __this, bool ___gazedAt, MethodInfo* method)
{
	static bool Teleport_SetGazedAt_m129_init;
	if (!Teleport_SetGazedAt_m129_init)
	{
		Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t23_m594_GenericMethod);
		Teleport_SetGazedAt_m129_init = true;
	}
	Material_t88 * G_B2_0 = {0};
	Material_t88 * G_B1_0 = {0};
	Color_t51  G_B3_0 = {0};
	Material_t88 * G_B3_1 = {0};
	{
		Renderer_t23 * L_0 = Component_GetComponent_TisRenderer_t23_m594(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var);
		NullCheck(L_0);
		Material_t88 * L_1 = Renderer_get_material_m586(L_0, /*hidden argument*/&Renderer_get_material_m586_MethodInfo);
		bool L_2 = ___gazedAt;
		G_B1_0 = L_1;
		if (!L_2)
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		Color_t51  L_3 = Color_get_green_m736(NULL /*static, unused*/, /*hidden argument*/&Color_get_green_m736_MethodInfo);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_001b:
	{
		Color_t51  L_4 = Color_get_red_m566(NULL /*static, unused*/, /*hidden argument*/&Color_get_red_m566_MethodInfo);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		NullCheck(G_B3_1);
		Material_set_color_m737(G_B3_1, G_B3_0, /*hidden argument*/&Material_set_color_m737_MethodInfo);
		return;
	}
}
// System.Void Teleport::Reset()
extern MethodInfo Teleport_Reset_m130_MethodInfo;
extern "C" void Teleport_Reset_m130 (Teleport_t52 * __this, MethodInfo* method)
{
	{
		Transform_t2 * L_0 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_1 = (__this->___startingPosition_2);
		NullCheck(L_0);
		Transform_set_localPosition_m579(L_0, L_1, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		Application_LoadLevel_m738(NULL /*static, unused*/, (String_t*) &_stringLiteral26, /*hidden argument*/&Application_LoadLevel_m738_MethodInfo);
		return;
	}
}
// System.Void Teleport::ToggleVRMode()
extern MethodInfo Teleport_ToggleVRMode_m131_MethodInfo;
extern "C" void Teleport_ToggleVRMode_m131 (Teleport_t52 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_0 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		Cardboard_t67 * L_1 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m182(L_1, /*hidden argument*/&Cardboard_get_VRModeEnabled_m182_MethodInfo);
		NullCheck(L_0);
		Cardboard_set_VRModeEnabled_m183(L_0, ((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/&Cardboard_set_VRModeEnabled_m183_MethodInfo);
		return;
	}
}
// System.Void Teleport::TeleportRandomly()
extern MethodInfo Teleport_TeleportRandomly_m132_MethodInfo;
extern "C" void Teleport_TeleportRandomly_m132 (Teleport_t52 * __this, MethodInfo* method)
{
	Vector3_t5  V_0 = {0};
	float V_1 = 0.0f;
	{
		Vector3_t5  L_0 = Random_get_onUnitSphere_m739(NULL /*static, unused*/, /*hidden argument*/&Random_get_onUnitSphere_m739_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_2 = Mathf_Clamp_m660(NULL /*static, unused*/, L_1, (0.5f), (1.0f), /*hidden argument*/&Mathf_Clamp_m660_MethodInfo);
		(&V_0)->___y_2 = L_2;
		float L_3 = Random_get_value_m637(NULL /*static, unused*/, /*hidden argument*/&Random_get_value_m637_MethodInfo);
		V_1 = ((float)((float)((float)((float)(2.0f)*(float)L_3))+(float)(1.5f)));
		Transform_t2 * L_4 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_5 = V_0;
		float L_6 = V_1;
		Vector3_t5  L_7 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		NullCheck(L_4);
		Transform_set_localPosition_m579(L_4, L_7, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		return;
	}
}
// TeleportLegacyUI
#include "AssemblyU2DCSharp_TeleportLegacyUI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TeleportLegacyUI_t54_il2cpp_TypeInfo;
// TeleportLegacyUI
#include "AssemblyU2DCSharp_TeleportLegacyUIMethodDeclarations.h"

// StereoController
#include "AssemblyU2DCSharp_StereoController.h"
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHead.h"
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallback.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
extern TypeInfo OnGUICallback_t55_il2cpp_TypeInfo;
extern TypeInfo Rect_t62_il2cpp_TypeInfo;
extern TypeInfo GUI_t201_il2cpp_TypeInfo;
// StereoController
#include "AssemblyU2DCSharp_StereoControllerMethodDeclarations.h"
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUIMethodDeclarations.h"
// CardboardOnGUI/OnGUICallback
#include "AssemblyU2DCSharp_CardboardOnGUI_OnGUICallbackMethodDeclarations.h"
// CardboardHead
#include "AssemblyU2DCSharp_CardboardHeadMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
extern MethodInfo StereoController_get_Head_m310_MethodInfo;
extern MethodInfo CardboardOnGUI_set_IsGUIVisible_m147_MethodInfo;
extern MethodInfo TeleportLegacyUI_OnGUI_m136_MethodInfo;
extern MethodInfo OnGUICallback__ctor_m138_MethodInfo;
extern MethodInfo CardboardOnGUI_add_onGUICallback_m143_MethodInfo;
extern MethodInfo CardboardHead_get_Gaze_m251_MethodInfo;
extern MethodInfo Collider_Raycast_m740_MethodInfo;
extern MethodInfo Cardboard_get_Triggered_m209_MethodInfo;
extern MethodInfo CardboardOnGUI_OKToDraw_m145_MethodInfo;
extern MethodInfo Rect__ctor_m741_MethodInfo;
extern MethodInfo GUI_Button_m742_MethodInfo;
extern MethodInfo CardboardOnGUI_remove_onGUICallback_m144_MethodInfo;
struct Component_t167;
// UnityEngine.CastHelper`1<StereoController>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_7.h"
// Declaration !!0 UnityEngine.Component::GetComponent<StereoController>()
// !!0 UnityEngine.Component::GetComponent<StereoController>()
#define Component_GetComponent_TisStereoController_t75_m743(__this, method) (( StereoController_t75 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
struct Component_t167;
// UnityEngine.CastHelper`1<UnityEngine.Collider>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_8.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t39_m744(__this, method) (( Collider_t39 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisStereoController_t75_m743_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisCollider_t39_m744_GenericMethod;


// System.Void TeleportLegacyUI::.ctor()
extern MethodInfo TeleportLegacyUI__ctor_m133_MethodInfo;
extern "C" void TeleportLegacyUI__ctor_m133 (TeleportLegacyUI_t54 * __this, MethodInfo* method)
{
	{
		Teleport__ctor_m127(__this, /*hidden argument*/&Teleport__ctor_m127_MethodInfo);
		return;
	}
}
// System.Void TeleportLegacyUI::Awake()
extern MethodInfo TeleportLegacyUI_Awake_m134_MethodInfo;
extern MethodInfo* Component_GetComponent_TisStereoController_t75_m743_MethodInfo_var;
extern "C" void TeleportLegacyUI_Awake_m134 (TeleportLegacyUI_t54 * __this, MethodInfo* method)
{
	static bool TeleportLegacyUI_Awake_m134_init;
	if (!TeleportLegacyUI_Awake_m134_init)
	{
		Component_GetComponent_TisStereoController_t75_m743_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisStereoController_t75_m743_GenericMethod);
		TeleportLegacyUI_Awake_m134_init = true;
	}
	{
		Camera_t15 * L_0 = Camera_get_main_m618(NULL /*static, unused*/, /*hidden argument*/&Camera_get_main_m618_MethodInfo);
		NullCheck(L_0);
		StereoController_t75 * L_1 = Component_GetComponent_TisStereoController_t75_m743(L_0, /*hidden argument*/Component_GetComponent_TisStereoController_t75_m743_MethodInfo_var);
		NullCheck(L_1);
		CardboardHead_t53 * L_2 = StereoController_get_Head_m310(L_1, /*hidden argument*/&StereoController_get_Head_m310_MethodInfo);
		__this->___head_3 = L_2;
		CardboardOnGUI_set_IsGUIVisible_m147(NULL /*static, unused*/, 1, /*hidden argument*/&CardboardOnGUI_set_IsGUIVisible_m147_MethodInfo);
		IntPtr_t L_3 = { &TeleportLegacyUI_OnGUI_m136_MethodInfo };
		OnGUICallback_t55 * L_4 = (OnGUICallback_t55 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnGUICallback_t55_il2cpp_TypeInfo));
		OnGUICallback__ctor_m138(L_4, __this, L_3, /*hidden argument*/&OnGUICallback__ctor_m138_MethodInfo);
		CardboardOnGUI_add_onGUICallback_m143(NULL /*static, unused*/, L_4, /*hidden argument*/&CardboardOnGUI_add_onGUICallback_m143_MethodInfo);
		return;
	}
}
// System.Void TeleportLegacyUI::Update()
extern MethodInfo TeleportLegacyUI_Update_m135_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCollider_t39_m744_MethodInfo_var;
extern "C" void TeleportLegacyUI_Update_m135 (TeleportLegacyUI_t54 * __this, MethodInfo* method)
{
	static bool TeleportLegacyUI_Update_m135_init;
	if (!TeleportLegacyUI_Update_m135_init)
	{
		Component_GetComponent_TisCollider_t39_m744_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCollider_t39_m744_GenericMethod);
		TeleportLegacyUI_Update_m135_init = true;
	}
	RaycastHit_t202  V_0 = {0};
	bool V_1 = false;
	{
		Collider_t39 * L_0 = Component_GetComponent_TisCollider_t39_m744(__this, /*hidden argument*/Component_GetComponent_TisCollider_t39_m744_MethodInfo_var);
		CardboardHead_t53 * L_1 = (__this->___head_3);
		NullCheck(L_1);
		Ray_t78  L_2 = CardboardHead_get_Gaze_m251(L_1, /*hidden argument*/&CardboardHead_get_Gaze_m251_MethodInfo);
		NullCheck(L_0);
		bool L_3 = Collider_Raycast_m740(L_0, L_2, (&V_0), (std::numeric_limits<float>::infinity()), /*hidden argument*/&Collider_Raycast_m740_MethodInfo);
		V_1 = L_3;
		bool L_4 = V_1;
		Teleport_SetGazedAt_m129(__this, L_4, /*hidden argument*/&Teleport_SetGazedAt_m129_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_5 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_Triggered_m209(L_5, /*hidden argument*/&Cardboard_get_Triggered_m209_MethodInfo);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		Teleport_TeleportRandomly_m132(__this, /*hidden argument*/&Teleport_TeleportRandomly_m132_MethodInfo);
	}

IL_0040:
	{
		return;
	}
}
// System.Void TeleportLegacyUI::OnGUI()
extern "C" void TeleportLegacyUI_OnGUI_m136 (TeleportLegacyUI_t54 * __this, MethodInfo* method)
{
	{
		bool L_0 = CardboardOnGUI_OKToDraw_m145(NULL /*static, unused*/, __this, /*hidden argument*/&CardboardOnGUI_OKToDraw_m145_MethodInfo);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		Rect_t62  L_1 = {0};
		Rect__ctor_m741(&L_1, (50.0f), (50.0f), (200.0f), (50.0f), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t201_il2cpp_TypeInfo));
		bool L_2 = GUI_Button_m742(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral27, /*hidden argument*/&GUI_Button_m742_MethodInfo);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		Teleport_Reset_m130(__this, /*hidden argument*/&Teleport_Reset_m130_MethodInfo);
	}

IL_003a:
	{
		Rect_t62  L_3 = {0};
		Rect__ctor_m741(&L_3, (50.0f), (110.0f), (200.0f), (50.0f), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t201_il2cpp_TypeInfo));
		bool L_4 = GUI_Button_m742(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral28, /*hidden argument*/&GUI_Button_m742_MethodInfo);
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_5 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_5);
		Cardboard_Recenter_m218(L_5, /*hidden argument*/&Cardboard_Recenter_m218_MethodInfo);
	}

IL_006c:
	{
		Rect_t62  L_6 = {0};
		Rect__ctor_m741(&L_6, (50.0f), (170.0f), (200.0f), (50.0f), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t201_il2cpp_TypeInfo));
		bool L_7 = GUI_Button_m742(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral29, /*hidden argument*/&GUI_Button_m742_MethodInfo);
		if (!L_7)
		{
			goto IL_009a;
		}
	}
	{
		Teleport_ToggleVRMode_m131(__this, /*hidden argument*/&Teleport_ToggleVRMode_m131_MethodInfo);
	}

IL_009a:
	{
		return;
	}
}
// System.Void TeleportLegacyUI::OnDestroy()
extern MethodInfo TeleportLegacyUI_OnDestroy_m137_MethodInfo;
extern "C" void TeleportLegacyUI_OnDestroy_m137 (TeleportLegacyUI_t54 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = { &TeleportLegacyUI_OnGUI_m136_MethodInfo };
		OnGUICallback_t55 * L_1 = (OnGUICallback_t55 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OnGUICallback_t55_il2cpp_TypeInfo));
		OnGUICallback__ctor_m138(L_1, __this, L_0, /*hidden argument*/&OnGUICallback__ctor_m138_MethodInfo);
		CardboardOnGUI_remove_onGUICallback_m144(NULL /*static, unused*/, L_1, /*hidden argument*/&CardboardOnGUI_remove_onGUICallback_m144_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void CardboardOnGUI/OnGUICallback::.ctor(System.Object,System.IntPtr)
extern "C" void OnGUICallback__ctor_m138 (OnGUICallback_t55 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void CardboardOnGUI/OnGUICallback::Invoke()
extern MethodInfo OnGUICallback_Invoke_m139_MethodInfo;
extern "C" void OnGUICallback_Invoke_m139 (OnGUICallback_t55 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		OnGUICallback_Invoke_m139((OnGUICallback_t55 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_OnGUICallback_t55(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult CardboardOnGUI/OnGUICallback::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo OnGUICallback_BeginInvoke_m140_MethodInfo;
extern "C" Object_t * OnGUICallback_BeginInvoke_m140 (OnGUICallback_t55 * __this, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void CardboardOnGUI/OnGUICallback::EndInvoke(System.IAsyncResult)
extern MethodInfo OnGUICallback_EndInvoke_m141_MethodInfo;
extern "C" void OnGUICallback_EndInvoke_m141 (OnGUICallback_t55 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// CardboardOnGUI
#include "AssemblyU2DCSharp_CardboardOnGUI.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CardboardOnGUI_t57_il2cpp_TypeInfo;

// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// CardboardOnGUIWindow
#include "AssemblyU2DCSharp_CardboardOnGUIWindow.h"
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// CardboardOnGUIMouse
#include "AssemblyU2DCSharp_CardboardOnGUIMouse.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
extern TypeInfo RenderTexture_t56_il2cpp_TypeInfo;
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTextureMethodDeclarations.h"
// CardboardOnGUIWindow
#include "AssemblyU2DCSharp_CardboardOnGUIWindowMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GL
#include "UnityEngine_UnityEngine_GLMethodDeclarations.h"
// CardboardOnGUIMouse
#include "AssemblyU2DCSharp_CardboardOnGUIMouseMethodDeclarations.h"
extern MethodInfo SystemInfo_get_supportsRenderTextures_m745_MethodInfo;
extern MethodInfo CardboardOnGUI_get_IsGUIVisible_m146_MethodInfo;
extern MethodInfo Debug_LogWarning_m746_MethodInfo;
extern MethodInfo CardboardOnGUI_Create_m151_MethodInfo;
extern MethodInfo RenderTexture_Release_m747_MethodInfo;
extern MethodInfo Cardboard_get_StereoScreen_m198_MethodInfo;
extern MethodInfo Object_op_Implicit_m748_MethodInfo;
extern MethodInfo RenderTexture_get_width_m749_MethodInfo;
extern MethodInfo RenderTexture_get_height_m750_MethodInfo;
extern MethodInfo RenderTexture__ctor_m751_MethodInfo;
extern MethodInfo RenderTexture_Create_m752_MethodInfo;
extern MethodInfo CardboardOnGUIWindow_Create_m160_MethodInfo;
extern MethodInfo Event_get_current_m753_MethodInfo;
extern MethodInfo Event_get_type_m754_MethodInfo;
extern MethodInfo RenderTexture_get_active_m755_MethodInfo;
extern MethodInfo RenderTexture_set_active_m756_MethodInfo;
extern MethodInfo GL_Clear_m757_MethodInfo;
extern MethodInfo CardboardOnGUIMouse_DrawPointerImage_m156_MethodInfo;
struct Component_t167;
struct Component_t167;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" ObjectU5BU5D_t178* Component_GetComponentsInChildren_TisObject_t_m759_gshared (Component_t167 * __this, bool p0, MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m759(__this, p0, method) (( ObjectU5BU5D_t178* (*) (Component_t167 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m759_gshared)(__this, p0, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>(System.Boolean)
#define Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m758(__this, p0, method) (( CardboardOnGUIWindowU5BU5D_t203* (*) (Component_t167 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m759_gshared)(__this, p0, method)
struct Component_t167;
// UnityEngine.CastHelper`1<CardboardOnGUIMouse>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_9.h"
// Declaration !!0 UnityEngine.Component::GetComponent<CardboardOnGUIMouse>()
// !!0 UnityEngine.Component::GetComponent<CardboardOnGUIMouse>()
#define Component_GetComponent_TisCardboardOnGUIMouse_t59_m760(__this, method) (( CardboardOnGUIMouse_t59 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m758_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisCardboardOnGUIMouse_t59_m760_GenericMethod;


// System.Void CardboardOnGUI::.ctor()
extern MethodInfo CardboardOnGUI__ctor_m142_MethodInfo;
extern "C" void CardboardOnGUI__ctor_m142 (CardboardOnGUI_t57 * __this, MethodInfo* method)
{
	{
		Color_t51  L_0 = Color_get_clear_m727(NULL /*static, unused*/, /*hidden argument*/&Color_get_clear_m727_MethodInfo);
		__this->___background_4 = L_0;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUI::add_onGUICallback(CardboardOnGUI/OnGUICallback)
extern "C" void CardboardOnGUI_add_onGUICallback_m143 (Object_t * __this /* static, unused */, OnGUICallback_t55 * ___value, MethodInfo* method)
{
	{
		OnGUICallback_t55 * L_0 = ((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6;
		OnGUICallback_t55 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Combine_m665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6 = ((OnGUICallback_t55 *)Castclass(L_2, InitializedTypeInfo(&OnGUICallback_t55_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void CardboardOnGUI::remove_onGUICallback(CardboardOnGUI/OnGUICallback)
extern "C" void CardboardOnGUI_remove_onGUICallback_m144 (Object_t * __this /* static, unused */, OnGUICallback_t55 * ___value, MethodInfo* method)
{
	{
		OnGUICallback_t55 * L_0 = ((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6;
		OnGUICallback_t55 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Remove_m666(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m666_MethodInfo);
		((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6 = ((OnGUICallback_t55 *)Castclass(L_2, InitializedTypeInfo(&OnGUICallback_t55_il2cpp_TypeInfo)));
		return;
	}
}
// System.Boolean CardboardOnGUI::OKToDraw(UnityEngine.MonoBehaviour)
extern "C" bool CardboardOnGUI_OKToDraw_m145 (Object_t * __this /* static, unused */, MonoBehaviour_t4 * ___mb, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = ((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___okToDraw_2;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		MonoBehaviour_t4 * L_1 = ___mb;
		bool L_2 = Object_op_Equality_m528(NULL /*static, unused*/, L_1, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		MonoBehaviour_t4 * L_3 = ___mb;
		NullCheck(L_3);
		bool L_4 = Behaviour_get_enabled_m675(L_3, /*hidden argument*/&Behaviour_get_enabled_m675_MethodInfo);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		MonoBehaviour_t4 * L_5 = ___mb;
		NullCheck(L_5);
		GameObject_t7 * L_6 = Component_get_gameObject_m596(L_5, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m693(L_6, /*hidden argument*/&GameObject_get_activeInHierarchy_m693_MethodInfo);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = 0;
	}

IL_002f:
	{
		G_B7_0 = G_B5_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B7_0 = 1;
	}

IL_0032:
	{
		G_B9_0 = G_B7_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B9_0 = 0;
	}

IL_0035:
	{
		return G_B9_0;
	}
}
// System.Boolean CardboardOnGUI::get_IsGUIVisible()
extern "C" bool CardboardOnGUI_get_IsGUIVisible_m146 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___isGUIVisible_3;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_1 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m182(L_1, /*hidden argument*/&Cardboard_get_VRModeEnabled_m182_MethodInfo);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3 = SystemInfo_get_supportsRenderTextures_m745(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m745_MethodInfo);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 0;
	}

IL_0021:
	{
		return G_B4_0;
	}
}
// System.Void CardboardOnGUI::set_IsGUIVisible(System.Boolean)
extern "C" void CardboardOnGUI_set_IsGUIVisible_m147 (Object_t * __this /* static, unused */, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___isGUIVisible_3 = L_0;
		return;
	}
}
// System.Boolean CardboardOnGUI::get_Triggered()
extern MethodInfo CardboardOnGUI_get_Triggered_m148_MethodInfo;
extern "C" bool CardboardOnGUI_get_Triggered_m148 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = CardboardOnGUI_get_IsGUIVisible_m146(NULL /*static, unused*/, /*hidden argument*/&CardboardOnGUI_get_IsGUIVisible_m146_MethodInfo);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_1 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_Triggered_m209(L_1, /*hidden argument*/&Cardboard_get_Triggered_m209_MethodInfo);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Void CardboardOnGUI::Awake()
extern MethodInfo CardboardOnGUI_Awake_m149_MethodInfo;
extern "C" void CardboardOnGUI_Awake_m149 (CardboardOnGUI_t57 * __this, MethodInfo* method)
{
	{
		bool L_0 = SystemInfo_get_supportsRenderTextures_m745(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m745_MethodInfo);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		Debug_LogWarning_m746(NULL /*static, unused*/, (String_t*) &_stringLiteral30, /*hidden argument*/&Debug_LogWarning_m746_MethodInfo);
		Behaviour_set_enabled_m530(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
	}

IL_001b:
	{
		return;
	}
}
// System.Void CardboardOnGUI::Start()
extern MethodInfo CardboardOnGUI_Start_m150_MethodInfo;
extern "C" void CardboardOnGUI_Start_m150 (CardboardOnGUI_t57 * __this, MethodInfo* method)
{
	{
		CardboardOnGUI_Create_m151(__this, /*hidden argument*/&CardboardOnGUI_Create_m151_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUI::Create()
extern MethodInfo* Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m758_MethodInfo_var;
extern "C" void CardboardOnGUI_Create_m151 (CardboardOnGUI_t57 * __this, MethodInfo* method)
{
	static bool CardboardOnGUI_Create_m151_init;
	if (!CardboardOnGUI_Create_m151_init)
	{
		Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m758_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m758_GenericMethod);
		CardboardOnGUI_Create_m151_init = true;
	}
	RenderTexture_t56 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CardboardOnGUIWindow_t61 * V_3 = {0};
	CardboardOnGUIWindowU5BU5D_t203* V_4 = {0};
	int32_t V_5 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		RenderTexture_t56 * L_0 = (__this->___guiScreen_5);
		bool L_1 = Object_op_Inequality_m527(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RenderTexture_t56 * L_2 = (__this->___guiScreen_5);
		NullCheck(L_2);
		RenderTexture_Release_m747(L_2, /*hidden argument*/&RenderTexture_Release_m747_MethodInfo);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_3 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_3);
		RenderTexture_t56 * L_4 = Cardboard_get_StereoScreen_m198(L_3, /*hidden argument*/&Cardboard_get_StereoScreen_m198_MethodInfo);
		V_0 = L_4;
		RenderTexture_t56 * L_5 = V_0;
		bool L_6 = Object_op_Implicit_m748(NULL /*static, unused*/, L_5, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		RenderTexture_t56 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m749_MethodInfo, L_7);
		G_B5_0 = L_8;
		goto IL_0042;
	}

IL_003d:
	{
		int32_t L_9 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		G_B5_0 = L_9;
	}

IL_0042:
	{
		V_1 = G_B5_0;
		RenderTexture_t56 * L_10 = V_0;
		bool L_11 = Object_op_Implicit_m748(NULL /*static, unused*/, L_10, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		RenderTexture_t56 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m750_MethodInfo, L_12);
		G_B8_0 = L_13;
		goto IL_005e;
	}

IL_0059:
	{
		int32_t L_14 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		G_B8_0 = L_14;
	}

IL_005e:
	{
		V_2 = G_B8_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		RenderTexture_t56 * L_17 = (RenderTexture_t56 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t56_il2cpp_TypeInfo));
		RenderTexture__ctor_m751(L_17, L_15, L_16, 0, 0, /*hidden argument*/&RenderTexture__ctor_m751_MethodInfo);
		__this->___guiScreen_5 = L_17;
		RenderTexture_t56 * L_18 = (__this->___guiScreen_5);
		NullCheck(L_18);
		RenderTexture_Create_m752(L_18, /*hidden argument*/&RenderTexture_Create_m752_MethodInfo);
		CardboardOnGUIWindowU5BU5D_t203* L_19 = Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m758(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m758_MethodInfo_var);
		V_4 = L_19;
		V_5 = 0;
		goto IL_00a3;
	}

IL_008b:
	{
		CardboardOnGUIWindowU5BU5D_t203* L_20 = V_4;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_3 = (*(CardboardOnGUIWindow_t61 **)(CardboardOnGUIWindow_t61 **)SZArrayLdElema(L_20, L_22));
		CardboardOnGUIWindow_t61 * L_23 = V_3;
		RenderTexture_t56 * L_24 = (__this->___guiScreen_5);
		NullCheck(L_23);
		CardboardOnGUIWindow_Create_m160(L_23, L_24, /*hidden argument*/&CardboardOnGUIWindow_Create_m160_MethodInfo);
		int32_t L_25 = V_5;
		V_5 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_26 = V_5;
		CardboardOnGUIWindowU5BU5D_t203* L_27 = V_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_008b;
		}
	}
	{
		return;
	}
}
// System.Void CardboardOnGUI::LateUpdate()
extern MethodInfo CardboardOnGUI_LateUpdate_m152_MethodInfo;
extern "C" void CardboardOnGUI_LateUpdate_m152 (CardboardOnGUI_t57 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_0 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_VRModeEnabled_m182(L_0, /*hidden argument*/&Cardboard_get_VRModeEnabled_m182_MethodInfo);
		((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___okToDraw_2 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		return;
	}
}
// System.Void CardboardOnGUI::OnGUI()
extern MethodInfo CardboardOnGUI_OnGUI_m153_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCardboardOnGUIMouse_t59_m760_MethodInfo_var;
extern "C" void CardboardOnGUI_OnGUI_m153 (CardboardOnGUI_t57 * __this, MethodInfo* method)
{
	static bool CardboardOnGUI_OnGUI_m153_init;
	if (!CardboardOnGUI_OnGUI_m153_init)
	{
		Component_GetComponent_TisCardboardOnGUIMouse_t59_m760_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCardboardOnGUIMouse_t59_m760_GenericMethod);
		CardboardOnGUI_OnGUI_m153_init = true;
	}
	RenderTexture_t56 * V_0 = {0};
	CardboardOnGUIMouse_t59 * V_1 = {0};
	{
		bool L_0 = CardboardOnGUI_get_IsGUIVisible_m146(NULL /*static, unused*/, /*hidden argument*/&CardboardOnGUI_get_IsGUIVisible_m146_MethodInfo);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		V_0 = (RenderTexture_t56 *)NULL;
		Event_t204 * L_1 = Event_get_current_m753(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m753_MethodInfo);
		NullCheck(L_1);
		int32_t L_2 = Event_get_type_m754(L_1, /*hidden argument*/&Event_get_type_m754_MethodInfo);
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_003b;
		}
	}
	{
		RenderTexture_t56 * L_3 = RenderTexture_get_active_m755(NULL /*static, unused*/, /*hidden argument*/&RenderTexture_get_active_m755_MethodInfo);
		V_0 = L_3;
		RenderTexture_t56 * L_4 = (__this->___guiScreen_5);
		RenderTexture_set_active_m756(NULL /*static, unused*/, L_4, /*hidden argument*/&RenderTexture_set_active_m756_MethodInfo);
		Color_t51  L_5 = (__this->___background_4);
		GL_Clear_m757(NULL /*static, unused*/, 0, 1, L_5, /*hidden argument*/&GL_Clear_m757_MethodInfo);
	}

IL_003b:
	{
		OnGUICallback_t55 * L_6 = ((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___okToDraw_2 = 1;
		OnGUICallback_t55 * L_7 = ((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___onGUICallback_6;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(&OnGUICallback_Invoke_m139_MethodInfo, L_7);
		((CardboardOnGUI_t57_StaticFields*)InitializedTypeInfo(&CardboardOnGUI_t57_il2cpp_TypeInfo)->static_fields)->___okToDraw_2 = 0;
	}

IL_005b:
	{
		Event_t204 * L_8 = Event_get_current_m753(NULL /*static, unused*/, /*hidden argument*/&Event_get_current_m753_MethodInfo);
		NullCheck(L_8);
		int32_t L_9 = Event_get_type_m754(L_8, /*hidden argument*/&Event_get_type_m754_MethodInfo);
		if ((!(((uint32_t)L_9) == ((uint32_t)7))))
		{
			goto IL_008a;
		}
	}
	{
		CardboardOnGUIMouse_t59 * L_10 = Component_GetComponent_TisCardboardOnGUIMouse_t59_m760(__this, /*hidden argument*/Component_GetComponent_TisCardboardOnGUIMouse_t59_m760_MethodInfo_var);
		V_1 = L_10;
		CardboardOnGUIMouse_t59 * L_11 = V_1;
		bool L_12 = Object_op_Inequality_m527(NULL /*static, unused*/, L_11, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		CardboardOnGUIMouse_t59 * L_13 = V_1;
		NullCheck(L_13);
		CardboardOnGUIMouse_DrawPointerImage_m156(L_13, /*hidden argument*/&CardboardOnGUIMouse_DrawPointerImage_m156_MethodInfo);
	}

IL_0084:
	{
		RenderTexture_t56 * L_14 = V_0;
		RenderTexture_set_active_m756(NULL /*static, unused*/, L_14, /*hidden argument*/&RenderTexture_set_active_m756_MethodInfo);
	}

IL_008a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CardboardOnGUIMouse_t59_il2cpp_TypeInfo;

// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
extern TypeInfo CardboardOnGUIWindow_t61_il2cpp_TypeInfo;
extern TypeInfo Texture_t58_il2cpp_TypeInfo;
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_TextureMethodDeclarations.h"
extern MethodInfo Vector2_get_zero_m761_MethodInfo;
extern MethodInfo RaycastHit_get_distance_m762_MethodInfo;
extern MethodInfo RaycastHit_get_textureCoord_m763_MethodInfo;
extern MethodInfo Rect_get_xMin_m764_MethodInfo;
extern MethodInfo Rect_get_width_m765_MethodInfo;
extern MethodInfo Rect_get_yMin_m766_MethodInfo;
extern MethodInfo Rect_get_height_m767_MethodInfo;
extern MethodInfo Cardboard_SetTouchCoordinates_m219_MethodInfo;
extern MethodInfo Input_get_mousePresent_m768_MethodInfo;
extern MethodInfo Vector2_op_Implicit_m769_MethodInfo;
extern MethodInfo Vector2_get_sqrMagnitude_m770_MethodInfo;
extern MethodInfo Texture_get_width_m771_MethodInfo;
extern MethodInfo Texture_get_height_m772_MethodInfo;
extern MethodInfo GUI_DrawTexture_m773_MethodInfo;
struct Component_t167;
struct Component_t167;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t178* Component_GetComponentsInChildren_TisObject_t_m775_gshared (Component_t167 * __this, MethodInfo* method);
#define Component_GetComponentsInChildren_TisObject_t_m775(__this, method) (( ObjectU5BU5D_t178* (*) (Component_t167 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m775_gshared)(__this, method)
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>()
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardOnGUIWindow>()
#define Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m774(__this, method) (( CardboardOnGUIWindowU5BU5D_t203* (*) (Component_t167 *, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m775_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m774_GenericMethod;


// System.Void CardboardOnGUIMouse::.ctor()
extern MethodInfo CardboardOnGUIMouse__ctor_m154_MethodInfo;
extern "C" void CardboardOnGUIMouse__ctor_m154 (CardboardOnGUIMouse_t59 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUIMouse::LateUpdate()
extern MethodInfo CardboardOnGUIMouse_LateUpdate_m155_MethodInfo;
extern MethodInfo* Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m774_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisCollider_t39_m744_MethodInfo_var;
extern "C" void CardboardOnGUIMouse_LateUpdate_m155 (CardboardOnGUIMouse_t59 * __this, MethodInfo* method)
{
	static bool CardboardOnGUIMouse_LateUpdate_m155_init;
	if (!CardboardOnGUIMouse_LateUpdate_m155_init)
	{
		Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m774_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m774_GenericMethod);
		Component_GetComponent_TisCollider_t39_m744_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCollider_t39_m744_GenericMethod);
		CardboardOnGUIMouse_LateUpdate_m155_init = true;
	}
	Ray_t78  V_0 = {0};
	CardboardOnGUIWindow_t61 * V_1 = {0};
	float V_2 = 0.0f;
	Vector2_t48  V_3 = {0};
	CardboardOnGUIWindow_t61 * V_4 = {0};
	CardboardOnGUIWindowU5BU5D_t203* V_5 = {0};
	int32_t V_6 = 0;
	RaycastHit_t202  V_7 = {0};
	{
		CardboardHead_t53 * L_0 = (__this->___head_2);
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		__this->___pointerVisible_6 = 1;
		return;
	}

IL_0019:
	{
		bool L_2 = CardboardOnGUI_get_IsGUIVisible_m146(NULL /*static, unused*/, /*hidden argument*/&CardboardOnGUI_get_IsGUIVisible_m146_MethodInfo);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		__this->___pointerVisible_6 = 0;
		return;
	}

IL_002b:
	{
		CardboardHead_t53 * L_3 = (__this->___head_2);
		NullCheck(L_3);
		Ray_t78  L_4 = CardboardHead_get_Gaze_m251(L_3, /*hidden argument*/&CardboardHead_get_Gaze_m251_MethodInfo);
		V_0 = L_4;
		V_1 = (CardboardOnGUIWindow_t61 *)NULL;
		V_2 = (std::numeric_limits<float>::infinity());
		Vector2_t48  L_5 = Vector2_get_zero_m761(NULL /*static, unused*/, /*hidden argument*/&Vector2_get_zero_m761_MethodInfo);
		V_3 = L_5;
		CardboardOnGUIWindowU5BU5D_t203* L_6 = Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m774(__this, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardOnGUIWindow_t61_m774_MethodInfo_var);
		V_5 = L_6;
		V_6 = 0;
		goto IL_009b;
	}

IL_0055:
	{
		CardboardOnGUIWindowU5BU5D_t203* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_4 = (*(CardboardOnGUIWindow_t61 **)(CardboardOnGUIWindow_t61 **)SZArrayLdElema(L_7, L_9));
		CardboardOnGUIWindow_t61 * L_10 = V_4;
		NullCheck(L_10);
		Collider_t39 * L_11 = Component_GetComponent_TisCollider_t39_m744(L_10, /*hidden argument*/Component_GetComponent_TisCollider_t39_m744_MethodInfo_var);
		Ray_t78  L_12 = V_0;
		NullCheck(L_11);
		bool L_13 = Collider_Raycast_m740(L_11, L_12, (&V_7), (std::numeric_limits<float>::infinity()), /*hidden argument*/&Collider_Raycast_m740_MethodInfo);
		if (!L_13)
		{
			goto IL_0095;
		}
	}
	{
		float L_14 = RaycastHit_get_distance_m762((&V_7), /*hidden argument*/&RaycastHit_get_distance_m762_MethodInfo);
		float L_15 = V_2;
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_0095;
		}
	}
	{
		float L_16 = RaycastHit_get_distance_m762((&V_7), /*hidden argument*/&RaycastHit_get_distance_m762_MethodInfo);
		V_2 = L_16;
		CardboardOnGUIWindow_t61 * L_17 = V_4;
		V_1 = L_17;
		Vector2_t48  L_18 = RaycastHit_get_textureCoord_m763((&V_7), /*hidden argument*/&RaycastHit_get_textureCoord_m763_MethodInfo);
		V_3 = L_18;
	}

IL_0095:
	{
		int32_t L_19 = V_6;
		V_6 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_009b:
	{
		int32_t L_20 = V_6;
		CardboardOnGUIWindowU5BU5D_t203* L_21 = V_5;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_0055;
		}
	}
	{
		CardboardOnGUIWindow_t61 * L_22 = V_1;
		bool L_23 = Object_op_Equality_m528(NULL /*static, unused*/, L_22, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_23)
		{
			goto IL_00ba;
		}
	}
	{
		__this->___pointerVisible_6 = 0;
		return;
	}

IL_00ba:
	{
		CardboardOnGUIWindow_t61 * L_24 = V_1;
		NullCheck(L_24);
		Rect_t62 * L_25 = &(L_24->___rect_3);
		float L_26 = Rect_get_xMin_m764(L_25, /*hidden argument*/&Rect_get_xMin_m764_MethodInfo);
		CardboardOnGUIWindow_t61 * L_27 = V_1;
		NullCheck(L_27);
		Rect_t62 * L_28 = &(L_27->___rect_3);
		float L_29 = Rect_get_width_m765(L_28, /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		float L_30 = ((&V_3)->___x_1);
		(&V_3)->___x_1 = ((float)((float)L_26+(float)((float)((float)L_29*(float)L_30))));
		CardboardOnGUIWindow_t61 * L_31 = V_1;
		NullCheck(L_31);
		Rect_t62 * L_32 = &(L_31->___rect_3);
		float L_33 = Rect_get_yMin_m766(L_32, /*hidden argument*/&Rect_get_yMin_m766_MethodInfo);
		CardboardOnGUIWindow_t61 * L_34 = V_1;
		NullCheck(L_34);
		Rect_t62 * L_35 = &(L_34->___rect_3);
		float L_36 = Rect_get_height_m767(L_35, /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		float L_37 = ((&V_3)->___y_2);
		(&V_3)->___y_2 = ((float)((float)L_33+(float)((float)((float)L_36*(float)L_37))));
		float L_38 = ((&V_3)->___x_1);
		int32_t L_39 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		__this->___pointerX_7 = (((int32_t)((float)((float)L_38*(float)(((float)L_39))))));
		float L_40 = ((&V_3)->___y_2);
		int32_t L_41 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		__this->___pointerY_8 = (((int32_t)((float)((float)L_40*(float)(((float)L_41))))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_42 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		int32_t L_43 = (__this->___pointerX_7);
		int32_t L_44 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		int32_t L_45 = (__this->___pointerY_8);
		NullCheck(L_42);
		Cardboard_SetTouchCoordinates_m219(L_42, L_43, ((int32_t)((int32_t)L_44-(int32_t)L_45)), /*hidden argument*/&Cardboard_SetTouchCoordinates_m219_MethodInfo);
		__this->___pointerVisible_6 = 1;
		return;
	}
}
// System.Void CardboardOnGUIMouse::DrawPointerImage()
extern "C" void CardboardOnGUIMouse_DrawPointerImage_m156 (CardboardOnGUIMouse_t59 * __this, MethodInfo* method)
{
	Vector2_t48  V_0 = {0};
	Vector2_t48  V_1 = {0};
	Vector2_t48  V_2 = {0};
	Vector2_t48  G_B7_0 = {0};
	{
		Texture_t58 * L_0 = (__this->___pointerImage_3);
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = (__this->___pointerVisible_6);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = Behaviour_get_enabled_m675(__this, /*hidden argument*/&Behaviour_get_enabled_m675_MethodInfo);
		if (L_3)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		return;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_4 = Input_get_mousePresent_m768(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePresent_m768_MethodInfo);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		Vector3_t5  L_5 = Input_get_mousePosition_m619(NULL /*static, unused*/, /*hidden argument*/&Input_get_mousePosition_m619_MethodInfo);
		Vector2_t48  L_6 = Vector2_op_Implicit_m769(NULL /*static, unused*/, L_5, /*hidden argument*/&Vector2_op_Implicit_m769_MethodInfo);
		G_B7_0 = L_6;
		goto IL_0054;
	}

IL_0041:
	{
		int32_t L_7 = (__this->___pointerX_7);
		int32_t L_8 = (__this->___pointerY_8);
		Vector2_t48  L_9 = {0};
		Vector2__ctor_m588(&L_9, (((float)L_7)), (((float)L_8)), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		G_B7_0 = L_9;
	}

IL_0054:
	{
		V_0 = G_B7_0;
		Vector2_t48  L_10 = (__this->___pointerSpot_5);
		V_1 = L_10;
		Vector2_t48  L_11 = (__this->___pointerSize_4);
		V_2 = L_11;
		float L_12 = Vector2_get_sqrMagnitude_m770((&V_2), /*hidden argument*/&Vector2_get_sqrMagnitude_m770_MethodInfo);
		if ((!(((float)L_12) < ((float)(1.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		Texture_t58 * L_13 = (__this->___pointerImage_3);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_width_m771_MethodInfo, L_13);
		(&V_2)->___x_1 = (((float)L_14));
		Texture_t58 * L_15 = (__this->___pointerImage_3);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Texture_get_height_m772_MethodInfo, L_15);
		(&V_2)->___y_2 = (((float)L_16));
	}

IL_009a:
	{
		float L_17 = ((&V_0)->___x_1);
		float L_18 = ((&V_1)->___x_1);
		int32_t L_19 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		float L_20 = ((&V_0)->___y_2);
		float L_21 = ((&V_1)->___y_2);
		float L_22 = ((&V_2)->___x_1);
		float L_23 = ((&V_2)->___y_2);
		Rect_t62  L_24 = {0};
		Rect__ctor_m741(&L_24, ((float)((float)L_17-(float)L_18)), ((float)((float)((float)((float)(((float)L_19))-(float)L_20))-(float)L_21)), L_22, L_23, /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		Texture_t58 * L_25 = (__this->___pointerImage_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t201_il2cpp_TypeInfo));
		GUI_DrawTexture_m773(NULL /*static, unused*/, L_24, L_25, 0, /*hidden argument*/&GUI_DrawTexture_m773_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.MeshRenderer
#include "UnityEngine_UnityEngine_MeshRenderer.h"
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"
extern TypeInfo Material_t88_il2cpp_TypeInfo;
// UnityEngine.Shader
#include "UnityEngine_UnityEngine_ShaderMethodDeclarations.h"
extern MethodInfo Shader_Find_m776_MethodInfo;
extern MethodInfo Material__ctor_m777_MethodInfo;
extern MethodInfo Material_set_mainTexture_m778_MethodInfo;
extern MethodInfo Rect_get_position_m779_MethodInfo;
extern MethodInfo Material_set_mainTextureOffset_m780_MethodInfo;
extern MethodInfo Rect_get_size_m781_MethodInfo;
extern MethodInfo Material_set_mainTextureScale_m782_MethodInfo;
extern MethodInfo Renderer_set_material_m783_MethodInfo;
extern MethodInfo Renderer_set_enabled_m784_MethodInfo;
struct Component_t167;
// UnityEngine.CastHelper`1<UnityEngine.MeshRenderer>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_10.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
#define Component_GetComponent_TisMeshRenderer_t60_m785(__this, method) (( MeshRenderer_t60 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisMeshRenderer_t60_m785_GenericMethod;


// System.Void CardboardOnGUIWindow::.ctor()
extern MethodInfo CardboardOnGUIWindow__ctor_m157_MethodInfo;
extern "C" void CardboardOnGUIWindow__ctor_m157 (CardboardOnGUIWindow_t61 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUIWindow::Reset()
extern MethodInfo CardboardOnGUIWindow_Reset_m158_MethodInfo;
extern "C" void CardboardOnGUIWindow_Reset_m158 (CardboardOnGUIWindow_t61 * __this, MethodInfo* method)
{
	{
		Rect_t62  L_0 = {0};
		Rect__ctor_m741(&L_0, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		__this->___rect_3 = L_0;
		return;
	}
}
// System.Void CardboardOnGUIWindow::Awake()
extern MethodInfo CardboardOnGUIWindow_Awake_m159_MethodInfo;
extern MethodInfo* Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var;
extern "C" void CardboardOnGUIWindow_Awake_m159 (CardboardOnGUIWindow_t61 * __this, MethodInfo* method)
{
	static bool CardboardOnGUIWindow_Awake_m159_init;
	if (!CardboardOnGUIWindow_Awake_m159_init)
	{
		Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisMeshRenderer_t60_m785_GenericMethod);
		CardboardOnGUIWindow_Awake_m159_init = true;
	}
	{
		MeshRenderer_t60 * L_0 = Component_GetComponent_TisMeshRenderer_t60_m785(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var);
		__this->___meshRenderer_2 = L_0;
		bool L_1 = SystemInfo_get_supportsRenderTextures_m745(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m745_MethodInfo);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		Behaviour_set_enabled_m530(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
	}

IL_001d:
	{
		return;
	}
}
// System.Void CardboardOnGUIWindow::Create(UnityEngine.RenderTexture)
extern "C" void CardboardOnGUIWindow_Create_m160 (CardboardOnGUIWindow_t61 * __this, RenderTexture_t56 * ___target, MethodInfo* method)
{
	Material_t88 * V_0 = {0};
	{
		MeshRenderer_t60 * L_0 = (__this->___meshRenderer_2);
		Shader_t205 * L_1 = Shader_Find_m776(NULL /*static, unused*/, (String_t*) &_stringLiteral31, /*hidden argument*/&Shader_Find_m776_MethodInfo);
		Material_t88 * L_2 = (Material_t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t88_il2cpp_TypeInfo));
		Material__ctor_m777(L_2, L_1, /*hidden argument*/&Material__ctor_m777_MethodInfo);
		V_0 = L_2;
		Material_t88 * L_3 = V_0;
		RenderTexture_t56 * L_4 = ___target;
		NullCheck(L_3);
		Material_set_mainTexture_m778(L_3, L_4, /*hidden argument*/&Material_set_mainTexture_m778_MethodInfo);
		Material_t88 * L_5 = V_0;
		Rect_t62 * L_6 = &(__this->___rect_3);
		Vector2_t48  L_7 = Rect_get_position_m779(L_6, /*hidden argument*/&Rect_get_position_m779_MethodInfo);
		NullCheck(L_5);
		Material_set_mainTextureOffset_m780(L_5, L_7, /*hidden argument*/&Material_set_mainTextureOffset_m780_MethodInfo);
		Material_t88 * L_8 = V_0;
		Rect_t62 * L_9 = &(__this->___rect_3);
		Vector2_t48  L_10 = Rect_get_size_m781(L_9, /*hidden argument*/&Rect_get_size_m781_MethodInfo);
		NullCheck(L_8);
		Material_set_mainTextureScale_m782(L_8, L_10, /*hidden argument*/&Material_set_mainTextureScale_m782_MethodInfo);
		Material_t88 * L_11 = V_0;
		NullCheck(L_0);
		Renderer_set_material_m783(L_0, L_11, /*hidden argument*/&Renderer_set_material_m783_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUIWindow::OnDisable()
extern MethodInfo CardboardOnGUIWindow_OnDisable_m161_MethodInfo;
extern "C" void CardboardOnGUIWindow_OnDisable_m161 (CardboardOnGUIWindow_t61 * __this, MethodInfo* method)
{
	{
		MeshRenderer_t60 * L_0 = (__this->___meshRenderer_2);
		NullCheck(L_0);
		Renderer_set_enabled_m784(L_0, 0, /*hidden argument*/&Renderer_set_enabled_m784_MethodInfo);
		return;
	}
}
// System.Void CardboardOnGUIWindow::LateUpdate()
extern MethodInfo CardboardOnGUIWindow_LateUpdate_m162_MethodInfo;
extern "C" void CardboardOnGUIWindow_LateUpdate_m162 (CardboardOnGUIWindow_t61 * __this, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		MeshRenderer_t60 * L_0 = (__this->___meshRenderer_2);
		bool L_1 = CardboardOnGUI_get_IsGUIVisible_m146(NULL /*static, unused*/, /*hidden argument*/&CardboardOnGUI_get_IsGUIVisible_m146_MethodInfo);
		NullCheck(L_0);
		Renderer_set_enabled_m784(L_0, L_1, /*hidden argument*/&Renderer_set_enabled_m784_MethodInfo);
		MeshRenderer_t60 * L_2 = (__this->___meshRenderer_2);
		NullCheck(L_2);
		Material_t88 * L_3 = Renderer_get_material_m586(L_2, /*hidden argument*/&Renderer_get_material_m586_MethodInfo);
		Rect_t62 * L_4 = &(__this->___rect_3);
		Vector2_t48  L_5 = Rect_get_position_m779(L_4, /*hidden argument*/&Rect_get_position_m779_MethodInfo);
		NullCheck(L_3);
		Material_set_mainTextureOffset_m780(L_3, L_5, /*hidden argument*/&Material_set_mainTextureOffset_m780_MethodInfo);
		MeshRenderer_t60 * L_6 = (__this->___meshRenderer_2);
		NullCheck(L_6);
		Material_t88 * L_7 = Renderer_get_material_m586(L_6, /*hidden argument*/&Renderer_get_material_m586_MethodInfo);
		Rect_t62 * L_8 = &(__this->___rect_3);
		Vector2_t48  L_9 = Rect_get_size_m781(L_8, /*hidden argument*/&Rect_get_size_m781_MethodInfo);
		NullCheck(L_7);
		Material_set_mainTextureScale_m782(L_7, L_9, /*hidden argument*/&Material_set_mainTextureScale_m782_MethodInfo);
		int32_t L_10 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		Rect_t62 * L_11 = &(__this->___rect_3);
		float L_12 = Rect_get_width_m765(L_11, /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		int32_t L_13 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Rect_t62 * L_14 = &(__this->___rect_3);
		float L_15 = Rect_get_height_m767(L_14, /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		V_0 = ((float)((float)((float)((float)(((float)L_10))*(float)L_12))/(float)((float)((float)(((float)L_13))*(float)L_15))));
		Transform_t2 * L_16 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		float L_17 = V_0;
		Vector3_t5  L_18 = {0};
		Vector3__ctor_m510(&L_18, L_17, (1.0f), (1.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		NullCheck(L_16);
		Transform_set_localScale_m578(L_16, L_18, /*hidden argument*/&Transform_set_localScale_m578_MethodInfo);
		return;
	}
}
// SkyboxMesh
#include "AssemblyU2DCSharp_SkyboxMesh.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SkyboxMesh_t63_il2cpp_TypeInfo;
// SkyboxMesh
#include "AssemblyU2DCSharp_SkyboxMeshMethodDeclarations.h"



// System.Void SkyboxMesh::.ctor()
extern MethodInfo SkyboxMesh__ctor_m163_MethodInfo;
extern "C" void SkyboxMesh__ctor_m163 (SkyboxMesh_t63 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void SkyboxMesh::Awake()
extern MethodInfo SkyboxMesh_Awake_m164_MethodInfo;
extern "C" void SkyboxMesh_Awake_m164 (SkyboxMesh_t63 * __this, MethodInfo* method)
{
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral32, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		Object_Destroy_m625(NULL /*static, unused*/, __this, /*hidden argument*/&Object_Destroy_m625_MethodInfo);
		return;
	}
}
// StereoLensFlare
#include "AssemblyU2DCSharp_StereoLensFlare.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StereoLensFlare_t64_il2cpp_TypeInfo;
// StereoLensFlare
#include "AssemblyU2DCSharp_StereoLensFlareMethodDeclarations.h"



// System.Void StereoLensFlare::.ctor()
extern MethodInfo StereoLensFlare__ctor_m165_MethodInfo;
extern "C" void StereoLensFlare__ctor_m165 (StereoLensFlare_t64 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void StereoLensFlare::Awake()
extern MethodInfo StereoLensFlare_Awake_m166_MethodInfo;
extern "C" void StereoLensFlare_Awake_m166 (StereoLensFlare_t64 * __this, MethodInfo* method)
{
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral33, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		Object_Destroy_m625(NULL /*static, unused*/, __this, /*hidden argument*/&Object_Destroy_m625_MethodInfo);
		return;
	}
}
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Eye_t65_il2cpp_TypeInfo;
// Cardboard/Eye
#include "AssemblyU2DCSharp_Cardboard_EyeMethodDeclarations.h"



// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Distortion_t66_il2cpp_TypeInfo;
// Cardboard/Distortion
#include "AssemblyU2DCSharp_Cardboard_DistortionMethodDeclarations.h"



// Cardboard/<EndOfFrame>c__Iterator0
#include "AssemblyU2DCSharp_Cardboard_U3CEndOfFrameU3Ec__Iterator0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CEndOfFrameU3Ec__Iterator0_t68_il2cpp_TypeInfo;
// Cardboard/<EndOfFrame>c__Iterator0
#include "AssemblyU2DCSharp_Cardboard_U3CEndOfFrameU3Ec__Iterator0MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDevice.h"
// CardboardUILayer
#include "AssemblyU2DCSharp_CardboardUILayer.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo WaitForEndOfFrame_t206_il2cpp_TypeInfo;
extern TypeInfo BaseVRDevice_t69_il2cpp_TypeInfo;
extern TypeInfo CardboardUILayer_t70_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t207_il2cpp_TypeInfo;
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// BaseVRDevice
#include "AssemblyU2DCSharp_BaseVRDeviceMethodDeclarations.h"
// CardboardUILayer
#include "AssemblyU2DCSharp_CardboardUILayerMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo WaitForEndOfFrame__ctor_m786_MethodInfo;
extern MethodInfo Cardboard_UpdateState_m213_MethodInfo;
extern MethodInfo BaseVRDevice_PostRender_m787_MethodInfo;
extern MethodInfo Cardboard_get_NativeUILayerSupported_m196_MethodInfo;
extern MethodInfo CardboardUILayer__ctor_m267_MethodInfo;
extern MethodInfo CardboardUILayer_Draw_m270_MethodInfo;
extern MethodInfo Cardboard_DispatchEvents_m214_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m788_MethodInfo;


// System.Void Cardboard/<EndOfFrame>c__Iterator0::.ctor()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0__ctor_m167_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator0__ctor_m167 (U3CEndOfFrameU3Ec__Iterator0_t68 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Object Cardboard/<EndOfFrame>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m168_MethodInfo;
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m168 (U3CEndOfFrameU3Ec__Iterator0_t68 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Object Cardboard/<EndOfFrame>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m169_MethodInfo;
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m169 (U3CEndOfFrameU3Ec__Iterator0_t68 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Boolean Cardboard/<EndOfFrame>c__Iterator0::MoveNext()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_MoveNext_m170_MethodInfo;
extern "C" bool U3CEndOfFrameU3Ec__Iterator0_MoveNext_m170 (U3CEndOfFrameU3Ec__Iterator0_t68 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___$PC_0);
		V_0 = L_0;
		__this->___$PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_00cb;
	}

IL_0021:
	{
		WaitForEndOfFrame_t206 * L_2 = (WaitForEndOfFrame_t206 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t206_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m786(L_2, /*hidden argument*/&WaitForEndOfFrame__ctor_m786_MethodInfo);
		__this->___$current_1 = L_2;
		__this->___$PC_0 = 1;
		goto IL_00cd;
	}

IL_0038:
	{
		Cardboard_t67 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		Cardboard_UpdateState_m213(L_3, /*hidden argument*/&Cardboard_UpdateState_m213_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_4 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		Cardboard_t67 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		bool L_6 = (L_5->___vrModeEnabled_4);
		NullCheck(L_4);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_PostRender_m787_MethodInfo, L_4, L_6);
		Cardboard_t67 * L_7 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_7);
		bool L_8 = (L_7->___vrModeEnabled_4);
		if (!L_8)
		{
			goto IL_00a8;
		}
	}
	{
		Cardboard_t67 * L_9 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_9);
		bool L_10 = Cardboard_get_NativeUILayerSupported_m196(L_9, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m196_MethodInfo);
		if (L_10)
		{
			goto IL_00a8;
		}
	}
	{
		Cardboard_t67 * L_11 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_11);
		CardboardUILayer_t70 * L_12 = (L_11->___uiLayer_15);
		if (L_12)
		{
			goto IL_0098;
		}
	}
	{
		Cardboard_t67 * L_13 = (__this->___U3CU3Ef__this_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo));
		CardboardUILayer_t70 * L_14 = (CardboardUILayer_t70 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo));
		CardboardUILayer__ctor_m267(L_14, /*hidden argument*/&CardboardUILayer__ctor_m267_MethodInfo);
		NullCheck(L_13);
		L_13->___uiLayer_15 = L_14;
	}

IL_0098:
	{
		Cardboard_t67 * L_15 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_15);
		CardboardUILayer_t70 * L_16 = (L_15->___uiLayer_15);
		NullCheck(L_16);
		CardboardUILayer_Draw_m270(L_16, /*hidden argument*/&CardboardUILayer_Draw_m270_MethodInfo);
	}

IL_00a8:
	{
		Cardboard_t67 * L_17 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_17);
		Cardboard_DispatchEvents_m214(L_17, /*hidden argument*/&Cardboard_DispatchEvents_m214_MethodInfo);
		Cardboard_t67 * L_18 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_18);
		L_18->___updated_14 = 0;
		goto IL_0021;
	}
	// Dead block : IL_00c4: ldarg.0

IL_00cb:
	{
		return 0;
	}

IL_00cd:
	{
		return 1;
	}
}
// System.Void Cardboard/<EndOfFrame>c__Iterator0::Dispose()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_Dispose_m171_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator0_Dispose_m171 (U3CEndOfFrameU3Ec__Iterator0_t68 * __this, MethodInfo* method)
{
	{
		__this->___$PC_0 = (-1);
		return;
	}
}
// System.Void Cardboard/<EndOfFrame>c__Iterator0::Reset()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator0_Reset_m172_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator0_Reset_m172 (U3CEndOfFrameU3Ec__Iterator0_t68 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfile.h"
// Pose3D
#include "AssemblyU2DCSharp_Pose3D.h"
// System.Action
#include "System_Core_System_Action.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
extern TypeInfo Action_t71_il2cpp_TypeInfo;
extern TypeInfo List_1_t95_il2cpp_TypeInfo;
// Pose3D
#include "AssemblyU2DCSharp_Pose3DMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"
extern Il2CppType List_1_t95_0_0_0;
extern MethodInfo Cardboard_get_NativeDistortionCorrectionSupported_m194_MethodInfo;
extern MethodInfo BaseVRDevice_SetDistortionCorrectionEnabled_m789_MethodInfo;
extern MethodInfo BaseVRDevice_SetVRModeEnabled_m790_MethodInfo;
extern MethodInfo BaseVRDevice_SetAlignmentMarkerEnabled_m791_MethodInfo;
extern MethodInfo BaseVRDevice_SetSettingsButtonEnabled_m792_MethodInfo;
extern MethodInfo Mathf_Approximately_m793_MethodInfo;
extern MethodInfo BaseVRDevice_SetNeckModelScale_m794_MethodInfo;
extern MethodInfo BaseVRDevice_SetAutoDriftCorrectionEnabled_m795_MethodInfo;
extern MethodInfo Cardboard_CreateStereoScreen_m217_MethodInfo;
extern MethodInfo Cardboard_set_StereoScreen_m199_MethodInfo;
extern MethodInfo Debug_LogError_m796_MethodInfo;
extern MethodInfo RenderTexture_IsCreated_m797_MethodInfo;
extern MethodInfo BaseVRDevice_SetStereoScreen_m798_MethodInfo;
extern MethodInfo BaseVRDevice_get_Profile_m325_MethodInfo;
extern MethodInfo BaseVRDevice_GetHeadPose_m331_MethodInfo;
extern MethodInfo Cardboard_get_DistortionCorrection_m180_MethodInfo;
extern MethodInfo Cardboard_set_DistortionCorrection_m181_MethodInfo;
extern MethodInfo Cardboard_get_HeadPose_m202_MethodInfo;
extern MethodInfo Pose3D_get_Matrix_m289_MethodInfo;
extern MethodInfo Pose3D_get_Orientation_m287_MethodInfo;
extern MethodInfo Pose3D_get_Position_m285_MethodInfo;
extern MethodInfo Cardboard_get_ComfortableViewingRange_m206_MethodInfo;
extern MethodInfo BaseVRDevice_GetEyePose_m332_MethodInfo;
extern MethodInfo BaseVRDevice_GetProjection_m333_MethodInfo;
extern MethodInfo BaseVRDevice_GetViewport_m334_MethodInfo;
extern MethodInfo BaseVRDevice_Destroy_m340_MethodInfo;
extern MethodInfo BaseVRDevice_GetDevice_m343_MethodInfo;
extern MethodInfo BaseVRDevice_Init_m799_MethodInfo;
extern MethodInfo List_1__ctor_m800_MethodInfo;
extern MethodInfo BaseVRDevice_SupportsNativeDistortionCorrection_m327_MethodInfo;
extern MethodInfo Cardboard_set_NativeDistortionCorrectionSupported_m195_MethodInfo;
extern MethodInfo List_1_get_Count_m801_MethodInfo;
extern MethodInfo String_Join_m802_MethodInfo;
extern MethodInfo String_Concat_m803_MethodInfo;
extern MethodInfo List_1_Clear_m804_MethodInfo;
extern MethodInfo BaseVRDevice_SupportsNativeUILayer_m328_MethodInfo;
extern MethodInfo Cardboard_set_NativeUILayerSupported_m197_MethodInfo;
extern MethodInfo BaseVRDevice_UpdateScreenData_m805_MethodInfo;
extern MethodInfo Application_set_targetFrameRate_m806_MethodInfo;
extern MethodInfo Cardboard_InitDevice_m207_MethodInfo;
extern MethodInfo Cardboard_AddDummyCamera_m215_MethodInfo;
extern MethodInfo BaseVRDevice_UpdateState_m807_MethodInfo;
extern MethodInfo Input_GetMouseButtonUp_m808_MethodInfo;
extern MethodInfo Input_GetKeyUp_m809_MethodInfo;
extern MethodInfo Cardboard_set_Triggered_m210_MethodInfo;
extern MethodInfo Cardboard_set_Tilted_m212_MethodInfo;
extern MethodInfo Cardboard_get_Tilted_m211_MethodInfo;
extern MethodInfo Action_Invoke_m810_MethodInfo;
extern MethodInfo Camera_set_clearFlags_m811_MethodInfo;
extern MethodInfo Camera_set_backgroundColor_m812_MethodInfo;
extern MethodInfo Camera_set_cullingMask_m813_MethodInfo;
extern MethodInfo Camera_set_useOcclusionCulling_m814_MethodInfo;
extern MethodInfo Camera_set_depth_m815_MethodInfo;
extern MethodInfo BaseVRDevice_CreateStereoScreen_m330_MethodInfo;
extern MethodInfo BaseVRDevice_Recenter_m816_MethodInfo;
extern MethodInfo BaseVRDevice_SetTouchCoordinates_m335_MethodInfo;
extern MethodInfo BaseVRDevice_OnPause_m336_MethodInfo;
extern MethodInfo MonoBehaviour_StartCoroutine_m817_MethodInfo;
extern MethodInfo MonoBehaviour_StopCoroutine_m818_MethodInfo;
extern MethodInfo BaseVRDevice_OnFocus_m337_MethodInfo;
extern MethodInfo BaseVRDevice_Reset_m338_MethodInfo;
extern MethodInfo BaseVRDevice_OnApplicationQuit_m339_MethodInfo;
extern MethodInfo Cardboard_EyePose_m203_MethodInfo;
extern MethodInfo Cardboard_Projection_m204_MethodInfo;
extern MethodInfo Cardboard_Viewport_m205_MethodInfo;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Cardboard>()
// !!0 UnityEngine.GameObject::AddComponent<Cardboard>()
extern "C" Cardboard_t67 * GameObject_AddComponent_TisCardboard_t67_m819 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// UnityEngine.CastHelper`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_11.h"
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
#define GameObject_GetComponent_TisCamera_t15_m820(__this, method) (( Camera_t15 * (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponent_TisObject_t_m547_gshared)(__this, method)
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
extern "C" Camera_t15 * GameObject_AddComponent_TisCamera_t15_m821 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod GameObject_AddComponent_TisCardboard_t67_m819_GenericMethod;
extern Il2CppGenericMethod List_1__ctor_m800_GenericMethod;
extern Il2CppGenericMethod List_1_get_Count_m801_GenericMethod;
extern Il2CppGenericMethod List_1_ToArray_m822_GenericMethod;
extern Il2CppGenericMethod List_1_Clear_m804_GenericMethod;
extern Il2CppGenericMethod GameObject_GetComponent_TisCamera_t15_m820_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCamera_t15_m821_GenericMethod;


// System.Void Cardboard::.ctor()
extern MethodInfo Cardboard__ctor_m173_MethodInfo;
extern "C" void Cardboard__ctor_m173 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		__this->___distortionCorrection_3 = 1;
		__this->___vrModeEnabled_4 = 1;
		__this->___enableAlignmentMarker_5 = 1;
		__this->___enableSettingsButton_6 = 1;
		__this->___TapIsTrigger_7 = 1;
		__this->___autoDriftCorrection_9 = 1;
		Vector2_t48  L_0 = {0};
		Vector2__ctor_m588(&L_0, (1.0f), (100000.0f), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		__this->___defaultComfortableViewingRange_13 = L_0;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Cardboard::.cctor()
extern MethodInfo Cardboard__cctor_m174_MethodInfo;
extern "C" void Cardboard__cctor_m174 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Cardboard::add_OnTrigger(System.Action)
extern MethodInfo Cardboard_add_OnTrigger_m175_MethodInfo;
extern "C" void Cardboard_add_OnTrigger_m175 (Cardboard_t67 * __this, Action_t71 * ___value, MethodInfo* method)
{
	{
		Action_t71 * L_0 = (__this->___OnTrigger_16);
		Action_t71 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Combine_m665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		__this->___OnTrigger_16 = ((Action_t71 *)Castclass(L_2, InitializedTypeInfo(&Action_t71_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void Cardboard::remove_OnTrigger(System.Action)
extern MethodInfo Cardboard_remove_OnTrigger_m176_MethodInfo;
extern "C" void Cardboard_remove_OnTrigger_m176 (Cardboard_t67 * __this, Action_t71 * ___value, MethodInfo* method)
{
	{
		Action_t71 * L_0 = (__this->___OnTrigger_16);
		Action_t71 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Remove_m666(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m666_MethodInfo);
		__this->___OnTrigger_16 = ((Action_t71 *)Castclass(L_2, InitializedTypeInfo(&Action_t71_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void Cardboard::add_OnTilt(System.Action)
extern MethodInfo Cardboard_add_OnTilt_m177_MethodInfo;
extern "C" void Cardboard_add_OnTilt_m177 (Cardboard_t67 * __this, Action_t71 * ___value, MethodInfo* method)
{
	{
		Action_t71 * L_0 = (__this->___OnTilt_17);
		Action_t71 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Combine_m665(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Combine_m665_MethodInfo);
		__this->___OnTilt_17 = ((Action_t71 *)Castclass(L_2, InitializedTypeInfo(&Action_t71_il2cpp_TypeInfo)));
		return;
	}
}
// System.Void Cardboard::remove_OnTilt(System.Action)
extern MethodInfo Cardboard_remove_OnTilt_m178_MethodInfo;
extern "C" void Cardboard_remove_OnTilt_m178 (Cardboard_t67 * __this, Action_t71 * ___value, MethodInfo* method)
{
	{
		Action_t71 * L_0 = (__this->___OnTilt_17);
		Action_t71 * L_1 = ___value;
		Delegate_t200 * L_2 = Delegate_Remove_m666(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Delegate_Remove_m666_MethodInfo);
		__this->___OnTilt_17 = ((Action_t71 *)Castclass(L_2, InitializedTypeInfo(&Action_t71_il2cpp_TypeInfo)));
		return;
	}
}
// Cardboard Cardboard::get_SDK()
extern MethodInfo* Object_FindObjectOfType_TisCardboard_t67_m545_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisCardboard_t67_m819_MethodInfo_var;
extern "C" Cardboard_t67 * Cardboard_get_SDK_m179 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Cardboard_get_SDK_m179_init;
	if (!Cardboard_get_SDK_m179_init)
	{
		Object_FindObjectOfType_TisCardboard_t67_m545_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Object_FindObjectOfType_TisCardboard_t67_m545_GenericMethod);
		GameObject_AddComponent_TisCardboard_t67_m819_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCardboard_t67_m819_GenericMethod);
		Cardboard_get_SDK_m179_init = true;
	}
	GameObject_t7 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Cardboard_t67 * L_2 = Object_FindObjectOfType_TisCardboard_t67_m545(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisCardboard_t67_m545_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2 = L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_3 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_4 = Object_op_Equality_m528(NULL /*static, unused*/, L_3, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral34, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		GameObject_t7 * L_5 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m557(L_5, (String_t*) &_stringLiteral35, /*hidden argument*/&GameObject__ctor_m557_MethodInfo);
		V_0 = L_5;
		GameObject_t7 * L_6 = V_0;
		NullCheck(L_6);
		Cardboard_t67 * L_7 = GameObject_AddComponent_TisCardboard_t67_m819(L_6, /*hidden argument*/GameObject_AddComponent_TisCardboard_t67_m819_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2 = L_7;
		GameObject_t7 * L_8 = V_0;
		NullCheck(L_8);
		Transform_t2 * L_9 = GameObject_get_transform_m558(L_8, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Vector3_t5  L_10 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		NullCheck(L_9);
		Transform_set_localPosition_m579(L_9, L_10, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_11 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		return L_11;
	}
}
// System.Boolean Cardboard::get_DistortionCorrection()
extern "C" bool Cardboard_get_DistortionCorrection_m180 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___distortionCorrection_3);
		return L_0;
	}
}
// System.Void Cardboard::set_DistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_DistortionCorrection_m181 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	BaseVRDevice_t69 * G_B4_0 = {0};
	BaseVRDevice_t69 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	BaseVRDevice_t69 * G_B5_1 = {0};
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___distortionCorrection_3);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_3 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0029;
		}
	}
	{
		bool L_5 = Cardboard_get_NativeDistortionCorrectionSupported_m194(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m194_MethodInfo);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B3_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetDistortionCorrectionEnabled_m789_MethodInfo, G_B5_1, G_B5_0);
	}

IL_002f:
	{
		bool L_6 = ___value;
		__this->___distortionCorrection_3 = L_6;
		return;
	}
}
// System.Boolean Cardboard::get_VRModeEnabled()
extern "C" bool Cardboard_get_VRModeEnabled_m182 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___vrModeEnabled_4);
		return L_0;
	}
}
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
extern "C" void Cardboard_set_VRModeEnabled_m183 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___vrModeEnabled_4);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_3 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetVRModeEnabled_m790_MethodInfo, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___vrModeEnabled_4 = L_5;
		return;
	}
}
// System.Boolean Cardboard::get_EnableAlignmentMarker()
extern MethodInfo Cardboard_get_EnableAlignmentMarker_m184_MethodInfo;
extern "C" bool Cardboard_get_EnableAlignmentMarker_m184 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___enableAlignmentMarker_5);
		return L_0;
	}
}
// System.Void Cardboard::set_EnableAlignmentMarker(System.Boolean)
extern MethodInfo Cardboard_set_EnableAlignmentMarker_m185_MethodInfo;
extern "C" void Cardboard_set_EnableAlignmentMarker_m185 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	BaseVRDevice_t69 * G_B4_0 = {0};
	BaseVRDevice_t69 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	BaseVRDevice_t69 * G_B5_1 = {0};
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___enableAlignmentMarker_5);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_3 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0029;
		}
	}
	{
		bool L_5 = Cardboard_get_NativeUILayerSupported_m196(__this, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m196_MethodInfo);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B3_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetAlignmentMarkerEnabled_m791_MethodInfo, G_B5_1, G_B5_0);
	}

IL_002f:
	{
		bool L_6 = ___value;
		__this->___enableAlignmentMarker_5 = L_6;
		return;
	}
}
// System.Boolean Cardboard::get_EnableSettingsButton()
extern MethodInfo Cardboard_get_EnableSettingsButton_m186_MethodInfo;
extern "C" bool Cardboard_get_EnableSettingsButton_m186 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___enableSettingsButton_6);
		return L_0;
	}
}
// System.Void Cardboard::set_EnableSettingsButton(System.Boolean)
extern MethodInfo Cardboard_set_EnableSettingsButton_m187_MethodInfo;
extern "C" void Cardboard_set_EnableSettingsButton_m187 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	BaseVRDevice_t69 * G_B4_0 = {0};
	BaseVRDevice_t69 * G_B3_0 = {0};
	int32_t G_B5_0 = 0;
	BaseVRDevice_t69 * G_B5_1 = {0};
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___enableSettingsButton_6);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_3 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		G_B3_0 = L_3;
		if (!L_4)
		{
			G_B4_0 = L_3;
			goto IL_0029;
		}
	}
	{
		bool L_5 = Cardboard_get_NativeUILayerSupported_m196(__this, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m196_MethodInfo);
		G_B5_0 = ((int32_t)(L_5));
		G_B5_1 = G_B3_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_002a:
	{
		NullCheck(G_B5_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetSettingsButtonEnabled_m792_MethodInfo, G_B5_1, G_B5_0);
	}

IL_002f:
	{
		bool L_6 = ___value;
		__this->___enableSettingsButton_6 = L_6;
		return;
	}
}
// System.Single Cardboard::get_NeckModelScale()
extern MethodInfo Cardboard_get_NeckModelScale_m188_MethodInfo;
extern "C" float Cardboard_get_NeckModelScale_m188 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		float L_0 = (__this->___neckModelScale_8);
		return L_0;
	}
}
// System.Void Cardboard::set_NeckModelScale(System.Single)
extern MethodInfo Cardboard_set_NeckModelScale_m189_MethodInfo;
extern "C" void Cardboard_set_NeckModelScale_m189 (Cardboard_t67 * __this, float ___value, MethodInfo* method)
{
	{
		float L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_1 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_0, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		___value = L_1;
		float L_2 = ___value;
		float L_3 = (__this->___neckModelScale_8);
		bool L_4 = Mathf_Approximately_m793(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Mathf_Approximately_m793_MethodInfo);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_5 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_6 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		float L_7 = ___value;
		NullCheck(L_6);
		VirtActionInvoker1< float >::Invoke(&BaseVRDevice_SetNeckModelScale_m794_MethodInfo, L_6, L_7);
	}

IL_002e:
	{
		float L_8 = ___value;
		__this->___neckModelScale_8 = L_8;
		return;
	}
}
// System.Boolean Cardboard::get_AutoDriftCorrection()
extern MethodInfo Cardboard_get_AutoDriftCorrection_m190_MethodInfo;
extern "C" bool Cardboard_get_AutoDriftCorrection_m190 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___autoDriftCorrection_9);
		return L_0;
	}
}
// System.Void Cardboard::set_AutoDriftCorrection(System.Boolean)
extern MethodInfo Cardboard_set_AutoDriftCorrection_m191_MethodInfo;
extern "C" void Cardboard_set_AutoDriftCorrection_m191 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		bool L_1 = (__this->___autoDriftCorrection_9);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_3 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_4 = ___value;
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetAutoDriftCorrectionEnabled_m795_MethodInfo, L_3, L_4);
	}

IL_0021:
	{
		bool L_5 = ___value;
		__this->___autoDriftCorrection_9 = L_5;
		return;
	}
}
// System.Boolean Cardboard::get_SyncWithCardboardApp()
extern MethodInfo Cardboard_get_SyncWithCardboardApp_m192_MethodInfo;
extern "C" bool Cardboard_get_SyncWithCardboardApp_m192 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___syncWithCardboardApp_10);
		return L_0;
	}
}
// System.Void Cardboard::set_SyncWithCardboardApp(System.Boolean)
extern MethodInfo Cardboard_set_SyncWithCardboardApp_m193_MethodInfo;
extern "C" void Cardboard_set_SyncWithCardboardApp_m193 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = ___value;
		bool L_2 = (__this->___syncWithCardboardApp_10);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		Debug_LogWarning_m746(NULL /*static, unused*/, (String_t*) &_stringLiteral36, /*hidden argument*/&Debug_LogWarning_m746_MethodInfo);
	}

IL_001c:
	{
		bool L_3 = ___value;
		__this->___syncWithCardboardApp_10 = L_3;
		return;
	}
}
// System.Boolean Cardboard::get_NativeDistortionCorrectionSupported()
extern "C" bool Cardboard_get_NativeDistortionCorrectionSupported_m194 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_18);
		return L_0;
	}
}
// System.Void Cardboard::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C" void Cardboard_set_NativeDistortionCorrectionSupported_m195 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_18 = L_0;
		return;
	}
}
// System.Boolean Cardboard::get_NativeUILayerSupported()
extern "C" bool Cardboard_get_NativeUILayerSupported_m196 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CNativeUILayerSupportedU3Ek__BackingField_19);
		return L_0;
	}
}
// System.Void Cardboard::set_NativeUILayerSupported(System.Boolean)
extern "C" void Cardboard_set_NativeUILayerSupported_m197 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CNativeUILayerSupportedU3Ek__BackingField_19 = L_0;
		return;
	}
}
// UnityEngine.RenderTexture Cardboard::get_StereoScreen()
extern "C" RenderTexture_t56 * Cardboard_get_StereoScreen_m198 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___distortionCorrection_3);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = (__this->___vrModeEnabled_4);
		if (L_1)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (RenderTexture_t56 *)NULL;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		RenderTexture_t56 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		bool L_3 = Object_op_Equality_m528(NULL /*static, unused*/, L_2, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		bool L_4 = Cardboard_get_NativeDistortionCorrectionSupported_m194(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m194_MethodInfo);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		RenderTexture_t56 * L_5 = Cardboard_CreateStereoScreen_m217(__this, /*hidden argument*/&Cardboard_CreateStereoScreen_m217_MethodInfo);
		Cardboard_set_StereoScreen_m199(__this, L_5, /*hidden argument*/&Cardboard_set_StereoScreen_m199_MethodInfo);
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		RenderTexture_t56 * L_6 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		return L_6;
	}
}
// System.Void Cardboard::set_StereoScreen(UnityEngine.RenderTexture)
extern "C" void Cardboard_set_StereoScreen_m199 (Cardboard_t67 * __this, RenderTexture_t56 * ___value, MethodInfo* method)
{
	{
		RenderTexture_t56 * L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		RenderTexture_t56 * L_1 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		bool L_2 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		bool L_3 = Cardboard_get_NativeDistortionCorrectionSupported_m194(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m194_MethodInfo);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		RenderTexture_t56 * L_4 = ___value;
		bool L_5 = Object_op_Inequality_m527(NULL /*static, unused*/, L_4, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Debug_LogError_m796(NULL /*static, unused*/, (String_t*) &_stringLiteral37, /*hidden argument*/&Debug_LogError_m796_MethodInfo);
		return;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		RenderTexture_t56 * L_6 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		bool L_7 = Object_op_Inequality_m527(NULL /*static, unused*/, L_6, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		RenderTexture_t56 * L_8 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		NullCheck(L_8);
		RenderTexture_Release_m747(L_8, /*hidden argument*/&RenderTexture_Release_m747_MethodInfo);
	}

IL_004d:
	{
		RenderTexture_t56 * L_9 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12 = L_9;
		RenderTexture_t56 * L_10 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		bool L_11 = Object_op_Inequality_m527(NULL /*static, unused*/, L_10, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		RenderTexture_t56 * L_12 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		NullCheck(L_12);
		bool L_13 = RenderTexture_IsCreated_m797(L_12, /*hidden argument*/&RenderTexture_IsCreated_m797_MethodInfo);
		if (L_13)
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		RenderTexture_t56 * L_14 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		NullCheck(L_14);
		RenderTexture_Create_m752(L_14, /*hidden argument*/&RenderTexture_Create_m752_MethodInfo);
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_15 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_16 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		RenderTexture_t56 * L_17 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___stereoScreen_12;
		NullCheck(L_16);
		VirtActionInvoker1< RenderTexture_t56 * >::Invoke(&BaseVRDevice_SetStereoScreen_m798_MethodInfo, L_16, L_17);
	}

IL_0096:
	{
		return;
	}
}
// System.Boolean Cardboard::get_UseDistortionEffect()
extern MethodInfo Cardboard_get_UseDistortionEffect_m200_MethodInfo;
extern "C" bool Cardboard_get_UseDistortionEffect_m200 (Cardboard_t67 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		bool L_0 = Cardboard_get_NativeDistortionCorrectionSupported_m194(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m194_MethodInfo);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		bool L_1 = (__this->___distortionCorrection_3);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = (__this->___vrModeEnabled_4);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		bool L_3 = SystemInfo_get_supportsRenderTextures_m745(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m745_MethodInfo);
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = 0;
	}

IL_0029:
	{
		return G_B5_0;
	}
}
// CardboardProfile Cardboard::get_Profile()
extern MethodInfo Cardboard_get_Profile_m201_MethodInfo;
extern "C" CardboardProfile_t72 * Cardboard_get_Profile_m201 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		CardboardProfile_t72 * L_1 = BaseVRDevice_get_Profile_m325(L_0, /*hidden argument*/&BaseVRDevice_get_Profile_m325_MethodInfo);
		return L_1;
	}
}
// Pose3D Cardboard::get_HeadPose()
extern "C" Pose3D_t73 * Cardboard_get_HeadPose_m202 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		Pose3D_t73 * L_1 = BaseVRDevice_GetHeadPose_m331(L_0, /*hidden argument*/&BaseVRDevice_GetHeadPose_m331_MethodInfo);
		return L_1;
	}
}
// Pose3D Cardboard::EyePose(Cardboard/Eye)
extern "C" Pose3D_t73 * Cardboard_EyePose_m203 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		NullCheck(L_0);
		Pose3D_t73 * L_2 = BaseVRDevice_GetEyePose_m332(L_0, L_1, /*hidden argument*/&BaseVRDevice_GetEyePose_m332_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Matrix4x4 Cardboard::Projection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t27  Cardboard_Projection_m204 (Cardboard_t67 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		int32_t L_2 = ___distortion;
		NullCheck(L_0);
		Matrix4x4_t27  L_3 = BaseVRDevice_GetProjection_m333(L_0, L_1, L_2, /*hidden argument*/&BaseVRDevice_GetProjection_m333_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Rect Cardboard::Viewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t62  Cardboard_Viewport_m205 (Cardboard_t67 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		int32_t L_1 = ___eye;
		int32_t L_2 = ___distortion;
		NullCheck(L_0);
		Rect_t62  L_3 = BaseVRDevice_GetViewport_m334(L_0, L_1, L_2, /*hidden argument*/&BaseVRDevice_GetViewport_m334_MethodInfo);
		return L_3;
	}
}
// UnityEngine.Vector2 Cardboard::get_ComfortableViewingRange()
extern "C" Vector2_t48  Cardboard_get_ComfortableViewingRange_m206 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		Vector2_t48  L_0 = (__this->___defaultComfortableViewingRange_13);
		return L_0;
	}
}
// System.Void Cardboard::InitDevice()
extern TypeInfo* List_1_t95_il2cpp_TypeInfo_var;
extern MethodInfo* List_1__ctor_m800_MethodInfo_var;
extern MethodInfo* List_1_get_Count_m801_MethodInfo_var;
extern MethodInfo* List_1_ToArray_m822_MethodInfo_var;
extern MethodInfo* List_1_Clear_m804_MethodInfo_var;
extern "C" void Cardboard_InitDevice_m207 (Cardboard_t67 * __this, MethodInfo* method)
{
	static bool Cardboard_InitDevice_m207_init;
	if (!Cardboard_InitDevice_m207_init)
	{
		List_1_t95_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&List_1_t95_0_0_0);
		List_1__ctor_m800_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1__ctor_m800_GenericMethod);
		List_1_get_Count_m801_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_get_Count_m801_GenericMethod);
		List_1_ToArray_m822_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_ToArray_m822_GenericMethod);
		List_1_Clear_m804_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m804_GenericMethod);
		Cardboard_InitDevice_m207_init = true;
	}
	List_1_t95 * V_0 = {0};
	BaseVRDevice_t69 * G_B8_0 = {0};
	BaseVRDevice_t69 * G_B7_0 = {0};
	int32_t G_B9_0 = 0;
	BaseVRDevice_t69 * G_B9_1 = {0};
	BaseVRDevice_t69 * G_B11_0 = {0};
	BaseVRDevice_t69 * G_B10_0 = {0};
	int32_t G_B12_0 = 0;
	BaseVRDevice_t69 * G_B12_1 = {0};
	BaseVRDevice_t69 * G_B14_0 = {0};
	BaseVRDevice_t69 * G_B13_0 = {0};
	int32_t G_B15_0 = 0;
	BaseVRDevice_t69 * G_B15_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_1 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Destroy_m340_MethodInfo, L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_2 = BaseVRDevice_GetDevice_m343(NULL /*static, unused*/, /*hidden argument*/&BaseVRDevice_GetDevice_m343_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11 = L_2;
		BaseVRDevice_t69 * L_3 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Init_m799_MethodInfo, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t95_il2cpp_TypeInfo_var);
		List_1_t95 * L_4 = (List_1_t95 *)il2cpp_codegen_object_new (List_1_t95_il2cpp_TypeInfo_var);
		List_1__ctor_m800(L_4, /*hidden argument*/List_1__ctor_m800_MethodInfo_var);
		V_0 = L_4;
		BaseVRDevice_t69 * L_5 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		List_1_t95 * L_6 = V_0;
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, List_1_t95 * >::Invoke(&BaseVRDevice_SupportsNativeDistortionCorrection_m327_MethodInfo, L_5, L_6);
		Cardboard_set_NativeDistortionCorrectionSupported_m195(__this, L_7, /*hidden argument*/&Cardboard_set_NativeDistortionCorrectionSupported_m195_MethodInfo);
		List_1_t95 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m801_MethodInfo_var, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		List_1_t95 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t208* L_11 = List_1_ToArray_m822(L_10, /*hidden argument*/List_1_ToArray_m822_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_12 = String_Join_m802(NULL /*static, unused*/, (String_t*) &_stringLiteral39, L_11, /*hidden argument*/&String_Join_m802_MethodInfo);
		String_t* L_13 = String_Concat_m803(NULL /*static, unused*/, (String_t*) &_stringLiteral38, L_12, (String_t*) &_stringLiteral40, /*hidden argument*/&String_Concat_m803_MethodInfo);
		Debug_LogWarning_m746(NULL /*static, unused*/, L_13, /*hidden argument*/&Debug_LogWarning_m746_MethodInfo);
	}

IL_006f:
	{
		List_1_t95 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(List_1_Clear_m804_MethodInfo_var, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_15 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		List_1_t95 * L_16 = V_0;
		NullCheck(L_15);
		bool L_17 = (bool)VirtFuncInvoker1< bool, List_1_t95 * >::Invoke(&BaseVRDevice_SupportsNativeUILayer_m328_MethodInfo, L_15, L_16);
		Cardboard_set_NativeUILayerSupported_m197(__this, L_17, /*hidden argument*/&Cardboard_set_NativeUILayerSupported_m197_MethodInfo);
		List_1_t95 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(List_1_get_Count_m801_MethodInfo_var, L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		List_1_t95 * L_20 = V_0;
		NullCheck(L_20);
		StringU5BU5D_t208* L_21 = List_1_ToArray_m822(L_20, /*hidden argument*/List_1_ToArray_m822_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = String_Join_m802(NULL /*static, unused*/, (String_t*) &_stringLiteral39, L_21, /*hidden argument*/&String_Join_m802_MethodInfo);
		String_t* L_23 = String_Concat_m803(NULL /*static, unused*/, (String_t*) &_stringLiteral41, L_22, (String_t*) &_stringLiteral40, /*hidden argument*/&String_Concat_m803_MethodInfo);
		Debug_LogWarning_m746(NULL /*static, unused*/, L_23, /*hidden argument*/&Debug_LogWarning_m746_MethodInfo);
	}

IL_00b6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_24 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_25 = (__this->___vrModeEnabled_4);
		NullCheck(L_24);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetVRModeEnabled_m790_MethodInfo, L_24, L_25);
		BaseVRDevice_t69 * L_26 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_27 = (__this->___distortionCorrection_3);
		G_B7_0 = L_26;
		if (!L_27)
		{
			G_B8_0 = L_26;
			goto IL_00de;
		}
	}
	{
		bool L_28 = Cardboard_get_NativeDistortionCorrectionSupported_m194(__this, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m194_MethodInfo);
		G_B9_0 = ((int32_t)(L_28));
		G_B9_1 = G_B7_0;
		goto IL_00df;
	}

IL_00de:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_00df:
	{
		NullCheck(G_B9_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetDistortionCorrectionEnabled_m789_MethodInfo, G_B9_1, G_B9_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_29 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_30 = (__this->___enableAlignmentMarker_5);
		G_B10_0 = L_29;
		if (!L_30)
		{
			G_B11_0 = L_29;
			goto IL_00fc;
		}
	}
	{
		bool L_31 = Cardboard_get_NativeUILayerSupported_m196(__this, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m196_MethodInfo);
		G_B12_0 = ((int32_t)(L_31));
		G_B12_1 = G_B10_0;
		goto IL_00fd;
	}

IL_00fc:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_00fd:
	{
		NullCheck(G_B12_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetAlignmentMarkerEnabled_m791_MethodInfo, G_B12_1, G_B12_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_32 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_33 = (__this->___enableSettingsButton_6);
		G_B13_0 = L_32;
		if (!L_33)
		{
			G_B14_0 = L_32;
			goto IL_011a;
		}
	}
	{
		bool L_34 = Cardboard_get_NativeUILayerSupported_m196(__this, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m196_MethodInfo);
		G_B15_0 = ((int32_t)(L_34));
		G_B15_1 = G_B13_0;
		goto IL_011b;
	}

IL_011a:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
	}

IL_011b:
	{
		NullCheck(G_B15_1);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetSettingsButtonEnabled_m792_MethodInfo, G_B15_1, G_B15_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_35 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		float L_36 = (__this->___neckModelScale_8);
		NullCheck(L_35);
		VirtActionInvoker1< float >::Invoke(&BaseVRDevice_SetNeckModelScale_m794_MethodInfo, L_35, L_36);
		BaseVRDevice_t69 * L_37 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_38 = (__this->___autoDriftCorrection_9);
		NullCheck(L_37);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_SetAutoDriftCorrectionEnabled_m795_MethodInfo, L_37, L_38);
		BaseVRDevice_t69 * L_39 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_39);
		VirtActionInvoker0::Invoke(&BaseVRDevice_UpdateScreenData_m805_MethodInfo, L_39);
		return;
	}
}
// System.Void Cardboard::Awake()
extern MethodInfo Cardboard_Awake_m208_MethodInfo;
extern "C" void Cardboard_Awake_m208 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2 = __this;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_3 = Object_op_Inequality_m527(NULL /*static, unused*/, L_2, __this, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogWarning_m746(NULL /*static, unused*/, (String_t*) &_stringLiteral42, /*hidden argument*/&Debug_LogWarning_m746_MethodInfo);
		Behaviour_set_enabled_m530(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		return;
	}

IL_0038:
	{
		Application_set_targetFrameRate_m806(NULL /*static, unused*/, ((int32_t)60), /*hidden argument*/&Application_set_targetFrameRate_m806_MethodInfo);
		Cardboard_InitDevice_m207(__this, /*hidden argument*/&Cardboard_InitDevice_m207_MethodInfo);
		Cardboard_AddDummyCamera_m215(__this, /*hidden argument*/&Cardboard_AddDummyCamera_m215_MethodInfo);
		Cardboard_set_StereoScreen_m199(__this, (RenderTexture_t56 *)NULL, /*hidden argument*/&Cardboard_set_StereoScreen_m199_MethodInfo);
		return;
	}
}
// System.Boolean Cardboard::get_Triggered()
extern "C" bool Cardboard_get_Triggered_m209 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CTriggeredU3Ek__BackingField_20);
		return L_0;
	}
}
// System.Void Cardboard::set_Triggered(System.Boolean)
extern "C" void Cardboard_set_Triggered_m210 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CTriggeredU3Ek__BackingField_20 = L_0;
		return;
	}
}
// System.Boolean Cardboard::get_Tilted()
extern "C" bool Cardboard_get_Tilted_m211 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CTiltedU3Ek__BackingField_21);
		return L_0;
	}
}
// System.Void Cardboard::set_Tilted(System.Boolean)
extern "C" void Cardboard_set_Tilted_m212 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CTiltedU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Void Cardboard::UpdateState()
extern "C" void Cardboard_UpdateState_m213 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___updated_14);
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_1 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&BaseVRDevice_UpdateState_m807_MethodInfo, L_1);
		bool L_2 = (__this->___TapIsTrigger_7);
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_3 = Input_GetMouseButtonUp_m808(NULL /*static, unused*/, 0, /*hidden argument*/&Input_GetMouseButtonUp_m808_MethodInfo);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_4 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_4);
		L_4->___triggered_12 = 1;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Input_t169_il2cpp_TypeInfo));
		bool L_5 = Input_GetKeyUp_m809(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/&Input_GetKeyUp_m809_MethodInfo);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_6 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_6);
		L_6->___tilted_13 = 1;
	}

IL_004d:
	{
		__this->___updated_14 = 1;
	}

IL_0054:
	{
		return;
	}
}
// System.Void Cardboard::DispatchEvents()
extern "C" void Cardboard_DispatchEvents_m214 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		bool L_1 = (L_0->___triggered_12);
		Cardboard_set_Triggered_m210(__this, L_1, /*hidden argument*/&Cardboard_set_Triggered_m210_MethodInfo);
		BaseVRDevice_t69 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_2);
		bool L_3 = (L_2->___tilted_13);
		Cardboard_set_Tilted_m212(__this, L_3, /*hidden argument*/&Cardboard_set_Tilted_m212_MethodInfo);
		BaseVRDevice_t69 * L_4 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_4);
		L_4->___triggered_12 = 0;
		BaseVRDevice_t69 * L_5 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_5);
		L_5->___tilted_13 = 0;
		bool L_6 = Cardboard_get_Tilted_m211(__this, /*hidden argument*/&Cardboard_get_Tilted_m211_MethodInfo);
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		Action_t71 * L_7 = (__this->___OnTilt_17);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		Action_t71 * L_8 = (__this->___OnTilt_17);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(&Action_Invoke_m810_MethodInfo, L_8);
	}

IL_0057:
	{
		bool L_9 = Cardboard_get_Triggered_m209(__this, /*hidden argument*/&Cardboard_get_Triggered_m209_MethodInfo);
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		Action_t71 * L_10 = (__this->___OnTrigger_16);
		if (!L_10)
		{
			goto IL_0078;
		}
	}
	{
		Action_t71 * L_11 = (__this->___OnTrigger_16);
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(&Action_Invoke_m810_MethodInfo, L_11);
	}

IL_0078:
	{
		return;
	}
}
// System.Void Cardboard::AddDummyCamera()
extern MethodInfo* GameObject_GetComponent_TisCamera_t15_m820_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisCamera_t15_m821_MethodInfo_var;
extern "C" void Cardboard_AddDummyCamera_m215 (Cardboard_t67 * __this, MethodInfo* method)
{
	static bool Cardboard_AddDummyCamera_m215_init;
	if (!Cardboard_AddDummyCamera_m215_init)
	{
		GameObject_GetComponent_TisCamera_t15_m820_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponent_TisCamera_t15_m820_GenericMethod);
		GameObject_AddComponent_TisCamera_t15_m821_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCamera_t15_m821_GenericMethod);
		Cardboard_AddDummyCamera_m215_init = true;
	}
	GameObject_t7 * V_0 = {0};
	Camera_t15 * V_1 = {0};
	{
		GameObject_t7 * L_0 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		V_0 = L_0;
		GameObject_t7 * L_1 = V_0;
		NullCheck(L_1);
		Camera_t15 * L_2 = GameObject_GetComponent_TisCamera_t15_m820(L_1, /*hidden argument*/GameObject_GetComponent_TisCamera_t15_m820_MethodInfo_var);
		bool L_3 = Object_op_Implicit_m748(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t7 * L_4 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m557(L_4, (String_t*) &_stringLiteral43, /*hidden argument*/&GameObject__ctor_m557_MethodInfo);
		V_0 = L_4;
		GameObject_t7 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t2 * L_6 = GameObject_get_transform_m558(L_5, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		GameObject_t7 * L_7 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_7);
		Transform_t2 * L_8 = GameObject_get_transform_m558(L_7, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_6);
		Transform_set_parent_m559(L_6, L_8, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
	}

IL_0038:
	{
		GameObject_t7 * L_9 = V_0;
		NullCheck(L_9);
		Camera_t15 * L_10 = GameObject_AddComponent_TisCamera_t15_m821(L_9, /*hidden argument*/GameObject_AddComponent_TisCamera_t15_m821_MethodInfo_var);
		V_1 = L_10;
		Camera_t15 * L_11 = V_1;
		NullCheck(L_11);
		Camera_set_clearFlags_m811(L_11, 2, /*hidden argument*/&Camera_set_clearFlags_m811_MethodInfo);
		Camera_t15 * L_12 = V_1;
		Color_t51  L_13 = Color_get_black_m725(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m725_MethodInfo);
		NullCheck(L_12);
		Camera_set_backgroundColor_m812(L_12, L_13, /*hidden argument*/&Camera_set_backgroundColor_m812_MethodInfo);
		Camera_t15 * L_14 = V_1;
		NullCheck(L_14);
		Camera_set_cullingMask_m813(L_14, 0, /*hidden argument*/&Camera_set_cullingMask_m813_MethodInfo);
		Camera_t15 * L_15 = V_1;
		NullCheck(L_15);
		Camera_set_useOcclusionCulling_m814(L_15, 0, /*hidden argument*/&Camera_set_useOcclusionCulling_m814_MethodInfo);
		Camera_t15 * L_16 = V_1;
		NullCheck(L_16);
		Camera_set_depth_m815(L_16, (-100.0f), /*hidden argument*/&Camera_set_depth_m815_MethodInfo);
		return;
	}
}
// System.Collections.IEnumerator Cardboard::EndOfFrame()
extern MethodInfo Cardboard_EndOfFrame_m216_MethodInfo;
extern "C" Object_t * Cardboard_EndOfFrame_m216 (Cardboard_t67 * __this, MethodInfo* method)
{
	U3CEndOfFrameU3Ec__Iterator0_t68 * V_0 = {0};
	{
		U3CEndOfFrameU3Ec__Iterator0_t68 * L_0 = (U3CEndOfFrameU3Ec__Iterator0_t68 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CEndOfFrameU3Ec__Iterator0_t68_il2cpp_TypeInfo));
		U3CEndOfFrameU3Ec__Iterator0__ctor_m167(L_0, /*hidden argument*/&U3CEndOfFrameU3Ec__Iterator0__ctor_m167_MethodInfo);
		V_0 = L_0;
		U3CEndOfFrameU3Ec__Iterator0_t68 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CEndOfFrameU3Ec__Iterator0_t68 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.RenderTexture Cardboard::CreateStereoScreen()
extern "C" RenderTexture_t56 * Cardboard_CreateStereoScreen_m217 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		RenderTexture_t56 * L_1 = (RenderTexture_t56 *)VirtFuncInvoker0< RenderTexture_t56 * >::Invoke(&BaseVRDevice_CreateStereoScreen_m330_MethodInfo, L_0);
		return L_1;
	}
}
// System.Void Cardboard::Recenter()
extern "C" void Cardboard_Recenter_m218 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Recenter_m816_MethodInfo, L_0);
		return;
	}
}
// System.Void Cardboard::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void Cardboard_SetTouchCoordinates_m219 (Cardboard_t67 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		int32_t L_1 = ___x;
		int32_t L_2 = ___y;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(&BaseVRDevice_SetTouchCoordinates_m335_MethodInfo, L_0, L_1, L_2);
		return;
	}
}
// System.Void Cardboard::OnEnable()
extern MethodInfo Cardboard_OnEnable_m220_MethodInfo;
extern "C" void Cardboard_OnEnable_m220 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_OnPause_m336_MethodInfo, L_0, 0);
		MonoBehaviour_StartCoroutine_m817(__this, (String_t*) &_stringLiteral44, /*hidden argument*/&MonoBehaviour_StartCoroutine_m817_MethodInfo);
		return;
	}
}
// System.Void Cardboard::OnDisable()
extern MethodInfo Cardboard_OnDisable_m221_MethodInfo;
extern "C" void Cardboard_OnDisable_m221 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		MonoBehaviour_StopCoroutine_m818(__this, (String_t*) &_stringLiteral44, /*hidden argument*/&MonoBehaviour_StopCoroutine_m818_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_OnPause_m336_MethodInfo, L_0, 1);
		return;
	}
}
// System.Void Cardboard::OnApplicationPause(System.Boolean)
extern MethodInfo Cardboard_OnApplicationPause_m222_MethodInfo;
extern "C" void Cardboard_OnApplicationPause_m222 (Cardboard_t67 * __this, bool ___pause, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_1 = ___pause;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_OnPause_m336_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void Cardboard::OnApplicationFocus(System.Boolean)
extern MethodInfo Cardboard_OnApplicationFocus_m223_MethodInfo;
extern "C" void Cardboard_OnApplicationFocus_m223 (Cardboard_t67 * __this, bool ___focus, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		bool L_1 = ___focus;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(&BaseVRDevice_OnFocus_m337_MethodInfo, L_0, L_1);
		return;
	}
}
// System.Void Cardboard::OnLevelWasLoaded(System.Int32)
extern MethodInfo Cardboard_OnLevelWasLoaded_m224_MethodInfo;
extern "C" void Cardboard_OnLevelWasLoaded_m224 (Cardboard_t67 * __this, int32_t ___level, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Reset_m338_MethodInfo, L_0);
		return;
	}
}
// System.Void Cardboard::OnDestroy()
extern MethodInfo Cardboard_OnDestroy_m225_MethodInfo;
extern "C" void Cardboard_OnDestroy_m225 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_1 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&BaseVRDevice_Destroy_m340_MethodInfo, L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_2 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2;
		bool L_3 = Object_op_Equality_m528(NULL /*static, unused*/, L_2, __this, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___sdk_2 = (Cardboard_t67 *)NULL;
	}

IL_002a:
	{
		return;
	}
}
// System.Void Cardboard::OnApplicationQuit()
extern MethodInfo Cardboard_OnApplicationQuit_m226_MethodInfo;
extern "C" void Cardboard_OnApplicationQuit_m226 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((Cardboard_t67_StaticFields*)InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo)->static_fields)->___device_11;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(&BaseVRDevice_OnApplicationQuit_m339_MethodInfo, L_0);
		return;
	}
}
// System.Boolean Cardboard::get_nativeDistortionCorrection()
extern MethodInfo Cardboard_get_nativeDistortionCorrection_m227_MethodInfo;
extern "C" bool Cardboard_get_nativeDistortionCorrection_m227 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = Cardboard_get_DistortionCorrection_m180(__this, /*hidden argument*/&Cardboard_get_DistortionCorrection_m180_MethodInfo);
		return L_0;
	}
}
// System.Void Cardboard::set_nativeDistortionCorrection(System.Boolean)
extern MethodInfo Cardboard_set_nativeDistortionCorrection_m228_MethodInfo;
extern "C" void Cardboard_set_nativeDistortionCorrection_m228 (Cardboard_t67 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		Cardboard_set_DistortionCorrection_m181(__this, L_0, /*hidden argument*/&Cardboard_set_DistortionCorrection_m181_MethodInfo);
		return;
	}
}
// System.Boolean Cardboard::get_InCardboard()
extern MethodInfo Cardboard_get_InCardboard_m229_MethodInfo;
extern "C" bool Cardboard_get_InCardboard_m229 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean Cardboard::get_CardboardTriggered()
extern MethodInfo Cardboard_get_CardboardTriggered_m230_MethodInfo;
extern "C" bool Cardboard_get_CardboardTriggered_m230 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		bool L_0 = Cardboard_get_Triggered_m209(__this, /*hidden argument*/&Cardboard_get_Triggered_m209_MethodInfo);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 Cardboard::get_HeadView()
extern MethodInfo Cardboard_get_HeadView_m231_MethodInfo;
extern "C" Matrix4x4_t27  Cardboard_get_HeadView_m231 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		Pose3D_t73 * L_0 = Cardboard_get_HeadPose_m202(__this, /*hidden argument*/&Cardboard_get_HeadPose_m202_MethodInfo);
		NullCheck(L_0);
		Matrix4x4_t27  L_1 = Pose3D_get_Matrix_m289(L_0, /*hidden argument*/&Pose3D_get_Matrix_m289_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Quaternion Cardboard::get_HeadRotation()
extern MethodInfo Cardboard_get_HeadRotation_m232_MethodInfo;
extern "C" Quaternion_t10  Cardboard_get_HeadRotation_m232 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		Pose3D_t73 * L_0 = Cardboard_get_HeadPose_m202(__this, /*hidden argument*/&Cardboard_get_HeadPose_m202_MethodInfo);
		NullCheck(L_0);
		Quaternion_t10  L_1 = Pose3D_get_Orientation_m287(L_0, /*hidden argument*/&Pose3D_get_Orientation_m287_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Vector3 Cardboard::get_HeadPosition()
extern MethodInfo Cardboard_get_HeadPosition_m233_MethodInfo;
extern "C" Vector3_t5  Cardboard_get_HeadPosition_m233 (Cardboard_t67 * __this, MethodInfo* method)
{
	{
		Pose3D_t73 * L_0 = Cardboard_get_HeadPose_m202(__this, /*hidden argument*/&Cardboard_get_HeadPose_m202_MethodInfo);
		NullCheck(L_0);
		Vector3_t5  L_1 = Pose3D_get_Position_m285(L_0, /*hidden argument*/&Pose3D_get_Position_m285_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Matrix4x4 Cardboard::EyeView(Cardboard/Eye)
extern MethodInfo Cardboard_EyeView_m234_MethodInfo;
extern "C" Matrix4x4_t27  Cardboard_EyeView_m234 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Pose3D_t73 * L_1 = Cardboard_EyePose_m203(__this, L_0, /*hidden argument*/&Cardboard_EyePose_m203_MethodInfo);
		NullCheck(L_1);
		Matrix4x4_t27  L_2 = Pose3D_get_Matrix_m289(L_1, /*hidden argument*/&Pose3D_get_Matrix_m289_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Vector3 Cardboard::EyeOffset(Cardboard/Eye)
extern MethodInfo Cardboard_EyeOffset_m235_MethodInfo;
extern "C" Vector3_t5  Cardboard_EyeOffset_m235 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Pose3D_t73 * L_1 = Cardboard_EyePose_m203(__this, L_0, /*hidden argument*/&Cardboard_EyePose_m203_MethodInfo);
		NullCheck(L_1);
		Vector3_t5  L_2 = Pose3D_get_Position_m285(L_1, /*hidden argument*/&Pose3D_get_Position_m285_MethodInfo);
		return L_2;
	}
}
// UnityEngine.Matrix4x4 Cardboard::UndistortedProjection(Cardboard/Eye)
extern MethodInfo Cardboard_UndistortedProjection_m236_MethodInfo;
extern "C" Matrix4x4_t27  Cardboard_UndistortedProjection_m236 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Matrix4x4_t27  L_1 = Cardboard_Projection_m204(__this, L_0, 1, /*hidden argument*/&Cardboard_Projection_m204_MethodInfo);
		return L_1;
	}
}
// UnityEngine.Rect Cardboard::EyeRect(Cardboard/Eye)
extern MethodInfo Cardboard_EyeRect_m237_MethodInfo;
extern "C" Rect_t62  Cardboard_EyeRect_m237 (Cardboard_t67 * __this, int32_t ___eye, MethodInfo* method)
{
	{
		int32_t L_0 = ___eye;
		Rect_t62  L_1 = Cardboard_Viewport_m205(__this, L_0, 0, /*hidden argument*/&Cardboard_Viewport_m205_MethodInfo);
		return L_1;
	}
}
// System.Single Cardboard::get_MinimumComfortDistance()
extern MethodInfo Cardboard_get_MinimumComfortDistance_m238_MethodInfo;
extern "C" float Cardboard_get_MinimumComfortDistance_m238 (Cardboard_t67 * __this, MethodInfo* method)
{
	Vector2_t48  V_0 = {0};
	{
		Vector2_t48  L_0 = Cardboard_get_ComfortableViewingRange_m206(__this, /*hidden argument*/&Cardboard_get_ComfortableViewingRange_m206_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___x_1);
		return L_1;
	}
}
// System.Single Cardboard::get_MaximumComfortDistance()
extern MethodInfo Cardboard_get_MaximumComfortDistance_m239_MethodInfo;
extern "C" float Cardboard_get_MaximumComfortDistance_m239 (Cardboard_t67 * __this, MethodInfo* method)
{
	Vector2_t48  V_0 = {0};
	{
		Vector2_t48  L_0 = Cardboard_get_ComfortableViewingRange_m206(__this, /*hidden argument*/&Cardboard_get_ComfortableViewingRange_m206_MethodInfo);
		V_0 = L_0;
		float L_1 = ((&V_0)->___y_2);
		return L_1;
	}
}
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEye.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CardboardEye_t76_il2cpp_TypeInfo;
// CardboardEye
#include "AssemblyU2DCSharp_CardboardEyeMethodDeclarations.h"

// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// RadialUndistortionEffect
#include "AssemblyU2DCSharp_RadialUndistortionEffect.h"
// CardboardProfile/Device
#include "AssemblyU2DCSharp_CardboardProfile_Device.h"
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_Distortion.h"
// CardboardProfile/Screen
#include "AssemblyU2DCSharp_CardboardProfile_Screen.h"
// CardboardProfile/Lenses
#include "AssemblyU2DCSharp_CardboardProfile_Lenses.h"
extern TypeInfo StereoController_t75_il2cpp_TypeInfo;
extern TypeInfo CardboardProfile_t72_il2cpp_TypeInfo;
extern TypeInfo Device_t83_il2cpp_TypeInfo;
extern TypeInfo Distortion_t82_il2cpp_TypeInfo;
extern TypeInfo Screen_t79_il2cpp_TypeInfo;
extern TypeInfo Lenses_t80_il2cpp_TypeInfo;
// UnityEngine.Graphics
#include "UnityEngine_UnityEngine_GraphicsMethodDeclarations.h"
// CardboardProfile
#include "AssemblyU2DCSharp_CardboardProfileMethodDeclarations.h"
extern MethodInfo Application_get_isEditor_m823_MethodInfo;
extern MethodInfo Application_get_isPlaying_m824_MethodInfo;
extern MethodInfo LayerMask_op_Implicit_m825_MethodInfo;
extern MethodInfo CardboardEye_get_Controller_m241_MethodInfo;
extern MethodInfo Camera_get_rect_m826_MethodInfo;
extern MethodInfo Matrix4x4_get_Item_m827_MethodInfo;
extern MethodInfo Matrix4x4_set_Item_m828_MethodInfo;
extern MethodInfo Vector2_get_normalized_m829_MethodInfo;
extern MethodInfo Vector2_op_Multiply_m830_MethodInfo;
extern MethodInfo CardboardEye_CopyCameraAndMakeSideBySide_m249_MethodInfo;
extern MethodInfo Camera_get_projectionMatrix_m831_MethodInfo;
extern MethodInfo Transform_get_lossyScale_m832_MethodInfo;
extern MethodInfo StereoController_ComputeStereoAdjustment_m316_MethodInfo;
extern MethodInfo Camera_get_farClipPlane_m833_MethodInfo;
extern MethodInfo CardboardEye_FixProjection_m245_MethodInfo;
extern MethodInfo Camera_set_projectionMatrix_m834_MethodInfo;
extern MethodInfo Mathf_Atan_m835_MethodInfo;
extern MethodInfo Camera_set_fieldOfView_m836_MethodInfo;
extern MethodInfo Vector4__ctor_m837_MethodInfo;
extern MethodInfo Vector4_op_Division_m838_MethodInfo;
extern MethodInfo Shader_SetGlobalVector_m839_MethodInfo;
extern MethodInfo Vector4__ctor_m840_MethodInfo;
extern MethodInfo StereoController_get_StereoScreen_m311_MethodInfo;
extern MethodInfo Rect_get_x_m841_MethodInfo;
extern MethodInfo Rect_set_x_m842_MethodInfo;
extern MethodInfo Rect_set_width_m843_MethodInfo;
extern MethodInfo Rect_set_height_m844_MethodInfo;
extern MethodInfo Rect_get_y_m845_MethodInfo;
extern MethodInfo Rect_set_y_m846_MethodInfo;
extern MethodInfo Camera_set_rect_m847_MethodInfo;
extern MethodInfo CardboardEye_Setup_m246_MethodInfo;
extern MethodInfo Camera_set_targetTexture_m848_MethodInfo;
extern MethodInfo Camera_Render_m849_MethodInfo;
extern MethodInfo Camera_get_pixelRect_m850_MethodInfo;
extern MethodInfo RenderTexture_get_depth_m851_MethodInfo;
extern MethodInfo RenderTexture_get_format_m852_MethodInfo;
extern MethodInfo RenderTexture_GetTemporary_m853_MethodInfo;
extern MethodInfo GL_PushMatrix_m854_MethodInfo;
extern MethodInfo GL_LoadPixelMatrix_m855_MethodInfo;
extern MethodInfo Camera_get_targetTexture_m856_MethodInfo;
extern MethodInfo Graphics_DrawTexture_m857_MethodInfo;
extern MethodInfo GL_PopMatrix_m858_MethodInfo;
extern MethodInfo RenderTexture_ReleaseTemporary_m859_MethodInfo;
extern MethodInfo Camera_CopyFrom_m860_MethodInfo;
extern MethodInfo Camera_get_cullingMask_m861_MethodInfo;
extern MethodInfo LayerMask_get_value_m862_MethodInfo;
extern MethodInfo Rect_get_center_m863_MethodInfo;
extern MethodInfo Rect_set_center_m864_MethodInfo;
extern MethodInfo Mathf_SmoothStep_m865_MethodInfo;
struct Component_t167;
struct Component_t167;
// Declaration !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C" Object_t * Component_GetComponentInParent_TisObject_t_m867_gshared (Component_t167 * __this, MethodInfo* method);
#define Component_GetComponentInParent_TisObject_t_m867(__this, method) (( Object_t * (*) (Component_t167 *, MethodInfo*))Component_GetComponentInParent_TisObject_t_m867_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponentInParent<StereoController>()
// !!0 UnityEngine.Component::GetComponentInParent<StereoController>()
#define Component_GetComponentInParent_TisStereoController_t75_m866(__this, method) (( StereoController_t75 * (*) (Component_t167 *, MethodInfo*))Component_GetComponentInParent_TisObject_t_m867_gshared)(__this, method)
struct Component_t167;
// Declaration !!0 UnityEngine.Component::GetComponentInParent<CardboardHead>()
// !!0 UnityEngine.Component::GetComponentInParent<CardboardHead>()
#define Component_GetComponentInParent_TisCardboardHead_t53_m868(__this, method) (( CardboardHead_t53 * (*) (Component_t167 *, MethodInfo*))Component_GetComponentInParent_TisObject_t_m867_gshared)(__this, method)
struct Component_t167;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t15_m869(__this, method) (( Camera_t15 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
struct Component_t167;
// UnityEngine.CastHelper`1<RadialUndistortionEffect>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_12.h"
// Declaration !!0 UnityEngine.Component::GetComponent<RadialUndistortionEffect>()
// !!0 UnityEngine.Component::GetComponent<RadialUndistortionEffect>()
#define Component_GetComponent_TisRadialUndistortionEffect_t91_m870(__this, method) (( RadialUndistortionEffect_t91 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<RadialUndistortionEffect>()
// !!0 UnityEngine.GameObject::AddComponent<RadialUndistortionEffect>()
extern "C" RadialUndistortionEffect_t91 * GameObject_AddComponent_TisRadialUndistortionEffect_t91_m871 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Component_GetComponentInParent_TisStereoController_t75_m866_GenericMethod;
extern Il2CppGenericMethod Component_GetComponentInParent_TisCardboardHead_t53_m868_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisCamera_t15_m869_GenericMethod;
extern Il2CppGenericMethod Component_GetComponent_TisRadialUndistortionEffect_t91_m870_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisRadialUndistortionEffect_t91_m871_GenericMethod;


// System.Void CardboardEye::.ctor()
extern MethodInfo CardboardEye__ctor_m240_MethodInfo;
extern "C" void CardboardEye__ctor_m240 (CardboardEye_t76 * __this, MethodInfo* method)
{
	{
		LayerMask_t77  L_0 = LayerMask_op_Implicit_m825(NULL /*static, unused*/, 0, /*hidden argument*/&LayerMask_op_Implicit_m825_MethodInfo);
		__this->___toggleCullingMask_3 = L_0;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// StereoController CardboardEye::get_Controller()
extern MethodInfo* Component_GetComponentInParent_TisStereoController_t75_m866_MethodInfo_var;
extern "C" StereoController_t75 * CardboardEye_get_Controller_m241 (CardboardEye_t76 * __this, MethodInfo* method)
{
	static bool CardboardEye_get_Controller_m241_init;
	if (!CardboardEye_get_Controller_m241_init)
	{
		Component_GetComponentInParent_TisStereoController_t75_m866_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInParent_TisStereoController_t75_m866_GenericMethod);
		CardboardEye_get_Controller_m241_init = true;
	}
	{
		Transform_t2 * L_0 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = Transform_get_parent_m569(L_0, /*hidden argument*/&Transform_get_parent_m569_MethodInfo);
		bool L_2 = Object_op_Equality_m528(NULL /*static, unused*/, L_1, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		return (StereoController_t75 *)NULL;
	}

IL_0018:
	{
		bool L_3 = Application_get_isEditor_m823(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m823_MethodInfo);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		bool L_4 = Application_get_isPlaying_m824(NULL /*static, unused*/, /*hidden argument*/&Application_get_isPlaying_m824_MethodInfo);
		if (!L_4)
		{
			goto IL_003d;
		}
	}

IL_002c:
	{
		StereoController_t75 * L_5 = (__this->___controller_4);
		bool L_6 = Object_op_Equality_m528(NULL /*static, unused*/, L_5, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_6)
		{
			goto IL_004e;
		}
	}

IL_003d:
	{
		Transform_t2 * L_7 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_7);
		Transform_t2 * L_8 = Transform_get_parent_m569(L_7, /*hidden argument*/&Transform_get_parent_m569_MethodInfo);
		NullCheck(L_8);
		StereoController_t75 * L_9 = Component_GetComponentInParent_TisStereoController_t75_m866(L_8, /*hidden argument*/Component_GetComponentInParent_TisStereoController_t75_m866_MethodInfo_var);
		return L_9;
	}

IL_004e:
	{
		StereoController_t75 * L_10 = (__this->___controller_4);
		return L_10;
	}
}
// CardboardHead CardboardEye::get_Head()
extern MethodInfo CardboardEye_get_Head_m242_MethodInfo;
extern MethodInfo* Component_GetComponentInParent_TisCardboardHead_t53_m868_MethodInfo_var;
extern "C" CardboardHead_t53 * CardboardEye_get_Head_m242 (CardboardEye_t76 * __this, MethodInfo* method)
{
	static bool CardboardEye_get_Head_m242_init;
	if (!CardboardEye_get_Head_m242_init)
	{
		Component_GetComponentInParent_TisCardboardHead_t53_m868_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentInParent_TisCardboardHead_t53_m868_GenericMethod);
		CardboardEye_get_Head_m242_init = true;
	}
	{
		CardboardHead_t53 * L_0 = Component_GetComponentInParent_TisCardboardHead_t53_m868(__this, /*hidden argument*/Component_GetComponentInParent_TisCardboardHead_t53_m868_MethodInfo_var);
		return L_0;
	}
}
// System.Void CardboardEye::Awake()
extern MethodInfo CardboardEye_Awake_m243_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCamera_t15_m869_MethodInfo_var;
extern "C" void CardboardEye_Awake_m243 (CardboardEye_t76 * __this, MethodInfo* method)
{
	static bool CardboardEye_Awake_m243_init;
	if (!CardboardEye_Awake_m243_init)
	{
		Component_GetComponent_TisCamera_t15_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t15_m869_GenericMethod);
		CardboardEye_Awake_m243_init = true;
	}
	{
		Camera_t15 * L_0 = Component_GetComponent_TisCamera_t15_m869(__this, /*hidden argument*/Component_GetComponent_TisCamera_t15_m869_MethodInfo_var);
		__this->___camera_5 = L_0;
		return;
	}
}
// System.Void CardboardEye::Start()
extern MethodInfo CardboardEye_Start_m244_MethodInfo;
extern MethodInfo* Component_GetComponent_TisRadialUndistortionEffect_t91_m870_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisRadialUndistortionEffect_t91_m871_MethodInfo_var;
extern "C" void CardboardEye_Start_m244 (CardboardEye_t76 * __this, MethodInfo* method)
{
	static bool CardboardEye_Start_m244_init;
	if (!CardboardEye_Start_m244_init)
	{
		Component_GetComponent_TisRadialUndistortionEffect_t91_m870_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRadialUndistortionEffect_t91_m870_GenericMethod);
		GameObject_AddComponent_TisRadialUndistortionEffect_t91_m871_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisRadialUndistortionEffect_t91_m871_GenericMethod);
		CardboardEye_Start_m244_init = true;
	}
	StereoController_t75 * V_0 = {0};
	RadialUndistortionEffect_t91 * V_1 = {0};
	{
		StereoController_t75 * L_0 = CardboardEye_get_Controller_m241(__this, /*hidden argument*/&CardboardEye_get_Controller_m241_MethodInfo);
		V_0 = L_0;
		StereoController_t75 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m528(NULL /*static, unused*/, L_1, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		Debug_LogError_m796(NULL /*static, unused*/, (String_t*) &_stringLiteral45, /*hidden argument*/&Debug_LogError_m796_MethodInfo);
		Behaviour_set_enabled_m530(__this, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
	}

IL_0024:
	{
		StereoController_t75 * L_3 = V_0;
		__this->___controller_4 = L_3;
		bool L_4 = Application_get_isPlaying_m824(NULL /*static, unused*/, /*hidden argument*/&Application_get_isPlaying_m824_MethodInfo);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_5 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_NativeDistortionCorrectionSupported_m194(L_5, /*hidden argument*/&Cardboard_get_NativeDistortionCorrectionSupported_m194_MethodInfo);
		if (L_6)
		{
			goto IL_006d;
		}
	}
	{
		bool L_7 = SystemInfo_get_supportsRenderTextures_m745(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m745_MethodInfo);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		RadialUndistortionEffect_t91 * L_8 = Component_GetComponent_TisRadialUndistortionEffect_t91_m870(__this, /*hidden argument*/Component_GetComponent_TisRadialUndistortionEffect_t91_m870_MethodInfo_var);
		V_1 = L_8;
		RadialUndistortionEffect_t91 * L_9 = V_1;
		bool L_10 = Object_op_Equality_m528(NULL /*static, unused*/, L_9, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		GameObject_t7 * L_11 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_11);
		RadialUndistortionEffect_t91 * L_12 = GameObject_AddComponent_TisRadialUndistortionEffect_t91_m871(L_11, /*hidden argument*/GameObject_AddComponent_TisRadialUndistortionEffect_t91_m871_MethodInfo_var);
		V_1 = L_12;
	}

IL_006d:
	{
		return;
	}
}
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&,System.Single,System.Single,System.Single)
extern "C" void CardboardEye_FixProjection_m245 (CardboardEye_t76 * __this, Matrix4x4_t27 * ___proj, float ___near, float ___far, float ___ipdScale, MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector2_t48  V_1 = {0};
	Rect_t62  V_2 = {0};
	Rect_t62  V_3 = {0};
	Matrix4x4_t27 * V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	Matrix4x4_t27 * V_8 = {0};
	Matrix4x4_t27 * V_9 = {0};
	{
		Camera_t15 * L_0 = (__this->___camera_5);
		NullCheck(L_0);
		Rect_t62  L_1 = Camera_get_rect_m826(L_0, /*hidden argument*/&Camera_get_rect_m826_MethodInfo);
		V_2 = L_1;
		float L_2 = Rect_get_height_m767((&V_2), /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		Camera_t15 * L_3 = (__this->___camera_5);
		NullCheck(L_3);
		Rect_t62  L_4 = Camera_get_rect_m826(L_3, /*hidden argument*/&Camera_get_rect_m826_MethodInfo);
		V_3 = L_4;
		float L_5 = Rect_get_width_m765((&V_3), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		V_0 = ((float)((float)((float)((float)L_2/(float)L_5))/(float)(2.0f)));
		Matrix4x4_t27 * L_6 = ___proj;
		Matrix4x4_t27 * L_7 = L_6;
		V_4 = L_7;
		int32_t L_8 = 0;
		V_5 = L_8;
		int32_t L_9 = 0;
		V_6 = L_9;
		Matrix4x4_t27 * L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = V_6;
		float L_13 = Matrix4x4_get_Item_m827(L_10, L_11, L_12, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_7 = L_13;
		float L_14 = V_7;
		float L_15 = V_0;
		Matrix4x4_set_Item_m828(L_7, L_8, L_9, ((float)((float)L_14*(float)L_15)), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Transform_t2 * L_16 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_16);
		Vector3_t5  L_17 = Transform_get_localPosition_m532(L_16, /*hidden argument*/&Transform_get_localPosition_m532_MethodInfo);
		Vector2_t48  L_18 = Vector2_op_Implicit_m769(NULL /*static, unused*/, L_17, /*hidden argument*/&Vector2_op_Implicit_m769_MethodInfo);
		V_1 = L_18;
		Vector2_t48  L_19 = Vector2_get_normalized_m829((&V_1), /*hidden argument*/&Vector2_get_normalized_m829_MethodInfo);
		float L_20 = ___ipdScale;
		Vector2_t48  L_21 = Vector2_op_Multiply_m830(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/&Vector2_op_Multiply_m830_MethodInfo);
		V_1 = L_21;
		Matrix4x4_t27 * L_22 = ___proj;
		Matrix4x4_t27 * L_23 = L_22;
		V_8 = L_23;
		int32_t L_24 = 0;
		V_6 = L_24;
		int32_t L_25 = 2;
		V_5 = L_25;
		Matrix4x4_t27 * L_26 = V_8;
		int32_t L_27 = V_6;
		int32_t L_28 = V_5;
		float L_29 = Matrix4x4_get_Item_m827(L_26, L_27, L_28, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_7 = L_29;
		float L_30 = V_7;
		float L_31 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_32 = fabsf(L_31);
		Matrix4x4_set_Item_m828(L_23, L_24, L_25, ((float)((float)L_30*(float)L_32)), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Matrix4x4_t27 * L_33 = ___proj;
		Matrix4x4_t27 * L_34 = L_33;
		V_9 = L_34;
		int32_t L_35 = 1;
		V_5 = L_35;
		int32_t L_36 = 2;
		V_6 = L_36;
		Matrix4x4_t27 * L_37 = V_9;
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		float L_40 = Matrix4x4_get_Item_m827(L_37, L_38, L_39, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_7 = L_40;
		float L_41 = V_7;
		float L_42 = ((&V_1)->___y_2);
		float L_43 = fabsf(L_42);
		Matrix4x4_set_Item_m828(L_34, L_35, L_36, ((float)((float)L_41*(float)L_43)), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Matrix4x4_t27 * L_44 = ___proj;
		float L_45 = ___near;
		float L_46 = ___far;
		float L_47 = ___near;
		float L_48 = ___far;
		Matrix4x4_set_Item_m828(L_44, 2, 2, ((float)((float)((float)((float)L_45+(float)L_46))/(float)((float)((float)L_47-(float)L_48)))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Matrix4x4_t27 * L_49 = ___proj;
		float L_50 = ___near;
		float L_51 = ___far;
		float L_52 = ___near;
		float L_53 = ___far;
		Matrix4x4_set_Item_m828(L_49, 2, 3, ((float)((float)((float)((float)((float)((float)(2.0f)*(float)L_50))*(float)L_51))/(float)((float)((float)L_52-(float)L_53)))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		return;
	}
}
// System.Void CardboardEye::Setup()
extern MethodInfo* Component_GetComponent_TisCamera_t15_m869_MethodInfo_var;
extern "C" void CardboardEye_Setup_m246 (CardboardEye_t76 * __this, MethodInfo* method)
{
	static bool CardboardEye_Setup_m246_init;
	if (!CardboardEye_Setup_m246_init)
	{
		Component_GetComponent_TisCamera_t15_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t15_m869_GenericMethod);
		CardboardEye_Setup_m246_init = true;
	}
	Camera_t15 * V_0 = {0};
	Matrix4x4_t27  V_1 = {0};
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Matrix4x4_t27  V_9 = {0};
	Vector4_t173  V_10 = {0};
	Vector4_t173  V_11 = {0};
	CardboardProfile_t72 * V_12 = {0};
	Rect_t62  V_13 = {0};
	Rect_t62  V_14 = {0};
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	Matrix4x4_t27  V_18 = {0};
	Matrix4x4_t27 * V_19 = {0};
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	float V_22 = 0.0f;
	Matrix4x4_t27 * V_23 = {0};
	Vector3_t5  V_24 = {0};
	{
		StereoController_t75 * L_0 = (__this->___controller_4);
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		StereoController_t75 * L_2 = (__this->___controller_4);
		NullCheck(L_2);
		Camera_t15 * L_3 = Component_GetComponent_TisCamera_t15_m869(L_2, /*hidden argument*/Component_GetComponent_TisCamera_t15_m869_MethodInfo_var);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_4 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		int32_t L_5 = (__this->___eye_2);
		NullCheck(L_4);
		Matrix4x4_t27  L_6 = Cardboard_Projection_m204(L_4, L_5, 0, /*hidden argument*/&Cardboard_Projection_m204_MethodInfo);
		V_1 = L_6;
		StereoController_t75 * L_7 = (__this->___controller_4);
		float L_8 = Matrix4x4_get_Item_m827((&V_1), 0, 2, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		float L_9 = Matrix4x4_get_Item_m827((&V_1), 1, 2, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		CardboardEye_CopyCameraAndMakeSideBySide_m249(__this, L_7, L_8, L_9, /*hidden argument*/&CardboardEye_CopyCameraAndMakeSideBySide_m249_MethodInfo);
		StereoController_t75 * L_10 = (__this->___controller_4);
		NullCheck(L_10);
		float L_11 = (L_10->___matchByZoom_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_12 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_11, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		StereoController_t75 * L_13 = (__this->___controller_4);
		NullCheck(L_13);
		float L_14 = (L_13->___matchMonoFOV_4);
		float L_15 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_14, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		V_2 = ((float)((float)L_12*(float)L_15));
		Camera_t15 * L_16 = V_0;
		NullCheck(L_16);
		Matrix4x4_t27  L_17 = Camera_get_projectionMatrix_m831(L_16, /*hidden argument*/&Camera_get_projectionMatrix_m831_MethodInfo);
		V_18 = L_17;
		float L_18 = Matrix4x4_get_Item_m827((&V_18), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_3 = L_18;
		float L_19 = Matrix4x4_get_Item_m827((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		float L_20 = V_3;
		float L_21 = V_2;
		float L_22 = Mathf_Lerp_m645(NULL /*static, unused*/, ((float)((float)(1.0f)/(float)L_19)), ((float)((float)(1.0f)/(float)L_20)), L_21, /*hidden argument*/&Mathf_Lerp_m645_MethodInfo);
		float L_23 = Matrix4x4_get_Item_m827((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_4 = ((float)((float)((float)((float)(1.0f)/(float)L_22))/(float)L_23));
		Matrix4x4_t27 * L_24 = (&V_1);
		V_19 = L_24;
		int32_t L_25 = 0;
		V_20 = L_25;
		int32_t L_26 = 0;
		V_21 = L_26;
		Matrix4x4_t27 * L_27 = V_19;
		int32_t L_28 = V_20;
		int32_t L_29 = V_21;
		float L_30 = Matrix4x4_get_Item_m827(L_27, L_28, L_29, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_22 = L_30;
		float L_31 = V_22;
		float L_32 = V_4;
		Matrix4x4_set_Item_m828(L_24, L_25, L_26, ((float)((float)L_31*(float)L_32)), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Matrix4x4_t27 * L_33 = (&V_1);
		V_23 = L_33;
		int32_t L_34 = 1;
		V_21 = L_34;
		int32_t L_35 = 1;
		V_20 = L_35;
		Matrix4x4_t27 * L_36 = V_23;
		int32_t L_37 = V_21;
		int32_t L_38 = V_20;
		float L_39 = Matrix4x4_get_Item_m827(L_36, L_37, L_38, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_22 = L_39;
		float L_40 = V_22;
		float L_41 = V_4;
		Matrix4x4_set_Item_m828(L_33, L_34, L_35, ((float)((float)L_40*(float)L_41)), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		StereoController_t75 * L_42 = (__this->___controller_4);
		float L_43 = Matrix4x4_get_Item_m827((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		Transform_t2 * L_44 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_44);
		Vector3_t5  L_45 = Transform_get_lossyScale_m832(L_44, /*hidden argument*/&Transform_get_lossyScale_m832_MethodInfo);
		V_24 = L_45;
		float L_46 = ((&V_24)->___z_3);
		NullCheck(L_42);
		StereoController_ComputeStereoAdjustment_m316(L_42, L_43, L_46, (&V_5), (&V_6), /*hidden argument*/&StereoController_ComputeStereoAdjustment_m316_MethodInfo);
		Transform_t2 * L_47 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		float L_48 = V_5;
		Cardboard_t67 * L_49 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		int32_t L_50 = (__this->___eye_2);
		NullCheck(L_49);
		Pose3D_t73 * L_51 = Cardboard_EyePose_m203(L_49, L_50, /*hidden argument*/&Cardboard_EyePose_m203_MethodInfo);
		NullCheck(L_51);
		Vector3_t5  L_52 = Pose3D_get_Position_m285(L_51, /*hidden argument*/&Pose3D_get_Position_m285_MethodInfo);
		Vector3_t5  L_53 = Vector3_op_Multiply_m561(NULL /*static, unused*/, L_48, L_52, /*hidden argument*/&Vector3_op_Multiply_m561_MethodInfo);
		float L_54 = V_6;
		Vector3_t5  L_55 = Vector3_get_forward_m610(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_forward_m610_MethodInfo);
		Vector3_t5  L_56 = Vector3_op_Multiply_m561(NULL /*static, unused*/, L_54, L_55, /*hidden argument*/&Vector3_op_Multiply_m561_MethodInfo);
		Vector3_t5  L_57 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_53, L_56, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		NullCheck(L_47);
		Transform_set_localPosition_m579(L_47, L_57, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		Camera_t15 * L_58 = V_0;
		NullCheck(L_58);
		float L_59 = Camera_get_nearClipPlane_m537(L_58, /*hidden argument*/&Camera_get_nearClipPlane_m537_MethodInfo);
		V_7 = L_59;
		Camera_t15 * L_60 = V_0;
		NullCheck(L_60);
		float L_61 = Camera_get_farClipPlane_m833(L_60, /*hidden argument*/&Camera_get_farClipPlane_m833_MethodInfo);
		V_8 = L_61;
		float L_62 = V_7;
		float L_63 = V_8;
		float L_64 = V_5;
		CardboardEye_FixProjection_m245(__this, (&V_1), L_62, L_63, L_64, /*hidden argument*/&CardboardEye_FixProjection_m245_MethodInfo);
		Camera_t15 * L_65 = (__this->___camera_5);
		Matrix4x4_t27  L_66 = V_1;
		NullCheck(L_65);
		Camera_set_projectionMatrix_m834(L_65, L_66, /*hidden argument*/&Camera_set_projectionMatrix_m834_MethodInfo);
		bool L_67 = Application_get_isEditor_m823(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m823_MethodInfo);
		if (!L_67)
		{
			goto IL_01bb;
		}
	}
	{
		Camera_t15 * L_68 = (__this->___camera_5);
		float L_69 = Matrix4x4_get_Item_m827((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_70 = atanf(((float)((float)(1.0f)/(float)L_69)));
		NullCheck(L_68);
		Camera_set_fieldOfView_m836(L_68, ((float)((float)((float)((float)(2.0f)*(float)L_70))*(float)(57.29578f))), /*hidden argument*/&Camera_set_fieldOfView_m836_MethodInfo);
	}

IL_01bb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_71 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_71);
		bool L_72 = Cardboard_get_UseDistortionEffect_m200(L_71, /*hidden argument*/&Cardboard_get_UseDistortionEffect_m200_MethodInfo);
		if (!L_72)
		{
			goto IL_02f9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_73 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		int32_t L_74 = (__this->___eye_2);
		NullCheck(L_73);
		Matrix4x4_t27  L_75 = Cardboard_Projection_m204(L_73, L_74, 1, /*hidden argument*/&Cardboard_Projection_m204_MethodInfo);
		V_9 = L_75;
		float L_76 = V_7;
		float L_77 = V_8;
		float L_78 = V_5;
		CardboardEye_FixProjection_m245(__this, (&V_9), L_76, L_77, L_78, /*hidden argument*/&CardboardEye_FixProjection_m245_MethodInfo);
		float L_79 = Matrix4x4_get_Item_m827((&V_1), 0, 0, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		float L_80 = V_4;
		float L_81 = Matrix4x4_get_Item_m827((&V_1), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		float L_82 = V_4;
		float L_83 = Matrix4x4_get_Item_m827((&V_1), 0, 2, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		float L_84 = Matrix4x4_get_Item_m827((&V_1), 1, 2, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		Vector4_t173  L_85 = {0};
		Vector4__ctor_m837(&L_85, ((float)((float)L_79/(float)L_80)), ((float)((float)L_81/(float)L_82)), ((float)((float)L_83-(float)(1.0f))), ((float)((float)L_84-(float)(1.0f))), /*hidden argument*/&Vector4__ctor_m837_MethodInfo);
		Vector4_t173  L_86 = Vector4_op_Division_m838(NULL /*static, unused*/, L_85, (2.0f), /*hidden argument*/&Vector4_op_Division_m838_MethodInfo);
		V_10 = L_86;
		float L_87 = Matrix4x4_get_Item_m827((&V_9), 0, 0, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		float L_88 = Matrix4x4_get_Item_m827((&V_9), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		float L_89 = Matrix4x4_get_Item_m827((&V_9), 0, 2, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		float L_90 = Matrix4x4_get_Item_m827((&V_9), 1, 2, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		Vector4_t173  L_91 = {0};
		Vector4__ctor_m837(&L_91, L_87, L_88, ((float)((float)L_89-(float)(1.0f))), ((float)((float)L_90-(float)(1.0f))), /*hidden argument*/&Vector4__ctor_m837_MethodInfo);
		Vector4_t173  L_92 = Vector4_op_Division_m838(NULL /*static, unused*/, L_91, (2.0f), /*hidden argument*/&Vector4_op_Division_m838_MethodInfo);
		V_11 = L_92;
		Vector4_t173  L_93 = V_10;
		Shader_SetGlobalVector_m839(NULL /*static, unused*/, (String_t*) &_stringLiteral46, L_93, /*hidden argument*/&Shader_SetGlobalVector_m839_MethodInfo);
		Vector4_t173  L_94 = V_11;
		Shader_SetGlobalVector_m839(NULL /*static, unused*/, (String_t*) &_stringLiteral47, L_94, /*hidden argument*/&Shader_SetGlobalVector_m839_MethodInfo);
		Cardboard_t67 * L_95 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_95);
		CardboardProfile_t72 * L_96 = Cardboard_get_Profile_m201(L_95, /*hidden argument*/&Cardboard_get_Profile_m201_MethodInfo);
		V_12 = L_96;
		CardboardProfile_t72 * L_97 = V_12;
		NullCheck(L_97);
		Device_t83 * L_98 = &(L_97->___device_1);
		Distortion_t82 * L_99 = &(L_98->___inverse_3);
		float L_100 = (L_99->___k1_0);
		CardboardProfile_t72 * L_101 = V_12;
		NullCheck(L_101);
		Device_t83 * L_102 = &(L_101->___device_1);
		Distortion_t82 * L_103 = &(L_102->___inverse_3);
		float L_104 = (L_103->___k2_1);
		Vector4_t173  L_105 = {0};
		Vector4__ctor_m840(&L_105, L_100, L_104, /*hidden argument*/&Vector4__ctor_m840_MethodInfo);
		Shader_SetGlobalVector_m839(NULL /*static, unused*/, (String_t*) &_stringLiteral48, L_105, /*hidden argument*/&Shader_SetGlobalVector_m839_MethodInfo);
		CardboardProfile_t72 * L_106 = V_12;
		NullCheck(L_106);
		Device_t83 * L_107 = &(L_106->___device_1);
		Distortion_t82 * L_108 = &(L_107->___distortion_2);
		float L_109 = (L_108->___k1_0);
		CardboardProfile_t72 * L_110 = V_12;
		NullCheck(L_110);
		Device_t83 * L_111 = &(L_110->___device_1);
		Distortion_t82 * L_112 = &(L_111->___distortion_2);
		float L_113 = (L_112->___k2_1);
		Vector4_t173  L_114 = {0};
		Vector4__ctor_m840(&L_114, L_109, L_113, /*hidden argument*/&Vector4__ctor_m840_MethodInfo);
		Shader_SetGlobalVector_m839(NULL /*static, unused*/, (String_t*) &_stringLiteral49, L_114, /*hidden argument*/&Shader_SetGlobalVector_m839_MethodInfo);
	}

IL_02f9:
	{
		StereoController_t75 * L_115 = (__this->___controller_4);
		NullCheck(L_115);
		RenderTexture_t56 * L_116 = StereoController_get_StereoScreen_m311(L_115, /*hidden argument*/&StereoController_get_StereoScreen_m311_MethodInfo);
		bool L_117 = Object_op_Equality_m528(NULL /*static, unused*/, L_116, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_117)
		{
			goto IL_0493;
		}
	}
	{
		Camera_t15 * L_118 = (__this->___camera_5);
		NullCheck(L_118);
		Rect_t62  L_119 = Camera_get_rect_m826(L_118, /*hidden argument*/&Camera_get_rect_m826_MethodInfo);
		V_13 = L_119;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_120 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_120);
		bool L_121 = Cardboard_get_DistortionCorrection_m180(L_120, /*hidden argument*/&Cardboard_get_DistortionCorrection_m180_MethodInfo);
		if (!L_121)
		{
			goto IL_033a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_122 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_122);
		bool L_123 = Cardboard_get_UseDistortionEffect_m200(L_122, /*hidden argument*/&Cardboard_get_UseDistortionEffect_m200_MethodInfo);
		if (!L_123)
		{
			goto IL_03de;
		}
	}

IL_033a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_124 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		int32_t L_125 = (__this->___eye_2);
		NullCheck(L_124);
		Rect_t62  L_126 = Cardboard_Viewport_m205(L_124, L_125, 0, /*hidden argument*/&Cardboard_Viewport_m205_MethodInfo);
		V_14 = L_126;
		int32_t L_127 = (__this->___eye_2);
		if ((!(((uint32_t)L_127) == ((uint32_t)1))))
		{
			goto IL_036c;
		}
	}
	{
		Rect_t62 * L_128 = (&V_13);
		float L_129 = Rect_get_x_m841(L_128, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		Rect_set_x_m842(L_128, ((float)((float)L_129-(float)(0.5f))), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
	}

IL_036c:
	{
		Rect_t62 * L_130 = (&V_13);
		float L_131 = Rect_get_width_m765(L_130, /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		float L_132 = Rect_get_width_m765((&V_14), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		Rect_set_width_m843(L_130, ((float)((float)L_131*(float)((float)((float)(2.0f)*(float)L_132)))), /*hidden argument*/&Rect_set_width_m843_MethodInfo);
		float L_133 = Rect_get_x_m841((&V_14), /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		float L_134 = Rect_get_x_m841((&V_13), /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		float L_135 = Rect_get_width_m765((&V_14), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		Rect_set_x_m842((&V_13), ((float)((float)L_133+(float)((float)((float)((float)((float)(2.0f)*(float)L_134))*(float)L_135)))), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
		Rect_t62 * L_136 = (&V_13);
		float L_137 = Rect_get_height_m767(L_136, /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		float L_138 = Rect_get_height_m767((&V_14), /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		Rect_set_height_m844(L_136, ((float)((float)L_137*(float)L_138)), /*hidden argument*/&Rect_set_height_m844_MethodInfo);
		float L_139 = Rect_get_y_m845((&V_14), /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		float L_140 = Rect_get_y_m845((&V_13), /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		float L_141 = Rect_get_height_m767((&V_14), /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		Rect_set_y_m846((&V_13), ((float)((float)L_139+(float)((float)((float)L_140*(float)L_141)))), /*hidden argument*/&Rect_set_y_m846_MethodInfo);
	}

IL_03de:
	{
		bool L_142 = Application_get_isEditor_m823(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m823_MethodInfo);
		if (!L_142)
		{
			goto IL_0486;
		}
	}
	{
		int32_t L_143 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_144 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		V_15 = ((float)((float)(((float)L_143))/(float)(((float)L_144))));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_145 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_145);
		CardboardProfile_t72 * L_146 = Cardboard_get_Profile_m201(L_145, /*hidden argument*/&Cardboard_get_Profile_m201_MethodInfo);
		NullCheck(L_146);
		Screen_t79 * L_147 = &(L_146->___screen_0);
		float L_148 = (L_147->___width_0);
		Cardboard_t67 * L_149 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_149);
		CardboardProfile_t72 * L_150 = Cardboard_get_Profile_m201(L_149, /*hidden argument*/&Cardboard_get_Profile_m201_MethodInfo);
		NullCheck(L_150);
		Screen_t79 * L_151 = &(L_150->___screen_0);
		float L_152 = (L_151->___height_1);
		V_16 = ((float)((float)L_148/(float)L_152));
		float L_153 = V_16;
		float L_154 = V_15;
		V_17 = ((float)((float)L_153/(float)L_154));
		float L_155 = V_17;
		if ((!(((float)L_155) < ((float)(1.0f)))))
		{
			goto IL_0476;
		}
	}
	{
		Rect_t62 * L_156 = (&V_13);
		float L_157 = Rect_get_width_m765(L_156, /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		float L_158 = V_17;
		Rect_set_width_m843(L_156, ((float)((float)L_157*(float)L_158)), /*hidden argument*/&Rect_set_width_m843_MethodInfo);
		Rect_t62 * L_159 = (&V_13);
		float L_160 = Rect_get_x_m841(L_159, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		float L_161 = V_17;
		Rect_set_x_m842(L_159, ((float)((float)L_160*(float)L_161)), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
		Rect_t62 * L_162 = (&V_13);
		float L_163 = Rect_get_x_m841(L_162, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		float L_164 = V_17;
		Rect_set_x_m842(L_162, ((float)((float)L_163+(float)((float)((float)((float)((float)(1.0f)-(float)L_164))/(float)(2.0f))))), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
		goto IL_0486;
	}

IL_0476:
	{
		Rect_t62 * L_165 = (&V_13);
		float L_166 = Rect_get_height_m767(L_165, /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		float L_167 = V_17;
		Rect_set_height_m844(L_165, ((float)((float)L_166/(float)L_167)), /*hidden argument*/&Rect_set_height_m844_MethodInfo);
	}

IL_0486:
	{
		Camera_t15 * L_168 = (__this->___camera_5);
		Rect_t62  L_169 = V_13;
		NullCheck(L_168);
		Camera_set_rect_m847(L_168, L_169, /*hidden argument*/&Camera_set_rect_m847_MethodInfo);
	}

IL_0493:
	{
		return;
	}
}
// System.Void CardboardEye::Render()
extern MethodInfo CardboardEye_Render_m247_MethodInfo;
extern "C" void CardboardEye_Render_m247 (CardboardEye_t76 * __this, MethodInfo* method)
{
	Rect_t62  V_0 = {0};
	RenderTexture_t56 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = {0};
	RenderTexture_t56 * V_6 = {0};
	Rect_t62  V_7 = {0};
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		CardboardEye_Setup_m246(__this, /*hidden argument*/&CardboardEye_Setup_m246_MethodInfo);
		StereoController_t75 * L_0 = (__this->___controller_4);
		NullCheck(L_0);
		bool L_1 = (L_0->___directRender_2);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		Camera_t15 * L_2 = (__this->___camera_5);
		StereoController_t75 * L_3 = (__this->___controller_4);
		NullCheck(L_3);
		RenderTexture_t56 * L_4 = StereoController_get_StereoScreen_m311(L_3, /*hidden argument*/&StereoController_get_StereoScreen_m311_MethodInfo);
		NullCheck(L_2);
		Camera_set_targetTexture_m848(L_2, L_4, /*hidden argument*/&Camera_set_targetTexture_m848_MethodInfo);
		Camera_t15 * L_5 = (__this->___camera_5);
		NullCheck(L_5);
		Camera_Render_m849(L_5, /*hidden argument*/&Camera_Render_m849_MethodInfo);
		goto IL_0181;
	}

IL_003c:
	{
		Camera_t15 * L_6 = (__this->___camera_5);
		NullCheck(L_6);
		Rect_t62  L_7 = Camera_get_pixelRect_m850(L_6, /*hidden argument*/&Camera_get_pixelRect_m850_MethodInfo);
		V_0 = L_7;
		Camera_t15 * L_8 = (__this->___camera_5);
		Rect_t62  L_9 = {0};
		Rect__ctor_m741(&L_9, (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		NullCheck(L_8);
		Camera_set_rect_m847(L_8, L_9, /*hidden argument*/&Camera_set_rect_m847_MethodInfo);
		StereoController_t75 * L_10 = (__this->___controller_4);
		NullCheck(L_10);
		RenderTexture_t56 * L_11 = StereoController_get_StereoScreen_m311(L_10, /*hidden argument*/&StereoController_get_StereoScreen_m311_MethodInfo);
		V_1 = L_11;
		RenderTexture_t56 * L_12 = V_1;
		bool L_13 = Object_op_Implicit_m748(NULL /*static, unused*/, L_12, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		RenderTexture_t56 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_width_m749_MethodInfo, L_14);
		G_B5_0 = L_15;
		goto IL_0093;
	}

IL_008e:
	{
		int32_t L_16 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		G_B5_0 = L_16;
	}

IL_0093:
	{
		V_2 = G_B5_0;
		RenderTexture_t56 * L_17 = V_1;
		bool L_18 = Object_op_Implicit_m748(NULL /*static, unused*/, L_17, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_18)
		{
			goto IL_00aa;
		}
	}
	{
		RenderTexture_t56 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&RenderTexture_get_height_m750_MethodInfo, L_19);
		G_B8_0 = L_20;
		goto IL_00af;
	}

IL_00aa:
	{
		int32_t L_21 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		G_B8_0 = L_21;
	}

IL_00af:
	{
		V_3 = G_B8_0;
		RenderTexture_t56 * L_22 = V_1;
		bool L_23 = Object_op_Implicit_m748(NULL /*static, unused*/, L_22, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		RenderTexture_t56 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = RenderTexture_get_depth_m851(L_24, /*hidden argument*/&RenderTexture_get_depth_m851_MethodInfo);
		G_B11_0 = L_25;
		goto IL_00c8;
	}

IL_00c6:
	{
		G_B11_0 = ((int32_t)16);
	}

IL_00c8:
	{
		V_4 = G_B11_0;
		RenderTexture_t56 * L_26 = V_1;
		bool L_27 = Object_op_Implicit_m748(NULL /*static, unused*/, L_26, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_27)
		{
			goto IL_00e0;
		}
	}
	{
		RenderTexture_t56 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = RenderTexture_get_format_m852(L_28, /*hidden argument*/&RenderTexture_get_format_m852_MethodInfo);
		G_B14_0 = ((int32_t)(L_29));
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B14_0 = 4;
	}

IL_00e1:
	{
		V_5 = G_B14_0;
		Camera_t15 * L_30 = (__this->___camera_5);
		float L_31 = Rect_get_width_m765((&V_0), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		float L_32 = Rect_get_height_m767((&V_0), /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		int32_t L_33 = V_4;
		int32_t L_34 = V_5;
		RenderTexture_t56 * L_35 = RenderTexture_GetTemporary_m853(NULL /*static, unused*/, (((int32_t)L_31)), (((int32_t)L_32)), L_33, L_34, /*hidden argument*/&RenderTexture_GetTemporary_m853_MethodInfo);
		NullCheck(L_30);
		Camera_set_targetTexture_m848(L_30, L_35, /*hidden argument*/&Camera_set_targetTexture_m848_MethodInfo);
		Camera_t15 * L_36 = (__this->___camera_5);
		NullCheck(L_36);
		Camera_Render_m849(L_36, /*hidden argument*/&Camera_Render_m849_MethodInfo);
		RenderTexture_t56 * L_37 = RenderTexture_get_active_m755(NULL /*static, unused*/, /*hidden argument*/&RenderTexture_get_active_m755_MethodInfo);
		V_6 = L_37;
		RenderTexture_t56 * L_38 = V_1;
		RenderTexture_set_active_m756(NULL /*static, unused*/, L_38, /*hidden argument*/&RenderTexture_set_active_m756_MethodInfo);
		GL_PushMatrix_m854(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m854_MethodInfo);
		int32_t L_39 = V_2;
		int32_t L_40 = V_3;
		GL_LoadPixelMatrix_m855(NULL /*static, unused*/, (0.0f), (((float)L_39)), (((float)L_40)), (0.0f), /*hidden argument*/&GL_LoadPixelMatrix_m855_MethodInfo);
		Rect_t62  L_41 = V_0;
		V_7 = L_41;
		int32_t L_42 = V_3;
		float L_43 = Rect_get_height_m767((&V_0), /*hidden argument*/&Rect_get_height_m767_MethodInfo);
		float L_44 = Rect_get_y_m845((&V_0), /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		Rect_set_y_m846((&V_7), ((float)((float)((float)((float)(((float)L_42))-(float)L_43))-(float)L_44)), /*hidden argument*/&Rect_set_y_m846_MethodInfo);
		Rect_t62  L_45 = V_7;
		Camera_t15 * L_46 = (__this->___camera_5);
		NullCheck(L_46);
		RenderTexture_t56 * L_47 = Camera_get_targetTexture_m856(L_46, /*hidden argument*/&Camera_get_targetTexture_m856_MethodInfo);
		Graphics_DrawTexture_m857(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/&Graphics_DrawTexture_m857_MethodInfo);
		GL_PopMatrix_m858(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m858_MethodInfo);
		RenderTexture_t56 * L_48 = V_6;
		RenderTexture_set_active_m756(NULL /*static, unused*/, L_48, /*hidden argument*/&RenderTexture_set_active_m756_MethodInfo);
		Camera_t15 * L_49 = (__this->___camera_5);
		NullCheck(L_49);
		RenderTexture_t56 * L_50 = Camera_get_targetTexture_m856(L_49, /*hidden argument*/&Camera_get_targetTexture_m856_MethodInfo);
		RenderTexture_ReleaseTemporary_m859(NULL /*static, unused*/, L_50, /*hidden argument*/&RenderTexture_ReleaseTemporary_m859_MethodInfo);
	}

IL_0181:
	{
		Camera_t15 * L_51 = (__this->___camera_5);
		NullCheck(L_51);
		Camera_set_targetTexture_m848(L_51, (RenderTexture_t56 *)NULL, /*hidden argument*/&Camera_set_targetTexture_m848_MethodInfo);
		return;
	}
}
// System.Void CardboardEye::OnPreCull()
extern MethodInfo CardboardEye_OnPreCull_m248_MethodInfo;
extern "C" void CardboardEye_OnPreCull_m248 (CardboardEye_t76 * __this, MethodInfo* method)
{
	{
		Camera_t15 * L_0 = (__this->___camera_5);
		NullCheck(L_0);
		bool L_1 = Behaviour_get_enabled_m675(L_0, /*hidden argument*/&Behaviour_get_enabled_m675_MethodInfo);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		CardboardEye_Setup_m246(__this, /*hidden argument*/&CardboardEye_Setup_m246_MethodInfo);
		Camera_t15 * L_2 = (__this->___camera_5);
		StereoController_t75 * L_3 = (__this->___controller_4);
		NullCheck(L_3);
		RenderTexture_t56 * L_4 = StereoController_get_StereoScreen_m311(L_3, /*hidden argument*/&StereoController_get_StereoScreen_m311_MethodInfo);
		NullCheck(L_2);
		Camera_set_targetTexture_m848(L_2, L_4, /*hidden argument*/&Camera_set_targetTexture_m848_MethodInfo);
	}

IL_002c:
	{
		return;
	}
}
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern MethodInfo* Component_GetComponent_TisCamera_t15_m869_MethodInfo_var;
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m249 (CardboardEye_t76 * __this, StereoController_t75 * ___controller, float ___parx, float ___pary, MethodInfo* method)
{
	static bool CardboardEye_CopyCameraAndMakeSideBySide_m249_init;
	if (!CardboardEye_CopyCameraAndMakeSideBySide_m249_init)
	{
		Component_GetComponent_TisCamera_t15_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t15_m869_GenericMethod);
		CardboardEye_CopyCameraAndMakeSideBySide_m249_init = true;
	}
	float V_0 = 0.0f;
	Rect_t62  V_1 = {0};
	Vector2_t48  V_2 = {0};
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_t62  V_5 = {0};
	Transform_t2 * G_B2_0 = {0};
	Transform_t2 * G_B1_0 = {0};
	float G_B3_0 = 0.0f;
	Transform_t2 * G_B3_1 = {0};
	{
		Camera_t15 * L_0 = (__this->___camera_5);
		StereoController_t75 * L_1 = ___controller;
		NullCheck(L_1);
		Camera_t15 * L_2 = Component_GetComponent_TisCamera_t15_m869(L_1, /*hidden argument*/Component_GetComponent_TisCamera_t15_m869_MethodInfo_var);
		NullCheck(L_0);
		Camera_CopyFrom_m860(L_0, L_2, /*hidden argument*/&Camera_CopyFrom_m860_MethodInfo);
		Camera_t15 * L_3 = (__this->___camera_5);
		Camera_t15 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = Camera_get_cullingMask_m861(L_4, /*hidden argument*/&Camera_get_cullingMask_m861_MethodInfo);
		LayerMask_t77 * L_6 = &(__this->___toggleCullingMask_3);
		int32_t L_7 = LayerMask_get_value_m862(L_6, /*hidden argument*/&LayerMask_get_value_m862_MethodInfo);
		NullCheck(L_4);
		Camera_set_cullingMask_m813(L_4, ((int32_t)((int32_t)L_5^(int32_t)L_7)), /*hidden argument*/&Camera_set_cullingMask_m813_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		CardboardProfile_t72 * L_8 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___Default_14;
		NullCheck(L_8);
		Device_t83 * L_9 = &(L_8->___device_1);
		Lenses_t80 * L_10 = &(L_9->___lenses_0);
		float L_11 = (L_10->___separation_3);
		StereoController_t75 * L_12 = ___controller;
		NullCheck(L_12);
		float L_13 = (L_12->___stereoMultiplier_3);
		V_0 = ((float)((float)L_11*(float)L_13));
		Transform_t2 * L_14 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		int32_t L_15 = (__this->___eye_2);
		G_B1_0 = L_14;
		if (L_15)
		{
			G_B2_0 = L_14;
			goto IL_0068;
		}
	}
	{
		float L_16 = V_0;
		G_B3_0 = ((float)((float)((-L_16))/(float)(2.0f)));
		G_B3_1 = G_B1_0;
		goto IL_006f;
	}

IL_0068:
	{
		float L_17 = V_0;
		G_B3_0 = ((float)((float)L_17/(float)(2.0f)));
		G_B3_1 = G_B2_0;
	}

IL_006f:
	{
		Vector3_t5  L_18 = Vector3_get_right_m612(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_right_m612_MethodInfo);
		Vector3_t5  L_19 = Vector3_op_Multiply_m561(NULL /*static, unused*/, G_B3_0, L_18, /*hidden argument*/&Vector3_op_Multiply_m561_MethodInfo);
		NullCheck(G_B3_1);
		Transform_set_localPosition_m579(G_B3_1, L_19, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		Transform_t2 * L_20 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Quaternion_t10  L_21 = Quaternion_get_identity_m615(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m615_MethodInfo);
		NullCheck(L_20);
		Transform_set_localRotation_m577(L_20, L_21, /*hidden argument*/&Transform_set_localRotation_m577_MethodInfo);
		Transform_t2 * L_22 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_23 = Vector3_get_one_m616(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m616_MethodInfo);
		NullCheck(L_22);
		Transform_set_localScale_m578(L_22, L_23, /*hidden argument*/&Transform_set_localScale_m578_MethodInfo);
		Camera_t15 * L_24 = (__this->___camera_5);
		NullCheck(L_24);
		Rect_t62  L_25 = Camera_get_rect_m826(L_24, /*hidden argument*/&Camera_get_rect_m826_MethodInfo);
		V_1 = L_25;
		Vector2_t48  L_26 = Rect_get_center_m863((&V_1), /*hidden argument*/&Rect_get_center_m863_MethodInfo);
		V_2 = L_26;
		float L_27 = ((&V_2)->___x_1);
		StereoController_t75 * L_28 = ___controller;
		NullCheck(L_28);
		float L_29 = (L_28->___stereoPaddingX_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_30 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_29, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		float L_31 = Mathf_Lerp_m645(NULL /*static, unused*/, L_27, (0.5f), L_30, /*hidden argument*/&Mathf_Lerp_m645_MethodInfo);
		(&V_2)->___x_1 = L_31;
		float L_32 = ((&V_2)->___y_2);
		StereoController_t75 * L_33 = ___controller;
		NullCheck(L_33);
		float L_34 = (L_33->___stereoPaddingY_11);
		float L_35 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_34, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		float L_36 = Mathf_Lerp_m645(NULL /*static, unused*/, L_32, (0.5f), L_35, /*hidden argument*/&Mathf_Lerp_m645_MethodInfo);
		(&V_2)->___y_2 = L_36;
		Vector2_t48  L_37 = V_2;
		Rect_set_center_m864((&V_1), L_37, /*hidden argument*/&Rect_set_center_m864_MethodInfo);
		float L_38 = Rect_get_width_m765((&V_1), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		float L_39 = Mathf_SmoothStep_m865(NULL /*static, unused*/, (-0.5f), (0.5f), ((float)((float)((float)((float)L_38+(float)(1.0f)))/(float)(2.0f))), /*hidden argument*/&Mathf_SmoothStep_m865_MethodInfo);
		V_3 = L_39;
		Rect_t62 * L_40 = (&V_1);
		float L_41 = Rect_get_x_m841(L_40, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		float L_42 = Rect_get_width_m765((&V_1), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		float L_43 = V_3;
		Rect_set_x_m842(L_40, ((float)((float)L_41+(float)((float)((float)((float)((float)L_42-(float)L_43))/(float)(2.0f))))), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
		float L_44 = V_3;
		Rect_set_width_m843((&V_1), L_44, /*hidden argument*/&Rect_set_width_m843_MethodInfo);
		Rect_t62 * L_45 = (&V_1);
		float L_46 = Rect_get_x_m841(L_45, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		float L_47 = Rect_get_width_m765((&V_1), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		float L_48 = Rect_get_width_m765((&V_1), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		Rect_set_x_m842(L_45, ((float)((float)L_46*(float)((float)((float)((float)((float)(0.5f)-(float)L_47))/(float)((float)((float)(1.0f)-(float)L_48)))))), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
		int32_t L_49 = (__this->___eye_2);
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0190;
		}
	}
	{
		Rect_t62 * L_50 = (&V_1);
		float L_51 = Rect_get_x_m841(L_50, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		Rect_set_x_m842(L_50, ((float)((float)L_51+(float)(0.5f))), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
	}

IL_0190:
	{
		StereoController_t75 * L_52 = ___controller;
		NullCheck(L_52);
		float L_53 = (L_52->___screenParallax_9);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_54 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_53, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		V_4 = L_54;
		StereoController_t75 * L_55 = ___controller;
		NullCheck(L_55);
		Camera_t15 * L_56 = Component_GetComponent_TisCamera_t15_m869(L_55, /*hidden argument*/Component_GetComponent_TisCamera_t15_m869_MethodInfo_var);
		NullCheck(L_56);
		Rect_t62  L_57 = Camera_get_rect_m826(L_56, /*hidden argument*/&Camera_get_rect_m826_MethodInfo);
		V_5 = L_57;
		float L_58 = Rect_get_width_m765((&V_5), /*hidden argument*/&Rect_get_width_m765_MethodInfo);
		if ((!(((float)L_58) < ((float)(1.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		float L_59 = V_4;
		if ((!(((float)L_59) > ((float)(0.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		Rect_t62 * L_60 = (&V_1);
		float L_61 = Rect_get_x_m841(L_60, /*hidden argument*/&Rect_get_x_m841_MethodInfo);
		float L_62 = ___parx;
		float L_63 = V_4;
		Rect_set_x_m842(L_60, ((float)((float)L_61-(float)((float)((float)((float)((float)L_62/(float)(4.0f)))*(float)L_63)))), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
		Rect_t62 * L_64 = (&V_1);
		float L_65 = Rect_get_y_m845(L_64, /*hidden argument*/&Rect_get_y_m845_MethodInfo);
		float L_66 = ___pary;
		float L_67 = V_4;
		Rect_set_y_m846(L_64, ((float)((float)L_65-(float)((float)((float)((float)((float)L_66/(float)(2.0f)))*(float)L_67)))), /*hidden argument*/&Rect_set_y_m846_MethodInfo);
	}

IL_01f7:
	{
		Camera_t15 * L_68 = (__this->___camera_5);
		Rect_t62  L_69 = V_1;
		NullCheck(L_68);
		Camera_set_rect_m847(L_68, L_69, /*hidden argument*/&Camera_set_rect_m847_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CardboardHead_t53_il2cpp_TypeInfo;

extern TypeInfo Ray_t78_il2cpp_TypeInfo;
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
extern MethodInfo CardboardHead_UpdateHead_m254_MethodInfo;
extern MethodInfo Ray__ctor_m872_MethodInfo;


// System.Void CardboardHead::.ctor()
extern MethodInfo CardboardHead__ctor_m250_MethodInfo;
extern "C" void CardboardHead__ctor_m250 (CardboardHead_t53 * __this, MethodInfo* method)
{
	{
		__this->___trackRotation_2 = 1;
		__this->___trackPosition_3 = 1;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// UnityEngine.Ray CardboardHead::get_Gaze()
extern "C" Ray_t78  CardboardHead_get_Gaze_m251 (CardboardHead_t53 * __this, MethodInfo* method)
{
	{
		CardboardHead_UpdateHead_m254(__this, /*hidden argument*/&CardboardHead_UpdateHead_m254_MethodInfo);
		Transform_t2 * L_0 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_0);
		Vector3_t5  L_1 = Transform_get_position_m506(L_0, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_2 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_2);
		Vector3_t5  L_3 = Transform_get_forward_m535(L_2, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		Ray_t78  L_4 = {0};
		Ray__ctor_m872(&L_4, L_1, L_3, /*hidden argument*/&Ray__ctor_m872_MethodInfo);
		return L_4;
	}
}
// System.Void CardboardHead::Update()
extern MethodInfo CardboardHead_Update_m252_MethodInfo;
extern "C" void CardboardHead_Update_m252 (CardboardHead_t53 * __this, MethodInfo* method)
{
	{
		__this->___updated_6 = 0;
		bool L_0 = (__this->___updateEarly_5);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		CardboardHead_UpdateHead_m254(__this, /*hidden argument*/&CardboardHead_UpdateHead_m254_MethodInfo);
	}

IL_0018:
	{
		return;
	}
}
// System.Void CardboardHead::LateUpdate()
extern MethodInfo CardboardHead_LateUpdate_m253_MethodInfo;
extern "C" void CardboardHead_LateUpdate_m253 (CardboardHead_t53 * __this, MethodInfo* method)
{
	{
		CardboardHead_UpdateHead_m254(__this, /*hidden argument*/&CardboardHead_UpdateHead_m254_MethodInfo);
		return;
	}
}
// System.Void CardboardHead::UpdateHead()
extern "C" void CardboardHead_UpdateHead_m254 (CardboardHead_t53 * __this, MethodInfo* method)
{
	Quaternion_t10  V_0 = {0};
	Vector3_t5  V_1 = {0};
	{
		bool L_0 = (__this->___updated_6);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		__this->___updated_6 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_1 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_1);
		Cardboard_UpdateState_m213(L_1, /*hidden argument*/&Cardboard_UpdateState_m213_MethodInfo);
		bool L_2 = (__this->___trackRotation_2);
		if (!L_2)
		{
			goto IL_0076;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_3 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_3);
		Pose3D_t73 * L_4 = Cardboard_get_HeadPose_m202(L_3, /*hidden argument*/&Cardboard_get_HeadPose_m202_MethodInfo);
		NullCheck(L_4);
		Quaternion_t10  L_5 = Pose3D_get_Orientation_m287(L_4, /*hidden argument*/&Pose3D_get_Orientation_m287_MethodInfo);
		V_0 = L_5;
		Transform_t2 * L_6 = (__this->___target_4);
		bool L_7 = Object_op_Equality_m528(NULL /*static, unused*/, L_6, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		Transform_t2 * L_8 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Quaternion_t10  L_9 = V_0;
		NullCheck(L_8);
		Transform_set_localRotation_m577(L_8, L_9, /*hidden argument*/&Transform_set_localRotation_m577_MethodInfo);
		goto IL_0076;
	}

IL_005a:
	{
		Transform_t2 * L_10 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Quaternion_t10  L_11 = V_0;
		Transform_t2 * L_12 = (__this->___target_4);
		NullCheck(L_12);
		Quaternion_t10  L_13 = Transform_get_rotation_m513(L_12, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		Quaternion_t10  L_14 = Quaternion_op_Multiply_m602(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/&Quaternion_op_Multiply_m602_MethodInfo);
		NullCheck(L_10);
		Transform_set_rotation_m512(L_10, L_14, /*hidden argument*/&Transform_set_rotation_m512_MethodInfo);
	}

IL_0076:
	{
		bool L_15 = (__this->___trackPosition_3);
		if (!L_15)
		{
			goto IL_00df;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_16 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_16);
		Pose3D_t73 * L_17 = Cardboard_get_HeadPose_m202(L_16, /*hidden argument*/&Cardboard_get_HeadPose_m202_MethodInfo);
		NullCheck(L_17);
		Vector3_t5  L_18 = Pose3D_get_Position_m285(L_17, /*hidden argument*/&Pose3D_get_Position_m285_MethodInfo);
		V_1 = L_18;
		Transform_t2 * L_19 = (__this->___target_4);
		bool L_20 = Object_op_Equality_m528(NULL /*static, unused*/, L_19, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		Transform_t2 * L_21 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Vector3_t5  L_22 = V_1;
		NullCheck(L_21);
		Transform_set_localPosition_m579(L_21, L_22, /*hidden argument*/&Transform_set_localPosition_m579_MethodInfo);
		goto IL_00df;
	}

IL_00b3:
	{
		Transform_t2 * L_23 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		Transform_t2 * L_24 = (__this->___target_4);
		NullCheck(L_24);
		Vector3_t5  L_25 = Transform_get_position_m506(L_24, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_26 = (__this->___target_4);
		NullCheck(L_26);
		Quaternion_t10  L_27 = Transform_get_rotation_m513(L_26, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		Vector3_t5  L_28 = V_1;
		Vector3_t5  L_29 = Quaternion_op_Multiply_m611(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/&Quaternion_op_Multiply_m611_MethodInfo);
		Vector3_t5  L_30 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_25, L_29, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		NullCheck(L_23);
		Transform_set_position_m518(L_23, L_30, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
	}

IL_00df:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// CardboardProfile/Screen
#include "AssemblyU2DCSharp_CardboardProfile_ScreenMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// CardboardProfile/Lenses
#include "AssemblyU2DCSharp_CardboardProfile_LensesMethodDeclarations.h"



// CardboardProfile/MaxFOV
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOV.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MaxFOV_t81_il2cpp_TypeInfo;
// CardboardProfile/MaxFOV
#include "AssemblyU2DCSharp_CardboardProfile_MaxFOVMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// CardboardProfile/Distortion
#include "AssemblyU2DCSharp_CardboardProfile_DistortionMethodDeclarations.h"



// System.Single CardboardProfile/Distortion::distort(System.Single)
extern MethodInfo Distortion_distort_m255_MethodInfo;
extern "C" float Distortion_distort_m255 (Distortion_t82 * __this, float ___r, MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = ___r;
		float L_1 = ___r;
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = (__this->___k2_1);
		float L_3 = V_0;
		float L_4 = (__this->___k1_0);
		float L_5 = V_0;
		float L_6 = ___r;
		return ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_2*(float)L_3))+(float)L_4))*(float)L_5))+(float)(1.0f)))*(float)L_6));
	}
}
#ifndef _MSC_VER
#else
#endif
// CardboardProfile/Device
#include "AssemblyU2DCSharp_CardboardProfile_DeviceMethodDeclarations.h"



// CardboardProfile/ScreenSizes
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ScreenSizes_t84_il2cpp_TypeInfo;
// CardboardProfile/ScreenSizes
#include "AssemblyU2DCSharp_CardboardProfile_ScreenSizesMethodDeclarations.h"



// CardboardProfile/DeviceTypes
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DeviceTypes_t85_il2cpp_TypeInfo;
// CardboardProfile/DeviceTypes
#include "AssemblyU2DCSharp_CardboardProfile_DeviceTypesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern TypeInfo DoubleU5BU2CU5D_t87_il2cpp_TypeInfo;
extern TypeInfo Double_t209_il2cpp_TypeInfo;
extern TypeInfo DoubleU5BU5D_t86_il2cpp_TypeInfo;
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern Il2CppType DoubleU5BU2CU5D_t87_0_0_0;
extern Il2CppType Double_t209_0_0_0;
extern Il2CppType DoubleU5BU5D_t86_0_0_0;
extern MethodInfo CardboardProfile_ApproximateInverse_m265_MethodInfo;
extern MethodInfo CardboardProfile__ctor_m256_MethodInfo;
extern MethodInfo Math_Tan_m873_MethodInfo;
extern MethodInfo CardboardProfile_get_VerticalLensOffset_m259_MethodInfo;
extern MethodInfo Math_Max_m874_MethodInfo;
extern MethodInfo Math_Min_m875_MethodInfo;
extern MethodInfo Array_GetLength_m876_MethodInfo;
extern MethodInfo DoubleU5BU2CU5D__ctor_m877_MethodInfo;
extern MethodInfo DoubleU5BU2CU5D_Get_m878_MethodInfo;
extern MethodInfo DoubleU5BU2CU5D_Set_m879_MethodInfo;
extern MethodInfo CardboardProfile_ApproximateInverse_m266_MethodInfo;
extern MethodInfo CardboardProfile_solveLeastSquares_m264_MethodInfo;


// System.Void CardboardProfile::.ctor()
extern "C" void CardboardProfile__ctor_m256 (CardboardProfile_t72 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void CardboardProfile::.cctor()
extern MethodInfo CardboardProfile__cctor_m257_MethodInfo;
extern "C" void CardboardProfile__cctor_m257 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	Screen_t79  V_0 = {0};
	Screen_t79  V_1 = {0};
	Screen_t79  V_2 = {0};
	Screen_t79  V_3 = {0};
	Screen_t79  V_4 = {0};
	Screen_t79  V_5 = {0};
	Screen_t79  V_6 = {0};
	Screen_t79  V_7 = {0};
	Screen_t79  V_8 = {0};
	Device_t83  V_9 = {0};
	Device_t83  V_10 = {0};
	Device_t83  V_11 = {0};
	CardboardProfile_t72 * V_12 = {0};
	{
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_0));
		(&V_0)->___width_0 = (0.11f);
		(&V_0)->___height_1 = (0.062f);
		(&V_0)->___border_2 = (0.004f);
		Screen_t79  L_0 = V_0;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___Nexus5_2 = L_0;
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_1));
		(&V_1)->___width_0 = (0.133f);
		(&V_1)->___height_1 = (0.074f);
		(&V_1)->___border_2 = (0.004f);
		Screen_t79  L_1 = V_1;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___Nexus6_3 = L_1;
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_2));
		(&V_2)->___width_0 = (0.114f);
		(&V_2)->___height_1 = (0.0635f);
		(&V_2)->___border_2 = (0.0035f);
		Screen_t79  L_2 = V_2;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___GalaxyS6_4 = L_2;
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_3));
		(&V_3)->___width_0 = (0.125f);
		(&V_3)->___height_1 = (0.0705f);
		(&V_3)->___border_2 = (0.0045f);
		Screen_t79  L_3 = V_3;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___GalaxyNote4_5 = L_3;
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_4));
		(&V_4)->___width_0 = (0.121f);
		(&V_4)->___height_1 = (0.068f);
		(&V_4)->___border_2 = (0.003f);
		Screen_t79  L_4 = V_4;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___LGG3_6 = L_4;
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_5));
		(&V_5)->___width_0 = (0.075f);
		(&V_5)->___height_1 = (0.05f);
		(&V_5)->___border_2 = (0.0045f);
		Screen_t79  L_5 = V_5;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___iPhone4_7 = L_5;
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_6));
		(&V_6)->___width_0 = (0.089f);
		(&V_6)->___height_1 = (0.05f);
		(&V_6)->___border_2 = (0.0045f);
		Screen_t79  L_6 = V_6;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___iPhone5_8 = L_6;
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_7));
		(&V_7)->___width_0 = (0.104f);
		(&V_7)->___height_1 = (0.058f);
		(&V_7)->___border_2 = (0.005f);
		Screen_t79  L_7 = V_7;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___iPhone6_9 = L_7;
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_8));
		(&V_8)->___width_0 = (0.112f);
		(&V_8)->___height_1 = (0.068f);
		(&V_8)->___border_2 = (0.005f);
		Screen_t79  L_8 = V_8;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___iPhone6p_10 = L_8;
		Initobj (InitializedTypeInfo(&Device_t83_il2cpp_TypeInfo), (&V_9));
		Lenses_t80 * L_9 = &((&V_9)->___lenses_0);
		L_9->___separation_3 = (0.06f);
		Lenses_t80 * L_10 = &((&V_9)->___lenses_0);
		L_10->___offset_4 = (0.035f);
		Lenses_t80 * L_11 = &((&V_9)->___lenses_0);
		L_11->___screenDistance_5 = (0.042f);
		Lenses_t80 * L_12 = &((&V_9)->___lenses_0);
		L_12->___alignment_6 = 1;
		MaxFOV_t81 * L_13 = &((&V_9)->___maxFOV_1);
		L_13->___outer_0 = (40.0f);
		MaxFOV_t81 * L_14 = &((&V_9)->___maxFOV_1);
		L_14->___inner_1 = (40.0f);
		MaxFOV_t81 * L_15 = &((&V_9)->___maxFOV_1);
		L_15->___upper_2 = (40.0f);
		MaxFOV_t81 * L_16 = &((&V_9)->___maxFOV_1);
		L_16->___lower_3 = (40.0f);
		Distortion_t82 * L_17 = &((&V_9)->___distortion_2);
		L_17->___k1_0 = (0.441f);
		Distortion_t82 * L_18 = &((&V_9)->___distortion_2);
		L_18->___k2_1 = (0.156f);
		Distortion_t82  L_19 = CardboardProfile_ApproximateInverse_m265(NULL /*static, unused*/, (0.441f), (0.156f), (1.0f), ((int32_t)10), /*hidden argument*/&CardboardProfile_ApproximateInverse_m265_MethodInfo);
		(&V_9)->___inverse_3 = L_19;
		Device_t83  L_20 = V_9;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___CardboardJun2014_11 = L_20;
		Initobj (InitializedTypeInfo(&Device_t83_il2cpp_TypeInfo), (&V_10));
		Lenses_t80 * L_21 = &((&V_10)->___lenses_0);
		L_21->___separation_3 = (0.062f);
		Lenses_t80 * L_22 = &((&V_10)->___lenses_0);
		L_22->___offset_4 = (0.035f);
		Lenses_t80 * L_23 = &((&V_10)->___lenses_0);
		L_23->___screenDistance_5 = (0.037f);
		Lenses_t80 * L_24 = &((&V_10)->___lenses_0);
		L_24->___alignment_6 = 1;
		MaxFOV_t81 * L_25 = &((&V_10)->___maxFOV_1);
		L_25->___outer_0 = (50.0f);
		MaxFOV_t81 * L_26 = &((&V_10)->___maxFOV_1);
		L_26->___inner_1 = (50.0f);
		MaxFOV_t81 * L_27 = &((&V_10)->___maxFOV_1);
		L_27->___upper_2 = (50.0f);
		MaxFOV_t81 * L_28 = &((&V_10)->___maxFOV_1);
		L_28->___lower_3 = (50.0f);
		Distortion_t82 * L_29 = &((&V_10)->___distortion_2);
		L_29->___k1_0 = (0.26f);
		Distortion_t82 * L_30 = &((&V_10)->___distortion_2);
		L_30->___k2_1 = (0.27f);
		Distortion_t82  L_31 = CardboardProfile_ApproximateInverse_m265(NULL /*static, unused*/, (0.26f), (0.27f), (1.0f), ((int32_t)10), /*hidden argument*/&CardboardProfile_ApproximateInverse_m265_MethodInfo);
		(&V_10)->___inverse_3 = L_31;
		Device_t83  L_32 = V_10;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___CardboardMay2015_12 = L_32;
		Initobj (InitializedTypeInfo(&Device_t83_il2cpp_TypeInfo), (&V_11));
		Lenses_t80 * L_33 = &((&V_11)->___lenses_0);
		L_33->___separation_3 = (0.065f);
		Lenses_t80 * L_34 = &((&V_11)->___lenses_0);
		L_34->___offset_4 = (0.036f);
		Lenses_t80 * L_35 = &((&V_11)->___lenses_0);
		L_35->___screenDistance_5 = (0.058f);
		Lenses_t80 * L_36 = &((&V_11)->___lenses_0);
		L_36->___alignment_6 = 1;
		MaxFOV_t81 * L_37 = &((&V_11)->___maxFOV_1);
		L_37->___outer_0 = (50.0f);
		MaxFOV_t81 * L_38 = &((&V_11)->___maxFOV_1);
		L_38->___inner_1 = (50.0f);
		MaxFOV_t81 * L_39 = &((&V_11)->___maxFOV_1);
		L_39->___upper_2 = (50.0f);
		MaxFOV_t81 * L_40 = &((&V_11)->___maxFOV_1);
		L_40->___lower_3 = (50.0f);
		Distortion_t82 * L_41 = &((&V_11)->___distortion_2);
		L_41->___k1_0 = (0.3f);
		Distortion_t82  L_42 = CardboardProfile_ApproximateInverse_m265(NULL /*static, unused*/, (0.3f), (0.0f), (1.0f), ((int32_t)10), /*hidden argument*/&CardboardProfile_ApproximateInverse_m265_MethodInfo);
		(&V_11)->___inverse_3 = L_42;
		Device_t83  L_43 = V_11;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___GoggleTechC1Glass_13 = L_43;
		CardboardProfile_t72 * L_44 = (CardboardProfile_t72 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		CardboardProfile__ctor_m256(L_44, /*hidden argument*/&CardboardProfile__ctor_m256_MethodInfo);
		V_12 = L_44;
		CardboardProfile_t72 * L_45 = V_12;
		Screen_t79  L_46 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___Nexus5_2;
		NullCheck(L_45);
		L_45->___screen_0 = L_46;
		CardboardProfile_t72 * L_47 = V_12;
		Device_t83  L_48 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___CardboardJun2014_11;
		NullCheck(L_47);
		L_47->___device_1 = L_48;
		CardboardProfile_t72 * L_49 = V_12;
		((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___Default_14 = L_49;
		return;
	}
}
// CardboardProfile CardboardProfile::Clone()
extern MethodInfo CardboardProfile_Clone_m258_MethodInfo;
extern "C" CardboardProfile_t72 * CardboardProfile_Clone_m258 (CardboardProfile_t72 * __this, MethodInfo* method)
{
	CardboardProfile_t72 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		CardboardProfile_t72 * L_0 = (CardboardProfile_t72 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		CardboardProfile__ctor_m256(L_0, /*hidden argument*/&CardboardProfile__ctor_m256_MethodInfo);
		V_0 = L_0;
		CardboardProfile_t72 * L_1 = V_0;
		Screen_t79  L_2 = (__this->___screen_0);
		NullCheck(L_1);
		L_1->___screen_0 = L_2;
		CardboardProfile_t72 * L_3 = V_0;
		Device_t83  L_4 = (__this->___device_1);
		NullCheck(L_3);
		L_3->___device_1 = L_4;
		CardboardProfile_t72 * L_5 = V_0;
		return L_5;
	}
}
// System.Single CardboardProfile::get_VerticalLensOffset()
extern "C" float CardboardProfile_get_VerticalLensOffset_m259 (CardboardProfile_t72 * __this, MethodInfo* method)
{
	{
		Device_t83 * L_0 = &(__this->___device_1);
		Lenses_t80 * L_1 = &(L_0->___lenses_0);
		float L_2 = (L_1->___offset_4);
		Screen_t79 * L_3 = &(__this->___screen_0);
		float L_4 = (L_3->___border_2);
		Screen_t79 * L_5 = &(__this->___screen_0);
		float L_6 = (L_5->___height_1);
		Device_t83 * L_7 = &(__this->___device_1);
		Lenses_t80 * L_8 = &(L_7->___lenses_0);
		int32_t L_9 = (L_8->___alignment_6);
		return ((float)((float)((float)((float)((float)((float)L_2-(float)L_4))-(float)((float)((float)L_6/(float)(2.0f)))))*(float)(((float)L_9))));
	}
}
// CardboardProfile CardboardProfile::GetKnownProfile(CardboardProfile/ScreenSizes,CardboardProfile/DeviceTypes)
extern MethodInfo CardboardProfile_GetKnownProfile_m260_MethodInfo;
extern "C" CardboardProfile_t72 * CardboardProfile_GetKnownProfile_m260 (Object_t * __this /* static, unused */, int32_t ___screenSize, int32_t ___deviceType, MethodInfo* method)
{
	Screen_t79  V_0 = {0};
	Device_t83  V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	CardboardProfile_t72 * V_4 = {0};
	{
		int32_t L_0 = ___screenSize;
		V_2 = L_0;
		int32_t L_1 = V_2;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_002f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_003a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0045;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_005b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0066;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0071;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0087;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_2 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___Nexus6_3;
		V_0 = L_2;
		goto IL_0092;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_3 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___GalaxyS6_4;
		V_0 = L_3;
		goto IL_0092;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_4 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___GalaxyNote4_5;
		V_0 = L_4;
		goto IL_0092;
	}

IL_0050:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_5 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___LGG3_6;
		V_0 = L_5;
		goto IL_0092;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_6 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___iPhone4_7;
		V_0 = L_6;
		goto IL_0092;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_7 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___iPhone5_8;
		V_0 = L_7;
		goto IL_0092;
	}

IL_0071:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_8 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___iPhone6_9;
		V_0 = L_8;
		goto IL_0092;
	}

IL_007c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_9 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___iPhone6p_10;
		V_0 = L_9;
		goto IL_0092;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Screen_t79  L_10 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___Nexus5_2;
		V_0 = L_10;
		goto IL_0092;
	}

IL_0092:
	{
		int32_t L_11 = ___deviceType;
		V_3 = L_11;
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_00ab;
	}

IL_00a0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Device_t83  L_13 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___CardboardMay2015_12;
		V_1 = L_13;
		goto IL_00b6;
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Device_t83  L_14 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___CardboardJun2014_11;
		V_1 = L_14;
		goto IL_00b6;
	}

IL_00b6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		CardboardProfile_t72 * L_15 = (CardboardProfile_t72 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		CardboardProfile__ctor_m256(L_15, /*hidden argument*/&CardboardProfile__ctor_m256_MethodInfo);
		V_4 = L_15;
		CardboardProfile_t72 * L_16 = V_4;
		Screen_t79  L_17 = V_0;
		NullCheck(L_16);
		L_16->___screen_0 = L_17;
		CardboardProfile_t72 * L_18 = V_4;
		Device_t83  L_19 = V_1;
		NullCheck(L_18);
		L_18->___device_1 = L_19;
		CardboardProfile_t72 * L_20 = V_4;
		return L_20;
	}
}
// System.Void CardboardProfile::GetLeftEyeVisibleTanAngles(System.Single[]&)
extern MethodInfo CardboardProfile_GetLeftEyeVisibleTanAngles_m261_MethodInfo;
extern "C" void CardboardProfile_GetLeftEyeVisibleTanAngles_m261 (CardboardProfile_t72 * __this, SingleU5BU5D_t25** ___result, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Device_t83 * L_0 = &(__this->___device_1);
		MaxFOV_t81 * L_1 = &(L_0->___maxFOV_1);
		float L_2 = (L_1->___outer_0);
		double L_3 = tan(((double)((double)((double)((double)(((double)((-L_2))))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_0 = (((float)L_3));
		Device_t83 * L_4 = &(__this->___device_1);
		MaxFOV_t81 * L_5 = &(L_4->___maxFOV_1);
		float L_6 = (L_5->___upper_2);
		double L_7 = tan(((double)((double)((double)((double)(((double)L_6))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_1 = (((float)L_7));
		Device_t83 * L_8 = &(__this->___device_1);
		MaxFOV_t81 * L_9 = &(L_8->___maxFOV_1);
		float L_10 = (L_9->___inner_1);
		double L_11 = tan(((double)((double)((double)((double)(((double)L_10))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_2 = (((float)L_11));
		Device_t83 * L_12 = &(__this->___device_1);
		MaxFOV_t81 * L_13 = &(L_12->___maxFOV_1);
		float L_14 = (L_13->___lower_3);
		double L_15 = tan(((double)((double)((double)((double)(((double)((-L_14))))*(double)(3.1415926535897931)))/(double)(180.0))));
		V_3 = (((float)L_15));
		Screen_t79 * L_16 = &(__this->___screen_0);
		float L_17 = (L_16->___width_0);
		V_4 = ((float)((float)L_17/(float)(4.0f)));
		Screen_t79 * L_18 = &(__this->___screen_0);
		float L_19 = (L_18->___height_1);
		V_5 = ((float)((float)L_19/(float)(2.0f)));
		Device_t83 * L_20 = &(__this->___device_1);
		Lenses_t80 * L_21 = &(L_20->___lenses_0);
		float L_22 = (L_21->___separation_3);
		float L_23 = V_4;
		V_6 = ((float)((float)((float)((float)L_22/(float)(2.0f)))-(float)L_23));
		float L_24 = CardboardProfile_get_VerticalLensOffset_m259(__this, /*hidden argument*/&CardboardProfile_get_VerticalLensOffset_m259_MethodInfo);
		V_7 = ((-L_24));
		Device_t83 * L_25 = &(__this->___device_1);
		Lenses_t80 * L_26 = &(L_25->___lenses_0);
		float L_27 = (L_26->___screenDistance_5);
		V_8 = L_27;
		Device_t83 * L_28 = &(__this->___device_1);
		Distortion_t82 * L_29 = &(L_28->___distortion_2);
		float L_30 = V_6;
		float L_31 = V_4;
		float L_32 = V_8;
		float L_33 = Distortion_distort_m255(L_29, ((float)((float)((float)((float)L_30-(float)L_31))/(float)L_32)), /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_9 = L_33;
		Device_t83 * L_34 = &(__this->___device_1);
		Distortion_t82 * L_35 = &(L_34->___distortion_2);
		float L_36 = V_7;
		float L_37 = V_5;
		float L_38 = V_8;
		float L_39 = Distortion_distort_m255(L_35, ((float)((float)((float)((float)L_36+(float)L_37))/(float)L_38)), /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_10 = L_39;
		Device_t83 * L_40 = &(__this->___device_1);
		Distortion_t82 * L_41 = &(L_40->___distortion_2);
		float L_42 = V_6;
		float L_43 = V_4;
		float L_44 = V_8;
		float L_45 = Distortion_distort_m255(L_41, ((float)((float)((float)((float)L_42+(float)L_43))/(float)L_44)), /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_11 = L_45;
		Device_t83 * L_46 = &(__this->___device_1);
		Distortion_t82 * L_47 = &(L_46->___distortion_2);
		float L_48 = V_7;
		float L_49 = V_4;
		float L_50 = V_8;
		float L_51 = Distortion_distort_m255(L_47, ((float)((float)((float)((float)L_48-(float)L_49))/(float)L_50)), /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_12 = L_51;
		SingleU5BU5D_t25** L_52 = ___result;
		float L_53 = V_0;
		float L_54 = V_9;
		float L_55 = Math_Max_m874(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/&Math_Max_m874_MethodInfo);
		NullCheck((*((SingleU5BU5D_t25**)L_52)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t25**)L_52)), 0);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t25**)L_52)), 0)) = (float)L_55;
		SingleU5BU5D_t25** L_56 = ___result;
		float L_57 = V_1;
		float L_58 = V_10;
		float L_59 = Math_Min_m875(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/&Math_Min_m875_MethodInfo);
		NullCheck((*((SingleU5BU5D_t25**)L_56)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t25**)L_56)), 1);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t25**)L_56)), 1)) = (float)L_59;
		SingleU5BU5D_t25** L_60 = ___result;
		float L_61 = V_2;
		float L_62 = V_11;
		float L_63 = Math_Min_m875(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/&Math_Min_m875_MethodInfo);
		NullCheck((*((SingleU5BU5D_t25**)L_60)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t25**)L_60)), 2);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t25**)L_60)), 2)) = (float)L_63;
		SingleU5BU5D_t25** L_64 = ___result;
		float L_65 = V_3;
		float L_66 = V_12;
		float L_67 = Math_Max_m874(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/&Math_Max_m874_MethodInfo);
		NullCheck((*((SingleU5BU5D_t25**)L_64)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t25**)L_64)), 3);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t25**)L_64)), 3)) = (float)L_67;
		return;
	}
}
// System.Void CardboardProfile::GetLeftEyeNoLensTanAngles(System.Single[]&)
extern MethodInfo CardboardProfile_GetLeftEyeNoLensTanAngles_m262_MethodInfo;
extern "C" void CardboardProfile_GetLeftEyeNoLensTanAngles_m262 (CardboardProfile_t72 * __this, SingleU5BU5D_t25** ___result, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	{
		Device_t83 * L_0 = &(__this->___device_1);
		Distortion_t82 * L_1 = &(L_0->___inverse_3);
		Device_t83 * L_2 = &(__this->___device_1);
		MaxFOV_t81 * L_3 = &(L_2->___maxFOV_1);
		float L_4 = (L_3->___outer_0);
		double L_5 = tan(((double)((double)((double)((double)(((double)((-L_4))))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_6 = Distortion_distort_m255(L_1, (((float)L_5)), /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_0 = L_6;
		Device_t83 * L_7 = &(__this->___device_1);
		Distortion_t82 * L_8 = &(L_7->___inverse_3);
		Device_t83 * L_9 = &(__this->___device_1);
		MaxFOV_t81 * L_10 = &(L_9->___maxFOV_1);
		float L_11 = (L_10->___upper_2);
		double L_12 = tan(((double)((double)((double)((double)(((double)L_11))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_13 = Distortion_distort_m255(L_8, (((float)L_12)), /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_1 = L_13;
		Device_t83 * L_14 = &(__this->___device_1);
		Distortion_t82 * L_15 = &(L_14->___inverse_3);
		Device_t83 * L_16 = &(__this->___device_1);
		MaxFOV_t81 * L_17 = &(L_16->___maxFOV_1);
		float L_18 = (L_17->___inner_1);
		double L_19 = tan(((double)((double)((double)((double)(((double)L_18))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_20 = Distortion_distort_m255(L_15, (((float)L_19)), /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_2 = L_20;
		Device_t83 * L_21 = &(__this->___device_1);
		Distortion_t82 * L_22 = &(L_21->___inverse_3);
		Device_t83 * L_23 = &(__this->___device_1);
		MaxFOV_t81 * L_24 = &(L_23->___maxFOV_1);
		float L_25 = (L_24->___lower_3);
		double L_26 = tan(((double)((double)((double)((double)(((double)((-L_25))))*(double)(3.1415926535897931)))/(double)(180.0))));
		float L_27 = Distortion_distort_m255(L_22, (((float)L_26)), /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_3 = L_27;
		Screen_t79 * L_28 = &(__this->___screen_0);
		float L_29 = (L_28->___width_0);
		V_4 = ((float)((float)L_29/(float)(4.0f)));
		Screen_t79 * L_30 = &(__this->___screen_0);
		float L_31 = (L_30->___height_1);
		V_5 = ((float)((float)L_31/(float)(2.0f)));
		Device_t83 * L_32 = &(__this->___device_1);
		Lenses_t80 * L_33 = &(L_32->___lenses_0);
		float L_34 = (L_33->___separation_3);
		float L_35 = V_4;
		V_6 = ((float)((float)((float)((float)L_34/(float)(2.0f)))-(float)L_35));
		float L_36 = CardboardProfile_get_VerticalLensOffset_m259(__this, /*hidden argument*/&CardboardProfile_get_VerticalLensOffset_m259_MethodInfo);
		V_7 = ((-L_36));
		Device_t83 * L_37 = &(__this->___device_1);
		Lenses_t80 * L_38 = &(L_37->___lenses_0);
		float L_39 = (L_38->___screenDistance_5);
		V_8 = L_39;
		float L_40 = V_6;
		float L_41 = V_4;
		float L_42 = V_8;
		V_9 = ((float)((float)((float)((float)L_40-(float)L_41))/(float)L_42));
		float L_43 = V_7;
		float L_44 = V_5;
		float L_45 = V_8;
		V_10 = ((float)((float)((float)((float)L_43+(float)L_44))/(float)L_45));
		float L_46 = V_6;
		float L_47 = V_4;
		float L_48 = V_8;
		V_11 = ((float)((float)((float)((float)L_46+(float)L_47))/(float)L_48));
		float L_49 = V_7;
		float L_50 = V_4;
		float L_51 = V_8;
		V_12 = ((float)((float)((float)((float)L_49-(float)L_50))/(float)L_51));
		SingleU5BU5D_t25** L_52 = ___result;
		float L_53 = V_0;
		float L_54 = V_9;
		float L_55 = Math_Max_m874(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/&Math_Max_m874_MethodInfo);
		NullCheck((*((SingleU5BU5D_t25**)L_52)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t25**)L_52)), 0);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t25**)L_52)), 0)) = (float)L_55;
		SingleU5BU5D_t25** L_56 = ___result;
		float L_57 = V_1;
		float L_58 = V_10;
		float L_59 = Math_Min_m875(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/&Math_Min_m875_MethodInfo);
		NullCheck((*((SingleU5BU5D_t25**)L_56)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t25**)L_56)), 1);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t25**)L_56)), 1)) = (float)L_59;
		SingleU5BU5D_t25** L_60 = ___result;
		float L_61 = V_2;
		float L_62 = V_11;
		float L_63 = Math_Min_m875(NULL /*static, unused*/, L_61, L_62, /*hidden argument*/&Math_Min_m875_MethodInfo);
		NullCheck((*((SingleU5BU5D_t25**)L_60)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t25**)L_60)), 2);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t25**)L_60)), 2)) = (float)L_63;
		SingleU5BU5D_t25** L_64 = ___result;
		float L_65 = V_3;
		float L_66 = V_12;
		float L_67 = Math_Max_m874(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/&Math_Max_m874_MethodInfo);
		NullCheck((*((SingleU5BU5D_t25**)L_64)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((SingleU5BU5D_t25**)L_64)), 3);
		*((float*)(float*)SZArrayLdElema((*((SingleU5BU5D_t25**)L_64)), 3)) = (float)L_67;
		return;
	}
}
// UnityEngine.Rect CardboardProfile::GetLeftEyeVisibleScreenRect(System.Single[])
extern MethodInfo CardboardProfile_GetLeftEyeVisibleScreenRect_m263_MethodInfo;
extern "C" Rect_t62  CardboardProfile_GetLeftEyeVisibleScreenRect_m263 (CardboardProfile_t72 * __this, SingleU5BU5D_t25* ___undistortedFrustum, MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		Device_t83 * L_0 = &(__this->___device_1);
		Lenses_t80 * L_1 = &(L_0->___lenses_0);
		float L_2 = (L_1->___screenDistance_5);
		V_0 = L_2;
		Screen_t79 * L_3 = &(__this->___screen_0);
		float L_4 = (L_3->___width_0);
		Device_t83 * L_5 = &(__this->___device_1);
		Lenses_t80 * L_6 = &(L_5->___lenses_0);
		float L_7 = (L_6->___separation_3);
		V_1 = ((float)((float)((float)((float)L_4-(float)L_7))/(float)(2.0f)));
		float L_8 = CardboardProfile_get_VerticalLensOffset_m259(__this, /*hidden argument*/&CardboardProfile_get_VerticalLensOffset_m259_MethodInfo);
		Screen_t79 * L_9 = &(__this->___screen_0);
		float L_10 = (L_9->___height_1);
		V_2 = ((float)((float)L_8+(float)((float)((float)L_10/(float)(2.0f)))));
		SingleU5BU5D_t25* L_11 = ___undistortedFrustum;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		int32_t L_12 = 0;
		float L_13 = V_0;
		float L_14 = V_1;
		Screen_t79 * L_15 = &(__this->___screen_0);
		float L_16 = (L_15->___width_0);
		V_3 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_11, L_12))*(float)L_13))+(float)L_14))/(float)L_16));
		SingleU5BU5D_t25* L_17 = ___undistortedFrustum;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		int32_t L_18 = 1;
		float L_19 = V_0;
		float L_20 = V_2;
		Screen_t79 * L_21 = &(__this->___screen_0);
		float L_22 = (L_21->___height_1);
		V_4 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_17, L_18))*(float)L_19))+(float)L_20))/(float)L_22));
		SingleU5BU5D_t25* L_23 = ___undistortedFrustum;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 2);
		int32_t L_24 = 2;
		float L_25 = V_0;
		float L_26 = V_1;
		Screen_t79 * L_27 = &(__this->___screen_0);
		float L_28 = (L_27->___width_0);
		V_5 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_23, L_24))*(float)L_25))+(float)L_26))/(float)L_28));
		SingleU5BU5D_t25* L_29 = ___undistortedFrustum;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 3);
		int32_t L_30 = 3;
		float L_31 = V_0;
		float L_32 = V_2;
		Screen_t79 * L_33 = &(__this->___screen_0);
		float L_34 = (L_33->___height_1);
		V_6 = ((float)((float)((float)((float)((float)((float)(*(float*)(float*)SZArrayLdElema(L_29, L_30))*(float)L_31))+(float)L_32))/(float)L_34));
		float L_35 = V_3;
		float L_36 = V_6;
		float L_37 = V_5;
		float L_38 = V_3;
		float L_39 = V_4;
		float L_40 = V_6;
		Rect_t62  L_41 = {0};
		Rect__ctor_m741(&L_41, L_35, L_36, ((float)((float)L_37-(float)L_38)), ((float)((float)L_39-(float)L_40)), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		return L_41;
	}
}
// System.Double[] CardboardProfile::solveLeastSquares(System.Double[,],System.Double[])
extern TypeInfo* DoubleU5BU2CU5D_t87_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t86_il2cpp_TypeInfo_var;
extern "C" DoubleU5BU5D_t86* CardboardProfile_solveLeastSquares_m264 (Object_t * __this /* static, unused */, DoubleU5BU2CU5D_t87* ___matA, DoubleU5BU5D_t86* ___vecY, MethodInfo* method)
{
	static bool CardboardProfile_solveLeastSquares_m264_init;
	if (!CardboardProfile_solveLeastSquares_m264_init)
	{
		DoubleU5BU2CU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU2CU5D_t87_0_0_0);
		DoubleU5BU5D_t86_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU5D_t86_0_0_0);
		CardboardProfile_solveLeastSquares_m264_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DoubleU5BU2CU5D_t87* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	DoubleU5BU2CU5D_t87* V_7 = {0};
	double V_8 = 0.0;
	DoubleU5BU5D_t86* V_9 = {0};
	int32_t V_10 = 0;
	double V_11 = 0.0;
	int32_t V_12 = 0;
	DoubleU5BU5D_t86* V_13 = {0};
	int32_t V_14 = 0;
	double V_15 = 0.0;
	int32_t V_16 = 0;
	{
		DoubleU5BU2CU5D_t87* L_0 = ___matA;
		NullCheck(L_0);
		int32_t L_1 = Array_GetLength_m876(L_0, 0, /*hidden argument*/&Array_GetLength_m876_MethodInfo);
		V_0 = L_1;
		DoubleU5BU2CU5D_t87* L_2 = ___matA;
		NullCheck(L_2);
		int32_t L_3 = Array_GetLength_m876(L_2, 1, /*hidden argument*/&Array_GetLength_m876_MethodInfo);
		V_1 = L_3;
		int32_t L_4 = V_0;
		DoubleU5BU5D_t86* L_5 = ___vecY;
		NullCheck(L_5);
		if ((((int32_t)L_4) == ((int32_t)(((int32_t)(((Array_t *)L_5)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		Debug_LogError_m796(NULL /*static, unused*/, (String_t*) &_stringLiteral50, /*hidden argument*/&Debug_LogError_m796_MethodInfo);
		return (DoubleU5BU5D_t86*)NULL;
	}

IL_0025:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0038;
		}
	}
	{
		Debug_LogError_m796(NULL /*static, unused*/, (String_t*) &_stringLiteral51, /*hidden argument*/&Debug_LogError_m796_MethodInfo);
		return (DoubleU5BU5D_t86*)NULL;
	}

IL_0038:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_1;
		DoubleU5BU2CU5D_t87* L_9 = (DoubleU5BU2CU5D_t87*)GenArrayNew2(DoubleU5BU2CU5D_t87_il2cpp_TypeInfo_var, L_7, L_8);
		V_2 = L_9;
		V_3 = 0;
		goto IL_00a6;
	}

IL_0047:
	{
		V_4 = 0;
		goto IL_009a;
	}

IL_004f:
	{
		V_5 = (0.0);
		V_6 = 0;
		goto IL_0081;
	}

IL_0062:
	{
		double L_10 = V_5;
		DoubleU5BU2CU5D_t87* L_11 = ___matA;
		int32_t L_12 = V_6;
		int32_t L_13 = V_4;
		NullCheck(L_11);
		double L_14 = GenArrayGet2(L_11, L_12, L_13, double);;
		DoubleU5BU2CU5D_t87* L_15 = ___matA;
		int32_t L_16 = V_6;
		int32_t L_17 = V_3;
		NullCheck(L_15);
		double L_18 = GenArrayGet2(L_15, L_16, L_17, double);;
		V_5 = ((double)((double)L_10+(double)((double)((double)L_14*(double)L_18))));
		int32_t L_19 = V_6;
		V_6 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0081:
	{
		int32_t L_20 = V_6;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		DoubleU5BU2CU5D_t87* L_22 = V_2;
		int32_t L_23 = V_4;
		int32_t L_24 = V_3;
		double L_25 = V_5;
		NullCheck(L_22);
		GenArraySet2(L_22, L_23, L_24, L_25, double);;
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009a:
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_32 = V_1;
		int32_t L_33 = V_1;
		DoubleU5BU2CU5D_t87* L_34 = (DoubleU5BU2CU5D_t87*)GenArrayNew2(DoubleU5BU2CU5D_t87_il2cpp_TypeInfo_var, L_32, L_33);
		V_7 = L_34;
		DoubleU5BU2CU5D_t87* L_35 = V_2;
		NullCheck(L_35);
		double L_36 = GenArrayGet2(L_35, 0, 0, double);;
		DoubleU5BU2CU5D_t87* L_37 = V_2;
		NullCheck(L_37);
		double L_38 = GenArrayGet2(L_37, 1, 1, double);;
		DoubleU5BU2CU5D_t87* L_39 = V_2;
		NullCheck(L_39);
		double L_40 = GenArrayGet2(L_39, 0, 1, double);;
		DoubleU5BU2CU5D_t87* L_41 = V_2;
		NullCheck(L_41);
		double L_42 = GenArrayGet2(L_41, 1, 0, double);;
		V_8 = ((double)((double)((double)((double)L_36*(double)L_38))-(double)((double)((double)L_40*(double)L_42))));
		DoubleU5BU2CU5D_t87* L_43 = V_7;
		DoubleU5BU2CU5D_t87* L_44 = V_2;
		NullCheck(L_44);
		double L_45 = GenArrayGet2(L_44, 1, 1, double);;
		double L_46 = V_8;
		NullCheck(L_43);
		GenArraySet2(L_43, 0, 0, ((double)((double)L_45/(double)L_46)), double);;
		DoubleU5BU2CU5D_t87* L_47 = V_7;
		DoubleU5BU2CU5D_t87* L_48 = V_2;
		NullCheck(L_48);
		double L_49 = GenArrayGet2(L_48, 0, 0, double);;
		double L_50 = V_8;
		NullCheck(L_47);
		GenArraySet2(L_47, 1, 1, ((double)((double)L_49/(double)L_50)), double);;
		DoubleU5BU2CU5D_t87* L_51 = V_7;
		DoubleU5BU2CU5D_t87* L_52 = V_2;
		NullCheck(L_52);
		double L_53 = GenArrayGet2(L_52, 1, 0, double);;
		double L_54 = V_8;
		NullCheck(L_51);
		GenArraySet2(L_51, 0, 1, ((double)((double)((-L_53))/(double)L_54)), double);;
		DoubleU5BU2CU5D_t87* L_55 = V_7;
		DoubleU5BU2CU5D_t87* L_56 = V_2;
		NullCheck(L_56);
		double L_57 = GenArrayGet2(L_56, 0, 1, double);;
		double L_58 = V_8;
		NullCheck(L_55);
		GenArraySet2(L_55, 1, 0, ((double)((double)((-L_57))/(double)L_58)), double);;
		int32_t L_59 = V_1;
		V_9 = ((DoubleU5BU5D_t86*)SZArrayNew(DoubleU5BU5D_t86_il2cpp_TypeInfo_var, L_59));
		V_10 = 0;
		goto IL_017f;
	}

IL_013d:
	{
		V_11 = (0.0);
		V_12 = 0;
		goto IL_016a;
	}

IL_0150:
	{
		double L_60 = V_11;
		DoubleU5BU2CU5D_t87* L_61 = ___matA;
		int32_t L_62 = V_12;
		int32_t L_63 = V_10;
		NullCheck(L_61);
		double L_64 = GenArrayGet2(L_61, L_62, L_63, double);;
		DoubleU5BU5D_t86* L_65 = ___vecY;
		int32_t L_66 = V_12;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		V_11 = ((double)((double)L_60+(double)((double)((double)L_64*(double)(*(double*)(double*)SZArrayLdElema(L_65, L_67))))));
		int32_t L_68 = V_12;
		V_12 = ((int32_t)((int32_t)L_68+(int32_t)1));
	}

IL_016a:
	{
		int32_t L_69 = V_12;
		int32_t L_70 = V_0;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_0150;
		}
	}
	{
		DoubleU5BU5D_t86* L_71 = V_9;
		int32_t L_72 = V_10;
		double L_73 = V_11;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_72);
		*((double*)(double*)SZArrayLdElema(L_71, L_72)) = (double)L_73;
		int32_t L_74 = V_10;
		V_10 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_017f:
	{
		int32_t L_75 = V_10;
		int32_t L_76 = V_1;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_77 = V_1;
		V_13 = ((DoubleU5BU5D_t86*)SZArrayNew(DoubleU5BU5D_t86_il2cpp_TypeInfo_var, L_77));
		V_14 = 0;
		goto IL_01db;
	}

IL_0197:
	{
		V_15 = (0.0);
		V_16 = 0;
		goto IL_01c6;
	}

IL_01aa:
	{
		double L_78 = V_15;
		DoubleU5BU2CU5D_t87* L_79 = V_7;
		int32_t L_80 = V_16;
		int32_t L_81 = V_14;
		NullCheck(L_79);
		double L_82 = GenArrayGet2(L_79, L_80, L_81, double);;
		DoubleU5BU5D_t86* L_83 = V_9;
		int32_t L_84 = V_16;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, L_84);
		int32_t L_85 = L_84;
		V_15 = ((double)((double)L_78+(double)((double)((double)L_82*(double)(*(double*)(double*)SZArrayLdElema(L_83, L_85))))));
		int32_t L_86 = V_16;
		V_16 = ((int32_t)((int32_t)L_86+(int32_t)1));
	}

IL_01c6:
	{
		int32_t L_87 = V_16;
		int32_t L_88 = V_1;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_01aa;
		}
	}
	{
		DoubleU5BU5D_t86* L_89 = V_13;
		int32_t L_90 = V_14;
		double L_91 = V_15;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, L_90);
		*((double*)(double*)SZArrayLdElema(L_89, L_90)) = (double)L_91;
		int32_t L_92 = V_14;
		V_14 = ((int32_t)((int32_t)L_92+(int32_t)1));
	}

IL_01db:
	{
		int32_t L_93 = V_14;
		int32_t L_94 = V_1;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_0197;
		}
	}
	{
		DoubleU5BU5D_t86* L_95 = V_13;
		return L_95;
	}
}
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(System.Single,System.Single,System.Single,System.Int32)
extern "C" Distortion_t82  CardboardProfile_ApproximateInverse_m265 (Object_t * __this /* static, unused */, float ___k1, float ___k2, float ___maxRadius, int32_t ___numSamples, MethodInfo* method)
{
	Distortion_t82  V_0 = {0};
	{
		Initobj (InitializedTypeInfo(&Distortion_t82_il2cpp_TypeInfo), (&V_0));
		float L_0 = ___k1;
		(&V_0)->___k1_0 = L_0;
		float L_1 = ___k2;
		(&V_0)->___k2_1 = L_1;
		Distortion_t82  L_2 = V_0;
		float L_3 = ___maxRadius;
		int32_t L_4 = ___numSamples;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Distortion_t82  L_5 = CardboardProfile_ApproximateInverse_m266(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/&CardboardProfile_ApproximateInverse_m266_MethodInfo);
		return L_5;
	}
}
// CardboardProfile/Distortion CardboardProfile::ApproximateInverse(CardboardProfile/Distortion,System.Single,System.Int32)
extern TypeInfo* DoubleU5BU2CU5D_t87_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t86_il2cpp_TypeInfo_var;
extern "C" Distortion_t82  CardboardProfile_ApproximateInverse_m266 (Object_t * __this /* static, unused */, Distortion_t82  ___distort, float ___maxRadius, int32_t ___numSamples, MethodInfo* method)
{
	static bool CardboardProfile_ApproximateInverse_m266_init;
	if (!CardboardProfile_ApproximateInverse_m266_init)
	{
		DoubleU5BU2CU5D_t87_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU2CU5D_t87_0_0_0);
		DoubleU5BU5D_t86_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&DoubleU5BU5D_t86_0_0_0);
		CardboardProfile_ApproximateInverse_m266_init = true;
	}
	int32_t V_0 = 0;
	DoubleU5BU2CU5D_t87* V_1 = {0};
	DoubleU5BU5D_t86* V_2 = {0};
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	double V_5 = 0.0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	DoubleU5BU5D_t86* V_8 = {0};
	Distortion_t82  V_9 = {0};
	{
		int32_t L_0 = ___numSamples;
		DoubleU5BU2CU5D_t87* L_1 = (DoubleU5BU2CU5D_t87*)GenArrayNew2(DoubleU5BU2CU5D_t87_il2cpp_TypeInfo_var, L_0, 2);
		V_1 = L_1;
		int32_t L_2 = ___numSamples;
		V_2 = ((DoubleU5BU5D_t86*)SZArrayNew(DoubleU5BU5D_t86_il2cpp_TypeInfo_var, L_2));
		V_3 = 0;
		goto IL_0069;
	}

IL_0016:
	{
		float L_3 = ___maxRadius;
		int32_t L_4 = V_3;
		int32_t L_5 = ___numSamples;
		V_4 = ((float)((float)((float)((float)L_3*(float)(((float)((int32_t)((int32_t)L_4+(int32_t)1))))))/(float)(((float)L_5))));
		float L_6 = V_4;
		float L_7 = Distortion_distort_m255((&___distort), L_6, /*hidden argument*/&Distortion_distort_m255_MethodInfo);
		V_5 = (((double)L_7));
		double L_8 = V_5;
		V_6 = L_8;
		V_7 = 0;
		goto IL_0054;
	}

IL_0039:
	{
		double L_9 = V_6;
		double L_10 = V_5;
		double L_11 = V_5;
		V_6 = ((double)((double)L_9*(double)((double)((double)L_10*(double)L_11))));
		DoubleU5BU2CU5D_t87* L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14 = V_7;
		double L_15 = V_6;
		NullCheck(L_12);
		GenArraySet2(L_12, L_13, L_14, L_15, double);;
		int32_t L_16 = V_7;
		V_7 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_17 = V_7;
		if ((((int32_t)L_17) < ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		DoubleU5BU5D_t86* L_18 = V_2;
		int32_t L_19 = V_3;
		float L_20 = V_4;
		double L_21 = V_5;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		*((double*)(double*)SZArrayLdElema(L_18, L_19)) = (double)((double)((double)(((double)L_20))-(double)L_21));
		int32_t L_22 = V_3;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = ___numSamples;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0016;
		}
	}
	{
		DoubleU5BU2CU5D_t87* L_25 = V_1;
		DoubleU5BU5D_t86* L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		DoubleU5BU5D_t86* L_27 = CardboardProfile_solveLeastSquares_m264(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&CardboardProfile_solveLeastSquares_m264_MethodInfo);
		V_8 = L_27;
		Initobj (InitializedTypeInfo(&Distortion_t82_il2cpp_TypeInfo), (&V_9));
		DoubleU5BU5D_t86* L_28 = V_8;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		int32_t L_29 = 0;
		(&V_9)->___k1_0 = (((float)(*(double*)(double*)SZArrayLdElema(L_28, L_29))));
		DoubleU5BU5D_t86* L_30 = V_8;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 1);
		int32_t L_31 = 1;
		(&V_9)->___k2_1 = (((float)(*(double*)(double*)SZArrayLdElema(L_30, L_31))));
		Distortion_t82  L_32 = V_9;
		return L_32;
	}
}
#ifndef _MSC_VER
#else
#endif

// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_$ArrayT.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
extern TypeInfo U3CPrivateImplementationDetailsU3E_t166_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
extern MethodInfo Color__ctor_m880_MethodInfo;
extern MethodInfo CardboardUILayer_ComputeMatrix_m269_MethodInfo;
extern MethodInfo RuntimeHelpers_InitializeArray_m881_MethodInfo;
extern MethodInfo Screen_get_dpi_m882_MethodInfo;
extern MethodInfo Matrix4x4_TRS_m883_MethodInfo;
extern MethodInfo Material_SetPass_m884_MethodInfo;
extern MethodInfo GL_LoadPixelMatrix_m885_MethodInfo;
extern MethodInfo GL_Begin_m886_MethodInfo;
extern MethodInfo GL_Vertex3_m887_MethodInfo;
extern MethodInfo GL_End_m888_MethodInfo;
extern MethodInfo GL_LoadOrtho_m889_MethodInfo;
extern MethodInfo GL_MultMatrix_m890_MethodInfo;
extern MethodInfo Mathf_Cos_m891_MethodInfo;
extern MethodInfo Mathf_Sin_m892_MethodInfo;
extern MethodInfo Mathf_PingPong_m893_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t166____$$fieldU2D0_0_FieldInfo;


// System.Void CardboardUILayer::.ctor()
extern "C" void CardboardUILayer__ctor_m267 (CardboardUILayer_t70 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Shader_t205 * L_0 = Shader_Find_m776(NULL /*static, unused*/, (String_t*) &_stringLiteral52, /*hidden argument*/&Shader_Find_m776_MethodInfo);
		Material_t88 * L_1 = (Material_t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t88_il2cpp_TypeInfo));
		Material__ctor_m777(L_1, L_0, /*hidden argument*/&Material__ctor_m777_MethodInfo);
		__this->___material_10 = L_1;
		Material_t88 * L_2 = (__this->___material_10);
		Color_t51  L_3 = {0};
		Color__ctor_m880(&L_3, (0.8f), (0.8f), (0.8f), /*hidden argument*/&Color__ctor_m880_MethodInfo);
		NullCheck(L_2);
		Material_set_color_m737(L_2, L_3, /*hidden argument*/&Material_set_color_m737_MethodInfo);
		bool L_4 = Application_get_isEditor_m823(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m823_MethodInfo);
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		CardboardUILayer_ComputeMatrix_m269(__this, /*hidden argument*/&CardboardUILayer_ComputeMatrix_m269_MethodInfo);
	}

IL_004a:
	{
		return;
	}
}
// System.Void CardboardUILayer::.cctor()
extern MethodInfo CardboardUILayer__cctor_m268_MethodInfo;
extern TypeInfo* SingleU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" void CardboardUILayer__cctor_m268 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool CardboardUILayer__cctor_m268_init;
	if (!CardboardUILayer__cctor_m268_init)
	{
		SingleU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t25_0_0_0);
		CardboardUILayer__cctor_m268_init = true;
	}
	{
		SingleU5BU5D_t25* L_0 = ((SingleU5BU5D_t25*)SZArrayNew(SingleU5BU5D_t25_il2cpp_TypeInfo_var, 5));
		RuntimeHelpers_InitializeArray_m881(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t166____$$fieldU2D0_0_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m881_MethodInfo);
		((CardboardUILayer_t70_StaticFields*)InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo)->static_fields)->___Angles_9 = L_0;
		return;
	}
}
// System.Void CardboardUILayer::ComputeMatrix()
extern "C" void CardboardUILayer_ComputeMatrix_m269 (CardboardUILayer_t70 * __this, MethodInfo* method)
{
	{
		float L_0 = Screen_get_dpi_m882(NULL /*static, unused*/, /*hidden argument*/&Screen_get_dpi_m882_MethodInfo);
		__this->___centerWidthPx_11 = ((float)((float)((float)((float)(0.025f)*(float)L_0))/(float)(2.0f)));
		float L_1 = Screen_get_dpi_m882(NULL /*static, unused*/, /*hidden argument*/&Screen_get_dpi_m882_MethodInfo);
		__this->___buttonWidthPx_12 = ((float)((float)((float)((float)(0.175f)*(float)L_1))/(float)(2.0f)));
		float L_2 = (__this->___buttonWidthPx_12);
		int32_t L_3 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		__this->___xScale_13 = ((float)((float)L_2/(float)(((float)L_3))));
		float L_4 = (__this->___buttonWidthPx_12);
		int32_t L_5 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		__this->___yScale_14 = ((float)((float)L_4/(float)(((float)L_5))));
		float L_6 = (__this->___yScale_14);
		Vector3_t5  L_7 = {0};
		Vector3__ctor_m510(&L_7, (0.5f), L_6, (0.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Quaternion_t10  L_8 = Quaternion_get_identity_m615(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m615_MethodInfo);
		float L_9 = (__this->___xScale_13);
		float L_10 = (__this->___yScale_14);
		Vector3_t5  L_11 = {0};
		Vector3__ctor_m510(&L_11, L_9, L_10, (1.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Matrix4x4_t27  L_12 = Matrix4x4_TRS_m883(NULL /*static, unused*/, L_7, L_8, L_11, /*hidden argument*/&Matrix4x4_TRS_m883_MethodInfo);
		__this->___xfm_15 = L_12;
		return;
	}
}
// System.Void CardboardUILayer::Draw()
extern "C" void CardboardUILayer_Draw_m270 (CardboardUILayer_t70 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_0 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_NativeUILayerSupported_m196(L_0, /*hidden argument*/&Cardboard_get_NativeUILayerSupported_m196_MethodInfo);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Color_t51  L_2 = Color_get_black_m725(NULL /*static, unused*/, /*hidden argument*/&Color_get_black_m725_MethodInfo);
		GL_Clear_m757(NULL /*static, unused*/, 1, 0, L_2, /*hidden argument*/&GL_Clear_m757_MethodInfo);
		Material_t88 * L_3 = (__this->___material_10);
		NullCheck(L_3);
		Material_SetPass_m884(L_3, 0, /*hidden argument*/&Material_SetPass_m884_MethodInfo);
		bool L_4 = Application_get_isEditor_m823(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m823_MethodInfo);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		CardboardUILayer_ComputeMatrix_m269(__this, /*hidden argument*/&CardboardUILayer_ComputeMatrix_m269_MethodInfo);
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_5 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_5);
		bool L_6 = Cardboard_get_EnableAlignmentMarker_m184(L_5, /*hidden argument*/&Cardboard_get_EnableAlignmentMarker_m184_MethodInfo);
		if (!L_6)
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_7 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		V_0 = ((int32_t)((int32_t)L_7/(int32_t)2));
		float L_8 = (__this->___centerWidthPx_11);
		V_1 = (((int32_t)L_8));
		float L_9 = (__this->___buttonWidthPx_12);
		V_2 = (((int32_t)((float)((float)(3.0f)*(float)L_9))));
		GL_PushMatrix_m854(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m854_MethodInfo);
		GL_LoadPixelMatrix_m885(NULL /*static, unused*/, /*hidden argument*/&GL_LoadPixelMatrix_m885_MethodInfo);
		GL_Begin_m886(NULL /*static, unused*/, 7, /*hidden argument*/&GL_Begin_m886_MethodInfo);
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		GL_Vertex3_m887(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_10-(int32_t)L_11)))), (((float)L_12)), (0.0f), /*hidden argument*/&GL_Vertex3_m887_MethodInfo);
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		int32_t L_16 = V_2;
		GL_Vertex3_m887(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_13-(int32_t)L_14)))), (((float)((int32_t)((int32_t)L_15-(int32_t)L_16)))), (0.0f), /*hidden argument*/&GL_Vertex3_m887_MethodInfo);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		int32_t L_20 = V_2;
		GL_Vertex3_m887(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_17+(int32_t)L_18)))), (((float)((int32_t)((int32_t)L_19-(int32_t)L_20)))), (0.0f), /*hidden argument*/&GL_Vertex3_m887_MethodInfo);
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		GL_Vertex3_m887(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_21+(int32_t)L_22)))), (((float)L_23)), (0.0f), /*hidden argument*/&GL_Vertex3_m887_MethodInfo);
		GL_End_m888(NULL /*static, unused*/, /*hidden argument*/&GL_End_m888_MethodInfo);
		GL_PopMatrix_m858(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m858_MethodInfo);
	}

IL_00cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_24 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_24);
		bool L_25 = Cardboard_get_EnableSettingsButton_m186(L_24, /*hidden argument*/&Cardboard_get_EnableSettingsButton_m186_MethodInfo);
		if (!L_25)
		{
			goto IL_01c1;
		}
	}
	{
		GL_PushMatrix_m854(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m854_MethodInfo);
		GL_LoadOrtho_m889(NULL /*static, unused*/, /*hidden argument*/&GL_LoadOrtho_m889_MethodInfo);
		Matrix4x4_t27  L_26 = (__this->___xfm_15);
		GL_MultMatrix_m890(NULL /*static, unused*/, L_26, /*hidden argument*/&GL_MultMatrix_m890_MethodInfo);
		GL_Begin_m886(NULL /*static, unused*/, 5, /*hidden argument*/&GL_Begin_m886_MethodInfo);
		V_3 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo));
		SingleU5BU5D_t25* L_27 = ((CardboardUILayer_t70_StaticFields*)InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo)->static_fields)->___Angles_9;
		NullCheck(L_27);
		V_4 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_27)->max_length)))*(int32_t)6));
		goto IL_01af;
	}

IL_0108:
	{
		int32_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo));
		SingleU5BU5D_t25* L_29 = ((CardboardUILayer_t70_StaticFields*)InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo)->static_fields)->___Angles_9;
		NullCheck(L_29);
		SingleU5BU5D_t25* L_30 = ((CardboardUILayer_t70_StaticFields*)InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo)->static_fields)->___Angles_9;
		int32_t L_31 = V_3;
		SingleU5BU5D_t25* L_32 = ((CardboardUILayer_t70_StaticFields*)InitializedTypeInfo(&CardboardUILayer_t70_il2cpp_TypeInfo)->static_fields)->___Angles_9;
		NullCheck(L_32);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)L_31%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))));
		int32_t L_33 = ((int32_t)((int32_t)L_31%(int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))));
		V_5 = ((float)((float)((float)((float)(((float)((int32_t)((int32_t)L_28/(int32_t)(((int32_t)(((Array_t *)L_29)->max_length)))))))*(float)(60.0f)))+(float)(*(float*)(float*)SZArrayLdElema(L_30, L_33))));
		float L_34 = V_5;
		V_6 = ((float)((float)((float)((float)(90.0f)-(float)L_34))*(float)(0.0174532924f)));
		float L_35 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_36 = cosf(L_35);
		V_7 = L_36;
		float L_37 = V_6;
		float L_38 = sinf(L_37);
		V_8 = L_38;
		float L_39 = V_5;
		float L_40 = Mathf_PingPong_m893(NULL /*static, unused*/, L_39, (30.0f), /*hidden argument*/&Mathf_PingPong_m893_MethodInfo);
		V_9 = L_40;
		float L_41 = V_9;
		V_10 = ((float)((float)((float)((float)L_41-(float)(12.0f)))/(float)(8.0f)));
		float L_42 = V_10;
		float L_43 = Mathf_Lerp_m645(NULL /*static, unused*/, (1.0f), (0.75f), L_42, /*hidden argument*/&Mathf_Lerp_m645_MethodInfo);
		V_11 = L_43;
		float L_44 = V_7;
		float L_45 = V_8;
		GL_Vertex3_m887(NULL /*static, unused*/, ((float)((float)(0.3125f)*(float)L_44)), ((float)((float)(0.3125f)*(float)L_45)), (0.0f), /*hidden argument*/&GL_Vertex3_m887_MethodInfo);
		float L_46 = V_11;
		float L_47 = V_7;
		float L_48 = V_11;
		float L_49 = V_8;
		GL_Vertex3_m887(NULL /*static, unused*/, ((float)((float)L_46*(float)L_47)), ((float)((float)L_48*(float)L_49)), (0.0f), /*hidden argument*/&GL_Vertex3_m887_MethodInfo);
		int32_t L_50 = V_3;
		V_3 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_01af:
	{
		int32_t L_51 = V_3;
		int32_t L_52 = V_4;
		if ((((int32_t)L_51) <= ((int32_t)L_52)))
		{
			goto IL_0108;
		}
	}
	{
		GL_End_m888(NULL /*static, unused*/, /*hidden argument*/&GL_End_m888_MethodInfo);
		GL_PopMatrix_m858(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m858_MethodInfo);
	}

IL_01c1:
	{
		return;
	}
}
// GazeInputModule
#include "AssemblyU2DCSharp_GazeInputModule.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GazeInputModule_t89_il2cpp_TypeInfo;
// GazeInputModule
#include "AssemblyU2DCSharp_GazeInputModuleMethodDeclarations.h"

extern MethodInfo GazeInputModule_HandlePendingClick_m279_MethodInfo;
extern MethodInfo GazeInputModule_CastRayFromGaze_m276_MethodInfo;
extern MethodInfo GazeInputModule_UpdateCurrentObject_m277_MethodInfo;
extern MethodInfo GazeInputModule_PlaceCursor_m278_MethodInfo;
extern MethodInfo GazeInputModule_HandleTrigger_m280_MethodInfo;
extern MethodInfo PointerEventData_get_clickTime_m894_MethodInfo;


// System.Void GazeInputModule::.ctor()
extern MethodInfo GazeInputModule__ctor_m271_MethodInfo;
extern "C" void GazeInputModule__ctor_m271 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	{
		__this->___clickTime_8 = (0.1f);
		Vector2_t48  L_0 = {0};
		Vector2__ctor_m588(&L_0, (0.5f), (0.5f), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		__this->___hotspot_9 = L_0;
		BaseInputModule__ctor_m664(__this, /*hidden argument*/&BaseInputModule__ctor_m664_MethodInfo);
		return;
	}
}
// System.Boolean GazeInputModule::ShouldActivateModule()
extern MethodInfo GazeInputModule_ShouldActivateModule_m272_MethodInfo;
extern "C" bool GazeInputModule_ShouldActivateModule_m272 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		bool L_0 = BaseInputModule_ShouldActivateModule_m667(__this, /*hidden argument*/&BaseInputModule_ShouldActivateModule_m667_MethodInfo);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_1 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_VRModeEnabled_m182(L_1, /*hidden argument*/&Cardboard_get_VRModeEnabled_m182_MethodInfo);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = (__this->___vrModeOnly_6);
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 1;
	}

IL_0028:
	{
		return G_B5_0;
	}
}
// System.Void GazeInputModule::DeactivateModule()
extern MethodInfo GazeInputModule_DeactivateModule_m273_MethodInfo;
extern "C" void GazeInputModule_DeactivateModule_m273 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	{
		BaseInputModule_DeactivateModule_m668(__this, /*hidden argument*/&BaseInputModule_DeactivateModule_m668_MethodInfo);
		PointerEventData_t46 * L_0 = (__this->___pointerData_10);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		GazeInputModule_HandlePendingClick_m279(__this, /*hidden argument*/&GazeInputModule_HandlePendingClick_m279_MethodInfo);
		PointerEventData_t46 * L_1 = (__this->___pointerData_10);
		BaseInputModule_HandlePointerExitAndEnter_m669(__this, L_1, (GameObject_t7 *)NULL, /*hidden argument*/&BaseInputModule_HandlePointerExitAndEnter_m669_MethodInfo);
		__this->___pointerData_10 = (PointerEventData_t46 *)NULL;
	}

IL_002b:
	{
		EventSystem_t171 * L_2 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		BaseEventData_t20 * L_3 = (BaseEventData_t20 *)VirtFuncInvoker0< BaseEventData_t20 * >::Invoke(&BaseInputModule_GetBaseEventData_m671_MethodInfo, __this);
		NullCheck(L_2);
		EventSystem_SetSelectedGameObject_m672(L_2, (GameObject_t7 *)NULL, L_3, /*hidden argument*/&EventSystem_SetSelectedGameObject_m672_MethodInfo);
		GameObject_t7 * L_4 = (__this->___cursor_7);
		bool L_5 = Object_op_Inequality_m527(NULL /*static, unused*/, L_4, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		GameObject_t7 * L_6 = (__this->___cursor_7);
		NullCheck(L_6);
		GameObject_SetActive_m522(L_6, 0, /*hidden argument*/&GameObject_SetActive_m522_MethodInfo);
	}

IL_005a:
	{
		return;
	}
}
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern MethodInfo GazeInputModule_IsPointerOverGameObject_m274_MethodInfo;
extern "C" bool GazeInputModule_IsPointerOverGameObject_m274 (GazeInputModule_t89 * __this, int32_t ___pointerId, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		PointerEventData_t46 * L_0 = (__this->___pointerData_10);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		PointerEventData_t46 * L_1 = (__this->___pointerData_10);
		NullCheck(L_1);
		GameObject_t7 * L_2 = PointerEventData_get_pointerEnter_m673(L_1, /*hidden argument*/&PointerEventData_get_pointerEnter_m673_MethodInfo);
		bool L_3 = Object_op_Inequality_m527(NULL /*static, unused*/, L_2, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Void GazeInputModule::Process()
extern MethodInfo GazeInputModule_Process_m275_MethodInfo;
extern "C" void GazeInputModule_Process_m275 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	{
		GazeInputModule_CastRayFromGaze_m276(__this, /*hidden argument*/&GazeInputModule_CastRayFromGaze_m276_MethodInfo);
		GazeInputModule_UpdateCurrentObject_m277(__this, /*hidden argument*/&GazeInputModule_UpdateCurrentObject_m277_MethodInfo);
		GazeInputModule_PlaceCursor_m278(__this, /*hidden argument*/&GazeInputModule_PlaceCursor_m278_MethodInfo);
		GazeInputModule_HandlePendingClick_m279(__this, /*hidden argument*/&GazeInputModule_HandlePendingClick_m279_MethodInfo);
		GazeInputModule_HandleTrigger_m280(__this, /*hidden argument*/&GazeInputModule_HandleTrigger_m280_MethodInfo);
		return;
	}
}
// System.Void GazeInputModule::CastRayFromGaze()
extern MethodInfo* List_1_Clear_m689_MethodInfo_var;
extern "C" void GazeInputModule_CastRayFromGaze_m276 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	static bool GazeInputModule_CastRayFromGaze_m276_init;
	if (!GazeInputModule_CastRayFromGaze_m276_init)
	{
		List_1_Clear_m689_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Clear_m689_GenericMethod);
		GazeInputModule_CastRayFromGaze_m276_init = true;
	}
	{
		PointerEventData_t46 * L_0 = (__this->___pointerData_10);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		EventSystem_t171 * L_1 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		PointerEventData_t46 * L_2 = (PointerEventData_t46 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PointerEventData_t46_il2cpp_TypeInfo));
		PointerEventData__ctor_m676(L_2, L_1, /*hidden argument*/&PointerEventData__ctor_m676_MethodInfo);
		__this->___pointerData_10 = L_2;
	}

IL_001c:
	{
		PointerEventData_t46 * L_3 = (__this->___pointerData_10);
		NullCheck(L_3);
		BaseEventData_Reset_m677(L_3, /*hidden argument*/&BaseEventData_Reset_m677_MethodInfo);
		PointerEventData_t46 * L_4 = (__this->___pointerData_10);
		Vector2_t48 * L_5 = &(__this->___hotspot_9);
		float L_6 = (L_5->___x_1);
		int32_t L_7 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		Vector2_t48 * L_8 = &(__this->___hotspot_9);
		float L_9 = (L_8->___y_2);
		int32_t L_10 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Vector2_t48  L_11 = {0};
		Vector2__ctor_m588(&L_11, ((float)((float)L_6*(float)(((float)L_7)))), ((float)((float)L_9*(float)(((float)L_10)))), /*hidden argument*/&Vector2__ctor_m588_MethodInfo);
		NullCheck(L_4);
		PointerEventData_set_position_m680(L_4, L_11, /*hidden argument*/&PointerEventData_set_position_m680_MethodInfo);
		EventSystem_t171 * L_12 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		PointerEventData_t46 * L_13 = (__this->___pointerData_10);
		List_1_t181 * L_14 = (__this->___m_RaycastResultCache_2);
		NullCheck(L_12);
		EventSystem_RaycastAll_m681(L_12, L_13, L_14, /*hidden argument*/&EventSystem_RaycastAll_m681_MethodInfo);
		PointerEventData_t46 * L_15 = (__this->___pointerData_10);
		List_1_t181 * L_16 = (__this->___m_RaycastResultCache_2);
		RaycastResult_t182  L_17 = BaseInputModule_FindFirstRaycast_m682(NULL /*static, unused*/, L_16, /*hidden argument*/&BaseInputModule_FindFirstRaycast_m682_MethodInfo);
		NullCheck(L_15);
		PointerEventData_set_pointerCurrentRaycast_m683(L_15, L_17, /*hidden argument*/&PointerEventData_set_pointerCurrentRaycast_m683_MethodInfo);
		List_1_t181 * L_18 = (__this->___m_RaycastResultCache_2);
		NullCheck(L_18);
		VirtActionInvoker0::Invoke(List_1_Clear_m689_MethodInfo_var, L_18);
		return;
	}
}
// System.Void GazeInputModule::UpdateCurrentObject()
extern MethodInfo* ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_MethodInfo_var;
extern "C" void GazeInputModule_UpdateCurrentObject_m277 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	static bool GazeInputModule_UpdateCurrentObject_m277_init;
	if (!GazeInputModule_UpdateCurrentObject_m277_init)
	{
		ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_GenericMethod);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_GenericMethod);
		GazeInputModule_UpdateCurrentObject_m277_init = true;
	}
	GameObject_t7 * V_0 = {0};
	GameObject_t7 * V_1 = {0};
	RaycastResult_t182  V_2 = {0};
	{
		PointerEventData_t46 * L_0 = (__this->___pointerData_10);
		NullCheck(L_0);
		RaycastResult_t182  L_1 = PointerEventData_get_pointerCurrentRaycast_m684(L_0, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_2 = L_1;
		GameObject_t7 * L_2 = RaycastResult_get_gameObject_m686((&V_2), /*hidden argument*/&RaycastResult_get_gameObject_m686_MethodInfo);
		V_0 = L_2;
		PointerEventData_t46 * L_3 = (__this->___pointerData_10);
		GameObject_t7 * L_4 = V_0;
		BaseInputModule_HandlePointerExitAndEnter_m669(__this, L_3, L_4, /*hidden argument*/&BaseInputModule_HandlePointerExitAndEnter_m669_MethodInfo);
		GameObject_t7 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		GameObject_t7 * L_6 = ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713(NULL /*static, unused*/, L_5, /*hidden argument*/ExecuteEvents_GetEventHandler_TisISelectHandler_t184_m713_MethodInfo_var);
		V_1 = L_6;
		GameObject_t7 * L_7 = V_1;
		EventSystem_t171 * L_8 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		NullCheck(L_8);
		GameObject_t7 * L_9 = EventSystem_get_currentSelectedGameObject_m690(L_8, /*hidden argument*/&EventSystem_get_currentSelectedGameObject_m690_MethodInfo);
		bool L_10 = Object_op_Equality_m528(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		EventSystem_t171 * L_11 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		NullCheck(L_11);
		GameObject_t7 * L_12 = EventSystem_get_currentSelectedGameObject_m690(L_11, /*hidden argument*/&EventSystem_get_currentSelectedGameObject_m690_MethodInfo);
		BaseEventData_t20 * L_13 = (BaseEventData_t20 *)VirtFuncInvoker0< BaseEventData_t20 * >::Invoke(&BaseInputModule_GetBaseEventData_m671_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		EventFunction_1_t187 * L_14 = ExecuteEvents_get_updateSelectedHandler_m691(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_updateSelectedHandler_m691_MethodInfo);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/ExecuteEvents_Execute_TisIUpdateSelectedHandler_t185_m715_MethodInfo_var);
		goto IL_0071;
	}

IL_005f:
	{
		EventSystem_t171 * L_15 = BaseInputModule_get_eventSystem_m670(__this, /*hidden argument*/&BaseInputModule_get_eventSystem_m670_MethodInfo);
		PointerEventData_t46 * L_16 = (__this->___pointerData_10);
		NullCheck(L_15);
		EventSystem_SetSelectedGameObject_m672(L_15, (GameObject_t7 *)NULL, L_16, /*hidden argument*/&EventSystem_SetSelectedGameObject_m672_MethodInfo);
	}

IL_0071:
	{
		return;
	}
}
// System.Void GazeInputModule::PlaceCursor()
extern "C" void GazeInputModule_PlaceCursor_m278 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	GameObject_t7 * V_0 = {0};
	Camera_t15 * V_1 = {0};
	float V_2 = 0.0f;
	RaycastResult_t182  V_3 = {0};
	RaycastResult_t182  V_4 = {0};
	{
		GameObject_t7 * L_0 = (__this->___cursor_7);
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		PointerEventData_t46 * L_2 = (__this->___pointerData_10);
		NullCheck(L_2);
		RaycastResult_t182  L_3 = PointerEventData_get_pointerCurrentRaycast_m684(L_2, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_3 = L_3;
		GameObject_t7 * L_4 = RaycastResult_get_gameObject_m686((&V_3), /*hidden argument*/&RaycastResult_get_gameObject_m686_MethodInfo);
		V_0 = L_4;
		GameObject_t7 * L_5 = (__this->___cursor_7);
		GameObject_t7 * L_6 = V_0;
		bool L_7 = Object_op_Inequality_m527(NULL /*static, unused*/, L_6, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		NullCheck(L_5);
		GameObject_SetActive_m522(L_5, L_7, /*hidden argument*/&GameObject_SetActive_m522_MethodInfo);
		GameObject_t7 * L_8 = (__this->___cursor_7);
		NullCheck(L_8);
		bool L_9 = GameObject_get_activeInHierarchy_m693(L_8, /*hidden argument*/&GameObject_get_activeInHierarchy_m693_MethodInfo);
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		PointerEventData_t46 * L_10 = (__this->___pointerData_10);
		NullCheck(L_10);
		Camera_t15 * L_11 = PointerEventData_get_enterEventCamera_m694(L_10, /*hidden argument*/&PointerEventData_get_enterEventCamera_m694_MethodInfo);
		V_1 = L_11;
		PointerEventData_t46 * L_12 = (__this->___pointerData_10);
		NullCheck(L_12);
		RaycastResult_t182  L_13 = PointerEventData_get_pointerCurrentRaycast_m684(L_12, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_4 = L_13;
		float L_14 = ((&V_4)->___distance_2);
		Camera_t15 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = Camera_get_nearClipPlane_m537(L_15, /*hidden argument*/&Camera_get_nearClipPlane_m537_MethodInfo);
		V_2 = ((float)((float)L_14+(float)L_16));
		GameObject_t7 * L_17 = (__this->___cursor_7);
		NullCheck(L_17);
		Transform_t2 * L_18 = GameObject_get_transform_m558(L_17, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Camera_t15 * L_19 = V_1;
		NullCheck(L_19);
		Transform_t2 * L_20 = Component_get_transform_m508(L_19, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_20);
		Vector3_t5  L_21 = Transform_get_position_m506(L_20, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Camera_t15 * L_22 = V_1;
		NullCheck(L_22);
		Transform_t2 * L_23 = Component_get_transform_m508(L_22, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_23);
		Vector3_t5  L_24 = Transform_get_forward_m535(L_23, /*hidden argument*/&Transform_get_forward_m535_MethodInfo);
		float L_25 = V_2;
		Vector3_t5  L_26 = Vector3_op_Multiply_m516(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/&Vector3_op_Multiply_m516_MethodInfo);
		Vector3_t5  L_27 = Vector3_op_Addition_m517(NULL /*static, unused*/, L_21, L_26, /*hidden argument*/&Vector3_op_Addition_m517_MethodInfo);
		NullCheck(L_18);
		Transform_set_position_m518(L_18, L_27, /*hidden argument*/&Transform_set_position_m518_MethodInfo);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void GazeInputModule::HandlePendingClick()
extern MethodInfo* ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_MethodInfo_var;
extern MethodInfo* ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_MethodInfo_var;
extern "C" void GazeInputModule_HandlePendingClick_m279 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	static bool GazeInputModule_HandlePendingClick_m279_init;
	if (!GazeInputModule_HandlePendingClick_m279_init)
	{
		ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_GenericMethod);
		ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_GenericMethod);
		GazeInputModule_HandlePendingClick_m279_init = true;
	}
	{
		PointerEventData_t46 * L_0 = (__this->___pointerData_10);
		NullCheck(L_0);
		bool L_1 = PointerEventData_get_eligibleForClick_m695(L_0, /*hidden argument*/&PointerEventData_get_eligibleForClick_m695_MethodInfo);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_2 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_2);
		bool L_3 = Cardboard_get_Triggered_m209(L_2, /*hidden argument*/&Cardboard_get_Triggered_m209_MethodInfo);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		float L_4 = Time_get_unscaledTime_m711(NULL /*static, unused*/, /*hidden argument*/&Time_get_unscaledTime_m711_MethodInfo);
		PointerEventData_t46 * L_5 = (__this->___pointerData_10);
		NullCheck(L_5);
		float L_6 = PointerEventData_get_clickTime_m894(L_5, /*hidden argument*/&PointerEventData_get_clickTime_m894_MethodInfo);
		float L_7 = (__this->___clickTime_8);
		if ((!(((float)((float)((float)L_4-(float)L_6))) < ((float)L_7))))
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		return;
	}

IL_003c:
	{
		PointerEventData_t46 * L_8 = (__this->___pointerData_10);
		NullCheck(L_8);
		GameObject_t7 * L_9 = PointerEventData_get_pointerPress_m696(L_8, /*hidden argument*/&PointerEventData_get_pointerPress_m696_MethodInfo);
		PointerEventData_t46 * L_10 = (__this->___pointerData_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		EventFunction_1_t193 * L_11 = ExecuteEvents_get_pointerUpHandler_m699(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerUpHandler_m699_MethodInfo);
		ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/ExecuteEvents_Execute_TisIPointerUpHandler_t192_m719_MethodInfo_var);
		PointerEventData_t46 * L_12 = (__this->___pointerData_10);
		NullCheck(L_12);
		GameObject_t7 * L_13 = PointerEventData_get_pointerPress_m696(L_12, /*hidden argument*/&PointerEventData_get_pointerPress_m696_MethodInfo);
		PointerEventData_t46 * L_14 = (__this->___pointerData_10);
		EventFunction_1_t199 * L_15 = ExecuteEvents_get_pointerClickHandler_m710(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerClickHandler_m710_MethodInfo);
		ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/ExecuteEvents_Execute_TisIPointerClickHandler_t198_m724_MethodInfo_var);
		PointerEventData_t46 * L_16 = (__this->___pointerData_10);
		NullCheck(L_16);
		PointerEventData_set_pointerPress_m701(L_16, (GameObject_t7 *)NULL, /*hidden argument*/&PointerEventData_set_pointerPress_m701_MethodInfo);
		PointerEventData_t46 * L_17 = (__this->___pointerData_10);
		NullCheck(L_17);
		PointerEventData_set_rawPointerPress_m702(L_17, (GameObject_t7 *)NULL, /*hidden argument*/&PointerEventData_set_rawPointerPress_m702_MethodInfo);
		PointerEventData_t46 * L_18 = (__this->___pointerData_10);
		NullCheck(L_18);
		PointerEventData_set_eligibleForClick_m703(L_18, 0, /*hidden argument*/&PointerEventData_set_eligibleForClick_m703_MethodInfo);
		PointerEventData_t46 * L_19 = (__this->___pointerData_10);
		NullCheck(L_19);
		PointerEventData_set_clickCount_m704(L_19, 0, /*hidden argument*/&PointerEventData_set_clickCount_m704_MethodInfo);
		return;
	}
}
// System.Void GazeInputModule::HandleTrigger()
extern MethodInfo* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_MethodInfo_var;
extern MethodInfo* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_MethodInfo_var;
extern "C" void GazeInputModule_HandleTrigger_m280 (GazeInputModule_t89 * __this, MethodInfo* method)
{
	static bool GazeInputModule_HandleTrigger_m280_init;
	if (!GazeInputModule_HandleTrigger_m280_init)
	{
		ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_GenericMethod);
		ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_GenericMethod);
		GazeInputModule_HandleTrigger_m280_init = true;
	}
	GameObject_t7 * V_0 = {0};
	RaycastResult_t182  V_1 = {0};
	GameObject_t7 * G_B4_0 = {0};
	PointerEventData_t46 * G_B4_1 = {0};
	GameObject_t7 * G_B3_0 = {0};
	PointerEventData_t46 * G_B3_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_0 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_Triggered_m209(L_0, /*hidden argument*/&Cardboard_get_Triggered_m209_MethodInfo);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		PointerEventData_t46 * L_2 = (__this->___pointerData_10);
		NullCheck(L_2);
		RaycastResult_t182  L_3 = PointerEventData_get_pointerCurrentRaycast_m684(L_2, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		V_1 = L_3;
		GameObject_t7 * L_4 = RaycastResult_get_gameObject_m686((&V_1), /*hidden argument*/&RaycastResult_get_gameObject_m686_MethodInfo);
		V_0 = L_4;
		PointerEventData_t46 * L_5 = (__this->___pointerData_10);
		PointerEventData_t46 * L_6 = (__this->___pointerData_10);
		NullCheck(L_6);
		Vector2_t48  L_7 = PointerEventData_get_position_m705(L_6, /*hidden argument*/&PointerEventData_get_position_m705_MethodInfo);
		NullCheck(L_5);
		PointerEventData_set_pressPosition_m706(L_5, L_7, /*hidden argument*/&PointerEventData_set_pressPosition_m706_MethodInfo);
		PointerEventData_t46 * L_8 = (__this->___pointerData_10);
		PointerEventData_t46 * L_9 = (__this->___pointerData_10);
		NullCheck(L_9);
		RaycastResult_t182  L_10 = PointerEventData_get_pointerCurrentRaycast_m684(L_9, /*hidden argument*/&PointerEventData_get_pointerCurrentRaycast_m684_MethodInfo);
		NullCheck(L_8);
		PointerEventData_set_pointerPressRaycast_m707(L_8, L_10, /*hidden argument*/&PointerEventData_set_pointerPressRaycast_m707_MethodInfo);
		PointerEventData_t46 * L_11 = (__this->___pointerData_10);
		GameObject_t7 * L_12 = V_0;
		PointerEventData_t46 * L_13 = (__this->___pointerData_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		EventFunction_1_t197 * L_14 = ExecuteEvents_get_pointerDownHandler_m708(NULL /*static, unused*/, /*hidden argument*/&ExecuteEvents_get_pointerDownHandler_m708_MethodInfo);
		GameObject_t7 * L_15 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t196_m721_MethodInfo_var);
		GameObject_t7 * L_16 = L_15;
		G_B3_0 = L_16;
		G_B3_1 = L_11;
		if (L_16)
		{
			G_B4_0 = L_16;
			G_B4_1 = L_11;
			goto IL_0074;
		}
	}
	{
		GameObject_t7 * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ExecuteEvents_t183_il2cpp_TypeInfo));
		GameObject_t7 * L_18 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723(NULL /*static, unused*/, L_17, /*hidden argument*/ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t198_m723_MethodInfo_var);
		G_B4_0 = L_18;
		G_B4_1 = G_B3_1;
	}

IL_0074:
	{
		NullCheck(G_B4_1);
		PointerEventData_set_pointerPress_m701(G_B4_1, G_B4_0, /*hidden argument*/&PointerEventData_set_pointerPress_m701_MethodInfo);
		PointerEventData_t46 * L_19 = (__this->___pointerData_10);
		GameObject_t7 * L_20 = V_0;
		NullCheck(L_19);
		PointerEventData_set_rawPointerPress_m702(L_19, L_20, /*hidden argument*/&PointerEventData_set_rawPointerPress_m702_MethodInfo);
		PointerEventData_t46 * L_21 = (__this->___pointerData_10);
		NullCheck(L_21);
		PointerEventData_set_eligibleForClick_m703(L_21, 1, /*hidden argument*/&PointerEventData_set_eligibleForClick_m703_MethodInfo);
		PointerEventData_t46 * L_22 = (__this->___pointerData_10);
		NullCheck(L_22);
		PointerEventData_set_clickCount_m704(L_22, 1, /*hidden argument*/&PointerEventData_set_clickCount_m704_MethodInfo);
		PointerEventData_t46 * L_23 = (__this->___pointerData_10);
		float L_24 = Time_get_unscaledTime_m711(NULL /*static, unused*/, /*hidden argument*/&Time_get_unscaledTime_m711_MethodInfo);
		NullCheck(L_23);
		PointerEventData_set_clickTime_m712(L_23, L_24, /*hidden argument*/&PointerEventData_set_clickTime_m712_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Pose3D_t73_il2cpp_TypeInfo;

extern MethodInfo Matrix4x4_op_Multiply_m895_MethodInfo;
extern MethodInfo Pose3D_set_Position_m286_MethodInfo;
extern MethodInfo Pose3D_set_Orientation_m288_MethodInfo;
extern MethodInfo Matrix4x4_get_identity_m896_MethodInfo;
extern MethodInfo Pose3D_set_Matrix_m290_MethodInfo;
extern MethodInfo Pose3D_Set_m292_MethodInfo;
extern MethodInfo Pose3D_Set_m293_MethodInfo;
extern MethodInfo Matrix4x4_Scale_m897_MethodInfo;


// System.Void Pose3D::.ctor()
extern MethodInfo Pose3D__ctor_m281_MethodInfo;
extern "C" void Pose3D__ctor_m281 (Pose3D_t73 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Vector3_t5  L_0 = Vector3_get_zero_m562(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_zero_m562_MethodInfo);
		Pose3D_set_Position_m286(__this, L_0, /*hidden argument*/&Pose3D_set_Position_m286_MethodInfo);
		Quaternion_t10  L_1 = Quaternion_get_identity_m615(NULL /*static, unused*/, /*hidden argument*/&Quaternion_get_identity_m615_MethodInfo);
		Pose3D_set_Orientation_m288(__this, L_1, /*hidden argument*/&Pose3D_set_Orientation_m288_MethodInfo);
		Matrix4x4_t27  L_2 = Matrix4x4_get_identity_m896(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m896_MethodInfo);
		Pose3D_set_Matrix_m290(__this, L_2, /*hidden argument*/&Pose3D_set_Matrix_m290_MethodInfo);
		return;
	}
}
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern MethodInfo Pose3D__ctor_m282_MethodInfo;
extern "C" void Pose3D__ctor_m282 (Pose3D_t73 * __this, Vector3_t5  ___position, Quaternion_t10  ___orientation, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Vector3_t5  L_0 = ___position;
		Quaternion_t10  L_1 = ___orientation;
		Pose3D_Set_m292(__this, L_0, L_1, /*hidden argument*/&Pose3D_Set_m292_MethodInfo);
		return;
	}
}
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
extern MethodInfo Pose3D__ctor_m283_MethodInfo;
extern "C" void Pose3D__ctor_m283 (Pose3D_t73 * __this, Matrix4x4_t27  ___matrix, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		Matrix4x4_t27  L_0 = ___matrix;
		Pose3D_Set_m293(__this, L_0, /*hidden argument*/&Pose3D_Set_m293_MethodInfo);
		return;
	}
}
// System.Void Pose3D::.cctor()
extern MethodInfo Pose3D__cctor_m284_MethodInfo;
extern "C" void Pose3D__cctor_m284 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = {0};
		Vector3__ctor_m510(&L_0, (1.0f), (1.0f), (-1.0f), /*hidden argument*/&Vector3__ctor_m510_MethodInfo);
		Matrix4x4_t27  L_1 = Matrix4x4_Scale_m897(NULL /*static, unused*/, L_0, /*hidden argument*/&Matrix4x4_Scale_m897_MethodInfo);
		((Pose3D_t73_StaticFields*)InitializedTypeInfo(&Pose3D_t73_il2cpp_TypeInfo)->static_fields)->___flipZ_0 = L_1;
		return;
	}
}
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C" Vector3_t5  Pose3D_get_Position_m285 (Pose3D_t73 * __this, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = (__this->___U3CPositionU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C" void Pose3D_set_Position_m286 (Pose3D_t73 * __this, Vector3_t5  ___value, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = ___value;
		__this->___U3CPositionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C" Quaternion_t10  Pose3D_get_Orientation_m287 (Pose3D_t73 * __this, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = (__this->___U3COrientationU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C" void Pose3D_set_Orientation_m288 (Pose3D_t73 * __this, Quaternion_t10  ___value, MethodInfo* method)
{
	{
		Quaternion_t10  L_0 = ___value;
		__this->___U3COrientationU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C" Matrix4x4_t27  Pose3D_get_Matrix_m289 (Pose3D_t73 * __this, MethodInfo* method)
{
	{
		Matrix4x4_t27  L_0 = (__this->___U3CMatrixU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C" void Pose3D_set_Matrix_m290 (Pose3D_t73 * __this, Matrix4x4_t27  ___value, MethodInfo* method)
{
	{
		Matrix4x4_t27  L_0 = ___value;
		__this->___U3CMatrixU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern MethodInfo Pose3D_get_RightHandedMatrix_m291_MethodInfo;
extern "C" Matrix4x4_t27  Pose3D_get_RightHandedMatrix_m291 (Pose3D_t73 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Pose3D_t73_il2cpp_TypeInfo));
		Matrix4x4_t27  L_0 = ((Pose3D_t73_StaticFields*)InitializedTypeInfo(&Pose3D_t73_il2cpp_TypeInfo)->static_fields)->___flipZ_0;
		Matrix4x4_t27  L_1 = Pose3D_get_Matrix_m289(__this, /*hidden argument*/&Pose3D_get_Matrix_m289_MethodInfo);
		Matrix4x4_t27  L_2 = Matrix4x4_op_Multiply_m895(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Matrix4x4_op_Multiply_m895_MethodInfo);
		Matrix4x4_t27  L_3 = ((Pose3D_t73_StaticFields*)InitializedTypeInfo(&Pose3D_t73_il2cpp_TypeInfo)->static_fields)->___flipZ_0;
		Matrix4x4_t27  L_4 = Matrix4x4_op_Multiply_m895(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Matrix4x4_op_Multiply_m895_MethodInfo);
		return L_4;
	}
}
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D_Set_m292 (Pose3D_t73 * __this, Vector3_t5  ___position, Quaternion_t10  ___orientation, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = ___position;
		Pose3D_set_Position_m286(__this, L_0, /*hidden argument*/&Pose3D_set_Position_m286_MethodInfo);
		Quaternion_t10  L_1 = ___orientation;
		Pose3D_set_Orientation_m288(__this, L_1, /*hidden argument*/&Pose3D_set_Orientation_m288_MethodInfo);
		Vector3_t5  L_2 = ___position;
		Quaternion_t10  L_3 = ___orientation;
		Vector3_t5  L_4 = Vector3_get_one_m616(NULL /*static, unused*/, /*hidden argument*/&Vector3_get_one_m616_MethodInfo);
		Matrix4x4_t27  L_5 = Matrix4x4_TRS_m883(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/&Matrix4x4_TRS_m883_MethodInfo);
		Pose3D_set_Matrix_m290(__this, L_5, /*hidden argument*/&Pose3D_set_Matrix_m290_MethodInfo);
		return;
	}
}
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
extern "C" void Pose3D_Set_m293 (Pose3D_t73 * __this, Matrix4x4_t27  ___matrix, MethodInfo* method)
{
	{
		Matrix4x4_t27  L_0 = ___matrix;
		Pose3D_set_Matrix_m290(__this, L_0, /*hidden argument*/&Pose3D_set_Matrix_m290_MethodInfo);
		Vector4_t173  L_1 = Matrix4x4_GetColumn_m613((&___matrix), 3, /*hidden argument*/&Matrix4x4_GetColumn_m613_MethodInfo);
		Vector3_t5  L_2 = Vector4_op_Implicit_m614(NULL /*static, unused*/, L_1, /*hidden argument*/&Vector4_op_Implicit_m614_MethodInfo);
		Pose3D_set_Position_m286(__this, L_2, /*hidden argument*/&Pose3D_set_Position_m286_MethodInfo);
		Vector4_t173  L_3 = Matrix4x4_GetColumn_m613((&___matrix), 2, /*hidden argument*/&Matrix4x4_GetColumn_m613_MethodInfo);
		Vector3_t5  L_4 = Vector4_op_Implicit_m614(NULL /*static, unused*/, L_3, /*hidden argument*/&Vector4_op_Implicit_m614_MethodInfo);
		Vector4_t173  L_5 = Matrix4x4_GetColumn_m613((&___matrix), 1, /*hidden argument*/&Matrix4x4_GetColumn_m613_MethodInfo);
		Vector3_t5  L_6 = Vector4_op_Implicit_m614(NULL /*static, unused*/, L_5, /*hidden argument*/&Vector4_op_Implicit_m614_MethodInfo);
		Quaternion_t10  L_7 = Quaternion_LookRotation_m511(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/&Quaternion_LookRotation_m511_MethodInfo);
		Pose3D_set_Orientation_m288(__this, L_7, /*hidden argument*/&Pose3D_set_Orientation_m288_MethodInfo);
		return;
	}
}
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3D.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MutablePose3D_t90_il2cpp_TypeInfo;
// MutablePose3D
#include "AssemblyU2DCSharp_MutablePose3DMethodDeclarations.h"

extern MethodInfo MutablePose3D_Set_m296_MethodInfo;


// System.Void MutablePose3D::.ctor()
extern MethodInfo MutablePose3D__ctor_m294_MethodInfo;
extern "C" void MutablePose3D__ctor_m294 (MutablePose3D_t90 * __this, MethodInfo* method)
{
	{
		Pose3D__ctor_m281(__this, /*hidden argument*/&Pose3D__ctor_m281_MethodInfo);
		return;
	}
}
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern MethodInfo MutablePose3D_Set_m295_MethodInfo;
extern "C" void MutablePose3D_Set_m295 (MutablePose3D_t90 * __this, Vector3_t5  ___position, Quaternion_t10  ___orientation, MethodInfo* method)
{
	{
		Vector3_t5  L_0 = ___position;
		Quaternion_t10  L_1 = ___orientation;
		Pose3D_Set_m292(__this, L_0, L_1, /*hidden argument*/&Pose3D_Set_m292_MethodInfo);
		return;
	}
}
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_Set_m296 (MutablePose3D_t90 * __this, Matrix4x4_t27  ___matrix, MethodInfo* method)
{
	{
		Matrix4x4_t27  L_0 = ___matrix;
		Pose3D_Set_m293(__this, L_0, /*hidden argument*/&Pose3D_Set_m293_MethodInfo);
		return;
	}
}
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern MethodInfo MutablePose3D_SetRightHanded_m297_MethodInfo;
extern "C" void MutablePose3D_SetRightHanded_m297 (MutablePose3D_t90 * __this, Matrix4x4_t27  ___matrix, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Pose3D_t73_il2cpp_TypeInfo));
		Matrix4x4_t27  L_0 = ((Pose3D_t73_StaticFields*)InitializedTypeInfo(&Pose3D_t73_il2cpp_TypeInfo)->static_fields)->___flipZ_0;
		Matrix4x4_t27  L_1 = ___matrix;
		Matrix4x4_t27  L_2 = Matrix4x4_op_Multiply_m895(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Matrix4x4_op_Multiply_m895_MethodInfo);
		Matrix4x4_t27  L_3 = ((Pose3D_t73_StaticFields*)InitializedTypeInfo(&Pose3D_t73_il2cpp_TypeInfo)->static_fields)->___flipZ_0;
		Matrix4x4_t27  L_4 = Matrix4x4_op_Multiply_m895(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&Matrix4x4_op_Multiply_m895_MethodInfo);
		MutablePose3D_Set_m296(__this, L_4, /*hidden argument*/&MutablePose3D_Set_m296_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo RadialUndistortionEffect_t91_il2cpp_TypeInfo;
// RadialUndistortionEffect
#include "AssemblyU2DCSharp_RadialUndistortionEffectMethodDeclarations.h"

extern MethodInfo Graphics_Blit_m898_MethodInfo;
extern MethodInfo Graphics_Blit_m899_MethodInfo;


// System.Void RadialUndistortionEffect::.ctor()
extern MethodInfo RadialUndistortionEffect__ctor_m298_MethodInfo;
extern "C" void RadialUndistortionEffect__ctor_m298 (RadialUndistortionEffect_t91 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void RadialUndistortionEffect::Awake()
extern MethodInfo RadialUndistortionEffect_Awake_m299_MethodInfo;
extern "C" void RadialUndistortionEffect_Awake_m299 (RadialUndistortionEffect_t91 * __this, MethodInfo* method)
{
	Shader_t205 * V_0 = {0};
	{
		bool L_0 = SystemInfo_get_supportsRenderTextures_m745(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m745_MethodInfo);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral53, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		return;
	}

IL_0015:
	{
		Shader_t205 * L_1 = Shader_Find_m776(NULL /*static, unused*/, (String_t*) &_stringLiteral54, /*hidden argument*/&Shader_Find_m776_MethodInfo);
		V_0 = L_1;
		Shader_t205 * L_2 = V_0;
		bool L_3 = Object_op_Equality_m528(NULL /*static, unused*/, L_2, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral55, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		return;
	}

IL_0037:
	{
		Shader_t205 * L_4 = V_0;
		Material_t88 * L_5 = (Material_t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t88_il2cpp_TypeInfo));
		Material__ctor_m777(L_5, L_4, /*hidden argument*/&Material__ctor_m777_MethodInfo);
		__this->___material_2 = L_5;
		return;
	}
}
// System.Void RadialUndistortionEffect::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern MethodInfo RadialUndistortionEffect_OnRenderImage_m300_MethodInfo;
extern "C" void RadialUndistortionEffect_OnRenderImage_m300 (RadialUndistortionEffect_t91 * __this, RenderTexture_t56 * ___source, RenderTexture_t56 * ___dest, MethodInfo* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Material_t88 * L_0 = (__this->___material_2);
		bool L_1 = Object_op_Equality_m528(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_2 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_2);
		bool L_3 = Cardboard_get_UseDistortionEffect_m200(L_2, /*hidden argument*/&Cardboard_get_UseDistortionEffect_m200_MethodInfo);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		RenderTexture_t56 * L_5 = ___source;
		RenderTexture_t56 * L_6 = ___dest;
		Graphics_Blit_m898(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Graphics_Blit_m898_MethodInfo);
		goto IL_0041;
	}

IL_0034:
	{
		RenderTexture_t56 * L_7 = ___source;
		RenderTexture_t56 * L_8 = ___dest;
		Material_t88 * L_9 = (__this->___material_2);
		Graphics_Blit_m899(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/&Graphics_Blit_m899_MethodInfo);
	}

IL_0041:
	{
		return;
	}
}
// StereoController/<EndOfFrame>c__Iterator1
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU3Ec__Iterat.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CEndOfFrameU3Ec__Iterator1_t92_il2cpp_TypeInfo;
// StereoController/<EndOfFrame>c__Iterator1
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU3Ec__IteratMethodDeclarations.h"



// System.Void StereoController/<EndOfFrame>c__Iterator1::.ctor()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1__ctor_m301_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator1__ctor_m301 (U3CEndOfFrameU3Ec__Iterator1_t92 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Object StereoController/<EndOfFrame>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m302_MethodInfo;
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m302 (U3CEndOfFrameU3Ec__Iterator1_t92 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Object StereoController/<EndOfFrame>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m303_MethodInfo;
extern "C" Object_t * U3CEndOfFrameU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m303 (U3CEndOfFrameU3Ec__Iterator1_t92 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_1);
		return L_0;
	}
}
// System.Boolean StereoController/<EndOfFrame>c__Iterator1::MoveNext()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_MoveNext_m304_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCamera_t15_m869_MethodInfo_var;
extern "C" bool U3CEndOfFrameU3Ec__Iterator1_MoveNext_m304 (U3CEndOfFrameU3Ec__Iterator1_t92 * __this, MethodInfo* method)
{
	static bool U3CEndOfFrameU3Ec__Iterator1_MoveNext_m304_init;
	if (!U3CEndOfFrameU3Ec__Iterator1_MoveNext_m304_init)
	{
		Component_GetComponent_TisCamera_t15_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t15_m869_GenericMethod);
		U3CEndOfFrameU3Ec__Iterator1_MoveNext_m304_init = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___$PC_0);
		V_0 = L_0;
		__this->___$PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0071;
	}

IL_0021:
	{
		StereoController_t75 * L_2 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_2);
		bool L_3 = (L_2->___renderedStereo_12);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		StereoController_t75 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		Camera_t15 * L_5 = Component_GetComponent_TisCamera_t15_m869(L_4, /*hidden argument*/Component_GetComponent_TisCamera_t15_m869_MethodInfo_var);
		NullCheck(L_5);
		Behaviour_set_enabled_m530(L_5, 1, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		StereoController_t75 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		L_6->___renderedStereo_12 = 0;
	}

IL_004e:
	{
		WaitForEndOfFrame_t206 * L_7 = (WaitForEndOfFrame_t206 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WaitForEndOfFrame_t206_il2cpp_TypeInfo));
		WaitForEndOfFrame__ctor_m786(L_7, /*hidden argument*/&WaitForEndOfFrame__ctor_m786_MethodInfo);
		__this->___$current_1 = L_7;
		__this->___$PC_0 = 1;
		goto IL_0073;
	}

IL_0065:
	{
		goto IL_0021;
	}
	// Dead block : IL_006a: ldarg.0

IL_0071:
	{
		return 0;
	}

IL_0073:
	{
		return 1;
	}
}
// System.Void StereoController/<EndOfFrame>c__Iterator1::Dispose()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_Dispose_m305_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator1_Dispose_m305 (U3CEndOfFrameU3Ec__Iterator1_t92 * __this, MethodInfo* method)
{
	{
		__this->___$PC_0 = (-1);
		return;
	}
}
// System.Void StereoController/<EndOfFrame>c__Iterator1::Reset()
extern MethodInfo U3CEndOfFrameU3Ec__Iterator1_Reset_m306_MethodInfo;
extern "C" void U3CEndOfFrameU3Ec__Iterator1_Reset_m306 (U3CEndOfFrameU3Ec__Iterator1_t92 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t207 * L_0 = (NotSupportedException_t207 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t207_il2cpp_TypeInfo));
		NotSupportedException__ctor_m788(L_0, /*hidden argument*/&NotSupportedException__ctor_m788_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Func`2<CardboardEye,System.Boolean>
#include "System_Core_System_Func_2_gen_0.h"
// System.Func`2<CardboardEye,CardboardHead>
#include "System_Core_System_Func_2_gen_1.h"
extern TypeInfo Func_2_t210_il2cpp_TypeInfo;
extern TypeInfo Func_2_t94_il2cpp_TypeInfo;
// System.Func`2<CardboardEye,System.Boolean>
#include "System_Core_System_Func_2_gen_0MethodDeclarations.h"
// System.Func`2<CardboardEye,CardboardHead>
#include "System_Core_System_Func_2_gen_1MethodDeclarations.h"
extern Il2CppType Func_2_t210_0_0_0;
extern Il2CppType Func_2_t94_0_0_0;
extern MethodInfo StereoController_U3Cget_EyesU3Em__1_m321_MethodInfo;
extern MethodInfo Func_2__ctor_m900_MethodInfo;
extern MethodInfo StereoController_get_Eyes_m308_MethodInfo;
extern MethodInfo StereoController_U3Cget_HeadU3Em__2_m322_MethodInfo;
extern MethodInfo Func_2__ctor_m901_MethodInfo;
extern MethodInfo StereoController_AddStereoRig_m314_MethodInfo;
extern MethodInfo StereoController_CreateEye_m315_MethodInfo;
struct Component_t167;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardEye>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<CardboardEye>(System.Boolean)
#define Component_GetComponentsInChildren_TisCardboardEye_t76_m902(__this, p0, method) (( CardboardEyeU5BU5D_t93* (*) (Component_t167 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m759_gshared)(__this, p0, method)
struct Enumerable_t179;
struct Enumerable_t179;
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_2.h"
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C" Object_t* Enumerable_Where_TisObject_t_m904_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t211 * p1, MethodInfo* method);
#define Enumerable_Where_TisObject_t_m904(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t211 *, MethodInfo*))Enumerable_Where_TisObject_t_m904_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisCardboardEye_t76_m903(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t210 *, MethodInfo*))Enumerable_Where_TisObject_t_m904_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t179;
// System.Collections.Generic.List`1<CardboardEye>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
struct Enumerable_t179;
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// Declaration !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" ObjectU5BU5D_t178* Enumerable_ToArray_TisObject_t_m906_gshared (Object_t * __this /* static, unused */, Object_t* p0, MethodInfo* method);
#define Enumerable_ToArray_TisObject_t_m906(__this /* static, unused */, p0, method) (( ObjectU5BU5D_t178* (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_ToArray_TisObject_t_m906_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0[] System.Linq.Enumerable::ToArray<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0[] System.Linq.Enumerable::ToArray<CardboardEye>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisCardboardEye_t76_m905(__this /* static, unused */, p0, method) (( CardboardEyeU5BU5D_t93* (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_ToArray_TisObject_t_m906_gshared)(__this /* static, unused */, p0, method)
struct Enumerable_t179;
struct Enumerable_t179;
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_3.h"
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C" Object_t* Enumerable_Select_TisObject_t_TisObject_t_m908_gshared (Object_t * __this /* static, unused */, Object_t* p0, Func_2_t212 * p1, MethodInfo* method);
#define Enumerable_Select_TisObject_t_TisObject_t_m908(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t212 *, MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m908_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<CardboardEye,CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<CardboardEye,CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisCardboardEye_t76_TisCardboardHead_t53_m907(__this /* static, unused */, p0, p1, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, Func_2_t94 *, MethodInfo*))Enumerable_Select_TisObject_t_TisObject_t_m908_gshared)(__this /* static, unused */, p0, p1, method)
struct Enumerable_t179;
// System.Linq.Enumerable/PredicateOf`1<CardboardHead>
#include "System_Core_System_Linq_Enumerable_PredicateOf_1_gen.h"
// System.Func`2<CardboardHead,System.Boolean>
#include "System_Core_System_Func_2_gen_4.h"
// System.Linq.Enumerable/Fallback
#include "System_Core_System_Linq_Enumerable_Fallback.h"
struct Enumerable_t179;
// System.Linq.Enumerable/PredicateOf`1<System.Object>
#include "System_Core_System_Linq_Enumerable_PredicateOf_1_gen_0.h"
// Declaration !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" Object_t * Enumerable_FirstOrDefault_TisObject_t_m910_gshared (Object_t * __this /* static, unused */, Object_t* p0, MethodInfo* method);
#define Enumerable_FirstOrDefault_TisObject_t_m910(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_FirstOrDefault_TisObject_t_m910_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 System.Linq.Enumerable::FirstOrDefault<CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>)
// !!0 System.Linq.Enumerable::FirstOrDefault<CardboardHead>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_FirstOrDefault_TisCardboardHead_t53_m909(__this /* static, unused */, p0, method) (( CardboardHead_t53 * (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_FirstOrDefault_TisObject_t_m910_gshared)(__this /* static, unused */, p0, method)
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<CardboardHead>()
// !!0 UnityEngine.GameObject::AddComponent<CardboardHead>()
extern "C" CardboardHead_t53 * GameObject_AddComponent_TisCardboardHead_t53_m911 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<CardboardEye>()
// !!0 UnityEngine.GameObject::AddComponent<CardboardEye>()
extern "C" CardboardEye_t76 * GameObject_AddComponent_TisCardboardEye_t76_m912 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisCardboardEye_t76_m902_GenericMethod;
extern Il2CppGenericMethod Func_2__ctor_m900_GenericMethod;
extern Il2CppGenericMethod Enumerable_Where_TisCardboardEye_t76_m903_GenericMethod;
extern Il2CppGenericMethod Enumerable_ToArray_TisCardboardEye_t76_m905_GenericMethod;
extern Il2CppGenericMethod Func_2__ctor_m901_GenericMethod;
extern Il2CppGenericMethod Enumerable_Select_TisCardboardEye_t76_TisCardboardHead_t53_m907_GenericMethod;
extern Il2CppGenericMethod Enumerable_FirstOrDefault_TisCardboardHead_t53_m909_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCardboardHead_t53_m911_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCardboardEye_t76_m912_GenericMethod;


// System.Void StereoController::.ctor()
extern MethodInfo StereoController__ctor_m307_MethodInfo;
extern "C" void StereoController__ctor_m307 (StereoController_t75 * __this, MethodInfo* method)
{
	{
		__this->___directRender_2 = 1;
		__this->___stereoMultiplier_3 = (1.0f);
		__this->___checkStereoComfort_8 = 1;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// CardboardEye[] StereoController::get_Eyes()
extern TypeInfo* Func_2_t210_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisCardboardEye_t76_m902_MethodInfo_var;
extern MethodInfo* Func_2__ctor_m900_MethodInfo_var;
extern MethodInfo* Enumerable_Where_TisCardboardEye_t76_m903_MethodInfo_var;
extern MethodInfo* Enumerable_ToArray_TisCardboardEye_t76_m905_MethodInfo_var;
extern "C" CardboardEyeU5BU5D_t93* StereoController_get_Eyes_m308 (StereoController_t75 * __this, MethodInfo* method)
{
	static bool StereoController_get_Eyes_m308_init;
	if (!StereoController_get_Eyes_m308_init)
	{
		Func_2_t210_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Func_2_t210_0_0_0);
		Component_GetComponentsInChildren_TisCardboardEye_t76_m902_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCardboardEye_t76_m902_GenericMethod);
		Func_2__ctor_m900_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Func_2__ctor_m900_GenericMethod);
		Enumerable_Where_TisCardboardEye_t76_m903_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_Where_TisCardboardEye_t76_m903_GenericMethod);
		Enumerable_ToArray_TisCardboardEye_t76_m905_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_ToArray_TisCardboardEye_t76_m905_GenericMethod);
		StereoController_get_Eyes_m308_init = true;
	}
	{
		CardboardEyeU5BU5D_t93* L_0 = (__this->___eyes_13);
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		CardboardEyeU5BU5D_t93* L_1 = Component_GetComponentsInChildren_TisCardboardEye_t76_m902(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCardboardEye_t76_m902_MethodInfo_var);
		IntPtr_t L_2 = { &StereoController_U3Cget_EyesU3Em__1_m321_MethodInfo };
		Func_2_t210 * L_3 = (Func_2_t210 *)il2cpp_codegen_object_new (Func_2_t210_il2cpp_TypeInfo_var);
		Func_2__ctor_m900(L_3, __this, L_2, /*hidden argument*/Func_2__ctor_m900_MethodInfo_var);
		Object_t* L_4 = Enumerable_Where_TisCardboardEye_t76_m903(NULL /*static, unused*/, (Object_t*)(Object_t*)L_1, L_3, /*hidden argument*/Enumerable_Where_TisCardboardEye_t76_m903_MethodInfo_var);
		CardboardEyeU5BU5D_t93* L_5 = Enumerable_ToArray_TisCardboardEye_t76_m905(NULL /*static, unused*/, L_4, /*hidden argument*/Enumerable_ToArray_TisCardboardEye_t76_m905_MethodInfo_var);
		__this->___eyes_13 = L_5;
	}

IL_002e:
	{
		CardboardEyeU5BU5D_t93* L_6 = (__this->___eyes_13);
		return L_6;
	}
}
// System.Void StereoController::InvalidateEyes()
extern MethodInfo StereoController_InvalidateEyes_m309_MethodInfo;
extern "C" void StereoController_InvalidateEyes_m309 (StereoController_t75 * __this, MethodInfo* method)
{
	{
		__this->___eyes_13 = (CardboardEyeU5BU5D_t93*)NULL;
		return;
	}
}
// CardboardHead StereoController::get_Head()
extern TypeInfo* Func_2_t94_il2cpp_TypeInfo_var;
extern MethodInfo* Func_2__ctor_m901_MethodInfo_var;
extern MethodInfo* Enumerable_Select_TisCardboardEye_t76_TisCardboardHead_t53_m907_MethodInfo_var;
extern MethodInfo* Enumerable_FirstOrDefault_TisCardboardHead_t53_m909_MethodInfo_var;
extern "C" CardboardHead_t53 * StereoController_get_Head_m310 (StereoController_t75 * __this, MethodInfo* method)
{
	static bool StereoController_get_Head_m310_init;
	if (!StereoController_get_Head_m310_init)
	{
		Func_2_t94_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Func_2_t94_0_0_0);
		Func_2__ctor_m901_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Func_2__ctor_m901_GenericMethod);
		Enumerable_Select_TisCardboardEye_t76_TisCardboardHead_t53_m907_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_Select_TisCardboardEye_t76_TisCardboardHead_t53_m907_GenericMethod);
		Enumerable_FirstOrDefault_TisCardboardHead_t53_m909_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_FirstOrDefault_TisCardboardHead_t53_m909_GenericMethod);
		StereoController_get_Head_m310_init = true;
	}
	CardboardEyeU5BU5D_t93* G_B2_0 = {0};
	CardboardEyeU5BU5D_t93* G_B1_0 = {0};
	{
		CardboardEyeU5BU5D_t93* L_0 = StereoController_get_Eyes_m308(__this, /*hidden argument*/&StereoController_get_Eyes_m308_MethodInfo);
		Func_2_t94 * L_1 = ((StereoController_t75_StaticFields*)InitializedTypeInfo(&StereoController_t75_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cacheC_14;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		IntPtr_t L_2 = { &StereoController_U3Cget_HeadU3Em__2_m322_MethodInfo };
		Func_2_t94 * L_3 = (Func_2_t94 *)il2cpp_codegen_object_new (Func_2_t94_il2cpp_TypeInfo_var);
		Func_2__ctor_m901(L_3, NULL, L_2, /*hidden argument*/Func_2__ctor_m901_MethodInfo_var);
		((StereoController_t75_StaticFields*)InitializedTypeInfo(&StereoController_t75_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cacheC_14 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		Func_2_t94 * L_4 = ((StereoController_t75_StaticFields*)InitializedTypeInfo(&StereoController_t75_il2cpp_TypeInfo)->static_fields)->___U3CU3Ef__am$cacheC_14;
		Object_t* L_5 = Enumerable_Select_TisCardboardEye_t76_TisCardboardHead_t53_m907(NULL /*static, unused*/, (Object_t*)(Object_t*)G_B2_0, L_4, /*hidden argument*/Enumerable_Select_TisCardboardEye_t76_TisCardboardHead_t53_m907_MethodInfo_var);
		CardboardHead_t53 * L_6 = Enumerable_FirstOrDefault_TisCardboardHead_t53_m909(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_FirstOrDefault_TisCardboardHead_t53_m909_MethodInfo_var);
		return L_6;
	}
}
// UnityEngine.RenderTexture StereoController::get_StereoScreen()
extern MethodInfo* Component_GetComponent_TisCamera_t15_m869_MethodInfo_var;
extern "C" RenderTexture_t56 * StereoController_get_StereoScreen_m311 (StereoController_t75 * __this, MethodInfo* method)
{
	static bool StereoController_get_StereoScreen_m311_init;
	if (!StereoController_get_StereoScreen_m311_init)
	{
		Component_GetComponent_TisCamera_t15_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t15_m869_GenericMethod);
		StereoController_get_StereoScreen_m311_init = true;
	}
	RenderTexture_t56 * G_B2_0 = {0};
	RenderTexture_t56 * G_B1_0 = {0};
	{
		Camera_t15 * L_0 = Component_GetComponent_TisCamera_t15_m869(__this, /*hidden argument*/Component_GetComponent_TisCamera_t15_m869_MethodInfo_var);
		NullCheck(L_0);
		RenderTexture_t56 * L_1 = Camera_get_targetTexture_m856(L_0, /*hidden argument*/&Camera_get_targetTexture_m856_MethodInfo);
		RenderTexture_t56 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_3 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_3);
		RenderTexture_t56 * L_4 = Cardboard_get_StereoScreen_m198(L_3, /*hidden argument*/&Cardboard_get_StereoScreen_m198_MethodInfo);
		G_B2_0 = L_4;
	}

IL_001c:
	{
		return G_B2_0;
	}
}
// System.Int32 StereoController::get_ScreenHeight()
extern MethodInfo StereoController_get_ScreenHeight_m312_MethodInfo;
extern "C" int32_t StereoController_get_ScreenHeight_m312 (StereoController_t75 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	{
		int32_t L_0 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		bool L_1 = Application_get_isEditor_m823(NULL /*static, unused*/, /*hidden argument*/&Application_get_isEditor_m823_MethodInfo);
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B3_0 = L_0;
			goto IL_0027;
		}
	}
	{
		RenderTexture_t56 * L_2 = StereoController_get_StereoScreen_m311(__this, /*hidden argument*/&StereoController_get_StereoScreen_m311_MethodInfo);
		bool L_3 = Object_op_Equality_m528(NULL /*static, unused*/, L_2, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		G_B2_0 = G_B1_0;
		if (!L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0027;
		}
	}
	{
		G_B4_0 = ((int32_t)36);
		G_B4_1 = G_B2_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0028:
	{
		return ((int32_t)((int32_t)G_B4_1-(int32_t)G_B4_0));
	}
}
// System.Void StereoController::Awake()
extern MethodInfo StereoController_Awake_m313_MethodInfo;
extern "C" void StereoController_Awake_m313 (StereoController_t75 * __this, MethodInfo* method)
{
	{
		StereoController_AddStereoRig_m314(__this, /*hidden argument*/&StereoController_AddStereoRig_m314_MethodInfo);
		return;
	}
}
// System.Void StereoController::AddStereoRig()
extern MethodInfo* GameObject_AddComponent_TisCardboardHead_t53_m911_MethodInfo_var;
extern "C" void StereoController_AddStereoRig_m314 (StereoController_t75 * __this, MethodInfo* method)
{
	static bool StereoController_AddStereoRig_m314_init;
	if (!StereoController_AddStereoRig_m314_init)
	{
		GameObject_AddComponent_TisCardboardHead_t53_m911_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCardboardHead_t53_m911_GenericMethod);
		StereoController_AddStereoRig_m314_init = true;
	}
	{
		CardboardEyeU5BU5D_t93* L_0 = StereoController_get_Eyes_m308(__this, /*hidden argument*/&StereoController_get_Eyes_m308_MethodInfo);
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		StereoController_CreateEye_m315(__this, 0, /*hidden argument*/&StereoController_CreateEye_m315_MethodInfo);
		StereoController_CreateEye_m315(__this, 1, /*hidden argument*/&StereoController_CreateEye_m315_MethodInfo);
		CardboardHead_t53 * L_1 = StereoController_get_Head_m310(__this, /*hidden argument*/&StereoController_get_Head_m310_MethodInfo);
		bool L_2 = Object_op_Equality_m528(NULL /*static, unused*/, L_1, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t7 * L_3 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_3);
		GameObject_AddComponent_TisCardboardHead_t53_m911(L_3, /*hidden argument*/GameObject_AddComponent_TisCardboardHead_t53_m911_MethodInfo_var);
	}

IL_003a:
	{
		return;
	}
}
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern MethodInfo* GameObject_AddComponent_TisCamera_t15_m821_MethodInfo_var;
extern MethodInfo* GameObject_AddComponent_TisCardboardEye_t76_m912_MethodInfo_var;
extern "C" void StereoController_CreateEye_m315 (StereoController_t75 * __this, int32_t ___eye, MethodInfo* method)
{
	static bool StereoController_CreateEye_m315_init;
	if (!StereoController_CreateEye_m315_init)
	{
		GameObject_AddComponent_TisCamera_t15_m821_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCamera_t15_m821_GenericMethod);
		GameObject_AddComponent_TisCardboardEye_t76_m912_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCardboardEye_t76_m912_GenericMethod);
		StereoController_CreateEye_m315_init = true;
	}
	String_t* V_0 = {0};
	GameObject_t7 * V_1 = {0};
	CardboardEye_t76 * V_2 = {0};
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	{
		String_t* L_0 = Object_get_name_m652(__this, /*hidden argument*/&Object_get_name_m652_MethodInfo);
		int32_t L_1 = ___eye;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral56;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (String_t*) &_stringLiteral57;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m731(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/&String_Concat_m731_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = V_0;
		GameObject_t7 * L_4 = (GameObject_t7 *)il2cpp_codegen_object_new (InitializedTypeInfo(&GameObject_t7_il2cpp_TypeInfo));
		GameObject__ctor_m557(L_4, L_3, /*hidden argument*/&GameObject__ctor_m557_MethodInfo);
		V_1 = L_4;
		GameObject_t7 * L_5 = V_1;
		NullCheck(L_5);
		Transform_t2 * L_6 = GameObject_get_transform_m558(L_5, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		Transform_t2 * L_7 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_6);
		Transform_set_parent_m559(L_6, L_7, /*hidden argument*/&Transform_set_parent_m559_MethodInfo);
		GameObject_t7 * L_8 = V_1;
		NullCheck(L_8);
		Camera_t15 * L_9 = GameObject_AddComponent_TisCamera_t15_m821(L_8, /*hidden argument*/GameObject_AddComponent_TisCamera_t15_m821_MethodInfo_var);
		NullCheck(L_9);
		Behaviour_set_enabled_m530(L_9, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		GameObject_t7 * L_10 = V_1;
		NullCheck(L_10);
		CardboardEye_t76 * L_11 = GameObject_AddComponent_TisCardboardEye_t76_m912(L_10, /*hidden argument*/GameObject_AddComponent_TisCardboardEye_t76_m912_MethodInfo_var);
		V_2 = L_11;
		CardboardEye_t76 * L_12 = V_2;
		int32_t L_13 = ___eye;
		NullCheck(L_12);
		L_12->___eye_2 = L_13;
		CardboardEye_t76 * L_14 = V_2;
		NullCheck(L_14);
		CardboardEye_CopyCameraAndMakeSideBySide_m249(L_14, __this, (0.0f), (0.0f), /*hidden argument*/&CardboardEye_CopyCameraAndMakeSideBySide_m249_MethodInfo);
		return;
	}
}
// System.Void StereoController::ComputeStereoAdjustment(System.Single,System.Single,System.Single&,System.Single&)
extern MethodInfo* Component_GetComponent_TisCamera_t15_m869_MethodInfo_var;
extern "C" void StereoController_ComputeStereoAdjustment_m316 (StereoController_t75 * __this, float ___proj11, float ___zScale, float* ___ipdScale, float* ___eyeOffset, MethodInfo* method)
{
	static bool StereoController_ComputeStereoAdjustment_m316_init;
	if (!StereoController_ComputeStereoAdjustment_m316_init)
	{
		Component_GetComponent_TisCamera_t15_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t15_m869_GenericMethod);
		StereoController_ComputeStereoAdjustment_m316_init = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t5  V_7 = {0};
	Matrix4x4_t27  V_8 = {0};
	Vector2_t48  V_9 = {0};
	Vector2_t48  V_10 = {0};
	{
		float* L_0 = ___ipdScale;
		float L_1 = (__this->___stereoMultiplier_3);
		*((float*)(L_0)) = (float)L_1;
		float* L_2 = ___eyeOffset;
		*((float*)(L_2)) = (float)(0.0f);
		Transform_t2 * L_3 = (__this->___centerOfInterest_6);
		bool L_4 = Object_op_Equality_m528(NULL /*static, unused*/, L_3, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		Transform_t2 * L_5 = (__this->___centerOfInterest_6);
		NullCheck(L_5);
		GameObject_t7 * L_6 = Component_get_gameObject_m596(L_5, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_6);
		bool L_7 = GameObject_get_activeInHierarchy_m693(L_6, /*hidden argument*/&GameObject_get_activeInHierarchy_m693_MethodInfo);
		if (L_7)
		{
			goto IL_0037;
		}
	}

IL_0036:
	{
		return;
	}

IL_0037:
	{
		Transform_t2 * L_8 = (__this->___centerOfInterest_6);
		NullCheck(L_8);
		Vector3_t5  L_9 = Transform_get_position_m506(L_8, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Transform_t2 * L_10 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_10);
		Vector3_t5  L_11 = Transform_get_position_m506(L_10, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		Vector3_t5  L_12 = Vector3_op_Subtraction_m509(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&Vector3_op_Subtraction_m509_MethodInfo);
		V_7 = L_12;
		float L_13 = Vector3_get_magnitude_m542((&V_7), /*hidden argument*/&Vector3_get_magnitude_m542_MethodInfo);
		V_0 = L_13;
		float L_14 = (__this->___radiusOfInterest_7);
		float L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_16 = Mathf_Clamp_m660(NULL /*static, unused*/, L_14, (0.0f), L_15, /*hidden argument*/&Mathf_Clamp_m660_MethodInfo);
		V_1 = L_16;
		float L_17 = ___proj11;
		Camera_t15 * L_18 = Component_GetComponent_TisCamera_t15_m869(__this, /*hidden argument*/Component_GetComponent_TisCamera_t15_m869_MethodInfo_var);
		NullCheck(L_18);
		Matrix4x4_t27  L_19 = Camera_get_projectionMatrix_m831(L_18, /*hidden argument*/&Camera_get_projectionMatrix_m831_MethodInfo);
		V_8 = L_19;
		float L_20 = Matrix4x4_get_Item_m827((&V_8), 1, 1, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_2 = ((float)((float)L_17/(float)L_20));
		float L_21 = V_1;
		float L_22 = V_1;
		float L_23 = V_0;
		float L_24 = V_0;
		float L_25 = V_1;
		float L_26 = V_1;
		float L_27 = V_2;
		float L_28 = V_2;
		float L_29 = sqrtf(((float)((float)((float)((float)L_21*(float)L_22))+(float)((float)((float)((float)((float)((float)((float)((float)((float)L_23*(float)L_24))-(float)((float)((float)L_25*(float)L_26))))*(float)L_27))*(float)L_28)))));
		V_3 = L_29;
		float* L_30 = ___eyeOffset;
		float L_31 = V_0;
		float L_32 = V_3;
		float L_33 = (__this->___matchMonoFOV_4);
		float L_34 = Mathf_Clamp01_m580(NULL /*static, unused*/, L_33, /*hidden argument*/&Mathf_Clamp01_m580_MethodInfo);
		float L_35 = ___zScale;
		*((float*)(L_30)) = (float)((float)((float)((float)((float)((float)((float)L_31-(float)L_32))*(float)L_34))/(float)L_35));
		bool L_36 = (__this->___checkStereoComfort_8);
		if (!L_36)
		{
			goto IL_010c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_37 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_37);
		Vector2_t48  L_38 = Cardboard_get_ComfortableViewingRange_m206(L_37, /*hidden argument*/&Cardboard_get_ComfortableViewingRange_m206_MethodInfo);
		V_9 = L_38;
		float L_39 = ((&V_9)->___x_1);
		V_4 = L_39;
		Cardboard_t67 * L_40 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_40);
		Vector2_t48  L_41 = Cardboard_get_ComfortableViewingRange_m206(L_40, /*hidden argument*/&Cardboard_get_ComfortableViewingRange_m206_MethodInfo);
		V_10 = L_41;
		float L_42 = ((&V_10)->___y_2);
		V_5 = L_42;
		float L_43 = V_4;
		float L_44 = V_5;
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_010c;
		}
	}
	{
		float L_45 = V_0;
		float L_46 = V_1;
		float L_47 = ___zScale;
		float* L_48 = ___eyeOffset;
		V_6 = ((float)((float)((float)((float)((float)((float)L_45-(float)L_46))/(float)L_47))-(float)(*((float*)L_48))));
		float* L_49 = ___ipdScale;
		float* L_50 = ___ipdScale;
		float L_51 = V_6;
		float L_52 = V_6;
		float L_53 = V_4;
		float L_54 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		float L_55 = Mathf_Clamp_m660(NULL /*static, unused*/, L_52, L_53, L_54, /*hidden argument*/&Mathf_Clamp_m660_MethodInfo);
		*((float*)(L_49)) = (float)((float)((float)(*((float*)L_50))*(float)((float)((float)L_51/(float)L_55))));
	}

IL_010c:
	{
		return;
	}
}
// System.Void StereoController::OnEnable()
extern MethodInfo StereoController_OnEnable_m317_MethodInfo;
extern "C" void StereoController_OnEnable_m317 (StereoController_t75 * __this, MethodInfo* method)
{
	{
		MonoBehaviour_StartCoroutine_m817(__this, (String_t*) &_stringLiteral44, /*hidden argument*/&MonoBehaviour_StartCoroutine_m817_MethodInfo);
		return;
	}
}
// System.Void StereoController::OnDisable()
extern MethodInfo StereoController_OnDisable_m318_MethodInfo;
extern "C" void StereoController_OnDisable_m318 (StereoController_t75 * __this, MethodInfo* method)
{
	{
		MonoBehaviour_StopCoroutine_m818(__this, (String_t*) &_stringLiteral44, /*hidden argument*/&MonoBehaviour_StopCoroutine_m818_MethodInfo);
		return;
	}
}
// System.Void StereoController::OnPreCull()
extern MethodInfo StereoController_OnPreCull_m319_MethodInfo;
extern MethodInfo* Component_GetComponent_TisCamera_t15_m869_MethodInfo_var;
extern "C" void StereoController_OnPreCull_m319 (StereoController_t75 * __this, MethodInfo* method)
{
	static bool StereoController_OnPreCull_m319_init;
	if (!StereoController_OnPreCull_m319_init)
	{
		Component_GetComponent_TisCamera_t15_m869_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisCamera_t15_m869_GenericMethod);
		StereoController_OnPreCull_m319_init = true;
	}
	CardboardEye_t76 * V_0 = {0};
	CardboardEyeU5BU5D_t93* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_0 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_0);
		bool L_1 = Cardboard_get_VRModeEnabled_m182(L_0, /*hidden argument*/&Cardboard_get_VRModeEnabled_m182_MethodInfo);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_2 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_2);
		Cardboard_UpdateState_m213(L_2, /*hidden argument*/&Cardboard_UpdateState_m213_MethodInfo);
		Camera_t15 * L_3 = Component_GetComponent_TisCamera_t15_m869(__this, /*hidden argument*/Component_GetComponent_TisCamera_t15_m869_MethodInfo_var);
		NullCheck(L_3);
		Behaviour_set_enabled_m530(L_3, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		CardboardEyeU5BU5D_t93* L_4 = StereoController_get_Eyes_m308(__this, /*hidden argument*/&StereoController_get_Eyes_m308_MethodInfo);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0042;
	}

IL_0034:
	{
		CardboardEyeU5BU5D_t93* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_0 = (*(CardboardEye_t76 **)(CardboardEye_t76 **)SZArrayLdElema(L_5, L_7));
		CardboardEye_t76 * L_8 = V_0;
		NullCheck(L_8);
		CardboardEye_Render_m247(L_8, /*hidden argument*/&CardboardEye_Render_m247_MethodInfo);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_10 = V_2;
		CardboardEyeU5BU5D_t93* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		__this->___renderedStereo_12 = 1;
		return;
	}
}
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern MethodInfo StereoController_EndOfFrame_m320_MethodInfo;
extern "C" Object_t * StereoController_EndOfFrame_m320 (StereoController_t75 * __this, MethodInfo* method)
{
	U3CEndOfFrameU3Ec__Iterator1_t92 * V_0 = {0};
	{
		U3CEndOfFrameU3Ec__Iterator1_t92 * L_0 = (U3CEndOfFrameU3Ec__Iterator1_t92 *)il2cpp_codegen_object_new (InitializedTypeInfo(&U3CEndOfFrameU3Ec__Iterator1_t92_il2cpp_TypeInfo));
		U3CEndOfFrameU3Ec__Iterator1__ctor_m301(L_0, /*hidden argument*/&U3CEndOfFrameU3Ec__Iterator1__ctor_m301_MethodInfo);
		V_0 = L_0;
		U3CEndOfFrameU3Ec__Iterator1_t92 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CEndOfFrameU3Ec__Iterator1_t92 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean StereoController::<get_Eyes>m__1(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__1_m321 (StereoController_t75 * __this, CardboardEye_t76 * ___eye, MethodInfo* method)
{
	{
		CardboardEye_t76 * L_0 = ___eye;
		NullCheck(L_0);
		StereoController_t75 * L_1 = CardboardEye_get_Controller_m241(L_0, /*hidden argument*/&CardboardEye_get_Controller_m241_MethodInfo);
		bool L_2 = Object_op_Equality_m528(NULL /*static, unused*/, L_1, __this, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		return L_2;
	}
}
// CardboardHead StereoController::<get_Head>m__2(CardboardEye)
extern "C" CardboardHead_t53 * StereoController_U3Cget_HeadU3Em__2_m322 (Object_t * __this /* static, unused */, CardboardEye_t76 * ___eye, MethodInfo* method)
{
	{
		CardboardEye_t76 * L_0 = ___eye;
		NullCheck(L_0);
		CardboardHead_t53 * L_1 = CardboardEye_get_Head_m242(L_0, /*hidden argument*/&CardboardEye_get_Head_m242_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Version
#include "mscorlib_System_Version.h"
// iOSVRDevice
#include "AssemblyU2DCSharp_iOSVRDevice.h"
extern TypeInfo Regex_t213_il2cpp_TypeInfo;
extern TypeInfo Version_t214_il2cpp_TypeInfo;
extern TypeInfo iOSVRDevice_t100_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// iOSVRDevice
#include "AssemblyU2DCSharp_iOSVRDeviceMethodDeclarations.h"
extern MethodInfo BaseVRDevice_set_Profile_m326_MethodInfo;
extern MethodInfo List_1_Add_m913_MethodInfo;
extern MethodInfo BaseVRDevice_SupportsUnityRenderEvent_m329_MethodInfo;
extern MethodInfo Application_get_isMobilePlatform_m914_MethodInfo;
extern MethodInfo Regex__ctor_m915_MethodInfo;
extern MethodInfo Application_get_unityVersion_m916_MethodInfo;
extern MethodInfo Regex_Replace_m917_MethodInfo;
extern MethodInfo Version__ctor_m918_MethodInfo;
extern MethodInfo Version_op_LessThan_m919_MethodInfo;
extern MethodInfo BaseVRDevice_MakeProjection_m342_MethodInfo;
extern MethodInfo Rect_get_xMax_m920_MethodInfo;
extern MethodInfo Matrix4x4_get_zero_m921_MethodInfo;
extern MethodInfo iOSVRDevice__ctor_m381_MethodInfo;
extern Il2CppGenericMethod List_1_Add_m913_GenericMethod;


// System.Void BaseVRDevice::.ctor()
extern MethodInfo BaseVRDevice__ctor_m323_MethodInfo;
extern "C" void BaseVRDevice__ctor_m323 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	{
		MutablePose3D_t90 * L_0 = (MutablePose3D_t90 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MutablePose3D_t90_il2cpp_TypeInfo));
		MutablePose3D__ctor_m294(L_0, /*hidden argument*/&MutablePose3D__ctor_m294_MethodInfo);
		__this->___headPose_1 = L_0;
		MutablePose3D_t90 * L_1 = (MutablePose3D_t90 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MutablePose3D_t90_il2cpp_TypeInfo));
		MutablePose3D__ctor_m294(L_1, /*hidden argument*/&MutablePose3D__ctor_m294_MethodInfo);
		__this->___leftEyePose_2 = L_1;
		MutablePose3D_t90 * L_2 = (MutablePose3D_t90 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MutablePose3D_t90_il2cpp_TypeInfo));
		MutablePose3D__ctor_m294(L_2, /*hidden argument*/&MutablePose3D__ctor_m294_MethodInfo);
		__this->___rightEyePose_3 = L_2;
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		CardboardProfile_t72 * L_3 = ((CardboardProfile_t72_StaticFields*)InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo)->static_fields)->___Default_14;
		NullCheck(L_3);
		CardboardProfile_t72 * L_4 = CardboardProfile_Clone_m258(L_3, /*hidden argument*/&CardboardProfile_Clone_m258_MethodInfo);
		BaseVRDevice_set_Profile_m326(__this, L_4, /*hidden argument*/&BaseVRDevice_set_Profile_m326_MethodInfo);
		return;
	}
}
// System.Void BaseVRDevice::.cctor()
extern MethodInfo BaseVRDevice__cctor_m324_MethodInfo;
extern "C" void BaseVRDevice__cctor_m324 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		return;
	}
}
// CardboardProfile BaseVRDevice::get_Profile()
extern "C" CardboardProfile_t72 * BaseVRDevice_get_Profile_m325 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	{
		CardboardProfile_t72 * L_0 = (__this->___U3CProfileU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void BaseVRDevice::set_Profile(CardboardProfile)
extern "C" void BaseVRDevice_set_Profile_m326 (BaseVRDevice_t69 * __this, CardboardProfile_t72 * ___value, MethodInfo* method)
{
	{
		CardboardProfile_t72 * L_0 = ___value;
		__this->___U3CProfileU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Void BaseVRDevice::Init()
// System.Boolean BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern MethodInfo* List_1_Add_m913_MethodInfo_var;
extern "C" bool BaseVRDevice_SupportsNativeDistortionCorrection_m327 (BaseVRDevice_t69 * __this, List_1_t95 * ___diagnostics, MethodInfo* method)
{
	static bool BaseVRDevice_SupportsNativeDistortionCorrection_m327_init;
	if (!BaseVRDevice_SupportsNativeDistortionCorrection_m327_init)
	{
		List_1_Add_m913_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m913_GenericMethod);
		BaseVRDevice_SupportsNativeDistortionCorrection_m327_init = true;
	}
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = SystemInfo_get_supportsRenderTextures_m745(NULL /*static, unused*/, /*hidden argument*/&SystemInfo_get_supportsRenderTextures_m745_MethodInfo);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t95 * L_1 = ___diagnostics;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m913_MethodInfo_var, L_1, (String_t*) &_stringLiteral58);
		V_0 = 0;
	}

IL_0019:
	{
		bool L_2 = BaseVRDevice_SupportsUnityRenderEvent_m329(__this, /*hidden argument*/&BaseVRDevice_SupportsUnityRenderEvent_m329_MethodInfo);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t95 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m913_MethodInfo_var, L_3, (String_t*) &_stringLiteral59);
		V_0 = 0;
	}

IL_0031:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern MethodInfo* List_1_Add_m913_MethodInfo_var;
extern "C" bool BaseVRDevice_SupportsNativeUILayer_m328 (BaseVRDevice_t69 * __this, List_1_t95 * ___diagnostics, MethodInfo* method)
{
	static bool BaseVRDevice_SupportsNativeUILayer_m328_init;
	if (!BaseVRDevice_SupportsNativeUILayer_m328_init)
	{
		List_1_Add_m913_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m913_GenericMethod);
		BaseVRDevice_SupportsNativeUILayer_m328_init = true;
	}
	bool V_0 = false;
	{
		V_0 = 1;
		bool L_0 = BaseVRDevice_SupportsUnityRenderEvent_m329(__this, /*hidden argument*/&BaseVRDevice_SupportsUnityRenderEvent_m329_MethodInfo);
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t95 * L_1 = ___diagnostics;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m913_MethodInfo_var, L_1, (String_t*) &_stringLiteral59);
		V_0 = 0;
	}

IL_001a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean BaseVRDevice::SupportsUnityRenderEvent()
extern "C" bool BaseVRDevice_SupportsUnityRenderEvent_m329 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	bool V_0 = false;
	String_t* V_1 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 1;
		bool L_0 = Application_get_isMobilePlatform_m914(NULL /*static, unused*/, /*hidden argument*/&Application_get_isMobilePlatform_m914_MethodInfo);
		if (!L_0)
		{
			goto IL_0061;
		}
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t213_il2cpp_TypeInfo));
			Regex_t213 * L_1 = (Regex_t213 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t213_il2cpp_TypeInfo));
			Regex__ctor_m915(L_1, (String_t*) &_stringLiteral60, /*hidden argument*/&Regex__ctor_m915_MethodInfo);
			String_t* L_2 = Application_get_unityVersion_m916(NULL /*static, unused*/, /*hidden argument*/&Application_get_unityVersion_m916_MethodInfo);
			NullCheck(L_1);
			String_t* L_3 = Regex_Replace_m917(L_1, L_2, (String_t*) &_stringLiteral61, /*hidden argument*/&Regex_Replace_m917_MethodInfo);
			V_1 = L_3;
			String_t* L_4 = V_1;
			Version_t214 * L_5 = (Version_t214 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t214_il2cpp_TypeInfo));
			Version__ctor_m918(L_5, L_4, /*hidden argument*/&Version__ctor_m918_MethodInfo);
			Version_t214 * L_6 = (Version_t214 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t214_il2cpp_TypeInfo));
			Version__ctor_m918(L_6, (String_t*) &_stringLiteral62, /*hidden argument*/&Version__ctor_m918_MethodInfo);
			bool L_7 = Version_op_LessThan_m919(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/&Version_op_LessThan_m919_MethodInfo);
			if (!L_7)
			{
				goto IL_0042;
			}
		}

IL_0040:
		{
			V_0 = 0;
		}

IL_0042:
		{
			goto IL_0061;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t180 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Object_t_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0047;
		throw e;
	}

CATCH_0047:
	{ // begin catch(System.Object)
		String_t* L_8 = Application_get_unityVersion_m916(NULL /*static, unused*/, /*hidden argument*/&Application_get_unityVersion_m916_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral63, L_8, /*hidden argument*/&String_Concat_m731_MethodInfo);
		Debug_LogWarning_m746(NULL /*static, unused*/, L_9, /*hidden argument*/&Debug_LogWarning_m746_MethodInfo);
		goto IL_0061;
	} // end catch (depth: 1)

IL_0061:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.RenderTexture BaseVRDevice::CreateStereoScreen()
extern "C" RenderTexture_t56 * BaseVRDevice_CreateStereoScreen_m330 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral64, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		int32_t L_0 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_1 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		RenderTexture_t56 * L_2 = (RenderTexture_t56 *)il2cpp_codegen_object_new (InitializedTypeInfo(&RenderTexture_t56_il2cpp_TypeInfo));
		RenderTexture__ctor_m751(L_2, L_0, L_1, ((int32_t)16), 4, /*hidden argument*/&RenderTexture__ctor_m751_MethodInfo);
		return L_2;
	}
}
// System.Void BaseVRDevice::SetDistortionCorrectionEnabled(System.Boolean)
// System.Void BaseVRDevice::SetVRModeEnabled(System.Boolean)
// System.Void BaseVRDevice::SetAlignmentMarkerEnabled(System.Boolean)
// System.Void BaseVRDevice::SetSettingsButtonEnabled(System.Boolean)
// System.Void BaseVRDevice::SetNeckModelScale(System.Single)
// System.Void BaseVRDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
// System.Void BaseVRDevice::SetStereoScreen(UnityEngine.RenderTexture)
// Pose3D BaseVRDevice::GetHeadPose()
extern "C" Pose3D_t73 * BaseVRDevice_GetHeadPose_m331 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	{
		MutablePose3D_t90 * L_0 = (__this->___headPose_1);
		return L_0;
	}
}
// Pose3D BaseVRDevice::GetEyePose(Cardboard/Eye)
extern "C" Pose3D_t73 * BaseVRDevice_GetEyePose_m332 (BaseVRDevice_t69 * __this, int32_t ___eye, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_0022;
	}

IL_0014:
	{
		MutablePose3D_t90 * L_3 = (__this->___leftEyePose_2);
		return L_3;
	}

IL_001b:
	{
		MutablePose3D_t90 * L_4 = (__this->___rightEyePose_3);
		return L_4;
	}

IL_0022:
	{
		return (Pose3D_t73 *)NULL;
	}
}
// UnityEngine.Matrix4x4 BaseVRDevice::GetProjection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t27  BaseVRDevice_GetProjection_m333 (BaseVRDevice_t69 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method)
{
	int32_t V_0 = {0};
	Matrix4x4_t27  G_B6_0 = {0};
	Matrix4x4_t27  G_B10_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0044;
	}

IL_0014:
	{
		int32_t L_3 = ___distortion;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Matrix4x4_t27  L_4 = (__this->___leftEyeDistortedProjection_4);
		G_B6_0 = L_4;
		goto IL_002b;
	}

IL_0025:
	{
		Matrix4x4_t27  L_5 = (__this->___leftEyeUndistortedProjection_6);
		G_B6_0 = L_5;
	}

IL_002b:
	{
		return G_B6_0;
	}

IL_002c:
	{
		int32_t L_6 = ___distortion;
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		Matrix4x4_t27  L_7 = (__this->___rightEyeDistortedProjection_5);
		G_B10_0 = L_7;
		goto IL_0043;
	}

IL_003d:
	{
		Matrix4x4_t27  L_8 = (__this->___rightEyeUndistortedProjection_7);
		G_B10_0 = L_8;
	}

IL_0043:
	{
		return G_B10_0;
	}

IL_0044:
	{
		Matrix4x4_t27  L_9 = Matrix4x4_get_identity_m896(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m896_MethodInfo);
		return L_9;
	}
}
// UnityEngine.Rect BaseVRDevice::GetViewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t62  BaseVRDevice_GetViewport_m334 (BaseVRDevice_t69 * __this, int32_t ___eye, int32_t ___distortion, MethodInfo* method)
{
	int32_t V_0 = {0};
	Rect_t62  V_1 = {0};
	Rect_t62  G_B6_0 = {0};
	Rect_t62  G_B10_0 = {0};
	{
		int32_t L_0 = ___eye;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0044;
	}

IL_0014:
	{
		int32_t L_3 = ___distortion;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Rect_t62  L_4 = (__this->___leftEyeDistortedViewport_8);
		G_B6_0 = L_4;
		goto IL_002b;
	}

IL_0025:
	{
		Rect_t62  L_5 = (__this->___leftEyeUndistortedViewport_10);
		G_B6_0 = L_5;
	}

IL_002b:
	{
		return G_B6_0;
	}

IL_002c:
	{
		int32_t L_6 = ___distortion;
		if (L_6)
		{
			goto IL_003d;
		}
	}
	{
		Rect_t62  L_7 = (__this->___rightEyeDistortedViewport_9);
		G_B10_0 = L_7;
		goto IL_0043;
	}

IL_003d:
	{
		Rect_t62  L_8 = (__this->___rightEyeUndistortedViewport_11);
		G_B10_0 = L_8;
	}

IL_0043:
	{
		return G_B10_0;
	}

IL_0044:
	{
		Initobj (InitializedTypeInfo(&Rect_t62_il2cpp_TypeInfo), (&V_1));
		Rect_t62  L_9 = V_1;
		return L_9;
	}
}
// System.Void BaseVRDevice::UpdateState()
// System.Void BaseVRDevice::UpdateScreenData()
// System.Void BaseVRDevice::Recenter()
// System.Void BaseVRDevice::PostRender(System.Boolean)
// System.Void BaseVRDevice::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void BaseVRDevice_SetTouchCoordinates_m335 (BaseVRDevice_t69 * __this, int32_t ___x, int32_t ___y, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::OnPause(System.Boolean)
extern "C" void BaseVRDevice_OnPause_m336 (BaseVRDevice_t69 * __this, bool ___pause, MethodInfo* method)
{
	{
		bool L_0 = ___pause;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		VirtActionInvoker0::Invoke(&BaseVRDevice_UpdateScreenData_m805_MethodInfo, __this);
	}

IL_000c:
	{
		return;
	}
}
// System.Void BaseVRDevice::OnFocus(System.Boolean)
extern "C" void BaseVRDevice_OnFocus_m337 (BaseVRDevice_t69 * __this, bool ___focus, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::Reset()
extern "C" void BaseVRDevice_Reset_m338 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&BaseVRDevice_Recenter_m816_MethodInfo, __this);
		return;
	}
}
// System.Void BaseVRDevice::OnApplicationQuit()
extern "C" void BaseVRDevice_OnApplicationQuit_m339 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BaseVRDevice::Destroy()
extern "C" void BaseVRDevice_Destroy_m340 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((BaseVRDevice_t69_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo)->static_fields)->___device_0;
		if ((!(((Object_t*)(BaseVRDevice_t69 *)L_0) == ((Object_t*)(BaseVRDevice_t69 *)__this))))
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo));
		((BaseVRDevice_t69_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo)->static_fields)->___device_0 = (BaseVRDevice_t69 *)NULL;
	}

IL_0011:
	{
		return;
	}
}
// System.Void BaseVRDevice::ComputeEyesFromProfile()
extern MethodInfo BaseVRDevice_ComputeEyesFromProfile_m341_MethodInfo;
extern TypeInfo* SingleU5BU5D_t25_il2cpp_TypeInfo_var;
extern "C" void BaseVRDevice_ComputeEyesFromProfile_m341 (BaseVRDevice_t69 * __this, MethodInfo* method)
{
	static bool BaseVRDevice_ComputeEyesFromProfile_m341_init;
	if (!BaseVRDevice_ComputeEyesFromProfile_m341_init)
	{
		SingleU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t25_0_0_0);
		BaseVRDevice_ComputeEyesFromProfile_m341_init = true;
	}
	Matrix4x4_t27  V_0 = {0};
	SingleU5BU5D_t25* V_1 = {0};
	Matrix4x4_t27  V_2 = {0};
	Matrix4x4_t27 * V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	Matrix4x4_t27 * V_7 = {0};
	Matrix4x4_t27 * V_8 = {0};
	{
		Matrix4x4_t27  L_0 = Matrix4x4_get_identity_m896(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_identity_m896_MethodInfo);
		V_0 = L_0;
		CardboardProfile_t72 * L_1 = BaseVRDevice_get_Profile_m325(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m325_MethodInfo);
		NullCheck(L_1);
		Device_t83 * L_2 = &(L_1->___device_1);
		Lenses_t80 * L_3 = &(L_2->___lenses_0);
		float L_4 = (L_3->___separation_3);
		Matrix4x4_set_Item_m828((&V_0), 0, 3, ((float)((float)((-L_4))/(float)(2.0f))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		MutablePose3D_t90 * L_5 = (__this->___leftEyePose_2);
		Matrix4x4_t27  L_6 = V_0;
		NullCheck(L_5);
		MutablePose3D_Set_m296(L_5, L_6, /*hidden argument*/&MutablePose3D_Set_m296_MethodInfo);
		V_1 = ((SingleU5BU5D_t25*)SZArrayNew(SingleU5BU5D_t25_il2cpp_TypeInfo_var, 4));
		CardboardProfile_t72 * L_7 = BaseVRDevice_get_Profile_m325(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m325_MethodInfo);
		NullCheck(L_7);
		CardboardProfile_GetLeftEyeVisibleTanAngles_m261(L_7, (&V_1), /*hidden argument*/&CardboardProfile_GetLeftEyeVisibleTanAngles_m261_MethodInfo);
		SingleU5BU5D_t25* L_8 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t L_9 = 0;
		SingleU5BU5D_t25* L_10 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		int32_t L_11 = 1;
		SingleU5BU5D_t25* L_12 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 2);
		int32_t L_13 = 2;
		SingleU5BU5D_t25* L_14 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 3);
		int32_t L_15 = 3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo));
		Matrix4x4_t27  L_16 = BaseVRDevice_MakeProjection_m342(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_8, L_9)), (*(float*)(float*)SZArrayLdElema(L_10, L_11)), (*(float*)(float*)SZArrayLdElema(L_12, L_13)), (*(float*)(float*)SZArrayLdElema(L_14, L_15)), (1.0f), (1000.0f), /*hidden argument*/&BaseVRDevice_MakeProjection_m342_MethodInfo);
		__this->___leftEyeDistortedProjection_4 = L_16;
		CardboardProfile_t72 * L_17 = BaseVRDevice_get_Profile_m325(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m325_MethodInfo);
		NullCheck(L_17);
		CardboardProfile_GetLeftEyeNoLensTanAngles_m262(L_17, (&V_1), /*hidden argument*/&CardboardProfile_GetLeftEyeNoLensTanAngles_m262_MethodInfo);
		SingleU5BU5D_t25* L_18 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		int32_t L_19 = 0;
		SingleU5BU5D_t25* L_20 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		int32_t L_21 = 1;
		SingleU5BU5D_t25* L_22 = V_1;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		int32_t L_23 = 2;
		SingleU5BU5D_t25* L_24 = V_1;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 3);
		int32_t L_25 = 3;
		Matrix4x4_t27  L_26 = BaseVRDevice_MakeProjection_m342(NULL /*static, unused*/, (*(float*)(float*)SZArrayLdElema(L_18, L_19)), (*(float*)(float*)SZArrayLdElema(L_20, L_21)), (*(float*)(float*)SZArrayLdElema(L_22, L_23)), (*(float*)(float*)SZArrayLdElema(L_24, L_25)), (1.0f), (1000.0f), /*hidden argument*/&BaseVRDevice_MakeProjection_m342_MethodInfo);
		__this->___leftEyeUndistortedProjection_6 = L_26;
		CardboardProfile_t72 * L_27 = BaseVRDevice_get_Profile_m325(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m325_MethodInfo);
		SingleU5BU5D_t25* L_28 = V_1;
		NullCheck(L_27);
		Rect_t62  L_29 = CardboardProfile_GetLeftEyeVisibleScreenRect_m263(L_27, L_28, /*hidden argument*/&CardboardProfile_GetLeftEyeVisibleScreenRect_m263_MethodInfo);
		__this->___leftEyeUndistortedViewport_10 = L_29;
		Rect_t62  L_30 = (__this->___leftEyeUndistortedViewport_10);
		__this->___leftEyeDistortedViewport_8 = L_30;
		Matrix4x4_t27  L_31 = V_0;
		V_2 = L_31;
		Matrix4x4_t27 * L_32 = (&V_2);
		V_3 = L_32;
		int32_t L_33 = 0;
		V_4 = L_33;
		int32_t L_34 = 3;
		V_5 = L_34;
		Matrix4x4_t27 * L_35 = V_3;
		int32_t L_36 = V_4;
		int32_t L_37 = V_5;
		float L_38 = Matrix4x4_get_Item_m827(L_35, L_36, L_37, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_6 = L_38;
		float L_39 = V_6;
		Matrix4x4_set_Item_m828(L_32, L_33, L_34, ((float)((float)L_39*(float)(-1.0f))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		MutablePose3D_t90 * L_40 = (__this->___rightEyePose_3);
		Matrix4x4_t27  L_41 = V_2;
		NullCheck(L_40);
		MutablePose3D_Set_m296(L_40, L_41, /*hidden argument*/&MutablePose3D_Set_m296_MethodInfo);
		Matrix4x4_t27  L_42 = (__this->___leftEyeDistortedProjection_4);
		__this->___rightEyeDistortedProjection_5 = L_42;
		Matrix4x4_t27 * L_43 = &(__this->___rightEyeDistortedProjection_5);
		Matrix4x4_t27 * L_44 = L_43;
		V_7 = L_44;
		int32_t L_45 = 0;
		V_5 = L_45;
		int32_t L_46 = 2;
		V_4 = L_46;
		Matrix4x4_t27 * L_47 = V_7;
		int32_t L_48 = V_5;
		int32_t L_49 = V_4;
		float L_50 = Matrix4x4_get_Item_m827(L_47, L_48, L_49, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_6 = L_50;
		float L_51 = V_6;
		Matrix4x4_set_Item_m828(L_44, L_45, L_46, ((float)((float)L_51*(float)(-1.0f))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Matrix4x4_t27  L_52 = (__this->___leftEyeUndistortedProjection_6);
		__this->___rightEyeUndistortedProjection_7 = L_52;
		Matrix4x4_t27 * L_53 = &(__this->___rightEyeUndistortedProjection_7);
		Matrix4x4_t27 * L_54 = L_53;
		V_8 = L_54;
		int32_t L_55 = 0;
		V_4 = L_55;
		int32_t L_56 = 2;
		V_5 = L_56;
		Matrix4x4_t27 * L_57 = V_8;
		int32_t L_58 = V_4;
		int32_t L_59 = V_5;
		float L_60 = Matrix4x4_get_Item_m827(L_57, L_58, L_59, /*hidden argument*/&Matrix4x4_get_Item_m827_MethodInfo);
		V_6 = L_60;
		float L_61 = V_6;
		Matrix4x4_set_Item_m828(L_54, L_55, L_56, ((float)((float)L_61*(float)(-1.0f))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Rect_t62  L_62 = (__this->___leftEyeUndistortedViewport_10);
		__this->___rightEyeUndistortedViewport_11 = L_62;
		Rect_t62 * L_63 = &(__this->___rightEyeUndistortedViewport_11);
		Rect_t62 * L_64 = &(__this->___rightEyeUndistortedViewport_11);
		float L_65 = Rect_get_xMax_m920(L_64, /*hidden argument*/&Rect_get_xMax_m920_MethodInfo);
		Rect_set_x_m842(L_63, ((float)((float)(1.0f)-(float)L_65)), /*hidden argument*/&Rect_set_x_m842_MethodInfo);
		Rect_t62  L_66 = (__this->___rightEyeUndistortedViewport_11);
		__this->___rightEyeDistortedViewport_9 = L_66;
		return;
	}
}
// UnityEngine.Matrix4x4 BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Matrix4x4_t27  BaseVRDevice_MakeProjection_m342 (Object_t * __this /* static, unused */, float ___l, float ___t, float ___r, float ___b, float ___n, float ___f, MethodInfo* method)
{
	Matrix4x4_t27  V_0 = {0};
	{
		Matrix4x4_t27  L_0 = Matrix4x4_get_zero_m921(NULL /*static, unused*/, /*hidden argument*/&Matrix4x4_get_zero_m921_MethodInfo);
		V_0 = L_0;
		float L_1 = ___n;
		float L_2 = ___r;
		float L_3 = ___l;
		Matrix4x4_set_Item_m828((&V_0), 0, 0, ((float)((float)((float)((float)(2.0f)*(float)L_1))/(float)((float)((float)L_2-(float)L_3)))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		float L_4 = ___n;
		float L_5 = ___t;
		float L_6 = ___b;
		Matrix4x4_set_Item_m828((&V_0), 1, 1, ((float)((float)((float)((float)(2.0f)*(float)L_4))/(float)((float)((float)L_5-(float)L_6)))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		float L_7 = ___r;
		float L_8 = ___l;
		float L_9 = ___r;
		float L_10 = ___l;
		Matrix4x4_set_Item_m828((&V_0), 0, 2, ((float)((float)((float)((float)L_7+(float)L_8))/(float)((float)((float)L_9-(float)L_10)))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		float L_11 = ___t;
		float L_12 = ___b;
		float L_13 = ___t;
		float L_14 = ___b;
		Matrix4x4_set_Item_m828((&V_0), 1, 2, ((float)((float)((float)((float)L_11+(float)L_12))/(float)((float)((float)L_13-(float)L_14)))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		float L_15 = ___n;
		float L_16 = ___f;
		float L_17 = ___n;
		float L_18 = ___f;
		Matrix4x4_set_Item_m828((&V_0), 2, 2, ((float)((float)((float)((float)L_15+(float)L_16))/(float)((float)((float)L_17-(float)L_18)))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		float L_19 = ___n;
		float L_20 = ___f;
		float L_21 = ___n;
		float L_22 = ___f;
		Matrix4x4_set_Item_m828((&V_0), 2, 3, ((float)((float)((float)((float)((float)((float)(2.0f)*(float)L_19))*(float)L_20))/(float)((float)((float)L_21-(float)L_22)))), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Matrix4x4_set_Item_m828((&V_0), 3, 2, (-1.0f), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		Matrix4x4_t27  L_23 = V_0;
		return L_23;
	}
}
// BaseVRDevice BaseVRDevice::GetDevice()
extern "C" BaseVRDevice_t69 * BaseVRDevice_GetDevice_m343 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = ((BaseVRDevice_t69_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo)->static_fields)->___device_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		iOSVRDevice_t100 * L_1 = (iOSVRDevice_t100 *)il2cpp_codegen_object_new (InitializedTypeInfo(&iOSVRDevice_t100_il2cpp_TypeInfo));
		iOSVRDevice__ctor_m381(L_1, /*hidden argument*/&iOSVRDevice__ctor_m381_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo));
		((BaseVRDevice_t69_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo)->static_fields)->___device_0 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_2 = ((BaseVRDevice_t69_StaticFields*)InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo)->static_fields)->___device_0;
		return L_2;
	}
}
// VRDevice/VREventCallback
#include "AssemblyU2DCSharp_VRDevice_VREventCallback.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VREventCallback_t97_il2cpp_TypeInfo;
// VRDevice/VREventCallback
#include "AssemblyU2DCSharp_VRDevice_VREventCallbackMethodDeclarations.h"



// System.Void VRDevice/VREventCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo VREventCallback__ctor_m344_MethodInfo;
extern "C" void VREventCallback__ctor_m344 (VREventCallback_t97 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void VRDevice/VREventCallback::Invoke(System.Int32)
extern MethodInfo VREventCallback_Invoke_m345_MethodInfo;
extern "C" void VREventCallback_Invoke_m345 (VREventCallback_t97 * __this, int32_t ___eventID, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		VREventCallback_Invoke_m345((VREventCallback_t97 *)__this->___prev_9,___eventID, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___eventID, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___eventID,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___eventID, MethodInfo* method);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___eventID,(MethodInfo*)(__this->___method_3.___m_value_0));
}
extern "C" void pinvoke_delegate_wrapper_VREventCallback_t97(Il2CppObject* delegate, int32_t ___eventID)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___eventID' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___eventID);

	// Marshaling cleanup of parameter '___eventID' native representation

}
// System.IAsyncResult VRDevice/VREventCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo VREventCallback_BeginInvoke_m346_MethodInfo;
extern "C" Object_t * VREventCallback_BeginInvoke_m346 (VREventCallback_t97 * __this, int32_t ___eventID, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Int32_t96_il2cpp_TypeInfo), &___eventID);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void VRDevice/VREventCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo VREventCallback_EndInvoke_m347_MethodInfo;
extern "C" void VREventCallback_EndInvoke_m347 (VREventCallback_t97 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// VRDevice
#include "AssemblyU2DCSharp_VRDevice.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VRDevice_t99_il2cpp_TypeInfo;
// VRDevice
#include "AssemblyU2DCSharp_VRDeviceMethodDeclarations.h"

// System.Collections.Generic.Queue`1<System.Int32>
#include "System_System_Collections_Generic_Queue_1_gen.h"
extern TypeInfo Matrix4x4_t27_il2cpp_TypeInfo;
extern TypeInfo Queue_1_t98_il2cpp_TypeInfo;
// System.Collections.Generic.Queue`1<System.Int32>
#include "System_System_Collections_Generic_Queue_1_genMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
extern Il2CppType Queue_1_t98_0_0_0;
extern MethodInfo Queue_1__ctor_m922_MethodInfo;
extern MethodInfo VRDevice_EnableDistortionCorrection_m371_MethodInfo;
extern MethodInfo VRDevice_EnableAlignmentMarker_m372_MethodInfo;
extern MethodInfo VRDevice_EnableSettingsButton_m373_MethodInfo;
extern MethodInfo VRDevice_SetNeckModelFactor_m375_MethodInfo;
extern MethodInfo VRDevice_EnableAutoDriftCorrection_m374_MethodInfo;
extern MethodInfo Mathf_Max_m923_MethodInfo;
extern MethodInfo Mathf_Min_m924_MethodInfo;
extern MethodInfo VRDevice_Start_m368_MethodInfo;
extern MethodInfo VRDevice_OnVREvent_m367_MethodInfo;
extern MethodInfo VRDevice_SetEventCallback_m369_MethodInfo;
extern MethodInfo Texture_GetNativeTextureID_m925_MethodInfo;
extern MethodInfo VRDevice_SetTextureId_m370_MethodInfo;
extern MethodInfo Time_get_smoothDeltaTime_m926_MethodInfo;
extern MethodInfo VRDevice_GetHeadPose_m378_MethodInfo;
extern MethodInfo VRDevice_ExtractMatrix_m365_MethodInfo;
extern MethodInfo Matrix4x4_get_inverse_m927_MethodInfo;
extern MethodInfo VRDevice_UpdateProfile_m364_MethodInfo;
extern MethodInfo VRDevice_UpdateView_m363_MethodInfo;
extern MethodInfo VRDevice_ResetHeadTracker_m376_MethodInfo;
extern MethodInfo GL_IssuePluginEvent_m928_MethodInfo;
extern MethodInfo GL_InvalidateState_m929_MethodInfo;
extern MethodInfo VRDevice_ProcessEvents_m366_MethodInfo;
extern MethodInfo VRDevice_Stop_m380_MethodInfo;
extern MethodInfo VRDevice_GetViewParameters_m379_MethodInfo;
extern MethodInfo Rect_Set_m930_MethodInfo;
extern MethodInfo VRDevice_GetProfile_m377_MethodInfo;
extern MethodInfo Monitor_Enter_m931_MethodInfo;
extern MethodInfo Queue_1_get_Count_m932_MethodInfo;
extern MethodInfo Monitor_Exit_m933_MethodInfo;
extern MethodInfo VRDevice_UpdateScreenData_m359_MethodInfo;
extern MethodInfo VRDevice_LaunchSettingsDialog_m934_MethodInfo;
extern Il2CppGenericMethod Queue_1__ctor_m922_GenericMethod;
extern Il2CppGenericMethod Queue_1_get_Count_m932_GenericMethod;
extern Il2CppGenericMethod Queue_1_CopyTo_m935_GenericMethod;
extern Il2CppGenericMethod Queue_1_Clear_m936_GenericMethod;
extern Il2CppGenericMethod Queue_1_Enqueue_m937_GenericMethod;


// System.Void VRDevice::.ctor()
extern MethodInfo VRDevice__ctor_m348_MethodInfo;
extern TypeInfo* SingleU5BU5D_t25_il2cpp_TypeInfo_var;
extern TypeInfo* Queue_1_t98_il2cpp_TypeInfo_var;
extern MethodInfo* Queue_1__ctor_m922_MethodInfo_var;
extern "C" void VRDevice__ctor_m348 (VRDevice_t99 * __this, MethodInfo* method)
{
	static bool VRDevice__ctor_m348_init;
	if (!VRDevice__ctor_m348_init)
	{
		SingleU5BU5D_t25_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&SingleU5BU5D_t25_0_0_0);
		Queue_1_t98_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Queue_1_t98_0_0_0);
		Queue_1__ctor_m922_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1__ctor_m922_GenericMethod);
		VRDevice__ctor_m348_init = true;
	}
	Matrix4x4_t27  V_0 = {0};
	Matrix4x4_t27  V_1 = {0};
	Matrix4x4_t27  V_2 = {0};
	{
		__this->___headData_20 = ((SingleU5BU5D_t25*)SZArrayNew(SingleU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)16)));
		__this->___viewData_21 = ((SingleU5BU5D_t25*)SZArrayNew(SingleU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)104)));
		__this->___profileData_22 = ((SingleU5BU5D_t25*)SZArrayNew(SingleU5BU5D_t25_il2cpp_TypeInfo_var, ((int32_t)13)));
		Initobj (InitializedTypeInfo(&Matrix4x4_t27_il2cpp_TypeInfo), (&V_0));
		Matrix4x4_t27  L_0 = V_0;
		__this->___headView_23 = L_0;
		Initobj (InitializedTypeInfo(&Matrix4x4_t27_il2cpp_TypeInfo), (&V_1));
		Matrix4x4_t27  L_1 = V_1;
		__this->___leftEyeView_24 = L_1;
		Initobj (InitializedTypeInfo(&Matrix4x4_t27_il2cpp_TypeInfo), (&V_2));
		Matrix4x4_t27  L_2 = V_2;
		__this->___rightEyeView_25 = L_2;
		Queue_1_t98 * L_3 = (Queue_1_t98 *)il2cpp_codegen_object_new (Queue_1_t98_il2cpp_TypeInfo_var);
		Queue_1__ctor_m922(L_3, /*hidden argument*/Queue_1__ctor_m922_MethodInfo_var);
		__this->___eventQueue_26 = L_3;
		BaseVRDevice__ctor_m323(__this, /*hidden argument*/&BaseVRDevice__ctor_m323_MethodInfo);
		return;
	}
}
// System.Boolean VRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern MethodInfo VRDevice_SupportsNativeDistortionCorrection_m349_MethodInfo;
extern MethodInfo* List_1_Add_m913_MethodInfo_var;
extern "C" bool VRDevice_SupportsNativeDistortionCorrection_m349 (VRDevice_t99 * __this, List_1_t95 * ___diagnostics, MethodInfo* method)
{
	static bool VRDevice_SupportsNativeDistortionCorrection_m349_init;
	if (!VRDevice_SupportsNativeDistortionCorrection_m349_init)
	{
		List_1_Add_m913_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m913_GenericMethod);
		VRDevice_SupportsNativeDistortionCorrection_m349_init = true;
	}
	bool V_0 = false;
	{
		List_1_t95 * L_0 = ___diagnostics;
		bool L_1 = BaseVRDevice_SupportsNativeDistortionCorrection_m327(__this, L_0, /*hidden argument*/&BaseVRDevice_SupportsNativeDistortionCorrection_m327_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___debugDisableNativeDistortion_28);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = 0;
		List_1_t95 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m913_MethodInfo_var, L_3, (String_t*) &_stringLiteral65);
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean VRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern MethodInfo VRDevice_SupportsNativeUILayer_m350_MethodInfo;
extern MethodInfo* List_1_Add_m913_MethodInfo_var;
extern "C" bool VRDevice_SupportsNativeUILayer_m350 (VRDevice_t99 * __this, List_1_t95 * ___diagnostics, MethodInfo* method)
{
	static bool VRDevice_SupportsNativeUILayer_m350_init;
	if (!VRDevice_SupportsNativeUILayer_m350_init)
	{
		List_1_Add_m913_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m913_GenericMethod);
		VRDevice_SupportsNativeUILayer_m350_init = true;
	}
	bool V_0 = false;
	{
		List_1_t95 * L_0 = ___diagnostics;
		bool L_1 = BaseVRDevice_SupportsNativeUILayer_m328(__this, L_0, /*hidden argument*/&BaseVRDevice_SupportsNativeUILayer_m328_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___debugDisableNativeUILayer_29);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = 0;
		List_1_t95 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m913_MethodInfo_var, L_3, (String_t*) &_stringLiteral65);
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void VRDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern MethodInfo VRDevice_SetDistortionCorrectionEnabled_m351_MethodInfo;
extern "C" void VRDevice_SetDistortionCorrectionEnabled_m351 (VRDevice_t99 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		VRDevice_EnableDistortionCorrection_m371(NULL /*static, unused*/, L_0, /*hidden argument*/&VRDevice_EnableDistortionCorrection_m371_MethodInfo);
		return;
	}
}
// System.Void VRDevice::SetAlignmentMarkerEnabled(System.Boolean)
extern MethodInfo VRDevice_SetAlignmentMarkerEnabled_m352_MethodInfo;
extern "C" void VRDevice_SetAlignmentMarkerEnabled_m352 (VRDevice_t99 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		VRDevice_EnableAlignmentMarker_m372(NULL /*static, unused*/, L_0, /*hidden argument*/&VRDevice_EnableAlignmentMarker_m372_MethodInfo);
		return;
	}
}
// System.Void VRDevice::SetSettingsButtonEnabled(System.Boolean)
extern MethodInfo VRDevice_SetSettingsButtonEnabled_m353_MethodInfo;
extern "C" void VRDevice_SetSettingsButtonEnabled_m353 (VRDevice_t99 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		VRDevice_EnableSettingsButton_m373(NULL /*static, unused*/, L_0, /*hidden argument*/&VRDevice_EnableSettingsButton_m373_MethodInfo);
		return;
	}
}
// System.Void VRDevice::SetNeckModelScale(System.Single)
extern MethodInfo VRDevice_SetNeckModelScale_m354_MethodInfo;
extern "C" void VRDevice_SetNeckModelScale_m354 (VRDevice_t99 * __this, float ___scale, MethodInfo* method)
{
	{
		float L_0 = ___scale;
		VRDevice_SetNeckModelFactor_m375(NULL /*static, unused*/, L_0, /*hidden argument*/&VRDevice_SetNeckModelFactor_m375_MethodInfo);
		return;
	}
}
// System.Void VRDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern MethodInfo VRDevice_SetAutoDriftCorrectionEnabled_m355_MethodInfo;
extern "C" void VRDevice_SetAutoDriftCorrectionEnabled_m355 (VRDevice_t99 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		VRDevice_EnableAutoDriftCorrection_m374(NULL /*static, unused*/, L_0, /*hidden argument*/&VRDevice_EnableAutoDriftCorrection_m374_MethodInfo);
		return;
	}
}
// System.Void VRDevice::Init()
extern MethodInfo VRDevice_Init_m356_MethodInfo;
extern "C" void VRDevice_Init_m356 (VRDevice_t99 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_1 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Mathf_t170_il2cpp_TypeInfo));
		int32_t L_2 = Mathf_Max_m923(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&Mathf_Max_m923_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		int32_t L_4 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_5 = Mathf_Min_m924(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/&Mathf_Min_m924_MethodInfo);
		V_1 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		float L_8 = Screen_get_dpi_m882(NULL /*static, unused*/, /*hidden argument*/&Screen_get_dpi_m882_MethodInfo);
		float L_9 = Screen_get_dpi_m882(NULL /*static, unused*/, /*hidden argument*/&Screen_get_dpi_m882_MethodInfo);
		VRDevice_Start_m368(NULL /*static, unused*/, L_6, L_7, L_8, L_9, /*hidden argument*/&VRDevice_Start_m368_MethodInfo);
		IntPtr_t L_10 = { &VRDevice_OnVREvent_m367_MethodInfo };
		VREventCallback_t97 * L_11 = (VREventCallback_t97 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VREventCallback_t97_il2cpp_TypeInfo));
		VREventCallback__ctor_m344(L_11, NULL, L_10, /*hidden argument*/&VREventCallback__ctor_m344_MethodInfo);
		VRDevice_SetEventCallback_m369(NULL /*static, unused*/, L_11, /*hidden argument*/&VRDevice_SetEventCallback_m369_MethodInfo);
		return;
	}
}
// System.Void VRDevice::SetStereoScreen(UnityEngine.RenderTexture)
extern MethodInfo VRDevice_SetStereoScreen_m357_MethodInfo;
extern "C" void VRDevice_SetStereoScreen_m357 (VRDevice_t99 * __this, RenderTexture_t56 * ___stereoScreen, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		RenderTexture_t56 * L_0 = ___stereoScreen;
		bool L_1 = Object_op_Inequality_m527(NULL /*static, unused*/, L_0, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RenderTexture_t56 * L_2 = ___stereoScreen;
		NullCheck(L_2);
		int32_t L_3 = Texture_GetNativeTextureID_m925(L_2, /*hidden argument*/&Texture_GetNativeTextureID_m925_MethodInfo);
		G_B3_0 = L_3;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		VRDevice_SetTextureId_m370(NULL /*static, unused*/, G_B3_0, /*hidden argument*/&VRDevice_SetTextureId_m370_MethodInfo);
		return;
	}
}
// System.Void VRDevice::UpdateState()
extern MethodInfo VRDevice_UpdateState_m358_MethodInfo;
extern "C" void VRDevice_UpdateState_m358 (VRDevice_t99 * __this, MethodInfo* method)
{
	{
		SingleU5BU5D_t25* L_0 = (__this->___headData_20);
		float L_1 = Time_get_smoothDeltaTime_m926(NULL /*static, unused*/, /*hidden argument*/&Time_get_smoothDeltaTime_m926_MethodInfo);
		VRDevice_GetHeadPose_m378(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&VRDevice_GetHeadPose_m378_MethodInfo);
		Matrix4x4_t27 * L_2 = &(__this->___headView_23);
		SingleU5BU5D_t25* L_3 = (__this->___headData_20);
		VRDevice_ExtractMatrix_m365(NULL /*static, unused*/, L_2, L_3, 0, /*hidden argument*/&VRDevice_ExtractMatrix_m365_MethodInfo);
		MutablePose3D_t90 * L_4 = (__this->___headPose_1);
		Matrix4x4_t27 * L_5 = &(__this->___headView_23);
		Matrix4x4_t27  L_6 = Matrix4x4_get_inverse_m927(L_5, /*hidden argument*/&Matrix4x4_get_inverse_m927_MethodInfo);
		NullCheck(L_4);
		MutablePose3D_SetRightHanded_m297(L_4, L_6, /*hidden argument*/&MutablePose3D_SetRightHanded_m297_MethodInfo);
		return;
	}
}
// System.Void VRDevice::UpdateScreenData()
extern "C" void VRDevice_UpdateScreenData_m359 (VRDevice_t99 * __this, MethodInfo* method)
{
	{
		VRDevice_UpdateProfile_m364(__this, /*hidden argument*/&VRDevice_UpdateProfile_m364_MethodInfo);
		bool L_0 = (__this->___debugDisableNativeProjections_27);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		BaseVRDevice_ComputeEyesFromProfile_m341(__this, /*hidden argument*/&BaseVRDevice_ComputeEyesFromProfile_m341_MethodInfo);
		goto IL_0022;
	}

IL_001c:
	{
		VRDevice_UpdateView_m363(__this, /*hidden argument*/&VRDevice_UpdateView_m363_MethodInfo);
	}

IL_0022:
	{
		return;
	}
}
// System.Void VRDevice::Recenter()
extern MethodInfo VRDevice_Recenter_m360_MethodInfo;
extern "C" void VRDevice_Recenter_m360 (VRDevice_t99 * __this, MethodInfo* method)
{
	{
		VRDevice_ResetHeadTracker_m376(NULL /*static, unused*/, /*hidden argument*/&VRDevice_ResetHeadTracker_m376_MethodInfo);
		return;
	}
}
// System.Void VRDevice::PostRender(System.Boolean)
extern MethodInfo VRDevice_PostRender_m361_MethodInfo;
extern "C" void VRDevice_PostRender_m361 (VRDevice_t99 * __this, bool ___vrMode, MethodInfo* method)
{
	{
		bool L_0 = ___vrMode;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GL_IssuePluginEvent_m928(NULL /*static, unused*/, 0, /*hidden argument*/&GL_IssuePluginEvent_m928_MethodInfo);
		GL_InvalidateState_m929(NULL /*static, unused*/, /*hidden argument*/&GL_InvalidateState_m929_MethodInfo);
	}

IL_0011:
	{
		VirtActionInvoker0::Invoke(&VRDevice_ProcessEvents_m366_MethodInfo, __this);
		return;
	}
}
// System.Void VRDevice::OnApplicationQuit()
extern MethodInfo VRDevice_OnApplicationQuit_m362_MethodInfo;
extern "C" void VRDevice_OnApplicationQuit_m362 (VRDevice_t99 * __this, MethodInfo* method)
{
	{
		VRDevice_Stop_m380(NULL /*static, unused*/, /*hidden argument*/&VRDevice_Stop_m380_MethodInfo);
		BaseVRDevice_OnApplicationQuit_m339(__this, /*hidden argument*/&BaseVRDevice_OnApplicationQuit_m339_MethodInfo);
		return;
	}
}
// System.Void VRDevice::UpdateView()
extern "C" void VRDevice_UpdateView_m363 (VRDevice_t99 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		SingleU5BU5D_t25* L_0 = (__this->___viewData_21);
		VRDevice_GetViewParameters_m379(NULL /*static, unused*/, L_0, /*hidden argument*/&VRDevice_GetViewParameters_m379_MethodInfo);
		V_0 = 0;
		Matrix4x4_t27 * L_1 = &(__this->___leftEyeView_24);
		SingleU5BU5D_t25* L_2 = (__this->___viewData_21);
		int32_t L_3 = V_0;
		int32_t L_4 = VRDevice_ExtractMatrix_m365(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/&VRDevice_ExtractMatrix_m365_MethodInfo);
		V_0 = L_4;
		Matrix4x4_t27 * L_5 = &(__this->___rightEyeView_25);
		SingleU5BU5D_t25* L_6 = (__this->___viewData_21);
		int32_t L_7 = V_0;
		int32_t L_8 = VRDevice_ExtractMatrix_m365(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/&VRDevice_ExtractMatrix_m365_MethodInfo);
		V_0 = L_8;
		MutablePose3D_t90 * L_9 = (__this->___leftEyePose_2);
		Matrix4x4_t27 * L_10 = &(__this->___leftEyeView_24);
		Matrix4x4_t27  L_11 = Matrix4x4_get_inverse_m927(L_10, /*hidden argument*/&Matrix4x4_get_inverse_m927_MethodInfo);
		NullCheck(L_9);
		MutablePose3D_SetRightHanded_m297(L_9, L_11, /*hidden argument*/&MutablePose3D_SetRightHanded_m297_MethodInfo);
		MutablePose3D_t90 * L_12 = (__this->___rightEyePose_3);
		Matrix4x4_t27 * L_13 = &(__this->___rightEyeView_25);
		Matrix4x4_t27  L_14 = Matrix4x4_get_inverse_m927(L_13, /*hidden argument*/&Matrix4x4_get_inverse_m927_MethodInfo);
		NullCheck(L_12);
		MutablePose3D_SetRightHanded_m297(L_12, L_14, /*hidden argument*/&MutablePose3D_SetRightHanded_m297_MethodInfo);
		Matrix4x4_t27 * L_15 = &(__this->___leftEyeDistortedProjection_4);
		SingleU5BU5D_t25* L_16 = (__this->___viewData_21);
		int32_t L_17 = V_0;
		int32_t L_18 = VRDevice_ExtractMatrix_m365(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/&VRDevice_ExtractMatrix_m365_MethodInfo);
		V_0 = L_18;
		Matrix4x4_t27 * L_19 = &(__this->___rightEyeDistortedProjection_5);
		SingleU5BU5D_t25* L_20 = (__this->___viewData_21);
		int32_t L_21 = V_0;
		int32_t L_22 = VRDevice_ExtractMatrix_m365(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/&VRDevice_ExtractMatrix_m365_MethodInfo);
		V_0 = L_22;
		Matrix4x4_t27 * L_23 = &(__this->___leftEyeUndistortedProjection_6);
		SingleU5BU5D_t25* L_24 = (__this->___viewData_21);
		int32_t L_25 = V_0;
		int32_t L_26 = VRDevice_ExtractMatrix_m365(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/&VRDevice_ExtractMatrix_m365_MethodInfo);
		V_0 = L_26;
		Matrix4x4_t27 * L_27 = &(__this->___rightEyeUndistortedProjection_7);
		SingleU5BU5D_t25* L_28 = (__this->___viewData_21);
		int32_t L_29 = V_0;
		int32_t L_30 = VRDevice_ExtractMatrix_m365(NULL /*static, unused*/, L_27, L_28, L_29, /*hidden argument*/&VRDevice_ExtractMatrix_m365_MethodInfo);
		V_0 = L_30;
		Rect_t62 * L_31 = &(__this->___leftEyeUndistortedViewport_10);
		SingleU5BU5D_t25* L_32 = (__this->___viewData_21);
		int32_t L_33 = V_0;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = L_33;
		SingleU5BU5D_t25* L_35 = (__this->___viewData_21);
		int32_t L_36 = V_0;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)));
		int32_t L_37 = ((int32_t)((int32_t)L_36+(int32_t)1));
		SingleU5BU5D_t25* L_38 = (__this->___viewData_21);
		int32_t L_39 = V_0;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)((int32_t)L_39+(int32_t)2)));
		int32_t L_40 = ((int32_t)((int32_t)L_39+(int32_t)2));
		SingleU5BU5D_t25* L_41 = (__this->___viewData_21);
		int32_t L_42 = V_0;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)((int32_t)L_42+(int32_t)3)));
		int32_t L_43 = ((int32_t)((int32_t)L_42+(int32_t)3));
		Rect_Set_m930(L_31, (*(float*)(float*)SZArrayLdElema(L_32, L_34)), (*(float*)(float*)SZArrayLdElema(L_35, L_37)), (*(float*)(float*)SZArrayLdElema(L_38, L_40)), (*(float*)(float*)SZArrayLdElema(L_41, L_43)), /*hidden argument*/&Rect_Set_m930_MethodInfo);
		Rect_t62  L_44 = (__this->___leftEyeUndistortedViewport_10);
		__this->___leftEyeDistortedViewport_8 = L_44;
		int32_t L_45 = V_0;
		V_0 = ((int32_t)((int32_t)L_45+(int32_t)4));
		Rect_t62 * L_46 = &(__this->___rightEyeUndistortedViewport_11);
		SingleU5BU5D_t25* L_47 = (__this->___viewData_21);
		int32_t L_48 = V_0;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		int32_t L_49 = L_48;
		SingleU5BU5D_t25* L_50 = (__this->___viewData_21);
		int32_t L_51 = V_0;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, ((int32_t)((int32_t)L_51+(int32_t)1)));
		int32_t L_52 = ((int32_t)((int32_t)L_51+(int32_t)1));
		SingleU5BU5D_t25* L_53 = (__this->___viewData_21);
		int32_t L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, ((int32_t)((int32_t)L_54+(int32_t)2)));
		int32_t L_55 = ((int32_t)((int32_t)L_54+(int32_t)2));
		SingleU5BU5D_t25* L_56 = (__this->___viewData_21);
		int32_t L_57 = V_0;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)((int32_t)L_57+(int32_t)3)));
		int32_t L_58 = ((int32_t)((int32_t)L_57+(int32_t)3));
		Rect_Set_m930(L_46, (*(float*)(float*)SZArrayLdElema(L_47, L_49)), (*(float*)(float*)SZArrayLdElema(L_50, L_52)), (*(float*)(float*)SZArrayLdElema(L_53, L_55)), (*(float*)(float*)SZArrayLdElema(L_56, L_58)), /*hidden argument*/&Rect_Set_m930_MethodInfo);
		Rect_t62  L_59 = (__this->___rightEyeUndistortedViewport_11);
		__this->___rightEyeDistortedViewport_9 = L_59;
		int32_t L_60 = V_0;
		V_0 = ((int32_t)((int32_t)L_60+(int32_t)4));
		return;
	}
}
// System.Void VRDevice::UpdateProfile()
extern "C" void VRDevice_UpdateProfile_m364 (VRDevice_t99 * __this, MethodInfo* method)
{
	Device_t83  V_0 = {0};
	Screen_t79  V_1 = {0};
	{
		SingleU5BU5D_t25* L_0 = (__this->___profileData_22);
		VRDevice_GetProfile_m377(NULL /*static, unused*/, L_0, /*hidden argument*/&VRDevice_GetProfile_m377_MethodInfo);
		Initobj (InitializedTypeInfo(&Device_t83_il2cpp_TypeInfo), (&V_0));
		Initobj (InitializedTypeInfo(&Screen_t79_il2cpp_TypeInfo), (&V_1));
		MaxFOV_t81 * L_1 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t25* L_2 = (__this->___profileData_22);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		L_1->___outer_0 = (*(float*)(float*)SZArrayLdElema(L_2, L_3));
		MaxFOV_t81 * L_4 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t25* L_5 = (__this->___profileData_22);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		L_4->___upper_2 = (*(float*)(float*)SZArrayLdElema(L_5, L_6));
		MaxFOV_t81 * L_7 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t25* L_8 = (__this->___profileData_22);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		int32_t L_9 = 2;
		L_7->___inner_1 = (*(float*)(float*)SZArrayLdElema(L_8, L_9));
		MaxFOV_t81 * L_10 = &((&V_0)->___maxFOV_1);
		SingleU5BU5D_t25* L_11 = (__this->___profileData_22);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 3);
		int32_t L_12 = 3;
		L_10->___lower_3 = (*(float*)(float*)SZArrayLdElema(L_11, L_12));
		SingleU5BU5D_t25* L_13 = (__this->___profileData_22);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		int32_t L_14 = 4;
		(&V_1)->___width_0 = (*(float*)(float*)SZArrayLdElema(L_13, L_14));
		SingleU5BU5D_t25* L_15 = (__this->___profileData_22);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 5);
		int32_t L_16 = 5;
		(&V_1)->___height_1 = (*(float*)(float*)SZArrayLdElema(L_15, L_16));
		SingleU5BU5D_t25* L_17 = (__this->___profileData_22);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 6);
		int32_t L_18 = 6;
		(&V_1)->___border_2 = (*(float*)(float*)SZArrayLdElema(L_17, L_18));
		Lenses_t80 * L_19 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t25* L_20 = (__this->___profileData_22);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 7);
		int32_t L_21 = 7;
		L_19->___separation_3 = (*(float*)(float*)SZArrayLdElema(L_20, L_21));
		Lenses_t80 * L_22 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t25* L_23 = (__this->___profileData_22);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 8);
		int32_t L_24 = 8;
		L_22->___offset_4 = (*(float*)(float*)SZArrayLdElema(L_23, L_24));
		Lenses_t80 * L_25 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t25* L_26 = (__this->___profileData_22);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)9));
		int32_t L_27 = ((int32_t)9);
		L_25->___screenDistance_5 = (*(float*)(float*)SZArrayLdElema(L_26, L_27));
		Lenses_t80 * L_28 = &((&V_0)->___lenses_0);
		SingleU5BU5D_t25* L_29 = (__this->___profileData_22);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)10));
		int32_t L_30 = ((int32_t)10);
		L_28->___alignment_6 = (((int32_t)(*(float*)(float*)SZArrayLdElema(L_29, L_30))));
		Distortion_t82 * L_31 = &((&V_0)->___distortion_2);
		SingleU5BU5D_t25* L_32 = (__this->___profileData_22);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)11));
		int32_t L_33 = ((int32_t)11);
		L_31->___k1_0 = (*(float*)(float*)SZArrayLdElema(L_32, L_33));
		Distortion_t82 * L_34 = &((&V_0)->___distortion_2);
		SingleU5BU5D_t25* L_35 = (__this->___profileData_22);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)12));
		int32_t L_36 = ((int32_t)12);
		L_34->___k2_1 = (*(float*)(float*)SZArrayLdElema(L_35, L_36));
		Distortion_t82  L_37 = ((&V_0)->___distortion_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CardboardProfile_t72_il2cpp_TypeInfo));
		Distortion_t82  L_38 = CardboardProfile_ApproximateInverse_m266(NULL /*static, unused*/, L_37, (1.0f), ((int32_t)10), /*hidden argument*/&CardboardProfile_ApproximateInverse_m266_MethodInfo);
		(&V_0)->___inverse_3 = L_38;
		CardboardProfile_t72 * L_39 = BaseVRDevice_get_Profile_m325(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m325_MethodInfo);
		Screen_t79  L_40 = V_1;
		NullCheck(L_39);
		L_39->___screen_0 = L_40;
		CardboardProfile_t72 * L_41 = BaseVRDevice_get_Profile_m325(__this, /*hidden argument*/&BaseVRDevice_get_Profile_m325_MethodInfo);
		Device_t83  L_42 = V_0;
		NullCheck(L_41);
		L_41->___device_1 = L_42;
		return;
	}
}
// System.Int32 VRDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C" int32_t VRDevice_ExtractMatrix_m365 (Object_t * __this /* static, unused */, Matrix4x4_t27 * ___mat, SingleU5BU5D_t25* ___data, int32_t ___i, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_002d;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_0022;
	}

IL_000e:
	{
		Matrix4x4_t27 * L_0 = ___mat;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		SingleU5BU5D_t25* L_3 = ___data;
		int32_t L_4 = ___i;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		Matrix4x4_set_Item_m828(L_0, L_1, L_2, (*(float*)(float*)SZArrayLdElema(L_3, L_5)), /*hidden argument*/&Matrix4x4_set_Item_m828_MethodInfo);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = ___i;
		___i = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_11 = ___i;
		return L_11;
	}
}
// System.Void VRDevice::LaunchSettingsDialog()
// System.Void VRDevice::ProcessEvents()
extern TypeInfo* Int32U5BU5D_t34_il2cpp_TypeInfo_var;
extern MethodInfo* Queue_1_get_Count_m932_MethodInfo_var;
extern MethodInfo* Queue_1_CopyTo_m935_MethodInfo_var;
extern MethodInfo* Queue_1_Clear_m936_MethodInfo_var;
extern "C" void VRDevice_ProcessEvents_m366 (VRDevice_t99 * __this, MethodInfo* method)
{
	static bool VRDevice_ProcessEvents_m366_init;
	if (!VRDevice_ProcessEvents_m366_init)
	{
		Int32U5BU5D_t34_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Int32U5BU5D_t34_0_0_0);
		Queue_1_get_Count_m932_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1_get_Count_m932_GenericMethod);
		Queue_1_CopyTo_m935_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1_CopyTo_m935_GenericMethod);
		Queue_1_Clear_m936_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1_Clear_m936_GenericMethod);
		VRDevice_ProcessEvents_m366_init = true;
	}
	Int32U5BU5D_t34* V_0 = {0};
	Queue_1_t98 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t34* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Int32U5BU5D_t34*)NULL;
		Queue_1_t98 * L_0 = (__this->___eventQueue_26);
		V_1 = L_0;
		Queue_1_t98 * L_1 = V_1;
		Monitor_Enter_m931(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m931_MethodInfo);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t98 * L_2 = (__this->___eventQueue_26);
			NullCheck(L_2);
			int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(Queue_1_get_Count_m932_MethodInfo_var, L_2);
			V_2 = L_3;
			int32_t L_4 = V_2;
			if ((((int32_t)L_4) <= ((int32_t)0)))
			{
				goto IL_0041;
			}
		}

IL_0022:
		{
			int32_t L_5 = V_2;
			V_0 = ((Int32U5BU5D_t34*)SZArrayNew(Int32U5BU5D_t34_il2cpp_TypeInfo_var, L_5));
			Queue_1_t98 * L_6 = (__this->___eventQueue_26);
			Int32U5BU5D_t34* L_7 = V_0;
			NullCheck(L_6);
			Queue_1_CopyTo_m935(L_6, L_7, 0, /*hidden argument*/Queue_1_CopyTo_m935_MethodInfo_var);
			Queue_1_t98 * L_8 = (__this->___eventQueue_26);
			NullCheck(L_8);
			Queue_1_Clear_m936(L_8, /*hidden argument*/Queue_1_Clear_m936_MethodInfo_var);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Queue_1_t98 * L_9 = V_1;
		Monitor_Exit_m933(NULL /*static, unused*/, L_9, /*hidden argument*/&Monitor_Exit_m933_MethodInfo);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_004d:
	{
		Int32U5BU5D_t34* L_10 = V_0;
		if (L_10)
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0054:
	{
		Int32U5BU5D_t34* L_11 = V_0;
		V_4 = L_11;
		V_5 = 0;
		goto IL_00ba;
	}

IL_005f:
	{
		Int32U5BU5D_t34* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
		int32_t L_15 = V_3;
		V_6 = L_15;
		int32_t L_16 = V_6;
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 0)
		{
			goto IL_0086;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 1)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 2)
		{
			goto IL_009e;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)1)) == 3)
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00b4;
	}

IL_0086:
	{
		__this->___triggered_12 = 1;
		goto IL_00b4;
	}

IL_0092:
	{
		__this->___tilted_13 = 1;
		goto IL_00b4;
	}

IL_009e:
	{
		VirtActionInvoker0::Invoke(&VRDevice_UpdateScreenData_m359_MethodInfo, __this);
		goto IL_00b4;
	}

IL_00a9:
	{
		VirtActionInvoker0::Invoke(&VRDevice_LaunchSettingsDialog_m934_MethodInfo, __this);
		goto IL_00b4;
	}

IL_00b4:
	{
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_18 = V_5;
		Int32U5BU5D_t34* L_19 = V_4;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)(((Array_t *)L_19)->max_length))))))
		{
			goto IL_005f;
		}
	}
	{
		return;
	}
}
// System.Void VRDevice::OnVREvent(System.Int32)
void STDCALL native_delegate_wrapper_VRDevice_OnVREvent_m367(int32_t ___eventID)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	// Marshaling of parameter '___eventID' to managed representation

	VRDevice_OnVREvent_m367(NULL, ___eventID, &VRDevice_OnVREvent_m367_MethodInfo);

	// Marshaling of parameter '___eventID' to native representation

}
extern MethodInfo* Queue_1_Enqueue_m937_MethodInfo_var;
extern "C" void VRDevice_OnVREvent_m367 (Object_t * __this /* static, unused */, int32_t ___eventID, MethodInfo* method)
{
	static bool VRDevice_OnVREvent_m367_init;
	if (!VRDevice_OnVREvent_m367_init)
	{
		Queue_1_Enqueue_m937_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Queue_1_Enqueue_m937_GenericMethod);
		VRDevice_OnVREvent_m367_init = true;
	}
	VRDevice_t99 * V_0 = {0};
	Queue_1_t98 * V_1 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&BaseVRDevice_t69_il2cpp_TypeInfo));
		BaseVRDevice_t69 * L_0 = BaseVRDevice_GetDevice_m343(NULL /*static, unused*/, /*hidden argument*/&BaseVRDevice_GetDevice_m343_MethodInfo);
		V_0 = ((VRDevice_t99 *)IsInst(L_0, InitializedTypeInfo(&VRDevice_t99_il2cpp_TypeInfo)));
		VRDevice_t99 * L_1 = V_0;
		NullCheck(L_1);
		Queue_1_t98 * L_2 = (L_1->___eventQueue_26);
		V_1 = L_2;
		Queue_1_t98 * L_3 = V_1;
		Monitor_Enter_m931(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Enter_m931_MethodInfo);
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		VRDevice_t99 * L_4 = V_0;
		NullCheck(L_4);
		Queue_1_t98 * L_5 = (L_4->___eventQueue_26);
		int32_t L_6 = ___eventID;
		NullCheck(L_5);
		Queue_1_Enqueue_m937(L_5, L_6, /*hidden argument*/Queue_1_Enqueue_m937_MethodInfo_var);
		IL2CPP_LEAVE(0x30, FINALLY_0029);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		Queue_1_t98 * L_7 = V_1;
		Monitor_Exit_m933(NULL /*static, unused*/, L_7, /*hidden argument*/&Monitor_Exit_m933_MethodInfo);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_JUMP_TBL(0x30, IL_0030)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_0030:
	{
		return;
	}
}
// System.Void VRDevice::Start(System.Int32,System.Int32,System.Single,System.Single)
extern "C" {void DEFAULT_CALL Start(int32_t, int32_t, float, float);}
extern "C" void VRDevice_Start_m368 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, float ___xdpi, float ___ydpi, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, float, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)Start;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Start'"));
		}
	}

	// Marshaling of parameter '___width' to native representation

	// Marshaling of parameter '___height' to native representation

	// Marshaling of parameter '___xdpi' to native representation

	// Marshaling of parameter '___ydpi' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___width, ___height, ___xdpi, ___ydpi);

	// Marshaling cleanup of parameter '___width' native representation

	// Marshaling cleanup of parameter '___height' native representation

	// Marshaling cleanup of parameter '___xdpi' native representation

	// Marshaling cleanup of parameter '___ydpi' native representation

}
// System.Void VRDevice::SetEventCallback(VRDevice/VREventCallback)
extern TypeInfo VREventCallback_t97_il2cpp_TypeInfo;
extern "C" {void DEFAULT_CALL SetEventCallback(methodPointerType);}
extern TypeInfo VREventCallback_t97_il2cpp_TypeInfo;
extern "C" void VRDevice_SetEventCallback_m369 (Object_t * __this /* static, unused */, VREventCallback_t97 * ___callback, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetEventCallback;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetEventCallback'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void VRDevice::SetTextureId(System.Int32)
extern "C" {void DEFAULT_CALL SetTextureId(int32_t);}
extern "C" void VRDevice_SetTextureId_m370 (Object_t * __this /* static, unused */, int32_t ___id, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetTextureId;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetTextureId'"));
		}
	}

	// Marshaling of parameter '___id' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___id);

	// Marshaling cleanup of parameter '___id' native representation

}
// System.Void VRDevice::EnableDistortionCorrection(System.Boolean)
extern "C" {void DEFAULT_CALL EnableDistortionCorrection(int32_t);}
extern "C" void VRDevice_EnableDistortionCorrection_m371 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableDistortionCorrection;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableDistortionCorrection'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void VRDevice::EnableAlignmentMarker(System.Boolean)
extern "C" {void DEFAULT_CALL EnableAlignmentMarker(int32_t);}
extern "C" void VRDevice_EnableAlignmentMarker_m372 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableAlignmentMarker;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableAlignmentMarker'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void VRDevice::EnableSettingsButton(System.Boolean)
extern "C" {void DEFAULT_CALL EnableSettingsButton(int32_t);}
extern "C" void VRDevice_EnableSettingsButton_m373 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableSettingsButton;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableSettingsButton'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void VRDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C" {void DEFAULT_CALL EnableAutoDriftCorrection(int32_t);}
extern "C" void VRDevice_EnableAutoDriftCorrection_m374 (Object_t * __this /* static, unused */, bool ___enable, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)EnableAutoDriftCorrection;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'EnableAutoDriftCorrection'"));
		}
	}

	// Marshaling of parameter '___enable' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enable);

	// Marshaling cleanup of parameter '___enable' native representation

}
// System.Void VRDevice::SetNeckModelFactor(System.Single)
extern "C" {void DEFAULT_CALL SetNeckModelFactor(float);}
extern "C" void VRDevice_SetNeckModelFactor_m375 (Object_t * __this /* static, unused */, float ___factor, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)SetNeckModelFactor;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetNeckModelFactor'"));
		}
	}

	// Marshaling of parameter '___factor' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___factor);

	// Marshaling cleanup of parameter '___factor' native representation

}
// System.Void VRDevice::ResetHeadTracker()
extern "C" {void DEFAULT_CALL ResetHeadTracker();}
extern "C" void VRDevice_ResetHeadTracker_m376 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)ResetHeadTracker;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ResetHeadTracker'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void VRDevice::GetProfile(System.Single[])
extern "C" {void DEFAULT_CALL GetProfile(float*);}
extern "C" void VRDevice_GetProfile_m377 (Object_t * __this /* static, unused */, SingleU5BU5D_t25* ___profile, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetProfile'"));
		}
	}

	// Marshaling of parameter '___profile' to native representation
	float* ____profile_marshaled = { 0 };
	____profile_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___profile);

	// Native function invocation
	_il2cpp_pinvoke_func(____profile_marshaled);

	// Marshaling cleanup of parameter '___profile' native representation

}
// System.Void VRDevice::GetHeadPose(System.Single[],System.Single)
extern "C" {void DEFAULT_CALL GetHeadPose(float*, float);}
extern "C" void VRDevice_GetHeadPose_m378 (Object_t * __this /* static, unused */, SingleU5BU5D_t25* ___pose, float ___fps, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetHeadPose;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetHeadPose'"));
		}
	}

	// Marshaling of parameter '___pose' to native representation
	float* ____pose_marshaled = { 0 };
	____pose_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___pose);

	// Marshaling of parameter '___fps' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____pose_marshaled, ___fps);

	// Marshaling cleanup of parameter '___pose' native representation

	// Marshaling cleanup of parameter '___fps' native representation

}
// System.Void VRDevice::GetViewParameters(System.Single[])
extern "C" {void DEFAULT_CALL GetViewParameters(float*);}
extern "C" void VRDevice_GetViewParameters_m379 (Object_t * __this /* static, unused */, SingleU5BU5D_t25* ___viewParams, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)GetViewParameters;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetViewParameters'"));
		}
	}

	// Marshaling of parameter '___viewParams' to native representation
	float* ____viewParams_marshaled = { 0 };
	____viewParams_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___viewParams);

	// Native function invocation
	_il2cpp_pinvoke_func(____viewParams_marshaled);

	// Marshaling cleanup of parameter '___viewParams' native representation

}
// System.Void VRDevice::Stop()
extern "C" {void DEFAULT_CALL Stop();}
extern "C" void VRDevice_Stop_m380 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)Stop;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Stop'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo iOSVRDevice_setVRModeEnabled_m391_MethodInfo;
extern MethodInfo iOSVRDevice_isOpenGLAPI_m390_MethodInfo;
extern MethodInfo iOSVRDevice_setSyncWithCardboardEnabled_m392_MethodInfo;
extern MethodInfo iOSVRDevice_isOnboardingDone_m394_MethodInfo;
extern MethodInfo iOSVRDevice_launchOnboardingDialog_m395_MethodInfo;
extern MethodInfo iOSVRDevice_readProfile_m393_MethodInfo;
extern MethodInfo iOSVRDevice_launchSettingsDialog_m396_MethodInfo;


// System.Void iOSVRDevice::.ctor()
extern "C" void iOSVRDevice__ctor_m381 (iOSVRDevice_t100 * __this, MethodInfo* method)
{
	{
		VRDevice__ctor_m348(__this, /*hidden argument*/&VRDevice__ctor_m348_MethodInfo);
		return;
	}
}
// System.Boolean iOSVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern MethodInfo iOSVRDevice_SupportsNativeDistortionCorrection_m382_MethodInfo;
extern MethodInfo* List_1_Add_m913_MethodInfo_var;
extern "C" bool iOSVRDevice_SupportsNativeDistortionCorrection_m382 (iOSVRDevice_t100 * __this, List_1_t95 * ___diagnostics, MethodInfo* method)
{
	static bool iOSVRDevice_SupportsNativeDistortionCorrection_m382_init;
	if (!iOSVRDevice_SupportsNativeDistortionCorrection_m382_init)
	{
		List_1_Add_m913_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m913_GenericMethod);
		iOSVRDevice_SupportsNativeDistortionCorrection_m382_init = true;
	}
	bool V_0 = false;
	{
		List_1_t95 * L_0 = ___diagnostics;
		bool L_1 = VRDevice_SupportsNativeDistortionCorrection_m349(__this, L_0, /*hidden argument*/&VRDevice_SupportsNativeDistortionCorrection_m349_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___isOpenGL_30);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t95 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m913_MethodInfo_var, L_3, (String_t*) &_stringLiteral66);
		V_0 = 0;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean iOSVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern MethodInfo iOSVRDevice_SupportsNativeUILayer_m383_MethodInfo;
extern MethodInfo* List_1_Add_m913_MethodInfo_var;
extern "C" bool iOSVRDevice_SupportsNativeUILayer_m383 (iOSVRDevice_t100 * __this, List_1_t95 * ___diagnostics, MethodInfo* method)
{
	static bool iOSVRDevice_SupportsNativeUILayer_m383_init;
	if (!iOSVRDevice_SupportsNativeUILayer_m383_init)
	{
		List_1_Add_m913_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_Add_m913_GenericMethod);
		iOSVRDevice_SupportsNativeUILayer_m383_init = true;
	}
	bool V_0 = false;
	{
		List_1_t95 * L_0 = ___diagnostics;
		bool L_1 = VRDevice_SupportsNativeUILayer_m350(__this, L_0, /*hidden argument*/&VRDevice_SupportsNativeUILayer_m350_MethodInfo);
		V_0 = L_1;
		bool L_2 = (__this->___isOpenGL_30);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		List_1_t95 * L_3 = ___diagnostics;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(List_1_Add_m913_MethodInfo_var, L_3, (String_t*) &_stringLiteral66);
		V_0 = 0;
	}

IL_0020:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void iOSVRDevice::SetVRModeEnabled(System.Boolean)
extern MethodInfo iOSVRDevice_SetVRModeEnabled_m384_MethodInfo;
extern "C" void iOSVRDevice_SetVRModeEnabled_m384 (iOSVRDevice_t100 * __this, bool ___enabled, MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		iOSVRDevice_setVRModeEnabled_m391(NULL /*static, unused*/, L_0, /*hidden argument*/&iOSVRDevice_setVRModeEnabled_m391_MethodInfo);
		return;
	}
}
// System.Void iOSVRDevice::Init()
extern MethodInfo iOSVRDevice_Init_m385_MethodInfo;
extern "C" void iOSVRDevice_Init_m385 (iOSVRDevice_t100 * __this, MethodInfo* method)
{
	{
		bool L_0 = iOSVRDevice_isOpenGLAPI_m390(NULL /*static, unused*/, /*hidden argument*/&iOSVRDevice_isOpenGLAPI_m390_MethodInfo);
		__this->___isOpenGL_30 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Cardboard_t67_il2cpp_TypeInfo));
		Cardboard_t67 * L_1 = Cardboard_get_SDK_m179(NULL /*static, unused*/, /*hidden argument*/&Cardboard_get_SDK_m179_MethodInfo);
		NullCheck(L_1);
		bool L_2 = Cardboard_get_SyncWithCardboardApp_m192(L_1, /*hidden argument*/&Cardboard_get_SyncWithCardboardApp_m192_MethodInfo);
		iOSVRDevice_setSyncWithCardboardEnabled_m392(NULL /*static, unused*/, L_2, /*hidden argument*/&iOSVRDevice_setSyncWithCardboardEnabled_m392_MethodInfo);
		VRDevice_Init_m356(__this, /*hidden argument*/&VRDevice_Init_m356_MethodInfo);
		return;
	}
}
// System.Void iOSVRDevice::PostRender(System.Boolean)
extern MethodInfo iOSVRDevice_PostRender_m386_MethodInfo;
extern "C" void iOSVRDevice_PostRender_m386 (iOSVRDevice_t100 * __this, bool ___vrMode, MethodInfo* method)
{
	iOSVRDevice_t100 * G_B2_0 = {0};
	iOSVRDevice_t100 * G_B1_0 = {0};
	int32_t G_B3_0 = 0;
	iOSVRDevice_t100 * G_B3_1 = {0};
	{
		bool L_0 = ___vrMode;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		bool L_1 = (__this->___isOpenGL_30);
		G_B3_0 = ((int32_t)(L_1));
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		NullCheck(G_B3_1);
		VRDevice_PostRender_m361(G_B3_1, G_B3_0, /*hidden argument*/&VRDevice_PostRender_m361_MethodInfo);
		return;
	}
}
// System.Void iOSVRDevice::OnFocus(System.Boolean)
extern MethodInfo iOSVRDevice_OnFocus_m387_MethodInfo;
extern "C" void iOSVRDevice_OnFocus_m387 (iOSVRDevice_t100 * __this, bool ___focus, MethodInfo* method)
{
	{
		bool L_0 = ___focus;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		bool L_1 = (__this->___debugOnboarding_31);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = iOSVRDevice_isOnboardingDone_m394(NULL /*static, unused*/, /*hidden argument*/&iOSVRDevice_isOnboardingDone_m394_MethodInfo);
		if (L_2)
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		__this->___debugOnboarding_31 = 0;
		iOSVRDevice_launchOnboardingDialog_m395(NULL /*static, unused*/, /*hidden argument*/&iOSVRDevice_launchOnboardingDialog_m395_MethodInfo);
	}

IL_0027:
	{
		return;
	}
}
// System.Void iOSVRDevice::OnPause(System.Boolean)
extern MethodInfo iOSVRDevice_OnPause_m388_MethodInfo;
extern "C" void iOSVRDevice_OnPause_m388 (iOSVRDevice_t100 * __this, bool ___pause, MethodInfo* method)
{
	{
		bool L_0 = ___pause;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		iOSVRDevice_readProfile_m393(NULL /*static, unused*/, /*hidden argument*/&iOSVRDevice_readProfile_m393_MethodInfo);
	}

IL_000b:
	{
		return;
	}
}
// System.Void iOSVRDevice::LaunchSettingsDialog()
extern MethodInfo iOSVRDevice_LaunchSettingsDialog_m389_MethodInfo;
extern "C" void iOSVRDevice_LaunchSettingsDialog_m389 (iOSVRDevice_t100 * __this, MethodInfo* method)
{
	{
		iOSVRDevice_launchSettingsDialog_m396(NULL /*static, unused*/, /*hidden argument*/&iOSVRDevice_launchSettingsDialog_m396_MethodInfo);
		return;
	}
}
// System.Boolean iOSVRDevice::isOpenGLAPI()
extern "C" {int32_t DEFAULT_CALL isOpenGLAPI();}
extern "C" bool iOSVRDevice_isOpenGLAPI_m390 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)isOpenGLAPI;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'isOpenGLAPI'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void iOSVRDevice::setVRModeEnabled(System.Boolean)
extern "C" {void DEFAULT_CALL setVRModeEnabled(int32_t);}
extern "C" void iOSVRDevice_setVRModeEnabled_m391 (Object_t * __this /* static, unused */, bool ___enabled, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setVRModeEnabled;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setVRModeEnabled'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void iOSVRDevice::setSyncWithCardboardEnabled(System.Boolean)
extern "C" {void DEFAULT_CALL setSyncWithCardboardEnabled(int32_t);}
extern "C" void iOSVRDevice_setSyncWithCardboardEnabled_m392 (Object_t * __this /* static, unused */, bool ___enabled, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setSyncWithCardboardEnabled;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setSyncWithCardboardEnabled'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void iOSVRDevice::readProfile()
extern "C" {void DEFAULT_CALL readProfile();}
extern "C" void iOSVRDevice_readProfile_m393 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)readProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'readProfile'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Boolean iOSVRDevice::isOnboardingDone()
extern "C" {int32_t DEFAULT_CALL isOnboardingDone();}
extern "C" bool iOSVRDevice_isOnboardingDone_m394 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)isOnboardingDone;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'isOnboardingDone'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void iOSVRDevice::launchOnboardingDialog()
extern "C" {void DEFAULT_CALL launchOnboardingDialog();}
extern "C" void iOSVRDevice_launchOnboardingDialog_m395 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)launchOnboardingDialog;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'launchOnboardingDialog'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void iOSVRDevice::launchSettingsDialog()
extern "C" {void DEFAULT_CALL launchSettingsDialog();}
extern "C" void iOSVRDevice_launchSettingsDialog_m396 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)launchSettingsDialog;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'launchSettingsDialog'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// Vuforia.BackgroundPlaneBehaviour
#include "AssemblyU2DCSharp_Vuforia_BackgroundPlaneBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo BackgroundPlaneBehaviour_t101_il2cpp_TypeInfo;
// Vuforia.BackgroundPlaneBehaviour
#include "AssemblyU2DCSharp_Vuforia_BackgroundPlaneBehaviourMethodDeclarations.h"

// Vuforia.BackgroundPlaneAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_BackgroundPlaneAbstMethodDeclarations.h"
extern MethodInfo BackgroundPlaneAbstractBehaviour__ctor_m938_MethodInfo;


// System.Void Vuforia.BackgroundPlaneBehaviour::.ctor()
extern MethodInfo BackgroundPlaneBehaviour__ctor_m397_MethodInfo;
extern "C" void BackgroundPlaneBehaviour__ctor_m397 (BackgroundPlaneBehaviour_t101 * __this, MethodInfo* method)
{
	{
		BackgroundPlaneAbstractBehaviour__ctor_m938(__this, /*hidden argument*/&BackgroundPlaneAbstractBehaviour__ctor_m938_MethodInfo);
		return;
	}
}
// Vuforia.CloudRecoBehaviour
#include "AssemblyU2DCSharp_Vuforia_CloudRecoBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CloudRecoBehaviour_t103_il2cpp_TypeInfo;
// Vuforia.CloudRecoBehaviour
#include "AssemblyU2DCSharp_Vuforia_CloudRecoBehaviourMethodDeclarations.h"

// Vuforia.CloudRecoAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CloudRecoAbstractBeMethodDeclarations.h"
extern MethodInfo CloudRecoAbstractBehaviour__ctor_m939_MethodInfo;


// System.Void Vuforia.CloudRecoBehaviour::.ctor()
extern MethodInfo CloudRecoBehaviour__ctor_m398_MethodInfo;
extern "C" void CloudRecoBehaviour__ctor_m398 (CloudRecoBehaviour_t103 * __this, MethodInfo* method)
{
	{
		CloudRecoAbstractBehaviour__ctor_m939(__this, /*hidden argument*/&CloudRecoAbstractBehaviour__ctor_m939_MethodInfo);
		return;
	}
}
// Vuforia.CylinderTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_CylinderTargetBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CylinderTargetBehaviour_t105_il2cpp_TypeInfo;
// Vuforia.CylinderTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_CylinderTargetBehaviourMethodDeclarations.h"

// Vuforia.CylinderTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CylinderTargetAbstrMethodDeclarations.h"
extern MethodInfo CylinderTargetAbstractBehaviour__ctor_m940_MethodInfo;


// System.Void Vuforia.CylinderTargetBehaviour::.ctor()
extern MethodInfo CylinderTargetBehaviour__ctor_m399_MethodInfo;
extern "C" void CylinderTargetBehaviour__ctor_m399 (CylinderTargetBehaviour_t105 * __this, MethodInfo* method)
{
	{
		CylinderTargetAbstractBehaviour__ctor_m940(__this, /*hidden argument*/&CylinderTargetAbstractBehaviour__ctor_m940_MethodInfo);
		return;
	}
}
// Vuforia.DataSetLoadBehaviour
#include "AssemblyU2DCSharp_Vuforia_DataSetLoadBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DataSetLoadBehaviour_t107_il2cpp_TypeInfo;
// Vuforia.DataSetLoadBehaviour
#include "AssemblyU2DCSharp_Vuforia_DataSetLoadBehaviourMethodDeclarations.h"

// Vuforia.DataSetLoadAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSetLoadAbstractMethodDeclarations.h"
extern MethodInfo DataSetLoadAbstractBehaviour__ctor_m941_MethodInfo;


// System.Void Vuforia.DataSetLoadBehaviour::.ctor()
extern MethodInfo DataSetLoadBehaviour__ctor_m400_MethodInfo;
extern "C" void DataSetLoadBehaviour__ctor_m400 (DataSetLoadBehaviour_t107 * __this, MethodInfo* method)
{
	{
		DataSetLoadAbstractBehaviour__ctor_m941(__this, /*hidden argument*/&DataSetLoadAbstractBehaviour__ctor_m941_MethodInfo);
		return;
	}
}
// System.Void Vuforia.DataSetLoadBehaviour::AddOSSpecificExternalDatasetSearchDirs()
extern MethodInfo DataSetLoadBehaviour_AddOSSpecificExternalDatasetSearchDirs_m401_MethodInfo;
extern "C" void DataSetLoadBehaviour_AddOSSpecificExternalDatasetSearchDirs_m401 (DataSetLoadBehaviour_t107 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// Vuforia.DefaultInitializationErrorHandler
#include "AssemblyU2DCSharp_Vuforia_DefaultInitializationErrorHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultInitializationErrorHandler_t109_il2cpp_TypeInfo;
// Vuforia.DefaultInitializationErrorHandler
#include "AssemblyU2DCSharp_Vuforia_DefaultInitializationErrorHandlerMethodDeclarations.h"

// Vuforia.QCARAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio.h"
// Vuforia.QCARUnity/InitError
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_InitError.h"
// System.Action`1<Vuforia.QCARUnity/InitError>
#include "mscorlib_System_Action_1_gen.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo QCARAbstractBehaviour_t143_il2cpp_TypeInfo;
extern TypeInfo Action_1_t215_il2cpp_TypeInfo;
extern TypeInfo WindowFunction_t216_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Action`1<Vuforia.QCARUnity/InitError>
#include "mscorlib_System_Action_1_genMethodDeclarations.h"
// Vuforia.QCARAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavioMethodDeclarations.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"
extern Il2CppType QCARAbstractBehaviour_t143_0_0_0;
extern Il2CppType Action_1_t215_0_0_0;
extern MethodInfo Type_GetTypeFromHandle_m942_MethodInfo;
extern MethodInfo Object_FindObjectOfType_m943_MethodInfo;
extern MethodInfo DefaultInitializationErrorHandler_OnQCARInitializationError_m409_MethodInfo;
extern MethodInfo Action_1__ctor_m944_MethodInfo;
extern MethodInfo QCARAbstractBehaviour_RegisterQCARInitErrorCallback_m945_MethodInfo;
extern MethodInfo DefaultInitializationErrorHandler_DrawWindowContent_m406_MethodInfo;
extern MethodInfo WindowFunction__ctor_m946_MethodInfo;
extern MethodInfo GUI_Window_m947_MethodInfo;
extern MethodInfo QCARAbstractBehaviour_UnregisterQCARInitErrorCallback_m948_MethodInfo;
extern MethodInfo GUI_Label_m949_MethodInfo;
extern MethodInfo Application_Quit_m950_MethodInfo;
extern MethodInfo DefaultInitializationErrorHandler_SetErrorCode_m407_MethodInfo;
extern MethodInfo DefaultInitializationErrorHandler_SetErrorOccurred_m408_MethodInfo;
extern Il2CppGenericMethod Action_1__ctor_m944_GenericMethod;


// System.Void Vuforia.DefaultInitializationErrorHandler::.ctor()
extern MethodInfo DefaultInitializationErrorHandler__ctor_m402_MethodInfo;
extern "C" void DefaultInitializationErrorHandler__ctor_m402 (DefaultInitializationErrorHandler_t109 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		__this->___mErrorText_3 = L_0;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Vuforia.DefaultInitializationErrorHandler::Awake()
extern MethodInfo DefaultInitializationErrorHandler_Awake_m403_MethodInfo;
extern TypeInfo* Action_1_t215_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1__ctor_m944_MethodInfo_var;
extern "C" void DefaultInitializationErrorHandler_Awake_m403 (DefaultInitializationErrorHandler_t109 * __this, MethodInfo* method)
{
	static bool DefaultInitializationErrorHandler_Awake_m403_init;
	if (!DefaultInitializationErrorHandler_Awake_m403_init)
	{
		Action_1_t215_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t215_0_0_0);
		Action_1__ctor_m944_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1__ctor_m944_GenericMethod);
		DefaultInitializationErrorHandler_Awake_m403_init = true;
	}
	QCARAbstractBehaviour_t143 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(&QCARAbstractBehaviour_t143_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		Object_t172 * L_1 = Object_FindObjectOfType_m943(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_FindObjectOfType_m943_MethodInfo);
		V_0 = ((QCARAbstractBehaviour_t143 *)Castclass(L_1, InitializedTypeInfo(&QCARAbstractBehaviour_t143_il2cpp_TypeInfo)));
		QCARAbstractBehaviour_t143 * L_2 = V_0;
		bool L_3 = Object_op_Implicit_m748(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		QCARAbstractBehaviour_t143 * L_4 = V_0;
		IntPtr_t L_5 = { &DefaultInitializationErrorHandler_OnQCARInitializationError_m409_MethodInfo };
		Action_1_t215 * L_6 = (Action_1_t215 *)il2cpp_codegen_object_new (Action_1_t215_il2cpp_TypeInfo_var);
		Action_1__ctor_m944(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m944_MethodInfo_var);
		NullCheck(L_4);
		QCARAbstractBehaviour_RegisterQCARInitErrorCallback_m945(L_4, L_6, /*hidden argument*/&QCARAbstractBehaviour_RegisterQCARInitErrorCallback_m945_MethodInfo);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Vuforia.DefaultInitializationErrorHandler::OnGUI()
extern MethodInfo DefaultInitializationErrorHandler_OnGUI_m404_MethodInfo;
extern "C" void DefaultInitializationErrorHandler_OnGUI_m404 (DefaultInitializationErrorHandler_t109 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___mErrorOccurred_4);
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_2 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Rect_t62  L_3 = {0};
		Rect__ctor_m741(&L_3, (0.0f), (0.0f), (((float)L_1)), (((float)L_2)), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		IntPtr_t L_4 = { &DefaultInitializationErrorHandler_DrawWindowContent_m406_MethodInfo };
		WindowFunction_t216 * L_5 = (WindowFunction_t216 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WindowFunction_t216_il2cpp_TypeInfo));
		WindowFunction__ctor_m946(L_5, __this, L_4, /*hidden argument*/&WindowFunction__ctor_m946_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t201_il2cpp_TypeInfo));
		GUI_Window_m947(NULL /*static, unused*/, 0, L_3, L_5, (String_t*) &_stringLiteral67, /*hidden argument*/&GUI_Window_m947_MethodInfo);
	}

IL_003e:
	{
		return;
	}
}
// System.Void Vuforia.DefaultInitializationErrorHandler::OnDestroy()
extern MethodInfo DefaultInitializationErrorHandler_OnDestroy_m405_MethodInfo;
extern TypeInfo* Action_1_t215_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1__ctor_m944_MethodInfo_var;
extern "C" void DefaultInitializationErrorHandler_OnDestroy_m405 (DefaultInitializationErrorHandler_t109 * __this, MethodInfo* method)
{
	static bool DefaultInitializationErrorHandler_OnDestroy_m405_init;
	if (!DefaultInitializationErrorHandler_OnDestroy_m405_init)
	{
		Action_1_t215_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t215_0_0_0);
		Action_1__ctor_m944_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1__ctor_m944_GenericMethod);
		DefaultInitializationErrorHandler_OnDestroy_m405_init = true;
	}
	QCARAbstractBehaviour_t143 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_0 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(&QCARAbstractBehaviour_t143_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
		Object_t172 * L_1 = Object_FindObjectOfType_m943(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_FindObjectOfType_m943_MethodInfo);
		V_0 = ((QCARAbstractBehaviour_t143 *)Castclass(L_1, InitializedTypeInfo(&QCARAbstractBehaviour_t143_il2cpp_TypeInfo)));
		QCARAbstractBehaviour_t143 * L_2 = V_0;
		bool L_3 = Object_op_Implicit_m748(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		QCARAbstractBehaviour_t143 * L_4 = V_0;
		IntPtr_t L_5 = { &DefaultInitializationErrorHandler_OnQCARInitializationError_m409_MethodInfo };
		Action_1_t215 * L_6 = (Action_1_t215 *)il2cpp_codegen_object_new (Action_1_t215_il2cpp_TypeInfo_var);
		Action_1__ctor_m944(L_6, __this, L_5, /*hidden argument*/Action_1__ctor_m944_MethodInfo_var);
		NullCheck(L_4);
		QCARAbstractBehaviour_UnregisterQCARInitErrorCallback_m948(L_4, L_6, /*hidden argument*/&QCARAbstractBehaviour_UnregisterQCARInitErrorCallback_m948_MethodInfo);
	}

IL_0032:
	{
		return;
	}
}
// System.Void Vuforia.DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C" void DefaultInitializationErrorHandler_DrawWindowContent_m406 (DefaultInitializationErrorHandler_t109 * __this, int32_t ___id, MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_1 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Rect_t62  L_2 = {0};
		Rect__ctor_m741(&L_2, (10.0f), (25.0f), (((float)((int32_t)((int32_t)L_0-(int32_t)((int32_t)20))))), (((float)((int32_t)((int32_t)L_1-(int32_t)((int32_t)95))))), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		String_t* L_3 = (__this->___mErrorText_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t201_il2cpp_TypeInfo));
		GUI_Label_m949(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&GUI_Label_m949_MethodInfo);
		int32_t L_4 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_5 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Rect_t62  L_6 = {0};
		Rect__ctor_m741(&L_6, (((float)((int32_t)((int32_t)((int32_t)((int32_t)L_4/(int32_t)2))-(int32_t)((int32_t)75))))), (((float)((int32_t)((int32_t)L_5-(int32_t)((int32_t)60))))), (150.0f), (50.0f), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		bool L_7 = GUI_Button_m742(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral68, /*hidden argument*/&GUI_Button_m742_MethodInfo);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		Application_Quit_m950(NULL /*static, unused*/, /*hidden argument*/&Application_Quit_m950_MethodInfo);
	}

IL_0063:
	{
		return;
	}
}
// System.Void Vuforia.DefaultInitializationErrorHandler::SetErrorCode(Vuforia.QCARUnity/InitError)
extern "C" void DefaultInitializationErrorHandler_SetErrorCode_m407 (DefaultInitializationErrorHandler_t109 * __this, int32_t ___errorCode, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		String_t* L_0 = (__this->___mErrorText_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = String_Concat_m731(NULL /*static, unused*/, (String_t*) &_stringLiteral69, L_0, /*hidden argument*/&String_Concat_m731_MethodInfo);
		Debug_LogError_m796(NULL /*static, unused*/, L_1, /*hidden argument*/&Debug_LogError_m796_MethodInfo);
		int32_t L_2 = ___errorCode;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 0)
		{
			goto IL_004d;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 1)
		{
			goto IL_00ad;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 2)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 3)
		{
			goto IL_007d;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 5)
		{
			goto IL_006d;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 6)
		{
			goto IL_005d;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 7)
		{
			goto IL_00bd;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 8)
		{
			goto IL_00cd;
		}
		if (((int32_t)((int32_t)L_3+(int32_t)((int32_t)10))) == 9)
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_00ed;
	}

IL_004d:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral70;
		goto IL_00ed;
	}

IL_005d:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral71;
		goto IL_00ed;
	}

IL_006d:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral72;
		goto IL_00ed;
	}

IL_007d:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral73;
		goto IL_00ed;
	}

IL_008d:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral74;
		goto IL_00ed;
	}

IL_009d:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral75;
		goto IL_00ed;
	}

IL_00ad:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral76;
		goto IL_00ed;
	}

IL_00bd:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral77;
		goto IL_00ed;
	}

IL_00cd:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral78;
		goto IL_00ed;
	}

IL_00dd:
	{
		__this->___mErrorText_3 = (String_t*) &_stringLiteral79;
		goto IL_00ed;
	}

IL_00ed:
	{
		return;
	}
}
// System.Void Vuforia.DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" void DefaultInitializationErrorHandler_SetErrorOccurred_m408 (DefaultInitializationErrorHandler_t109 * __this, bool ___errorOccurred, MethodInfo* method)
{
	{
		bool L_0 = ___errorOccurred;
		__this->___mErrorOccurred_4 = L_0;
		return;
	}
}
// System.Void Vuforia.DefaultInitializationErrorHandler::OnQCARInitializationError(Vuforia.QCARUnity/InitError)
extern "C" void DefaultInitializationErrorHandler_OnQCARInitializationError_m409 (DefaultInitializationErrorHandler_t109 * __this, int32_t ___initError, MethodInfo* method)
{
	{
		int32_t L_0 = ___initError;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError;
		DefaultInitializationErrorHandler_SetErrorCode_m407(__this, L_1, /*hidden argument*/&DefaultInitializationErrorHandler_SetErrorCode_m407_MethodInfo);
		DefaultInitializationErrorHandler_SetErrorOccurred_m408(__this, 1, /*hidden argument*/&DefaultInitializationErrorHandler_SetErrorOccurred_m408_MethodInfo);
	}

IL_0014:
	{
		return;
	}
}
// Vuforia.DefaultSmartTerrainEventHandler
#include "AssemblyU2DCSharp_Vuforia_DefaultSmartTerrainEventHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultSmartTerrainEventHandler_t113_il2cpp_TypeInfo;
// Vuforia.DefaultSmartTerrainEventHandler
#include "AssemblyU2DCSharp_Vuforia_DefaultSmartTerrainEventHandlerMethodDeclarations.h"

// Vuforia.ReconstructionBehaviour
#include "AssemblyU2DCSharp_Vuforia_ReconstructionBehaviour.h"
// System.Action`1<Vuforia.Prop>
#include "mscorlib_System_Action_1_gen_0.h"
// System.Action`1<Vuforia.Surface>
#include "mscorlib_System_Action_1_gen_1.h"
// Vuforia.PropBehaviour
#include "AssemblyU2DCSharp_Vuforia_PropBehaviour.h"
// Vuforia.PropAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_PropAbstractBehavio.h"
// Vuforia.SurfaceBehaviour
#include "AssemblyU2DCSharp_Vuforia_SurfaceBehaviour.h"
// Vuforia.SurfaceAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SurfaceAbstractBeha.h"
extern TypeInfo Action_1_t217_il2cpp_TypeInfo;
extern TypeInfo Action_1_t218_il2cpp_TypeInfo;
// System.Action`1<Vuforia.Prop>
#include "mscorlib_System_Action_1_gen_0MethodDeclarations.h"
// Vuforia.ReconstructionAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ReconstructionAbstrMethodDeclarations.h"
// System.Action`1<Vuforia.Surface>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
extern Il2CppType Action_1_t217_0_0_0;
extern Il2CppType Action_1_t218_0_0_0;
extern MethodInfo DefaultSmartTerrainEventHandler_OnPropCreated_m413_MethodInfo;
extern MethodInfo Action_1__ctor_m951_MethodInfo;
extern MethodInfo ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m952_MethodInfo;
extern MethodInfo DefaultSmartTerrainEventHandler_OnSurfaceCreated_m414_MethodInfo;
extern MethodInfo Action_1__ctor_m953_MethodInfo;
extern MethodInfo ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m954_MethodInfo;
extern MethodInfo ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m955_MethodInfo;
extern MethodInfo ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m956_MethodInfo;
extern MethodInfo ReconstructionAbstractBehaviour_AssociateProp_m957_MethodInfo;
extern MethodInfo ReconstructionAbstractBehaviour_AssociateSurface_m958_MethodInfo;
struct Component_t167;
// UnityEngine.CastHelper`1<Vuforia.ReconstructionBehaviour>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_13.h"
// Declaration !!0 UnityEngine.Component::GetComponent<Vuforia.ReconstructionBehaviour>()
// !!0 UnityEngine.Component::GetComponent<Vuforia.ReconstructionBehaviour>()
#define Component_GetComponent_TisReconstructionBehaviour_t110_m959(__this, method) (( ReconstructionBehaviour_t110 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisReconstructionBehaviour_t110_m959_GenericMethod;
extern Il2CppGenericMethod Action_1__ctor_m951_GenericMethod;
extern Il2CppGenericMethod Action_1__ctor_m953_GenericMethod;


// System.Void Vuforia.DefaultSmartTerrainEventHandler::.ctor()
extern MethodInfo DefaultSmartTerrainEventHandler__ctor_m410_MethodInfo;
extern "C" void DefaultSmartTerrainEventHandler__ctor_m410 (DefaultSmartTerrainEventHandler_t113 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Vuforia.DefaultSmartTerrainEventHandler::Start()
extern MethodInfo DefaultSmartTerrainEventHandler_Start_m411_MethodInfo;
extern TypeInfo* Action_1_t217_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t218_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponent_TisReconstructionBehaviour_t110_m959_MethodInfo_var;
extern MethodInfo* Action_1__ctor_m951_MethodInfo_var;
extern MethodInfo* Action_1__ctor_m953_MethodInfo_var;
extern "C" void DefaultSmartTerrainEventHandler_Start_m411 (DefaultSmartTerrainEventHandler_t113 * __this, MethodInfo* method)
{
	static bool DefaultSmartTerrainEventHandler_Start_m411_init;
	if (!DefaultSmartTerrainEventHandler_Start_m411_init)
	{
		Action_1_t217_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t217_0_0_0);
		Action_1_t218_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t218_0_0_0);
		Component_GetComponent_TisReconstructionBehaviour_t110_m959_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisReconstructionBehaviour_t110_m959_GenericMethod);
		Action_1__ctor_m951_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1__ctor_m951_GenericMethod);
		Action_1__ctor_m953_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1__ctor_m953_GenericMethod);
		DefaultSmartTerrainEventHandler_Start_m411_init = true;
	}
	{
		ReconstructionBehaviour_t110 * L_0 = Component_GetComponent_TisReconstructionBehaviour_t110_m959(__this, /*hidden argument*/Component_GetComponent_TisReconstructionBehaviour_t110_m959_MethodInfo_var);
		__this->___mReconstructionBehaviour_2 = L_0;
		ReconstructionBehaviour_t110 * L_1 = (__this->___mReconstructionBehaviour_2);
		bool L_2 = Object_op_Implicit_m748(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		ReconstructionBehaviour_t110 * L_3 = (__this->___mReconstructionBehaviour_2);
		IntPtr_t L_4 = { &DefaultSmartTerrainEventHandler_OnPropCreated_m413_MethodInfo };
		Action_1_t217 * L_5 = (Action_1_t217 *)il2cpp_codegen_object_new (Action_1_t217_il2cpp_TypeInfo_var);
		Action_1__ctor_m951(L_5, __this, L_4, /*hidden argument*/Action_1__ctor_m951_MethodInfo_var);
		NullCheck(L_3);
		ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m952(L_3, L_5, /*hidden argument*/&ReconstructionAbstractBehaviour_RegisterPropCreatedCallback_m952_MethodInfo);
		ReconstructionBehaviour_t110 * L_6 = (__this->___mReconstructionBehaviour_2);
		IntPtr_t L_7 = { &DefaultSmartTerrainEventHandler_OnSurfaceCreated_m414_MethodInfo };
		Action_1_t218 * L_8 = (Action_1_t218 *)il2cpp_codegen_object_new (Action_1_t218_il2cpp_TypeInfo_var);
		Action_1__ctor_m953(L_8, __this, L_7, /*hidden argument*/Action_1__ctor_m953_MethodInfo_var);
		NullCheck(L_6);
		ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m954(L_6, L_8, /*hidden argument*/&ReconstructionAbstractBehaviour_RegisterSurfaceCreatedCallback_m954_MethodInfo);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Vuforia.DefaultSmartTerrainEventHandler::OnDestroy()
extern MethodInfo DefaultSmartTerrainEventHandler_OnDestroy_m412_MethodInfo;
extern TypeInfo* Action_1_t217_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t218_il2cpp_TypeInfo_var;
extern MethodInfo* Action_1__ctor_m951_MethodInfo_var;
extern MethodInfo* Action_1__ctor_m953_MethodInfo_var;
extern "C" void DefaultSmartTerrainEventHandler_OnDestroy_m412 (DefaultSmartTerrainEventHandler_t113 * __this, MethodInfo* method)
{
	static bool DefaultSmartTerrainEventHandler_OnDestroy_m412_init;
	if (!DefaultSmartTerrainEventHandler_OnDestroy_m412_init)
	{
		Action_1_t217_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t217_0_0_0);
		Action_1_t218_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Action_1_t218_0_0_0);
		Action_1__ctor_m951_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1__ctor_m951_GenericMethod);
		Action_1__ctor_m953_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Action_1__ctor_m953_GenericMethod);
		DefaultSmartTerrainEventHandler_OnDestroy_m412_init = true;
	}
	{
		ReconstructionBehaviour_t110 * L_0 = (__this->___mReconstructionBehaviour_2);
		bool L_1 = Object_op_Implicit_m748(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		ReconstructionBehaviour_t110 * L_2 = (__this->___mReconstructionBehaviour_2);
		IntPtr_t L_3 = { &DefaultSmartTerrainEventHandler_OnPropCreated_m413_MethodInfo };
		Action_1_t217 * L_4 = (Action_1_t217 *)il2cpp_codegen_object_new (Action_1_t217_il2cpp_TypeInfo_var);
		Action_1__ctor_m951(L_4, __this, L_3, /*hidden argument*/Action_1__ctor_m951_MethodInfo_var);
		NullCheck(L_2);
		ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m955(L_2, L_4, /*hidden argument*/&ReconstructionAbstractBehaviour_UnregisterPropCreatedCallback_m955_MethodInfo);
		ReconstructionBehaviour_t110 * L_5 = (__this->___mReconstructionBehaviour_2);
		IntPtr_t L_6 = { &DefaultSmartTerrainEventHandler_OnSurfaceCreated_m414_MethodInfo };
		Action_1_t218 * L_7 = (Action_1_t218 *)il2cpp_codegen_object_new (Action_1_t218_il2cpp_TypeInfo_var);
		Action_1__ctor_m953(L_7, __this, L_6, /*hidden argument*/Action_1__ctor_m953_MethodInfo_var);
		NullCheck(L_5);
		ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m956(L_5, L_7, /*hidden argument*/&ReconstructionAbstractBehaviour_UnregisterSurfaceCreatedCallback_m956_MethodInfo);
	}

IL_003e:
	{
		return;
	}
}
// System.Void Vuforia.DefaultSmartTerrainEventHandler::OnPropCreated(Vuforia.Prop)
extern "C" void DefaultSmartTerrainEventHandler_OnPropCreated_m413 (DefaultSmartTerrainEventHandler_t113 * __this, Object_t * ___prop, MethodInfo* method)
{
	{
		ReconstructionBehaviour_t110 * L_0 = (__this->___mReconstructionBehaviour_2);
		bool L_1 = Object_op_Implicit_m748(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ReconstructionBehaviour_t110 * L_2 = (__this->___mReconstructionBehaviour_2);
		PropBehaviour_t111 * L_3 = (__this->___PropTemplate_3);
		Object_t * L_4 = ___prop;
		NullCheck(L_2);
		ReconstructionAbstractBehaviour_AssociateProp_m957(L_2, L_3, L_4, /*hidden argument*/&ReconstructionAbstractBehaviour_AssociateProp_m957_MethodInfo);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Vuforia.DefaultSmartTerrainEventHandler::OnSurfaceCreated(Vuforia.Surface)
extern "C" void DefaultSmartTerrainEventHandler_OnSurfaceCreated_m414 (DefaultSmartTerrainEventHandler_t113 * __this, Object_t * ___surface, MethodInfo* method)
{
	{
		ReconstructionBehaviour_t110 * L_0 = (__this->___mReconstructionBehaviour_2);
		bool L_1 = Object_op_Implicit_m748(NULL /*static, unused*/, L_0, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ReconstructionBehaviour_t110 * L_2 = (__this->___mReconstructionBehaviour_2);
		SurfaceBehaviour_t112 * L_3 = (__this->___SurfaceTemplate_4);
		Object_t * L_4 = ___surface;
		NullCheck(L_2);
		ReconstructionAbstractBehaviour_AssociateSurface_m958(L_2, L_3, L_4, /*hidden argument*/&ReconstructionAbstractBehaviour_AssociateSurface_m958_MethodInfo);
	}

IL_0023:
	{
		return;
	}
}
// Vuforia.DefaultTrackableEventHandler
#include "AssemblyU2DCSharp_Vuforia_DefaultTrackableEventHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultTrackableEventHandler_t117_il2cpp_TypeInfo;
// Vuforia.DefaultTrackableEventHandler
#include "AssemblyU2DCSharp_Vuforia_DefaultTrackableEventHandlerMethodDeclarations.h"

// Vuforia.TrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
extern TypeInfo TrackableBehaviour_t116_il2cpp_TypeInfo;
// Vuforia.TrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviourMethodDeclarations.h"
extern MethodInfo TrackableBehaviour_RegisterTrackableEventHandler_m960_MethodInfo;
extern MethodInfo DefaultTrackableEventHandler_OnTrackingFound_m418_MethodInfo;
extern MethodInfo DefaultTrackableEventHandler_OnTrackingLost_m419_MethodInfo;
extern MethodInfo Collider_set_enabled_m961_MethodInfo;
extern MethodInfo TrackableBehaviour_get_TrackableName_m962_MethodInfo;
struct Component_t167;
// UnityEngine.CastHelper`1<Vuforia.TrackableBehaviour>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_14.h"
// Declaration !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
#define Component_GetComponent_TisTrackableBehaviour_t116_m963(__this, method) (( TrackableBehaviour_t116 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
struct Component_t167;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
#define Component_GetComponentsInChildren_TisRenderer_t23_m964(__this, p0, method) (( RendererU5BU5D_t219* (*) (Component_t167 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m759_gshared)(__this, p0, method)
struct Component_t167;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
#define Component_GetComponentsInChildren_TisCollider_t39_m965(__this, p0, method) (( ColliderU5BU5D_t220* (*) (Component_t167 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m759_gshared)(__this, p0, method)
extern Il2CppGenericMethod Component_GetComponent_TisTrackableBehaviour_t116_m963_GenericMethod;
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisRenderer_t23_m964_GenericMethod;
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisCollider_t39_m965_GenericMethod;


// System.Void Vuforia.DefaultTrackableEventHandler::.ctor()
extern MethodInfo DefaultTrackableEventHandler__ctor_m415_MethodInfo;
extern "C" void DefaultTrackableEventHandler__ctor_m415 (DefaultTrackableEventHandler_t117 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Vuforia.DefaultTrackableEventHandler::Start()
extern MethodInfo DefaultTrackableEventHandler_Start_m416_MethodInfo;
extern MethodInfo* Component_GetComponent_TisTrackableBehaviour_t116_m963_MethodInfo_var;
extern "C" void DefaultTrackableEventHandler_Start_m416 (DefaultTrackableEventHandler_t117 * __this, MethodInfo* method)
{
	static bool DefaultTrackableEventHandler_Start_m416_init;
	if (!DefaultTrackableEventHandler_Start_m416_init)
	{
		Component_GetComponent_TisTrackableBehaviour_t116_m963_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisTrackableBehaviour_t116_m963_GenericMethod);
		DefaultTrackableEventHandler_Start_m416_init = true;
	}
	{
		TrackableBehaviour_t116 * L_0 = Component_GetComponent_TisTrackableBehaviour_t116_m963(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t116_m963_MethodInfo_var);
		__this->___mTrackableBehaviour_2 = L_0;
		TrackableBehaviour_t116 * L_1 = (__this->___mTrackableBehaviour_2);
		bool L_2 = Object_op_Implicit_m748(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t116 * L_3 = (__this->___mTrackableBehaviour_2);
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m960(L_3, __this, /*hidden argument*/&TrackableBehaviour_RegisterTrackableEventHandler_m960_MethodInfo);
	}

IL_0028:
	{
		return;
	}
}
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern MethodInfo DefaultTrackableEventHandler_OnTrackableStateChanged_m417_MethodInfo;
extern "C" void DefaultTrackableEventHandler_OnTrackableStateChanged_m417 (DefaultTrackableEventHandler_t117 * __this, int32_t ___previousStatus, int32_t ___newStatus, MethodInfo* method)
{
	{
		int32_t L_0 = ___newStatus;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___newStatus;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___newStatus;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0020;
		}
	}

IL_0015:
	{
		DefaultTrackableEventHandler_OnTrackingFound_m418(__this, /*hidden argument*/&DefaultTrackableEventHandler_OnTrackingFound_m418_MethodInfo);
		goto IL_0026;
	}

IL_0020:
	{
		DefaultTrackableEventHandler_OnTrackingLost_m419(__this, /*hidden argument*/&DefaultTrackableEventHandler_OnTrackingLost_m419_MethodInfo);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackingFound()
extern MethodInfo* Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var;
extern "C" void DefaultTrackableEventHandler_OnTrackingFound_m418 (DefaultTrackableEventHandler_t117 * __this, MethodInfo* method)
{
	static bool DefaultTrackableEventHandler_OnTrackingFound_m418_init;
	if (!DefaultTrackableEventHandler_OnTrackingFound_m418_init)
	{
		Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisRenderer_t23_m964_GenericMethod);
		Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCollider_t39_m965_GenericMethod);
		DefaultTrackableEventHandler_OnTrackingFound_m418_init = true;
	}
	RendererU5BU5D_t219* V_0 = {0};
	ColliderU5BU5D_t220* V_1 = {0};
	Renderer_t23 * V_2 = {0};
	RendererU5BU5D_t219* V_3 = {0};
	int32_t V_4 = 0;
	Collider_t39 * V_5 = {0};
	ColliderU5BU5D_t220* V_6 = {0};
	int32_t V_7 = 0;
	{
		RendererU5BU5D_t219* L_0 = Component_GetComponentsInChildren_TisRenderer_t23_m964(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var);
		V_0 = L_0;
		ColliderU5BU5D_t220* L_1 = Component_GetComponentsInChildren_TisCollider_t39_m965(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var);
		V_1 = L_1;
		RendererU5BU5D_t219* L_2 = V_0;
		V_3 = L_2;
		V_4 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		RendererU5BU5D_t219* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(Renderer_t23 **)(Renderer_t23 **)SZArrayLdElema(L_3, L_5));
		Renderer_t23 * L_6 = V_2;
		NullCheck(L_6);
		Renderer_set_enabled_m784(L_6, 1, /*hidden argument*/&Renderer_set_enabled_m784_MethodInfo);
		int32_t L_7 = V_4;
		V_4 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_8 = V_4;
		RendererU5BU5D_t219* L_9 = V_3;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		ColliderU5BU5D_t220* L_10 = V_1;
		V_6 = L_10;
		V_7 = 0;
		goto IL_0056;
	}

IL_0041:
	{
		ColliderU5BU5D_t220* L_11 = V_6;
		int32_t L_12 = V_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		V_5 = (*(Collider_t39 **)(Collider_t39 **)SZArrayLdElema(L_11, L_13));
		Collider_t39 * L_14 = V_5;
		NullCheck(L_14);
		Collider_set_enabled_m961(L_14, 1, /*hidden argument*/&Collider_set_enabled_m961_MethodInfo);
		int32_t L_15 = V_7;
		V_7 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_16 = V_7;
		ColliderU5BU5D_t220* L_17 = V_6;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0041;
		}
	}
	{
		TrackableBehaviour_t116 * L_18 = (__this->___mTrackableBehaviour_2);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TrackableBehaviour_get_TrackableName_m962_MethodInfo, L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Concat_m803(NULL /*static, unused*/, (String_t*) &_stringLiteral80, L_19, (String_t*) &_stringLiteral81, /*hidden argument*/&String_Concat_m803_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_20, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		Director_t6 * L_21 = ((Director_t6_StaticFields*)InitializedTypeInfo(&Director_t6_il2cpp_TypeInfo)->static_fields)->___Instance_2;
		bool L_22 = Object_op_Inequality_m527(NULL /*static, unused*/, L_21, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_22)
		{
			goto IL_009a;
		}
	}
	{
		Director_t6 * L_23 = ((Director_t6_StaticFields*)InitializedTypeInfo(&Director_t6_il2cpp_TypeInfo)->static_fields)->___Instance_2;
		NullCheck(L_23);
		Director_OnTrackingFound_m10(L_23, /*hidden argument*/&Director_OnTrackingFound_m10_MethodInfo);
	}

IL_009a:
	{
		return;
	}
}
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackingLost()
extern MethodInfo* Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var;
extern "C" void DefaultTrackableEventHandler_OnTrackingLost_m419 (DefaultTrackableEventHandler_t117 * __this, MethodInfo* method)
{
	static bool DefaultTrackableEventHandler_OnTrackingLost_m419_init;
	if (!DefaultTrackableEventHandler_OnTrackingLost_m419_init)
	{
		Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisRenderer_t23_m964_GenericMethod);
		Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCollider_t39_m965_GenericMethod);
		DefaultTrackableEventHandler_OnTrackingLost_m419_init = true;
	}
	RendererU5BU5D_t219* V_0 = {0};
	ColliderU5BU5D_t220* V_1 = {0};
	Renderer_t23 * V_2 = {0};
	RendererU5BU5D_t219* V_3 = {0};
	int32_t V_4 = 0;
	Collider_t39 * V_5 = {0};
	ColliderU5BU5D_t220* V_6 = {0};
	int32_t V_7 = 0;
	{
		RendererU5BU5D_t219* L_0 = Component_GetComponentsInChildren_TisRenderer_t23_m964(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var);
		V_0 = L_0;
		ColliderU5BU5D_t220* L_1 = Component_GetComponentsInChildren_TisCollider_t39_m965(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var);
		V_1 = L_1;
		RendererU5BU5D_t219* L_2 = V_0;
		V_3 = L_2;
		V_4 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		RendererU5BU5D_t219* L_3 = V_3;
		int32_t L_4 = V_4;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(Renderer_t23 **)(Renderer_t23 **)SZArrayLdElema(L_3, L_5));
		Renderer_t23 * L_6 = V_2;
		NullCheck(L_6);
		Renderer_set_enabled_m784(L_6, 0, /*hidden argument*/&Renderer_set_enabled_m784_MethodInfo);
		int32_t L_7 = V_4;
		V_4 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_8 = V_4;
		RendererU5BU5D_t219* L_9 = V_3;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		ColliderU5BU5D_t220* L_10 = V_1;
		V_6 = L_10;
		V_7 = 0;
		goto IL_0056;
	}

IL_0041:
	{
		ColliderU5BU5D_t220* L_11 = V_6;
		int32_t L_12 = V_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		V_5 = (*(Collider_t39 **)(Collider_t39 **)SZArrayLdElema(L_11, L_13));
		Collider_t39 * L_14 = V_5;
		NullCheck(L_14);
		Collider_set_enabled_m961(L_14, 0, /*hidden argument*/&Collider_set_enabled_m961_MethodInfo);
		int32_t L_15 = V_7;
		V_7 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_16 = V_7;
		ColliderU5BU5D_t220* L_17 = V_6;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0041;
		}
	}
	{
		TrackableBehaviour_t116 * L_18 = (__this->___mTrackableBehaviour_2);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TrackableBehaviour_get_TrackableName_m962_MethodInfo, L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Concat_m803(NULL /*static, unused*/, (String_t*) &_stringLiteral80, L_19, (String_t*) &_stringLiteral82, /*hidden argument*/&String_Concat_m803_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_20, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		Director_t6 * L_21 = ((Director_t6_StaticFields*)InitializedTypeInfo(&Director_t6_il2cpp_TypeInfo)->static_fields)->___Instance_2;
		bool L_22 = Object_op_Inequality_m527(NULL /*static, unused*/, L_21, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_22)
		{
			goto IL_009a;
		}
	}
	{
		Director_t6 * L_23 = ((Director_t6_StaticFields*)InitializedTypeInfo(&Director_t6_il2cpp_TypeInfo)->static_fields)->___Instance_2;
		NullCheck(L_23);
		Director_OnTrackingLost_m11(L_23, /*hidden argument*/&Director_OnTrackingLost_m11_MethodInfo);
	}

IL_009a:
	{
		return;
	}
}
// Vuforia.GLErrorHandler
#include "AssemblyU2DCSharp_Vuforia_GLErrorHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GLErrorHandler_t118_il2cpp_TypeInfo;
// Vuforia.GLErrorHandler
#include "AssemblyU2DCSharp_Vuforia_GLErrorHandlerMethodDeclarations.h"

extern MethodInfo GLErrorHandler_DrawWindowContent_m424_MethodInfo;


// System.Void Vuforia.GLErrorHandler::.ctor()
extern MethodInfo GLErrorHandler__ctor_m420_MethodInfo;
extern "C" void GLErrorHandler__ctor_m420 (GLErrorHandler_t118 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Vuforia.GLErrorHandler::.cctor()
extern MethodInfo GLErrorHandler__cctor_m421_MethodInfo;
extern "C" void GLErrorHandler__cctor_m421 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		((GLErrorHandler_t118_StaticFields*)InitializedTypeInfo(&GLErrorHandler_t118_il2cpp_TypeInfo)->static_fields)->___mErrorText_3 = L_0;
		return;
	}
}
// System.Void Vuforia.GLErrorHandler::SetError(System.String)
extern MethodInfo GLErrorHandler_SetError_m422_MethodInfo;
extern "C" void GLErrorHandler_SetError_m422 (Object_t * __this /* static, unused */, String_t* ___errorText, MethodInfo* method)
{
	{
		String_t* L_0 = ___errorText;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GLErrorHandler_t118_il2cpp_TypeInfo));
		((GLErrorHandler_t118_StaticFields*)InitializedTypeInfo(&GLErrorHandler_t118_il2cpp_TypeInfo)->static_fields)->___mErrorText_3 = L_0;
		((GLErrorHandler_t118_StaticFields*)InitializedTypeInfo(&GLErrorHandler_t118_il2cpp_TypeInfo)->static_fields)->___mErrorOccurred_4 = 1;
		return;
	}
}
// System.Void Vuforia.GLErrorHandler::OnGUI()
extern MethodInfo GLErrorHandler_OnGUI_m423_MethodInfo;
extern "C" void GLErrorHandler_OnGUI_m423 (GLErrorHandler_t118 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GLErrorHandler_t118_il2cpp_TypeInfo));
		bool L_0 = ((GLErrorHandler_t118_StaticFields*)InitializedTypeInfo(&GLErrorHandler_t118_il2cpp_TypeInfo)->static_fields)->___mErrorOccurred_4;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_2 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Rect_t62  L_3 = {0};
		Rect__ctor_m741(&L_3, (0.0f), (0.0f), (((float)L_1)), (((float)L_2)), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		IntPtr_t L_4 = { &GLErrorHandler_DrawWindowContent_m424_MethodInfo };
		WindowFunction_t216 * L_5 = (WindowFunction_t216 *)il2cpp_codegen_object_new (InitializedTypeInfo(&WindowFunction_t216_il2cpp_TypeInfo));
		WindowFunction__ctor_m946(L_5, __this, L_4, /*hidden argument*/&WindowFunction__ctor_m946_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t201_il2cpp_TypeInfo));
		GUI_Window_m947(NULL /*static, unused*/, 0, L_3, L_5, (String_t*) &_stringLiteral83, /*hidden argument*/&GUI_Window_m947_MethodInfo);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Vuforia.GLErrorHandler::DrawWindowContent(System.Int32)
extern "C" void GLErrorHandler_DrawWindowContent_m424 (GLErrorHandler_t118 * __this, int32_t ___id, MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_1 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Rect_t62  L_2 = {0};
		Rect__ctor_m741(&L_2, (10.0f), (25.0f), (((float)((int32_t)((int32_t)L_0-(int32_t)((int32_t)20))))), (((float)((int32_t)((int32_t)L_1-(int32_t)((int32_t)95))))), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GLErrorHandler_t118_il2cpp_TypeInfo));
		String_t* L_3 = ((GLErrorHandler_t118_StaticFields*)InitializedTypeInfo(&GLErrorHandler_t118_il2cpp_TypeInfo)->static_fields)->___mErrorText_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&GUI_t201_il2cpp_TypeInfo));
		GUI_Label_m949(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&GUI_Label_m949_MethodInfo);
		int32_t L_4 = Screen_get_width_m678(NULL /*static, unused*/, /*hidden argument*/&Screen_get_width_m678_MethodInfo);
		int32_t L_5 = Screen_get_height_m679(NULL /*static, unused*/, /*hidden argument*/&Screen_get_height_m679_MethodInfo);
		Rect_t62  L_6 = {0};
		Rect__ctor_m741(&L_6, (((float)((int32_t)((int32_t)((int32_t)((int32_t)L_4/(int32_t)2))-(int32_t)((int32_t)75))))), (((float)((int32_t)((int32_t)L_5-(int32_t)((int32_t)60))))), (150.0f), (50.0f), /*hidden argument*/&Rect__ctor_m741_MethodInfo);
		bool L_7 = GUI_Button_m742(NULL /*static, unused*/, L_6, (String_t*) &_stringLiteral68, /*hidden argument*/&GUI_Button_m742_MethodInfo);
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		Application_Quit_m950(NULL /*static, unused*/, /*hidden argument*/&Application_Quit_m950_MethodInfo);
	}

IL_0062:
	{
		return;
	}
}
// Vuforia.HideExcessAreaBehaviour
#include "AssemblyU2DCSharp_Vuforia_HideExcessAreaBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo HideExcessAreaBehaviour_t119_il2cpp_TypeInfo;
// Vuforia.HideExcessAreaBehaviour
#include "AssemblyU2DCSharp_Vuforia_HideExcessAreaBehaviourMethodDeclarations.h"

// Vuforia.HideExcessAreaAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_HideExcessAreaAbstrMethodDeclarations.h"
extern MethodInfo HideExcessAreaAbstractBehaviour__ctor_m966_MethodInfo;


// System.Void Vuforia.HideExcessAreaBehaviour::.ctor()
extern MethodInfo HideExcessAreaBehaviour__ctor_m425_MethodInfo;
extern "C" void HideExcessAreaBehaviour__ctor_m425 (HideExcessAreaBehaviour_t119 * __this, MethodInfo* method)
{
	{
		HideExcessAreaAbstractBehaviour__ctor_m966(__this, /*hidden argument*/&HideExcessAreaAbstractBehaviour__ctor_m966_MethodInfo);
		return;
	}
}
// Vuforia.ImageTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_ImageTargetBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ImageTargetBehaviour_t121_il2cpp_TypeInfo;
// Vuforia.ImageTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_ImageTargetBehaviourMethodDeclarations.h"

// Vuforia.ImageTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetAbstractMethodDeclarations.h"
extern MethodInfo ImageTargetAbstractBehaviour__ctor_m967_MethodInfo;


// System.Void Vuforia.ImageTargetBehaviour::.ctor()
extern MethodInfo ImageTargetBehaviour__ctor_m426_MethodInfo;
extern "C" void ImageTargetBehaviour__ctor_m426 (ImageTargetBehaviour_t121 * __this, MethodInfo* method)
{
	{
		ImageTargetAbstractBehaviour__ctor_m967(__this, /*hidden argument*/&ImageTargetAbstractBehaviour__ctor_m967_MethodInfo);
		return;
	}
}
// Vuforia.AndroidUnityPlayer
#include "AssemblyU2DCSharp_Vuforia_AndroidUnityPlayer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AndroidUnityPlayer_t123_il2cpp_TypeInfo;
// Vuforia.AndroidUnityPlayer
#include "AssemblyU2DCSharp_Vuforia_AndroidUnityPlayerMethodDeclarations.h"

// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
extern TypeInfo SurfaceUtilities_t221_il2cpp_TypeInfo;
// Vuforia.SurfaceUtilities
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SurfaceUtilitiesMethodDeclarations.h"
// Vuforia.QCARUnity
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnityMethodDeclarations.h"
extern MethodInfo AndroidUnityPlayer_LoadNativeLibrariesFromJava_m436_MethodInfo;
extern MethodInfo AndroidUnityPlayer_InitAndroidPlatform_m437_MethodInfo;
extern MethodInfo AndroidUnityPlayer_InitQCAR_m438_MethodInfo;
extern MethodInfo AndroidUnityPlayer_InitializeSurface_m439_MethodInfo;
extern MethodInfo SurfaceUtilities_HasSurfaceBeenRecreated_m968_MethodInfo;
extern MethodInfo Screen_get_orientation_m969_MethodInfo;
extern MethodInfo AndroidUnityPlayer_ResetUnityScreenOrientation_m440_MethodInfo;
extern MethodInfo AndroidUnityPlayer_CheckOrientation_m441_MethodInfo;
extern MethodInfo QCARUnity_OnPause_m970_MethodInfo;
extern MethodInfo QCARUnity_OnResume_m971_MethodInfo;
extern MethodInfo QCARUnity_Deinit_m972_MethodInfo;
extern MethodInfo SurfaceUtilities_OnSurfaceCreated_m973_MethodInfo;
extern MethodInfo SurfaceUtilities_SetSurfaceOrientation_m974_MethodInfo;


// System.Void Vuforia.AndroidUnityPlayer::.ctor()
extern MethodInfo AndroidUnityPlayer__ctor_m427_MethodInfo;
extern "C" void AndroidUnityPlayer__ctor_m427 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibraries()
extern MethodInfo AndroidUnityPlayer_LoadNativeLibraries_m428_MethodInfo;
extern "C" void AndroidUnityPlayer_LoadNativeLibraries_m428 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		AndroidUnityPlayer_LoadNativeLibrariesFromJava_m436(__this, /*hidden argument*/&AndroidUnityPlayer_LoadNativeLibrariesFromJava_m436_MethodInfo);
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::InitializePlatform()
extern MethodInfo AndroidUnityPlayer_InitializePlatform_m429_MethodInfo;
extern "C" void AndroidUnityPlayer_InitializePlatform_m429 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		AndroidUnityPlayer_InitAndroidPlatform_m437(__this, /*hidden argument*/&AndroidUnityPlayer_InitAndroidPlatform_m437_MethodInfo);
		return;
	}
}
// Vuforia.QCARUnity/InitError Vuforia.AndroidUnityPlayer::Start(System.String)
extern MethodInfo AndroidUnityPlayer_Start_m430_MethodInfo;
extern "C" int32_t AndroidUnityPlayer_Start_m430 (AndroidUnityPlayer_t123 * __this, String_t* ___licenseKey, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___licenseKey;
		int32_t L_1 = AndroidUnityPlayer_InitQCAR_m438(__this, L_0, /*hidden argument*/&AndroidUnityPlayer_InitQCAR_m438_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		AndroidUnityPlayer_InitializeSurface_m439(__this, /*hidden argument*/&AndroidUnityPlayer_InitializeSurface_m439_MethodInfo);
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		return (int32_t)(L_3);
	}
}
// System.Void Vuforia.AndroidUnityPlayer::Update()
extern MethodInfo AndroidUnityPlayer_Update_m431_MethodInfo;
extern "C" void AndroidUnityPlayer_Update_m431 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SurfaceUtilities_t221_il2cpp_TypeInfo));
		bool L_0 = SurfaceUtilities_HasSurfaceBeenRecreated_m968(NULL /*static, unused*/, /*hidden argument*/&SurfaceUtilities_HasSurfaceBeenRecreated_m968_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AndroidUnityPlayer_InitializeSurface_m439(__this, /*hidden argument*/&AndroidUnityPlayer_InitializeSurface_m439_MethodInfo);
		goto IL_0031;
	}

IL_0015:
	{
		int32_t L_1 = Screen_get_orientation_m969(NULL /*static, unused*/, /*hidden argument*/&Screen_get_orientation_m969_MethodInfo);
		int32_t L_2 = (__this->___mScreenOrientation_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_002b;
		}
	}
	{
		AndroidUnityPlayer_ResetUnityScreenOrientation_m440(__this, /*hidden argument*/&AndroidUnityPlayer_ResetUnityScreenOrientation_m440_MethodInfo);
	}

IL_002b:
	{
		AndroidUnityPlayer_CheckOrientation_m441(__this, /*hidden argument*/&AndroidUnityPlayer_CheckOrientation_m441_MethodInfo);
	}

IL_0031:
	{
		int32_t L_3 = (__this->___mFramesSinceLastOrientationReset_4);
		__this->___mFramesSinceLastOrientationReset_4 = ((int32_t)((int32_t)L_3+(int32_t)1));
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::OnPause()
extern MethodInfo AndroidUnityPlayer_OnPause_m432_MethodInfo;
extern "C" void AndroidUnityPlayer_OnPause_m432 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		QCARUnity_OnPause_m970(NULL /*static, unused*/, /*hidden argument*/&QCARUnity_OnPause_m970_MethodInfo);
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::OnResume()
extern MethodInfo AndroidUnityPlayer_OnResume_m433_MethodInfo;
extern "C" void AndroidUnityPlayer_OnResume_m433 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		QCARUnity_OnResume_m971(NULL /*static, unused*/, /*hidden argument*/&QCARUnity_OnResume_m971_MethodInfo);
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::OnDestroy()
extern MethodInfo AndroidUnityPlayer_OnDestroy_m434_MethodInfo;
extern "C" void AndroidUnityPlayer_OnDestroy_m434 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		QCARUnity_Deinit_m972(NULL /*static, unused*/, /*hidden argument*/&QCARUnity_Deinit_m972_MethodInfo);
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::Dispose()
extern MethodInfo AndroidUnityPlayer_Dispose_m435_MethodInfo;
extern "C" void AndroidUnityPlayer_Dispose_m435 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibrariesFromJava()
extern "C" void AndroidUnityPlayer_LoadNativeLibrariesFromJava_m436 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::InitAndroidPlatform()
extern "C" void AndroidUnityPlayer_InitAndroidPlatform_m437 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 Vuforia.AndroidUnityPlayer::InitQCAR(System.String)
extern "C" int32_t AndroidUnityPlayer_InitQCAR_m438 (AndroidUnityPlayer_t123 * __this, String_t* ___licenseKey, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::InitializeSurface()
extern "C" void AndroidUnityPlayer_InitializeSurface_m439 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SurfaceUtilities_t221_il2cpp_TypeInfo));
		SurfaceUtilities_OnSurfaceCreated_m973(NULL /*static, unused*/, /*hidden argument*/&SurfaceUtilities_OnSurfaceCreated_m973_MethodInfo);
		AndroidUnityPlayer_ResetUnityScreenOrientation_m440(__this, /*hidden argument*/&AndroidUnityPlayer_ResetUnityScreenOrientation_m440_MethodInfo);
		AndroidUnityPlayer_CheckOrientation_m441(__this, /*hidden argument*/&AndroidUnityPlayer_CheckOrientation_m441_MethodInfo);
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::ResetUnityScreenOrientation()
extern "C" void AndroidUnityPlayer_ResetUnityScreenOrientation_m440 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_orientation_m969(NULL /*static, unused*/, /*hidden argument*/&Screen_get_orientation_m969_MethodInfo);
		__this->___mScreenOrientation_2 = L_0;
		__this->___mFramesSinceLastOrientationReset_4 = 0;
		return;
	}
}
// System.Void Vuforia.AndroidUnityPlayer::CheckOrientation()
extern "C" void AndroidUnityPlayer_CheckOrientation_m441 (AndroidUnityPlayer_t123 * __this, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = {0};
	{
		int32_t L_0 = (__this->___mFramesSinceLastOrientationReset_4);
		V_0 = ((((int32_t)L_0) < ((int32_t)((int32_t)25)))? 1 : 0);
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = (__this->___mFramesSinceLastJavaOrientationCheck_5);
		V_0 = ((((int32_t)L_2) > ((int32_t)((int32_t)60)))? 1 : 0);
	}

IL_001c:
	{
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_4 = (__this->___mScreenOrientation_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_2 = L_5;
		int32_t L_6 = V_2;
		int32_t L_7 = (__this->___mJavaScreenOrientation_3);
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = V_2;
		__this->___mJavaScreenOrientation_3 = L_8;
		int32_t L_9 = (__this->___mJavaScreenOrientation_3);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SurfaceUtilities_t221_il2cpp_TypeInfo));
		SurfaceUtilities_SetSurfaceOrientation_m974(NULL /*static, unused*/, L_9, /*hidden argument*/&SurfaceUtilities_SetSurfaceOrientation_m974_MethodInfo);
	}

IL_0049:
	{
		__this->___mFramesSinceLastJavaOrientationCheck_5 = 0;
		goto IL_0063;
	}

IL_0055:
	{
		int32_t L_10 = (__this->___mFramesSinceLastJavaOrientationCheck_5);
		__this->___mFramesSinceLastJavaOrientationCheck_5 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0063:
	{
		return;
	}
}
// Vuforia.ComponentFactoryStarterBehaviour
#include "AssemblyU2DCSharp_Vuforia_ComponentFactoryStarterBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ComponentFactoryStarterBehaviour_t124_il2cpp_TypeInfo;
// Vuforia.ComponentFactoryStarterBehaviour
#include "AssemblyU2DCSharp_Vuforia_ComponentFactoryStarterBehaviourMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_8.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// Vuforia.FactorySetter
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_FactorySetter.h"
// Vuforia.VuforiaBehaviourComponentFactory
#include "AssemblyU2DCSharp_Vuforia_VuforiaBehaviourComponentFactory.h"
extern TypeInfo MethodInfoU5BU5D_t222_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t223_il2cpp_TypeInfo;
extern TypeInfo Enumerator_t224_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo Attribute_t225_il2cpp_TypeInfo;
extern TypeInfo FactorySetter_t226_il2cpp_TypeInfo;
extern TypeInfo VuforiaBehaviourComponentFactory_t126_il2cpp_TypeInfo;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// Vuforia.VuforiaBehaviourComponentFactory
#include "AssemblyU2DCSharp_Vuforia_VuforiaBehaviourComponentFactoryMethodDeclarations.h"
// Vuforia.BehaviourComponentFactory
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_BehaviourComponentFMethodDeclarations.h"
extern Il2CppType Enumerator_t224_0_0_0;
extern Il2CppType Action_t71_0_0_0;
extern MethodInfo Object_GetType_m975_MethodInfo;
extern MethodInfo Type_GetMethods_m976_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m977_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m978_MethodInfo;
extern MethodInfo VuforiaBehaviourComponentFactory__ctor_m459_MethodInfo;
extern MethodInfo BehaviourComponentFactory_set_Instance_m979_MethodInfo;
struct Enumerable_t179;
struct Enumerable_t179;
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" List_1_t227 * Enumerable_ToList_TisObject_t_m981_gshared (Object_t * __this /* static, unused */, Object_t* p0, MethodInfo* method);
#define Enumerable_ToList_TisObject_t_m981(__this /* static, unused */, p0, method) (( List_1_t227 * (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_ToList_TisObject_t_m981_gshared)(__this /* static, unused */, p0, method)
// Declaration System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisMethodInfo_t_m980(__this /* static, unused */, p0, method) (( List_1_t228 * (*) (Object_t * /* static, unused */, Object_t*, MethodInfo*))Enumerable_ToList_TisObject_t_m981_gshared)(__this /* static, unused */, p0, method)
extern Il2CppGenericMethod Enumerable_ToList_TisMethodInfo_t_m980_GenericMethod;
extern Il2CppGenericMethod List_1_AddRange_m982_GenericMethod;
extern Il2CppGenericMethod List_1_GetEnumerator_m983_GenericMethod;
extern Il2CppGenericMethod Enumerator_get_Current_m984_GenericMethod;
extern Il2CppGenericMethod Enumerator_MoveNext_m985_GenericMethod;


// System.Void Vuforia.ComponentFactoryStarterBehaviour::.ctor()
extern MethodInfo ComponentFactoryStarterBehaviour__ctor_m442_MethodInfo;
extern "C" void ComponentFactoryStarterBehaviour__ctor_m442 (ComponentFactoryStarterBehaviour_t124 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Vuforia.ComponentFactoryStarterBehaviour::Awake()
extern MethodInfo ComponentFactoryStarterBehaviour_Awake_m443_MethodInfo;
extern TypeInfo* Enumerator_t224_il2cpp_TypeInfo_var;
extern MethodInfo* Enumerable_ToList_TisMethodInfo_t_m980_MethodInfo_var;
extern MethodInfo* List_1_AddRange_m982_MethodInfo_var;
extern MethodInfo* List_1_GetEnumerator_m983_MethodInfo_var;
extern MethodInfo* Enumerator_get_Current_m984_MethodInfo_var;
extern MethodInfo* Enumerator_MoveNext_m985_MethodInfo_var;
extern "C" void ComponentFactoryStarterBehaviour_Awake_m443 (ComponentFactoryStarterBehaviour_t124 * __this, MethodInfo* method)
{
	static bool ComponentFactoryStarterBehaviour_Awake_m443_init;
	if (!ComponentFactoryStarterBehaviour_Awake_m443_init)
	{
		Enumerator_t224_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&Enumerator_t224_0_0_0);
		Enumerable_ToList_TisMethodInfo_t_m980_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerable_ToList_TisMethodInfo_t_m980_GenericMethod);
		List_1_AddRange_m982_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_AddRange_m982_GenericMethod);
		List_1_GetEnumerator_m983_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&List_1_GetEnumerator_m983_GenericMethod);
		Enumerator_get_Current_m984_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_get_Current_m984_GenericMethod);
		Enumerator_MoveNext_m985_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Enumerator_MoveNext_m985_GenericMethod);
		ComponentFactoryStarterBehaviour_Awake_m443_init = true;
	}
	List_1_t228 * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	Enumerator_t224  V_2 = {0};
	Attribute_t225 * V_3 = {0};
	ObjectU5BU5D_t178* V_4 = {0};
	int32_t V_5 = 0;
	Action_t71 * V_6 = {0};
	Exception_t180 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t180 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = Object_GetType_m975(__this, /*hidden argument*/&Object_GetType_m975_MethodInfo);
		NullCheck(L_0);
		MethodInfoU5BU5D_t222* L_1 = (MethodInfoU5BU5D_t222*)VirtFuncInvoker1< MethodInfoU5BU5D_t222*, int32_t >::Invoke(&Type_GetMethods_m976_MethodInfo, L_0, ((int32_t)38));
		List_1_t228 * L_2 = Enumerable_ToList_TisMethodInfo_t_m980(NULL /*static, unused*/, (Object_t*)(Object_t*)L_1, /*hidden argument*/Enumerable_ToList_TisMethodInfo_t_m980_MethodInfo_var);
		V_0 = L_2;
		List_1_t228 * L_3 = V_0;
		Type_t * L_4 = Object_GetType_m975(__this, /*hidden argument*/&Object_GetType_m975_MethodInfo);
		NullCheck(L_4);
		MethodInfoU5BU5D_t222* L_5 = (MethodInfoU5BU5D_t222*)VirtFuncInvoker1< MethodInfoU5BU5D_t222*, int32_t >::Invoke(&Type_GetMethods_m976_MethodInfo, L_4, ((int32_t)22));
		NullCheck(L_3);
		List_1_AddRange_m982(L_3, (Object_t*)(Object_t*)L_5, /*hidden argument*/List_1_AddRange_m982_MethodInfo_var);
		List_1_t228 * L_6 = V_0;
		NullCheck(L_6);
		Enumerator_t224  L_7 = List_1_GetEnumerator_m983(L_6, /*hidden argument*/List_1_GetEnumerator_m983_MethodInfo_var);
		V_2 = L_7;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0098;
		}

IL_0032:
		{
			MethodInfo_t * L_8 = Enumerator_get_Current_m984((&V_2), /*hidden argument*/Enumerator_get_Current_m984_MethodInfo_var);
			V_1 = L_8;
			MethodInfo_t * L_9 = V_1;
			NullCheck(L_9);
			ObjectU5BU5D_t178* L_10 = (ObjectU5BU5D_t178*)VirtFuncInvoker1< ObjectU5BU5D_t178*, bool >::Invoke(&MemberInfo_GetCustomAttributes_m977_MethodInfo, L_9, 1);
			V_4 = L_10;
			V_5 = 0;
			goto IL_008d;
		}

IL_004b:
		{
			ObjectU5BU5D_t178* L_11 = V_4;
			int32_t L_12 = V_5;
			NullCheck(L_11);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
			int32_t L_13 = L_12;
			V_3 = ((Attribute_t225 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)), InitializedTypeInfo(&Attribute_t225_il2cpp_TypeInfo)));
			Attribute_t225 * L_14 = V_3;
			if (!((FactorySetter_t226 *)IsInst(L_14, InitializedTypeInfo(&FactorySetter_t226_il2cpp_TypeInfo))))
			{
				goto IL_0087;
			}
		}

IL_0061:
		{
			IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
			Type_t * L_15 = Type_GetTypeFromHandle_m942(NULL /*static, unused*/, LoadTypeToken(&Action_t71_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m942_MethodInfo);
			MethodInfo_t * L_16 = V_1;
			Delegate_t200 * L_17 = Delegate_CreateDelegate_m978(NULL /*static, unused*/, L_15, __this, L_16, /*hidden argument*/&Delegate_CreateDelegate_m978_MethodInfo);
			V_6 = ((Action_t71 *)IsInst(L_17, InitializedTypeInfo(&Action_t71_il2cpp_TypeInfo)));
			Action_t71 * L_18 = V_6;
			if (!L_18)
			{
				goto IL_0087;
			}
		}

IL_0080:
		{
			Action_t71 * L_19 = V_6;
			NullCheck(L_19);
			VirtActionInvoker0::Invoke(&Action_Invoke_m810_MethodInfo, L_19);
		}

IL_0087:
		{
			int32_t L_20 = V_5;
			V_5 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_008d:
		{
			int32_t L_21 = V_5;
			ObjectU5BU5D_t178* L_22 = V_4;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_004b;
			}
		}

IL_0098:
		{
			bool L_23 = Enumerator_MoveNext_m985((&V_2), /*hidden argument*/Enumerator_MoveNext_m985_MethodInfo_var);
			if (L_23)
			{
				goto IL_0032;
			}
		}

IL_00a4:
		{
			IL2CPP_LEAVE(0xB5, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t180 *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		Enumerator_t224  L_24 = V_2;
		Enumerator_t224  L_25 = L_24;
		Object_t * L_26 = Box(Enumerator_t224_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m626_MethodInfo, L_26);
		IL2CPP_END_FINALLY(169)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t180 *)
	}

IL_00b5:
	{
		return;
	}
}
// System.Void Vuforia.ComponentFactoryStarterBehaviour::SetBehaviourComponentFactory()
extern MethodInfo ComponentFactoryStarterBehaviour_SetBehaviourComponentFactory_m444_MethodInfo;
extern "C" void ComponentFactoryStarterBehaviour_SetBehaviourComponentFactory_m444 (ComponentFactoryStarterBehaviour_t124 * __this, MethodInfo* method)
{
	{
		Debug_Log_m583(NULL /*static, unused*/, (String_t*) &_stringLiteral84, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		VuforiaBehaviourComponentFactory_t126 * L_0 = (VuforiaBehaviourComponentFactory_t126 *)il2cpp_codegen_object_new (InitializedTypeInfo(&VuforiaBehaviourComponentFactory_t126_il2cpp_TypeInfo));
		VuforiaBehaviourComponentFactory__ctor_m459(L_0, /*hidden argument*/&VuforiaBehaviourComponentFactory__ctor_m459_MethodInfo);
		BehaviourComponentFactory_set_Instance_m979(NULL /*static, unused*/, L_0, /*hidden argument*/&BehaviourComponentFactory_set_Instance_m979_MethodInfo);
		return;
	}
}
// Vuforia.IOSUnityPlayer
#include "AssemblyU2DCSharp_Vuforia_IOSUnityPlayer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IOSUnityPlayer_t125_il2cpp_TypeInfo;
// Vuforia.IOSUnityPlayer
#include "AssemblyU2DCSharp_Vuforia_IOSUnityPlayerMethodDeclarations.h"

extern MethodInfo IOSUnityPlayer_setPlatFormNative_m456_MethodInfo;
extern MethodInfo IOSUnityPlayer_initQCARiOS_m457_MethodInfo;
extern MethodInfo IOSUnityPlayer_InitializeSurface_m454_MethodInfo;
extern MethodInfo IOSUnityPlayer_SetUnityScreenOrientation_m455_MethodInfo;
extern MethodInfo IOSUnityPlayer_setSurfaceOrientationiOS_m458_MethodInfo;


// System.Void Vuforia.IOSUnityPlayer::.ctor()
extern MethodInfo IOSUnityPlayer__ctor_m445_MethodInfo;
extern "C" void IOSUnityPlayer__ctor_m445 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::LoadNativeLibraries()
extern MethodInfo IOSUnityPlayer_LoadNativeLibraries_m446_MethodInfo;
extern "C" void IOSUnityPlayer_LoadNativeLibraries_m446 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::InitializePlatform()
extern MethodInfo IOSUnityPlayer_InitializePlatform_m447_MethodInfo;
extern "C" void IOSUnityPlayer_InitializePlatform_m447 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		IOSUnityPlayer_setPlatFormNative_m456(NULL /*static, unused*/, /*hidden argument*/&IOSUnityPlayer_setPlatFormNative_m456_MethodInfo);
		return;
	}
}
// Vuforia.QCARUnity/InitError Vuforia.IOSUnityPlayer::Start(System.String)
extern MethodInfo IOSUnityPlayer_Start_m448_MethodInfo;
extern "C" int32_t IOSUnityPlayer_Start_m448 (IOSUnityPlayer_t125 * __this, String_t* ___licenseKey, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Screen_get_orientation_m969(NULL /*static, unused*/, /*hidden argument*/&Screen_get_orientation_m969_MethodInfo);
		String_t* L_1 = ___licenseKey;
		int32_t L_2 = IOSUnityPlayer_initQCARiOS_m457(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&IOSUnityPlayer_initQCARiOS_m457_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		IOSUnityPlayer_InitializeSurface_m454(__this, /*hidden argument*/&IOSUnityPlayer_InitializeSurface_m454_MethodInfo);
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		return (int32_t)(L_4);
	}
}
// System.Void Vuforia.IOSUnityPlayer::Update()
extern MethodInfo IOSUnityPlayer_Update_m449_MethodInfo;
extern "C" void IOSUnityPlayer_Update_m449 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SurfaceUtilities_t221_il2cpp_TypeInfo));
		bool L_0 = SurfaceUtilities_HasSurfaceBeenRecreated_m968(NULL /*static, unused*/, /*hidden argument*/&SurfaceUtilities_HasSurfaceBeenRecreated_m968_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		IOSUnityPlayer_InitializeSurface_m454(__this, /*hidden argument*/&IOSUnityPlayer_InitializeSurface_m454_MethodInfo);
		goto IL_002b;
	}

IL_0015:
	{
		int32_t L_1 = Screen_get_orientation_m969(NULL /*static, unused*/, /*hidden argument*/&Screen_get_orientation_m969_MethodInfo);
		int32_t L_2 = (__this->___mScreenOrientation_0);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_002b;
		}
	}
	{
		IOSUnityPlayer_SetUnityScreenOrientation_m455(__this, /*hidden argument*/&IOSUnityPlayer_SetUnityScreenOrientation_m455_MethodInfo);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::Dispose()
extern MethodInfo IOSUnityPlayer_Dispose_m450_MethodInfo;
extern "C" void IOSUnityPlayer_Dispose_m450 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::OnPause()
extern MethodInfo IOSUnityPlayer_OnPause_m451_MethodInfo;
extern "C" void IOSUnityPlayer_OnPause_m451 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		QCARUnity_OnPause_m970(NULL /*static, unused*/, /*hidden argument*/&QCARUnity_OnPause_m970_MethodInfo);
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::OnResume()
extern MethodInfo IOSUnityPlayer_OnResume_m452_MethodInfo;
extern "C" void IOSUnityPlayer_OnResume_m452 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		QCARUnity_OnResume_m971(NULL /*static, unused*/, /*hidden argument*/&QCARUnity_OnResume_m971_MethodInfo);
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::OnDestroy()
extern MethodInfo IOSUnityPlayer_OnDestroy_m453_MethodInfo;
extern "C" void IOSUnityPlayer_OnDestroy_m453 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		QCARUnity_Deinit_m972(NULL /*static, unused*/, /*hidden argument*/&QCARUnity_Deinit_m972_MethodInfo);
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::InitializeSurface()
extern "C" void IOSUnityPlayer_InitializeSurface_m454 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SurfaceUtilities_t221_il2cpp_TypeInfo));
		SurfaceUtilities_OnSurfaceCreated_m973(NULL /*static, unused*/, /*hidden argument*/&SurfaceUtilities_OnSurfaceCreated_m973_MethodInfo);
		IOSUnityPlayer_SetUnityScreenOrientation_m455(__this, /*hidden argument*/&IOSUnityPlayer_SetUnityScreenOrientation_m455_MethodInfo);
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::SetUnityScreenOrientation()
extern "C" void IOSUnityPlayer_SetUnityScreenOrientation_m455 (IOSUnityPlayer_t125 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_orientation_m969(NULL /*static, unused*/, /*hidden argument*/&Screen_get_orientation_m969_MethodInfo);
		__this->___mScreenOrientation_0 = L_0;
		int32_t L_1 = (__this->___mScreenOrientation_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&SurfaceUtilities_t221_il2cpp_TypeInfo));
		SurfaceUtilities_SetSurfaceOrientation_m974(NULL /*static, unused*/, L_1, /*hidden argument*/&SurfaceUtilities_SetSurfaceOrientation_m974_MethodInfo);
		int32_t L_2 = (__this->___mScreenOrientation_0);
		IOSUnityPlayer_setSurfaceOrientationiOS_m458(NULL /*static, unused*/, L_2, /*hidden argument*/&IOSUnityPlayer_setSurfaceOrientationiOS_m458_MethodInfo);
		return;
	}
}
// System.Void Vuforia.IOSUnityPlayer::setPlatFormNative()
extern "C" {void DEFAULT_CALL setPlatFormNative();}
extern "C" void IOSUnityPlayer_setPlatFormNative_m456 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setPlatFormNative;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setPlatFormNative'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Int32 Vuforia.IOSUnityPlayer::initQCARiOS(System.Int32,System.String)
extern "C" {int32_t DEFAULT_CALL initQCARiOS(int32_t, char*);}
extern "C" int32_t IOSUnityPlayer_initQCARiOS_m457 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, String_t* ___licenseKey, MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)initQCARiOS;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'initQCARiOS'"));
		}
	}

	// Marshaling of parameter '___screenOrientation' to native representation

	// Marshaling of parameter '___licenseKey' to native representation
	char* ____licenseKey_marshaled = { 0 };
	____licenseKey_marshaled = il2cpp_codegen_marshal_string(___licenseKey);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(___screenOrientation, ____licenseKey_marshaled);

	// Marshaling cleanup of parameter '___screenOrientation' native representation

	// Marshaling cleanup of parameter '___licenseKey' native representation
	il2cpp_codegen_marshal_free(____licenseKey_marshaled);
	____licenseKey_marshaled = NULL;

	return _return_value;
}
// System.Void Vuforia.IOSUnityPlayer::setSurfaceOrientationiOS(System.Int32)
extern "C" {void DEFAULT_CALL setSurfaceOrientationiOS(int32_t);}
extern "C" void IOSUnityPlayer_setSurfaceOrientationiOS_m458 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setSurfaceOrientationiOS;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setSurfaceOrientationiOS'"));
		}
	}

	// Marshaling of parameter '___screenOrientation' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___screenOrientation);

	// Marshaling cleanup of parameter '___screenOrientation' native representation

}
#ifndef _MSC_VER
#else
#endif

// Vuforia.MaskOutAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_MaskOutAbstractBeha.h"
// Vuforia.MaskOutBehaviour
#include "AssemblyU2DCSharp_Vuforia_MaskOutBehaviour.h"
// Vuforia.VirtualButtonAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButtonAbstra.h"
// Vuforia.VirtualButtonBehaviour
#include "AssemblyU2DCSharp_Vuforia_VirtualButtonBehaviour.h"
// Vuforia.TurnOffAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TurnOffAbstractBeha.h"
// Vuforia.TurnOffBehaviour
#include "AssemblyU2DCSharp_Vuforia_TurnOffBehaviour.h"
// Vuforia.ImageTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetAbstract.h"
// Vuforia.MarkerAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_MarkerAbstractBehav.h"
// Vuforia.MarkerBehaviour
#include "AssemblyU2DCSharp_Vuforia_MarkerBehaviour.h"
// Vuforia.MultiTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_MultiTargetAbstract.h"
// Vuforia.MultiTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_MultiTargetBehaviour.h"
// Vuforia.CylinderTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CylinderTargetAbstr.h"
// Vuforia.WordAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordAbstractBehavio.h"
// Vuforia.WordBehaviour
#include "AssemblyU2DCSharp_Vuforia_WordBehaviour.h"
// Vuforia.TextRecoAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TextRecoAbstractBeh.h"
// Vuforia.TextRecoBehaviour
#include "AssemblyU2DCSharp_Vuforia_TextRecoBehaviour.h"
// Vuforia.ObjectTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTargetAbstrac.h"
// Vuforia.ObjectTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_ObjectTargetBehaviour.h"
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.MaskOutBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.MaskOutBehaviour>()
extern "C" MaskOutBehaviour_t138 * GameObject_AddComponent_TisMaskOutBehaviour_t138_m986 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.VirtualButtonBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.VirtualButtonBehaviour>()
extern "C" VirtualButtonBehaviour_t159 * GameObject_AddComponent_TisVirtualButtonBehaviour_t159_m987 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.TurnOffBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.TurnOffBehaviour>()
extern "C" TurnOffBehaviour_t151 * GameObject_AddComponent_TisTurnOffBehaviour_t151_m988 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.ImageTargetBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.ImageTargetBehaviour>()
extern "C" ImageTargetBehaviour_t121 * GameObject_AddComponent_TisImageTargetBehaviour_t121_m989 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.MarkerBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.MarkerBehaviour>()
extern "C" MarkerBehaviour_t137 * GameObject_AddComponent_TisMarkerBehaviour_t137_m990 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.MultiTargetBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.MultiTargetBehaviour>()
extern "C" MultiTargetBehaviour_t139 * GameObject_AddComponent_TisMultiTargetBehaviour_t139_m991 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.CylinderTargetBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.CylinderTargetBehaviour>()
extern "C" CylinderTargetBehaviour_t105 * GameObject_AddComponent_TisCylinderTargetBehaviour_t105_m992 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.WordBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.WordBehaviour>()
extern "C" WordBehaviour_t164 * GameObject_AddComponent_TisWordBehaviour_t164_m993 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.TextRecoBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.TextRecoBehaviour>()
extern "C" TextRecoBehaviour_t150 * GameObject_AddComponent_TisTextRecoBehaviour_t150_m994 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.ObjectTargetBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.ObjectTargetBehaviour>()
extern "C" ObjectTargetBehaviour_t140 * GameObject_AddComponent_TisObjectTargetBehaviour_t140_m995 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod GameObject_AddComponent_TisMaskOutBehaviour_t138_m986_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisVirtualButtonBehaviour_t159_m987_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisTurnOffBehaviour_t151_m988_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisImageTargetBehaviour_t121_m989_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisMarkerBehaviour_t137_m990_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisMultiTargetBehaviour_t139_m991_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisCylinderTargetBehaviour_t105_m992_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisWordBehaviour_t164_m993_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisTextRecoBehaviour_t150_m994_GenericMethod;
extern Il2CppGenericMethod GameObject_AddComponent_TisObjectTargetBehaviour_t140_m995_GenericMethod;


// System.Void Vuforia.VuforiaBehaviourComponentFactory::.ctor()
extern "C" void VuforiaBehaviourComponentFactory__ctor_m459 (VuforiaBehaviourComponentFactory_t126 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
// Vuforia.MaskOutAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddMaskOutBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddMaskOutBehaviour_m460_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisMaskOutBehaviour_t138_m986_MethodInfo_var;
extern "C" MaskOutAbstractBehaviour_t127 * VuforiaBehaviourComponentFactory_AddMaskOutBehaviour_m460 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddMaskOutBehaviour_m460_init;
	if (!VuforiaBehaviourComponentFactory_AddMaskOutBehaviour_m460_init)
	{
		GameObject_AddComponent_TisMaskOutBehaviour_t138_m986_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisMaskOutBehaviour_t138_m986_GenericMethod);
		VuforiaBehaviourComponentFactory_AddMaskOutBehaviour_m460_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		MaskOutBehaviour_t138 * L_1 = GameObject_AddComponent_TisMaskOutBehaviour_t138_m986(L_0, /*hidden argument*/GameObject_AddComponent_TisMaskOutBehaviour_t138_m986_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddVirtualButtonBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddVirtualButtonBehaviour_m461_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisVirtualButtonBehaviour_t159_m987_MethodInfo_var;
extern "C" VirtualButtonAbstractBehaviour_t128 * VuforiaBehaviourComponentFactory_AddVirtualButtonBehaviour_m461 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddVirtualButtonBehaviour_m461_init;
	if (!VuforiaBehaviourComponentFactory_AddVirtualButtonBehaviour_m461_init)
	{
		GameObject_AddComponent_TisVirtualButtonBehaviour_t159_m987_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisVirtualButtonBehaviour_t159_m987_GenericMethod);
		VuforiaBehaviourComponentFactory_AddVirtualButtonBehaviour_m461_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		VirtualButtonBehaviour_t159 * L_1 = GameObject_AddComponent_TisVirtualButtonBehaviour_t159_m987(L_0, /*hidden argument*/GameObject_AddComponent_TisVirtualButtonBehaviour_t159_m987_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.TurnOffAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddTurnOffBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddTurnOffBehaviour_m462_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisTurnOffBehaviour_t151_m988_MethodInfo_var;
extern "C" TurnOffAbstractBehaviour_t129 * VuforiaBehaviourComponentFactory_AddTurnOffBehaviour_m462 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddTurnOffBehaviour_m462_init;
	if (!VuforiaBehaviourComponentFactory_AddTurnOffBehaviour_m462_init)
	{
		GameObject_AddComponent_TisTurnOffBehaviour_t151_m988_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisTurnOffBehaviour_t151_m988_GenericMethod);
		VuforiaBehaviourComponentFactory_AddTurnOffBehaviour_m462_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		TurnOffBehaviour_t151 * L_1 = GameObject_AddComponent_TisTurnOffBehaviour_t151_m988(L_0, /*hidden argument*/GameObject_AddComponent_TisTurnOffBehaviour_t151_m988_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddImageTargetBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddImageTargetBehaviour_m463_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisImageTargetBehaviour_t121_m989_MethodInfo_var;
extern "C" ImageTargetAbstractBehaviour_t122 * VuforiaBehaviourComponentFactory_AddImageTargetBehaviour_m463 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddImageTargetBehaviour_m463_init;
	if (!VuforiaBehaviourComponentFactory_AddImageTargetBehaviour_m463_init)
	{
		GameObject_AddComponent_TisImageTargetBehaviour_t121_m989_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisImageTargetBehaviour_t121_m989_GenericMethod);
		VuforiaBehaviourComponentFactory_AddImageTargetBehaviour_m463_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		ImageTargetBehaviour_t121 * L_1 = GameObject_AddComponent_TisImageTargetBehaviour_t121_m989(L_0, /*hidden argument*/GameObject_AddComponent_TisImageTargetBehaviour_t121_m989_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.MarkerAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddMarkerBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddMarkerBehaviour_m464_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisMarkerBehaviour_t137_m990_MethodInfo_var;
extern "C" MarkerAbstractBehaviour_t130 * VuforiaBehaviourComponentFactory_AddMarkerBehaviour_m464 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddMarkerBehaviour_m464_init;
	if (!VuforiaBehaviourComponentFactory_AddMarkerBehaviour_m464_init)
	{
		GameObject_AddComponent_TisMarkerBehaviour_t137_m990_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisMarkerBehaviour_t137_m990_GenericMethod);
		VuforiaBehaviourComponentFactory_AddMarkerBehaviour_m464_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		MarkerBehaviour_t137 * L_1 = GameObject_AddComponent_TisMarkerBehaviour_t137_m990(L_0, /*hidden argument*/GameObject_AddComponent_TisMarkerBehaviour_t137_m990_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.MultiTargetAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddMultiTargetBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddMultiTargetBehaviour_m465_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisMultiTargetBehaviour_t139_m991_MethodInfo_var;
extern "C" MultiTargetAbstractBehaviour_t131 * VuforiaBehaviourComponentFactory_AddMultiTargetBehaviour_m465 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddMultiTargetBehaviour_m465_init;
	if (!VuforiaBehaviourComponentFactory_AddMultiTargetBehaviour_m465_init)
	{
		GameObject_AddComponent_TisMultiTargetBehaviour_t139_m991_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisMultiTargetBehaviour_t139_m991_GenericMethod);
		VuforiaBehaviourComponentFactory_AddMultiTargetBehaviour_m465_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		MultiTargetBehaviour_t139 * L_1 = GameObject_AddComponent_TisMultiTargetBehaviour_t139_m991(L_0, /*hidden argument*/GameObject_AddComponent_TisMultiTargetBehaviour_t139_m991_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddCylinderTargetBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddCylinderTargetBehaviour_m466_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisCylinderTargetBehaviour_t105_m992_MethodInfo_var;
extern "C" CylinderTargetAbstractBehaviour_t106 * VuforiaBehaviourComponentFactory_AddCylinderTargetBehaviour_m466 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddCylinderTargetBehaviour_m466_init;
	if (!VuforiaBehaviourComponentFactory_AddCylinderTargetBehaviour_m466_init)
	{
		GameObject_AddComponent_TisCylinderTargetBehaviour_t105_m992_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisCylinderTargetBehaviour_t105_m992_GenericMethod);
		VuforiaBehaviourComponentFactory_AddCylinderTargetBehaviour_m466_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		CylinderTargetBehaviour_t105 * L_1 = GameObject_AddComponent_TisCylinderTargetBehaviour_t105_m992(L_0, /*hidden argument*/GameObject_AddComponent_TisCylinderTargetBehaviour_t105_m992_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.WordAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddWordBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddWordBehaviour_m467_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisWordBehaviour_t164_m993_MethodInfo_var;
extern "C" WordAbstractBehaviour_t132 * VuforiaBehaviourComponentFactory_AddWordBehaviour_m467 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddWordBehaviour_m467_init;
	if (!VuforiaBehaviourComponentFactory_AddWordBehaviour_m467_init)
	{
		GameObject_AddComponent_TisWordBehaviour_t164_m993_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisWordBehaviour_t164_m993_GenericMethod);
		VuforiaBehaviourComponentFactory_AddWordBehaviour_m467_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		WordBehaviour_t164 * L_1 = GameObject_AddComponent_TisWordBehaviour_t164_m993(L_0, /*hidden argument*/GameObject_AddComponent_TisWordBehaviour_t164_m993_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.TextRecoAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddTextRecoBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddTextRecoBehaviour_m468_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisTextRecoBehaviour_t150_m994_MethodInfo_var;
extern "C" TextRecoAbstractBehaviour_t133 * VuforiaBehaviourComponentFactory_AddTextRecoBehaviour_m468 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddTextRecoBehaviour_m468_init;
	if (!VuforiaBehaviourComponentFactory_AddTextRecoBehaviour_m468_init)
	{
		GameObject_AddComponent_TisTextRecoBehaviour_t150_m994_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisTextRecoBehaviour_t150_m994_GenericMethod);
		VuforiaBehaviourComponentFactory_AddTextRecoBehaviour_m468_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		TextRecoBehaviour_t150 * L_1 = GameObject_AddComponent_TisTextRecoBehaviour_t150_m994(L_0, /*hidden argument*/GameObject_AddComponent_TisTextRecoBehaviour_t150_m994_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.VuforiaBehaviourComponentFactory::AddObjectTargetBehaviour(UnityEngine.GameObject)
extern MethodInfo VuforiaBehaviourComponentFactory_AddObjectTargetBehaviour_m469_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisObjectTargetBehaviour_t140_m995_MethodInfo_var;
extern "C" ObjectTargetAbstractBehaviour_t134 * VuforiaBehaviourComponentFactory_AddObjectTargetBehaviour_m469 (VuforiaBehaviourComponentFactory_t126 * __this, GameObject_t7 * ___gameObject, MethodInfo* method)
{
	static bool VuforiaBehaviourComponentFactory_AddObjectTargetBehaviour_m469_init;
	if (!VuforiaBehaviourComponentFactory_AddObjectTargetBehaviour_m469_init)
	{
		GameObject_AddComponent_TisObjectTargetBehaviour_t140_m995_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisObjectTargetBehaviour_t140_m995_GenericMethod);
		VuforiaBehaviourComponentFactory_AddObjectTargetBehaviour_m469_init = true;
	}
	{
		GameObject_t7 * L_0 = ___gameObject;
		NullCheck(L_0);
		ObjectTargetBehaviour_t140 * L_1 = GameObject_AddComponent_TisObjectTargetBehaviour_t140_m995(L_0, /*hidden argument*/GameObject_AddComponent_TisObjectTargetBehaviour_t140_m995_MethodInfo_var);
		return L_1;
	}
}
// Vuforia.KeepAliveBehaviour
#include "AssemblyU2DCSharp_Vuforia_KeepAliveBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeepAliveBehaviour_t135_il2cpp_TypeInfo;
// Vuforia.KeepAliveBehaviour
#include "AssemblyU2DCSharp_Vuforia_KeepAliveBehaviourMethodDeclarations.h"

// Vuforia.KeepAliveAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_KeepAliveAbstractBeMethodDeclarations.h"
extern MethodInfo KeepAliveAbstractBehaviour__ctor_m996_MethodInfo;


// System.Void Vuforia.KeepAliveBehaviour::.ctor()
extern MethodInfo KeepAliveBehaviour__ctor_m470_MethodInfo;
extern "C" void KeepAliveBehaviour__ctor_m470 (KeepAliveBehaviour_t135 * __this, MethodInfo* method)
{
	{
		KeepAliveAbstractBehaviour__ctor_m996(__this, /*hidden argument*/&KeepAliveAbstractBehaviour__ctor_m996_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MarkerBehaviour_t137_il2cpp_TypeInfo;
// Vuforia.MarkerBehaviour
#include "AssemblyU2DCSharp_Vuforia_MarkerBehaviourMethodDeclarations.h"

// Vuforia.MarkerAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_MarkerAbstractBehavMethodDeclarations.h"
extern MethodInfo MarkerAbstractBehaviour__ctor_m997_MethodInfo;


// System.Void Vuforia.MarkerBehaviour::.ctor()
extern MethodInfo MarkerBehaviour__ctor_m471_MethodInfo;
extern "C" void MarkerBehaviour__ctor_m471 (MarkerBehaviour_t137 * __this, MethodInfo* method)
{
	{
		MarkerAbstractBehaviour__ctor_m997(__this, /*hidden argument*/&MarkerAbstractBehaviour__ctor_m997_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MaskOutBehaviour_t138_il2cpp_TypeInfo;
// Vuforia.MaskOutBehaviour
#include "AssemblyU2DCSharp_Vuforia_MaskOutBehaviourMethodDeclarations.h"

extern TypeInfo QCARRuntimeUtilities_t229_il2cpp_TypeInfo;
extern TypeInfo MaskOutAbstractBehaviour_t127_il2cpp_TypeInfo;
extern TypeInfo MaterialU5BU5D_t230_il2cpp_TypeInfo;
// Vuforia.MaskOutAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_MaskOutAbstractBehaMethodDeclarations.h"
// Vuforia.QCARRuntimeUtilities
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRuntimeUtilitieMethodDeclarations.h"
extern Il2CppType MaterialU5BU5D_t230_0_0_0;
extern MethodInfo MaskOutAbstractBehaviour__ctor_m998_MethodInfo;
extern MethodInfo QCARRuntimeUtilities_IsQCAREnabled_m999_MethodInfo;
extern MethodInfo Renderer_get_materials_m1000_MethodInfo;
extern MethodInfo Renderer_set_sharedMaterial_m1001_MethodInfo;
extern MethodInfo Renderer_set_sharedMaterials_m1002_MethodInfo;


// System.Void Vuforia.MaskOutBehaviour::.ctor()
extern MethodInfo MaskOutBehaviour__ctor_m472_MethodInfo;
extern "C" void MaskOutBehaviour__ctor_m472 (MaskOutBehaviour_t138 * __this, MethodInfo* method)
{
	{
		MaskOutAbstractBehaviour__ctor_m998(__this, /*hidden argument*/&MaskOutAbstractBehaviour__ctor_m998_MethodInfo);
		return;
	}
}
// System.Void Vuforia.MaskOutBehaviour::Start()
extern MethodInfo MaskOutBehaviour_Start_m473_MethodInfo;
extern TypeInfo* MaterialU5BU5D_t230_il2cpp_TypeInfo_var;
extern MethodInfo* Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var;
extern "C" void MaskOutBehaviour_Start_m473 (MaskOutBehaviour_t138 * __this, MethodInfo* method)
{
	static bool MaskOutBehaviour_Start_m473_init;
	if (!MaskOutBehaviour_Start_m473_init)
	{
		MaterialU5BU5D_t230_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MaterialU5BU5D_t230_0_0_0);
		Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisRenderer_t23_m594_GenericMethod);
		MaskOutBehaviour_Start_m473_init = true;
	}
	Renderer_t23 * V_0 = {0};
	int32_t V_1 = 0;
	MaterialU5BU5D_t230* V_2 = {0};
	int32_t V_3 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&QCARRuntimeUtilities_t229_il2cpp_TypeInfo));
		bool L_0 = QCARRuntimeUtilities_IsQCAREnabled_m999(NULL /*static, unused*/, /*hidden argument*/&QCARRuntimeUtilities_IsQCAREnabled_m999_MethodInfo);
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		Renderer_t23 * L_1 = Component_GetComponent_TisRenderer_t23_m594(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t23_m594_MethodInfo_var);
		V_0 = L_1;
		Renderer_t23 * L_2 = V_0;
		NullCheck(L_2);
		MaterialU5BU5D_t230* L_3 = Renderer_get_materials_m1000(L_2, /*hidden argument*/&Renderer_get_materials_m1000_MethodInfo);
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		Renderer_t23 * L_5 = V_0;
		Material_t88 * L_6 = (__this->___maskMaterial_2);
		NullCheck(L_5);
		Renderer_set_sharedMaterial_m1001(L_5, L_6, /*hidden argument*/&Renderer_set_sharedMaterial_m1001_MethodInfo);
		goto IL_005b;
	}

IL_0032:
	{
		int32_t L_7 = V_1;
		V_2 = ((MaterialU5BU5D_t230*)SZArrayNew(MaterialU5BU5D_t230_il2cpp_TypeInfo_var, L_7));
		V_3 = 0;
		goto IL_004d;
	}

IL_0040:
	{
		MaterialU5BU5D_t230* L_8 = V_2;
		int32_t L_9 = V_3;
		Material_t88 * L_10 = (__this->___maskMaterial_2);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_10);
		*((Material_t88 **)(Material_t88 **)SZArrayLdElema(L_8, L_9)) = (Material_t88 *)L_10;
		int32_t L_11 = V_3;
		V_3 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_004d:
	{
		int32_t L_12 = V_3;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0040;
		}
	}
	{
		Renderer_t23 * L_14 = V_0;
		MaterialU5BU5D_t230* L_15 = V_2;
		NullCheck(L_14);
		Renderer_set_sharedMaterials_m1002(L_14, L_15, /*hidden argument*/&Renderer_set_sharedMaterials_m1002_MethodInfo);
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MultiTargetBehaviour_t139_il2cpp_TypeInfo;
// Vuforia.MultiTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_MultiTargetBehaviourMethodDeclarations.h"

// Vuforia.MultiTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_MultiTargetAbstractMethodDeclarations.h"
extern MethodInfo MultiTargetAbstractBehaviour__ctor_m1003_MethodInfo;


// System.Void Vuforia.MultiTargetBehaviour::.ctor()
extern MethodInfo MultiTargetBehaviour__ctor_m474_MethodInfo;
extern "C" void MultiTargetBehaviour__ctor_m474 (MultiTargetBehaviour_t139 * __this, MethodInfo* method)
{
	{
		MultiTargetAbstractBehaviour__ctor_m1003(__this, /*hidden argument*/&MultiTargetAbstractBehaviour__ctor_m1003_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ObjectTargetBehaviour_t140_il2cpp_TypeInfo;
// Vuforia.ObjectTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_ObjectTargetBehaviourMethodDeclarations.h"

// Vuforia.ObjectTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTargetAbstracMethodDeclarations.h"
extern MethodInfo ObjectTargetAbstractBehaviour__ctor_m1004_MethodInfo;


// System.Void Vuforia.ObjectTargetBehaviour::.ctor()
extern MethodInfo ObjectTargetBehaviour__ctor_m475_MethodInfo;
extern "C" void ObjectTargetBehaviour__ctor_m475 (ObjectTargetBehaviour_t140 * __this, MethodInfo* method)
{
	{
		ObjectTargetAbstractBehaviour__ctor_m1004(__this, /*hidden argument*/&ObjectTargetAbstractBehaviour__ctor_m1004_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropBehaviour_t111_il2cpp_TypeInfo;
// Vuforia.PropBehaviour
#include "AssemblyU2DCSharp_Vuforia_PropBehaviourMethodDeclarations.h"

// Vuforia.PropAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_PropAbstractBehavioMethodDeclarations.h"
extern MethodInfo PropAbstractBehaviour__ctor_m1005_MethodInfo;


// System.Void Vuforia.PropBehaviour::.ctor()
extern MethodInfo PropBehaviour__ctor_m476_MethodInfo;
extern "C" void PropBehaviour__ctor_m476 (PropBehaviour_t111 * __this, MethodInfo* method)
{
	{
		PropAbstractBehaviour__ctor_m1005(__this, /*hidden argument*/&PropAbstractBehaviour__ctor_m1005_MethodInfo);
		return;
	}
}
// Vuforia.QCARBehaviour
#include "AssemblyU2DCSharp_Vuforia_QCARBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo QCARBehaviour_t142_il2cpp_TypeInfo;
// Vuforia.QCARBehaviour
#include "AssemblyU2DCSharp_Vuforia_QCARBehaviourMethodDeclarations.h"

// Vuforia.NullUnityPlayer
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_NullUnityPlayer.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// Vuforia.PlayModeUnityPlayer
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_PlayModeUnityPlayer.h"
extern TypeInfo NullUnityPlayer_t231_il2cpp_TypeInfo;
extern TypeInfo PlayModeUnityPlayer_t232_il2cpp_TypeInfo;
// Vuforia.NullUnityPlayer
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_NullUnityPlayerMethodDeclarations.h"
// Vuforia.PlayModeUnityPlayer
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_PlayModeUnityPlayerMethodDeclarations.h"
extern MethodInfo QCARAbstractBehaviour__ctor_m1006_MethodInfo;
extern MethodInfo NullUnityPlayer__ctor_m1007_MethodInfo;
extern MethodInfo Application_get_platform_m1008_MethodInfo;
extern MethodInfo QCARRuntimeUtilities_IsPlayMode_m1009_MethodInfo;
extern MethodInfo PlayModeUnityPlayer__ctor_m1010_MethodInfo;
extern MethodInfo QCARAbstractBehaviour_SetUnityPlayerImplementation_m1011_MethodInfo;
struct GameObject_t7;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Vuforia.ComponentFactoryStarterBehaviour>()
// !!0 UnityEngine.GameObject::AddComponent<Vuforia.ComponentFactoryStarterBehaviour>()
extern "C" ComponentFactoryStarterBehaviour_t124 * GameObject_AddComponent_TisComponentFactoryStarterBehaviour_t124_m1012 (GameObject_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern Il2CppGenericMethod GameObject_AddComponent_TisComponentFactoryStarterBehaviour_t124_m1012_GenericMethod;


// System.Void Vuforia.QCARBehaviour::.ctor()
extern MethodInfo QCARBehaviour__ctor_m477_MethodInfo;
extern "C" void QCARBehaviour__ctor_m477 (QCARBehaviour_t142 * __this, MethodInfo* method)
{
	{
		QCARAbstractBehaviour__ctor_m1006(__this, /*hidden argument*/&QCARAbstractBehaviour__ctor_m1006_MethodInfo);
		return;
	}
}
// System.Void Vuforia.QCARBehaviour::Awake()
extern MethodInfo QCARBehaviour_Awake_m478_MethodInfo;
extern MethodInfo* GameObject_AddComponent_TisComponentFactoryStarterBehaviour_t124_m1012_MethodInfo_var;
extern "C" void QCARBehaviour_Awake_m478 (QCARBehaviour_t142 * __this, MethodInfo* method)
{
	static bool QCARBehaviour_Awake_m478_init;
	if (!QCARBehaviour_Awake_m478_init)
	{
		GameObject_AddComponent_TisComponentFactoryStarterBehaviour_t124_m1012_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_AddComponent_TisComponentFactoryStarterBehaviour_t124_m1012_GenericMethod);
		QCARBehaviour_Awake_m478_init = true;
	}
	Object_t * V_0 = {0};
	{
		NullUnityPlayer_t231 * L_0 = (NullUnityPlayer_t231 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullUnityPlayer_t231_il2cpp_TypeInfo));
		NullUnityPlayer__ctor_m1007(L_0, /*hidden argument*/&NullUnityPlayer__ctor_m1007_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = Application_get_platform_m1008(NULL /*static, unused*/, /*hidden argument*/&Application_get_platform_m1008_MethodInfo);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001d;
		}
	}
	{
		AndroidUnityPlayer_t123 * L_2 = (AndroidUnityPlayer_t123 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AndroidUnityPlayer_t123_il2cpp_TypeInfo));
		AndroidUnityPlayer__ctor_m427(L_2, /*hidden argument*/&AndroidUnityPlayer__ctor_m427_MethodInfo);
		V_0 = L_2;
		goto IL_0043;
	}

IL_001d:
	{
		int32_t L_3 = Application_get_platform_m1008(NULL /*static, unused*/, /*hidden argument*/&Application_get_platform_m1008_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		IOSUnityPlayer_t125 * L_4 = (IOSUnityPlayer_t125 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOSUnityPlayer_t125_il2cpp_TypeInfo));
		IOSUnityPlayer__ctor_m445(L_4, /*hidden argument*/&IOSUnityPlayer__ctor_m445_MethodInfo);
		V_0 = L_4;
		goto IL_0043;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&QCARRuntimeUtilities_t229_il2cpp_TypeInfo));
		bool L_5 = QCARRuntimeUtilities_IsPlayMode_m1009(NULL /*static, unused*/, /*hidden argument*/&QCARRuntimeUtilities_IsPlayMode_m1009_MethodInfo);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		PlayModeUnityPlayer_t232 * L_6 = (PlayModeUnityPlayer_t232 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PlayModeUnityPlayer_t232_il2cpp_TypeInfo));
		PlayModeUnityPlayer__ctor_m1010(L_6, /*hidden argument*/&PlayModeUnityPlayer__ctor_m1010_MethodInfo);
		V_0 = L_6;
	}

IL_0043:
	{
		Object_t * L_7 = V_0;
		QCARAbstractBehaviour_SetUnityPlayerImplementation_m1011(__this, L_7, /*hidden argument*/&QCARAbstractBehaviour_SetUnityPlayerImplementation_m1011_MethodInfo);
		GameObject_t7 * L_8 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_8);
		GameObject_AddComponent_TisComponentFactoryStarterBehaviour_t124_m1012(L_8, /*hidden argument*/GameObject_AddComponent_TisComponentFactoryStarterBehaviour_t124_m1012_MethodInfo_var);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReconstructionBehaviour_t110_il2cpp_TypeInfo;
// Vuforia.ReconstructionBehaviour
#include "AssemblyU2DCSharp_Vuforia_ReconstructionBehaviourMethodDeclarations.h"

extern MethodInfo ReconstructionAbstractBehaviour__ctor_m1013_MethodInfo;


// System.Void Vuforia.ReconstructionBehaviour::.ctor()
extern MethodInfo ReconstructionBehaviour__ctor_m479_MethodInfo;
extern "C" void ReconstructionBehaviour__ctor_m479 (ReconstructionBehaviour_t110 * __this, MethodInfo* method)
{
	{
		ReconstructionAbstractBehaviour__ctor_m1013(__this, /*hidden argument*/&ReconstructionAbstractBehaviour__ctor_m1013_MethodInfo);
		return;
	}
}
// Vuforia.ReconstructionFromTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_ReconstructionFromTargetBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ReconstructionFromTargetBehaviour_t145_il2cpp_TypeInfo;
// Vuforia.ReconstructionFromTargetBehaviour
#include "AssemblyU2DCSharp_Vuforia_ReconstructionFromTargetBehaviourMethodDeclarations.h"

// Vuforia.ReconstructionFromTargetAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ReconstructionFromTMethodDeclarations.h"
extern MethodInfo ReconstructionFromTargetAbstractBehaviour__ctor_m1014_MethodInfo;


// System.Void Vuforia.ReconstructionFromTargetBehaviour::.ctor()
extern MethodInfo ReconstructionFromTargetBehaviour__ctor_m480_MethodInfo;
extern "C" void ReconstructionFromTargetBehaviour__ctor_m480 (ReconstructionFromTargetBehaviour_t145 * __this, MethodInfo* method)
{
	{
		ReconstructionFromTargetAbstractBehaviour__ctor_m1014(__this, /*hidden argument*/&ReconstructionFromTargetAbstractBehaviour__ctor_m1014_MethodInfo);
		return;
	}
}
// Vuforia.SmartTerrainTrackerBehaviour
#include "AssemblyU2DCSharp_Vuforia_SmartTerrainTrackerBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SmartTerrainTrackerBehaviour_t147_il2cpp_TypeInfo;
// Vuforia.SmartTerrainTrackerBehaviour
#include "AssemblyU2DCSharp_Vuforia_SmartTerrainTrackerBehaviourMethodDeclarations.h"

// Vuforia.SmartTerrainTrackerAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainTrackerMethodDeclarations.h"
extern MethodInfo SmartTerrainTrackerAbstractBehaviour__ctor_m1015_MethodInfo;


// System.Void Vuforia.SmartTerrainTrackerBehaviour::.ctor()
extern MethodInfo SmartTerrainTrackerBehaviour__ctor_m481_MethodInfo;
extern "C" void SmartTerrainTrackerBehaviour__ctor_m481 (SmartTerrainTrackerBehaviour_t147 * __this, MethodInfo* method)
{
	{
		SmartTerrainTrackerAbstractBehaviour__ctor_m1015(__this, /*hidden argument*/&SmartTerrainTrackerAbstractBehaviour__ctor_m1015_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SurfaceBehaviour_t112_il2cpp_TypeInfo;
// Vuforia.SurfaceBehaviour
#include "AssemblyU2DCSharp_Vuforia_SurfaceBehaviourMethodDeclarations.h"

// Vuforia.SurfaceAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SurfaceAbstractBehaMethodDeclarations.h"
extern MethodInfo SurfaceAbstractBehaviour__ctor_m1016_MethodInfo;


// System.Void Vuforia.SurfaceBehaviour::.ctor()
extern MethodInfo SurfaceBehaviour__ctor_m482_MethodInfo;
extern "C" void SurfaceBehaviour__ctor_m482 (SurfaceBehaviour_t112 * __this, MethodInfo* method)
{
	{
		SurfaceAbstractBehaviour__ctor_m1016(__this, /*hidden argument*/&SurfaceAbstractBehaviour__ctor_m1016_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextRecoBehaviour_t150_il2cpp_TypeInfo;
// Vuforia.TextRecoBehaviour
#include "AssemblyU2DCSharp_Vuforia_TextRecoBehaviourMethodDeclarations.h"

// Vuforia.TextRecoAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TextRecoAbstractBehMethodDeclarations.h"
extern MethodInfo TextRecoAbstractBehaviour__ctor_m1017_MethodInfo;


// System.Void Vuforia.TextRecoBehaviour::.ctor()
extern MethodInfo TextRecoBehaviour__ctor_m483_MethodInfo;
extern "C" void TextRecoBehaviour__ctor_m483 (TextRecoBehaviour_t150 * __this, MethodInfo* method)
{
	{
		TextRecoAbstractBehaviour__ctor_m1017(__this, /*hidden argument*/&TextRecoAbstractBehaviour__ctor_m1017_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TurnOffBehaviour_t151_il2cpp_TypeInfo;
// Vuforia.TurnOffBehaviour
#include "AssemblyU2DCSharp_Vuforia_TurnOffBehaviourMethodDeclarations.h"

// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilter.h"
// Vuforia.TurnOffAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TurnOffAbstractBehaMethodDeclarations.h"
extern MethodInfo TurnOffAbstractBehaviour__ctor_m1018_MethodInfo;
struct Component_t167;
// UnityEngine.CastHelper`1<UnityEngine.MeshFilter>
#include "UnityEngine_UnityEngine_CastHelper_1_gen_15.h"
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t233_m1019(__this, method) (( MeshFilter_t233 * (*) (Component_t167 *, MethodInfo*))Component_GetComponent_TisObject_t_m521_gshared)(__this, method)
extern Il2CppGenericMethod Component_GetComponent_TisMeshFilter_t233_m1019_GenericMethod;


// System.Void Vuforia.TurnOffBehaviour::.ctor()
extern MethodInfo TurnOffBehaviour__ctor_m484_MethodInfo;
extern "C" void TurnOffBehaviour__ctor_m484 (TurnOffBehaviour_t151 * __this, MethodInfo* method)
{
	{
		TurnOffAbstractBehaviour__ctor_m1018(__this, /*hidden argument*/&TurnOffAbstractBehaviour__ctor_m1018_MethodInfo);
		return;
	}
}
// System.Void Vuforia.TurnOffBehaviour::Awake()
extern MethodInfo TurnOffBehaviour_Awake_m485_MethodInfo;
extern MethodInfo* Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var;
extern "C" void TurnOffBehaviour_Awake_m485 (TurnOffBehaviour_t151 * __this, MethodInfo* method)
{
	static bool TurnOffBehaviour_Awake_m485_init;
	if (!TurnOffBehaviour_Awake_m485_init)
	{
		Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisMeshRenderer_t60_m785_GenericMethod);
		Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisMeshFilter_t233_m1019_GenericMethod);
		TurnOffBehaviour_Awake_m485_init = true;
	}
	MeshRenderer_t60 * V_0 = {0};
	MeshFilter_t233 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&QCARRuntimeUtilities_t229_il2cpp_TypeInfo));
		bool L_0 = QCARRuntimeUtilities_IsQCAREnabled_m999(NULL /*static, unused*/, /*hidden argument*/&QCARRuntimeUtilities_IsQCAREnabled_m999_MethodInfo);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		MeshRenderer_t60 * L_1 = Component_GetComponent_TisMeshRenderer_t60_m785(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var);
		V_0 = L_1;
		MeshRenderer_t60 * L_2 = V_0;
		Object_Destroy_m625(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_Destroy_m625_MethodInfo);
		MeshFilter_t233 * L_3 = Component_GetComponent_TisMeshFilter_t233_m1019(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var);
		V_1 = L_3;
		MeshFilter_t233 * L_4 = V_1;
		Object_Destroy_m625(NULL /*static, unused*/, L_4, /*hidden argument*/&Object_Destroy_m625_MethodInfo);
	}

IL_0024:
	{
		return;
	}
}
// Vuforia.TurnOffWordBehaviour
#include "AssemblyU2DCSharp_Vuforia_TurnOffWordBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TurnOffWordBehaviour_t152_il2cpp_TypeInfo;
// Vuforia.TurnOffWordBehaviour
#include "AssemblyU2DCSharp_Vuforia_TurnOffWordBehaviourMethodDeclarations.h"

extern MethodInfo Transform_FindChild_m1020_MethodInfo;


// System.Void Vuforia.TurnOffWordBehaviour::.ctor()
extern MethodInfo TurnOffWordBehaviour__ctor_m486_MethodInfo;
extern "C" void TurnOffWordBehaviour__ctor_m486 (TurnOffWordBehaviour_t152 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Vuforia.TurnOffWordBehaviour::Awake()
extern MethodInfo TurnOffWordBehaviour_Awake_m487_MethodInfo;
extern MethodInfo* Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var;
extern "C" void TurnOffWordBehaviour_Awake_m487 (TurnOffWordBehaviour_t152 * __this, MethodInfo* method)
{
	static bool TurnOffWordBehaviour_Awake_m487_init;
	if (!TurnOffWordBehaviour_Awake_m487_init)
	{
		Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisMeshRenderer_t60_m785_GenericMethod);
		TurnOffWordBehaviour_Awake_m487_init = true;
	}
	MeshRenderer_t60 * V_0 = {0};
	Transform_t2 * V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&QCARRuntimeUtilities_t229_il2cpp_TypeInfo));
		bool L_0 = QCARRuntimeUtilities_IsQCAREnabled_m999(NULL /*static, unused*/, /*hidden argument*/&QCARRuntimeUtilities_IsQCAREnabled_m999_MethodInfo);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		MeshRenderer_t60 * L_1 = Component_GetComponent_TisMeshRenderer_t60_m785(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t60_m785_MethodInfo_var);
		V_0 = L_1;
		MeshRenderer_t60 * L_2 = V_0;
		Object_Destroy_m625(NULL /*static, unused*/, L_2, /*hidden argument*/&Object_Destroy_m625_MethodInfo);
		Transform_t2 * L_3 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_3);
		Transform_t2 * L_4 = Transform_FindChild_m1020(L_3, (String_t*) &_stringLiteral85, /*hidden argument*/&Transform_FindChild_m1020_MethodInfo);
		V_1 = L_4;
		Transform_t2 * L_5 = V_1;
		bool L_6 = Object_op_Inequality_m527(NULL /*static, unused*/, L_5, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Inequality_m527_MethodInfo);
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Transform_t2 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_t7 * L_8 = Component_get_gameObject_m596(L_7, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		Object_Destroy_m625(NULL /*static, unused*/, L_8, /*hidden argument*/&Object_Destroy_m625_MethodInfo);
	}

IL_003f:
	{
		return;
	}
}
// Vuforia.UserDefinedTargetBuildingBehaviour
#include "AssemblyU2DCSharp_Vuforia_UserDefinedTargetBuildingBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UserDefinedTargetBuildingBehaviour_t153_il2cpp_TypeInfo;
// Vuforia.UserDefinedTargetBuildingBehaviour
#include "AssemblyU2DCSharp_Vuforia_UserDefinedTargetBuildingBehaviourMethodDeclarations.h"

// Vuforia.UserDefinedTargetBuildingAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_UserDefinedTargetBuMethodDeclarations.h"
extern MethodInfo UserDefinedTargetBuildingAbstractBehaviour__ctor_m1021_MethodInfo;


// System.Void Vuforia.UserDefinedTargetBuildingBehaviour::.ctor()
extern MethodInfo UserDefinedTargetBuildingBehaviour__ctor_m488_MethodInfo;
extern "C" void UserDefinedTargetBuildingBehaviour__ctor_m488 (UserDefinedTargetBuildingBehaviour_t153 * __this, MethodInfo* method)
{
	{
		UserDefinedTargetBuildingAbstractBehaviour__ctor_m1021(__this, /*hidden argument*/&UserDefinedTargetBuildingAbstractBehaviour__ctor_m1021_MethodInfo);
		return;
	}
}
// Vuforia.VideoBackgroundBehaviour
#include "AssemblyU2DCSharp_Vuforia_VideoBackgroundBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VideoBackgroundBehaviour_t155_il2cpp_TypeInfo;
// Vuforia.VideoBackgroundBehaviour
#include "AssemblyU2DCSharp_Vuforia_VideoBackgroundBehaviourMethodDeclarations.h"

// Vuforia.VideoBackgroundAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VideoBackgroundAbstMethodDeclarations.h"
extern MethodInfo VideoBackgroundAbstractBehaviour__ctor_m1022_MethodInfo;


// System.Void Vuforia.VideoBackgroundBehaviour::.ctor()
extern MethodInfo VideoBackgroundBehaviour__ctor_m489_MethodInfo;
extern "C" void VideoBackgroundBehaviour__ctor_m489 (VideoBackgroundBehaviour_t155 * __this, MethodInfo* method)
{
	{
		VideoBackgroundAbstractBehaviour__ctor_m1022(__this, /*hidden argument*/&VideoBackgroundAbstractBehaviour__ctor_m1022_MethodInfo);
		return;
	}
}
// Vuforia.VideoTextureRenderer
#include "AssemblyU2DCSharp_Vuforia_VideoTextureRenderer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VideoTextureRenderer_t157_il2cpp_TypeInfo;
// Vuforia.VideoTextureRenderer
#include "AssemblyU2DCSharp_Vuforia_VideoTextureRendererMethodDeclarations.h"

// Vuforia.VideoTextureRendererAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VideoTextureRendereMethodDeclarations.h"
extern MethodInfo VideoTextureRendererAbstractBehaviour__ctor_m1023_MethodInfo;


// System.Void Vuforia.VideoTextureRenderer::.ctor()
extern MethodInfo VideoTextureRenderer__ctor_m490_MethodInfo;
extern "C" void VideoTextureRenderer__ctor_m490 (VideoTextureRenderer_t157 * __this, MethodInfo* method)
{
	{
		VideoTextureRendererAbstractBehaviour__ctor_m1023(__this, /*hidden argument*/&VideoTextureRendererAbstractBehaviour__ctor_m1023_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo VirtualButtonBehaviour_t159_il2cpp_TypeInfo;
// Vuforia.VirtualButtonBehaviour
#include "AssemblyU2DCSharp_Vuforia_VirtualButtonBehaviourMethodDeclarations.h"

// Vuforia.VirtualButtonAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButtonAbstraMethodDeclarations.h"
extern MethodInfo VirtualButtonAbstractBehaviour__ctor_m1024_MethodInfo;


// System.Void Vuforia.VirtualButtonBehaviour::.ctor()
extern MethodInfo VirtualButtonBehaviour__ctor_m491_MethodInfo;
extern "C" void VirtualButtonBehaviour__ctor_m491 (VirtualButtonBehaviour_t159 * __this, MethodInfo* method)
{
	{
		VirtualButtonAbstractBehaviour__ctor_m1024(__this, /*hidden argument*/&VirtualButtonAbstractBehaviour__ctor_m1024_MethodInfo);
		return;
	}
}
// Vuforia.WebCamBehaviour
#include "AssemblyU2DCSharp_Vuforia_WebCamBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WebCamBehaviour_t160_il2cpp_TypeInfo;
// Vuforia.WebCamBehaviour
#include "AssemblyU2DCSharp_Vuforia_WebCamBehaviourMethodDeclarations.h"

// Vuforia.WebCamAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamAbstractBehavMethodDeclarations.h"
extern MethodInfo WebCamAbstractBehaviour__ctor_m1025_MethodInfo;


// System.Void Vuforia.WebCamBehaviour::.ctor()
extern MethodInfo WebCamBehaviour__ctor_m492_MethodInfo;
extern "C" void WebCamBehaviour__ctor_m492 (WebCamBehaviour_t160 * __this, MethodInfo* method)
{
	{
		WebCamAbstractBehaviour__ctor_m1025(__this, /*hidden argument*/&WebCamAbstractBehaviour__ctor_m1025_MethodInfo);
		return;
	}
}
// Vuforia.WireframeBehaviour
#include "AssemblyU2DCSharp_Vuforia_WireframeBehaviour.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WireframeBehaviour_t162_il2cpp_TypeInfo;
// Vuforia.WireframeBehaviour
#include "AssemblyU2DCSharp_Vuforia_WireframeBehaviourMethodDeclarations.h"

// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_Mesh.h"
// Vuforia.QCARManager
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManager.h"
extern TypeInfo QCARManager_t234_il2cpp_TypeInfo;
extern TypeInfo Transform_t2_il2cpp_TypeInfo;
// Vuforia.QCARManager
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerMethodDeclarations.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilterMethodDeclarations.h"
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"
extern MethodInfo Material__ctor_m1026_MethodInfo;
extern MethodInfo Material_get_shader_m1027_MethodInfo;
extern MethodInfo QCARManager_get_Instance_m1028_MethodInfo;
extern MethodInfo QCARManager_get_ARCameraTransform_m1029_MethodInfo;
extern MethodInfo Camera_get_current_m1030_MethodInfo;
extern MethodInfo WireframeBehaviour_CreateLineMaterial_m494_MethodInfo;
extern MethodInfo MeshFilter_get_sharedMesh_m1031_MethodInfo;
extern MethodInfo Mesh_get_vertices_m1032_MethodInfo;
extern MethodInfo Mesh_get_triangles_m1033_MethodInfo;
extern MethodInfo Transform_get_localToWorldMatrix_m1034_MethodInfo;
extern MethodInfo GL_Vertex_m1035_MethodInfo;
extern MethodInfo Gizmos_set_matrix_m1036_MethodInfo;
extern MethodInfo Gizmos_set_color_m1037_MethodInfo;
extern MethodInfo Gizmos_DrawLine_m1038_MethodInfo;
struct GameObject_t7;
struct GameObject_t7;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t178* GameObject_GetComponentsInChildren_TisObject_t_m1040_gshared (GameObject_t7 * __this, MethodInfo* method);
#define GameObject_GetComponentsInChildren_TisObject_t_m1040(__this, method) (( ObjectU5BU5D_t178* (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1040_gshared)(__this, method)
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Camera>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Camera>()
#define GameObject_GetComponentsInChildren_TisCamera_t15_m1039(__this, method) (( CameraU5BU5D_t235* (*) (GameObject_t7 *, MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m1040_gshared)(__this, method)
extern Il2CppGenericMethod GameObject_GetComponentsInChildren_TisCamera_t15_m1039_GenericMethod;


// System.Void Vuforia.WireframeBehaviour::.ctor()
extern MethodInfo WireframeBehaviour__ctor_m493_MethodInfo;
extern "C" void WireframeBehaviour__ctor_m493 (WireframeBehaviour_t162 * __this, MethodInfo* method)
{
	{
		__this->___ShowLines_3 = 1;
		Color_t51  L_0 = Color_get_green_m736(NULL /*static, unused*/, /*hidden argument*/&Color_get_green_m736_MethodInfo);
		__this->___LineColor_4 = L_0;
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::CreateLineMaterial()
extern TypeInfo* ObjectU5BU5D_t178_il2cpp_TypeInfo_var;
extern "C" void WireframeBehaviour_CreateLineMaterial_m494 (WireframeBehaviour_t162 * __this, MethodInfo* method)
{
	static bool WireframeBehaviour_CreateLineMaterial_m494_init;
	if (!WireframeBehaviour_CreateLineMaterial_m494_init)
	{
		ObjectU5BU5D_t178_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t178_0_0_0);
		WireframeBehaviour_CreateLineMaterial_m494_init = true;
	}
	{
		ObjectU5BU5D_t178* L_0 = ((ObjectU5BU5D_t178*)SZArrayNew(ObjectU5BU5D_t178_il2cpp_TypeInfo_var, ((int32_t)9)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral86);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral86;
		ObjectU5BU5D_t178* L_1 = L_0;
		Color_t51 * L_2 = &(__this->___LineColor_4);
		float L_3 = (L_2->___r_0);
		float L_4 = L_3;
		Object_t * L_5 = Box(InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo), &L_4);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t178* L_6 = L_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)(String_t*) &_stringLiteral11;
		ObjectU5BU5D_t178* L_7 = L_6;
		Color_t51 * L_8 = &(__this->___LineColor_4);
		float L_9 = (L_8->___g_1);
		float L_10 = L_9;
		Object_t * L_11 = Box(InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo), &L_10);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t178* L_12 = L_7;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 4)) = (Object_t *)(String_t*) &_stringLiteral11;
		ObjectU5BU5D_t178* L_13 = L_12;
		Color_t51 * L_14 = &(__this->___LineColor_4);
		float L_15 = (L_14->___b_2);
		float L_16 = L_15;
		Object_t * L_17 = Box(InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo), &L_16);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 5);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 5)) = (Object_t *)L_17;
		ObjectU5BU5D_t178* L_18 = L_13;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 6);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 6)) = (Object_t *)(String_t*) &_stringLiteral11;
		ObjectU5BU5D_t178* L_19 = L_18;
		Color_t51 * L_20 = &(__this->___LineColor_4);
		float L_21 = (L_20->___a_3);
		float L_22 = L_21;
		Object_t * L_23 = Box(InitializedTypeInfo(&Single_t43_il2cpp_TypeInfo), &L_22);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 7);
		ArrayElementTypeCheck (L_19, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 7)) = (Object_t *)L_23;
		ObjectU5BU5D_t178* L_24 = L_19;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 8);
		ArrayElementTypeCheck (L_24, (String_t*) &_stringLiteral87);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 8)) = (Object_t *)(String_t*) &_stringLiteral87;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_25 = String_Concat_m633(NULL /*static, unused*/, L_24, /*hidden argument*/&String_Concat_m633_MethodInfo);
		Material_t88 * L_26 = (Material_t88 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Material_t88_il2cpp_TypeInfo));
		Material__ctor_m1026(L_26, L_25, /*hidden argument*/&Material__ctor_m1026_MethodInfo);
		__this->___mLineMaterial_2 = L_26;
		Material_t88 * L_27 = (__this->___mLineMaterial_2);
		NullCheck(L_27);
		Object_set_hideFlags_m597(L_27, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m597_MethodInfo);
		Material_t88 * L_28 = (__this->___mLineMaterial_2);
		NullCheck(L_28);
		Shader_t205 * L_29 = Material_get_shader_m1027(L_28, /*hidden argument*/&Material_get_shader_m1027_MethodInfo);
		NullCheck(L_29);
		Object_set_hideFlags_m597(L_29, ((int32_t)61), /*hidden argument*/&Object_set_hideFlags_m597_MethodInfo);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnRenderObject()
extern MethodInfo WireframeBehaviour_OnRenderObject_m495_MethodInfo;
extern MethodInfo* GameObject_GetComponentsInChildren_TisCamera_t15_m1039_MethodInfo_var;
extern MethodInfo* Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var;
extern "C" void WireframeBehaviour_OnRenderObject_m495 (WireframeBehaviour_t162 * __this, MethodInfo* method)
{
	static bool WireframeBehaviour_OnRenderObject_m495_init;
	if (!WireframeBehaviour_OnRenderObject_m495_init)
	{
		GameObject_GetComponentsInChildren_TisCamera_t15_m1039_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&GameObject_GetComponentsInChildren_TisCamera_t15_m1039_GenericMethod);
		Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisMeshFilter_t233_m1019_GenericMethod);
		WireframeBehaviour_OnRenderObject_m495_init = true;
	}
	GameObject_t7 * V_0 = {0};
	CameraU5BU5D_t235* V_1 = {0};
	bool V_2 = false;
	Camera_t15 * V_3 = {0};
	CameraU5BU5D_t235* V_4 = {0};
	int32_t V_5 = 0;
	MeshFilter_t233 * V_6 = {0};
	Mesh_t236 * V_7 = {0};
	Vector3U5BU5D_t8* V_8 = {0};
	Int32U5BU5D_t34* V_9 = {0};
	int32_t V_10 = 0;
	Vector3_t5  V_11 = {0};
	Vector3_t5  V_12 = {0};
	Vector3_t5  V_13 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&QCARManager_t234_il2cpp_TypeInfo));
		QCARManager_t234 * L_0 = QCARManager_get_Instance_m1028(NULL /*static, unused*/, /*hidden argument*/&QCARManager_get_Instance_m1028_MethodInfo);
		NullCheck(L_0);
		Transform_t2 * L_1 = (Transform_t2 *)VirtFuncInvoker0< Transform_t2 * >::Invoke(&QCARManager_get_ARCameraTransform_m1029_MethodInfo, L_0);
		NullCheck(L_1);
		GameObject_t7 * L_2 = Component_get_gameObject_m596(L_1, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		V_0 = L_2;
		GameObject_t7 * L_3 = V_0;
		NullCheck(L_3);
		CameraU5BU5D_t235* L_4 = GameObject_GetComponentsInChildren_TisCamera_t15_m1039(L_3, /*hidden argument*/GameObject_GetComponentsInChildren_TisCamera_t15_m1039_MethodInfo_var);
		V_1 = L_4;
		V_2 = 0;
		CameraU5BU5D_t235* L_5 = V_1;
		V_4 = L_5;
		V_5 = 0;
		goto IL_0042;
	}

IL_0024:
	{
		CameraU5BU5D_t235* L_6 = V_4;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(Camera_t15 **)(Camera_t15 **)SZArrayLdElema(L_6, L_8));
		Camera_t15 * L_9 = Camera_get_current_m1030(NULL /*static, unused*/, /*hidden argument*/&Camera_get_current_m1030_MethodInfo);
		Camera_t15 * L_10 = V_3;
		bool L_11 = Object_op_Equality_m528(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		V_2 = 1;
	}

IL_003c:
	{
		int32_t L_12 = V_5;
		V_5 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_13 = V_5;
		CameraU5BU5D_t235* L_14 = V_4;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0054:
	{
		bool L_16 = (__this->___ShowLines_3);
		if (L_16)
		{
			goto IL_0060;
		}
	}
	{
		return;
	}

IL_0060:
	{
		MeshFilter_t233 * L_17 = Component_GetComponent_TisMeshFilter_t233_m1019(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var);
		V_6 = L_17;
		MeshFilter_t233 * L_18 = V_6;
		bool L_19 = Object_op_Implicit_m748(NULL /*static, unused*/, L_18, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (L_19)
		{
			goto IL_0075;
		}
	}
	{
		return;
	}

IL_0075:
	{
		Material_t88 * L_20 = (__this->___mLineMaterial_2);
		bool L_21 = Object_op_Equality_m528(NULL /*static, unused*/, L_20, (Object_t172 *)NULL, /*hidden argument*/&Object_op_Equality_m528_MethodInfo);
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		WireframeBehaviour_CreateLineMaterial_m494(__this, /*hidden argument*/&WireframeBehaviour_CreateLineMaterial_m494_MethodInfo);
	}

IL_008c:
	{
		MeshFilter_t233 * L_22 = V_6;
		NullCheck(L_22);
		Mesh_t236 * L_23 = MeshFilter_get_sharedMesh_m1031(L_22, /*hidden argument*/&MeshFilter_get_sharedMesh_m1031_MethodInfo);
		V_7 = L_23;
		Mesh_t236 * L_24 = V_7;
		NullCheck(L_24);
		Vector3U5BU5D_t8* L_25 = Mesh_get_vertices_m1032(L_24, /*hidden argument*/&Mesh_get_vertices_m1032_MethodInfo);
		V_8 = L_25;
		Mesh_t236 * L_26 = V_7;
		NullCheck(L_26);
		Int32U5BU5D_t34* L_27 = Mesh_get_triangles_m1033(L_26, /*hidden argument*/&Mesh_get_triangles_m1033_MethodInfo);
		V_9 = L_27;
		GL_PushMatrix_m854(NULL /*static, unused*/, /*hidden argument*/&GL_PushMatrix_m854_MethodInfo);
		Transform_t2 * L_28 = Component_get_transform_m508(__this, /*hidden argument*/&Component_get_transform_m508_MethodInfo);
		NullCheck(L_28);
		Matrix4x4_t27  L_29 = Transform_get_localToWorldMatrix_m1034(L_28, /*hidden argument*/&Transform_get_localToWorldMatrix_m1034_MethodInfo);
		GL_MultMatrix_m890(NULL /*static, unused*/, L_29, /*hidden argument*/&GL_MultMatrix_m890_MethodInfo);
		Material_t88 * L_30 = (__this->___mLineMaterial_2);
		NullCheck(L_30);
		Material_SetPass_m884(L_30, 0, /*hidden argument*/&Material_SetPass_m884_MethodInfo);
		GL_Begin_m886(NULL /*static, unused*/, 1, /*hidden argument*/&GL_Begin_m886_MethodInfo);
		V_10 = 0;
		goto IL_0144;
	}

IL_00d7:
	{
		Vector3U5BU5D_t8* L_31 = V_8;
		Int32U5BU5D_t34* L_32 = V_9;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, L_33);
		int32_t L_34 = L_33;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, (*(int32_t*)(int32_t*)SZArrayLdElema(L_32, L_34)));
		V_11 = (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_31, (*(int32_t*)(int32_t*)SZArrayLdElema(L_32, L_34)))));
		Vector3U5BU5D_t8* L_35 = V_8;
		Int32U5BU5D_t34* L_36 = V_9;
		int32_t L_37 = V_10;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)((int32_t)L_37+(int32_t)1)));
		int32_t L_38 = ((int32_t)((int32_t)L_37+(int32_t)1));
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, (*(int32_t*)(int32_t*)SZArrayLdElema(L_36, L_38)));
		V_12 = (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_35, (*(int32_t*)(int32_t*)SZArrayLdElema(L_36, L_38)))));
		Vector3U5BU5D_t8* L_39 = V_8;
		Int32U5BU5D_t34* L_40 = V_9;
		int32_t L_41 = V_10;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)((int32_t)L_41+(int32_t)2)));
		int32_t L_42 = ((int32_t)((int32_t)L_41+(int32_t)2));
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, (*(int32_t*)(int32_t*)SZArrayLdElema(L_40, L_42)));
		V_13 = (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_39, (*(int32_t*)(int32_t*)SZArrayLdElema(L_40, L_42)))));
		Vector3_t5  L_43 = V_11;
		GL_Vertex_m1035(NULL /*static, unused*/, L_43, /*hidden argument*/&GL_Vertex_m1035_MethodInfo);
		Vector3_t5  L_44 = V_12;
		GL_Vertex_m1035(NULL /*static, unused*/, L_44, /*hidden argument*/&GL_Vertex_m1035_MethodInfo);
		Vector3_t5  L_45 = V_12;
		GL_Vertex_m1035(NULL /*static, unused*/, L_45, /*hidden argument*/&GL_Vertex_m1035_MethodInfo);
		Vector3_t5  L_46 = V_13;
		GL_Vertex_m1035(NULL /*static, unused*/, L_46, /*hidden argument*/&GL_Vertex_m1035_MethodInfo);
		Vector3_t5  L_47 = V_13;
		GL_Vertex_m1035(NULL /*static, unused*/, L_47, /*hidden argument*/&GL_Vertex_m1035_MethodInfo);
		Vector3_t5  L_48 = V_11;
		GL_Vertex_m1035(NULL /*static, unused*/, L_48, /*hidden argument*/&GL_Vertex_m1035_MethodInfo);
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)3));
	}

IL_0144:
	{
		int32_t L_50 = V_10;
		Int32U5BU5D_t34* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00d7;
		}
	}
	{
		GL_End_m888(NULL /*static, unused*/, /*hidden argument*/&GL_End_m888_MethodInfo);
		GL_PopMatrix_m858(NULL /*static, unused*/, /*hidden argument*/&GL_PopMatrix_m858_MethodInfo);
		return;
	}
}
// System.Void Vuforia.WireframeBehaviour::OnDrawGizmos()
extern MethodInfo WireframeBehaviour_OnDrawGizmos_m496_MethodInfo;
extern MethodInfo* Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var;
extern "C" void WireframeBehaviour_OnDrawGizmos_m496 (WireframeBehaviour_t162 * __this, MethodInfo* method)
{
	static bool WireframeBehaviour_OnDrawGizmos_m496_init;
	if (!WireframeBehaviour_OnDrawGizmos_m496_init)
	{
		Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisMeshFilter_t233_m1019_GenericMethod);
		WireframeBehaviour_OnDrawGizmos_m496_init = true;
	}
	MeshFilter_t233 * V_0 = {0};
	Mesh_t236 * V_1 = {0};
	Vector3U5BU5D_t8* V_2 = {0};
	Int32U5BU5D_t34* V_3 = {0};
	int32_t V_4 = 0;
	Vector3_t5  V_5 = {0};
	Vector3_t5  V_6 = {0};
	Vector3_t5  V_7 = {0};
	{
		bool L_0 = (__this->___ShowLines_3);
		if (!L_0)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_1 = Behaviour_get_enabled_m675(__this, /*hidden argument*/&Behaviour_get_enabled_m675_MethodInfo);
		if (!L_1)
		{
			goto IL_00ed;
		}
	}
	{
		MeshFilter_t233 * L_2 = Component_GetComponent_TisMeshFilter_t233_m1019(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t233_m1019_MethodInfo_var);
		V_0 = L_2;
		MeshFilter_t233 * L_3 = V_0;
		bool L_4 = Object_op_Implicit_m748(NULL /*static, unused*/, L_3, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		GameObject_t7 * L_5 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_5);
		Transform_t2 * L_6 = GameObject_get_transform_m558(L_5, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_6);
		Vector3_t5  L_7 = Transform_get_position_m506(L_6, /*hidden argument*/&Transform_get_position_m506_MethodInfo);
		GameObject_t7 * L_8 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_8);
		Transform_t2 * L_9 = GameObject_get_transform_m558(L_8, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_9);
		Quaternion_t10  L_10 = Transform_get_rotation_m513(L_9, /*hidden argument*/&Transform_get_rotation_m513_MethodInfo);
		GameObject_t7 * L_11 = Component_get_gameObject_m596(__this, /*hidden argument*/&Component_get_gameObject_m596_MethodInfo);
		NullCheck(L_11);
		Transform_t2 * L_12 = GameObject_get_transform_m558(L_11, /*hidden argument*/&GameObject_get_transform_m558_MethodInfo);
		NullCheck(L_12);
		Vector3_t5  L_13 = Transform_get_lossyScale_m832(L_12, /*hidden argument*/&Transform_get_lossyScale_m832_MethodInfo);
		Matrix4x4_t27  L_14 = Matrix4x4_TRS_m883(NULL /*static, unused*/, L_7, L_10, L_13, /*hidden argument*/&Matrix4x4_TRS_m883_MethodInfo);
		Gizmos_set_matrix_m1036(NULL /*static, unused*/, L_14, /*hidden argument*/&Gizmos_set_matrix_m1036_MethodInfo);
		Color_t51  L_15 = (__this->___LineColor_4);
		Gizmos_set_color_m1037(NULL /*static, unused*/, L_15, /*hidden argument*/&Gizmos_set_color_m1037_MethodInfo);
		MeshFilter_t233 * L_16 = V_0;
		NullCheck(L_16);
		Mesh_t236 * L_17 = MeshFilter_get_sharedMesh_m1031(L_16, /*hidden argument*/&MeshFilter_get_sharedMesh_m1031_MethodInfo);
		V_1 = L_17;
		Mesh_t236 * L_18 = V_1;
		NullCheck(L_18);
		Vector3U5BU5D_t8* L_19 = Mesh_get_vertices_m1032(L_18, /*hidden argument*/&Mesh_get_vertices_m1032_MethodInfo);
		V_2 = L_19;
		Mesh_t236 * L_20 = V_1;
		NullCheck(L_20);
		Int32U5BU5D_t34* L_21 = Mesh_get_triangles_m1033(L_20, /*hidden argument*/&Mesh_get_triangles_m1033_MethodInfo);
		V_3 = L_21;
		V_4 = 0;
		goto IL_00e3;
	}

IL_008b:
	{
		Vector3U5BU5D_t8* L_22 = V_2;
		Int32U5BU5D_t34* L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, (*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)));
		V_5 = (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_22, (*(int32_t*)(int32_t*)SZArrayLdElema(L_23, L_25)))));
		Vector3U5BU5D_t8* L_26 = V_2;
		Int32U5BU5D_t34* L_27 = V_3;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)L_28+(int32_t)1)));
		int32_t L_29 = ((int32_t)((int32_t)L_28+(int32_t)1));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, (*(int32_t*)(int32_t*)SZArrayLdElema(L_27, L_29)));
		V_6 = (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_26, (*(int32_t*)(int32_t*)SZArrayLdElema(L_27, L_29)))));
		Vector3U5BU5D_t8* L_30 = V_2;
		Int32U5BU5D_t34* L_31 = V_3;
		int32_t L_32 = V_4;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32+(int32_t)2)));
		int32_t L_33 = ((int32_t)((int32_t)L_32+(int32_t)2));
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, (*(int32_t*)(int32_t*)SZArrayLdElema(L_31, L_33)));
		V_7 = (*(Vector3_t5 *)((Vector3_t5 *)(Vector3_t5 *)SZArrayLdElema(L_30, (*(int32_t*)(int32_t*)SZArrayLdElema(L_31, L_33)))));
		Vector3_t5  L_34 = V_5;
		Vector3_t5  L_35 = V_6;
		Gizmos_DrawLine_m1038(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/&Gizmos_DrawLine_m1038_MethodInfo);
		Vector3_t5  L_36 = V_6;
		Vector3_t5  L_37 = V_7;
		Gizmos_DrawLine_m1038(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/&Gizmos_DrawLine_m1038_MethodInfo);
		Vector3_t5  L_38 = V_7;
		Vector3_t5  L_39 = V_5;
		Gizmos_DrawLine_m1038(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/&Gizmos_DrawLine_m1038_MethodInfo);
		int32_t L_40 = V_4;
		V_4 = ((int32_t)((int32_t)L_40+(int32_t)3));
	}

IL_00e3:
	{
		int32_t L_41 = V_4;
		Int32U5BU5D_t34* L_42 = V_3;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)(((Array_t *)L_42)->max_length))))))
		{
			goto IL_008b;
		}
	}

IL_00ed:
	{
		return;
	}
}
// Vuforia.WireframeTrackableEventHandler
#include "AssemblyU2DCSharp_Vuforia_WireframeTrackableEventHandler.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WireframeTrackableEventHandler_t163_il2cpp_TypeInfo;
// Vuforia.WireframeTrackableEventHandler
#include "AssemblyU2DCSharp_Vuforia_WireframeTrackableEventHandlerMethodDeclarations.h"

extern MethodInfo WireframeTrackableEventHandler_OnTrackingFound_m500_MethodInfo;
extern MethodInfo WireframeTrackableEventHandler_OnTrackingLost_m501_MethodInfo;
struct Component_t167;
// Declaration !!0[] UnityEngine.Component::GetComponentsInChildren<Vuforia.WireframeBehaviour>(System.Boolean)
// !!0[] UnityEngine.Component::GetComponentsInChildren<Vuforia.WireframeBehaviour>(System.Boolean)
#define Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041(__this, p0, method) (( WireframeBehaviourU5BU5D_t237* (*) (Component_t167 *, bool, MethodInfo*))Component_GetComponentsInChildren_TisObject_t_m759_gshared)(__this, p0, method)
extern Il2CppGenericMethod Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_GenericMethod;


// System.Void Vuforia.WireframeTrackableEventHandler::.ctor()
extern MethodInfo WireframeTrackableEventHandler__ctor_m497_MethodInfo;
extern "C" void WireframeTrackableEventHandler__ctor_m497 (WireframeTrackableEventHandler_t163 * __this, MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m504(__this, /*hidden argument*/&MonoBehaviour__ctor_m504_MethodInfo);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::Start()
extern MethodInfo WireframeTrackableEventHandler_Start_m498_MethodInfo;
extern MethodInfo* Component_GetComponent_TisTrackableBehaviour_t116_m963_MethodInfo_var;
extern "C" void WireframeTrackableEventHandler_Start_m498 (WireframeTrackableEventHandler_t163 * __this, MethodInfo* method)
{
	static bool WireframeTrackableEventHandler_Start_m498_init;
	if (!WireframeTrackableEventHandler_Start_m498_init)
	{
		Component_GetComponent_TisTrackableBehaviour_t116_m963_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponent_TisTrackableBehaviour_t116_m963_GenericMethod);
		WireframeTrackableEventHandler_Start_m498_init = true;
	}
	{
		TrackableBehaviour_t116 * L_0 = Component_GetComponent_TisTrackableBehaviour_t116_m963(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t116_m963_MethodInfo_var);
		__this->___mTrackableBehaviour_2 = L_0;
		TrackableBehaviour_t116 * L_1 = (__this->___mTrackableBehaviour_2);
		bool L_2 = Object_op_Implicit_m748(NULL /*static, unused*/, L_1, /*hidden argument*/&Object_op_Implicit_m748_MethodInfo);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t116 * L_3 = (__this->___mTrackableBehaviour_2);
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m960(L_3, __this, /*hidden argument*/&TrackableBehaviour_RegisterTrackableEventHandler_m960_MethodInfo);
	}

IL_0028:
	{
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern MethodInfo WireframeTrackableEventHandler_OnTrackableStateChanged_m499_MethodInfo;
extern "C" void WireframeTrackableEventHandler_OnTrackableStateChanged_m499 (WireframeTrackableEventHandler_t163 * __this, int32_t ___previousStatus, int32_t ___newStatus, MethodInfo* method)
{
	{
		int32_t L_0 = ___newStatus;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___newStatus;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0019;
		}
	}

IL_000e:
	{
		WireframeTrackableEventHandler_OnTrackingFound_m500(__this, /*hidden argument*/&WireframeTrackableEventHandler_OnTrackingFound_m500_MethodInfo);
		goto IL_001f;
	}

IL_0019:
	{
		WireframeTrackableEventHandler_OnTrackingLost_m501(__this, /*hidden argument*/&WireframeTrackableEventHandler_OnTrackingLost_m501_MethodInfo);
	}

IL_001f:
	{
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingFound()
extern MethodInfo* Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_MethodInfo_var;
extern "C" void WireframeTrackableEventHandler_OnTrackingFound_m500 (WireframeTrackableEventHandler_t163 * __this, MethodInfo* method)
{
	static bool WireframeTrackableEventHandler_OnTrackingFound_m500_init;
	if (!WireframeTrackableEventHandler_OnTrackingFound_m500_init)
	{
		Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisRenderer_t23_m964_GenericMethod);
		Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCollider_t39_m965_GenericMethod);
		Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_GenericMethod);
		WireframeTrackableEventHandler_OnTrackingFound_m500_init = true;
	}
	RendererU5BU5D_t219* V_0 = {0};
	ColliderU5BU5D_t220* V_1 = {0};
	WireframeBehaviourU5BU5D_t237* V_2 = {0};
	Renderer_t23 * V_3 = {0};
	RendererU5BU5D_t219* V_4 = {0};
	int32_t V_5 = 0;
	Collider_t39 * V_6 = {0};
	ColliderU5BU5D_t220* V_7 = {0};
	int32_t V_8 = 0;
	WireframeBehaviour_t162 * V_9 = {0};
	WireframeBehaviourU5BU5D_t237* V_10 = {0};
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t219* L_0 = Component_GetComponentsInChildren_TisRenderer_t23_m964(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var);
		V_0 = L_0;
		ColliderU5BU5D_t220* L_1 = Component_GetComponentsInChildren_TisCollider_t39_m965(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var);
		V_1 = L_1;
		WireframeBehaviourU5BU5D_t237* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_MethodInfo_var);
		V_2 = L_2;
		RendererU5BU5D_t219* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t219* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_3 = (*(Renderer_t23 **)(Renderer_t23 **)SZArrayLdElema(L_4, L_6));
		Renderer_t23 * L_7 = V_3;
		NullCheck(L_7);
		Renderer_set_enabled_m784(L_7, 1, /*hidden argument*/&Renderer_set_enabled_m784_MethodInfo);
		int32_t L_8 = V_5;
		V_5 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_9 = V_5;
		RendererU5BU5D_t219* L_10 = V_4;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t220* L_11 = V_1;
		V_7 = L_11;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t220* L_12 = V_7;
		int32_t L_13 = V_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_6 = (*(Collider_t39 **)(Collider_t39 **)SZArrayLdElema(L_12, L_14));
		Collider_t39 * L_15 = V_6;
		NullCheck(L_15);
		Collider_set_enabled_m961(L_15, 1, /*hidden argument*/&Collider_set_enabled_m961_MethodInfo);
		int32_t L_16 = V_8;
		V_8 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_17 = V_8;
		ColliderU5BU5D_t220* L_18 = V_7;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		WireframeBehaviourU5BU5D_t237* L_19 = V_2;
		V_10 = L_19;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		WireframeBehaviourU5BU5D_t237* L_20 = V_10;
		int32_t L_21 = V_11;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_9 = (*(WireframeBehaviour_t162 **)(WireframeBehaviour_t162 **)SZArrayLdElema(L_20, L_22));
		WireframeBehaviour_t162 * L_23 = V_9;
		NullCheck(L_23);
		Behaviour_set_enabled_m530(L_23, 1, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		int32_t L_24 = V_11;
		V_11 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_25 = V_11;
		WireframeBehaviourU5BU5D_t237* L_26 = V_10;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0077;
		}
	}
	{
		TrackableBehaviour_t116 * L_27 = (__this->___mTrackableBehaviour_2);
		NullCheck(L_27);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TrackableBehaviour_get_TrackableName_m962_MethodInfo, L_27);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_29 = String_Concat_m803(NULL /*static, unused*/, (String_t*) &_stringLiteral80, L_28, (String_t*) &_stringLiteral81, /*hidden argument*/&String_Concat_m803_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_29, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		return;
	}
}
// System.Void Vuforia.WireframeTrackableEventHandler::OnTrackingLost()
extern MethodInfo* Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var;
extern MethodInfo* Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_MethodInfo_var;
extern "C" void WireframeTrackableEventHandler_OnTrackingLost_m501 (WireframeTrackableEventHandler_t163 * __this, MethodInfo* method)
{
	static bool WireframeTrackableEventHandler_OnTrackingLost_m501_init;
	if (!WireframeTrackableEventHandler_OnTrackingLost_m501_init)
	{
		Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisRenderer_t23_m964_GenericMethod);
		Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisCollider_t39_m965_GenericMethod);
		Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_GenericMethod);
		WireframeTrackableEventHandler_OnTrackingLost_m501_init = true;
	}
	RendererU5BU5D_t219* V_0 = {0};
	ColliderU5BU5D_t220* V_1 = {0};
	WireframeBehaviourU5BU5D_t237* V_2 = {0};
	Renderer_t23 * V_3 = {0};
	RendererU5BU5D_t219* V_4 = {0};
	int32_t V_5 = 0;
	Collider_t39 * V_6 = {0};
	ColliderU5BU5D_t220* V_7 = {0};
	int32_t V_8 = 0;
	WireframeBehaviour_t162 * V_9 = {0};
	WireframeBehaviourU5BU5D_t237* V_10 = {0};
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t219* L_0 = Component_GetComponentsInChildren_TisRenderer_t23_m964(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t23_m964_MethodInfo_var);
		V_0 = L_0;
		ColliderU5BU5D_t220* L_1 = Component_GetComponentsInChildren_TisCollider_t39_m965(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t39_m965_MethodInfo_var);
		V_1 = L_1;
		WireframeBehaviourU5BU5D_t237* L_2 = Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041(__this, 1, /*hidden argument*/Component_GetComponentsInChildren_TisWireframeBehaviour_t162_m1041_MethodInfo_var);
		V_2 = L_2;
		RendererU5BU5D_t219* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t219* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_3 = (*(Renderer_t23 **)(Renderer_t23 **)SZArrayLdElema(L_4, L_6));
		Renderer_t23 * L_7 = V_3;
		NullCheck(L_7);
		Renderer_set_enabled_m784(L_7, 0, /*hidden argument*/&Renderer_set_enabled_m784_MethodInfo);
		int32_t L_8 = V_5;
		V_5 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_9 = V_5;
		RendererU5BU5D_t219* L_10 = V_4;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t220* L_11 = V_1;
		V_7 = L_11;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t220* L_12 = V_7;
		int32_t L_13 = V_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_6 = (*(Collider_t39 **)(Collider_t39 **)SZArrayLdElema(L_12, L_14));
		Collider_t39 * L_15 = V_6;
		NullCheck(L_15);
		Collider_set_enabled_m961(L_15, 0, /*hidden argument*/&Collider_set_enabled_m961_MethodInfo);
		int32_t L_16 = V_8;
		V_8 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_17 = V_8;
		ColliderU5BU5D_t220* L_18 = V_7;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		WireframeBehaviourU5BU5D_t237* L_19 = V_2;
		V_10 = L_19;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		WireframeBehaviourU5BU5D_t237* L_20 = V_10;
		int32_t L_21 = V_11;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_9 = (*(WireframeBehaviour_t162 **)(WireframeBehaviour_t162 **)SZArrayLdElema(L_20, L_22));
		WireframeBehaviour_t162 * L_23 = V_9;
		NullCheck(L_23);
		Behaviour_set_enabled_m530(L_23, 0, /*hidden argument*/&Behaviour_set_enabled_m530_MethodInfo);
		int32_t L_24 = V_11;
		V_11 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_25 = V_11;
		WireframeBehaviourU5BU5D_t237* L_26 = V_10;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0077;
		}
	}
	{
		TrackableBehaviour_t116 * L_27 = (__this->___mTrackableBehaviour_2);
		NullCheck(L_27);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TrackableBehaviour_get_TrackableName_m962_MethodInfo, L_27);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_29 = String_Concat_m803(NULL /*static, unused*/, (String_t*) &_stringLiteral80, L_28, (String_t*) &_stringLiteral82, /*hidden argument*/&String_Concat_m803_MethodInfo);
		Debug_Log_m583(NULL /*static, unused*/, L_29, /*hidden argument*/&Debug_Log_m583_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo WordBehaviour_t164_il2cpp_TypeInfo;
// Vuforia.WordBehaviour
#include "AssemblyU2DCSharp_Vuforia_WordBehaviourMethodDeclarations.h"

// Vuforia.WordAbstractBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordAbstractBehavioMethodDeclarations.h"
extern MethodInfo WordAbstractBehaviour__ctor_m1042_MethodInfo;


// System.Void Vuforia.WordBehaviour::.ctor()
extern MethodInfo WordBehaviour__ctor_m502_MethodInfo;
extern "C" void WordBehaviour__ctor_m502 (WordBehaviour_t164 * __this, MethodInfo* method)
{
	{
		WordAbstractBehaviour__ctor_m1042(__this, /*hidden argument*/&WordAbstractBehaviour__ctor_m1042_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t165_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3E_$ArrayTMethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t165_marshal(const $ArrayType$20_t165& unmarshaled, $ArrayType$20_t165_marshaled& marshaled)
{
}
void $ArrayType$20_t165_marshal_back(const $ArrayType$20_t165_marshaled& marshaled, $ArrayType$20_t165& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t165_marshal_cleanup($ArrayType$20_t165_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif



// System.Void <PrivateImplementationDetails>::.ctor()
extern MethodInfo U3CPrivateImplementationDetailsU3E__ctor_m503_MethodInfo;
extern "C" void U3CPrivateImplementationDetailsU3E__ctor_m503 (U3CPrivateImplementationDetailsU3E_t166 * __this, MethodInfo* method)
{
	{
		Object__ctor_m595(__this, /*hidden argument*/&Object__ctor_m595_MethodInfo);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
