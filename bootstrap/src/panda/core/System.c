#include "panda/core/System.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"

static panda$core$String $s1;
panda$core$System$class_type panda$core$System$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$System$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d", 17, -1766462930141263461, NULL };

void panda$core$System$init(panda$core$System* self) {
}
void panda$core$System$cleanup(panda$core$System* self) {
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

