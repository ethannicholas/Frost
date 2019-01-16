#pragma once
#include "panda_c.h"
#include "Kind_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/regex/RegexToken/Kind_types.h"
#include "panda/core/Int64_types.h"
#include "panda/core/Bit_types.h"

panda$core$String* org$pandalanguage$regex$RegexToken$Kind$convert$R$panda$core$String(org$pandalanguage$regex$RegexToken$Kind self);
void org$pandalanguage$regex$RegexToken$Kind$cleanup(org$pandalanguage$regex$RegexToken$Kind self);
org$pandalanguage$regex$RegexToken$Kind org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(panda$core$Int64 p_rv);
panda$core$Bit org$pandalanguage$regex$RegexToken$Kind$$EQ$org$pandalanguage$regex$RegexToken$Kind$R$panda$core$Bit(org$pandalanguage$regex$RegexToken$Kind self, org$pandalanguage$regex$RegexToken$Kind p_other);

