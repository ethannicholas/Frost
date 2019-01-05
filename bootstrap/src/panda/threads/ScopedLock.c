#include "panda/threads/ScopedLock.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/threads/Lock.h"
#include "panda/core/Panda.h"

__attribute__((weak)) void panda$threads$ScopedLock$cleanup$shim(panda$threads$ScopedLock* p0) {
    panda$threads$ScopedLock$cleanup(p0);

}

static panda$core$String $s1;
panda$threads$ScopedLock$class_type panda$threads$ScopedLock$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$ScopedLock$cleanup$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x53\x63\x6f\x70\x65\x64\x4c\x6f\x63\x6b", 24, -9085909330474498385, NULL };

void panda$threads$ScopedLock$init$panda$threads$Lock(panda$threads$ScopedLock* param0, panda$threads$Lock* param1) {

// line 20
panda$threads$Lock** $tmp2 = &param0->lock;
panda$threads$Lock* $tmp3 = *$tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$threads$Lock** $tmp4 = &param0->lock;
*$tmp4 = param1;
// line 21
panda$threads$Lock$lock(param1);
return;

}
void panda$threads$ScopedLock$cleanup(panda$threads$ScopedLock* param0) {

// line 26
panda$threads$Lock** $tmp5 = &param0->lock;
panda$threads$Lock* $tmp6 = *$tmp5;
panda$threads$Lock$unlock($tmp6);
// line 25
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$threads$Lock** $tmp7 = &param0->lock;
panda$threads$Lock* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
return;

}






