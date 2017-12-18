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
    $tmp1 = (org$pandalanguage$pandac$parser$Token$wrapper*) malloc(64);
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
typedef panda$core$Int64 (*$fn143)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn149)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn155)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn161)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn205)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn239)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn245)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn251)(panda$collections$Iterator*);

static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_capacity) {
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((org$pandalanguage$pandac$parser$Token*) malloc(p_capacity.value * 48));
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
    free(self->data);
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
    if ($tmp59 >= $tmp40) goto $l56; else goto $l44;
    $l61:;
    if ($tmp59 > $tmp40) goto $l56; else goto $l44;
    $l58:;
    int64_t $tmp63 = i36.value - $tmp39;
    if ($tmp41) goto $l64; else goto $l65;
    $l64:;
    if ($tmp63 >= -$tmp40) goto $l56; else goto $l44;
    $l65:;
    if ($tmp63 > -$tmp40) goto $l56; else goto $l44;
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
    result72 = ((org$pandalanguage$pandac$parser$Token*) malloc(count70.value * 48));
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
    if ($tmp90 >= 1) goto $l89; else goto $l81;
    $l92:;
    if ($tmp90 > 1) goto $l89; else goto $l81;
    $l89:;
    i74.value += 1;
    goto $l79;
    $l81:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp95 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) malloc(40);
    $tmp95->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp95->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp95, result72, count70);
    return $tmp95;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start97;
    panda$core$Int64 end98;
    panda$core$Range$LTpanda$core$Int64$GT $tmp101;
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp112 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) malloc(40);
    $tmp112->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp112->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp112);
    result111 = $tmp112;
    panda$core$Bit $tmp114 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp114.value) {
    {
        $l115:;
        panda$core$Bit $tmp117 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current104, end108);
        if (!$tmp117.value) goto $l116;
        {
            org$pandalanguage$pandac$parser$Token $tmp118 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp118);
            panda$core$Int64 $tmp119 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current104, step103);
            current104 = $tmp119;
        }
        goto $l115;
        $l116:;
    }
    }
    else {
    {
        panda$core$Bit $tmp120 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp120.value);
        $l121:;
        panda$core$Bit $tmp123 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current104, end108);
        if (!$tmp123.value) goto $l122;
        {
            org$pandalanguage$pandac$parser$Token $tmp124 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp124);
            panda$core$Int64 $tmp125 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current104, step103);
            current104 = $tmp125;
        }
        goto $l121;
        $l122:;
    }
    }
    bool $tmp128 = p_r.inclusive.value;
    if ($tmp128) goto $l129;
    $tmp128 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l129:;
    panda$core$Bit $tmp130 = { $tmp128 };
    bool $tmp127 = $tmp130.value;
    if (!$tmp127) goto $l131;
    panda$core$Bit $tmp132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current104, end108);
    $tmp127 = $tmp132.value;
    $l131:;
    panda$core$Bit $tmp133 = { $tmp127 };
    bool $tmp126 = $tmp133.value;
    if (!$tmp126) goto $l134;
    panda$core$Int64 $tmp135 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp136 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end108, $tmp135);
    $tmp126 = $tmp136.value;
    $l134:;
    panda$core$Bit $tmp137 = { $tmp126 };
    if ($tmp137.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp138 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp138);
    }
    }
    return result111;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp139);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp140;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter146;
    org$pandalanguage$pandac$parser$Token v158;
    ITable* $tmp141 = p_c->$class->itable;
    while ($tmp141->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp141 = $tmp141->next;
    }
    $fn143 $tmp142 = $tmp141->methods[0];
    panda$core$Int64 $tmp144 = $tmp142(p_c);
    panda$core$Int64 $tmp145 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp144);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp145);
    {
        ITable* $tmp147 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp147 = $tmp147->next;
        }
        $fn149 $tmp148 = $tmp147->methods[0];
        panda$collections$Iterator* $tmp150 = $tmp148(((panda$collections$Iterable*) p_c));
        v$Iter146 = $tmp150;
        $l151:;
        ITable* $tmp153 = v$Iter146->$class->itable;
        while ($tmp153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp153 = $tmp153->next;
        }
        $fn155 $tmp154 = $tmp153->methods[0];
        panda$core$Bit $tmp156 = $tmp154(v$Iter146);
        panda$core$Bit $tmp157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp156);
        if (!$tmp157.value) goto $l152;
        {
            ITable* $tmp159 = v$Iter146->$class->itable;
            while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp159 = $tmp159->next;
            }
            $fn161 $tmp160 = $tmp159->methods[1];
            panda$core$Object* $tmp162 = $tmp160(v$Iter146);
            v158 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp162)->value;
            self->data[self->count.value] = v158;
            panda$core$Int64 $tmp163 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp163;
        }
        goto $l151;
        $l152:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Bit $tmp164 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp164.value);
    panda$core$Bit $tmp165 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp165.value) {
    {
        return;
    }
    }
    $l166:;
    panda$core$Bit $tmp168 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp168.value) goto $l167;
    {
        panda$core$Int64 $tmp169 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp169;
    }
    goto $l166;
    $l167:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) realloc(self->data, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    return self->count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp170;
    panda$core$Int64 $tmp171 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp170, p_index, $tmp171, ((panda$core$Bit) { false }));
    int64_t $tmp173 = $tmp170.min.value;
    panda$core$Int64 i172 = { $tmp173 };
    int64_t $tmp175 = $tmp170.max.value;
    bool $tmp176 = $tmp170.inclusive.value;
    if ($tmp176) goto $l183; else goto $l184;
    $l183:;
    if ($tmp173 <= $tmp175) goto $l177; else goto $l179;
    $l184:;
    if ($tmp173 < $tmp175) goto $l177; else goto $l179;
    $l177:;
    {
        panda$core$Int64 $tmp185 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i172, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp186 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp185);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i172, $tmp186);
    }
    $l180:;
    int64_t $tmp188 = $tmp175 - i172.value;
    if ($tmp176) goto $l189; else goto $l190;
    $l189:;
    if ($tmp188 >= 1) goto $l187; else goto $l179;
    $l190:;
    if ($tmp188 > 1) goto $l187; else goto $l179;
    $l187:;
    i172.value += 1;
    goto $l177;
    $l179:;
    panda$core$Int64 $tmp193 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp193;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp194 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) malloc(32);
    $tmp194->$class = (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp194->refCount.value = 1;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp194, self);
    return ((panda$collections$Iterator*) $tmp194);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$String* $tmp197 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(self, &$s196);
    return $tmp197;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$String* p_separator) {
    panda$core$MutableString* result200;
    panda$core$Range$LTpanda$core$Int64$GT $tmp207;
    panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp198.value) {
    {
        return &$s199;
    }
    }
    panda$core$MutableString* $tmp201 = (panda$core$MutableString*) malloc(48);
    $tmp201->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp201->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token $tmp203 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp204;
    $tmp204 = (org$pandalanguage$pandac$parser$Token$wrapper*) malloc(64);
    $tmp204->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
    $tmp204->refCount = 1;
    $tmp204->value = $tmp203;
    panda$core$String* $tmp206 = (($fn205) ((panda$core$Object*) $tmp204)->$class->vtable[0])(((panda$core$Object*) $tmp204));
    panda$core$MutableString$init$panda$core$String($tmp201, $tmp206);
    result200 = $tmp201;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp207, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp209 = $tmp207.min.value;
    panda$core$Int64 i208 = { $tmp209 };
    int64_t $tmp211 = $tmp207.max.value;
    bool $tmp212 = $tmp207.inclusive.value;
    if ($tmp212) goto $l219; else goto $l220;
    $l219:;
    if ($tmp209 <= $tmp211) goto $l213; else goto $l215;
    $l220:;
    if ($tmp209 < $tmp211) goto $l213; else goto $l215;
    $l213:;
    {
        panda$core$MutableString$append$panda$core$String(result200, p_separator);
        org$pandalanguage$pandac$parser$Token $tmp221 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, i208);
        org$pandalanguage$pandac$parser$Token$wrapper* $tmp222;
        $tmp222 = (org$pandalanguage$pandac$parser$Token$wrapper*) malloc(64);
        $tmp222->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
        $tmp222->refCount = 1;
        $tmp222->value = $tmp221;
        panda$core$MutableString$append$panda$core$Object(result200, ((panda$core$Object*) $tmp222));
    }
    $l216:;
    int64_t $tmp224 = $tmp211 - i208.value;
    if ($tmp212) goto $l225; else goto $l226;
    $l225:;
    if ($tmp224 >= 1) goto $l223; else goto $l215;
    $l226:;
    if ($tmp224 > 1) goto $l223; else goto $l215;
    $l223:;
    i208.value += 1;
    goto $l213;
    $l215:;
    panda$core$String* $tmp229 = panda$core$MutableString$finish$R$panda$core$String(result200);
    return $tmp229;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result230;
    panda$core$Char8 $tmp233;
    panda$core$String* separator234;
    panda$collections$Iterator* v$Iter236;
    org$pandalanguage$pandac$parser$Token v248;
    panda$core$Char8 $tmp256;
    panda$core$MutableString* $tmp231 = (panda$core$MutableString*) malloc(48);
    $tmp231->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp231->refCount.value = 1;
    panda$core$MutableString$init($tmp231);
    result230 = $tmp231;
    panda$core$Char8$init$panda$core$UInt8(&$tmp233, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result230, $tmp233);
    separator234 = &$s235;
    {
        ITable* $tmp237 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp237->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp237 = $tmp237->next;
        }
        $fn239 $tmp238 = $tmp237->methods[0];
        panda$collections$Iterator* $tmp240 = $tmp238(((panda$collections$Iterable*) self));
        v$Iter236 = $tmp240;
        $l241:;
        ITable* $tmp243 = v$Iter236->$class->itable;
        while ($tmp243->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp243 = $tmp243->next;
        }
        $fn245 $tmp244 = $tmp243->methods[0];
        panda$core$Bit $tmp246 = $tmp244(v$Iter236);
        panda$core$Bit $tmp247 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp246);
        if (!$tmp247.value) goto $l242;
        {
            ITable* $tmp249 = v$Iter236->$class->itable;
            while ($tmp249->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp249 = $tmp249->next;
            }
            $fn251 $tmp250 = $tmp249->methods[1];
            panda$core$Object* $tmp252 = $tmp250(v$Iter236);
            v248 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp252)->value;
            panda$core$MutableString$append$panda$core$String(result230, separator234);
            separator234 = &$s253;
            if (((panda$core$Bit) { true }).value) {
            {
                org$pandalanguage$pandac$parser$Token$wrapper* $tmp254;
                $tmp254 = (org$pandalanguage$pandac$parser$Token$wrapper*) malloc(64);
                $tmp254->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
                $tmp254->refCount = 1;
                $tmp254->value = v248;
                panda$core$MutableString$append$panda$core$Object(result230, ((panda$core$Object*) $tmp254));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result230, &$s255);
            }
            }
        }
        goto $l241;
        $l242:;
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp256, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result230, $tmp256);
    panda$core$String* $tmp257 = panda$core$MutableString$finish$R$panda$core$String(result230);
    return $tmp257;
}

