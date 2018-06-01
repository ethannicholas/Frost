#include "panda/threads/Notifier.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/threads/Lock.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
panda$threads$Notifier$class_type panda$threads$Notifier$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$Notifier$cleanup, panda$threads$Notifier$wait, panda$threads$Notifier$notify, panda$threads$Notifier$notifyAll, panda$threads$Notifier$create, panda$threads$Notifier$destroy} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4e\x6f\x74\x69\x66\x69\x65\x72", 22, 3485040555815202996, NULL };

void panda$threads$Notifier$init$panda$threads$Lock(panda$threads$Notifier* self, panda$threads$Lock* p_lock) {
    panda$threads$Lock* $tmp2;
    panda$threads$Lock* $tmp3;
    panda$threads$Lock* $tmp5;
    panda$threads$Lock* $tmp6;
    self->lock = NULL;
    panda$threads$Lock* $tmp4 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
    panda$threads$Lock$init($tmp4);
    $tmp3 = $tmp4;
    $tmp2 = $tmp3;
    self->lock = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        $tmp5 = self->lock;
        $tmp6 = p_lock;
        self->lock = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp5));
    }
    panda$threads$Notifier$create(self);
}
void panda$threads$Notifier$cleanup(panda$threads$Notifier* self) {
    int $tmp9;
    {
        panda$threads$Notifier$destroy(self);
    }
    $tmp9 = -1;
    goto $l7;
    $l7:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp9) {
        case -1: goto $l10;
    }
    $l10:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lock));
}





