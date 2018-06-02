#pragma once
#include "panda_c.h"
#include "AutoSymbolTable_types.h"
typedef struct org$pandalanguage$pandac$Compiler$AutoSymbolTable org$pandalanguage$pandac$Compiler$AutoSymbolTable;
typedef struct org$pandalanguage$pandac$Compiler org$pandalanguage$pandac$Compiler;
typedef struct org$pandalanguage$pandac$SymbolTable org$pandalanguage$pandac$SymbolTable;

void org$pandalanguage$pandac$Compiler$AutoSymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler);
void org$pandalanguage$pandac$Compiler$AutoSymbolTable$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$SymbolTable* p_symbolTable);
void org$pandalanguage$pandac$Compiler$AutoSymbolTable$cleanup(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self);

