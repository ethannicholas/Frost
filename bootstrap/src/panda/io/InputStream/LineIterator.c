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
typedef void (*$fn8)(panda$io$InputStream$LineIterator*);
typedef panda$core$String* (*$fn15)(panda$io$InputStream*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 33, -4146794243265748747, NULL };

void panda$io$InputStream$LineIterator$init$panda$io$InputStream(panda$io$InputStream$LineIterator* self, panda$io$InputStream* p_input) {
    self->input = NULL;
    self->_next = NULL;
    {
        panda$io$InputStream* $tmp2 = self->input;
        panda$io$InputStream* $tmp3 = p_input;
        self->input = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
    (($fn4) self->$class->vtable[4])(self);
}
panda$core$Bit panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit(panda$io$InputStream$LineIterator* self) {
    panda$core$Bit $tmp5 = ((panda$core$Bit) { self->_next == NULL });
    return $tmp5;
}
panda$core$String* panda$io$InputStream$LineIterator$next$R$panda$core$String(panda$io$InputStream$LineIterator* self) {
    panda$core$String* result6;
    panda$core$String* tmp49;
    PANDA_ASSERT(((panda$core$Bit) { self->_next != NULL }).value);
    panda$core$String* $tmp7 = self->_next;
    result6 = $tmp7;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
    (($fn8) self->$class->vtable[4])(self);
    {
        panda$core$String* $tmp10 = result6;
        tmp49 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result6));
        panda$core$String* $tmp11 = tmp49;
        return $tmp11;
    }
}
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* self) {
    {
        panda$core$String* $tmp12 = self->_next;
        panda$core$String* $tmp16 = (($fn15) self->input->$class->vtable[11])(self->input);
        panda$core$String* $tmp14 = $tmp16;
        panda$core$String* $tmp13 = $tmp14;
        self->_next = $tmp13;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp13));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
}
void panda$io$InputStream$LineIterator$cleanup(panda$io$InputStream$LineIterator* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->input));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->_next));
}

