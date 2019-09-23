#pragma once
#include "frost_c.h"
#include "Continue_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
#include "org/frostlang/frostc/MethodPosition_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$statement$Continue org$frostlang$frostc$statement$Continue;

void org$frostlang$frostc$statement$Continue$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodPosition$frost$core$String$Q(org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodPosition p_position, frost$core$String* p_label);
void org$frostlang$frostc$statement$Continue$init(void* rawSelf);
void org$frostlang$frostc$statement$Continue$cleanup(void* rawSelf);

