#include "panda/threads/MessageQueue.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/threads/ScopedLock.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/threads/MessageQueue/Message.h"
#include "panda/core/Int64.h"
#include "panda/threads/Notifier.h"
#include "panda/threads/Lock.h"

static panda$core$String $s1;
panda$threads$MessageQueue$class_type panda$threads$MessageQueue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$MessageQueue$cleanup, panda$threads$MessageQueue$post$panda$threads$MessageQueue$T, panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64, panda$threads$MessageQueue$hasMessage$R$panda$core$Bit, panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T, panda$threads$MessageQueue$clear} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 26, -1815112700899824502, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 18, 1403033073527415641, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 18, 1403033073527415641, NULL };

void panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self, panda$core$Immutable* p_data) {
    panda$threads$ScopedLock* scope5 = NULL;
    panda$threads$ScopedLock* $tmp6;
    panda$threads$ScopedLock* $tmp7;
    panda$threads$MessageQueue$Message* $tmp12;
    panda$threads$MessageQueue$Message* $tmp13;
    panda$threads$MessageQueue$Message* $tmp14;
    panda$threads$MessageQueue$Message* $tmp16;
    panda$threads$MessageQueue$Message* $tmp17;
    panda$core$Int64 $tmp18;
    panda$threads$MessageQueue$Message* $tmp23;
    panda$threads$MessageQueue$Message* $tmp24;
    panda$threads$MessageQueue$Message* $tmp25;
    panda$threads$MessageQueue$Message* $tmp27;
    panda$threads$MessageQueue$Message* $tmp28;
    panda$threads$MessageQueue* $tmp29;
    panda$core$Int64 $tmp30;
    int $tmp4;
    {
        panda$threads$ScopedLock* $tmp8 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp8, self->lock);
        $tmp7 = $tmp8;
        $tmp6 = $tmp7;
        scope5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
        if (((panda$core$Bit) { self->tail != NULL }).value) {
        {
            if (((panda$core$Bit) { self->head != NULL }).value) goto $l9; else goto $l10;
            $l10:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s11, (panda$core$Int64) { 54 });
            abort();
            $l9:;
            {
                $tmp12 = self->tail->next;
                panda$threads$MessageQueue$Message* $tmp15 = (panda$threads$MessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
                panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp15, p_data);
                $tmp14 = $tmp15;
                $tmp13 = $tmp14;
                self->tail->next = $tmp13;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
            }
            {
                $tmp16 = self->tail;
                $tmp17 = self->tail->next;
                self->tail = $tmp17;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
            }
        }
        }
        else {
        {
            panda$core$Int64$init$builtin_int64(&$tmp18, 0);
            panda$core$Bit $tmp19 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, $tmp18);
            if ($tmp19.value) goto $l20; else goto $l21;
            $l21:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s22, (panda$core$Int64) { 59 });
            abort();
            $l20:;
            {
                $tmp23 = self->head;
                panda$threads$MessageQueue$Message* $tmp26 = (panda$threads$MessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
                panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp26, p_data);
                $tmp25 = $tmp26;
                $tmp24 = $tmp25;
                self->head = $tmp24;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp25));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23));
            }
            {
                $tmp27 = self->tail;
                $tmp28 = self->head;
                self->tail = $tmp28;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp28));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
            }
        }
        }
        $tmp29 = self;
        panda$core$Int64$init$builtin_int64(&$tmp30, 1);
        panda$core$Int64 $tmp31 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp29->count, $tmp30);
        $tmp29->count = $tmp31;
        panda$threads$Notifier$notify(self->notifier);
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope5));
    scope5 = NULL;
    switch ($tmp4) {
        case -1: goto $l32;
    }
    $l32:;
}
panda$core$Int64 panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope36 = NULL;
    panda$threads$ScopedLock* $tmp37;
    panda$threads$ScopedLock* $tmp38;
    panda$core$Int64 $returnValue40;
    int $tmp35;
    {
        panda$threads$ScopedLock* $tmp39 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp39, self->lock);
        $tmp38 = $tmp39;
        $tmp37 = $tmp38;
        scope36 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
        $returnValue40 = self->count;
        $tmp35 = 0;
        goto $l33;
        $l41:;
        return $returnValue40;
    }
    $l33:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope36));
    scope36 = NULL;
    switch ($tmp35) {
        case 0: goto $l41;
    }
    $l43:;
    abort();
}
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* self) {
    panda$core$Bit $returnValue44;
    panda$core$Int64 $tmp46;
    panda$core$Int64 $tmp45 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp46, 0);
    panda$core$Bit $tmp47 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp45, $tmp46);
    $returnValue44 = $tmp47;
    return $returnValue44;
}
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope52 = NULL;
    panda$threads$ScopedLock* $tmp53;
    panda$threads$ScopedLock* $tmp54;
    panda$core$Immutable* result59 = NULL;
    panda$core$Immutable* $tmp60;
    panda$threads$MessageQueue$Message* $tmp61;
    panda$threads$MessageQueue$Message* $tmp62;
    panda$threads$MessageQueue$Message* $tmp63;
    panda$threads$MessageQueue$Message* $tmp64;
    panda$threads$MessageQueue* $tmp65;
    panda$core$Int64 $tmp66;
    panda$core$Immutable* $returnValue68;
    panda$core$Immutable* $tmp69;
    int $tmp51;
    {
        panda$threads$ScopedLock* $tmp55 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp55, self->lock);
        $tmp54 = $tmp55;
        $tmp53 = $tmp54;
        scope52 = $tmp53;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp54));
        $l56:;
        bool $tmp58 = ((panda$core$Bit) { self->head == NULL }).value;
        if (!$tmp58) goto $l57;
        {
            panda$threads$Notifier$wait(self->notifier);
        }
        goto $l56;
        $l57:;
        $tmp60 = self->head->payload;
        result59 = $tmp60;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
        {
            $tmp61 = self->head;
            $tmp62 = self->head->next;
            self->head = $tmp62;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
        }
        if (((panda$core$Bit) { self->head == NULL }).value) {
        {
            {
                $tmp63 = self->tail;
                $tmp64 = NULL;
                self->tail = $tmp64;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
            }
        }
        }
        $tmp65 = self;
        panda$core$Int64$init$builtin_int64(&$tmp66, 1);
        panda$core$Int64 $tmp67 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp65->count, $tmp66);
        $tmp65->count = $tmp67;
        $tmp69 = result59;
        $returnValue68 = $tmp69;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
        $tmp51 = 0;
        goto $l49;
        $l70:;
        return $returnValue68;
    }
    $l49:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result59));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope52));
    scope52 = NULL;
    result59 = NULL;
    switch ($tmp51) {
        case 0: goto $l70;
    }
    $l72:;
    abort();
}
void panda$threads$MessageQueue$clear(panda$threads$MessageQueue* self) {
    panda$core$Immutable* $tmp77;
    $l73:;
    panda$core$Bit $tmp76 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(self);
    bool $tmp75 = $tmp76.value;
    if (!$tmp75) goto $l74;
    {
        panda$core$Immutable* $tmp78 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(self);
        $tmp77 = $tmp78;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
    }
    goto $l73;
    $l74:;
}
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* self) {
    panda$threads$Lock* $tmp79;
    panda$threads$Lock* $tmp80;
    panda$threads$Notifier* $tmp82;
    panda$threads$Notifier* $tmp83;
    panda$core$Int64 $tmp85;
    self->lock = NULL;
    self->notifier = NULL;
    self->head = NULL;
    self->tail = NULL;
    panda$threads$Lock* $tmp81 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
    panda$threads$Lock$init($tmp81);
    $tmp80 = $tmp81;
    $tmp79 = $tmp80;
    self->lock = $tmp79;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$threads$Notifier* $tmp84 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
    panda$threads$Notifier$init$panda$threads$Lock($tmp84, self->lock);
    $tmp83 = $tmp84;
    $tmp82 = $tmp83;
    self->notifier = $tmp82;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Int64$init$builtin_int64(&$tmp85, 0);
    self->count = $tmp85;
}
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* self) {
    int $tmp88;
    {
    }
    $tmp88 = -1;
    goto $l86;
    $l86:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp88) {
        case -1: goto $l89;
    }
    $l89:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lock));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->notifier));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->head));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tail));
}

