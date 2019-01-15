#pragma once
#include "frost_c.h"
#include "IR_types.h"
typedef struct org$frostlanguage$frostc$IR org$frostlanguage$frostc$IR;
#include "org/frostlanguage/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlanguage$frostc$IR$Statement org$frostlanguage$frostc$IR$Statement;
#include "org/frostlanguage/frostc/IR/Block/ID_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlanguage$frostc$IR$init(org$frostlanguage$frostc$IR* self);
org$frostlanguage$frostc$IR$Statement$ID org$frostlanguage$frostc$IR$add$org$frostlanguage$frostc$IR$Statement$R$org$frostlanguage$frostc$IR$Statement$ID(org$frostlanguage$frostc$IR* self, org$frostlanguage$frostc$IR$Statement* p_s);
org$frostlanguage$frostc$IR$Block$ID org$frostlanguage$frostc$IR$newBlock$frost$core$String$R$org$frostlanguage$frostc$IR$Block$ID(org$frostlanguage$frostc$IR* self, frost$core$String* p_comment);
void org$frostlanguage$frostc$IR$setCurrentBlock$org$frostlanguage$frostc$IR$Block$ID(org$frostlanguage$frostc$IR* self, org$frostlanguage$frostc$IR$Block$ID p_id);
frost$core$Bit org$frostlanguage$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(org$frostlanguage$frostc$IR* self);
frost$core$String* org$frostlanguage$frostc$IR$convert$R$frost$core$String(org$frostlanguage$frostc$IR* self);
void org$frostlanguage$frostc$IR$cleanup(org$frostlanguage$frostc$IR* self);

