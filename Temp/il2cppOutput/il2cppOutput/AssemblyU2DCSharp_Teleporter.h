#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.UI.Image
struct Image_t12;
// Teleporter
struct Teleporter_t49;
// UnityEngine.UI.Text
struct Text_t50;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Teleporter
struct  Teleporter_t49  : public MonoBehaviour_t4
{
	// UnityEngine.GameObject Teleporter::Destination
	GameObject_t7 * ___Destination_2;
	// UnityEngine.UI.Image Teleporter::FadeToBlack
	Image_t12 * ___FadeToBlack_3;
	// System.Single Teleporter::FadeSpeed
	float ___FadeSpeed_4;
	// Teleporter Teleporter::StartingTeleporter
	Teleporter_t49 * ___StartingTeleporter_5;
	// UnityEngine.UI.Text Teleporter::LastTimeText
	Text_t50 * ___LastTimeText_6;
	// UnityEngine.UI.Text Teleporter::BestTimeText
	Text_t50 * ___BestTimeText_7;
	// System.Single Teleporter::TimeEntered
	float ___TimeEntered_8;
	// System.Single Teleporter::bestTime
	float ___bestTime_9;
	// UnityEngine.GameObject Teleporter::player
	GameObject_t7 * ___player_10;
	// System.Int32 Teleporter::stage
	int32_t ___stage_11;
};
