#pragma once
#include "frost_c.h"
#include "Statement_types.h"
#include "org/frostlang/frostc/Position_types.h"
typedef struct org$frostlang$frostc$IR$Statement org$frostlang$frostc$IR$Statement;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
#include "frost/core/Bit_types.h"
typedef struct org$frostlang$frostc$ChoiceCase org$frostlang$frostc$ChoiceCase;
typedef struct org$frostlang$frostc$ClassDecl org$frostlang$frostc$ClassDecl;
typedef struct org$frostlang$frostc$FixedArray org$frostlang$frostc$FixedArray;
typedef struct org$frostlang$frostc$FieldDecl org$frostlang$frostc$FieldDecl;
typedef struct org$frostlang$frostc$MethodDecl org$frostlang$frostc$MethodDecl;

org$frostlang$frostc$Position org$frostlang$frostc$IR$Statement$get_position$R$org$frostlang$frostc$Position(org$frostlang$frostc$IR$Statement* self);
frost$core$String* org$frostlang$frostc$IR$Statement$get_asString$R$frost$core$String(org$frostlang$frostc$IR$Statement* self);
void org$frostlang$frostc$IR$Statement$cleanup(org$frostlang$frostc$IR$Statement* self);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$expression$Binary$Operator p_f2, org$frostlang$frostc$IR$Value* p_f3, org$frostlang$frostc$Type* p_f4);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Block$ID p_f1);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type$frost$core$Bit(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$Type* p_f2, frost$core$Bit p_f3);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, frost$core$String* p_f1);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ChoiceCase$frost$core$Int64(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$ChoiceCase* p_f2, frost$core$Int64 p_f3);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$IR$Block$ID p_f2, org$frostlang$frostc$IR$Block$ID p_f3);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ClassDecl* p_f1);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$ClassDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$ClassDecl* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$FieldDecl(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$FieldDecl* p_f2);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, frost$core$Int64 p_f2, org$frostlang$frostc$Type* p_f3);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$ClassDecl$frost$core$Int64$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$ClassDecl* p_f2, frost$core$Int64 p_f3, org$frostlang$frostc$Type* p_f4);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$Type(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$Type* p_f2);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$IR$Value* p_f2);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Value(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1, org$frostlang$frostc$IR$Value* p_f2, org$frostlang$frostc$IR$Value* p_f3);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$IR$Value* p_f1);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$MethodDecl$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0, org$frostlang$frostc$MethodDecl* p_f1, org$frostlang$frostc$FixedArray* p_f2);
void org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position(org$frostlang$frostc$IR$Statement* self, frost$core$Int64 p_rv, org$frostlang$frostc$Position p_f0);

