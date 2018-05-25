#include "panda/collections/ImmutableHashMap/KeyIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Key.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/collections/ImmutableHashMap/EntryIterator.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableHashMap/Entry.h"
panda$core$Object* panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K$shim(panda$collections$ImmutableHashMap$KeyIterator* self) {
    panda$collections$Key* result = panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K(self);
    return ((panda$core$Object*) result);
}


struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$ImmutableHashMap$KeyIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$ImmutableHashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K$shim, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$ImmutableHashMap$KeyIterator$class_type panda$collections$ImmutableHashMap$KeyIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableHashMap$KeyIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$ImmutableHashMap$KeyIterator$cleanup, panda$collections$ImmutableHashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K$shim} };

typedef panda$core$Bit (*$fn7)(panda$collections$ImmutableHashMap$EntryIterator*);
typedef panda$core$Object* (*$fn13)(panda$collections$ImmutableHashMap$EntryIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x65\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 46, -1740889002941195081, NULL };

void panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT(panda$collections$ImmutableHashMap$KeyIterator* self, panda$collections$ImmutableHashMap* p_map) {
    panda$collections$ImmutableHashMap$EntryIterator* $tmp2;
    panda$collections$ImmutableHashMap$EntryIterator* $tmp3;
    panda$collections$ImmutableHashMap$EntryIterator* $tmp4;
    self->base = NULL;
    {
        $tmp2 = self->base;
        panda$collections$ImmutableHashMap$EntryIterator* $tmp5 = (panda$collections$ImmutableHashMap$EntryIterator*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableHashMap$EntryIterator$class);
        panda$collections$ImmutableHashMap$EntryIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT($tmp5, p_map);
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->base = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$Bit panda$collections$ImmutableHashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$KeyIterator* self) {
    panda$core$Bit $returnValue6;
    panda$core$Bit $tmp8 = (($fn7) self->base->$class->vtable[2])(self->base);
    $returnValue6 = $tmp8;
    return $returnValue6;
}
panda$collections$Key* panda$collections$ImmutableHashMap$KeyIterator$next$R$panda$collections$ImmutableHashMap$KeyIterator$K(panda$collections$ImmutableHashMap$KeyIterator* self) {
    panda$collections$Key* $returnValue10;
    panda$collections$Key* $tmp11;
    panda$collections$ImmutableHashMap$Entry* $tmp12;
    panda$core$Object* $tmp14 = (($fn13) self->base->$class->vtable[3])(self->base);
    $tmp12 = ((panda$collections$ImmutableHashMap$Entry*) $tmp14);
    $tmp11 = $tmp12->key;
    $returnValue10 = $tmp11;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    return $returnValue10;
}
void panda$collections$ImmutableHashMap$KeyIterator$cleanup(panda$collections$ImmutableHashMap$KeyIterator* self) {
    int $tmp18;
    {
    }
    $tmp18 = -1;
    goto $l16;
    $l16:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp18) {
        case -1: goto $l19;
    }
    $l19:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->base));
}

