#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t1129;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t1128;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" void ListMatchResponse__ctor_m6913 (ListMatchResponse_t1129 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t1128 * ListMatchResponse_get_matches_m6914 (ListMatchResponse_t1129 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m6915 (ListMatchResponse_t1129 * __this, List_1_t1128 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern "C" String_t* ListMatchResponse_ToString_m6916 (ListMatchResponse_t1129 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern "C" void ListMatchResponse_Parse_m6917 (ListMatchResponse_t1129 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
