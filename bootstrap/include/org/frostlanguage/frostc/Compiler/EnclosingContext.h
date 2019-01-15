#pragma once
#include "frost_c.h"
#include "EnclosingContext_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Compiler$EnclosingContext org$frostlanguage$frostc$Compiler$EnclosingContext;
#include "frost/core/Int64_types.h"
#include "org/frostlanguage/frostc/IR/Block/ID_types.h"
typedef struct org$frostlanguage$frostc$Variable org$frostlanguage$frostc$Variable;
typedef struct org$frostlanguage$frostc$IR$Value org$frostlanguage$frostc$IR$Value;

frost$core$String* org$frostlanguage$frostc$Compiler$EnclosingContext$convert$R$frost$core$String(org$frostlanguage$frostc$Compiler$EnclosingContext* self);
void org$frostlanguage$frostc$Compiler$EnclosingContext$cleanup(org$frostlanguage$frostc$Compiler$EnclosingContext* self);
void org$frostlanguage$frostc$Compiler$EnclosingContext$init$frost$core$Int64$frost$core$String$Q$org$frostlanguage$frostc$IR$Block$ID$org$frostlanguage$frostc$IR$Block$ID(org$frostlanguage$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv, frost$core$String* p_f0, org$frostlanguage$frostc$IR$Block$ID p_f1, org$frostlanguage$frostc$IR$Block$ID p_f2);
void org$frostlanguage$frostc$Compiler$EnclosingContext$init$frost$core$Int64(org$frostlanguage$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv);
void org$frostlanguage$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlanguage$frostc$Variable(org$frostlanguage$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$Variable* p_f0);
void org$frostlanguage$frostc$Compiler$EnclosingContext$init$frost$core$Int64$org$frostlanguage$frostc$IR$Value(org$frostlanguage$frostc$Compiler$EnclosingContext* self, frost$core$Int64 p_rv, org$frostlanguage$frostc$IR$Value* p_f0);

