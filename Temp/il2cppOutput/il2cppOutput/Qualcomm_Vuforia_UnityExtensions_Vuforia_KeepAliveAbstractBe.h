#pragma once
#include <stdint.h>
// Vuforia.KeepAliveAbstractBehaviour
struct KeepAliveAbstractBehaviour_t136;
// System.Collections.Generic.List`1<Vuforia.ILoadLevelEventHandler>
struct List_1_t781;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.KeepAliveAbstractBehaviour
struct  KeepAliveAbstractBehaviour_t136  : public MonoBehaviour_t4
{
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepARCameraAlive
	bool ___mKeepARCameraAlive_2;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepTrackableBehavioursAlive
	bool ___mKeepTrackableBehavioursAlive_3;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepTextRecoBehaviourAlive
	bool ___mKeepTextRecoBehaviourAlive_4;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepUDTBuildingBehaviourAlive
	bool ___mKeepUDTBuildingBehaviourAlive_5;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepCloudRecoBehaviourAlive
	bool ___mKeepCloudRecoBehaviourAlive_6;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepSmartTerrainAlive
	bool ___mKeepSmartTerrainAlive_7;
	// System.Collections.Generic.List`1<Vuforia.ILoadLevelEventHandler> Vuforia.KeepAliveAbstractBehaviour::mHandlers
	List_1_t781 * ___mHandlers_9;
};
struct KeepAliveAbstractBehaviour_t136_StaticFields{
	// Vuforia.KeepAliveAbstractBehaviour Vuforia.KeepAliveAbstractBehaviour::sKeepAliveBehaviour
	KeepAliveAbstractBehaviour_t136 * ___sKeepAliveBehaviour_8;
};
