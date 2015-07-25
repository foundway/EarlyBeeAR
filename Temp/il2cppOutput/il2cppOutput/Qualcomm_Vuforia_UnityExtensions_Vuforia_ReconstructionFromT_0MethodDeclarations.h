#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t642;
// Vuforia.CylinderTarget
struct CylinderTarget_t643;
// Vuforia.ImageTarget
struct ImageTarget_t644;
// Vuforia.MultiTarget
struct MultiTarget_t645;
// Vuforia.Trackable
struct Trackable_t622;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionFromTargetImpl__ctor_m3270 (ReconstructionFromTargetImpl_t642 * __this, IntPtr_t ___nativeReconstructionPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3271 (ReconstructionFromTargetImpl_t642 * __this, Object_t * ___cylinderTarget, Vector3_t5  ___occluderMin, Vector3_t5  ___occluderMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3272 (ReconstructionFromTargetImpl_t642 * __this, Object_t * ___cylinderTarget, Vector3_t5  ___occluderMin, Vector3_t5  ___occluderMax, Vector3_t5  ___offsetToOccluderOrigin, Quaternion_t10  ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3273 (ReconstructionFromTargetImpl_t642 * __this, Object_t * ___imageTarget, Vector3_t5  ___occluderMin, Vector3_t5  ___occluderMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3274 (ReconstructionFromTargetImpl_t642 * __this, Object_t * ___imageTarget, Vector3_t5  ___occluderMin, Vector3_t5  ___occluderMax, Vector3_t5  ___offsetToOccluderOrigin, Quaternion_t10  ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3275 (ReconstructionFromTargetImpl_t642 * __this, Object_t * ___multiTarget, Vector3_t5  ___occluderMin, Vector3_t5  ___occluderMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3276 (ReconstructionFromTargetImpl_t642 * __this, Object_t * ___multiTarget, Vector3_t5  ___occluderMin, Vector3_t5  ___occluderMax, Vector3_t5  ___offsetToOccluderOrigin, Quaternion_t10  ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m3277 (ReconstructionFromTargetImpl_t642 * __this, Vector3_t5 * ___occluderMin, Vector3_t5 * ___occluderMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m3278 (ReconstructionFromTargetImpl_t642 * __this, Vector3_t5 * ___occluderMin, Vector3_t5 * ___occluderMax, Vector3_t5 * ___offsetToOccluderOrigin, Quaternion_t10 * ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C" bool ReconstructionFromTargetImpl_Reset_m3279 (ReconstructionFromTargetImpl_t642 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C" bool ReconstructionFromTargetImpl_Start_m3280 (ReconstructionFromTargetImpl_t642 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m3281 (ReconstructionFromTargetImpl_t642 * __this, IntPtr_t ___datasetPtr, Object_t * ___trackable, Vector3_t5  ___occluderMin, Vector3_t5  ___occluderMax, Vector3_t5  ___offsetToOccluderOrigin, Quaternion_t10  ___rotationToOccluderOrigin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C" bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m3282 (ReconstructionFromTargetImpl_t642 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C" void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m3283 (ReconstructionFromTargetImpl_t642 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
