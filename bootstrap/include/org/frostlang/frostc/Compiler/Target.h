#pragma once
#include "frost_c.h"
#include "Target_types.h"
typedef struct org$frostlang$frostc$Compiler$Target org$frostlang$frostc$Compiler$Target;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Compiler$Target$cleanup(void* rawSelf);
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int$org$frostlang$frostc$Variable$org$frostlang$frostc$IR$Value$Q(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$Variable* p_f0, org$frostlang$frostc$IR$Value* p_f1);
void org$frostlang$frostc$Compiler$Target$init$frost$core$Int$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$Compiler$Target$GT(void* rawSelf, frost$core$Int p_rv, org$frostlang$frostc$FixedArray* p_f0);
frost$core$String* org$frostlang$frostc$Compiler$Target$get_asString$R$frost$core$String(void* rawSelf);

