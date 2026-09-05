#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);

// Returns: Offset to beggining of next instruction
int disassembleInstruction(Chunk* chunk, int offset);


#endif
