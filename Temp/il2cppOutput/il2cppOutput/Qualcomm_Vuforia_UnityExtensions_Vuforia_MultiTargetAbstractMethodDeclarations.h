#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t131;
// Vuforia.MultiTarget
struct MultiTarget_t645;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t625;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.MultiTarget Vuforia.MultiTargetAbstractBehaviour::get_MultiTarget()
extern "C" Object_t * MultiTargetAbstractBehaviour_get_MultiTarget_m4638 (MultiTargetAbstractBehaviour_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void MultiTargetAbstractBehaviour_InternalUnregisterTrackable_m1193 (MultiTargetAbstractBehaviour_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void MultiTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m1195 (MultiTargetAbstractBehaviour_t131 * __this, Vector3_t5 * ___boundsMin, Vector3_t5 * ___boundsMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void MultiTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m1196 (MultiTargetAbstractBehaviour_t131 * __this, Object_t * ___reconstructionFromTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorMultiTargetBehaviour.InitializeMultiTarget(Vuforia.MultiTarget)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorMultiTargetBehaviour_InitializeMultiTarget_m1197 (MultiTargetAbstractBehaviour_t131 * __this, Object_t * ___multiTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::.ctor()
extern "C" void MultiTargetAbstractBehaviour__ctor_m1003 (MultiTargetAbstractBehaviour_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m1189 (MultiTargetAbstractBehaviour_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m1190 (MultiTargetAbstractBehaviour_t131 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t2 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m1191 (MultiTargetAbstractBehaviour_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MultiTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t7 * MultiTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m1192 (MultiTargetAbstractBehaviour_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
