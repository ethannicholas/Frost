#include "panda/core/RegularExpression.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"


static panda$core$String $s1;
panda$core$RegularExpression$class_type panda$core$RegularExpression$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$RegularExpression$cleanup, panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher, panda$core$RegularExpression$compile$panda$core$String, panda$core$RegularExpression$destroy} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5895082338763246016, NULL };

void panda$core$RegularExpression$init$panda$core$String(panda$core$RegularExpression* self, panda$core$String* p_regex) {
    panda$core$RegularExpression$compile$panda$core$String(self, p_regex);
}
void panda$core$RegularExpression$cleanup(panda$core$RegularExpression* self) {
    int $tmp4;
    {
        panda$core$RegularExpression$destroy(self);
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






