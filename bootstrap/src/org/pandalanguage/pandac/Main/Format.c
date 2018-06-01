#include "org/pandalanguage/pandac/Main/Format.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"

static panda$core$String $s1;
org$pandalanguage$pandac$Main$Format$class_type org$pandalanguage$pandac$Main$Format$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$Format$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74", 36, -5644571905748884514, NULL };

void org$pandalanguage$pandac$Main$Format$init(org$pandalanguage$pandac$Main$Format* self) {
}
void org$pandalanguage$pandac$Main$Format$cleanup(org$pandalanguage$pandac$Main$Format* self) {
    int $tmp4;
    {
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4) {
        case -1: goto $l5;
    }
    $l5:;
}

