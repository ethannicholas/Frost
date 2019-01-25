#pragma once
#include "frost_c.h"
#include "DataFlowValue_types.h"
typedef struct org$frostlang$frostc$Analyzer$DataFlowValue org$frostlang$frostc$Analyzer$DataFlowValue;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$Analyzer$DataFlowValue$init(org$frostlang$frostc$Analyzer$DataFlowValue* self);
void org$frostlang$frostc$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type(org$frostlang$frostc$Analyzer$DataFlowValue* self, org$frostlang$frostc$Type* p_type);
void org$frostlang$frostc$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$frost$collections$ListView$LTorg$frostlang$frostc$Pair$LTorg$frostlang$frostc$IR$Value$Cfrost$core$Bit$GT$GT$Q(org$frostlang$frostc$Analyzer$DataFlowValue* self, org$frostlang$frostc$Type* p_type, frost$collections$ListView* p_implications);
frost$core$Bit org$frostlang$frostc$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$Analyzer$DataFlowValue$R$frost$core$Bit(org$frostlang$frostc$Analyzer$DataFlowValue* self, org$frostlang$frostc$Analyzer$DataFlowValue* p_other);
org$frostlang$frostc$Analyzer$DataFlowValue* org$frostlang$frostc$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Analyzer$DataFlowValue$R$org$frostlang$frostc$Analyzer$DataFlowValue(org$frostlang$frostc$Analyzer$DataFlowValue* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$Analyzer$DataFlowValue* p_other);
org$frostlang$frostc$Analyzer$DataFlowValue* org$frostlang$frostc$Analyzer$DataFlowValue$get_invert$R$org$frostlang$frostc$Analyzer$DataFlowValue(org$frostlang$frostc$Analyzer$DataFlowValue* self);
frost$core$String* org$frostlang$frostc$Analyzer$DataFlowValue$get_asString$R$frost$core$String(org$frostlang$frostc$Analyzer$DataFlowValue* self);
void org$frostlang$frostc$Analyzer$DataFlowValue$cleanup(org$frostlang$frostc$Analyzer$DataFlowValue* self);

