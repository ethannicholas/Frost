#pragma once
#include "frost_c.h"
#include "AutoScope_types.h"
typedef struct org$frostlang$frostc$Compiler$AutoScope org$frostlang$frostc$Compiler$AutoScope;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$SymbolTable org$frostlang$frostc$SymbolTable;

void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$AutoScope* self, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$Compiler$AutoScope$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$SymbolTable(org$frostlang$frostc$Compiler$AutoScope* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$SymbolTable* p_symbolTable);
void org$frostlang$frostc$Compiler$AutoScope$cleanup(org$frostlang$frostc$Compiler$AutoScope* self);

