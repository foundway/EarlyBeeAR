#pragma once
#include <stdint.h>
// Cursor
struct Cursor_t13;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;
// StareInputModule/StareEvent
struct StareEvent_t44;
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// StareInputModule
struct  StareInputModule_t16  : public BaseInputModule_t47
{
	// System.Boolean StareInputModule::vrModeOnly
	bool ___vrModeOnly_6;
	// Cursor StareInputModule::cursor
	Cursor_t13 * ___cursor_7;
	// System.Single StareInputModule::chargeTime
	float ___chargeTime_8;
	// System.Single StareInputModule::chargeTimeDown
	float ___chargeTimeDown_9;
	// System.Boolean StareInputModule::stared
	bool ___stared_10;
	// System.Single StareInputModule::clickTime
	float ___clickTime_11;
	// UnityEngine.Vector2 StareInputModule::hotspot
	Vector2_t48  ___hotspot_12;
	// UnityEngine.EventSystems.PointerEventData StareInputModule::pointerData
	PointerEventData_t46 * ___pointerData_13;
};
struct StareInputModule_t16_StaticFields{
	// StareInputModule/StareEvent StareInputModule::OnStare
	StareEvent_t44 * ___OnStare_14;
};
