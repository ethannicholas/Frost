#include "panda/threads/ScopedLock.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/threads/Lock.h"
#include "panda/core/Panda.h"

static panda$core$String $s1;
panda$threads$ScopedLock$class_type panda$threads$ScopedLock$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$ScopedLock$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x53\x63\x6f\x70\x65\x64\x4c\x6f\x63\x6b", 24, -9085909330474498385, NULL };

void panda$threads$ScopedLock$init$panda$threads$Lock(panda$threads$ScopedLock* self, panda$threads$Lock* p_lock) {
    panda$threads$Lock* $tmp2;
    panda$threads$Lock* $tmp3;
    self->lock = NULL;
    {
        $tmp2 = self->lock;
        $tmp3 = p_lock;
        self->lock = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    }
    panda$threads$Lock$lock(p_lock);
}
void panda$threads$ScopedLock$cleanup(panda$threads$ScopedLock* self) {
    int $tmp6;
    {
        panda$threads$Lock$unlock(self->lock);
    }
    $tmp6 = -1;
    goto $l4;
    $l4:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp6) {
        case -1: goto $l7;
    }
    $l7:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->lock));
}





