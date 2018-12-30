#include "panda/core/Immutable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"

__attribute__((weak)) void panda$core$Immutable$cleanup$shim(panda$core$Immutable* p0) {
    panda$core$Immutable$cleanup(p0);

}

static panda$core$String $s1;
panda$core$Immutable$class_type panda$core$Immutable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Immutable$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, 4030834267849819614, NULL };

void panda$core$Immutable$init(panda$core$Immutable* param0) {

return;

}
void panda$core$Immutable$cleanup(panda$core$Immutable* param0) {

return;

}






