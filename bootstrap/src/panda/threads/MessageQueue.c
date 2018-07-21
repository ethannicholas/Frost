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
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 18, 1403033073527415641, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 18, 1403033073527415641, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp12));
            }
            {
                $tmp16 = self->tail;
                $tmp17 = self->tail->next;
                self->tail = $tmp17;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
            }
            {
                $tmp27 = self->tail;
                $tmp28 = self->head;
                self->tail = $tmp28;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
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
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) scope5));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
        $returnValue40 = self->count;
        $tmp35 = 0;
        goto $l33;
        $l41:;
        return $returnValue40;
    }
    $l33:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) scope36));
    scope36 = NULL;
    switch ($tmp35) {
        case 0: goto $l41;
    }
    $l43:;
    if (false) goto $l44; else goto $l45;
    $l45:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s46, (panda$core$Int64) { 75 }, &$s47);
    abort();
    $l44:;
    abort();
}
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* self) {
    panda$core$Bit $returnValue48;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp49 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp50, 0);
    panda$core$Bit $tmp51 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp49, $tmp50);
    $returnValue48 = $tmp51;
    return $returnValue48;
}
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope56 = NULL;
    panda$threads$ScopedLock* $tmp57;
    panda$threads$ScopedLock* $tmp58;
    panda$core$Immutable* result63 = NULL;
    panda$core$Immutable* $tmp64;
    panda$threads$MessageQueue$Message* $tmp65;
    panda$threads$MessageQueue$Message* $tmp66;
    panda$threads$MessageQueue$Message* $tmp67;
    panda$threads$MessageQueue$Message* $tmp68;
    panda$threads$MessageQueue* $tmp69;
    panda$core$Int64 $tmp70;
    panda$core$Immutable* $returnValue72;
    panda$core$Immutable* $tmp73;
    int $tmp55;
    {
        panda$threads$ScopedLock* $tmp59 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp59, self->lock);
        $tmp58 = $tmp59;
        $tmp57 = $tmp58;
        scope56 = $tmp57;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
        $l60:;
        bool $tmp62 = ((panda$core$Bit) { self->head == NULL }).value;
        if (!$tmp62) goto $l61;
        {
            panda$threads$Notifier$wait(self->notifier);
        }
        goto $l60;
        $l61:;
        $tmp64 = self->head->payload;
        result63 = $tmp64;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
        {
            $tmp65 = self->head;
            $tmp66 = self->head->next;
            self->head = $tmp66;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
        }
        if (((panda$core$Bit) { self->head == NULL }).value) {
        {
            {
                $tmp67 = self->tail;
                $tmp68 = NULL;
                self->tail = $tmp68;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
            }
        }
        }
        $tmp69 = self;
        panda$core$Int64$init$builtin_int64(&$tmp70, 1);
        panda$core$Int64 $tmp71 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp69->count, $tmp70);
        $tmp69->count = $tmp71;
        $tmp73 = result63;
        $returnValue72 = $tmp73;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
        $tmp55 = 0;
        goto $l53;
        $l74:;
        return $returnValue72;
    }
    $l53:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result63));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) scope56));
    scope56 = NULL;
    result63 = NULL;
    switch ($tmp55) {
        case 0: goto $l74;
    }
    $l76:;
    if (false) goto $l77; else goto $l78;
    $l78:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s79, (panda$core$Int64) { 98 }, &$s80);
    abort();
    $l77:;
    abort();
}
void panda$threads$MessageQueue$clear(panda$threads$MessageQueue* self) {
    panda$core$Immutable* $tmp85;
    $l81:;
    panda$core$Bit $tmp84 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(self);
    bool $tmp83 = $tmp84.value;
    if (!$tmp83) goto $l82;
    {
        panda$core$Immutable* $tmp86 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(self);
        $tmp85 = $tmp86;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp85));
    }
    goto $l81;
    $l82:;
}
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* self) {
    panda$threads$Lock* $tmp87;
    panda$threads$Lock* $tmp88;
    panda$threads$Notifier* $tmp90;
    panda$threads$Notifier* $tmp91;
    panda$core$Int64 $tmp93;
    self->lock = NULL;
    self->notifier = NULL;
    self->head = NULL;
    self->tail = NULL;
    panda$threads$Lock* $tmp89 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
    panda$threads$Lock$init($tmp89);
    $tmp88 = $tmp89;
    $tmp87 = $tmp88;
    self->lock = $tmp87;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp88));
    panda$threads$Notifier* $tmp92 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
    panda$threads$Notifier$init$panda$threads$Lock($tmp92, self->lock);
    $tmp91 = $tmp92;
    $tmp90 = $tmp91;
    self->notifier = $tmp90;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp91));
    panda$core$Int64$init$builtin_int64(&$tmp93, 0);
    self->count = $tmp93;
}
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* self) {
    int $tmp96;
    {
    }
    $tmp96 = -1;
    goto $l94;
    $l94:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp96) {
        case -1: goto $l97;
    }
    $l97:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->lock));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->notifier));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->head));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->tail));
}

