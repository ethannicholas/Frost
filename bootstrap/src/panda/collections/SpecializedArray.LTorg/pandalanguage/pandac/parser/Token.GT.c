#include "panda/collections/SpecializedArray.LTorg/pandalanguage/pandac/parser/Token.GT.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
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
#include "panda/core/Panda.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/collections/SpecializedArrayIterator.LTorg/pandalanguage/pandac/parser/Token.GT.h"
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
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp2;
    $tmp2 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaZAlloc(64);
    $tmp2->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
    $tmp2->refCount = 1;
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$List, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Iterable, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView, { } };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String} };

typedef panda$core$Int64 (*$fn5)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn11)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn17)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn145)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn151)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn163)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn208)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn243)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn255)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_capacity) {
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(p_capacity.value * 48));
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$ListView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* v$Iter8;
    org$pandalanguage$pandac$parser$Token v20;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp3 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp3->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3 = $tmp3->next;
    }
    $fn5 $tmp4 = $tmp3->methods[0];
    panda$core$Int64 $tmp6 = $tmp4(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp7 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp6, ((panda$core$Int64) { 16 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$core$Int64(self, $tmp7);
    {
        ITable* $tmp9 = ((panda$collections$Iterable*) p_list)->$class->itable;
        while ($tmp9->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp9 = $tmp9->next;
        }
        $fn11 $tmp10 = $tmp9->methods[0];
        panda$collections$Iterator* $tmp12 = $tmp10(((panda$collections$Iterable*) p_list));
        v$Iter8 = $tmp12;
        $l13:;
        ITable* $tmp15 = v$Iter8->$class->itable;
        while ($tmp15->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp15 = $tmp15->next;
        }
        $fn17 $tmp16 = $tmp15->methods[0];
        panda$core$Bit $tmp18 = $tmp16(v$Iter8);
        panda$core$Bit $tmp19 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp18);
        if (!$tmp19.value) goto $l14;
        {
            ITable* $tmp21 = v$Iter8->$class->itable;
            while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp21 = $tmp21->next;
            }
            $fn23 $tmp22 = $tmp21->methods[1];
            panda$core$Object* $tmp24 = $tmp22(v$Iter8);
            v20 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp24)->value;
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, v20);
        }
        goto $l13;
        $l14:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
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
    panda$core$Bit $tmp26 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp25 = $tmp26.value;
    if (!$tmp25) goto $l27;
    panda$core$Bit $tmp28 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp25 = $tmp28.value;
    $l27:;
    panda$core$Bit $tmp29 = { $tmp25 };
    PANDA_ASSERT($tmp29.value);
    return self->data[p_index.value];
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Bit $tmp31 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp30 = $tmp31.value;
    if (!$tmp30) goto $l32;
    panda$core$Bit $tmp33 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp30 = $tmp33.value;
    $l32:;
    panda$core$Bit $tmp34 = { $tmp30 };
    PANDA_ASSERT($tmp34.value);
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp36;
    panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp35);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp36, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp38 = $tmp36.start.value;
    panda$core$Int64 i37 = { $tmp38 };
    int64_t $tmp40 = $tmp36.end.value;
    int64_t $tmp41 = $tmp36.step.value;
    bool $tmp42 = $tmp36.inclusive.value;
    bool $tmp49 = $tmp41 > 0;
    if ($tmp49) goto $l47; else goto $l48;
    $l47:;
    if ($tmp42) goto $l50; else goto $l51;
    $l50:;
    if ($tmp38 <= $tmp40) goto $l43; else goto $l45;
    $l51:;
    if ($tmp38 < $tmp40) goto $l43; else goto $l45;
    $l48:;
    if ($tmp42) goto $l52; else goto $l53;
    $l52:;
    if ($tmp38 >= $tmp40) goto $l43; else goto $l45;
    $l53:;
    if ($tmp38 > $tmp40) goto $l43; else goto $l45;
    $l43:;
    {
        panda$core$Int64 $tmp55 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i37, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp56 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp55);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i37, $tmp56);
    }
    $l46:;
    if ($tmp49) goto $l58; else goto $l59;
    $l58:;
    int64_t $tmp60 = $tmp40 - i37.value;
    if ($tmp42) goto $l61; else goto $l62;
    $l61:;
    if ((uint64_t) $tmp60 >= $tmp41) goto $l57; else goto $l45;
    $l62:;
    if ((uint64_t) $tmp60 > $tmp41) goto $l57; else goto $l45;
    $l59:;
    int64_t $tmp64 = i37.value - $tmp40;
    if ($tmp42) goto $l65; else goto $l66;
    $l65:;
    if ((uint64_t) $tmp64 >= -$tmp41) goto $l57; else goto $l45;
    $l66:;
    if ((uint64_t) $tmp64 > -$tmp41) goto $l57; else goto $l45;
    $l57:;
    i37.value += $tmp41;
    goto $l43;
    $l45:;
    panda$core$Int64 $tmp68 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp68;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max69;
    panda$core$Int64 count71;
    org$pandalanguage$pandac$parser$Token* result73;
    panda$core$Range$LTpanda$core$Int64$GT $tmp74;
    max69 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp70 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max69, ((panda$core$Int64) { 1 }));
        max69 = $tmp70;
    }
    }
    panda$core$Int64 $tmp72 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max69, p_r.min);
    count71 = $tmp72;
    result73 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(count71.value * 48));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp74, ((panda$core$Int64) { 0 }), count71, ((panda$core$Bit) { false }));
    int64_t $tmp76 = $tmp74.min.value;
    panda$core$Int64 i75 = { $tmp76 };
    int64_t $tmp78 = $tmp74.max.value;
    bool $tmp79 = $tmp74.inclusive.value;
    if ($tmp79) goto $l86; else goto $l87;
    $l86:;
    if ($tmp76 <= $tmp78) goto $l80; else goto $l82;
    $l87:;
    if ($tmp76 < $tmp78) goto $l80; else goto $l82;
    $l80:;
    {
        panda$core$Int64 $tmp88 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i75);
        org$pandalanguage$pandac$parser$Token $tmp89 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp88);
        result73[i75.value] = $tmp89;
    }
    $l83:;
    int64_t $tmp91 = $tmp78 - i75.value;
    if ($tmp79) goto $l92; else goto $l93;
    $l92:;
    if ((uint64_t) $tmp91 >= 1) goto $l90; else goto $l82;
    $l93:;
    if ((uint64_t) $tmp91 > 1) goto $l90; else goto $l82;
    $l90:;
    i75.value += 1;
    goto $l80;
    $l82:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp96 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaZAlloc(40);
    $tmp96->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp96->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp96, result73, count71);
    return $tmp96;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start98;
    panda$core$Int64 end99;
    panda$core$Range$LTpanda$core$Int64$GT $tmp102;
    memset(&start98, 0, sizeof(start98));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start98 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start98 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end99, 0, sizeof(end99));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end99 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp100 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end99 = $tmp100;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp101 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end99, ((panda$core$Int64) { 1 }));
            end99 = $tmp101;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp102, start98, end99, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp103 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp102);
    return $tmp103;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step104;
    panda$core$Int64 current105;
    panda$core$Int64 end109;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result112;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* tmp237140;
    step104 = p_r.step;
    memset(&current105, 0, sizeof(current105));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current105 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp106 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step104, ((panda$core$Int64) { 0 }));
    if ($tmp106.value) {
    {
        current105 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp107 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp107, ((panda$core$Int64) { 1 }));
        current105 = $tmp108;
    }
    }
    }
    memset(&end109, 0, sizeof(end109));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end109 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp110 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step104, ((panda$core$Int64) { 0 }));
    if ($tmp110.value) {
    {
        panda$core$Int64 $tmp111 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end109 = $tmp111;
    }
    }
    else {
    {
        end109 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp113 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaZAlloc(40);
    $tmp113->$class = (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp113->refCount.value = 1;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp113);
    result112 = $tmp113;
    panda$core$Bit $tmp115 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp115.value) {
    {
        $l116:;
        panda$core$Bit $tmp118 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current105, end109);
        if (!$tmp118.value) goto $l117;
        {
            org$pandalanguage$pandac$parser$Token $tmp119 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current105);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result112, $tmp119);
            panda$core$Int64 $tmp120 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current105, step104);
            current105 = $tmp120;
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
        panda$core$Bit $tmp124 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current105, end109);
        if (!$tmp124.value) goto $l123;
        {
            org$pandalanguage$pandac$parser$Token $tmp125 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current105);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result112, $tmp125);
            panda$core$Int64 $tmp126 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current105, step104);
            current105 = $tmp126;
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
    panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current105, end109);
    $tmp128 = $tmp133.value;
    $l132:;
    panda$core$Bit $tmp134 = { $tmp128 };
    bool $tmp127 = $tmp134.value;
    if (!$tmp127) goto $l135;
    panda$core$Int64 $tmp136 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp137 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end109, $tmp136);
    $tmp127 = $tmp137.value;
    $l135:;
    panda$core$Bit $tmp138 = { $tmp127 };
    if ($tmp138.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp139 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current105);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result112, $tmp139);
    }
    }
    {
        tmp237140 = result112;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result112));
        return tmp237140;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp141);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp142 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp142;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* v$Iter148;
    org$pandalanguage$pandac$parser$Token v160;
    ITable* $tmp143 = p_c->$class->itable;
    while ($tmp143->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp143 = $tmp143->next;
    }
    $fn145 $tmp144 = $tmp143->methods[0];
    panda$core$Int64 $tmp146 = $tmp144(p_c);
    panda$core$Int64 $tmp147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp146);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp147);
    {
        ITable* $tmp149 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp149->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp149 = $tmp149->next;
        }
        $fn151 $tmp150 = $tmp149->methods[0];
        panda$collections$Iterator* $tmp152 = $tmp150(((panda$collections$Iterable*) p_c));
        v$Iter148 = $tmp152;
        $l153:;
        ITable* $tmp155 = v$Iter148->$class->itable;
        while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp155 = $tmp155->next;
        }
        $fn157 $tmp156 = $tmp155->methods[0];
        panda$core$Bit $tmp158 = $tmp156(v$Iter148);
        panda$core$Bit $tmp159 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp158);
        if (!$tmp159.value) goto $l154;
        {
            ITable* $tmp161 = v$Iter148->$class->itable;
            while ($tmp161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp161 = $tmp161->next;
            }
            $fn163 $tmp162 = $tmp161->methods[1];
            panda$core$Object* $tmp164 = $tmp162(v$Iter148);
            v160 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp164)->value;
            self->data[self->count.value] = v160;
            panda$core$Int64 $tmp165 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp165;
        }
        goto $l153;
        $l154:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity168;
    panda$core$Bit $tmp166 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp166.value);
    panda$core$Bit $tmp167 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp167.value) {
    {
        return;
    }
    }
    oldCapacity168 = self->capacity;
    $l169:;
    panda$core$Bit $tmp171 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp171.value) goto $l170;
    {
        panda$core$Int64 $tmp172 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp172;
    }
    goto $l169;
    $l170:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity168.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    return self->count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp173;
    panda$core$Int64 $tmp174 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp173, p_index, $tmp174, ((panda$core$Bit) { false }));
    int64_t $tmp176 = $tmp173.min.value;
    panda$core$Int64 i175 = { $tmp176 };
    int64_t $tmp178 = $tmp173.max.value;
    bool $tmp179 = $tmp173.inclusive.value;
    if ($tmp179) goto $l186; else goto $l187;
    $l186:;
    if ($tmp176 <= $tmp178) goto $l180; else goto $l182;
    $l187:;
    if ($tmp176 < $tmp178) goto $l180; else goto $l182;
    $l180:;
    {
        panda$core$Int64 $tmp188 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i175, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp189 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp188);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i175, $tmp189);
    }
    $l183:;
    int64_t $tmp191 = $tmp178 - i175.value;
    if ($tmp179) goto $l192; else goto $l193;
    $l192:;
    if ((uint64_t) $tmp191 >= 1) goto $l190; else goto $l182;
    $l193:;
    if ((uint64_t) $tmp191 > 1) goto $l190; else goto $l182;
    $l190:;
    i175.value += 1;
    goto $l180;
    $l182:;
    panda$core$Int64 $tmp196 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp196;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp197 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaZAlloc(32);
    $tmp197->$class = (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class;
    $tmp197->refCount.value = 1;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp197, self);
    return ((panda$collections$Iterator*) $tmp197);
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$String* $tmp200 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(self, &$s199);
    return $tmp200;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$String* p_separator) {
    panda$core$MutableString* result203;
    panda$core$Range$LTpanda$core$Int64$GT $tmp210;
    panda$core$String* tmp238232;
    panda$core$Bit $tmp201 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp201.value) {
    {
        return &$s202;
    }
    }
    panda$core$MutableString* $tmp204 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp204->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp204->refCount.value = 1;
    org$pandalanguage$pandac$parser$Token $tmp206 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp207;
    $tmp207 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaZAlloc(64);
    $tmp207->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
    $tmp207->refCount = 1;
    $tmp207->value = $tmp206;
    panda$core$String* $tmp209 = (($fn208) ((panda$core$Object*) $tmp207)->$class->vtable[0])(((panda$core$Object*) $tmp207));
    panda$core$MutableString$init$panda$core$String($tmp204, $tmp209);
    result203 = $tmp204;
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
        panda$core$MutableString$append$panda$core$String(result203, p_separator);
        org$pandalanguage$pandac$parser$Token $tmp224 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, i211);
        org$pandalanguage$pandac$parser$Token$wrapper* $tmp225;
        $tmp225 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaZAlloc(64);
        $tmp225->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
        $tmp225->refCount = 1;
        $tmp225->value = $tmp224;
        panda$core$MutableString$append$panda$core$Object(result203, ((panda$core$Object*) $tmp225));
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
    {
        panda$core$String* $tmp233 = panda$core$MutableString$finish$R$panda$core$String(result203);
        tmp238232 = $tmp233;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result203));
        return tmp238232;
    }
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result234;
    panda$core$Char8 $tmp237;
    panda$core$String* separator238;
    panda$collections$Iterator* v$Iter240;
    org$pandalanguage$pandac$parser$Token v252;
    panda$core$Char8 $tmp260;
    panda$core$String* tmp239261;
    panda$core$MutableString* $tmp235 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp235->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp235->refCount.value = 1;
    panda$core$MutableString$init($tmp235);
    result234 = $tmp235;
    panda$core$Char8$init$panda$core$UInt8(&$tmp237, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result234, $tmp237);
    separator238 = &$s239;
    {
        ITable* $tmp241 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp241->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp241 = $tmp241->next;
        }
        $fn243 $tmp242 = $tmp241->methods[0];
        panda$collections$Iterator* $tmp244 = $tmp242(((panda$collections$Iterable*) self));
        v$Iter240 = $tmp244;
        $l245:;
        ITable* $tmp247 = v$Iter240->$class->itable;
        while ($tmp247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp247 = $tmp247->next;
        }
        $fn249 $tmp248 = $tmp247->methods[0];
        panda$core$Bit $tmp250 = $tmp248(v$Iter240);
        panda$core$Bit $tmp251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp250);
        if (!$tmp251.value) goto $l246;
        {
            ITable* $tmp253 = v$Iter240->$class->itable;
            while ($tmp253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp253 = $tmp253->next;
            }
            $fn255 $tmp254 = $tmp253->methods[1];
            panda$core$Object* $tmp256 = $tmp254(v$Iter240);
            v252 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp256)->value;
            panda$core$MutableString$append$panda$core$String(result234, separator238);
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator238));
                separator238 = &$s257;
            }
            if (((panda$core$Bit) { true }).value) {
            {
                org$pandalanguage$pandac$parser$Token$wrapper* $tmp258;
                $tmp258 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaZAlloc(64);
                $tmp258->cl = (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass;
                $tmp258->refCount = 1;
                $tmp258->value = v252;
                panda$core$MutableString$append$panda$core$Object(result234, ((panda$core$Object*) $tmp258));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result234, &$s259);
            }
            }
        }
        goto $l245;
        $l246:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp260, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result234, $tmp260);
    {
        panda$core$String* $tmp262 = panda$core$MutableString$finish$R$panda$core$String(result234);
        tmp239261 = $tmp262;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator238));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result234));
        }
        return tmp239261;
    }
}

