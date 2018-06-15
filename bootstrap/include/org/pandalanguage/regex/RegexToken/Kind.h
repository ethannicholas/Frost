#pragma once
#include "panda_c.h"
#include "Kind_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/regex/RegexToken/Kind_types.h"
#include "panda/core/Int64_types.h"

panda$core$String* org$pandalanguage$regex$RegexToken$Kind$convert$R$panda$core$String(org$pandalanguage$regex$RegexToken$Kind self);
void org$pandalanguage$regex$RegexToken$Kind$cleanup(org$pandalanguage$regex$RegexToken$Kind self);
void org$pandalanguage$regex$RegexToken$Kind$init$panda$core$Int64(org$pandalanguage$regex$RegexToken$Kind* self, panda$core$Int64 p_rv);

