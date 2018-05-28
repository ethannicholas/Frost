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

typedef void (*$fn23)(panda$threads$Notifier*);
typedef void (*$fn50)(panda$threads$Notifier*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 26, -1815112700899824502, NULL };

void panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self, panda$core$Immutable* p_data) {
    panda$threads$ScopedLock* scope5 = NULL;
    panda$threads$ScopedLock* $tmp6;
    panda$threads$ScopedLock* $tmp7;
    panda$threads$MessageQueue$Message* $tmp9;
    panda$threads$MessageQueue$Message* $tmp10;
    panda$threads$MessageQueue$Message* $tmp11;
    panda$threads$MessageQueue$Message* $tmp13;
    panda$threads$MessageQueue$Message* $tmp14;
    panda$threads$MessageQueue$Message* $tmp16;
    panda$threads$MessageQueue$Message* $tmp17;
    panda$threads$MessageQueue$Message* $tmp18;
    panda$threads$MessageQueue$Message* $tmp20;
    panda$threads$MessageQueue$Message* $tmp21;
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
            PANDA_ASSERT(((panda$core$Bit) { self->head != NULL }).value);
            {
                $tmp9 = self->tail->next;
                panda$threads$MessageQueue$Message* $tmp12 = (panda$threads$MessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
                panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp12, p_data);
                $tmp11 = $tmp12;
                $tmp10 = $tmp11;
                self->tail->next = $tmp10;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
            }
            {
                $tmp13 = self->tail;
                $tmp14 = self->tail->next;
                self->tail = $tmp14;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
            }
        }
        }
        else {
        {
            panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp15.value);
            {
                $tmp16 = self->head;
                panda$threads$MessageQueue$Message* $tmp19 = (panda$threads$MessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
                panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp19, p_data);
                $tmp18 = $tmp19;
                $tmp17 = $tmp18;
                self->head = $tmp17;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
            }
            {
                $tmp20 = self->tail;
                $tmp21 = self->head;
                self->tail = $tmp21;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp21));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
            }
        }
        }
        panda$core$Int64 $tmp22 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
        self->count = $tmp22;
        (($fn23) self->notifier->$class->vtable[3])(self->notifier);
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope5));
    scope5 = NULL;
    switch ($tmp4) {
        case -1: goto $l24;
    }
    $l24:;
}
panda$core$Int64 panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope28 = NULL;
    panda$threads$ScopedLock* $tmp29;
    panda$threads$ScopedLock* $tmp30;
    panda$core$Int64 $returnValue32;
    int $tmp27;
    {
        panda$threads$ScopedLock* $tmp31 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp31, self->lock);
        $tmp30 = $tmp31;
        $tmp29 = $tmp30;
        scope28 = $tmp29;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
        $returnValue32 = self->count;
        $tmp27 = 0;
        goto $l25;
        $l33:;
        return $returnValue32;
    }
    $l25:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope28));
    scope28 = NULL;
    switch ($tmp27) {
        case 0: goto $l33;
    }
    $l35:;
}
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* self) {
    panda$core$Bit $returnValue36;
    panda$core$Int64 $tmp37 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(self);
    panda$core$Bit $tmp38 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp37, ((panda$core$Int64) { 0 }));
    $returnValue36 = $tmp38;
    return $returnValue36;
}
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* self) {
    panda$threads$ScopedLock* scope43 = NULL;
    panda$threads$ScopedLock* $tmp44;
    panda$threads$ScopedLock* $tmp45;
    panda$core$Immutable* result51 = NULL;
    panda$core$Immutable* $tmp52;
    panda$threads$MessageQueue$Message* $tmp53;
    panda$threads$MessageQueue$Message* $tmp54;
    panda$threads$MessageQueue$Message* $tmp55;
    panda$threads$MessageQueue$Message* $tmp56;
    panda$core$Immutable* $returnValue58;
    panda$core$Immutable* $tmp59;
    int $tmp42;
    {
        panda$threads$ScopedLock* $tmp46 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
        panda$threads$ScopedLock$init$panda$threads$Lock($tmp46, self->lock);
        $tmp45 = $tmp46;
        $tmp44 = $tmp45;
        scope43 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp45));
        $l47:;
        bool $tmp49 = ((panda$core$Bit) { self->head == NULL }).value;
        if (!$tmp49) goto $l48;
        {
            (($fn50) self->notifier->$class->vtable[2])(self->notifier);
        }
        goto $l47;
        $l48:;
        $tmp52 = self->head->payload;
        result51 = $tmp52;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
        {
            $tmp53 = self->head;
            $tmp54 = self->head->next;
            self->head = $tmp54;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp53));
        }
        if (((panda$core$Bit) { self->head == NULL }).value) {
        {
            {
                $tmp55 = self->tail;
                $tmp56 = NULL;
                self->tail = $tmp56;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
            }
        }
        }
        panda$core$Int64 $tmp57 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
        self->count = $tmp57;
        $tmp59 = result51;
        $returnValue58 = $tmp59;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
        $tmp42 = 0;
        goto $l40;
        $l60:;
        return $returnValue58;
    }
    $l40:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result51));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) scope43));
    scope43 = NULL;
    result51 = NULL;
    switch ($tmp42) {
        case 0: goto $l60;
    }
    $l62:;
}
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* self) {
    panda$threads$Lock* $tmp63;
    panda$threads$Lock* $tmp64;
    panda$threads$Notifier* $tmp66;
    panda$threads$Notifier* $tmp67;
    self->lock = NULL;
    self->notifier = NULL;
    self->head = NULL;
    self->tail = NULL;
    panda$threads$Lock* $tmp65 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
    panda$threads$Lock$init($tmp65);
    $tmp64 = $tmp65;
    $tmp63 = $tmp64;
    self->lock = $tmp63;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    panda$threads$Notifier* $tmp68 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
    panda$threads$Notifier$init$panda$threads$Lock($tmp68, self->lock);
    $tmp67 = $tmp68;
    $tmp66 = $tmp67;
    self->notifier = $tmp66;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp67));
    self->count = ((panda$core$Int64) { 0 });
}
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* self) {
    int $tmp71;
    {
    }
    $tmp71 = -1;
    goto $l69;
    $l69:;
    panda$core$Immutable$cleanup(((panda$core$Immutable*) self));
    switch ($tmp71) {
        case -1: goto $l72;
    }
    $l72:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->lock));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->notifier));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->head));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->tail));
}

