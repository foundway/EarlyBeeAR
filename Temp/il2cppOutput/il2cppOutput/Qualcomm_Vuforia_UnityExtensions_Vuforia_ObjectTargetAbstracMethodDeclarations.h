#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t134;
// Vuforia.ObjectTarget
struct ObjectTarget_t626;
// UnityEngine.Texture2D
struct Texture2D_t368;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t625;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetAbstractBehaviour::.ctor()
extern "C" void ObjectTargetAbstractBehaviour__ctor_m1004 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::get_ObjectTarget()
extern "C" Object_t * ObjectTargetAbstractBehaviour_get_ObjectTarget_m3198 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::OnDrawGizmos()
extern "C" void ObjectTargetAbstractBehaviour_OnDrawGizmos_m3199 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool ObjectTargetAbstractBehaviour_CorrectScaleImpl_m1203 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void ObjectTargetAbstractBehaviour_InternalUnregisterTrackable_m1202 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void ObjectTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1204 (ObjectTargetAbstractBehaviour_t134 * __this, Vector3_t5 * ___boundsMin, Vector3_t5 * ___boundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void ObjectTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m1205 (ObjectTargetAbstractBehaviour_t134 * __this, Object_t * ___reconstructionFromTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetBoundingBox(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void ObjectTargetAbstractBehaviour_SetBoundingBox_m1217 (ObjectTargetAbstractBehaviour_t134 * __this, Vector3_t5  ___minBBox, Vector3_t5  ___maxBBox, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::GetSize()
extern "C" Vector3_t5  ObjectTargetAbstractBehaviour_GetSize_m1211 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetLength(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetLength_m1212 (ObjectTargetAbstractBehaviour_t134 * __this, float ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetWidth(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetWidth_m1213 (ObjectTargetAbstractBehaviour_t134 * __this, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::SetHeight(System.Single)
extern "C" void ObjectTargetAbstractBehaviour_SetHeight_m1214 (ObjectTargetAbstractBehaviour_t134 * __this, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXY()
extern "C" float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXY_m1208 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_AspectRatioXZ()
extern "C" float ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_AspectRatioXZ_m1209 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetAspectRatio_m1210 (ObjectTargetAbstractBehaviour_t134 * __this, float ___aspectRatioXY, float ___aspectRatioXZ, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.InitializeObjectTarget(Vuforia.ObjectTarget)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_InitializeObjectTarget_m1218 (ObjectTargetAbstractBehaviour_t134 * __this, Object_t * ___objectTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetShowBoundingBox(System.Boolean)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetShowBoundingBox_m1215 (ObjectTargetAbstractBehaviour_t134 * __this, bool ___showBoundingBox, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_ShowBoundingBox()
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_ShowBoundingBox_m1216 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.get_PreviewImage()
extern "C" Texture2D_t368 * ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_get_PreviewImage_m1206 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorObjectTargetBehaviour.SetPreviewImage(UnityEngine.Texture2D)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorObjectTargetBehaviour_SetPreviewImage_m1207 (ObjectTargetAbstractBehaviour_t134 * __this, Texture2D_t368 * ___previewImage, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1198 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1199 (ObjectTargetAbstractBehaviour_t134 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t2 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1200 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.ObjectTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t7 * ObjectTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1201 (ObjectTargetAbstractBehaviour_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
