#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t2;
// Realiteer.LiquidBehavior
struct LiquidBehavior_t24;
// UnityEngine.GameObject
struct GameObject_t7;
// Realiteer.Player
struct Player_t38;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t31;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Realiteer.PlayerTossModule
struct  PlayerTossModule_t37  : public MonoBehaviour_t4
{
	// System.Single Realiteer.PlayerTossModule::loLim
	float ___loLim_2;
	// System.Single Realiteer.PlayerTossModule::hiLim
	float ___hiLim_3;
	// System.Boolean Realiteer.PlayerTossModule::stateH
	bool ___stateH_4;
	// System.Single Realiteer.PlayerTossModule::fLow
	float ___fLow_5;
	// System.Single Realiteer.PlayerTossModule::fHigh
	float ___fHigh_6;
	// UnityEngine.Vector3 Realiteer.PlayerTossModule::curAcc
	Vector3_t5  ___curAcc_7;
	// UnityEngine.Vector3 Realiteer.PlayerTossModule::avgAcc
	Vector3_t5  ___avgAcc_8;
	// System.Int32 Realiteer.PlayerTossModule::counts
	int32_t ___counts_9;
	// System.Single Realiteer.PlayerTossModule::VelocityMult
	float ___VelocityMult_10;
	// System.Single Realiteer.PlayerTossModule::ChargeMax
	float ___ChargeMax_11;
	// System.Single Realiteer.PlayerTossModule::Charging
	float ___Charging_12;
	// UnityEngine.Transform Realiteer.PlayerTossModule::SpawnPoint
	Transform_t2 * ___SpawnPoint_13;
	// Realiteer.LiquidBehavior Realiteer.PlayerTossModule::Accelerometer
	LiquidBehavior_t24 * ___Accelerometer_14;
	// UnityEngine.GameObject Realiteer.PlayerTossModule::Bullet
	GameObject_t7 * ___Bullet_15;
	// Realiteer.Player Realiteer.PlayerTossModule::Player
	Player_t38 * ___Player_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Realiteer.PlayerTossModule::bullets
	List_1_t31 * ___bullets_17;
};
