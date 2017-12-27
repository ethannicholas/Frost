#include "panda/collections/HashMap/KeyIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Key.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Panda.h"
#include "panda/collections/HashMap/EntryIterator.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap/Entry.h"
panda$core$Object* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim(panda$collections$HashMap$KeyIterator* self) {
    panda$collections$Key* result = panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(self);
    return ((panda$core$Object*) result);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$KeyIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim} };

panda$collections$HashMap$KeyIterator$class_type panda$collections$HashMap$KeyIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$KeyIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim} };

typedef panda$core$Bit (*$fn4)(panda$collections$HashMap$EntryIterator*);
typedef panda$core$Object* (*$fn6)(panda$collections$HashMap$EntryIterator*);


void panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT(panda$collections$HashMap$KeyIterator* self, panda$collections$HashMap* p_map) {
    {
        panda$collections$HashMap$EntryIterator* $tmp1 = (panda$collections$HashMap$EntryIterator*) malloc(40);
        $tmp1->$class = (panda$core$Class*) &panda$collections$HashMap$EntryIterator$class;
        $tmp1->refCount.value = 1;
        panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT($tmp1, p_map);
        panda$core$Object* $tmp3 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp1));
        self->base = ((panda$collections$HashMap$EntryIterator*) $tmp3);
    }
}
panda$core$Bit panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$KeyIterator* self) {
    panda$core$Bit $tmp5 = (($fn4) self->base->$class->vtable[2])(self->base);
    return $tmp5;
}
panda$collections$Key* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(panda$collections$HashMap$KeyIterator* self) {
    panda$core$Object* $tmp7 = (($fn6) self->base->$class->vtable[3])(self->base);
    return ((panda$collections$HashMap$Entry*) $tmp7)->key;
}

