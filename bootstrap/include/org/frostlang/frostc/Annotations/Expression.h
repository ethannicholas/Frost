#pragma once
#include "frost_c.h"
#include "Expression_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlang$frostc$Annotations$Expression org$frostlang$frostc$Annotations$Expression;
#include "frost/core/Int_types.h"
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;

frost$core$String* org$frostlang$frostc$Annotations$Expression$get_asString$R$frost$core$String(org$frostlang$frostc$Annotations$Expression* self);
void org$frostlang$frostc$Annotations$Expression$cleanup(org$frostlang$frostc$Annotations$Expression* self);
void org$frostlang$frostc$Annotations$Expression$init$frost$core$Int$frost$core$String$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Annotations$Expression* self, frost$core$Int p_rv, frost$core$String* p_f0, org$frostlang$frostc$ASTNode* p_f1);

