#include "org/pandalanguage/pandac/CCodeGenerator/OpClass.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper* wrap_org$pandalanguage$pandac$CCodeGenerator$OpClass(org$pandalanguage$pandac$CCodeGenerator$OpClass self) {
    org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper* result = (org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapper*) malloc(24);
    result->cl = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int64.h"


org$pandalanguage$pandac$CCodeGenerator$OpClass$class_type org$pandalanguage$pandac$CCodeGenerator$OpClass$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass_type org$pandalanguage$pandac$CCodeGenerator$OpClass$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

void org$pandalanguage$pandac$CCodeGenerator$OpClass$init$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator$OpClass* self, panda$core$Int64 p_rv) {
    self->$rawValue = p_rv;
}
void org$pandalanguage$pandac$CCodeGenerator$OpClass$init(org$pandalanguage$pandac$CCodeGenerator$OpClass* self) {
}

