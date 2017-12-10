#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"


org$pandalanguage$plex$runtime$RawToken$class_type org$pandalanguage$plex$runtime$RawToken$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$plex$runtime$RawToken$init$panda$core$String(org$pandalanguage$plex$runtime$RawToken* self, panda$core$String* p_source) {
    self->kind = ((panda$core$Int64) { 0 });
    self->line = ((panda$core$Int64) { 0 });
    self->column = ((panda$core$Int64) { 0 });
    panda$core$String$Index $tmp1 = panda$core$String$start$R$panda$core$String$Index(p_source);
    self->start = $tmp1;
    self->end = self->start;
}

