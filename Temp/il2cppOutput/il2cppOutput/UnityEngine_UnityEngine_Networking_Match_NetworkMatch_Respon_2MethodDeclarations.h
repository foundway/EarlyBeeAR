#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t1143;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t1129;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m30198(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t1143 *, Object_t *, IntPtr_t, MethodInfo*))ResponseDelegate_1__ctor_m30168_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m30199(__this, ___response, method) (( void (*) (ResponseDelegate_1_t1143 *, ListMatchResponse_t1129 *, MethodInfo*))ResponseDelegate_1_Invoke_m30170_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m30200(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t1143 *, ListMatchResponse_t1129 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))ResponseDelegate_1_BeginInvoke_m30172_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m30201(__this, ___result, method) (( void (*) (ResponseDelegate_1_t1143 *, Object_t *, MethodInfo*))ResponseDelegate_1_EndInvoke_m30174_gshared)(__this, ___result, method)
