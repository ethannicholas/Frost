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
panda$threads$MessageQueue$class_type panda$threads$MessageQueue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$MessageQueue$cleanup, panda$threads$MessageQueue$post$panda$threads$MessageQueue$T, panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64, panda$threads$MessageQueue$hasMessage$R$panda$core$Bit, panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T} };


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
    panda$core$Int64 $tmp29;
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
        panda$core$Int64$init$builtin_int64(&$tmp29, 1);
        panda$core$Int64 $tmp30 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp29);
        self->count = $tmp30;
        panda$threads$Notifier$notify(self->notifier);
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope5));
    scope5 = NULL;
    switch ($tmp4) {
        case -1: goto $l31;
    }
    $l31:;
}
panda$core$Int64 panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope35 = NULL;
    panda$threads$ScopedLock* $tmp36;
    panda$threads$ScopedLock* $tmp37;
    panda$core$Int64 $returnValue39;
    int $tmp34;
    {
        panda$threads$ScopedLock* $tmp38 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp38, self->lock);
        $tmp37 = $tmp38;
        $tmp36 = $tmp37;
        scope35 = $tmp36;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
        $returnValue39 = self->count;
        $tmp34 = 0;
        goto $l32;
        $l40:;
        return $returnValue39;
    }
    $l32:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope35));
    scope35 = NULL;
    switch ($tmp34) {
        case 0: goto $l40;
    }
    $l42:;
    abort();
}
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* self) {
    panda$core$Bit $returnValue43;
    panda$core$Int64 $tmp45;
    panda$core$Int64 $tmp44 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp45, 0);
    panda$core$Bit $tmp46 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp44, $tmp45);
    $returnValue43 = $tmp46;
    return $returnValue43;
}
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope51 = NULL;
    panda$threads$ScopedLock* $tmp52;
    panda$threads$ScopedLock* $tmp53;
    panda$core$Immutable* result58 = NULL;
    panda$core$Immutable* $tmp59;
    panda$threads$MessageQueue$Message* $tmp60;
    panda$threads$MessageQueue$Message* $tmp61;
    panda$threads$MessageQueue$Message* $tmp62;
    panda$threads$MessageQueue$Message* $tmp63;
    panda$core$Int64 $tmp64;
    panda$core$Immutable* $returnValue66;
    panda$core$Immutable* $tmp67;
    int $tmp50;
    {
        panda$threads$ScopedLock* $tmp54 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp54, self->lock);
        $tmp53 = $tmp54;
        $tmp52 = $tmp53;
        scope51 = $tmp52;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
        $l55:;
        bool $tmp57 = ((panda$core$Bit) { self->head == NULL }).value;
        if (!$tmp57) goto $l56;
        {
            panda$threads$Notifier$wait(self->notifier);
        }
        goto $l55;
        $l56:;
        $tmp59 = self->head->payload;
        result58 = $tmp59;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
        {
            $tmp60 = self->head;
            $tmp61 = self->head->next;
            self->head = $tmp61;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp61));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp60));
        }
        if (((panda$core$Bit) { self->head == NULL }).value) {
        {
            {
                $tmp62 = self->tail;
                $tmp63 = NULL;
                self->tail = $tmp63;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp62));
            }
        }
        }
        panda$core$Int64$init$builtin_int64(&$tmp64, 1);
        panda$core$Int64 $tmp65 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp64);
        self->count = $tmp65;
        $tmp67 = result58;
        $returnValue66 = $tmp67;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
        $tmp50 = 0;
        goto $l48;
        $l68:;
        return $returnValue66;
    }
    $l48:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result58));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope51));
    scope51 = NULL;
    result58 = NULL;
    switch ($tmp50) {
        case 0: goto $l68;
    }
    $l70:;
    abort();
}
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* self) {
    panda$threads$Lock* $tmp71;
    panda$threads$Lock* $tmp72;
    panda$threads$Notifier* $tmp74;
    panda$threads$Notifier* $tmp75;
    panda$core$Int64 $tmp77;
    self->lock = NULL;
    self->notifier = NULL;
    self->head = NULL;
    self->tail = NULL;
    panda$threads$Lock* $tmp73 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
    panda$threads$Lock$init($tmp73);
    $tmp72 = $tmp73;
    $tmp71 = $tmp72;
    self->lock = $tmp71;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$threads$Notifier* $tmp76 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
    panda$threads$Notifier$init$panda$threads$Lock($tmp76, self->lock);
    $tmp75 = $tmp76;
    $tmp74 = $tmp75;
    self->notifier = $tmp74;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    panda$core$Int64$init$builtin_int64(&$tmp77, 0);
    self->count = $tmp77;
}
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* self) {
    int $tmp80;
    {
    }
    $tmp80 = -1;
    goto $l78;
    $l78:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp80) {
        case -1: goto $l81;
    }
    $l81:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lock));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->notifier));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->head));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tail));
}

