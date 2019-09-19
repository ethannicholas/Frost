#pragma once
#include "frost_c.h"
#include "Context_types.h"
typedef struct org$frostlang$frostc$Interpreter$Context org$frostlang$frostc$Interpreter$Context;
typedef struct org$frostlang$frostc$Interpreter org$frostlang$frostc$Interpreter;
typedef struct org$frostlang$frostc$Interpreter$Code org$frostlang$frostc$Interpreter$Code;
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;

void org$frostlang$frostc$Interpreter$Context$init$org$frostlang$frostc$Interpreter$org$frostlang$frostc$Interpreter$Code(void* rawSelf, org$frostlang$frostc$Interpreter* p_interpreter, org$frostlang$frostc$Interpreter$Code* p_code);
frost$core$Int64 org$frostlang$frostc$Interpreter$Context$value$org$frostlang$frostc$IR$Value$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$IR$Value* p_value);
void org$frostlang$frostc$Interpreter$Context$cleanup(void* rawSelf);

