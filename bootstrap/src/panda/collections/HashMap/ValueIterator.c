#include "panda/collections/HashMap/ValueIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/collections/HashMap/EntryIterator.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap/Entry.h"
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Object* result = panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$ValueIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim} };

panda$collections$HashMap$ValueIterator$class_type panda$collections$HashMap$ValueIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$ValueIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim} };

typedef panda$core$Bit (*$fn4)(panda$collections$HashMap$EntryIterator*);
typedef panda$core$Object* (*$fn6)(panda$collections$HashMap$EntryIterator*);


void panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT(panda$collections$HashMap$ValueIterator* self, panda$collections$HashMap* p_map) {
    {
        panda$collections$HashMap$EntryIterator* $tmp1 = (panda$collections$HashMap$EntryIterator*) malloc(40);
        $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$EntryIterator$class;
        $tmp1->refCount.value = 1;
        panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT($tmp1, p_map);
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1));
        self->base = ((panda$collections$HashMap$EntryIterator*) $tmp3);
    }
}
panda$core$Bit panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Bit $tmp5 = (($fn4) self->base->$class->vtable[2])(self->base);
    return $tmp5;
}
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Object* $tmp7 = (($fn6) self->base->$class->vtable[3])(self->base);
    return ((panda$collections$HashMap$Entry*) $tmp7)->value;
}

