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

typedef void (*$fn29)(panda$threads$Notifier*);
typedef void (*$fn56)(panda$threads$Notifier*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 26, -1815112700899824502, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 18, 1403033073527415641, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 18, 1403033073527415641, NULL };

void panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self, panda$core$Immutable* p_data) {
    panda$threads$ScopedLock* scope5 = NULL;
    panda$threads$ScopedLock* $tmp6;
    panda$threads$ScopedLock* $tmp7;
    panda$threads$MessageQueue$Message* $tmp12;
    panda$threads$MessageQueue$Message* $tmp13;
    panda$threads$MessageQueue$Message* $tmp14;
    panda$threads$MessageQueue$Message* $tmp16;
    panda$threads$MessageQueue$Message* $tmp17;
    panda$threads$MessageQueue$Message* $tmp22;
    panda$threads$MessageQueue$Message* $tmp23;
    panda$threads$MessageQueue$Message* $tmp24;
    panda$threads$MessageQueue$Message* $tmp26;
    panda$threads$MessageQueue$Message* $tmp27;
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
            panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
            if ($tmp18.value) goto $l19; else goto $l20;
            $l20:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s21, (panda$core$Int64) { 59 });
            abort();
            $l19:;
            {
                $tmp22 = self->head;
                panda$threads$MessageQueue$Message* $tmp25 = (panda$threads$MessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
                panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp25, p_data);
                $tmp24 = $tmp25;
                $tmp23 = $tmp24;
                self->head = $tmp23;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
            }
            {
                $tmp26 = self->tail;
                $tmp27 = self->head;
                self->tail = $tmp27;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp27));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
            }
        }
        }
        panda$core$Int64 $tmp28 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
        self->count = $tmp28;
        (($fn29) self->notifier->$class->vtable[3])(self->notifier);
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope5));
    scope5 = NULL;
    switch ($tmp4) {
        case -1: goto $l30;
    }
    $l30:;
}
panda$core$Int64 panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope34 = NULL;
    panda$threads$ScopedLock* $tmp35;
    panda$threads$ScopedLock* $tmp36;
    panda$core$Int64 $returnValue38;
    int $tmp33;
    {
        panda$threads$ScopedLock* $tmp37 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp37, self->lock);
        $tmp36 = $tmp37;
        $tmp35 = $tmp36;
        scope34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        $returnValue38 = self->count;
        $tmp33 = 0;
        goto $l31;
        $l39:;
        return $returnValue38;
    }
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope34));
    scope34 = NULL;
    switch ($tmp33) {
        case 0: goto $l39;
    }
    $l41:;
    abort();
}
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* self) {
    panda$core$Bit $returnValue42;
    panda$core$Int64 $tmp43 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self);
    panda$core$Bit $tmp44 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp43, ((panda$core$Int64) { 0 }));
    $returnValue42 = $tmp44;
    return $returnValue42;
}
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope49 = NULL;
    panda$threads$ScopedLock* $tmp50;
    panda$threads$ScopedLock* $tmp51;
    panda$core$Immutable* result57 = NULL;
    panda$core$Immutable* $tmp58;
    panda$threads$MessageQueue$Message* $tmp59;
    panda$threads$MessageQueue$Message* $tmp60;
    panda$threads$MessageQueue$Message* $tmp61;
    panda$threads$MessageQueue$Message* $tmp62;
    panda$core$Immutable* $returnValue64;
    panda$core$Immutable* $tmp65;
    int $tmp48;
    {
        panda$threads$ScopedLock* $tmp52 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp52, self->lock);
        $tmp51 = $tmp52;
        $tmp50 = $tmp51;
        scope49 = $tmp50;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
        $l53:;
        bool $tmp55 = ((panda$core$Bit) { self->head == NULL }).value;
        if (!$tmp55) goto $l54;
        {
            (($fn56) self->notifier->$class->vtable[2])(self->notifier);
        }
        goto $l53;
        $l54:;
        $tmp58 = self->head->payload;
        result57 = $tmp58;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
        {
            $tmp59 = self->head;
            $tmp60 = self->head->next;
            self->head = $tmp60;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
        }
        if (((panda$core$Bit) { self->head == NULL }).value) {
        {
            {
                $tmp61 = self->tail;
                $tmp62 = NULL;
                self->tail = $tmp62;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
            }
        }
        }
        panda$core$Int64 $tmp63 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
        self->count = $tmp63;
        $tmp65 = result57;
        $returnValue64 = $tmp65;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
        $tmp48 = 0;
        goto $l46;
        $l66:;
        return $returnValue64;
    }
    $l46:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result57));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope49));
    scope49 = NULL;
    result57 = NULL;
    switch ($tmp48) {
        case 0: goto $l66;
    }
    $l68:;
    abort();
}
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* self) {
    panda$threads$Lock* $tmp69;
    panda$threads$Lock* $tmp70;
    panda$threads$Notifier* $tmp72;
    panda$threads$Notifier* $tmp73;
    self->lock = NULL;
    self->notifier = NULL;
    self->head = NULL;
    self->tail = NULL;
    panda$threads$Lock* $tmp71 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
    panda$threads$Lock$init($tmp71);
    $tmp70 = $tmp71;
    $tmp69 = $tmp70;
    self->lock = $tmp69;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
    panda$threads$Notifier* $tmp74 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
    panda$threads$Notifier$init$panda$threads$Lock($tmp74, self->lock);
    $tmp73 = $tmp74;
    $tmp72 = $tmp73;
    self->notifier = $tmp72;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
    self->count = ((panda$core$Int64) { 0 });
}
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* self) {
    int $tmp77;
    {
    }
    $tmp77 = -1;
    goto $l75;
    $l75:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp77) {
        case -1: goto $l78;
    }
    $l78:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lock));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->notifier));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->head));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tail));
}

