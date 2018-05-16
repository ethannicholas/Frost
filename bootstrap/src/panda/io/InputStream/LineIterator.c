#include "panda/io/InputStream/LineIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/io/InputStream.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$io$InputStream$LineIterator$next$R$panda$core$String$shim(panda$io$InputStream$LineIterator* self) {
    panda$core$String* result = panda$io$InputStream$LineIterator$next$R$panda$core$String(self);
    return ((panda$core$Object*) result);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$InputStream$LineIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim} };

static panda$core$String $s1;
panda$io$InputStream$LineIterator$class_type panda$io$InputStream$LineIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$io$InputStream$LineIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$io$InputStream$LineIterator$cleanup, panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim, panda$io$InputStream$LineIterator$readNext} };

typedef void (*$fn4)(panda$io$InputStream$LineIterator*);
typedef void (*$fn12)(panda$io$InputStream$LineIterator*);
typedef panda$core$String* (*$fn21)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 33, -4146794243265748747, NULL };

void panda$io$InputStream$LineIterator$init$panda$io$InputStream(panda$io$InputStream$LineIterator* self, panda$io$InputStream* p_input) {
    panda$io$InputStream* $tmp2;
    panda$io$InputStream* $tmp3;
    self->input = NULL;
    self->_next = NULL;
    {
        $tmp2 = self->input;
        $tmp3 = p_input;
        self->input = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    (($fn4) self->$class->vtable[4])(self);
}
panda$core$Bit panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit(panda$io$InputStream$LineIterator* self) {
    panda$core$Bit $finallyReturn4;
    $finallyReturn4 = ((panda$core$Bit) { self->_next == NULL });
    return $finallyReturn4;
}
panda$core$String* panda$io$InputStream$LineIterator$next$R$panda$core$String(panda$io$InputStream$LineIterator* self) {
    panda$core$String* result10 = NULL;
    panda$core$String* $tmp11;
    panda$core$String* $finallyReturn12;
    panda$core$String* $tmp14;
    int $tmp9;
    {
        PANDA_ASSERT(((panda$core$Bit) { self->_next != NULL }).value);
        $tmp11 = self->_next;
        result10 = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        (($fn12) self->$class->vtable[4])(self);
        $tmp14 = result10;
        $finallyReturn12 = $tmp14;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
        $tmp9 = 0;
        goto $l7;
        $l15:;
        return $finallyReturn12;
    }
    $l7:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result10));
    result10 = NULL;
    switch ($tmp9) {
        case 0: goto $l15;
    }
    $l17:;
}
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* self) {
    panda$core$String* $tmp18;
    panda$core$String* $tmp19;
    panda$core$String* $tmp20;
    {
        $tmp18 = self->_next;
        panda$core$String* $tmp22 = (($fn21) self->input->$class->vtable[11])(self->input);
        $tmp20 = $tmp22;
        $tmp19 = $tmp20;
        self->_next = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
    }
}
void panda$io$InputStream$LineIterator$cleanup(panda$io$InputStream$LineIterator* self) {
    int $tmp25;
    {
    }
    $tmp25 = -1;
    goto $l23;
    $l23:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp25) {
        case -1: goto $l26;
    }
    $l26:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->input));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->_next));
}






