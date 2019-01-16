#pragma once
#include "panda_c.h"
#include "CoercionKey_types.h"
typedef struct org$pandalanguage$pandac$Compiler$CoercionKey org$pandalanguage$pandac$Compiler$CoercionKey;
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;
typedef struct org$pandalanguage$pandac$Type org$pandalanguage$pandac$Type;
#include "panda/core/Bit_types.h"
#include "panda/core/Int64_types.h"

void org$pandalanguage$pandac$Compiler$CoercionKey$init$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$Compiler$CoercionKey* self, org$pandalanguage$pandac$ASTNode* p_expr, org$pandalanguage$pandac$Type* p_target);
panda$core$Bit org$pandalanguage$pandac$Compiler$CoercionKey$$EQ$org$pandalanguage$pandac$Compiler$CoercionKey$R$panda$core$Bit(org$pandalanguage$pandac$Compiler$CoercionKey* self, org$pandalanguage$pandac$Compiler$CoercionKey* p_other);
panda$core$Int64 org$pandalanguage$pandac$Compiler$CoercionKey$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Compiler$CoercionKey* self);
void org$pandalanguage$pandac$Compiler$CoercionKey$cleanup(org$pandalanguage$pandac$Compiler$CoercionKey* self);

