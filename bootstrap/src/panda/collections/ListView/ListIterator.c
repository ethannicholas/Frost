#include "panda/collections/ListView/ListIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/collections/CollectionView.h"
__attribute__((weak)) panda$core$Object* panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T$shim(panda$collections$ListView$ListIterator* p0) {
    panda$core$Object* result = panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$ListView$ListIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$ListView$ListIterator$get_done$R$panda$core$Bit, panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$ListView$ListIterator$class_type panda$collections$ListView$ListIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$ListIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$ListView$ListIterator$cleanup, panda$collections$ListView$ListIterator$get_done$R$panda$core$Bit, panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T$shim} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn12)(panda$collections$ListView$ListIterator*);
typedef panda$core$Object* (*$fn29)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 4777226754284963423, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, -2779941435199559214, NULL };

void panda$collections$ListView$ListIterator$init$panda$collections$ListView$LTpanda$collections$ListView$ListIterator$T$GT(panda$collections$ListView$ListIterator* self, panda$collections$ListView* p_list) {
    panda$core$Int64 $tmp2;
    panda$collections$ListView* $tmp3;
    panda$collections$ListView* $tmp4;
    self->list = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->index = $tmp2;
    {
        $tmp3 = self->list;
        $tmp4 = p_list;
        self->list = $tmp4;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    }
}
panda$core$Bit panda$collections$ListView$ListIterator$get_done$R$panda$core$Bit(panda$collections$ListView$ListIterator* self) {
    panda$core$Bit $returnValue5;
    ITable* $tmp6 = ((panda$collections$CollectionView*) self->list)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) self->list));
    panda$core$Bit $tmp10 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, $tmp9);
    $returnValue5 = $tmp10;
    return $returnValue5;
}
panda$core$Object* panda$collections$ListView$ListIterator$next$R$panda$collections$ListView$ListIterator$T(panda$collections$ListView$ListIterator* self) {
    panda$collections$ListView$ListIterator* $tmp19;
    panda$core$Int64 $tmp20;
    panda$core$Object* $returnValue22;
    panda$core$Object* $tmp23;
    panda$core$Object* $tmp24;
    panda$core$Int64 $tmp25;
    panda$core$Bit $tmp13 = (($fn12) self->$class->vtable[2])(self);
    panda$core$Bit $tmp14 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp13);
    if ($tmp14.value) goto $l15; else goto $l16;
    $l16:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s17, (panda$core$Int64) { 29 }, &$s18);
    abort();
    $l15:;
    $tmp19 = self;
    panda$core$Int64$init$builtin_int64(&$tmp20, 1);
    panda$core$Int64 $tmp21 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp19->index, $tmp20);
    $tmp19->index = $tmp21;
    panda$core$Int64$init$builtin_int64(&$tmp25, 1);
    panda$core$Int64 $tmp26 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, $tmp25);
    ITable* $tmp27 = self->list->$class->itable;
    while ($tmp27->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp27 = $tmp27->next;
    }
    $fn29 $tmp28 = $tmp27->methods[0];
    panda$core$Object* $tmp30 = $tmp28(self->list, $tmp26);
    $tmp24 = $tmp30;
    $tmp23 = $tmp24;
    $returnValue22 = $tmp23;
    panda$core$Panda$ref$panda$core$Object$Q($tmp23);
    panda$core$Panda$unref$panda$core$Object$Q($tmp24);
    return $returnValue22;
}
void panda$collections$ListView$ListIterator$cleanup(panda$collections$ListView$ListIterator* self) {
    int $tmp34;
    {
    }
    $tmp34 = -1;
    goto $l32;
    $l32:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp34) {
        case -1: goto $l35;
    }
    $l35:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->list));
}





