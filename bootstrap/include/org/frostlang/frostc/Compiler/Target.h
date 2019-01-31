#pragma once
#include "frost_c.h"
#include "Target_types.h"
typedef struct org$frostlang$frostc$Compiler$Target org$frostlang$frostc$Compiler$Target;
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;

void org$frostlang$frostc$Compiler$Target$cleanup(org$frostlang$frostc$Compiler$Target* self);
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int64$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$Compiler$Target* self, frost$core$Int64 p_rv, org$frostlang$frostc$Variable* p_f0, org$frostlang$frostc$IR$Value* p_f1);
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int64$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Compiler$Target$GT(org$frostlang$frostc$Compiler$Target* self, frost$core$Int64 p_rv, org$frostlang$frostc$FixedArray* p_f0);

