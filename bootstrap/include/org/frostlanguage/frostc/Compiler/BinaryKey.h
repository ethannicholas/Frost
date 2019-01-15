#pragma once
#include "frost_c.h"
#include "BinaryKey_types.h"
typedef struct org$frostlanguage$frostc$Compiler$BinaryKey org$frostlanguage$frostc$Compiler$BinaryKey;
typedef struct org$frostlanguage$frostc$ASTNode org$frostlanguage$frostc$ASTNode;
#include "org/frostlanguage/frostc/parser/Token/Kind_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"

void org$frostlanguage$frostc$Compiler$BinaryKey$init$org$frostlanguage$frostc$ASTNode$org$frostlanguage$frostc$parser$Token$Kind$org$frostlanguage$frostc$ASTNode(org$frostlanguage$frostc$Compiler$BinaryKey* self, org$frostlanguage$frostc$ASTNode* p_left, org$frostlanguage$frostc$parser$Token$Kind p_op, org$frostlanguage$frostc$ASTNode* p_right);
frost$core$Bit org$frostlanguage$frostc$Compiler$BinaryKey$$EQ$org$frostlanguage$frostc$Compiler$BinaryKey$R$frost$core$Bit(org$frostlanguage$frostc$Compiler$BinaryKey* self, org$frostlanguage$frostc$Compiler$BinaryKey* p_other);
frost$core$Int64 org$frostlanguage$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int64(org$frostlanguage$frostc$Compiler$BinaryKey* self);
void org$frostlanguage$frostc$Compiler$BinaryKey$cleanup(org$frostlanguage$frostc$Compiler$BinaryKey* self);

