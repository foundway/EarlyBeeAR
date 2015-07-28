#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t624;
// System.String
struct String_t;
// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct ReconstructionFromTargetAbstractBehaviour_t146;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t625;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.DataSetTrackableBehaviour::OnDrawGizmos()
extern "C" void DataSetTrackableBehaviour_OnDrawGizmos_m1153 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C" void DataSetTrackableBehaviour_OnTrackerUpdate_m1125 (DataSetTrackableBehaviour_t624 * __this, int32_t ___newStatus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::SetAsSmartTerrainInitializationTarget()
extern "C" bool DataSetTrackableBehaviour_SetAsSmartTerrainInitializationTarget_m3192 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetName()
extern "C" String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetName_m1129 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_DataSetPath()
extern "C" String_t* DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_DataSetPath_m1130 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetDataSetPath(System.String)
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetDataSetPath_m1131 (DataSetTrackableBehaviour_t624 * __this, String_t* ___dataSetPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ExtendedTracking()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ExtendedTracking_m1132 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetExtendedTracking(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetExtendedTracking_m1133 (DataSetTrackableBehaviour_t624 * __this, bool ___extendedTracking, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_InitializeSmartTerrain()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_InitializeSmartTerrain_m1134 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetInitializeSmartTerrain(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetInitializeSmartTerrain_m1135 (DataSetTrackableBehaviour_t624 * __this, bool ___initializeSmartTerrain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ReconstructionFromTargetAbstractBehaviour Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_ReconstructionToInitialize()
extern "C" ReconstructionFromTargetAbstractBehaviour_t146 * DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_ReconstructionToInitialize_m1136 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetReconstructionToInitialize(Vuforia.ReconstructionFromTargetAbstractBehaviour)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetReconstructionToInitialize_m1137 (DataSetTrackableBehaviour_t624 * __this, ReconstructionFromTargetAbstractBehaviour_t146 * ___reconstructionToInitialize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMin()
extern "C" Vector3_t5  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMin_m1138 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMin(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMin_m1139 (DataSetTrackableBehaviour_t624 * __this, Vector3_t5  ___occluderBoundsMin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderBoundsMax()
extern "C" Vector3_t5  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderBoundsMax_m1140 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderBoundsMax(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderBoundsMax_m1141 (DataSetTrackableBehaviour_t624 * __this, Vector3_t5  ___occluderBoundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_IsSmartTerrainOccluderOffset()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_IsSmartTerrainOccluderOffset_m1142 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetIsSmartTerrainOccluderOffset(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetIsSmartTerrainOccluderOffset_m1143 (DataSetTrackableBehaviour_t624 * __this, bool ___isOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderOffset()
extern "C" Vector3_t5  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderOffset_m1144 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderOffset(UnityEngine.Vector3)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderOffset_m1145 (DataSetTrackableBehaviour_t624 * __this, Vector3_t5  ___occluderOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderRotation()
extern "C" Quaternion_t10  DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderRotation_m1146 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetSmartTerrainOccluderRotation(UnityEngine.Quaternion)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetSmartTerrainOccluderRotation_m1147 (DataSetTrackableBehaviour_t624 * __this, Quaternion_t10  ___occluderRotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_SmartTerrainOccluderLockedInPlace()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_SmartTerrainOccluderLockedInPlace_m1148 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetLockSmartTerrainOccluderInPlace(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetLockSmartTerrainOccluderInPlace_m1149 (DataSetTrackableBehaviour_t624 * __this, bool ___lockOccluder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.GetDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_GetDefaultOccluderBounds_m1150 (DataSetTrackableBehaviour_t624 * __this, Vector3_t5 * ___boundsMin, Vector3_t5 * ___boundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.get_AutoSetOccluderFromTargetSize()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_get_AutoSetOccluderFromTargetSize_m1151 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorDataSetTrackableBehaviour.SetAutoSetOccluderFromTargetSize(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorDataSetTrackableBehaviour_SetAutoSetOccluderFromTargetSize_m1152 (DataSetTrackableBehaviour_t624 * __this, bool ___autoset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
// System.Void Vuforia.DataSetTrackableBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
// System.Void Vuforia.DataSetTrackableBehaviour::.ctor()
extern "C" void DataSetTrackableBehaviour__ctor_m3193 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3194 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3195 (DataSetTrackableBehaviour_t624 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t2 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m3196 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.DataSetTrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t7 * DataSetTrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m3197 (DataSetTrackableBehaviour_t624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
