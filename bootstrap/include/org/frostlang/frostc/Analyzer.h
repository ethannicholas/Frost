#pragma once
#include "frost_c.h"
#include "Analyzer_types.h"
typedef struct org$frostlang$frostc$Analyzer org$frostlang$frostc$Analyzer;
typedef struct org$frostlang$frostc$Compiler org$frostlang$frostc$Compiler;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;
typedef struct org$frostlang$frostc$IR org$frostlang$frostc$IR;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
typedef struct org$frostlang$frostc$Analyzer$State org$frostlang$frostc$Analyzer$State;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$IR$Block org$frostlang$frostc$IR$Block;
#include "frost/core/Bit_types.h"

void org$frostlang$frostc$Analyzer$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$IR(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$Compiler* p_compiler, org$frostlang$frostc$MethodDecl* p_m, org$frostlang$frostc$IR* p_ir);
org$frostlang$frostc$Type* org$frostlang$frostc$Analyzer$getType$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Analyzer$State$R$org$frostlang$frostc$Type(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Value* p_v, org$frostlang$frostc$Analyzer$State* p_s);
void org$frostlang$frostc$Analyzer$propagate$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Block$ID p_src, org$frostlang$frostc$IR$Block$ID p_target);
org$frostlang$frostc$IR$Block* org$frostlang$frostc$Analyzer$getBlock$org$frostlang$frostc$IR$Block$ID$R$org$frostlang$frostc$IR$Block(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Block$ID p_id);
org$frostlang$frostc$Analyzer$State* org$frostlang$frostc$Analyzer$computeExitState$org$frostlang$frostc$IR$Block$ID$frost$core$Bit$R$org$frostlang$frostc$Analyzer$State(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Block$ID p_id, frost$core$Bit p_reportErrors);
void org$frostlang$frostc$Analyzer$process$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Analyzer* self, org$frostlang$frostc$IR$Block$ID p_id);
void org$frostlang$frostc$Analyzer$analyze(org$frostlang$frostc$Analyzer* self);
void org$frostlang$frostc$Analyzer$cleanup(org$frostlang$frostc$Analyzer* self);

