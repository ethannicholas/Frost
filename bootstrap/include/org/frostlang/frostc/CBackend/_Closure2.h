#pragma once
#include "frost_c.h"
#include "_Closure2_types.h"
typedef struct org$frostlang$frostc$CBackend$_Closure2 org$frostlang$frostc$CBackend$_Closure2;
typedef struct org$frostlang$frostc$CBackend org$frostlang$frostc$CBackend;
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$CBackend$_Closure2$init$org$frostlang$frostc$CBackend$org$frostlang$frostc$IR$Statement$ID(void* rawSelf, org$frostlang$frostc$CBackend* p_$self, org$frostlang$frostc$IR$Statement$ID p_id);
void org$frostlang$frostc$CBackend$_Closure2$cleanup(void* rawSelf);
void org$frostlang$frostc$CBackend$_Closure2$$anonymous1$frost$core$String(void* rawSelf, frost$core$String* p_type);
