#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t1211;
// UnityEngine.Animator
struct Animator_t3;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m7134 (StateMachineBehaviour_t1211 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m7135 (StateMachineBehaviour_t1211 * __this, Animator_t3 * ___animator, AnimatorStateInfo_t1095  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m7136 (StateMachineBehaviour_t1211 * __this, Animator_t3 * ___animator, AnimatorStateInfo_t1095  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m7137 (StateMachineBehaviour_t1211 * __this, Animator_t3 * ___animator, AnimatorStateInfo_t1095  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m7138 (StateMachineBehaviour_t1211 * __this, Animator_t3 * ___animator, AnimatorStateInfo_t1095  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m7139 (StateMachineBehaviour_t1211 * __this, Animator_t3 * ___animator, AnimatorStateInfo_t1095  ___stateInfo, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m7140 (StateMachineBehaviour_t1211 * __this, Animator_t3 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m7141 (StateMachineBehaviour_t1211 * __this, Animator_t3 * ___animator, int32_t ___stateMachinePathHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
