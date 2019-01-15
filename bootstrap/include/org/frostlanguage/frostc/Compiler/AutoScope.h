#pragma once
#include "frost_c.h"
#include "AutoScope_types.h"
typedef struct org$frostlanguage$frostc$Compiler$AutoScope org$frostlanguage$frostc$Compiler$AutoScope;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;
typedef struct org$frostlanguage$frostc$SymbolTable org$frostlanguage$frostc$SymbolTable;

void org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$Compiler$AutoScope* self, org$frostlanguage$frostc$Compiler* p_compiler);
void org$frostlanguage$frostc$Compiler$AutoScope$init$org$frostlanguage$frostc$Compiler$org$frostlanguage$frostc$SymbolTable(org$frostlanguage$frostc$Compiler$AutoScope* self, org$frostlanguage$frostc$Compiler* p_compiler, org$frostlanguage$frostc$SymbolTable* p_symbolTable);
void org$frostlanguage$frostc$Compiler$AutoScope$cleanup(org$frostlanguage$frostc$Compiler$AutoScope* self);

