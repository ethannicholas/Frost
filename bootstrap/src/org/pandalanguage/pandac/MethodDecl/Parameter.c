#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"


org$pandalanguage$pandac$MethodDecl$Parameter$class_type org$pandalanguage$pandac$MethodDecl$Parameter$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };

void org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$Parameter* self, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    self->name = p_name;
    self->type = p_type;
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$Parameter* self) {
    panda$core$String* $tmp1 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp3 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1, &$s2);
    panda$core$String* $tmp4 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3, ((panda$core$Object*) self->type));
    panda$core$String* $tmp6 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4, &$s5);
    return $tmp6;
}

