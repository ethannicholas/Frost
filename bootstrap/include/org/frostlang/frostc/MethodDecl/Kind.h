#pragma once
#include "frost_c.h"
#include "Kind_types.h"
#include "org/frostlang/frostc/MethodDecl/Kind_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$MethodDecl$Kind$cleanup(org$frostlang$frostc$MethodDecl$Kind self);
org$frostlang$frostc$MethodDecl$Kind org$frostlang$frostc$MethodDecl$Kind$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$MethodDecl$Kind$$EQ$org$frostlang$frostc$MethodDecl$Kind$R$frost$core$Bit(org$frostlang$frostc$MethodDecl$Kind self, org$frostlang$frostc$MethodDecl$Kind p_other);
frost$core$Int org$frostlang$frostc$MethodDecl$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$MethodDecl$Kind self);
frost$core$String* org$frostlang$frostc$MethodDecl$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$MethodDecl$Kind self);

