#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t797;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t798;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t799;
// Vuforia.WordManagerImpl
struct WordManagerImpl_t770;
// Vuforia.StateManager
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_StateManager.h"
// Vuforia.StateManagerImpl
struct  StateManagerImpl_t729  : public StateManager_t795
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mTrackableBehaviours
	Dictionary_2_t797 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManagerImpl::mAutomaticallyCreatedBehaviours
	List_1_t798 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mBehavioursMarkedForDeletion
	List_1_t799 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mActiveTrackableBehaviours
	List_1_t799 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManagerImpl Vuforia.StateManagerImpl::mWordManager
	WordManagerImpl_t770 * ___mWordManager_4;
};
