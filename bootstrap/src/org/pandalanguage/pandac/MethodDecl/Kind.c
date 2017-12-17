#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* wrap_org$pandalanguage$pandac$MethodDecl$Kind(org$pandalanguage$pandac$MethodDecl$Kind self) {
    org$pandalanguage$pandac$MethodDecl$Kind$wrapper* result = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) malloc(24);
    result->cl = (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int64.h"


org$pandalanguage$pandac$MethodDecl$Kind$class_type org$pandalanguage$pandac$MethodDecl$Kind$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass_type org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

void org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64(org$pandalanguage$pandac$MethodDecl$Kind* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
void org$pandalanguage$pandac$MethodDecl$Kind$init(org$pandalanguage$pandac$MethodDecl$Kind* self) {
}

