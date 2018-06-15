#pragma once
#include "panda_c.h"
#include "Kind_types.h"
typedef struct panda$core$String panda$core$String;
#include "org/pandalanguage/pandac/parser/Token/Kind_types.h"
#include "panda/core/Int64_types.h"

panda$core$String* org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(org$pandalanguage$pandac$parser$Token$Kind self);
void org$pandalanguage$pandac$parser$Token$Kind$cleanup(org$pandalanguage$pandac$parser$Token$Kind self);
void org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64(org$pandalanguage$pandac$parser$Token$Kind* self, panda$core$Int64 p_rv);

