#pragma once
#include "frost_c.h"
#include "CoercionKey_types.h"
typedef struct org$frostlanguage$frostc$Compiler$CoercionKey org$frostlanguage$frostc$Compiler$CoercionKey;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
typedef struct org$frostlanguage$frostc$Type org$frostlanguage$frostc$Type;
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"

void org$frostlanguage$frostc$Compiler$CoercionKey$init$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$Type(org$frostlanguage$frostc$Compiler$CoercionKey* self, org$frostlanguage$frostc$ASTNode* p_expr, org$frostlanguage$frostc$Type* p_target);
frost$core$Bit org$frostlanguage$frostc$Compiler$CoercionKey$$EQ$org$frostlanguage$frostc$Compiler$CoercionKey$R$frost$core$Bit(org$frostlanguage$frostc$Compiler$CoercionKey* self, org$frostlanguage$frostc$Compiler$CoercionKey* p_other);
frost$core$Int64 org$frostlanguage$frostc$Compiler$CoercionKey$get_hash$R$frost$core$Int64(org$frostlanguage$frostc$Compiler$CoercionKey* self);
void org$frostlanguage$frostc$Compiler$CoercionKey$cleanup(org$frostlanguage$frostc$Compiler$CoercionKey* self);

