#include "panda/core/Class.h"
#include "panda/core/Immutable.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"

__attribute__((weak)) void panda$core$Class$cleanup$shim(panda$core$Class* p0) {
    panda$core$Class$cleanup(p0);

}

static panda$core$String $s1;
panda$core$Class$class_type panda$core$Class$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Class$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -4218233433613800972, NULL };

void panda$core$Class$init(panda$core$Class* param0) {

return;

}
void panda$core$Class$cleanup(panda$core$Class* param0) {

panda$core$String** $tmp2 = &param0->name;
panda$core$String* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Class** $tmp4 = &param0->superclass;
panda$core$Class* $tmp5 = *$tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
return;

}






