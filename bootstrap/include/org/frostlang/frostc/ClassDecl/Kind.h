#pragma once
#include "frost_c.h"
#include "Kind_types.h"
#include "org/frostlang/frostc/ClassDecl/Kind_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$core$String frost$core$String;

void org$frostlang$frostc$ClassDecl$Kind$cleanup(org$frostlang$frostc$ClassDecl$Kind self);
org$frostlang$frostc$ClassDecl$Kind org$frostlang$frostc$ClassDecl$Kind$init$frost$core$Int(frost$core$Int p_rv);
frost$core$Bit org$frostlang$frostc$ClassDecl$Kind$$EQ$org$frostlang$frostc$ClassDecl$Kind$R$frost$core$Bit(org$frostlang$frostc$ClassDecl$Kind self, org$frostlang$frostc$ClassDecl$Kind p_other);
frost$core$Int org$frostlang$frostc$ClassDecl$Kind$get_hash$R$frost$core$Int(org$frostlang$frostc$ClassDecl$Kind self);
frost$core$String* org$frostlang$frostc$ClassDecl$Kind$get_asString$R$frost$core$String(org$frostlang$frostc$ClassDecl$Kind self);

