#pragma once
#include "frost_c.h"
#include "State_types.h"
typedef struct org$frostlang$frostc$Analyzer$State org$frostlang$frostc$Analyzer$State;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Analyzer$State$init(org$frostlang$frostc$Analyzer$State* self);
void org$frostlang$frostc$Analyzer$State$init$org$frostlang$frostc$Analyzer$State(org$frostlang$frostc$Analyzer$State* self, org$frostlang$frostc$Analyzer$State* p_src);
frost$core$Bit org$frostlang$frostc$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$Analyzer$State$R$frost$core$Bit(org$frostlang$frostc$Analyzer$State* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Analyzer$State* p_s);
frost$core$String* org$frostlang$frostc$Analyzer$State$get_asString$R$frost$core$String(org$frostlang$frostc$Analyzer$State* self);
void org$frostlang$frostc$Analyzer$State$cleanup(org$frostlang$frostc$Analyzer$State* self);

