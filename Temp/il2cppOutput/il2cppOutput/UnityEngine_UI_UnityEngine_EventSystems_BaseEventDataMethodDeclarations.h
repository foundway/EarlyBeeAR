#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t20;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t47;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t171;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m1419 (BaseEventData_t20 * __this, EventSystem_t171 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
extern "C" void BaseEventData_Reset_m677 (BaseEventData_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
extern "C" void BaseEventData_Use_m1420 (BaseEventData_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
extern "C" bool BaseEventData_get_used_m1421 (BaseEventData_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t47 * BaseEventData_get_currentInputModule_m1422 (BaseEventData_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t7 * BaseEventData_get_selectedObject_m1423 (BaseEventData_t20 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m1424 (BaseEventData_t20 * __this, GameObject_t7 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
