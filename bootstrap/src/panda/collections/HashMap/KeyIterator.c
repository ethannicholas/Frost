#include "panda/collections/HashMap/KeyIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Key.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/HashMap/EntryIterator.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/HashMap/Entry.h"
__attribute__((weak)) panda$core$Object* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim(panda$collections$HashMap$KeyIterator* p0) {
    panda$collections$Key* result = panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$HashMap$KeyIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$HashMap$KeyIterator$class_type panda$collections$HashMap$KeyIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$KeyIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$HashMap$KeyIterator$cleanup, panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim} };

typedef panda$core$Bit (*$fn7)(panda$collections$HashMap$EntryIterator*);
typedef panda$core$Bit (*$fn10)(panda$collections$HashMap$KeyIterator*);
typedef panda$core$Object* (*$fn20)(panda$collections$HashMap$EntryIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x65\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 37, -1367690464876987437, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x65\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x4b\x65\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b", 116, 8997438769361104508, NULL };

void panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT(panda$collections$HashMap$KeyIterator* self, panda$collections$HashMap* p_map) {
    panda$collections$HashMap$EntryIterator* $tmp2;
    panda$collections$HashMap$EntryIterator* $tmp3;
    panda$collections$HashMap$EntryIterator* $tmp4;
    self->base = NULL;
    {
        $tmp2 = self->base;
        panda$collections$HashMap$EntryIterator* $tmp5 = (panda$collections$HashMap$EntryIterator*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$EntryIterator$class);
        panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT($tmp5, p_map);
        $tmp4 = $tmp5;
        $tmp3 = $tmp4;
        self->base = $tmp3;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
    }
}
panda$core$Bit panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$KeyIterator* self) {
    panda$core$Bit $returnValue6;
    panda$core$Bit $tmp8 = (($fn7) self->base->$class->vtable[2])(self->base);
    $returnValue6 = $tmp8;
    return $returnValue6;
}
panda$collections$Key* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(panda$collections$HashMap$KeyIterator* self) {
    panda$collections$Key* $returnValue17;
    panda$collections$Key* $tmp18;
    panda$core$Object* $tmp19;
    panda$core$Bit $tmp11 = (($fn10) self->$class->vtable[2])(self);
    panda$core$Bit $tmp12 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp11);
    if ($tmp12.value) goto $l13; else goto $l14;
    $l14:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s15, (panda$core$Int64) { 92 }, &$s16);
    abort();
    $l13:;
    panda$core$Object* $tmp21 = (($fn20) self->base->$class->vtable[3])(self->base);
    $tmp19 = $tmp21;
    $tmp18 = ((panda$collections$HashMap$Entry*) $tmp19)->key;
    $returnValue17 = $tmp18;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
    panda$core$Panda$unref$panda$core$Object$Q($tmp19);
    return $returnValue17;
}
void panda$collections$HashMap$KeyIterator$cleanup(panda$collections$HashMap$KeyIterator* self) {
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
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->base));
}

