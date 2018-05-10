#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$Parameter$class_type org$pandalanguage$pandac$MethodDecl$Parameter$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$Parameter$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72", 45, -3830084543813460970, NULL };
static panda$core$String $s13 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$Parameter$init$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl$Parameter* self, panda$core$String* p_name, org$pandalanguage$pandac$Type* p_type) {
    panda$core$String* $tmp2;
    panda$core$String* $tmp3;
    org$pandalanguage$pandac$Type* $tmp4;
    org$pandalanguage$pandac$Type* $tmp5;
    self->name = NULL;
    self->type = NULL;
    {
        $tmp2 = self->name;
        $tmp3 = p_name;
        self->name = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    {
        $tmp4 = self->type;
        $tmp5 = p_type;
        self->type = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
}
panda$core$String* org$pandalanguage$pandac$MethodDecl$Parameter$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl$Parameter* self) {
    panda$core$String* $finallyReturn5;
    panda$core$String* $tmp7;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$core$String* $tmp11;
    panda$core$String* $tmp12 = panda$core$String$convert$R$panda$core$String(self->name);
    $tmp11 = $tmp12;
    panda$core$String* $tmp14 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s13);
    $tmp10 = $tmp14;
    panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp10, ((panda$core$Object*) self->type));
    $tmp9 = $tmp15;
    panda$core$String* $tmp17 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, &$s16);
    $tmp8 = $tmp17;
    $tmp7 = $tmp8;
    $finallyReturn5 = $tmp7;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
    return $finallyReturn5;
}
void org$pandalanguage$pandac$MethodDecl$Parameter$cleanup(org$pandalanguage$pandac$MethodDecl$Parameter* self) {
    int $tmp21;
    {
    }
    $tmp21 = -1;
    goto $l19;
    $l19:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp21) {
        case -1: goto $l22;
    }
    $l22:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->name));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->type));
}

