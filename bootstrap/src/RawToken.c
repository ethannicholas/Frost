#include "org/pandalanguage/plex/runtime/RawToken.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


org$pandalanguage$plex$runtime$RawToken$class_type org$pandalanguage$plex$runtime$RawToken$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$plex$runtime$RawToken$init(org$pandalanguage$plex$runtime$RawToken* self) {
    self->kind = ((panda$core$Int64) { 0 });
    self->offset = ((panda$core$Int64) { 0 });
    self->length = ((panda$core$Int64) { 0 });
}

