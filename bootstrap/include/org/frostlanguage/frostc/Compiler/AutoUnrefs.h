#pragma once
#include "frost_c.h"
#include "AutoUnrefs_types.h"
typedef struct org$frostlanguage$frostc$Compiler$AutoUnrefs org$frostlanguage$frostc$Compiler$AutoUnrefs;
typedef struct org$frostlanguage$frostc$Compiler org$frostlanguage$frostc$Compiler;

void org$frostlanguage$frostc$Compiler$AutoUnrefs$init$org$frostlanguage$frostc$Compiler(org$frostlanguage$frostc$Compiler$AutoUnrefs* self, org$frostlanguage$frostc$Compiler* p_compiler);
void org$frostlanguage$frostc$Compiler$AutoUnrefs$cleanup(org$frostlanguage$frostc$Compiler$AutoUnrefs* self);

