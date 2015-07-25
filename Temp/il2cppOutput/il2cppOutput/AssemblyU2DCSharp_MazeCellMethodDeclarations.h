#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MazeCell
struct MazeCell_t29;
struct MazeCell_t29_marshaled;

void MazeCell_t29_marshal(const MazeCell_t29& unmarshaled, MazeCell_t29_marshaled& marshaled);
void MazeCell_t29_marshal_back(const MazeCell_t29_marshaled& marshaled, MazeCell_t29& unmarshaled);
void MazeCell_t29_marshal_cleanup(MazeCell_t29_marshaled& marshaled);
