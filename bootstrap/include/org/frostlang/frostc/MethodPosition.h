#pragma once
#include "frost_c.h"
#include "MethodPosition_types.h"
#include "org/frostlang/frostc/MethodPosition_types.h"
#include "org/frostlang/frostc/Position_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;

org$frostlang$frostc$MethodPosition org$frostlang$frostc$MethodPosition$init();
org$frostlang$frostc$MethodPosition org$frostlang$frostc$MethodPosition$init$org$frostlang$frostc$Position$frost$core$Int(org$frostlang$frostc$Position p_base, frost$core$Int p_methodIndex);
frost$core$Bit org$frostlang$frostc$MethodPosition$$EQ$org$frostlang$frostc$MethodPosition$R$frost$core$Bit(org$frostlang$frostc$MethodPosition self, org$frostlang$frostc$MethodPosition p_other);
frost$core$Int org$frostlang$frostc$MethodPosition$get_hash$R$frost$core$Int(org$frostlang$frostc$MethodPosition self);
org$frostlang$frostc$Position org$frostlang$frostc$MethodPosition$get_asPosition$R$org$frostlang$frostc$Position(org$frostlang$frostc$MethodPosition self);
frost$core$String* org$frostlang$frostc$MethodPosition$get_asString$R$frost$core$String(org$frostlang$frostc$MethodPosition self);
frost$core$String* org$frostlang$frostc$MethodPosition$asString$org$frostlang$frostc$Compiler$R$frost$core$String(org$frostlang$frostc$MethodPosition self, org$frostlang$frostc$Compiler* p_compiler);
void org$frostlang$frostc$MethodPosition$cleanup(org$frostlang$frostc$MethodPosition self);

