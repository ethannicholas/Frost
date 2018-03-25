#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$GenericParameter$class_type org$pandalanguage$pandac$ClassDecl$GenericParameter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$GenericParameter$cleanup, org$pandalanguage$pandac$Symbol$get_heritable$R$panda$core$Bit} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 51, 6472012266806966452, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl$GenericParameter* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_bound) {
    {
        self->owner = p_owner;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    }
    {
        self->bound = p_bound;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bound));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 203 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl$GenericParameter* self) {
    panda$core$String* $tmp2 = panda$core$String$convert$R$panda$core$String(self->owner);
    panda$core$String* $tmp4 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2, &$s3);
    panda$core$String* $tmp5 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4, self->name);
    panda$core$String* $tmp7 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5, &$s6);
    panda$core$String* $tmp8 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp7, ((panda$core$Object*) self->bound));
    panda$core$String* $tmp10 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp8, &$s9);
    return $tmp10;
}
void org$pandalanguage$pandac$ClassDecl$GenericParameter$cleanup(org$pandalanguage$pandac$ClassDecl$GenericParameter* self) {
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bound));
}

