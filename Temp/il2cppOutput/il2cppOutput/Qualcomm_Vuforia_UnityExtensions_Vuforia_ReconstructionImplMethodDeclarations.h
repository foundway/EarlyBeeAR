#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ReconstructionImpl
struct ReconstructionImpl_t636;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.ReconstructionImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionImpl__ctor_m3219 (ReconstructionImpl_t636 * __this, IntPtr_t ___nativeReconstructionPtr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ReconstructionImpl::get_NativePtr()
extern "C" IntPtr_t ReconstructionImpl_get_NativePtr_m3220 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::SetMaximumArea(UnityEngine.Rect)
extern "C" bool ReconstructionImpl_SetMaximumArea_m3221 (ReconstructionImpl_t636 * __this, Rect_t62  ___maximumArea, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::GetMaximumArea(UnityEngine.Rect&)
extern "C" bool ReconstructionImpl_GetMaximumArea_m3222 (ReconstructionImpl_t636 * __this, Rect_t62 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Stop()
extern "C" bool ReconstructionImpl_Stop_m3223 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Start()
extern "C" bool ReconstructionImpl_Start_m3224 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsReconstructing()
extern "C" bool ReconstructionImpl_IsReconstructing_m3225 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::SetNavMeshPadding(System.Single)
extern "C" void ReconstructionImpl_SetNavMeshPadding_m3226 (ReconstructionImpl_t636 * __this, float ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.ReconstructionImpl::get_NavMeshPadding()
extern "C" float ReconstructionImpl_get_NavMeshPadding_m3227 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StartNavMeshUpdates()
extern "C" void ReconstructionImpl_StartNavMeshUpdates_m3228 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionImpl::StopNavMeshUpdates()
extern "C" void ReconstructionImpl_StopNavMeshUpdates_m3229 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::IsNavMeshUpdating()
extern "C" bool ReconstructionImpl_IsNavMeshUpdating_m3230 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionImpl::Reset()
extern "C" bool ReconstructionImpl_Reset_m3231 (ReconstructionImpl_t636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
