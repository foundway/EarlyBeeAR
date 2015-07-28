#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Vuforia.Word
struct Word_t762;
// Vuforia.TrackableBehaviour
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"
// Vuforia.WordTemplateMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordTemplateMode.h"
// Vuforia.WordAbstractBehaviour
struct  WordAbstractBehaviour_t132  : public TrackableBehaviour_t116
{
	// Vuforia.WordTemplateMode Vuforia.WordAbstractBehaviour::mMode
	int32_t ___mMode_9;
	// System.String Vuforia.WordAbstractBehaviour::mSpecificWord
	String_t* ___mSpecificWord_10;
	// Vuforia.Word Vuforia.WordAbstractBehaviour::mWord
	Object_t * ___mWord_11;
};
