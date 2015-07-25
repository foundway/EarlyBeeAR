#pragma once
#include <stdint.h>
// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t110;
// Vuforia.PropBehaviour
struct PropBehaviour_t111;
// Vuforia.SurfaceBehaviour
struct SurfaceBehaviour_t112;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.DefaultSmartTerrainEventHandler
struct  DefaultSmartTerrainEventHandler_t113  : public MonoBehaviour_t4
{
	// Vuforia.ReconstructionBehaviour Vuforia.DefaultSmartTerrainEventHandler::mReconstructionBehaviour
	ReconstructionBehaviour_t110 * ___mReconstructionBehaviour_2;
	// Vuforia.PropBehaviour Vuforia.DefaultSmartTerrainEventHandler::PropTemplate
	PropBehaviour_t111 * ___PropTemplate_3;
	// Vuforia.SurfaceBehaviour Vuforia.DefaultSmartTerrainEventHandler::SurfaceTemplate
	SurfaceBehaviour_t112 * ___SurfaceTemplate_4;
};
