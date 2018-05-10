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
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$ClassDecl$GenericParameter$init$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$ClassDecl$GenericParameter* self, org$pandalanguage$pandac$Position p_position, panda$core$String* p_owner, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_bound) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    org$pandalanguage$pandac$Type* $tmp4;
    org$pandalanguage$pandac$Type* $tmp5;
    self->name = NULL;
    self->owner = NULL;
    self->bound = NULL;
    {
        $tmp2 = self->owner;
        $tmp3 = p_owner;
        self->owner = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->bound;
        $tmp5 = p_bound;
        self->bound = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    org$pandalanguage$pandac$Symbol$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) self), ((panda$core$Int64) { 203 }), p_position, p_name);
}
panda$core$String* org$pandalanguage$pandac$ClassDecl$GenericParameter$convert$R$panda$core$String(org$pandalanguage$pandac$ClassDecl$GenericParameter* self) {
    panda$core$String* $finallyReturn5;
    panda$core$String* $tmp7;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$core$String* $tmp11;
    panda$core$String* $tmp12;
    panda$core$String* $tmp13;
    panda$core$String* $tmp14 = panda$core$String$convert$R$panda$core$String(self->owner);
    $tmp13 = $tmp14;
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp13, &$s15);
    $tmp12 = $tmp16;
    panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp12, self->name);
    $tmp11 = $tmp17;
    panda$core$String* $tmp19 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s18);
    $tmp10 = $tmp19;
    panda$core$String* $tmp20 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp10, ((panda$core$Object*) self->bound));
    $tmp9 = $tmp20;
    panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, &$s21);
    $tmp8 = $tmp22;
    $tmp7 = $tmp8;
    $finallyReturn5 = $tmp7;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
    return $finallyReturn5;
}
void org$pandalanguage$pandac$ClassDecl$GenericParameter$cleanup(org$pandalanguage$pandac$ClassDecl$GenericParameter* self) {
    int $tmp26;
    {
    }
    $tmp26 = -1;
    goto $l24;
    $l24:;
    org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) self));
    switch ($tmp26) {
        case -1: goto $l27;
    }
    $l27:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->owner));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->bound));
}

