#pragma once
#include "panda_c.h"
#include "AutoScope_types.h"
typedef struct org$pandalanguage$pandac$Compiler$AutoScope org$pandalanguage$pandac$Compiler$AutoScope;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;

void org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoScope* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler$AutoScope* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$SymbolTable* p_symbolTable);
void org$pandalanguage$pandac$Compiler$AutoScope$cleanup(org$pandalanguage$pandac$Compiler$AutoScope* self);

