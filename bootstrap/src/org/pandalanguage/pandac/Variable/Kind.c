#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
org$pandalanguage$pandac$Variable$Kind$wrapper* wrap_org$pandalanguage$pandac$Variable$Kind(org$pandalanguage$pandac$Variable$Kind self) {
    org$pandalanguage$pandac$Variable$Kind$wrapper* result = (org$pandalanguage$pandac$Variable$Kind$wrapper*) malloc(24);
    result->cl = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Kind$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int64.h"


org$pandalanguage$pandac$Variable$Kind$class_type org$pandalanguage$pandac$Variable$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$Variable$Kind$wrapperclass_type org$pandalanguage$pandac$Variable$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

void org$pandalanguage$pandac$Variable$Kind$init$panda$core$Int64(org$pandalanguage$pandac$Variable$Kind* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
void org$pandalanguage$pandac$Variable$Kind$init(org$pandalanguage$pandac$Variable$Kind* self) {
}

