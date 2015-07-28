#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t106;
// Vuforia.CylinderTarget
struct CylinderTarget_t643;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t625;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C" Object_t * CylinderTargetAbstractBehaviour_get_CylinderTarget_m3323 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C" float CylinderTargetAbstractBehaviour_get_SideLength_m3324 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_TopDiameter_m3325 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_BottomDiameter_m3326 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetSideLength_m3327 (CylinderTargetAbstractBehaviour_t106 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetTopDiameter_m3328 (CylinderTargetAbstractBehaviour_t106 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m3329 (CylinderTargetAbstractBehaviour_t106 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m1126 (CylinderTargetAbstractBehaviour_t106 * __this, int32_t ___newFrameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m1128 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m1127 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1154 (CylinderTargetAbstractBehaviour_t106 * __this, Vector3_t5 * ___boundsMin, Vector3_t5 * ___boundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m1155 (CylinderTargetAbstractBehaviour_t106 * __this, Object_t * ___reconstructionFromTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C" float CylinderTargetAbstractBehaviour_GetScale_m3330 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetScale_m3331 (CylinderTargetAbstractBehaviour_t106 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C" void CylinderTargetAbstractBehaviour_ApplyScale_m3332 (CylinderTargetAbstractBehaviour_t106 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.InitializeCylinderTarget(Vuforia.CylinderTarget)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_InitializeCylinderTarget_m1156 (CylinderTargetAbstractBehaviour_t106 * __this, Object_t * ___cylinderTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_SetAspectRatio_m1157 (CylinderTargetAbstractBehaviour_t106 * __this, float ___topRatio, float ___bottomRatio, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C" void CylinderTargetAbstractBehaviour__ctor_m940 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1120 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1121 (CylinderTargetAbstractBehaviour_t106 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t2 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1122 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t7 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1123 (CylinderTargetAbstractBehaviour_t106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
