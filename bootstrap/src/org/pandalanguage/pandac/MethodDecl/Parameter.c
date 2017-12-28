#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"


org$pandalanguage$pandac$MethodDecl$Parameter$class_type org$pandalanguage$pandac$MethodDecl$Parameter$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s4 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$Parameter* self, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_name));
        self->name = ((panda$core$String*) $tmp1);
    }
    {
        panda$core$Object* $tmp2 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_type));
        self->type = ((org$pandalanguage$pandac$Type*) $tmp2);
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$Parameter* self) {
    panda$core$String* $tmp3 = panda$core$String$convert$R$panda$core$String(self->name);
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3, &$s4);
    panda$core$String* $tmp6 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5, ((panda$core$Object*) self->type));
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6, &$s7);
    return $tmp8;
}

