#pragma once
#include "frost_c.h"
#include "Kind_types.h"
#include "org/frostlang/frostc/FieldDecl/Kind_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$FieldDecl$Kind$cleanup(org$frostlang$frostc$FieldDecl$Kind self);
org$frostlang$frostc$FieldDecl$Kind org$frostlang$frostc$FieldDecl$Kind$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$FieldDecl$Kind$$EQ$org$frostlang$frostc$FieldDecl$Kind$R$frost$core$Bit(org$frostlang$frostc$FieldDecl$Kind self, org$frostlang$frostc$FieldDecl$Kind p_other);
frost$core$Int org$frostlang$frostc$FieldDecl$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$FieldDecl$Kind self);
frost$core$String* org$frostlang$frostc$FieldDecl$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$FieldDecl$Kind self);

