#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"


org$pandalanguage$pandac$Symbol$class_type org$pandalanguage$pandac$Symbol$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };

org$pandalanguage$pandac$Symbol$Kind$class_type org$pandalanguage$pandac$Symbol$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(org$pandalanguage$pandac$Symbol* self, panda$core$Int64 p_kind, panda$core$Int64 p_offset, panda$core$String* p_name) {
    self->kind = p_kind;
    self->offset = p_offset;
    self->name = p_name;
}
panda$core$Bit org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$Symbol* self) {
    return ((panda$core$Bit) { true });
}
void org$pandalanguage$pandac$Symbol$Kind$init(org$pandalanguage$pandac$Symbol$Kind* self) {
}

