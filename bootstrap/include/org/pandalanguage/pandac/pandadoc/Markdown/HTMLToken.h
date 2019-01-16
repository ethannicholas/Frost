#pragma once
#include "panda_c.h"
#include "HTMLToken_types.h"
typedef struct org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken;
#include "panda/core/Int64_types.h"
typedef struct panda$core$String panda$core$String;
#include "panda/core/Bit_types.h"

void org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$cleanup(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* self);
void org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$init$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* self, panda$core$Int64 p_rv, panda$core$String* p_f0);
panda$core$Bit org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$$EQ$org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken$R$panda$core$Bit(org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* self, org$pandalanguage$pandac$pandadoc$Markdown$HTMLToken* p_other);

