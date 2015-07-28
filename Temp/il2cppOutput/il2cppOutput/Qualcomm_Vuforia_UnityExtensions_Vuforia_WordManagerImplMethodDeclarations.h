#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordManagerImpl
struct WordManagerImpl_t770;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t760;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t761;
// Vuforia.Word
struct Word_t762;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t132;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t763;
// UnityEngine.Transform
struct Transform_t2;
// Vuforia.QCARManagerImpl/WordData[]
struct WordDataU5BU5D_t725;
// Vuforia.QCARManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t726;
// System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordData>
struct IEnumerable_1_t771;
// System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>
struct IEnumerable_1_t772;
// Vuforia.WordResult
struct WordResult_t773;
// Vuforia.WordPrefabCreationMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C" Object_t* WordManagerImpl_GetActiveWordResults_m3648 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C" Object_t* WordManagerImpl_GetNewWords_m3649 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C" Object_t* WordManagerImpl_GetLostWords_m3650 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C" bool WordManagerImpl_TryGetWordBehaviour_m3651 (WordManagerImpl_t770 * __this, Object_t * ___word, WordAbstractBehaviour_t132 ** ___behaviour, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* WordManagerImpl_GetTrackableBehaviours_m3652 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C" void WordManagerImpl_DestroyWordBehaviour_m3653 (WordManagerImpl_t770 * __this, WordAbstractBehaviour_t132 * ___behaviour, bool ___destroyGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m3654 (WordManagerImpl_t770 * __this, int32_t ___wordPrefabCreationMode, int32_t ___maxInstances, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m3655 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C" void WordManagerImpl_RemoveDestroyedTrackables_m3656 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.QCARManagerImpl/WordData[],Vuforia.QCARManagerImpl/WordResultData[])
extern "C" void WordManagerImpl_UpdateWords_m3657 (WordManagerImpl_t770 * __this, Transform_t2 * ___arCameraTransform, WordDataU5BU5D_t725* ___newWordData, WordResultDataU5BU5D_t726* ___wordResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C" void WordManagerImpl_SetWordBehavioursToNotFound_m3658 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWords_m3659 (WordManagerImpl_t770 * __this, Object_t* ___newWordData, Object_t* ___wordResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.QCARManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWordResultPoses_m3660 (WordManagerImpl_t770 * __this, Transform_t2 * ___arCameraTransform, Object_t* ___wordResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C" void WordManagerImpl_AssociateWordResultsWithBehaviours_m3661 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C" void WordManagerImpl_UnregisterLostWords_m3662 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C" void WordManagerImpl_UpdateWordBehaviourPoses_m3663 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C" WordAbstractBehaviour_t132 * WordManagerImpl_AssociateWordBehaviour_m3664 (WordManagerImpl_t770 * __this, WordResult_t773 * ___wordResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t132 * WordManagerImpl_AssociateWordBehaviour_m3665 (WordManagerImpl_t770 * __this, WordResult_t773 * ___wordResult, WordAbstractBehaviour_t132 * ___wordBehaviourTemplate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t132 * WordManagerImpl_InstantiateWordBehaviour_m3666 (Object_t * __this /* static, unused */, WordAbstractBehaviour_t132 * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C" WordAbstractBehaviour_t132 * WordManagerImpl_CreateWordBehaviour_m3667 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C" void WordManagerImpl__ctor_m3668 (WordManagerImpl_t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
