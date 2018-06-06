#include "org/pandalanguage/pandac/ClassDecl/Resolution.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/core/Weak.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
org$pandalanguage$pandac$ClassDecl$Resolution$class_type org$pandalanguage$pandac$ClassDecl$Resolution$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$ClassDecl$Resolution$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x52\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e", 45, 664459329846423106, NULL };

void org$pandalanguage$pandac$ClassDecl$Resolution$init$org$pandalanguage$pandac$ClassDecl$Q(org$pandalanguage$pandac$ClassDecl$Resolution* self, org$pandalanguage$pandac$ClassDecl* p_value) {
    panda$core$Weak* $tmp2;
    panda$core$Weak* $tmp3;
    panda$core$Weak* $tmp5;
    panda$core$Weak* $tmp6;
    panda$core$Weak* $tmp7;
    self->value = NULL;
    panda$core$Weak* $tmp4 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
    panda$core$Weak$init$panda$core$Weak$T($tmp4, ((panda$core$Object*) NULL));
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->value = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        $tmp5 = self->value;
        panda$core$Weak* $tmp8 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
        panda$core$Weak$init$panda$core$Weak$T($tmp8, ((panda$core$Object*) p_value));
        $tmp7 = $tmp8;
        $tmp6 = $tmp7;
        self->value = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
}
void org$pandalanguage$pandac$ClassDecl$Resolution$cleanup(org$pandalanguage$pandac$ClassDecl$Resolution* self) {
    int $tmp11;
    {
    }
    $tmp11 = -1;
    goto $l9;
    $l9:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp11) {
        case -1: goto $l12;
    }
    $l12:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->value));
}





