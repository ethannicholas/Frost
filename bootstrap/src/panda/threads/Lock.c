#include "panda/threads/Lock.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"

__attribute__((weak)) void panda$threads$Lock$cleanup$shim(panda$threads$Lock* p0) {
    panda$threads$Lock$cleanup(p0);

}

static panda$core$String $s1;
panda$threads$Lock$class_type panda$threads$Lock$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$Lock$cleanup$shim, panda$threads$Lock$lock, panda$threads$Lock$unlock, panda$threads$Lock$create, panda$threads$Lock$destroy} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4c\x6f\x63\x6b", 18, 1784301188846994829, NULL };

void panda$threads$Lock$init(panda$threads$Lock* param0) {

// line 17
panda$threads$Lock$create(param0);
return;

}
void panda$threads$Lock$cleanup(panda$threads$Lock* param0) {

// line 44
panda$threads$Lock$destroy(param0);
// line 43
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
return;

}






