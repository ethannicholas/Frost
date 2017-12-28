#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/parser/Token.h"
#include "panda/collections/Collection.h"
#include "panda/core/Bit.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$Iterator* result = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(self);
    return result;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p0, panda$core$Object* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p0, ((org$pandalanguage$pandac$parser$Token$wrapper*) p1)->value);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p0, panda$core$Object* p1) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p0, ((org$pandalanguage$pandac$parser$Token$wrapper*) p1)->value);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Object* p0) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, ((org$pandalanguage$pandac$parser$Token$wrapper*) p0)->value);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p0) {
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(self, p0);
}
panda$core$Object* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p0) {
    org$pandalanguage$pandac$parser$Token result = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, p0);
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp1;
    $tmp1 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaAlloc(64);
    $tmp1->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
    $tmp1->refCount = 1;
    $tmp1->value = result;
    return ((panda$core$Object*) $tmp1);
}


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView, { } };

panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn10)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn16)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn144)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn162)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn207)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn244)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn250)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn256)(panda$collections$Iterator*);

static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_capacity) {
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaAlloc(p_capacity.value * 48));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$ListView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* v$Iter7;
    org$pandalanguage$pandac$parser$Token v19;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp6 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp5, ((panda$core$Int64) { 16 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, $tmp6);
    {
        ITable* $tmp8 = ((panda$collections$Iterable*) p_list)->$class->itable;
        while ($tmp8->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp8 = $tmp8->next;
        }
        $fn10 $tmp9 = $tmp8->methods[0];
        panda$collections$Iterator* $tmp11 = $tmp9(((panda$collections$Iterable*) p_list));
        v$Iter7 = $tmp11;
        $l12:;
        ITable* $tmp14 = v$Iter7->$class->itable;
        while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp14 = $tmp14->next;
        }
        $fn16 $tmp15 = $tmp14->methods[0];
        panda$core$Bit $tmp17 = $tmp15(v$Iter7);
        panda$core$Bit $tmp18 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp17);
        if (!$tmp18.value) goto $l13;
        {
            ITable* $tmp20 = v$Iter7->$class->itable;
            while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp20 = $tmp20->next;
            }
            $fn22 $tmp21 = $tmp20->methods[1];
            panda$core$Object* $tmp23 = $tmp21(v$Iter7);
            v19 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp23)->value;
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, v19);
        }
        goto $l12;
        $l13:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token* p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    pandaFree(self->data);
}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Bit $tmp25 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp24 = $tmp25.value;
    if (!$tmp24) goto $l26;
    panda$core$Bit $tmp27 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp24 = $tmp27.value;
    $l26:;
    panda$core$Bit $tmp28 = { $tmp24 };
    PANDA_ASSERT($tmp28.value);
    return self->data[p_index.value];
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Bit $tmp30 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp29 = $tmp30.value;
    if (!$tmp29) goto $l31;
    panda$core$Bit $tmp32 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp29 = $tmp32.value;
    $l31:;
    panda$core$Bit $tmp33 = { $tmp29 };
    PANDA_ASSERT($tmp33.value);
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp35;
    panda$core$Int64 $tmp34 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp34);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp35, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp37 = $tmp35.start.value;
    panda$core$Int64 i36 = { $tmp37 };
    int64_t $tmp39 = $tmp35.end.value;
    int64_t $tmp40 = $tmp35.step.value;
    bool $tmp41 = $tmp35.inclusive.value;
    bool $tmp48 = $tmp40 > 0;
    if ($tmp48) goto $l46; else goto $l47;
    $l46:;
    if ($tmp41) goto $l49; else goto $l50;
    $l49:;
    if ($tmp37 <= $tmp39) goto $l42; else goto $l44;
    $l50:;
    if ($tmp37 < $tmp39) goto $l42; else goto $l44;
    $l47:;
    if ($tmp41) goto $l51; else goto $l52;
    $l51:;
    if ($tmp37 >= $tmp39) goto $l42; else goto $l44;
    $l52:;
    if ($tmp37 > $tmp39) goto $l42; else goto $l44;
    $l42:;
    {
        panda$core$Int64 $tmp54 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i36, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp55 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp54);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i36, $tmp55);
    }
    $l45:;
    if ($tmp48) goto $l57; else goto $l58;
    $l57:;
    int64_t $tmp59 = $tmp39 - i36.value;
    if ($tmp41) goto $l60; else goto $l61;
    $l60:;
    if ((uint64_t) $tmp59 >= $tmp40) goto $l56; else goto $l44;
    $l61:;
    if ((uint64_t) $tmp59 > $tmp40) goto $l56; else goto $l44;
    $l58:;
    int64_t $tmp63 = i36.value - $tmp39;
    if ($tmp41) goto $l64; else goto $l65;
    $l64:;
    if ((uint64_t) $tmp63 >= -$tmp40) goto $l56; else goto $l44;
    $l65:;
    if ((uint64_t) $tmp63 > -$tmp40) goto $l56; else goto $l44;
    $l56:;
    i36.value += $tmp40;
    goto $l42;
    $l44:;
    panda$core$Int64 $tmp67 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp67;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max68;
    panda$core$Int64 count70;
    org$pandalanguage$pandac$parser$Token* result72;
    panda$core$Range$LTpanda$core$Int64$GT $tmp73;
    max68 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp69 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max68, ((panda$core$Int64) { 1 }));
        max68 = $tmp69;
    }
    }
    panda$core$Int64 $tmp71 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max68, p_r.min);
    count70 = $tmp71;
    result72 = ((org$pandalanguage$pandac$parser$Token*) pandaAlloc(count70.value * 48));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp73, ((panda$core$Int64) { 0 }), count70, ((panda$core$Bit) { false }));
    int64_t $tmp75 = $tmp73.min.value;
    panda$core$Int64 i74 = { $tmp75 };
    int64_t $tmp77 = $tmp73.max.value;
    bool $tmp78 = $tmp73.inclusive.value;
    if ($tmp78) goto $l85; else goto $l86;
    $l85:;
    if ($tmp75 <= $tmp77) goto $l79; else goto $l81;
    $l86:;
    if ($tmp75 < $tmp77) goto $l79; else goto $l81;
    $l79:;
    {
        panda$core$Int64 $tmp87 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i74);
        org$pandalanguage$pandac$parser$Token $tmp88 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp87);
        result72[i74.value] = $tmp88;
    }
    $l82:;
    int64_t $tmp90 = $tmp77 - i74.value;
    if ($tmp78) goto $l91; else goto $l92;
    $l91:;
    if ((uint64_t) $tmp90 >= 1) goto $l89; else goto $l81;
    $l92:;
    if ((uint64_t) $tmp90 > 1) goto $l89; else goto $l81;
    $l89:;
    i74.value += 1;
    goto $l79;
    $l81:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp95 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaAlloc(40);
    $tmp95->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp95->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp95, result72, count70);
    return $tmp95;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start97;
    panda$core$Int64 end98;
    panda$core$Range$LTpanda$core$Int64$GT $tmp101;
    memset(&start97, 0, sizeof(start97));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start97 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start97 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end98, 0, sizeof(end98));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end98 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp99 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end98 = $tmp99;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp100 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end98, ((panda$core$Int64) { 1 }));
            end98 = $tmp100;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp101, start97, end98, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp102 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp101);
    return $tmp102;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step103;
    panda$core$Int64 current104;
    panda$core$Int64 end108;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result111;
    step103 = p_r.step;
    memset(&current104, 0, sizeof(current104));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current104 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp105 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step103, ((panda$core$Int64) { 0 }));
    if ($tmp105.value) {
    {
        current104 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp106 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp107 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp106, ((panda$core$Int64) { 1 }));
        current104 = $tmp107;
    }
    }
    }
    memset(&end108, 0, sizeof(end108));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end108 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp109 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step103, ((panda$core$Int64) { 0 }));
    if ($tmp109.value) {
    {
        panda$core$Int64 $tmp110 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end108 = $tmp110;
    }
    }
    else {
    {
        end108 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp112 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaAlloc(40);
    $tmp112->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp112->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp112);
    panda$core$Object* $tmp114 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp112));
    result111 = ((panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) $tmp114);
    panda$core$Bit $tmp115 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp115.value) {
    {
        $l116:;
        panda$core$Bit $tmp118 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current104, end108);
        if (!$tmp118.value) goto $l117;
        {
            org$pandalanguage$pandac$parser$Token $tmp119 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp119);
            panda$core$Int64 $tmp120 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current104, step103);
            current104 = $tmp120;
        }
        goto $l116;
        $l117:;
    }
    }
    else {
    {
        panda$core$Bit $tmp121 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp121.value);
        $l122:;
        panda$core$Bit $tmp124 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current104, end108);
        if (!$tmp124.value) goto $l123;
        {
            org$pandalanguage$pandac$parser$Token $tmp125 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp125);
            panda$core$Int64 $tmp126 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current104, step103);
            current104 = $tmp126;
        }
        goto $l122;
        $l123:;
    }
    }
    bool $tmp129 = p_r.inclusive.value;
    if ($tmp129) goto $l130;
    $tmp129 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l130:;
    panda$core$Bit $tmp131 = { $tmp129 };
    bool $tmp128 = $tmp131.value;
    if (!$tmp128) goto $l132;
    panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current104, end108);
    $tmp128 = $tmp133.value;
    $l132:;
    panda$core$Bit $tmp134 = { $tmp128 };
    bool $tmp127 = $tmp134.value;
    if (!$tmp127) goto $l135;
    panda$core$Int64 $tmp136 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp137 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end108, $tmp136);
    $tmp127 = $tmp137.value;
    $l135:;
    panda$core$Bit $tmp138 = { $tmp127 };
    if ($tmp138.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp139 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp139);
    }
    }
    return result111;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp140);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp141;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter147;
    org$pandalanguage$pandac$parser$Token v159;
    ITable* $tmp142 = p_c->$class->itable;
    while ($tmp142->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp142 = $tmp142->next;
    }
    $fn144 $tmp143 = $tmp142->methods[0];
    panda$core$Int64 $tmp145 = $tmp143(p_c);
    panda$core$Int64 $tmp146 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp145);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp146);
    {
        ITable* $tmp148 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp148 = $tmp148->next;
        }
        $fn150 $tmp149 = $tmp148->methods[0];
        panda$collections$Iterator* $tmp151 = $tmp149(((panda$collections$Iterable*) p_c));
        v$Iter147 = $tmp151;
        $l152:;
        ITable* $tmp154 = v$Iter147->$class->itable;
        while ($tmp154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp154 = $tmp154->next;
        }
        $fn156 $tmp155 = $tmp154->methods[0];
        panda$core$Bit $tmp157 = $tmp155(v$Iter147);
        panda$core$Bit $tmp158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp157);
        if (!$tmp158.value) goto $l153;
        {
            ITable* $tmp160 = v$Iter147->$class->itable;
            while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp160 = $tmp160->next;
            }
            $fn162 $tmp161 = $tmp160->methods[1];
            panda$core$Object* $tmp163 = $tmp161(v$Iter147);
            v159 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp163)->value;
            self->data[self->count.value] = v159;
            panda$core$Int64 $tmp164 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp164;
        }
        goto $l152;
        $l153:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity167;
    panda$core$Bit $tmp165 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp165.value);
    panda$core$Bit $tmp166 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp166.value) {
    {
        return;
    }
    }
    oldCapacity167 = self->capacity;
    $l168:;
    panda$core$Bit $tmp170 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp170.value) goto $l169;
    {
        panda$core$Int64 $tmp171 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp171;
    }
    goto $l168;
    $l169:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity167.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    return self->count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp172;
    panda$core$Int64 $tmp173 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp172, p_index, $tmp173, ((panda$core$Bit) { false }));
    int64_t $tmp175 = $tmp172.min.value;
    panda$core$Int64 i174 = { $tmp175 };
    int64_t $tmp177 = $tmp172.max.value;
    bool $tmp178 = $tmp172.inclusive.value;
    if ($tmp178) goto $l185; else goto $l186;
    $l185:;
    if ($tmp175 <= $tmp177) goto $l179; else goto $l181;
    $l186:;
    if ($tmp175 < $tmp177) goto $l179; else goto $l181;
    $l179:;
    {
        panda$core$Int64 $tmp187 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i174, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp188 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp187);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i174, $tmp188);
    }
    $l182:;
    int64_t $tmp190 = $tmp177 - i174.value;
    if ($tmp178) goto $l191; else goto $l192;
    $l191:;
    if ((uint64_t) $tmp190 >= 1) goto $l189; else goto $l181;
    $l192:;
    if ((uint64_t) $tmp190 > 1) goto $l189; else goto $l181;
    $l189:;
    i174.value += 1;
    goto $l179;
    $l181:;
    panda$core$Int64 $tmp195 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp195;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp196 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaAlloc(32);
    $tmp196->$class = (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp196->refCount.value = 1;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp196, self);
    return ((panda$collections$Iterator*) $tmp196);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$String* $tmp199 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(self, &$s198);
    return $tmp199;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$String* p_separator) {
    panda$core$MutableString* result202;
    panda$core$Range$LTpanda$core$Int64$GT $tmp210;
    panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp200.value) {
    {
        return &$s201;
    }
    }
    panda$core$MutableString* $tmp203 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp203->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp203->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token $tmp205 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp206;
    $tmp206 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaAlloc(64);
    $tmp206->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
    $tmp206->refCount = 1;
    $tmp206->value = $tmp205;
    panda$core$String* $tmp208 = (($fn207) ((panda$core$Object*) $tmp206)->$class->vtable[0])(((panda$core$Object*) $tmp206));
    panda$core$MutableString$init$panda$core$String($tmp203, $tmp208);
    panda$core$Object* $tmp209 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp203));
    result202 = ((panda$core$MutableString*) $tmp209);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp210, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp212 = $tmp210.min.value;
    panda$core$Int64 i211 = { $tmp212 };
    int64_t $tmp214 = $tmp210.max.value;
    bool $tmp215 = $tmp210.inclusive.value;
    if ($tmp215) goto $l222; else goto $l223;
    $l222:;
    if ($tmp212 <= $tmp214) goto $l216; else goto $l218;
    $l223:;
    if ($tmp212 < $tmp214) goto $l216; else goto $l218;
    $l216:;
    {
        panda$core$MutableString$append$panda$core$String(result202, p_separator);
        org$pandalanguage$pandac$parser$Token $tmp224 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, i211);
        org$pandalanguage$pandac$parser$Token$wrapper* $tmp225;
        $tmp225 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaAlloc(64);
        $tmp225->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
        $tmp225->refCount = 1;
        $tmp225->value = $tmp224;
        panda$core$MutableString$append$panda$core$Object(result202, ((panda$core$Object*) $tmp225));
    }
    $l219:;
    int64_t $tmp227 = $tmp214 - i211.value;
    if ($tmp215) goto $l228; else goto $l229;
    $l228:;
    if ((uint64_t) $tmp227 >= 1) goto $l226; else goto $l218;
    $l229:;
    if ((uint64_t) $tmp227 > 1) goto $l226; else goto $l218;
    $l226:;
    i211.value += 1;
    goto $l216;
    $l218:;
    panda$core$String* $tmp232 = panda$core$MutableString$finish$R$panda$core$String(result202);
    return $tmp232;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result233;
    panda$core$Char8 $tmp237;
    panda$core$String* separator238;
    panda$collections$Iterator* v$Iter241;
    org$pandalanguage$pandac$parser$Token v253;
    panda$core$Char8 $tmp262;
    panda$core$MutableString* $tmp234 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp234->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp234->refCount.value = 1;
    panda$core$MutableString$init($tmp234);
    panda$core$Object* $tmp236 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp234));
    result233 = ((panda$core$MutableString*) $tmp236);
    panda$core$Char8$init$panda$core$UInt8(&$tmp237, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result233, $tmp237);
    panda$core$Object* $tmp240 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s239));
    separator238 = ((panda$core$String*) $tmp240);
    {
        ITable* $tmp242 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp242 = $tmp242->next;
        }
        $fn244 $tmp243 = $tmp242->methods[0];
        panda$collections$Iterator* $tmp245 = $tmp243(((panda$collections$Iterable*) self));
        v$Iter241 = $tmp245;
        $l246:;
        ITable* $tmp248 = v$Iter241->$class->itable;
        while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp248 = $tmp248->next;
        }
        $fn250 $tmp249 = $tmp248->methods[0];
        panda$core$Bit $tmp251 = $tmp249(v$Iter241);
        panda$core$Bit $tmp252 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp251);
        if (!$tmp252.value) goto $l247;
        {
            ITable* $tmp254 = v$Iter241->$class->itable;
            while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp254 = $tmp254->next;
            }
            $fn256 $tmp255 = $tmp254->methods[1];
            panda$core$Object* $tmp257 = $tmp255(v$Iter241);
            v253 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp257)->value;
            panda$core$MutableString$append$panda$core$String(result233, separator238);
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator238));
                panda$core$Object* $tmp259 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s258));
                separator238 = ((panda$core$String*) $tmp259);
            }
            if (((panda$core$Bit) { true }).value) {
            {
                org$pandalanguage$pandac$parser$Token$wrapper* $tmp260;
                $tmp260 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaAlloc(64);
                $tmp260->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
                $tmp260->refCount = 1;
                $tmp260->value = v253;
                panda$core$MutableString$append$panda$core$Object(result233, ((panda$core$Object*) $tmp260));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result233, &$s261);
            }
            }
        }
        goto $l246;
        $l247:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp262, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result233, $tmp262);
    panda$core$String* $tmp263 = panda$core$MutableString$finish$R$panda$core$String(result233);
    return $tmp263;
}

