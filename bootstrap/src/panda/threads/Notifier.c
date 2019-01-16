#include "panda/threads/Notifier.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/threads/Lock.h"
#include "panda/core/Panda.h"

__attribute__((weak)) void panda$threads$Notifier$cleanup$shim(panda$threads$Notifier* p0) {
    panda$threads$Notifier$cleanup(p0);

}

static panda$core$String $s1;
panda$threads$Notifier$class_type panda$threads$Notifier$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$Notifier$cleanup$shim, panda$threads$Notifier$wait, panda$threads$Notifier$notify, panda$threads$Notifier$notifyAll, panda$threads$Notifier$create, panda$threads$Notifier$destroy} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4e\x6f\x74\x69\x66\x69\x65\x72", 22, 3485040555815202996, NULL };

void panda$threads$Notifier$init$panda$threads$Lock(panda$threads$Notifier* param0, panda$threads$Lock* param1) {

// line 15
panda$threads$Lock* $tmp2 = (panda$threads$Lock*) frostObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
panda$threads$Lock$init($tmp2);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$threads$Lock** $tmp3 = &param0->lock;
panda$threads$Lock* $tmp4 = *$tmp3;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$threads$Lock** $tmp5 = &param0->lock;
*$tmp5 = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.threads.Lock)
// line 18
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$threads$Lock** $tmp6 = &param0->lock;
panda$threads$Lock* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$threads$Lock** $tmp8 = &param0->lock;
*$tmp8 = param1;
// line 19
panda$threads$Notifier$create(param0);
return;

}
void panda$threads$Notifier$cleanup(panda$threads$Notifier* param0) {

// line 44
panda$threads$Notifier$destroy(param0);
// line 43
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$threads$Lock** $tmp9 = &param0->lock;
panda$threads$Lock* $tmp10 = *$tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
return;

}






