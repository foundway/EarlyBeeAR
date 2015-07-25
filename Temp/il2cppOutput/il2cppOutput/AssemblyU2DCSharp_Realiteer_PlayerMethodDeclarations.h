#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Realiteer.Player
struct Player_t38;
// UnityEngine.Collider
struct Collider_t39;
// UnityEngine.Collision
struct Collision_t40;

// System.Void Realiteer.Player::.ctor()
extern "C" void Player__ctor_m91 (Player_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Player::Start()
extern "C" void Player_Start_m92 (Player_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Player::FixedUpdate()
extern "C" void Player_FixedUpdate_m93 (Player_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Player::Walk()
extern "C" void Player_Walk_m94 (Player_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Player::OnTriggerEnter(UnityEngine.Collider)
extern "C" void Player_OnTriggerEnter_m95 (Player_t38 * __this, Collider_t39 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Player::OnTriggerExit(UnityEngine.Collider)
extern "C" void Player_OnTriggerExit_m96 (Player_t38 * __this, Collider_t39 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Player::OnCollisionStay(UnityEngine.Collision)
extern "C" void Player_OnCollisionStay_m97 (Player_t38 * __this, Collision_t40 * ___collisionInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Realiteer.Player::Reset()
extern "C" void Player_Reset_m98 (Player_t38 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
