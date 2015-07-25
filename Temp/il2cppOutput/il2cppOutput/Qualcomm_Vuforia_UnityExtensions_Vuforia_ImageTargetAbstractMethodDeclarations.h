#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t122;
// Vuforia.ImageTarget
struct ImageTarget_t644;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t625;
// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t128;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t7;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour>
struct IEnumerable_1_t821;
// Vuforia.VirtualButton
struct VirtualButton_t665;
// UnityEngine.Transform
struct Transform_t2;
// Vuforia.ImageTargetType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::get_ImageTarget()
extern "C" Object_t * ImageTargetAbstractBehaviour_get_ImageTarget_m4630 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::.ctor()
extern "C" void ImageTargetAbstractBehaviour__ctor_m967 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool ImageTargetAbstractBehaviour_CorrectScaleImpl_m1164 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void ImageTargetAbstractBehaviour_InternalUnregisterTrackable_m1163 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void ImageTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1165 (ImageTargetAbstractBehaviour_t122 * __this, Vector3_t5 * ___boundsMin, Vector3_t5 * ___boundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void ImageTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m1166 (ImageTargetAbstractBehaviour_t122 * __this, Object_t * ___reconstructionFromTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" VirtualButtonAbstractBehaviour_t128 * ImageTargetAbstractBehaviour_CreateVirtualButton_m4631 (ImageTargetAbstractBehaviour_t122 * __this, String_t* ___vbName, Vector2_t48  ___position, Vector2_t48  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButtonAbstractBehaviour Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButton(System.String,UnityEngine.Vector2,UnityEngine.GameObject)
extern "C" VirtualButtonAbstractBehaviour_t128 * ImageTargetAbstractBehaviour_CreateVirtualButton_m4632 (Object_t * __this /* static, unused */, String_t* ___vbName, Vector2_t48  ___localScale, GameObject_t7 * ___immediateParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::GetVirtualButtonBehaviours()
extern "C" Object_t* ImageTargetAbstractBehaviour_GetVirtualButtonBehaviours_m4633 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::DestroyVirtualButton(System.String)
extern "C" void ImageTargetAbstractBehaviour_DestroyVirtualButton_m4634 (ImageTargetAbstractBehaviour_t122 * __this, String_t* ___vbName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.ImageTargetAbstractBehaviour::GetSize()
extern "C" Vector2_t48  ImageTargetAbstractBehaviour_GetSize_m1171 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetWidth(System.Single)
extern "C" void ImageTargetAbstractBehaviour_SetWidth_m1172 (ImageTargetAbstractBehaviour_t122 * __this, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::SetHeight(System.Single)
extern "C" void ImageTargetAbstractBehaviour_SetHeight_m1173 (ImageTargetAbstractBehaviour_t122 * __this, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_AspectRatio()
extern "C" float ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_AspectRatio_m1167 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.get_ImageTargetType()
extern "C" int32_t ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_get_ImageTargetType_m1168 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetAspectRatio(System.Single)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetAspectRatio_m1169 (ImageTargetAbstractBehaviour_t122 * __this, float ___aspectRatio, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.SetImageTargetType(Vuforia.ImageTargetType)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_SetImageTargetType_m1170 (ImageTargetAbstractBehaviour_t122 * __this, int32_t ___imageTargetType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.InitializeImageTarget(Vuforia.ImageTarget)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_InitializeImageTarget_m1174 (ImageTargetAbstractBehaviour_t122 * __this, Object_t * ___imageTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.AssociateExistingVirtualButtonBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_AssociateExistingVirtualButtonBehaviour_m1177 (ImageTargetAbstractBehaviour_t122 * __this, VirtualButtonAbstractBehaviour_t128 * ___virtualButtonBehaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.CreateMissingVirtualButtonBehaviours()
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_CreateMissingVirtualButtonBehaviours_m1175 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorImageTargetBehaviour.TryGetVirtualButtonBehaviourByID(System.Int32,Vuforia.VirtualButtonAbstractBehaviour&)
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorImageTargetBehaviour_TryGetVirtualButtonBehaviourByID_m1176 (ImageTargetAbstractBehaviour_t122 * __this, int32_t ___id, VirtualButtonAbstractBehaviour_t128 ** ___virtualButtonBehaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::CreateVirtualButtonFromNative(Vuforia.VirtualButton)
extern "C" void ImageTargetAbstractBehaviour_CreateVirtualButtonFromNative_m4635 (ImageTargetAbstractBehaviour_t122 * __this, VirtualButton_t665 * ___virtualButton, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::CreateNewVirtualButtonFromBehaviour(Vuforia.VirtualButtonAbstractBehaviour)
extern "C" bool ImageTargetAbstractBehaviour_CreateNewVirtualButtonFromBehaviour_m4636 (ImageTargetAbstractBehaviour_t122 * __this, VirtualButtonAbstractBehaviour_t128 * ___newVBB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1158 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1159 (ImageTargetAbstractBehaviour_t122 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t2 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1160 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ImageTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t7 * ImageTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1161 (ImageTargetAbstractBehaviour_t122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
