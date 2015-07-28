#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t354;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t352;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t20;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m1574 (Button_t354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t352 * Button_get_onClick_m1575 (Button_t354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m1576 (Button_t354 * __this, ButtonClickedEvent_t352 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m1577 (Button_t354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m1578 (Button_t354 * __this, PointerEventData_t46 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m1579 (Button_t354 * __this, BaseEventData_t20 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m1580 (Button_t354 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
