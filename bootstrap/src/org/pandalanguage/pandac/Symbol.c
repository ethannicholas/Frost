#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$Symbol$class_type org$pandalanguage$pandac$Symbol$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Symbol$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };



void org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$Symbol* self, panda$core$Int64 p_kind, org$pandalanguage$pandac$Position p_position, panda$core$String* p_name) {
    self->kind = p_kind;
    self->position = p_position;
    {
        self->name = p_name;
    }
}
panda$core$Bit org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$Symbol* self) {
    return ((panda$core$Bit) { true });
}
void org$pandalanguage$pandac$Symbol$cleanup(org$pandalanguage$pandac$Symbol* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->name));
}

