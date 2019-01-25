#pragma once
#include "frost_c.h"
#include "Analyzer_types.h"
typedef struct org$frostlang$frostc$Analyzer org$frostlang$frostc$Analyzer;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct org$frostlang$frostc$Analyzer$DataFlowValue org$frostlang$frostc$Analyzer$DataFlowValue;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Analyzer$State org$frostlang$frostc$Analyzer$State;
#include "org/frostlang/frostc/Analyzer/BlockExit_types.h"
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$IR$Block org$frostlang$frostc$IR$Block;
#include "frost/core/Int64_types.h"
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
org$frostlang$frostc$Analyzer$DataFlowValue* org$frostlang$frostc$Analyzer$getValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Analyzer$State$R$org$frostlang$frostc$Analyzer$DataFlowValue(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Value* p_v, org$frostlang$frostc$Analyzer$State* p_s);
void org$frostlang$frostc$Analyzer$propagate$org$frostlang$frostc$Analyzer$BlockExit$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$Analyzer$BlockExit p_src, org$frostlang$frostc$IR$Block$ID p_target);
org$frostlang$frostc$IR$Block* org$frostlang$frostc$Analyzer$getBlock$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$IR$Block(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Block$ID p_id);
void org$frostlang$frostc$Analyzer$updateStateForExitIndex$org$frostlang$frostc$IR$Block$frost$core$Int64$org$frostlang$frostc$Analyzer$State(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Block* p_b, frost$core$Int64 p_exit, org$frostlang$frostc$Analyzer$State* p_state);
org$frostlang$frostc$Analyzer$DataFlowValue* org$frostlang$frostc$Analyzer$binaryValue$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Analyzer$State$org$frostlang$frostc$Type$R$org$frostlang$frostc$Analyzer$DataFlowValue(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Value* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$IR$Value* p_right, org$frostlang$frostc$Analyzer$State* p_state, org$frostlang$frostc$Type* p_type);
org$frostlang$frostc$Analyzer$State* org$frostlang$frostc$Analyzer$computeExitState$org$frostlang$frostc$Analyzer$BlockExit$frost$core$Bit$R$org$frostlang$frostc$Analyzer$State(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$Analyzer$BlockExit p_target, frost$core$Bit p_reportErrors);
void org$frostlang$frostc$Analyzer$process$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Block$ID p_id);
void org$frostlang$frostc$Analyzer$dump(org$frostlang$frostc$Analyzer* self);
void org$frostlang$frostc$Analyzer$analyze(org$frostlang$frostc$Analyzer* self);
void org$frostlang$frostc$Analyzer$cleanup(org$frostlang$frostc$Analyzer* self);

