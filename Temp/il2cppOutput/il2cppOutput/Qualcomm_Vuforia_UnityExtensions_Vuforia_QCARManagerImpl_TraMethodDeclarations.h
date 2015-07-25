#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl/TrackableResultData
struct TrackableResultData_t710;
struct TrackableResultData_t710_marshaled;

void TrackableResultData_t710_marshal(const TrackableResultData_t710& unmarshaled, TrackableResultData_t710_marshaled& marshaled);
void TrackableResultData_t710_marshal_back(const TrackableResultData_t710_marshaled& marshaled, TrackableResultData_t710& unmarshaled);
void TrackableResultData_t710_marshal_cleanup(TrackableResultData_t710_marshaled& marshaled);
