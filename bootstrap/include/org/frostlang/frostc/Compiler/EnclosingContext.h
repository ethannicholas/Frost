#pragma once
#include "frost_c.h"
#include "EnclosingContext_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Compiler$EnclosingContext org$frostlang$frostc$Compiler$EnclosingContext;
#include "frost/core/Int64_types.h"
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct org$frostlang$frostc$Compiler$InlineReturn org$frostlang$frostc$Compiler$InlineReturn;
#include "org/frostlang/frostc/IR/Block/ID_types.h"
typedef struct org$frostlang$frostc$Variable org$frostlang$frostc$Variable;
typedef struct org$frostlang$frostc$IR$Value org$frostlang$frostc$IR$Value;

frost$core$String* org$frostlang$frostc$Compiler$EnclosingContext$get_asString$R$frost$core$String(org$frostlang$frostc$Compiler$EnclosingContext* self);
void org$frostlang$frostc$Compiler$EnclosingContext$cleanup(org$frostlang$frostc$Compiler$EnclosingContext* self);
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$collections$ListView$LTorg$frostlang$frostc$IR$Value$GT$frost$core$Int64$org$frostlang$frostc$Compiler$InlineReturn$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv, frost$collections$ListView* p_f0, frost$core$Int64 p_f1, org$frostlang$frostc$Compiler$InlineReturn* p_f2, org$frostlang$frostc$IR$Block$ID p_f3);
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID(org$frostlang$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv, frost$core$String* p_f0, org$frostlang$frostc$IR$Block$ID p_f1, org$frostlang$frostc$IR$Block$ID p_f2);
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64(org$frostlang$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv);
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$Variable(org$frostlang$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv, org$frostlang$frostc$Variable* p_f0);
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Value(org$frostlang$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv, org$frostlang$frostc$IR$Value* p_f0);
void org$frostlang$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlang$frostc$IR$Block$ID$Q$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv, org$frostlang$frostc$IR$Block$ID$nullable p_f0, org$frostlang$frostc$Variable* p_f1);

