#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t128;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t665;
// UnityEngine.GameObject
struct GameObject_t7;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t841;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t122;
// UnityEngine.Renderer
struct Renderer_t23;
// UnityEngine.Transform
struct Transform_t2;
// Vuforia.VirtualButton/Sensitivity
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C" String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m1291 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C" bool VirtualButtonAbstractBehaviour_get_Pressed_m4766 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C" bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m1303 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C" bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m1301 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m1302 (VirtualButtonAbstractBehaviour_t128 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C" VirtualButton_t665 * VirtualButtonAbstractBehaviour_get_VirtualButton_m4767 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C" void VirtualButtonAbstractBehaviour__ctor_m1024 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" void VirtualButtonAbstractBehaviour_RegisterEventHandler_m4768 (VirtualButtonAbstractBehaviour_t128 * __this, Object_t * ___eventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C" bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m4769 (VirtualButtonAbstractBehaviour_t128 * __this, Object_t * ___eventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m4770 (VirtualButtonAbstractBehaviour_t128 * __this, Vector2_t48 * ___topLeft, Vector2_t48 * ___bottomRight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m4771 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m4772 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C" bool VirtualButtonAbstractBehaviour_UpdateEnabled_m4773 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C" bool VirtualButtonAbstractBehaviour_UpdatePose_m1304 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m4774 (VirtualButtonAbstractBehaviour_t128 * __this, bool ___pressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C" ImageTargetAbstractBehaviour_t122 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m4775 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetVirtualButtonName(System.String)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetVirtualButtonName_m1292 (VirtualButtonAbstractBehaviour_t128 * __this, String_t* ___virtualButtonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_SensitivitySetting()
extern "C" int32_t VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_SensitivitySetting_m1293 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetSensitivitySetting(Vuforia.VirtualButton/Sensitivity)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetSensitivitySetting_m1294 (VirtualButtonAbstractBehaviour_t128 * __this, int32_t ___sensibility, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousTransform()
extern "C" Matrix4x4_t27  VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousTransform_m1295 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousTransform(UnityEngine.Matrix4x4)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousTransform_m1296 (VirtualButtonAbstractBehaviour_t128 * __this, Matrix4x4_t27  ___transformMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_PreviousParent()
extern "C" GameObject_t7 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_PreviousParent_m1297 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPreviousParent(UnityEngine.GameObject)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPreviousParent_m1298 (VirtualButtonAbstractBehaviour_t128 * __this, GameObject_t7 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.InitializeVirtualButton(Vuforia.VirtualButton)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_InitializeVirtualButton_m1299 (VirtualButtonAbstractBehaviour_t128 * __this, VirtualButton_t665 * ___virtualButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_SetPosAndScaleFromButtonArea_m1300 (VirtualButtonAbstractBehaviour_t128 * __this, Vector2_t48  ___topLeft, Vector2_t48  ___bottomRight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.GetRenderer()
extern "C" Renderer_t23 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_GetRenderer_m1309 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C" void VirtualButtonAbstractBehaviour_LateUpdate_m4776 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C" void VirtualButtonAbstractBehaviour_OnDisable_m4777 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C" void VirtualButtonAbstractBehaviour_OnDestroy_m4778 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" bool VirtualButtonAbstractBehaviour_Equals_m4779 (Object_t * __this /* static, unused */, Vector2_t48  ___vec1, Vector2_t48  ___vec2, float ___threshold, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_enabled()
extern "C" bool VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_enabled_m1305 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.set_enabled(System.Boolean)
extern "C" void VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_set_enabled_m1306 (VirtualButtonAbstractBehaviour_t128 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_transform()
extern "C" Transform_t2 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_transform_m1307 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::Vuforia.IEditorVirtualButtonBehaviour.get_gameObject()
extern "C" GameObject_t7 * VirtualButtonAbstractBehaviour_Vuforia_IEditorVirtualButtonBehaviour_get_gameObject_m1308 (VirtualButtonAbstractBehaviour_t128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
