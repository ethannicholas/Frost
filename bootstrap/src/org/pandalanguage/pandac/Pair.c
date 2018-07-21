#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Pair$class_type org$pandalanguage$pandac$Pair$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$Pair$convert$R$panda$core$String, org$pandalanguage$pandac$Pair$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72", 29, -3248623696870598334, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$Pair$init$org$pandalanguage$pandac$Pair$A$org$pandalanguage$pandac$Pair$B(org$pandalanguage$pandac$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    panda$core$Object* $tmp2;
    panda$core$Object* $tmp3;
    panda$core$Object* $tmp4;
    panda$core$Object* $tmp5;
    self->first = NULL;
    self->second = NULL;
    {
        $tmp2 = self->first;
        $tmp3 = p_first;
        self->first = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q($tmp3);
        panda$core$Panda$unref$panda$core$Object$Q($tmp2);
    }
    {
        $tmp4 = self->second;
        $tmp5 = p_second;
        self->second = $tmp5;
        panda$core$Panda$ref$panda$core$Object$Q($tmp5);
        panda$core$Panda$unref$panda$core$Object$Q($tmp4);
    }
}
panda$core$String* org$pandalanguage$pandac$Pair$convert$R$panda$core$String(org$pandalanguage$pandac$Pair* self) {
    panda$core$String* $returnValue6;
    panda$core$String* $tmp7;
    panda$core$String* $tmp8;
    panda$core$String* $tmp9;
    panda$core$String* $tmp10;
    panda$core$String* $tmp11;
    panda$core$String* $tmp13 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s12, self->first);
    $tmp11 = $tmp13;
    panda$core$String* $tmp15 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp11, &$s14);
    $tmp10 = $tmp15;
    panda$core$String* $tmp16 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp10, self->second);
    $tmp9 = $tmp16;
    panda$core$String* $tmp18 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp9, &$s17);
    $tmp8 = $tmp18;
    $tmp7 = $tmp8;
    $returnValue6 = $tmp7;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
    return $returnValue6;
}
void org$pandalanguage$pandac$Pair$cleanup(org$pandalanguage$pandac$Pair* self) {
    int $tmp22;
    {
    }
    $tmp22 = -1;
    goto $l20;
    $l20:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp22) {
        case -1: goto $l23;
    }
    $l23:;
    panda$core$Panda$unref$panda$core$Object$Q(self->first);
    panda$core$Panda$unref$panda$core$Object$Q(self->second);
}





