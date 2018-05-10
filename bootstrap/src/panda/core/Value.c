#include "panda/core/Value.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"


static panda$core$String $s1;
panda$core$Value$class_type panda$core$Value$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Value$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -4218233431647874265, NULL };

void panda$core$Value$init(panda$core$Value* self) {
}
void panda$core$Value$cleanup(panda$core$Value* self) {
    int $tmp4;
    {
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp4) {
        case -1: goto $l5;
    }
    $l5:;
}

