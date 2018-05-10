#include "org/pandalanguage/pandac/Pair.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Pair$class_type org$pandalanguage$pandac$Pair$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Pair$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x61\x69\x72", 29, -3248623696870598334, NULL };

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
        panda$core$Panda$ref$panda$core$Object($tmp3);
        panda$core$Panda$unref$panda$core$Object($tmp2);
    }
    {
        $tmp4 = self->second;
        $tmp5 = p_second;
        self->second = $tmp5;
        panda$core$Panda$ref$panda$core$Object($tmp5);
        panda$core$Panda$unref$panda$core$Object($tmp4);
    }
}
void org$pandalanguage$pandac$Pair$cleanup(org$pandalanguage$pandac$Pair* self) {
    int $tmp8;
    {
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp8) {
        case -1: goto $l9;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(self->first);
    panda$core$Panda$unref$panda$core$Object(self->second);
}

