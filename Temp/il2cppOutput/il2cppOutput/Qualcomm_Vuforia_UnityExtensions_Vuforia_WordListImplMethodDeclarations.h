#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WordListImpl
struct WordListImpl_t775;
// System.String
struct String_t;
// Vuforia.DataSet/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSet_StorageType.h"
// Vuforia.QCARUnity/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_StorageTy.h"
// Vuforia.WordFilterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilterMode.h"

// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String)
extern "C" bool WordListImpl_LoadWordListFile_m3680 (WordListImpl_t775 * __this, String_t* ___relativePath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String,Vuforia.DataSet/StorageType)
extern "C" bool WordListImpl_LoadWordListFile_m3681 (WordListImpl_t775 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String,Vuforia.QCARUnity/StorageType)
extern "C" bool WordListImpl_LoadWordListFile_m3682 (WordListImpl_t775 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String)
extern "C" int32_t WordListImpl_AddWordsFromFile_m3683 (WordListImpl_t775 * __this, String_t* ___relativePath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String,Vuforia.DataSet/StorageType)
extern "C" int32_t WordListImpl_AddWordsFromFile_m3684 (WordListImpl_t775 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String,Vuforia.QCARUnity/StorageType)
extern "C" int32_t WordListImpl_AddWordsFromFile_m3685 (WordListImpl_t775 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWord(System.String)
extern "C" bool WordListImpl_AddWord_m3686 (WordListImpl_t775 * __this, String_t* ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWord(System.String)
extern "C" bool WordListImpl_RemoveWord_m3687 (WordListImpl_t775 * __this, String_t* ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ContainsWord(System.String)
extern "C" bool WordListImpl_ContainsWord_m3688 (WordListImpl_t775 * __this, String_t* ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::UnloadAllLists()
extern "C" bool WordListImpl_UnloadAllLists_m3689 (WordListImpl_t775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.WordListImpl::GetFilterMode()
extern "C" int32_t WordListImpl_GetFilterMode_m3690 (WordListImpl_t775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::SetFilterMode(Vuforia.WordFilterMode)
extern "C" bool WordListImpl_SetFilterMode_m3691 (WordListImpl_t775 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String)
extern "C" bool WordListImpl_LoadFilterListFile_m3692 (WordListImpl_t775 * __this, String_t* ___relativePath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String,Vuforia.DataSet/StorageType)
extern "C" bool WordListImpl_LoadFilterListFile_m3693 (WordListImpl_t775 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String,Vuforia.QCARUnity/StorageType)
extern "C" bool WordListImpl_LoadFilterListFile_m3694 (WordListImpl_t775 * __this, String_t* ___path, int32_t ___storageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWordToFilterList(System.String)
extern "C" bool WordListImpl_AddWordToFilterList_m3695 (WordListImpl_t775 * __this, String_t* ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWordFromFilterList(System.String)
extern "C" bool WordListImpl_RemoveWordFromFilterList_m3696 (WordListImpl_t775 * __this, String_t* ___word, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ClearFilterList()
extern "C" bool WordListImpl_ClearFilterList_m3697 (WordListImpl_t775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::GetFilterListWordCount()
extern "C" int32_t WordListImpl_GetFilterListWordCount_m3698 (WordListImpl_t775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordListImpl::GetFilterListWord(System.Int32)
extern "C" String_t* WordListImpl_GetFilterListWord_m3699 (WordListImpl_t775 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordListImpl::.ctor()
extern "C" void WordListImpl__ctor_m3700 (WordListImpl_t775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
