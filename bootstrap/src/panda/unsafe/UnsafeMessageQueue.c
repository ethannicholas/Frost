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
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 24, -3268556063022250949, NULL };
static panda$core$String $s47 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 24, -3268556063022250949, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    panda$unsafe$UnsafeMessageQueue* $tmp29;
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
panda$core$Int64 panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64(panda$unsafe$UnsafeMessageQueue* self) {
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
    if (false) goto $l44; else goto $l45;
    $l45:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s46, (panda$core$Int64) { 69 }, &$s47);
    abort();
    $l44:;
    abort();
}
panda$core$Bit panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit(panda$unsafe$UnsafeMessageQueue* self) {
    panda$core$Bit $returnValue48;
    panda$core$Int64 $tmp50;
    panda$core$Int64 $tmp49 = panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp50, 0);
    panda$core$Bit $tmp51 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp49, $tmp50);
    $returnValue48 = $tmp51;
    return $returnValue48;
}
panda$core$Object* panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T(panda$unsafe$UnsafeMessageQueue* self) {
    panda$threads$ScopedLock* scope56 = NULL;
    panda$threads$ScopedLock* $tmp57;
    panda$threads$ScopedLock* $tmp58;
    panda$core$Object* result63 = NULL;
    panda$core$Object* $tmp64;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp65;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp66;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp67;
    panda$unsafe$UnsafeMessageQueue$Message* $tmp68;
    panda$unsafe$UnsafeMessageQueue* $tmp69;
    panda$core$Int64 $tmp70;
    panda$core$Object* $returnValue72;
    panda$core$Object* $tmp73;
    int $tmp55;
    {
        panda$threads$ScopedLock* $tmp59 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp59, self->lock);
        $tmp58 = $tmp59;
        $tmp57 = $tmp58;
        scope56 = $tmp57;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp57));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp58));
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
        panda$core$Panda$ref$panda$core$Object($tmp64);
        {
            $tmp65 = self->head;
            $tmp66 = self->head->next;
            self->head = $tmp66;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
        }
        if (((panda$core$Bit) { self->head == NULL }).value) {
        {
            {
                $tmp67 = self->tail;
                $tmp68 = NULL;
                self->tail = $tmp68;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
            }
        }
        }
        $tmp69 = self;
        panda$core$Int64$init$builtin_int64(&$tmp70, 1);
        panda$core$Int64 $tmp71 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp69->count, $tmp70);
        $tmp69->count = $tmp71;
        $tmp73 = result63;
        $returnValue72 = $tmp73;
        panda$core$Panda$ref$panda$core$Object($tmp73);
        $tmp55 = 0;
        goto $l53;
        $l74:;
        return $returnValue72;
    }
    $l53:;
    panda$core$Panda$unref$panda$core$Object(result63);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope56));
    scope56 = NULL;
    result63 = NULL;
    switch ($tmp55) {
        case 0: goto $l74;
    }
    $l76:;
    if (false) goto $l77; else goto $l78;
    $l78:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s79, (panda$core$Int64) { 92 }, &$s80);
    abort();
    $l77:;
    abort();
}
void panda$unsafe$UnsafeMessageQueue$clear(panda$unsafe$UnsafeMessageQueue* self) {
    panda$core$Object* $tmp85;
    $l81:;
    panda$core$Bit $tmp84 = panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit(self);
    bool $tmp83 = $tmp84.value;
    if (!$tmp83) goto $l82;
    {
        panda$core$Object* $tmp86 = panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T(self);
        $tmp85 = $tmp86;
        panda$core$Panda$unref$panda$core$Object($tmp85);
    }
    goto $l81;
    $l82:;
}
void panda$unsafe$UnsafeMessageQueue$init(panda$unsafe$UnsafeMessageQueue* self) {
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
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$threads$Notifier* $tmp92 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
    panda$threads$Notifier$init$panda$threads$Lock($tmp92, self->lock);
    $tmp91 = $tmp92;
    $tmp90 = $tmp91;
    self->notifier = $tmp90;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
    panda$core$Int64$init$builtin_int64(&$tmp93, 0);
    self->count = $tmp93;
}
void panda$unsafe$UnsafeMessageQueue$cleanup(panda$unsafe$UnsafeMessageQueue* self) {
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lock));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->notifier));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->head));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tail));
}

