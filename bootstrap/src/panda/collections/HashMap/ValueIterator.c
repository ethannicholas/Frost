#include "panda/collections/HashMap/ValueIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/HashMap/EntryIterator.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap/Entry.h"
#include "panda/core/Panda.h"
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Object* result = panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$ValueIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim} };

static panda$core$String $s1;
panda$collections$HashMap$ValueIterator$class_type panda$collections$HashMap$ValueIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$ValueIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$HashMap$ValueIterator$cleanup, panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim} };

typedef panda$core$Bit (*$fn3)(panda$collections$HashMap$EntryIterator*);
typedef panda$core$Object* (*$fn5)(panda$collections$HashMap$EntryIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x56\x61\x6c\x75\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 39, -7666047204960680933, NULL };

void panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT(panda$collections$HashMap$ValueIterator* self, panda$collections$HashMap* p_map) {
    {
        panda$collections$HashMap$EntryIterator* $tmp2 = (panda$collections$HashMap$EntryIterator*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$EntryIterator$class);
        panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT($tmp2, p_map);
        self->base = $tmp2;
    }
}
panda$core$Bit panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Bit $tmp4 = (($fn3) self->base->$class->vtable[2])(self->base);
    return $tmp4;
}
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Object* $tmp6 = (($fn5) self->base->$class->vtable[3])(self->base);
    return ((panda$collections$HashMap$Entry*) $tmp6)->value;
}
void panda$collections$HashMap$ValueIterator$cleanup(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->base));
}

