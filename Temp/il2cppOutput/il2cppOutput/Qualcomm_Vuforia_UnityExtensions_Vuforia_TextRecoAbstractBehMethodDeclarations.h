#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TextRecoAbstractBehaviour
struct TextRecoAbstractBehaviour_t133;
// System.String
struct String_t;
// Vuforia.ITextRecoEventHandler
struct ITextRecoEventHandler_t835;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t761;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t760;
// Vuforia.WordFilterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilterMode.h"
// Vuforia.WordPrefabCreationMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Boolean Vuforia.TextRecoAbstractBehaviour::get_IsInitialized()
extern "C" bool TextRecoAbstractBehaviour_get_IsInitialized_m4723 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Awake()
extern "C" void TextRecoAbstractBehaviour_Awake_m4724 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Start()
extern "C" void TextRecoAbstractBehaviour_Start_m4725 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnEnable()
extern "C" void TextRecoAbstractBehaviour_OnEnable_m4726 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDisable()
extern "C" void TextRecoAbstractBehaviour_OnDisable_m4727 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDestroy()
extern "C" void TextRecoAbstractBehaviour_OnDestroy_m4728 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::RegisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C" void TextRecoAbstractBehaviour_RegisterTextRecoEventHandler_m4729 (TextRecoAbstractBehaviour_t133 * __this, Object_t * ___trackableEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextRecoAbstractBehaviour::UnregisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C" bool TextRecoAbstractBehaviour_UnregisterTextRecoEventHandler_m4730 (TextRecoAbstractBehaviour_t133 * __this, Object_t * ___trackableEventHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StartTextTracker()
extern "C" void TextRecoAbstractBehaviour_StartTextTracker_m4731 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StopTextTracker()
extern "C" void TextRecoAbstractBehaviour_StopTextTracker_m4732 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::SetupWordList()
extern "C" void TextRecoAbstractBehaviour_SetupWordList_m4733 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::NotifyEventHandlersOfChanges(System.Collections.Generic.IEnumerable`1<Vuforia.Word>,System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>)
extern "C" void TextRecoAbstractBehaviour_NotifyEventHandlersOfChanges_m4734 (TextRecoAbstractBehaviour_t133 * __this, Object_t* ___lostWords, Object_t* ___newWords, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordListFile_m1274 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordListFile_m1275 (TextRecoAbstractBehaviour_t133 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_CustomWordListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_CustomWordListFile_m1276 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_CustomWordListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_CustomWordListFile_m1277 (TextRecoAbstractBehaviour_t133 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalCustomWords()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalCustomWords_m1278 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalCustomWords(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalCustomWords_m1279 (TextRecoAbstractBehaviour_t133 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterMode()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterMode_m1280 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterMode(Vuforia.WordFilterMode)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterMode_m1281 (TextRecoAbstractBehaviour_t133 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterListFile_m1282 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterListFile_m1283 (TextRecoAbstractBehaviour_t133 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalFilterWords()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalFilterWords_m1284 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalFilterWords(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalFilterWords_m1285 (TextRecoAbstractBehaviour_t133 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordPrefabCreationMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordPrefabCreationMode()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordPrefabCreationMode_m1286 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordPrefabCreationMode(Vuforia.WordPrefabCreationMode)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordPrefabCreationMode_m1287 (TextRecoAbstractBehaviour_t133 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_MaximumWordInstances()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_MaximumWordInstances_m1288 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_MaximumWordInstances(System.Int32)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_MaximumWordInstances_m1289 (TextRecoAbstractBehaviour_t133 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnQCARInitialized()
extern "C" void TextRecoAbstractBehaviour_OnQCARInitialized_m4735 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnQCARStarted()
extern "C" void TextRecoAbstractBehaviour_OnQCARStarted_m4736 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnTrackablesUpdated()
extern "C" void TextRecoAbstractBehaviour_OnTrackablesUpdated_m4737 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnPause(System.Boolean)
extern "C" void TextRecoAbstractBehaviour_OnPause_m4738 (TextRecoAbstractBehaviour_t133 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::.ctor()
extern "C" void TextRecoAbstractBehaviour__ctor_m1017 (TextRecoAbstractBehaviour_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
