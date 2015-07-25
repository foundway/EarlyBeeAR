#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TargetFinderImpl
struct TargetFinderImpl_t810;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult>
struct IEnumerable_1_t804;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t122;
// UnityEngine.GameObject
struct GameObject_t7;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget>
struct IEnumerable_1_t805;
// Vuforia.TargetFinder/InitState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_InitSt.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Vuforia.TargetFinder/UpdateState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Update.h"
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void Vuforia.TargetFinderImpl::.ctor()
extern "C" void TargetFinderImpl__ctor_m4566 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::Finalize()
extern "C" void TargetFinderImpl_Finalize_m4567 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartInit(System.String,System.String)
extern "C" bool TargetFinderImpl_StartInit_m4568 (TargetFinderImpl_t810 * __this, String_t* ___userAuth, String_t* ___secretAuth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/InitState Vuforia.TargetFinderImpl::GetInitState()
extern "C" int32_t TargetFinderImpl_GetInitState_m4569 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Deinit()
extern "C" bool TargetFinderImpl_Deinit_m4570 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::StartRecognition()
extern "C" bool TargetFinderImpl_StartRecognition_m4571 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::Stop()
extern "C" bool TargetFinderImpl_Stop_m4572 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIScanlineColor(UnityEngine.Color)
extern "C" void TargetFinderImpl_SetUIScanlineColor_m4573 (TargetFinderImpl_t810 * __this, Color_t51  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::SetUIPointColor(UnityEngine.Color)
extern "C" void TargetFinderImpl_SetUIPointColor_m4574 (TargetFinderImpl_t810 * __this, Color_t51  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TargetFinderImpl::IsRequesting()
extern "C" bool TargetFinderImpl_IsRequesting_m4575 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder/UpdateState Vuforia.TargetFinderImpl::Update()
extern "C" int32_t TargetFinderImpl_Update_m4576 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinderImpl::GetResults()
extern "C" Object_t* TargetFinderImpl_GetResults_m4577 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,System.String)
extern "C" ImageTargetAbstractBehaviour_t122 * TargetFinderImpl_EnableTracking_m4578 (TargetFinderImpl_t810 * __this, TargetSearchResult_t803  ___result, String_t* ___gameObjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.TargetFinderImpl::EnableTracking(Vuforia.TargetFinder/TargetSearchResult,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t122 * TargetFinderImpl_EnableTracking_m4579 (TargetFinderImpl_t810 * __this, TargetSearchResult_t803  ___result, GameObject_t7 * ___gameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TargetFinderImpl::ClearTrackables(System.Boolean)
extern "C" void TargetFinderImpl_ClearTrackables_m4580 (TargetFinderImpl_t810 * __this, bool ___destroyGameObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ImageTarget> Vuforia.TargetFinderImpl::GetImageTargets()
extern "C" Object_t* TargetFinderImpl_GetImageTargets_m4581 (TargetFinderImpl_t810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
