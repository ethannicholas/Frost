#include "panda/collections/List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/MutableMethod.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { NULL, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$List$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$List$_panda$collections$CollectionView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$collections$List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$List$_panda$collections$Collection, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$List$_panda$collections$ListView, { NULL, NULL, NULL} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$List$_panda$collections$CollectionWriter, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$List$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, (ITable*) &panda$collections$List$_panda$collections$Iterable, { panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$List$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$List$_panda$collections$List, { NULL, NULL, NULL} };

static panda$core$String $s1;
panda$collections$List$class_type panda$collections$List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$List$_panda$collections$ListWriter, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

typedef panda$core$Int64 (*$fn5)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn33)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Bit (*$fn36)(panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn37)(panda$core$Object*);
typedef panda$core$Object* (*$fn42)(panda$collections$ListWriter*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74", 22, 6616553759611337156, NULL };

void panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP(panda$collections$List* self, panda$core$MutableMethod* p_f) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp2;
    panda$core$Int64 $tmp7;
    panda$core$Int64 $tmp9;
    panda$core$Int64 $tmp10;
    panda$core$Bit $tmp11;
    panda$core$Object* $tmp30;
    panda$core$Bit $tmp35;
    panda$core$Object* $tmp39;
    ITable* $tmp3 = ((panda$collections$CollectionView*) self)->$class->itable;
    while ($tmp3->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3 = $tmp3->next;
    }
    $fn5 $tmp4 = $tmp3->methods[0];
    panda$core$Int64 $tmp6 = $tmp4(((panda$collections$CollectionView*) self));
    panda$core$Int64$init$builtin_int64(&$tmp7, 1);
    panda$core$Int64 $tmp8 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6, $tmp7);
    panda$core$Int64$init$builtin_int64(&$tmp9, 0);
    panda$core$Int64$init$builtin_int64(&$tmp10, -1);
    panda$core$Bit$init$builtin_bit(&$tmp11, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2, $tmp8, $tmp9, $tmp10, $tmp11);
    int64_t $tmp13 = $tmp2.start.value;
    panda$core$Int64 i12 = { $tmp13 };
    int64_t $tmp15 = $tmp2.end.value;
    int64_t $tmp16 = $tmp2.step.value;
    bool $tmp17 = $tmp2.inclusive.value;
    bool $tmp24 = $tmp16 > 0;
    if ($tmp24) goto $l22; else goto $l23;
    $l22:;
    if ($tmp17) goto $l25; else goto $l26;
    $l25:;
    if ($tmp13 <= $tmp15) goto $l18; else goto $l20;
    $l26:;
    if ($tmp13 < $tmp15) goto $l18; else goto $l20;
    $l23:;
    if ($tmp17) goto $l27; else goto $l28;
    $l27:;
    if ($tmp13 >= $tmp15) goto $l18; else goto $l20;
    $l28:;
    if ($tmp13 > $tmp15) goto $l18; else goto $l20;
    $l18:;
    {
        ITable* $tmp31 = ((panda$collections$ListView*) self)->$class->itable;
        while ($tmp31->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp31 = $tmp31->next;
        }
        $fn33 $tmp32 = $tmp31->methods[0];
        panda$core$Object* $tmp34 = $tmp32(((panda$collections$ListView*) self), i12);
        $tmp30 = $tmp34;
        if (p_f->target) {
            $tmp35 = (($fn36) p_f->pointer)(p_f->target, $tmp30);
        } else {
            $tmp35 = (($fn37) p_f->pointer)($tmp30);
        }
        panda$core$Bit $tmp38 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        panda$core$Panda$unref$panda$core$Object($tmp30);
        if ($tmp38.value) {
        {
            ITable* $tmp40 = ((panda$collections$ListWriter*) self)->$class->itable;
            while ($tmp40->$class != (panda$core$Class*) &panda$collections$ListWriter$class) {
                $tmp40 = $tmp40->next;
            }
            $fn42 $tmp41 = $tmp40->methods[2];
            panda$core$Object* $tmp43 = $tmp41(((panda$collections$ListWriter*) self), i12);
            $tmp39 = $tmp43;
            panda$core$Panda$unref$panda$core$Object($tmp39);
        }
        }
    }
    $l21:;
    if ($tmp24) goto $l45; else goto $l46;
    $l45:;
    int64_t $tmp47 = $tmp15 - i12.value;
    if ($tmp17) goto $l48; else goto $l49;
    $l48:;
    if ((uint64_t) $tmp47 >= $tmp16) goto $l44; else goto $l20;
    $l49:;
    if ((uint64_t) $tmp47 > $tmp16) goto $l44; else goto $l20;
    $l46:;
    int64_t $tmp51 = i12.value - $tmp15;
    if ($tmp17) goto $l52; else goto $l53;
    $l52:;
    if ((uint64_t) $tmp51 >= -$tmp16) goto $l44; else goto $l20;
    $l53:;
    if ((uint64_t) $tmp51 > -$tmp16) goto $l44; else goto $l20;
    $l44:;
    i12.value += $tmp16;
    goto $l18;
    $l20:;
}

