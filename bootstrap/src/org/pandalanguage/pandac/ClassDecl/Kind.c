#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"


org$pandalanguage$pandac$ClassDecl$Kind$class_type org$pandalanguage$pandac$ClassDecl$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass_type org$pandalanguage$pandac$ClassDecl$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

void org$pandalanguage$pandac$ClassDecl$Kind$init$panda$core$Int64(org$pandalanguage$pandac$ClassDecl$Kind* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}

