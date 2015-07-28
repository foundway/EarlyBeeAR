#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t1139;
// System.Uri
struct Uri_t1138;
// UnityEngine.Coroutine
struct Coroutine_t413;
struct Coroutine_t413_marshaled;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t1140;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t1118;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t1141;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t1120;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
struct ResponseDelegate_1_t1142;
// UnityEngine.Networking.Match.DestroyMatchRequest
struct DestroyMatchRequest_t1122;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t1123;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t1143;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t1124;
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern "C" void NetworkMatch__ctor_m6925 (NetworkMatch_t1139 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t1138 * NetworkMatch_get_baseUri_m6926 (NetworkMatch_t1139 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m6927 (NetworkMatch_t1139 * __this, Uri_t1138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" void NetworkMatch_SetProgramAppID_m6928 (NetworkMatch_t1139 * __this, uint64_t ___programAppID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t413 * NetworkMatch_CreateMatch_m6929 (NetworkMatch_t1139 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t1140 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C" Coroutine_t413 * NetworkMatch_CreateMatch_m6930 (NetworkMatch_t1139 * __this, CreateMatchRequest_t1118 * ___req, ResponseDelegate_1_t1140 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t413 * NetworkMatch_JoinMatch_m6931 (NetworkMatch_t1139 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t1141 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C" Coroutine_t413 * NetworkMatch_JoinMatch_m6932 (NetworkMatch_t1139 * __this, JoinMatchRequest_t1120 * ___req, ResponseDelegate_1_t1141 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t413 * NetworkMatch_DestroyMatch_m6933 (NetworkMatch_t1139 * __this, uint64_t ___netId, ResponseDelegate_1_t1142 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t413 * NetworkMatch_DestroyMatch_m6934 (NetworkMatch_t1139 * __this, DestroyMatchRequest_t1122 * ___req, ResponseDelegate_1_t1142 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t413 * NetworkMatch_DropConnection_m6935 (NetworkMatch_t1139 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t1142 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern "C" Coroutine_t413 * NetworkMatch_DropConnection_m6936 (NetworkMatch_t1139 * __this, DropConnectionRequest_t1123 * ___req, ResponseDelegate_1_t1142 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t413 * NetworkMatch_ListMatches_m6937 (NetworkMatch_t1139 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t1143 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C" Coroutine_t413 * NetworkMatch_ListMatches_m6938 (NetworkMatch_t1139 * __this, ListMatchRequest_t1124 * ___req, ResponseDelegate_1_t1143 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
