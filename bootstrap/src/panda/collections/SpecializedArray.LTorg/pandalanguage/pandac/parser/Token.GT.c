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
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
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
typedef panda$collections$Iterator* (*$fn13)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn20)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn160)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn175)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn182)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn239)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn282)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn289)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn296)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    org$pandalanguage$pandac$parser$Token v23;
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
        ITable* $tmp11 = ((panda$collections$Iterable*) p_list)->$class->itable;
        while ($tmp11->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp11 = $tmp11->next;
        }
        $fn13 $tmp12 = $tmp11->methods[0];
        panda$collections$Iterator* $tmp14 = $tmp12(((panda$collections$Iterable*) p_list));
        panda$collections$Iterator* $tmp10 = $tmp14;
        panda$collections$Iterator* $tmp9 = $tmp10;
        Iter$54$98 = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
        $l15:;
        ITable* $tmp18 = Iter$54$98->$class->itable;
        while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp18 = $tmp18->next;
        }
        $fn20 $tmp19 = $tmp18->methods[0];
        panda$core$Bit $tmp21 = $tmp19(Iter$54$98);
        panda$core$Bit $tmp22 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp21);
        bool $tmp17 = $tmp22.value;
        if (!$tmp17) goto $l16;
        {
            ITable* $tmp25 = Iter$54$98->$class->itable;
            while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp25 = $tmp25->next;
            }
            $fn27 $tmp26 = $tmp25->methods[1];
            panda$core$Object* $tmp28 = $tmp26(Iter$54$98);
            panda$core$Object* $tmp24 = $tmp28;
            v23 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp24)->value;
            panda$core$Panda$unref$panda$core$Object($tmp24);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, v23);
        }
        goto $l15;
        $l16:;
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
    panda$core$Bit $tmp30 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp29 = $tmp30.value;
    if (!$tmp29) goto $l31;
    panda$core$Bit $tmp32 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp29 = $tmp32.value;
    $l31:;
    panda$core$Bit $tmp33 = { $tmp29 };
    PANDA_ASSERT($tmp33.value);
    org$pandalanguage$pandac$parser$Token $tmp34 = self->data[p_index.value];
    return $tmp34;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Bit $tmp36 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp35 = $tmp36.value;
    if (!$tmp35) goto $l37;
    panda$core$Bit $tmp38 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp35 = $tmp38.value;
    $l37:;
    panda$core$Bit $tmp39 = { $tmp35 };
    PANDA_ASSERT($tmp39.value);
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp41;
    panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp40);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp41, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp43 = $tmp41.start.value;
    panda$core$Int64 i42 = { $tmp43 };
    int64_t $tmp45 = $tmp41.end.value;
    int64_t $tmp46 = $tmp41.step.value;
    bool $tmp47 = $tmp41.inclusive.value;
    bool $tmp54 = $tmp46 > 0;
    if ($tmp54) goto $l52; else goto $l53;
    $l52:;
    if ($tmp47) goto $l55; else goto $l56;
    $l55:;
    if ($tmp43 <= $tmp45) goto $l48; else goto $l50;
    $l56:;
    if ($tmp43 < $tmp45) goto $l48; else goto $l50;
    $l53:;
    if ($tmp47) goto $l57; else goto $l58;
    $l57:;
    if ($tmp43 >= $tmp45) goto $l48; else goto $l50;
    $l58:;
    if ($tmp43 > $tmp45) goto $l48; else goto $l50;
    $l48:;
    {
        panda$core$Int64 $tmp60 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i42, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp61 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp60);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i42, $tmp61);
    }
    $l51:;
    if ($tmp54) goto $l63; else goto $l64;
    $l63:;
    int64_t $tmp65 = $tmp45 - i42.value;
    if ($tmp47) goto $l66; else goto $l67;
    $l66:;
    if ((uint64_t) $tmp65 >= $tmp46) goto $l62; else goto $l50;
    $l67:;
    if ((uint64_t) $tmp65 > $tmp46) goto $l62; else goto $l50;
    $l64:;
    int64_t $tmp69 = i42.value - $tmp45;
    if ($tmp47) goto $l70; else goto $l71;
    $l70:;
    if ((uint64_t) $tmp69 >= -$tmp46) goto $l62; else goto $l50;
    $l71:;
    if ((uint64_t) $tmp69 > -$tmp46) goto $l62; else goto $l50;
    $l62:;
    i42.value += $tmp46;
    goto $l48;
    $l50:;
    panda$core$Int64 $tmp73 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp73;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max74;
    panda$core$Int64 count76;
    org$pandalanguage$pandac$parser$Token* result78;
    panda$core$Range$LTpanda$core$Int64$GT $tmp79;
    max74 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp75 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max74, ((panda$core$Int64) { 1 }));
        max74 = $tmp75;
    }
    }
    panda$core$Int64 $tmp77 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max74, p_r.min);
    count76 = $tmp77;
    result78 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(count76.value * 48));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp79, ((panda$core$Int64) { 0 }), count76, ((panda$core$Bit) { false }));
    int64_t $tmp81 = $tmp79.min.value;
    panda$core$Int64 i80 = { $tmp81 };
    int64_t $tmp83 = $tmp79.max.value;
    bool $tmp84 = $tmp79.inclusive.value;
    if ($tmp84) goto $l91; else goto $l92;
    $l91:;
    if ($tmp81 <= $tmp83) goto $l85; else goto $l87;
    $l92:;
    if ($tmp81 < $tmp83) goto $l85; else goto $l87;
    $l85:;
    {
        panda$core$Int64 $tmp93 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i80);
        org$pandalanguage$pandac$parser$Token $tmp94 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp93);
        result78[i80.value] = $tmp94;
    }
    $l88:;
    int64_t $tmp96 = $tmp83 - i80.value;
    if ($tmp84) goto $l97; else goto $l98;
    $l97:;
    if ((uint64_t) $tmp96 >= 1) goto $l95; else goto $l87;
    $l98:;
    if ((uint64_t) $tmp96 > 1) goto $l95; else goto $l87;
    $l95:;
    i80.value += 1;
    goto $l85;
    $l87:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp104 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp104, result78, count76);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp103 = $tmp104;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp102 = $tmp103;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp101 = $tmp102;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
    return $tmp101;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start105;
    panda$core$Int64 end106;
    panda$core$Range$LTpanda$core$Int64$GT $tmp112;
    memset(&start105, 0, sizeof(start105));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start105 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start105 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end106, 0, sizeof(end106));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end106 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp107 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end106 = $tmp107;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end106, ((panda$core$Int64) { 1 }));
            end106 = $tmp108;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp112, start105, end106, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp113 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp112);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp111 = $tmp113;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp110 = $tmp111;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp109 = $tmp110;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
    return $tmp109;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step114;
    panda$core$Int64 current115;
    panda$core$Int64 end119;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result122;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* tmp290153;
    step114 = p_r.step;
    memset(&current115, 0, sizeof(current115));
    if (((panda$core$Bit) { p_r.start.nonnull }).value) {
    {
        current115 = ((panda$core$Int64) p_r.start.value);
    }
    }
    else {
    panda$core$Bit $tmp116 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step114, ((panda$core$Int64) { 0 }));
    if ($tmp116.value) {
    {
        current115 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        panda$core$Int64 $tmp117 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        panda$core$Int64 $tmp118 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp117, ((panda$core$Int64) { 1 }));
        current115 = $tmp118;
    }
    }
    }
    memset(&end119, 0, sizeof(end119));
    if (((panda$core$Bit) { p_r.end.nonnull }).value) {
    {
        end119 = ((panda$core$Int64) p_r.end.value);
    }
    }
    else {
    panda$core$Bit $tmp120 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step114, ((panda$core$Int64) { 0 }));
    if ($tmp120.value) {
    {
        panda$core$Int64 $tmp121 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end119 = $tmp121;
    }
    }
    else {
    {
        end119 = ((panda$core$Int64) { 0 });
    }
    }
    }
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp125 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp125);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp124 = $tmp125;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp123 = $tmp124;
    result122 = $tmp123;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
    panda$core$Bit $tmp126 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
    if ($tmp126.value) {
    {
        $l127:;
        panda$core$Bit $tmp130 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current115, end119);
        bool $tmp129 = $tmp130.value;
        if (!$tmp129) goto $l128;
        {
            org$pandalanguage$pandac$parser$Token $tmp131 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current115);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result122, $tmp131);
            panda$core$Int64 $tmp132 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current115, step114);
            current115 = $tmp132;
        }
        goto $l127;
        $l128:;
    }
    }
    else {
    {
        panda$core$Bit $tmp133 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp133.value);
        $l134:;
        panda$core$Bit $tmp137 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current115, end119);
        bool $tmp136 = $tmp137.value;
        if (!$tmp136) goto $l135;
        {
            org$pandalanguage$pandac$parser$Token $tmp138 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current115);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result122, $tmp138);
            panda$core$Int64 $tmp139 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current115, step114);
            current115 = $tmp139;
        }
        goto $l134;
        $l135:;
    }
    }
    bool $tmp142 = p_r.inclusive.value;
    if ($tmp142) goto $l143;
    $tmp142 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
    $l143:;
    panda$core$Bit $tmp144 = { $tmp142 };
    bool $tmp141 = $tmp144.value;
    if (!$tmp141) goto $l145;
    panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current115, end119);
    $tmp141 = $tmp146.value;
    $l145:;
    panda$core$Bit $tmp147 = { $tmp141 };
    bool $tmp140 = $tmp147.value;
    if (!$tmp140) goto $l148;
    panda$core$Int64 $tmp149 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp150 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end119, $tmp149);
    $tmp140 = $tmp150.value;
    $l148:;
    panda$core$Bit $tmp151 = { $tmp140 };
    if ($tmp151.value) {
    {
        org$pandalanguage$pandac$parser$Token $tmp152 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current115);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result122, $tmp152);
    }
    }
    {
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp154 = result122;
        tmp290153 = $tmp154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result122));
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp155 = tmp290153;
        return $tmp155;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp156 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp156);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp157 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp157;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$205$9163;
    org$pandalanguage$pandac$parser$Token v178;
    ITable* $tmp158 = p_c->$class->itable;
    while ($tmp158->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp158 = $tmp158->next;
    }
    $fn160 $tmp159 = $tmp158->methods[0];
    panda$core$Int64 $tmp161 = $tmp159(p_c);
    panda$core$Int64 $tmp162 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp161);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp162);
    {
        ITable* $tmp166 = ((panda$collections$Iterable*) p_c)->$class->itable;
        while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp166 = $tmp166->next;
        }
        $fn168 $tmp167 = $tmp166->methods[0];
        panda$collections$Iterator* $tmp169 = $tmp167(((panda$collections$Iterable*) p_c));
        panda$collections$Iterator* $tmp165 = $tmp169;
        panda$collections$Iterator* $tmp164 = $tmp165;
        Iter$205$9163 = $tmp164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
        $l170:;
        ITable* $tmp173 = Iter$205$9163->$class->itable;
        while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp173 = $tmp173->next;
        }
        $fn175 $tmp174 = $tmp173->methods[0];
        panda$core$Bit $tmp176 = $tmp174(Iter$205$9163);
        panda$core$Bit $tmp177 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp176);
        bool $tmp172 = $tmp177.value;
        if (!$tmp172) goto $l171;
        {
            ITable* $tmp180 = Iter$205$9163->$class->itable;
            while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp180 = $tmp180->next;
            }
            $fn182 $tmp181 = $tmp180->methods[1];
            panda$core$Object* $tmp183 = $tmp181(Iter$205$9163);
            panda$core$Object* $tmp179 = $tmp183;
            v178 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp179)->value;
            panda$core$Panda$unref$panda$core$Object($tmp179);
            self->data[self->count.value] = v178;
            panda$core$Int64 $tmp184 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
            self->count = $tmp184;
        }
        goto $l170;
        $l171:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$9163));
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity187;
    panda$core$Bit $tmp185 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp185.value);
    panda$core$Bit $tmp186 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp186.value) {
    {
        return;
    }
    }
    oldCapacity187 = self->capacity;
    $l188:;
    panda$core$Bit $tmp191 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp190 = $tmp191.value;
    if (!$tmp190) goto $l189;
    {
        panda$core$Int64 $tmp192 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp192;
    }
    goto $l188;
    $l189:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity187.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $tmp193 = self->count;
    return $tmp193;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp194;
    panda$core$Int64 $tmp195 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp194, p_index, $tmp195, ((panda$core$Bit) { false }));
    int64_t $tmp197 = $tmp194.min.value;
    panda$core$Int64 i196 = { $tmp197 };
    int64_t $tmp199 = $tmp194.max.value;
    bool $tmp200 = $tmp194.inclusive.value;
    if ($tmp200) goto $l207; else goto $l208;
    $l207:;
    if ($tmp197 <= $tmp199) goto $l201; else goto $l203;
    $l208:;
    if ($tmp197 < $tmp199) goto $l201; else goto $l203;
    $l201:;
    {
        panda$core$Int64 $tmp209 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i196, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp210 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp209);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i196, $tmp210);
    }
    $l204:;
    int64_t $tmp212 = $tmp199 - i196.value;
    if ($tmp200) goto $l213; else goto $l214;
    $l213:;
    if ((uint64_t) $tmp212 >= 1) goto $l211; else goto $l203;
    $l214:;
    if ((uint64_t) $tmp212 > 1) goto $l211; else goto $l203;
    $l211:;
    i196.value += 1;
    goto $l201;
    $l203:;
    panda$core$Int64 $tmp217 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp217;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp221 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp221, self);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp220 = $tmp221;
    panda$collections$Iterator* $tmp219 = ((panda$collections$Iterator*) $tmp220);
    panda$collections$Iterator* $tmp218 = $tmp219;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
    return $tmp218;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$String* $tmp226 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(self, &$s225);
    panda$core$String* $tmp224 = $tmp226;
    panda$core$String* $tmp223 = $tmp224;
    panda$core$String* $tmp222 = $tmp223;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
    return $tmp222;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$String* p_separator) {
    panda$core$MutableString* result231;
    panda$core$Range$LTpanda$core$Int64$GT $tmp241;
    panda$core$String* tmp291264;
    panda$core$Bit $tmp227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
    if ($tmp227.value) {
    {
        panda$core$String* $tmp229 = &$s230;
        panda$core$String* $tmp228 = $tmp229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
        return $tmp228;
    }
    }
    panda$core$MutableString* $tmp234 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    org$pandalanguage$pandac$parser$Token $tmp237 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$parser$Token$wrapper* $tmp238;
    $tmp238 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
    $tmp238->value = $tmp237;
    panda$core$Object* $tmp236 = ((panda$core$Object*) $tmp238);
    panda$core$String* $tmp240 = (($fn239) $tmp236->$class->vtable[0])($tmp236);
    panda$core$String* $tmp235 = $tmp240;
    panda$core$MutableString$init$panda$core$String($tmp234, $tmp235);
    panda$core$MutableString* $tmp233 = $tmp234;
    panda$core$MutableString* $tmp232 = $tmp233;
    result231 = $tmp232;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
    panda$core$Panda$unref$panda$core$Object($tmp236);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp241, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
    int64_t $tmp243 = $tmp241.min.value;
    panda$core$Int64 i242 = { $tmp243 };
    int64_t $tmp245 = $tmp241.max.value;
    bool $tmp246 = $tmp241.inclusive.value;
    if ($tmp246) goto $l253; else goto $l254;
    $l253:;
    if ($tmp243 <= $tmp245) goto $l247; else goto $l249;
    $l254:;
    if ($tmp243 < $tmp245) goto $l247; else goto $l249;
    $l247:;
    {
        panda$core$MutableString$append$panda$core$String(result231, p_separator);
        org$pandalanguage$pandac$parser$Token $tmp256 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, i242);
        org$pandalanguage$pandac$parser$Token$wrapper* $tmp257;
        $tmp257 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
        $tmp257->value = $tmp256;
        panda$core$Object* $tmp255 = ((panda$core$Object*) $tmp257);
        panda$core$MutableString$append$panda$core$Object(result231, $tmp255);
        panda$core$Panda$unref$panda$core$Object($tmp255);
    }
    $l250:;
    int64_t $tmp259 = $tmp245 - i242.value;
    if ($tmp246) goto $l260; else goto $l261;
    $l260:;
    if ((uint64_t) $tmp259 >= 1) goto $l258; else goto $l249;
    $l261:;
    if ((uint64_t) $tmp259 > 1) goto $l258; else goto $l249;
    $l258:;
    i242.value += 1;
    goto $l247;
    $l249:;
    {
        panda$core$String* $tmp267 = panda$core$MutableString$finish$R$panda$core$String(result231);
        panda$core$String* $tmp266 = $tmp267;
        panda$core$String* $tmp265 = $tmp266;
        tmp291264 = $tmp265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result231));
        panda$core$String* $tmp268 = tmp291264;
        return $tmp268;
    }
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result269;
    panda$core$Char8 $tmp273;
    panda$core$String* separator274;
    panda$collections$Iterator* Iter$268$9277;
    org$pandalanguage$pandac$parser$Token v292;
    panda$core$Char8 $tmp304;
    panda$core$String* tmp292305;
    panda$core$MutableString* $tmp272 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp272);
    panda$core$MutableString* $tmp271 = $tmp272;
    panda$core$MutableString* $tmp270 = $tmp271;
    result269 = $tmp270;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
    panda$core$Char8$init$panda$core$UInt8(&$tmp273, ((panda$core$UInt8) { 91 }));
    panda$core$MutableString$append$panda$core$Char8(result269, $tmp273);
    panda$core$String* $tmp275 = &$s276;
    separator274 = $tmp275;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp275));
    {
        ITable* $tmp280 = ((panda$collections$Iterable*) self)->$class->itable;
        while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp280 = $tmp280->next;
        }
        $fn282 $tmp281 = $tmp280->methods[0];
        panda$collections$Iterator* $tmp283 = $tmp281(((panda$collections$Iterable*) self));
        panda$collections$Iterator* $tmp279 = $tmp283;
        panda$collections$Iterator* $tmp278 = $tmp279;
        Iter$268$9277 = $tmp278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
        $l284:;
        ITable* $tmp287 = Iter$268$9277->$class->itable;
        while ($tmp287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp287 = $tmp287->next;
        }
        $fn289 $tmp288 = $tmp287->methods[0];
        panda$core$Bit $tmp290 = $tmp288(Iter$268$9277);
        panda$core$Bit $tmp291 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp290);
        bool $tmp286 = $tmp291.value;
        if (!$tmp286) goto $l285;
        {
            ITable* $tmp294 = Iter$268$9277->$class->itable;
            while ($tmp294->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp294 = $tmp294->next;
            }
            $fn296 $tmp295 = $tmp294->methods[1];
            panda$core$Object* $tmp297 = $tmp295(Iter$268$9277);
            panda$core$Object* $tmp293 = $tmp297;
            v292 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp293)->value;
            panda$core$Panda$unref$panda$core$Object($tmp293);
            panda$core$MutableString$append$panda$core$String(result269, separator274);
            {
                panda$core$String* $tmp298 = separator274;
                panda$core$String* $tmp299 = &$s300;
                separator274 = $tmp299;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp299));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
            }
            if (((panda$core$Bit) { true }).value) {
            {
                org$pandalanguage$pandac$parser$Token$wrapper* $tmp302;
                $tmp302 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                $tmp302->value = v292;
                panda$core$Object* $tmp301 = ((panda$core$Object*) $tmp302);
                panda$core$MutableString$append$panda$core$Object(result269, $tmp301);
                panda$core$Panda$unref$panda$core$Object($tmp301);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result269, &$s303);
            }
            }
        }
        goto $l284;
        $l285:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$9277));
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp304, ((panda$core$UInt8) { 93 }));
    panda$core$MutableString$append$panda$core$Char8(result269, $tmp304);
    {
        panda$core$String* $tmp308 = panda$core$MutableString$finish$R$panda$core$String(result269);
        panda$core$String* $tmp307 = $tmp308;
        panda$core$String* $tmp306 = $tmp307;
        tmp292305 = $tmp306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result269));
        }
        panda$core$String* $tmp309 = tmp292305;
        return $tmp309;
    }
}

