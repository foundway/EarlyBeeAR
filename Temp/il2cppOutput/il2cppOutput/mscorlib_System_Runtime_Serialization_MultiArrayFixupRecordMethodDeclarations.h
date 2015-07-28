#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t2359;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2356;
// System.Int32[]
struct Int32U5BU5D_t34;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2349;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m13024 (MultiArrayFixupRecord_t2359 * __this, ObjectRecord_t2356 * ___objectToBeFixed, Int32U5BU5D_t34* ___indices, ObjectRecord_t2356 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m13025 (MultiArrayFixupRecord_t2359 * __this, ObjectManager_t2349 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
