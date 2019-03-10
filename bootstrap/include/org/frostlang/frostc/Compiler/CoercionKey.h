#pragma once
#include "frost_c.h"
#include "CoercionKey_types.h"
typedef struct org$frostlang$frostc$Compiler$CoercionKey org$frostlang$frostc$Compiler$CoercionKey;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
typedef struct org$frostlang$frostc$Type org$frostlang$frostc$Type;
#include "frost/core/Bit_types.h"
#include "frost/core/Int_types.h"

void org$frostlang$frostc$Compiler$CoercionKey$init$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Type(org$frostlang$frostc$Compiler$CoercionKey* self, org$frostlang$frostc$ASTNode* p_expr, org$frostlang$frostc$Type* p_target);
frost$core$Bit org$frostlang$frostc$Compiler$CoercionKey$$EQ$org$frostlang$frostc$Compiler$CoercionKey$R$frost$core$Bit(org$frostlang$frostc$Compiler$CoercionKey* self, org$frostlang$frostc$Compiler$CoercionKey* p_other);
frost$core$Int org$frostlang$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int(org$frostlang$frostc$Compiler$CoercionKey* self);
void org$frostlang$frostc$Compiler$CoercionKey$cleanup(org$frostlang$frostc$Compiler$CoercionKey* self);

