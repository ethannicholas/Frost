#pragma once
#include "panda_c.h"
#include "BinaryKey_types.h"
typedef struct org$pandalanguage$pandac$Compiler$BinaryKey org$pandalanguage$pandac$Compiler$BinaryKey;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
#include "panda/core/Bit_types.h"
#include "panda/core/Int64_types.h"

void org$pandalanguage$pandac$Compiler$BinaryKey$init$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Compiler$BinaryKey* self, org$pandalanguage$pandac$ASTNode* p_left, org$pandalanguage$pandac$parser$Token$Kind p_op, org$pandalanguage$pandac$ASTNode* p_right);
panda$core$Bit org$pandalanguage$pandac$Compiler$BinaryKey$$EQ$org$pandalanguage$pandac$Compiler$BinaryKey$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$BinaryKey* self, org$pandalanguage$pandac$Compiler$BinaryKey* p_other);
panda$core$Int64 org$pandalanguage$pandac$Compiler$BinaryKey$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Compiler$BinaryKey* self);
void org$pandalanguage$pandac$Compiler$BinaryKey$cleanup(org$pandalanguage$pandac$Compiler$BinaryKey* self);

