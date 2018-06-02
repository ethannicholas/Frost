#pragma once
#include "panda_c.h"
#include "Expression_types.h"
typedef struct panda$core$String panda$core$String;
typedef struct org$pandalanguage$pandac$Annotations$Expression org$pandalanguage$pandac$Annotations$Expression;
#include "panda/core/Int64_types.h"
typedef struct org$pandalanguage$pandac$ASTNode org$pandalanguage$pandac$ASTNode;

panda$core$String* org$pandalanguage$pandac$Annotations$Expression$convert$R$panda$core$String(org$pandalanguage$pandac$Annotations$Expression* self);
void org$pandalanguage$pandac$Annotations$Expression$cleanup(org$pandalanguage$pandac$Annotations$Expression* self);
void org$pandalanguage$pandac$Annotations$Expression$init$panda$core$Int64$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$Annotations$Expression* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$ASTNode* p_f0);

