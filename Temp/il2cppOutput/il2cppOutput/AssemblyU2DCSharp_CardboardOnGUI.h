#pragma once
#include <stdint.h>
// UnityEngine.RenderTexture
struct RenderTexture_t56;
// CardboardOnGUI/OnGUICallback
struct OnGUICallback_t55;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// CardboardOnGUI
struct  CardboardOnGUI_t57  : public MonoBehaviour_t4
{
	// UnityEngine.Color CardboardOnGUI::background
	Color_t51  ___background_4;
	// UnityEngine.RenderTexture CardboardOnGUI::guiScreen
	RenderTexture_t56 * ___guiScreen_5;
};
struct CardboardOnGUI_t57_StaticFields{
	// System.Boolean CardboardOnGUI::okToDraw
	bool ___okToDraw_2;
	// System.Boolean CardboardOnGUI::isGUIVisible
	bool ___isGUIVisible_3;
	// CardboardOnGUI/OnGUICallback CardboardOnGUI::onGUICallback
	OnGUICallback_t55 * ___onGUICallback_6;
};
