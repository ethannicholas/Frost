#include "panda/io/InputStream/LineIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String.h"
#include "panda/io/InputStream.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$io$InputStream$LineIterator$next$R$panda$core$String$shim(panda$io$InputStream$LineIterator* self) {
    panda$core$String* result = panda$io$InputStream$LineIterator$next$R$panda$core$String(self);
    return ((panda$core$Object*) result);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$io$InputStream$LineIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim} };

panda$io$InputStream$LineIterator$class_type panda$io$InputStream$LineIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$io$InputStream$LineIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit, panda$io$InputStream$LineIterator$next$R$panda$core$String$shim, panda$io$InputStream$LineIterator$readNext} };

typedef void (*$fn2)(panda$io$InputStream$LineIterator*);
typedef void (*$fn5)(panda$io$InputStream$LineIterator*);
typedef panda$core$String* (*$fn6)(panda$io$InputStream*);


void panda$io$InputStream$LineIterator$init$panda$io$InputStream(panda$io$InputStream$LineIterator* self, panda$io$InputStream* p_input) {
    self->_next = NULL;
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_input));
        self->input = ((panda$io$InputStream*) $tmp1);
    }
    (($fn2) self->$class->vtable[4])(self);
}
panda$core$Bit panda$io$InputStream$LineIterator$get_done$R$panda$core$Bit(panda$io$InputStream$LineIterator* self) {
    return ((panda$core$Bit) { self->_next == NULL });
}
panda$core$String* panda$io$InputStream$LineIterator$next$R$panda$core$String(panda$io$InputStream$LineIterator* self) {
    panda$core$String* result3;
    PANDA_ASSERT(((panda$core$Bit) { self->_next != NULL }).value);
    panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->_next));
    result3 = ((panda$core$String*) $tmp4);
    (($fn5) self->$class->vtable[4])(self);
    return result3;
}
void panda$io$InputStream$LineIterator$readNext(panda$io$InputStream$LineIterator* self) {
    {
        panda$core$String* $tmp7 = (($fn6) self->input->$class->vtable[11])(self->input);
        panda$core$Object* $tmp8 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp7));
        self->_next = ((panda$core$String*) $tmp8);
    }
}

