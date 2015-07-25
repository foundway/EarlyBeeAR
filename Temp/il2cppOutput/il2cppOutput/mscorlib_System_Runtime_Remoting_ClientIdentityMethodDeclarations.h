#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2318;
// System.MarshalByRefObject
struct MarshalByRefObject_t1654;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2315;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m12891 (ClientIdentity_t2318 * __this, String_t* ___objectUri, ObjRef_t2315 * ___objRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t1654 * ClientIdentity_get_ClientProxy_m12892 (ClientIdentity_t2318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m12893 (ClientIdentity_t2318 * __this, MarshalByRefObject_t1654 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t2315 * ClientIdentity_CreateObjRef_m12894 (ClientIdentity_t2318 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m12895 (ClientIdentity_t2318 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
