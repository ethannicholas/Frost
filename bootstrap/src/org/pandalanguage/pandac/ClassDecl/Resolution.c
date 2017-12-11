#include "org/pandalanguage/pandac/ClassDecl/Resolution.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "org/pandalanguage/pandac/ClassDecl.h"


org$pandalanguage$pandac$ClassDecl$Resolution$class_type org$pandalanguage$pandac$ClassDecl$Resolution$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };



void org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$ClassDecl$Resolution* self, org$pandalanguage$pandac$ClassDecl* p_value) {
    self->value = p_value;
}

