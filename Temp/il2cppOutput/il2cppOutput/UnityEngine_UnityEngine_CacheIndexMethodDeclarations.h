#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t1062;
struct CacheIndex_t1062_marshaled;

void CacheIndex_t1062_marshal(const CacheIndex_t1062& unmarshaled, CacheIndex_t1062_marshaled& marshaled);
void CacheIndex_t1062_marshal_back(const CacheIndex_t1062_marshaled& marshaled, CacheIndex_t1062& unmarshaled);
void CacheIndex_t1062_marshal_cleanup(CacheIndex_t1062_marshaled& marshaled);
