﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Toggle
struct Toggle_t449;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t448;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t20;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C" void Toggle__ctor_m2198 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C" ToggleGroup_t448 * Toggle_get_group_m2199 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C" void Toggle_set_group_m2200 (Toggle_t449 * __this, ToggleGroup_t448 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Toggle_Rebuild_m2201 (Toggle_t449 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C" void Toggle_OnEnable_m2202 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C" void Toggle_OnDisable_m2203 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C" void Toggle_SetToggleGroup_m2204 (Toggle_t449 * __this, ToggleGroup_t448 * ___newGroup, bool ___setMemberValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C" bool Toggle_get_isOn_m2205 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C" void Toggle_set_isOn_m2206 (Toggle_t449 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C" void Toggle_Set_m2207 (Toggle_t449 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C" void Toggle_Set_m2208 (Toggle_t449 * __this, bool ___value, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C" void Toggle_PlayEffect_m2209 (Toggle_t449 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Start()
extern "C" void Toggle_Start_m2210 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C" void Toggle_InternalToggle_m2211 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Toggle_OnPointerClick_m2212 (Toggle_t449 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Toggle_OnSubmit_m2213 (Toggle_t449 * __this, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Toggle_UnityEngine_UI_ICanvasElement_IsDestroyed_m2214 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t2 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m2215 (Toggle_t449 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
