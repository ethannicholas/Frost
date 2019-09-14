#pragma once
#include "frost_c.h"
#include "DataFlowValue_types.h"
typedef struct org$frostlang$frostc$pass$Analyzer$DataFlowValue org$frostlang$frostc$pass$Analyzer$DataFlowValue;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$pass$Analyzer$Definition org$frostlang$frostc$pass$Analyzer$Definition;
typedef struct frost$collections$ListView frost$collections$ListView;
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition(void* rawSelf, org$frostlang$frostc$Type* p_type, org$frostlang$frostc$pass$Analyzer$Definition* p_definition);
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q(void* rawSelf, org$frostlang$frostc$Type* p_type, org$frostlang$frostc$pass$Analyzer$Definition* p_definition, frost$collections$ListView* p_implications);
frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$pass$Analyzer$DataFlowValue* p_other);
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(void* rawSelf, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$pass$Analyzer$DataFlowValue* p_other);
frost$core$String* org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String(void* rawSelf);
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup(void* rawSelf);

