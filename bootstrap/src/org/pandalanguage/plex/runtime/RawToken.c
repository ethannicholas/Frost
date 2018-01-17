#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String/Index.h"

void org$pandalanguage$plex$runtime$RawToken$cleanup$wrappershim(org$pandalanguage$plex$runtime$RawToken$wrapper* self) {
    org$pandalanguage$plex$runtime$RawToken$cleanup(self->value);
}

org$pandalanguage$plex$runtime$RawToken$class_type org$pandalanguage$plex$runtime$RawToken$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$RawToken$cleanup} };

org$pandalanguage$plex$runtime$RawToken$wrapperclass_type org$pandalanguage$plex$runtime$RawToken$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$plex$runtime$RawToken$cleanup$wrappershim} };

void org$pandalanguage$plex$runtime$RawToken$init$panda$core$Int64$panda$core$String$Index$panda$core$String$Index$panda$core$Int64$panda$core$Int64(org$pandalanguage$plex$runtime$RawToken* self, panda$core$Int64 p_kind, panda$core$String$Index p_start, panda$core$String$Index p_end, panda$core$Int64 p_line, panda$core$Int64 p_column) {
    self->kind = p_kind;
    self->start = p_start;
    self->end = p_end;
    self->line = p_line;
    self->column = p_column;
}
void org$pandalanguage$plex$runtime$RawToken$cleanup(org$pandalanguage$plex$runtime$RawToken self) {
}

