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
    $tmp2 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
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
typedef panda$core$Int64 (*$fn143)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn149)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn155)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn161)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn204)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn238)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn244)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn250)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    panda$collections$Iterator* Iter$54$98;
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
        Iter$54$98 = $tmp12;
        $l13:;
        ITable* $tmp15 = Iter$54$98->$class->itable;
        while ($tmp15->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp15 = $tmp15->next;
        }
        $fn17 $tmp16 = $tmp15->methods[0];
        panda$core$Bit $tmp18 = $tmp16(Iter$54$98);
        panda$core$Bit $tmp19 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp18);
        if (!$tmp19.value) goto $l14;
        {
            ITable* $tmp21 = Iter$54$98->$class->itable;
            while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp21 = $tmp21->next;
            }
            $fn23 $tmp22 = $tmp21->methods[1];
            panda$core$Object* $tmp24 = $tmp22(Iter$54$98);
            v20 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp24)->value;
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, v20);
        }
        goto $l13;
        $l14:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$98));
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
    panda$core$Object$cleanup(((panda$core$Object*) self));
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp96 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp96, result73, count71);
    return $tmp96;
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* tmp290138;
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
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp112 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp112);
    result111 = $tmp112;
    panda$core$Bit $tmp113 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp113.value) {
    {
        $l114:;
        panda$core$Bit $tmp116 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current104, end108);
        if (!$tmp116.value) goto $l115;
        {
            org$pandalanguage$pandac$parser$Token $tmp117 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp117);
            panda$core$Int64 $tmp118 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current104, step103);
            current104 = $tmp118;
        }
        goto $l114;
        $l115:;
    }
    }
    else {
    {
        panda$core$Bit $tmp119 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp119.value);
        $l120:;
        panda$core$Bit $tmp122 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current104, end108);
        if (!$tmp122.value) goto $l121;
        {
            org$pandalanguage$pandac$parser$Token $tmp123 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp123);
            panda$core$Int64 $tmp124 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current104, step103);
            current104 = $tmp124;
        }
        goto $l120;
        $l121:;
    }
    }
    bool $tmp127 = p_r.inclusive.value;
    if ($tmp127) goto $l128;
    $tmp127 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l128:;
    panda$core$Bit $tmp129 = { $tmp127 };
    bool $tmp126 = $tmp129.value;
    if (!$tmp126) goto $l130;
    panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current104, end108);
    $tmp126 = $tmp131.value;
    $l130:;
    panda$core$Bit $tmp132 = { $tmp126 };
    bool $tmp125 = $tmp132.value;
    if (!$tmp125) goto $l133;
    panda$core$Int64 $tmp134 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp135 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end108, $tmp134);
    $tmp125 = $tmp135.value;
    $l133:;
    panda$core$Bit $tmp136 = { $tmp125 };
    if ($tmp136.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp137 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current104);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result111, $tmp137);
    }
    }
    {
        tmp290138 = result111;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result111));
        return tmp290138;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp139);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp140;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$205$9146;
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
        Iter$205$9146 = $tmp150;
        $l151:;
        ITable* $tmp153 = Iter$205$9146->$class->itable;
        while ($tmp153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp153 = $tmp153->next;
        }
        $fn155 $tmp154 = $tmp153->methods[0];
        panda$core$Bit $tmp156 = $tmp154(Iter$205$9146);
        panda$core$Bit $tmp157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp156);
        if (!$tmp157.value) goto $l152;
        {
            ITable* $tmp159 = Iter$205$9146->$class->itable;
            while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp159 = $tmp159->next;
            }
            $fn161 $tmp160 = $tmp159->methods[1];
            panda$core$Object* $tmp162 = $tmp160(Iter$205$9146);
            v158 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp162)->value;
            self->data[self->count.value] = v158;
            panda$core$Int64 $tmp163 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp163;
        }
        goto $l151;
        $l152:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$9146));
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity166;
    panda$core$Bit $tmp164 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp164.value);
    panda$core$Bit $tmp165 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp165.value) {
    {
        return;
    }
    }
    oldCapacity166 = self->capacity;
    $l167:;
    panda$core$Bit $tmp169 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    if (!$tmp169.value) goto $l168;
    {
        panda$core$Int64 $tmp170 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp170;
    }
    goto $l167;
    $l168:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity166.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    return self->count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp171;
    panda$core$Int64 $tmp172 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp171, p_index, $tmp172, ((panda$core$Bit) { false }));
    int64_t $tmp174 = $tmp171.min.value;
    panda$core$Int64 i173 = { $tmp174 };
    int64_t $tmp176 = $tmp171.max.value;
    bool $tmp177 = $tmp171.inclusive.value;
    if ($tmp177) goto $l184; else goto $l185;
    $l184:;
    if ($tmp174 <= $tmp176) goto $l178; else goto $l180;
    $l185:;
    if ($tmp174 < $tmp176) goto $l178; else goto $l180;
    $l178:;
    {
        panda$core$Int64 $tmp186 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i173, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp187 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp186);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i173, $tmp187);
    }
    $l181:;
    int64_t $tmp189 = $tmp176 - i173.value;
    if ($tmp177) goto $l190; else goto $l191;
    $l190:;
    if ((uint64_t) $tmp189 >= 1) goto $l188; else goto $l180;
    $l191:;
    if ((uint64_t) $tmp189 > 1) goto $l188; else goto $l180;
    $l188:;
    i173.value += 1;
    goto $l178;
    $l180:;
    panda$core$Int64 $tmp194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp194;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp195 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp195, self);
    return ((panda$collections$Iterator*) $tmp195);
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
    panda$core$Range$LTpanda$core$Int64$GT $tmp206;
    panda$core$String* tmp291228;
    panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp198.value) {
    {
        return &$s199;
    }
    }
    panda$core$MutableString* $tmp201 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    org$pandalanguage$pandac$parser$Token $tmp202 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp203;
    $tmp203 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp203->value = $tmp202;
    panda$core$String* $tmp205 = (($fn204) ((panda$core$Object*) $tmp203)->$class->vtable[0])(((panda$core$Object*) $tmp203));
    panda$core$MutableString$init$panda$core$String($tmp201, $tmp205);
    result200 = $tmp201;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp206, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp208 = $tmp206.min.value;
    panda$core$Int64 i207 = { $tmp208 };
    int64_t $tmp210 = $tmp206.max.value;
    bool $tmp211 = $tmp206.inclusive.value;
    if ($tmp211) goto $l218; else goto $l219;
    $l218:;
    if ($tmp208 <= $tmp210) goto $l212; else goto $l214;
    $l219:;
    if ($tmp208 < $tmp210) goto $l212; else goto $l214;
    $l212:;
    {
        panda$core$MutableString$append$panda$core$String(result200, p_separator);
        org$pandalanguage$pandac$parser$Token $tmp220 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, i207);
        org$pandalanguage$pandac$parser$Token$wrapper* $tmp221;
        $tmp221 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
        $tmp221->value = $tmp220;
        panda$core$MutableString$append$panda$core$Object(result200, ((panda$core$Object*) $tmp221));
    }
    $l215:;
    int64_t $tmp223 = $tmp210 - i207.value;
    if ($tmp211) goto $l224; else goto $l225;
    $l224:;
    if ((uint64_t) $tmp223 >= 1) goto $l222; else goto $l214;
    $l225:;
    if ((uint64_t) $tmp223 > 1) goto $l222; else goto $l214;
    $l222:;
    i207.value += 1;
    goto $l212;
    $l214:;
    {
        panda$core$String* $tmp229 = panda$core$MutableString$finish$R$panda$core$String(result200);
        tmp291228 = $tmp229;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result200));
        return tmp291228;
    }
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result230;
    panda$core$Char8 $tmp232;
    panda$core$String* separator233;
    panda$collections$Iterator* Iter$268$9235;
    org$pandalanguage$pandac$parser$Token v247;
    panda$core$Char8 $tmp255;
    panda$core$String* tmp292256;
    panda$core$MutableString* $tmp231 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp231);
    result230 = $tmp231;
    panda$core$Char8$init$panda$core$UInt8(&$tmp232, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result230, $tmp232);
    separator233 = &$s234;
    {
        ITable* $tmp236 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp236 = $tmp236->next;
        }
        $fn238 $tmp237 = $tmp236->methods[0];
        panda$collections$Iterator* $tmp239 = $tmp237(((panda$collections$Iterable*) self));
        Iter$268$9235 = $tmp239;
        $l240:;
        ITable* $tmp242 = Iter$268$9235->$class->itable;
        while ($tmp242->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp242 = $tmp242->next;
        }
        $fn244 $tmp243 = $tmp242->methods[0];
        panda$core$Bit $tmp245 = $tmp243(Iter$268$9235);
        panda$core$Bit $tmp246 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp245);
        if (!$tmp246.value) goto $l241;
        {
            ITable* $tmp248 = Iter$268$9235->$class->itable;
            while ($tmp248->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp248 = $tmp248->next;
            }
            $fn250 $tmp249 = $tmp248->methods[1];
            panda$core$Object* $tmp251 = $tmp249(Iter$268$9235);
            v247 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp251)->value;
            panda$core$MutableString$append$panda$core$String(result230, separator233);
            {
                separator233 = &$s252;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator233));
            }
            if (((panda$core$Bit) { true }).value) {
            {
                org$pandalanguage$pandac$parser$Token$wrapper* $tmp253;
                $tmp253 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                $tmp253->value = v247;
                panda$core$MutableString$append$panda$core$Object(result230, ((panda$core$Object*) $tmp253));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result230, &$s254);
            }
            }
        }
        goto $l240;
        $l241:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$9235));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp255, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result230, $tmp255);
    {
        panda$core$String* $tmp257 = panda$core$MutableString$finish$R$panda$core$String(result230);
        tmp292256 = $tmp257;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator233));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result230));
        }
        return tmp292256;
    }
}

