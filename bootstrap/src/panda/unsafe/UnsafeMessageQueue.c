#include "panda/unsafe/UnsafeMessageQueue.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/threads/ScopedLock.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/unsafe/UnsafeMessageQueue/Message.h"
#include "panda/core/Int64.h"
#include "panda/threads/Notifier.h"
#include "panda/threads/Lock.h"

static panda$core$String $s1;
panda$unsafe$UnsafeMessageQueue$class_type panda$unsafe$UnsafeMessageQueue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$unsafe$UnsafeMessageQueue$cleanup, panda$unsafe$UnsafeMessageQueue$post$panda$unsafe$UnsafeMessageQueue$T, panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64, panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit, panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T, panda$unsafe$UnsafeMessageQueue$clear} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 31, -8786330723062907737, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 24, -3268556063022250949, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 24, -3268556063022250949, NULL };

void panda$unsafe$UnsafeMessageQueue$post$panda$unsafe$UnsafeMessageQueue$T(panda$unsafe$UnsafeMessageQueue* self, panda$core$Object* p_data) {
    panda$threads$ScopedLock* scope5 = NULL;
    panda$threads$ScopedLock* $tmp6;
    panda$threads$ScopedLock* $tmp7;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp12;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp13;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp14;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp16;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp17;
    panda$core$Int64 $tmp18;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp23;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp24;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp25;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp27;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp28;
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
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s11, (panda$core$Int64) { 48 });
            abort();
            $l9:;
            {
                $tmp12 = self->tail->next;
                panda$unsafe$UnsafeMessageQueue$Message* $tmp15 = (panda$unsafe$UnsafeMessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$unsafe$UnsafeMessageQueue$Message$class);
                panda$unsafe$UnsafeMessageQueue$Message$init$panda$unsafe$UnsafeMessageQueue$Message$T($tmp15, p_data);
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
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s22, (panda$core$Int64) { 53 });
            abort();
            $l20:;
            {
                $tmp23 = self->head;
                panda$unsafe$UnsafeMessageQueue$Message* $tmp26 = (panda$unsafe$UnsafeMessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$unsafe$UnsafeMessageQueue$Message$class);
                panda$unsafe$UnsafeMessageQueue$Message$init$panda$unsafe$UnsafeMessageQueue$Message$T($tmp26, p_data);
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
panda$core$Int64 panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64(panda$unsafe$UnsafeMessageQueue* self) {
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
panda$core$Bit panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit(panda$unsafe$UnsafeMessageQueue* self) {
    panda$core$Bit $returnValue43;
    panda$core$Int64 $tmp45;
    panda$core$Int64 $tmp44 = panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp45, 0);
    panda$core$Bit $tmp46 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp44, $tmp45);
    $returnValue43 = $tmp46;
    return $returnValue43;
}
panda$core$Object* panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T(panda$unsafe$UnsafeMessageQueue* self) {
    panda$threads$ScopedLock* scope51 = NULL;
    panda$threads$ScopedLock* $tmp52;
    panda$threads$ScopedLock* $tmp53;
    panda$core$Object* result58 = NULL;
    panda$core$Object* $tmp59;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp60;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp61;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp62;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp63;
    panda$core$Int64 $tmp64;
    panda$core$Object* $returnValue66;
    panda$core$Object* $tmp67;
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
        panda$core$Panda$ref$panda$core$Object($tmp59);
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
        panda$core$Panda$ref$panda$core$Object($tmp67);
        $tmp50 = 0;
        goto $l48;
        $l68:;
        return $returnValue66;
    }
    $l48:;
    panda$core$Panda$unref$panda$core$Object(result58);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope51));
    scope51 = NULL;
    result58 = NULL;
    switch ($tmp50) {
        case 0: goto $l68;
    }
    $l70:;
    abort();
}
void panda$unsafe$UnsafeMessageQueue$clear(panda$unsafe$UnsafeMessageQueue* self) {
    panda$core$Object* $tmp75;
    $l71:;
    panda$core$Bit $tmp74 = panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit(self);
    bool $tmp73 = $tmp74.value;
    if (!$tmp73) goto $l72;
    {
        panda$core$Object* $tmp76 = panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T(self);
        $tmp75 = $tmp76;
        panda$core$Panda$unref$panda$core$Object($tmp75);
    }
    goto $l71;
    $l72:;
}
void panda$unsafe$UnsafeMessageQueue$init(panda$unsafe$UnsafeMessageQueue* self) {
    panda$threads$Lock* $tmp77;
    panda$threads$Lock* $tmp78;
    panda$threads$Notifier* $tmp80;
    panda$threads$Notifier* $tmp81;
    panda$core$Int64 $tmp83;
    self->lock = NULL;
    self->notifier = NULL;
    self->head = NULL;
    self->tail = NULL;
    panda$threads$Lock* $tmp79 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
    panda$threads$Lock$init($tmp79);
    $tmp78 = $tmp79;
    $tmp77 = $tmp78;
    self->lock = $tmp77;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
    panda$threads$Notifier* $tmp82 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
    panda$threads$Notifier$init$panda$threads$Lock($tmp82, self->lock);
    $tmp81 = $tmp82;
    $tmp80 = $tmp81;
    self->notifier = $tmp80;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
    panda$core$Int64$init$builtin_int64(&$tmp83, 0);
    self->count = $tmp83;
}
void panda$unsafe$UnsafeMessageQueue$cleanup(panda$unsafe$UnsafeMessageQueue* self) {
    int $tmp86;
    {
    }
    $tmp86 = -1;
    goto $l84;
    $l84:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp86) {
        case -1: goto $l87;
    }
    $l87:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lock));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->notifier));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->head));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tail));
}

