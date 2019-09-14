#pragma once
#include "frost_c.h"
#include "AutoUnrefs_types.h"
typedef struct org$frostlang$frostc$Compiler$AutoUnrefs org$frostlang$frostc$Compiler$AutoUnrefs;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;

void org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$Compiler$AutoUnrefs$cleanup(void* rawSelf);

