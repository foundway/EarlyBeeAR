#pragma once
#include <stdint.h>
// Director
struct Director_t6;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Director
struct  Director_t6  : public MonoBehaviour_t4
{
	// System.Boolean Director::FlowerReady
	bool ___FlowerReady_3;
	// System.Boolean Director::FlowerOn
	bool ___FlowerOn_4;
	// UnityEngine.GameObject Director::FlowerField
	GameObject_t7 * ___FlowerField_5;
};
struct Director_t6_StaticFields{
	// Director Director::Instance
	Director_t6 * ___Instance_2;
};
