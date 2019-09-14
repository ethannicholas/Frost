#pragma once
#include "frost_c.h"
#include "BinaryKey_types.h"
typedef struct org$frostlang$frostc$Compiler$BinaryKey org$frostlang$frostc$Compiler$BinaryKey;
typedef struct org$frostlang$frostc$ASTNode org$frostlang$frostc$ASTNode;
#include "org/frostlang/frostc/expression/Binary/Operator_types.h"
#include "frost/core/Bit_types.h"
#include "frost/core/Int_types.h"

void org$frostlang$frostc$Compiler$BinaryKey$init$org$frostlang$frostc$ASTNode$org$frostlang$frostc$expression$Binary$Operator$org$frostlang$frostc$ASTNode(void* rawSelf, org$frostlang$frostc$ASTNode* p_left, org$frostlang$frostc$expression$Binary$Operator p_op, org$frostlang$frostc$ASTNode* p_right);
frost$core$Bit org$frostlang$frostc$Compiler$BinaryKey$$EQ$org$frostlang$frostc$Compiler$BinaryKey$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$Compiler$BinaryKey* p_other);
frost$core$Int org$frostlang$frostc$Compiler$BinaryKey$get_hash$R$frost$core$Int(void* rawSelf);
void org$frostlang$frostc$Compiler$BinaryKey$cleanup(void* rawSelf);

