#pragma once
#include <stdint.h>
// Pedometer
struct Pedometer_t36;
// UnityEngine.Transform
struct Transform_t2;
// UnityEngine.GameObject
struct GameObject_t7;
// UnityEngine.Renderer
struct Renderer_t23;
// UnityEngine.Rigidbody
struct Rigidbody_t18;
// Realiteer.PlayerTossModule
struct PlayerTossModule_t37;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Realiteer.Player
struct  Player_t38  : public MonoBehaviour_t4
{
	// System.Boolean Realiteer.Player::Ready
	bool ___Ready_2;
	// System.Boolean Realiteer.Player::onGround
	bool ___onGround_3;
	// Pedometer Realiteer.Player::Pedo
	Pedometer_t36 * ___Pedo_4;
	// UnityEngine.Transform Realiteer.Player::Head
	Transform_t2 * ___Head_5;
	// System.Single Realiteer.Player::StepSpan
	float ___StepSpan_6;
	// System.Boolean Realiteer.Player::CanJump
	bool ___CanJump_7;
	// System.Single Realiteer.Player::JumpScale
	float ___JumpScale_8;
	// System.Int32 Realiteer.Player::lastStep
	int32_t ___lastStep_9;
	// System.Single Realiteer.Player::Damping
	float ___Damping_10;
	// System.Single Realiteer.Player::GravityScale
	float ___GravityScale_11;
	// UnityEngine.GameObject Realiteer.Player::HandTarget
	GameObject_t7 * ___HandTarget_12;
	// UnityEngine.Renderer Realiteer.Player::r
	Renderer_t23 * ___r_13;
	// UnityEngine.Rigidbody Realiteer.Player::rbd
	Rigidbody_t18 * ___rbd_14;
	// Realiteer.PlayerTossModule Realiteer.Player::tossModule
	PlayerTossModule_t37 * ___tossModule_15;
};
