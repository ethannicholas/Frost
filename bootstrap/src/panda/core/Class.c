#include "panda/core/Class.h"
#include "panda/core/Immutable.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$core$Class$class_type panda$core$Class$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Class$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };

void panda$core$Class$init(panda$core$Class* self) {
    self->name = NULL;
    self->superclass = NULL;
}
void panda$core$Class$cleanup(panda$core$Class* self) {
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->name));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->superclass));
}






