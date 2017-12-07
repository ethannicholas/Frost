#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"


org$pandalanguage$pandac$ClassDecl$GenericParameter$class_type org$pandalanguage$pandac$ClassDecl$GenericParameter$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };

void org$pandalanguage$pandac$ClassDecl$GenericParameter$init$panda$core$Int64$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl$GenericParameter* self, panda$core$Int64 p_offset, panda$core$String* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_bound) {
    self->owner = p_owner;
    self->bound = p_bound;
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$panda$core$Int64$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 203 }), p_offset, p_name);
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl$GenericParameter* self) {
    panda$core$String* $tmp2 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1, self->owner);
    panda$core$String* $tmp4 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2, &$s3);
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4, self->name);
    panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s6);
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp7, ((panda$core$Object*) self->bound));
    panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp8, &$s9);
    return $tmp10;
}

