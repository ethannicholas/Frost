#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/Int64.h"


org$pandalanguage$pandac$Variable$Kind$class_type org$pandalanguage$pandac$Variable$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(org$pandalanguage$pandac$Variable$Kind* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
void org$pandalanguage$pandac$Variable$Kind$init(org$pandalanguage$pandac$Variable$Kind* self) {
}

