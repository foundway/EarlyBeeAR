﻿#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t46;
// UnityEngine.EventSystems.BaseInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// GazeInputModule
struct  GazeInputModule_t89  : public BaseInputModule_t47
{
	// System.Boolean GazeInputModule::vrModeOnly
	bool ___vrModeOnly_6;
	// UnityEngine.GameObject GazeInputModule::cursor
	GameObject_t7 * ___cursor_7;
	// System.Single GazeInputModule::clickTime
	float ___clickTime_8;
	// UnityEngine.Vector2 GazeInputModule::hotspot
	Vector2_t48  ___hotspot_9;
	// UnityEngine.EventSystems.PointerEventData GazeInputModule::pointerData
	PointerEventData_t46 * ___pointerData_10;
};