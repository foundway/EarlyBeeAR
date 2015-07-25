#pragma once
#include <stdint.h>
// Cardboard
struct Cardboard_t67;
// BaseVRDevice
struct BaseVRDevice_t69;
// UnityEngine.RenderTexture
struct RenderTexture_t56;
// CardboardUILayer
struct CardboardUILayer_t70;
// System.Action
struct Action_t71;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Cardboard
struct  Cardboard_t67  : public MonoBehaviour_t4
{
	// System.Boolean Cardboard::distortionCorrection
	bool ___distortionCorrection_3;
	// System.Boolean Cardboard::vrModeEnabled
	bool ___vrModeEnabled_4;
	// System.Boolean Cardboard::enableAlignmentMarker
	bool ___enableAlignmentMarker_5;
	// System.Boolean Cardboard::enableSettingsButton
	bool ___enableSettingsButton_6;
	// System.Boolean Cardboard::TapIsTrigger
	bool ___TapIsTrigger_7;
	// System.Single Cardboard::neckModelScale
	float ___neckModelScale_8;
	// System.Boolean Cardboard::autoDriftCorrection
	bool ___autoDriftCorrection_9;
	// System.Boolean Cardboard::syncWithCardboardApp
	bool ___syncWithCardboardApp_10;
	// UnityEngine.Vector2 Cardboard::defaultComfortableViewingRange
	Vector2_t48  ___defaultComfortableViewingRange_13;
	// System.Boolean Cardboard::updated
	bool ___updated_14;
	// CardboardUILayer Cardboard::uiLayer
	CardboardUILayer_t70 * ___uiLayer_15;
	// System.Action Cardboard::OnTrigger
	Action_t71 * ___OnTrigger_16;
	// System.Action Cardboard::OnTilt
	Action_t71 * ___OnTilt_17;
	// System.Boolean Cardboard::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_18;
	// System.Boolean Cardboard::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_19;
	// System.Boolean Cardboard::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_20;
	// System.Boolean Cardboard::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_21;
};
struct Cardboard_t67_StaticFields{
	// Cardboard Cardboard::sdk
	Cardboard_t67 * ___sdk_2;
	// BaseVRDevice Cardboard::device
	BaseVRDevice_t69 * ___device_11;
	// UnityEngine.RenderTexture Cardboard::stereoScreen
	RenderTexture_t56 * ___stereoScreen_12;
};
