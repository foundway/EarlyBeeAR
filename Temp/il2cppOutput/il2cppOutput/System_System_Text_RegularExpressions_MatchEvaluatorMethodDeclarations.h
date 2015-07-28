﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1707;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t1704;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C" void MatchEvaluator__ctor_m8795 (MatchEvaluator_t1707 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C" String_t* MatchEvaluator_Invoke_m8796 (MatchEvaluator_t1707 * __this, Match_t1704 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t1707(Il2CppObject* delegate, Match_t1704 * ___match);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C" Object_t * MatchEvaluator_BeginInvoke_m8797 (MatchEvaluator_t1707 * __this, Match_t1704 * ___match, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C" String_t* MatchEvaluator_EndInvoke_m8798 (MatchEvaluator_t1707 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;