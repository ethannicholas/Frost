#pragma once
#include "frost_c.h"
#include "IR_types.h"
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
#include "org/frostlang/frostc/IR/Statement/ID_types.h"
typedef struct org$frostlang$frostc$IR$Statement org$frostlang$frostc$IR$Statement;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct frost$core$String frost$core$String;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$IR$init(void* rawSelf);
org$frostlang$frostc$IR$Statement$ID org$frostlang$frostc$IR$add$org$frostlang$frostc$IR$Statement$R$org$frostlang$frostc$IR$Statement$ID(void* rawSelf, org$frostlang$frostc$IR$Statement* p_s);
org$frostlang$frostc$IR$Block$ID org$frostlang$frostc$IR$newBlock$frost$core$String$R$org$frostlang$frostc$IR$Block$ID(void* rawSelf, frost$core$String* p_comment);
void org$frostlang$frostc$IR$setCurrentBlock$org$frostlang$frostc$IR$Block$ID(void* rawSelf, org$frostlang$frostc$IR$Block$ID p_id);
frost$core$Bit org$frostlang$frostc$IR$get_currentBlockFinished$R$frost$core$Bit(void* rawSelf);
frost$core$String* org$frostlang$frostc$IR$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$IR$cleanup(void* rawSelf);

