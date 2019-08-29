#pragma once
#include "frost_c.h"
#include "State_types.h"
typedef struct org$frostlang$frostc$pass$Analyzer$State org$frostlang$frostc$pass$Analyzer$State;
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$pass$Analyzer$State$init(org$frostlang$frostc$pass$Analyzer$State* self);
frost$collections$Array* org$frostlang$frostc$pass$Analyzer$State$$anonymous2$frost$collections$Array$LTfrost$collections$IdentitySet$LTorg$frostlang$frostc$FieldDecl$GT$Q$GT$R$frost$collections$Array$LTfrost$collections$IdentitySet$LTorg$frostlang$frostc$FieldDecl$GT$Q$GT(frost$collections$Array* p_src);
void org$frostlang$frostc$pass$Analyzer$State$init$org$frostlang$frostc$pass$Analyzer$State(org$frostlang$frostc$pass$Analyzer$State* self, org$frostlang$frostc$pass$Analyzer$State* p_src);
frost$core$Bit org$frostlang$frostc$pass$Analyzer$State$add$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$State$R$frost$core$Bit(org$frostlang$frostc$pass$Analyzer$State* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$pass$Analyzer$State* p_s);
frost$core$String* org$frostlang$frostc$pass$Analyzer$State$get_asString$R$frost$core$String(org$frostlang$frostc$pass$Analyzer$State* self);
void org$frostlang$frostc$pass$Analyzer$State$cleanup(org$frostlang$frostc$pass$Analyzer$State* self);

