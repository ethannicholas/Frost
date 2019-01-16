#pragma once
#include "frost_c.h"
#include "BinaryKey_types.h"
typedef struct org$frostlang$frostc$Compiler$BinaryKey org$frostlang$frostc$Compiler$BinaryKey;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
#include "org/frostlang/frostc/parser/Token/Kind_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/Int64_types.h"

void org$frostlang$frostc$Compiler$BinaryKey$init$org$frostlang$frostc$ASTNode$org$frostlang$frostc$parser$Token$Kind$org$frostlang$frostc$ASTNode(org$frostlang$frostc$Compiler$BinaryKey* self, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$parser$Token$Kind p_op, org$frostlang$frostc$ASTNode* p_right);
frost$core$Bit org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit(org$frostlang$frostc$Compiler$BinaryKey* self, org$frostlang$frostc$Compiler$BinaryKey* p_other);
frost$core$Int64 org$frostlang$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int64(org$frostlang$frostc$Compiler$BinaryKey* self);
void org$frostlang$frostc$Compiler$BinaryKey$cleanup(org$frostlang$frostc$Compiler$BinaryKey* self);

