﻿#pragma once
#include <stdint.h>
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t1224;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t1223;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t1221  : public Object_t
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t1224 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t1223 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;
};