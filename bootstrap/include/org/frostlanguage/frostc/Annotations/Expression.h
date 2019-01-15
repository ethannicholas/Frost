#pragma once
#include "frost_c.h"
#include "Expression_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct org$frostlanguage$frostc$Annotations$Expression org$frostlanguage$frostc$Annotations$Expression;
#include "frost/core/Int64_types.h"
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;

frost$core$String* org$frostlanguage$frostc$Annotations$Expression$convert$R$frost$core$String(org$frostlanguage$frostc$Annotations$Expression* self);
void org$frostlanguage$frostc$Annotations$Expression$cleanup(org$frostlanguage$frostc$Annotations$Expression* self);
void org$frostlanguage$frostc$Annotations$Expression$init$frost$core$Int64$frost$core$String$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Annotations$Expression* self, frost$core$Int64 p_rv, frost$core$String* p_f0, org$frostlanguage$frostc$ASTNode* p_f1);

