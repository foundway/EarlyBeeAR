#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t116;
// Vuforia.Trackable
struct Trackable_t622;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t274;
// UnityEngine.Renderer
struct Renderer_t23;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C" int32_t TrackableBehaviour_get_CurrentStatus_m3183 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C" Object_t * TrackableBehaviour_get_Trackable_m1112 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" String_t* TrackableBehaviour_get_TrackableName_m962 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" void TrackableBehaviour_RegisterTrackableEventHandler_m960 (TrackableBehaviour_t116 * __this, Object_t * ___trackableEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" bool TrackableBehaviour_UnregisterTrackableEventHandler_m3184 (TrackableBehaviour_t116 * __this, Object_t * ___trackableEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C" void TrackableBehaviour_OnTrackerUpdate_m1183 (TrackableBehaviour_t116 * __this, int32_t ___newStatus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void TrackableBehaviour_OnFrameIndexUpdate_m1162 (TrackableBehaviour_t116 * __this, int32_t ___newFrameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::InternalUnregisterTrackable()
// System.Void Vuforia.TrackableBehaviour::Start()
extern "C" void TrackableBehaviour_Start_m3185 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C" void TrackableBehaviour_OnDisable_m3186 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.CorrectScale()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_CorrectScale_m1110 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C" bool TrackableBehaviour_CorrectScaleImpl_m1194 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetNameForTrackable(System.String)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetNameForTrackable_m1111 (TrackableBehaviour_t116 * __this, String_t* ___trackableName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreviousScale()
extern "C" Vector3_t5  TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreviousScale_m1113 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreviousScale(UnityEngine.Vector3)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreviousScale_m1114 (TrackableBehaviour_t116 * __this, Vector3_t5  ___previousScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreserveChildSize()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreserveChildSize_m1115 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreserveChildSize(System.Boolean)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreserveChildSize_m1116 (TrackableBehaviour_t116 * __this, bool ___preserveChildSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_InitializedInEditor()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_InitializedInEditor_m1117 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetInitializedInEditor(System.Boolean)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetInitializedInEditor_m1118 (TrackableBehaviour_t116 * __this, bool ___initializedInEditor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.UnregisterTrackable()
extern "C" void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_UnregisterTrackable_m1119 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.GetRenderer()
extern "C" Renderer_t23 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_GetRenderer_m1124 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C" void TrackableBehaviour__ctor_m3187 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3188 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3189 (TrackableBehaviour_t116 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t2 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m3190 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t7 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m3191 (TrackableBehaviour_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
