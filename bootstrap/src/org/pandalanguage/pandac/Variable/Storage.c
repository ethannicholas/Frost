#include "org/pandalanguage/pandac/Variable/Storage.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
org$pandalanguage$pandac$Variable$Storage$wrapper* wrap_org$pandalanguage$pandac$Variable$Storage(org$pandalanguage$pandac$Variable$Storage self) {
    org$pandalanguage$pandac$Variable$Storage$wrapper* result = (org$pandalanguage$pandac$Variable$Storage$wrapper*) malloc(24);
    result->cl = (panda$core$Class*) &org$pandalanguage$pandac$Variable$Storage$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int64.h"


org$pandalanguage$pandac$Variable$Storage$class_type org$pandalanguage$pandac$Variable$Storage$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$Variable$Storage$wrapperclass_type org$pandalanguage$pandac$Variable$Storage$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

void org$pandalanguage$pandac$Variable$Storage$init$panda$core$Int64(org$pandalanguage$pandac$Variable$Storage* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
void org$pandalanguage$pandac$Variable$Storage$init(org$pandalanguage$pandac$Variable$Storage* self) {
}

