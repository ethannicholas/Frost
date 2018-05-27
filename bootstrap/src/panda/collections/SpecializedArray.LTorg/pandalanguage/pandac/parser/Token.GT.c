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

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView, { } };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

typedef panda$core$Int64 (*$fn5)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn30)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn188)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn199)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn206)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn213)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn281)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn288)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn295)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    panda$collections$Iterator* Iter$54$911 = NULL;
    panda$collections$Iterator* $tmp12;
    panda$collections$Iterator* $tmp13;
    org$pandalanguage$pandac$parser$Token v26;
    panda$core$Object* $tmp27;
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
        int $tmp10;
        {
            ITable* $tmp14 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp14 = $tmp14->next;
            }
            $fn16 $tmp15 = $tmp14->methods[0];
            panda$collections$Iterator* $tmp17 = $tmp15(((panda$collections$Iterable*) p_list));
            $tmp13 = $tmp17;
            $tmp12 = $tmp13;
            Iter$54$911 = $tmp12;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
            $l18:;
            ITable* $tmp21 = Iter$54$911->$class->itable;
            while ($tmp21->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp21 = $tmp21->next;
            }
            $fn23 $tmp22 = $tmp21->methods[0];
            panda$core$Bit $tmp24 = $tmp22(Iter$54$911);
            panda$core$Bit $tmp25 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp24);
            bool $tmp20 = $tmp25.value;
            if (!$tmp20) goto $l19;
            {
                ITable* $tmp28 = Iter$54$911->$class->itable;
                while ($tmp28->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp28 = $tmp28->next;
                }
                $fn30 $tmp29 = $tmp28->methods[1];
                panda$core$Object* $tmp31 = $tmp29(Iter$54$911);
                $tmp27 = $tmp31;
                v26 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp27)->value;
                panda$core$Panda$unref$panda$core$Object($tmp27);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(self, v26);
            }
            goto $l18;
            $l19:;
        }
        $tmp10 = -1;
        goto $l8;
        $l8:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$54$911));
        Iter$54$911 = NULL;
        switch ($tmp10) {
            case -1: goto $l32;
        }
        $l32:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token* p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    int $tmp35;
    {
        pandaFree(self->data);
    }
    $tmp35 = -1;
    goto $l33;
    $l33:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp35) {
        case -1: goto $l36;
    }
    $l36:;
}
org$pandalanguage$pandac$parser$Token panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    org$pandalanguage$pandac$parser$Token $returnValue48;
    panda$core$Bit $tmp38 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp37 = $tmp38.value;
    if (!$tmp37) goto $l39;
    panda$core$Int64 $tmp40 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp41 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp40);
    $tmp37 = $tmp41.value;
    $l39:;
    panda$core$Bit $tmp42 = { $tmp37 };
    PANDA_ASSERT($tmp42.value);
    panda$core$Bit $tmp44 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp43 = $tmp44.value;
    if (!$tmp43) goto $l45;
    panda$core$Bit $tmp46 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp43 = $tmp46.value;
    $l45:;
    panda$core$Bit $tmp47 = { $tmp43 };
    PANDA_ASSERT($tmp47.value);
    $returnValue48 = self->data[p_index.value];
    return $returnValue48;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Bit $tmp51 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp50 = $tmp51.value;
    if (!$tmp50) goto $l52;
    panda$core$Int64 $tmp53 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp54 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp53);
    $tmp50 = $tmp54.value;
    $l52:;
    panda$core$Bit $tmp55 = { $tmp50 };
    PANDA_ASSERT($tmp55.value);
    panda$core$Bit $tmp57 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp56 = $tmp57.value;
    if (!$tmp56) goto $l58;
    panda$core$Bit $tmp59 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp56 = $tmp59.value;
    $l58:;
    panda$core$Bit $tmp60 = { $tmp56 };
    PANDA_ASSERT($tmp60.value);
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp62;
    panda$core$Int64 $tmp61 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp61);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp62, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp64 = $tmp62.start.value;
    panda$core$Int64 i63 = { $tmp64 };
    int64_t $tmp66 = $tmp62.end.value;
    int64_t $tmp67 = $tmp62.step.value;
    bool $tmp68 = $tmp62.inclusive.value;
    bool $tmp75 = $tmp67 > 0;
    if ($tmp75) goto $l73; else goto $l74;
    $l73:;
    if ($tmp68) goto $l76; else goto $l77;
    $l76:;
    if ($tmp64 <= $tmp66) goto $l69; else goto $l71;
    $l77:;
    if ($tmp64 < $tmp66) goto $l69; else goto $l71;
    $l74:;
    if ($tmp68) goto $l78; else goto $l79;
    $l78:;
    if ($tmp64 >= $tmp66) goto $l69; else goto $l71;
    $l79:;
    if ($tmp64 > $tmp66) goto $l69; else goto $l71;
    $l69:;
    {
        panda$core$Int64 $tmp81 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i63, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp82 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp81);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i63, $tmp82);
    }
    $l72:;
    if ($tmp75) goto $l84; else goto $l85;
    $l84:;
    int64_t $tmp86 = $tmp66 - i63.value;
    if ($tmp68) goto $l87; else goto $l88;
    $l87:;
    if ((uint64_t) $tmp86 >= $tmp67) goto $l83; else goto $l71;
    $l88:;
    if ((uint64_t) $tmp86 > $tmp67) goto $l83; else goto $l71;
    $l85:;
    int64_t $tmp90 = i63.value - $tmp66;
    if ($tmp68) goto $l91; else goto $l92;
    $l91:;
    if ((uint64_t) $tmp90 >= -$tmp67) goto $l83; else goto $l71;
    $l92:;
    if ((uint64_t) $tmp90 > -$tmp67) goto $l83; else goto $l71;
    $l83:;
    i63.value += $tmp67;
    goto $l69;
    $l71:;
    panda$core$Int64 $tmp94 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp94;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max95;
    panda$core$Int64 count97;
    org$pandalanguage$pandac$parser$Token* result99;
    panda$core$Range$LTpanda$core$Int64$GT $tmp100;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue122;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp123;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp124;
    max95 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp96 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max95, ((panda$core$Int64) { 1 }));
        max95 = $tmp96;
    }
    }
    panda$core$Int64 $tmp98 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max95, p_r.min);
    count97 = $tmp98;
    result99 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(count97.value * 48));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp100, ((panda$core$Int64) { 0 }), count97, ((panda$core$Bit) { false }));
    int64_t $tmp102 = $tmp100.min.value;
    panda$core$Int64 i101 = { $tmp102 };
    int64_t $tmp104 = $tmp100.max.value;
    bool $tmp105 = $tmp100.inclusive.value;
    if ($tmp105) goto $l112; else goto $l113;
    $l112:;
    if ($tmp102 <= $tmp104) goto $l106; else goto $l108;
    $l113:;
    if ($tmp102 < $tmp104) goto $l106; else goto $l108;
    $l106:;
    {
        panda$core$Int64 $tmp114 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i101);
        org$pandalanguage$pandac$parser$Token $tmp115 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp114);
        result99[i101.value] = $tmp115;
    }
    $l109:;
    int64_t $tmp117 = $tmp104 - i101.value;
    if ($tmp105) goto $l118; else goto $l119;
    $l118:;
    if ((uint64_t) $tmp117 >= 1) goto $l116; else goto $l108;
    $l119:;
    if ((uint64_t) $tmp117 > 1) goto $l116; else goto $l108;
    $l116:;
    i101.value += 1;
    goto $l106;
    $l108:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp125 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp125, result99, count97);
    $tmp124 = $tmp125;
    $tmp123 = $tmp124;
    $returnValue122 = $tmp123;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
    return $returnValue122;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start127;
    panda$core$Int64 end128;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue131;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp132;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp133;
    panda$core$Range$LTpanda$core$Int64$GT $tmp134;
    memset(&start127, 0, sizeof(start127));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start127 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start127 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end128, 0, sizeof(end128));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end128 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp129 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end128 = $tmp129;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp130 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end128, ((panda$core$Int64) { 1 }));
            end128 = $tmp130;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp134, start127, end128, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp135 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp134);
    $tmp133 = $tmp135;
    $tmp132 = $tmp133;
    $returnValue131 = $tmp132;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp132));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
    return $returnValue131;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step140;
    panda$core$Int64 current141;
    panda$core$Int64 end145;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result148 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp149;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp150;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue179;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp180;
    int $tmp139;
    {
        step140 = p_r.step;
        memset(&current141, 0, sizeof(current141));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current141 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp142 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step140, ((panda$core$Int64) { 0 }));
        if ($tmp142.value) {
        {
            current141 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp143 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp143, ((panda$core$Int64) { 1 }));
            current141 = $tmp144;
        }
        }
        }
        memset(&end145, 0, sizeof(end145));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end145 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp146 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step140, ((panda$core$Int64) { 0 }));
        if ($tmp146.value) {
        {
            panda$core$Int64 $tmp147 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            end145 = $tmp147;
        }
        }
        else {
        {
            end145 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp151 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp151);
        $tmp150 = $tmp151;
        $tmp149 = $tmp150;
        result148 = $tmp149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
        panda$core$Bit $tmp152 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp152.value) {
        {
            $l153:;
            panda$core$Bit $tmp156 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current141, end145);
            bool $tmp155 = $tmp156.value;
            if (!$tmp155) goto $l154;
            {
                org$pandalanguage$pandac$parser$Token $tmp157 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current141);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result148, $tmp157);
                panda$core$Int64 $tmp158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current141, step140);
                current141 = $tmp158;
            }
            goto $l153;
            $l154:;
        }
        }
        else {
        {
            panda$core$Bit $tmp159 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp159.value);
            $l160:;
            panda$core$Bit $tmp163 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current141, end145);
            bool $tmp162 = $tmp163.value;
            if (!$tmp162) goto $l161;
            {
                org$pandalanguage$pandac$parser$Token $tmp164 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current141);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result148, $tmp164);
                panda$core$Int64 $tmp165 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current141, step140);
                current141 = $tmp165;
            }
            goto $l160;
            $l161:;
        }
        }
        bool $tmp168 = p_r.inclusive.value;
        if ($tmp168) goto $l169;
        $tmp168 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l169:;
        panda$core$Bit $tmp170 = { $tmp168 };
        bool $tmp167 = $tmp170.value;
        if (!$tmp167) goto $l171;
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current141, end145);
        $tmp167 = $tmp172.value;
        $l171:;
        panda$core$Bit $tmp173 = { $tmp167 };
        bool $tmp166 = $tmp173.value;
        if (!$tmp166) goto $l174;
        panda$core$Int64 $tmp175 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp176 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end145, $tmp175);
        $tmp166 = $tmp176.value;
        $l174:;
        panda$core$Bit $tmp177 = { $tmp166 };
        if ($tmp177.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp178 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current141);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result148, $tmp178);
        }
        }
        $tmp180 = result148;
        $returnValue179 = $tmp180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
        $tmp139 = 0;
        goto $l137;
        $l181:;
        return $returnValue179;
    }
    $l137:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result148));
    result148 = NULL;
    switch ($tmp139) {
        case 0: goto $l181;
    }
    $l183:;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp184 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp184);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp185 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp185;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$205$9194 = NULL;
    panda$collections$Iterator* $tmp195;
    panda$collections$Iterator* $tmp196;
    org$pandalanguage$pandac$parser$Token v209;
    panda$core$Object* $tmp210;
    ITable* $tmp186 = p_c->$class->itable;
    while ($tmp186->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp186 = $tmp186->next;
    }
    $fn188 $tmp187 = $tmp186->methods[0];
    panda$core$Int64 $tmp189 = $tmp187(p_c);
    panda$core$Int64 $tmp190 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp189);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp190);
    {
        int $tmp193;
        {
            ITable* $tmp197 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp197->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp197 = $tmp197->next;
            }
            $fn199 $tmp198 = $tmp197->methods[0];
            panda$collections$Iterator* $tmp200 = $tmp198(((panda$collections$Iterable*) p_c));
            $tmp196 = $tmp200;
            $tmp195 = $tmp196;
            Iter$205$9194 = $tmp195;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
            $l201:;
            ITable* $tmp204 = Iter$205$9194->$class->itable;
            while ($tmp204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp204 = $tmp204->next;
            }
            $fn206 $tmp205 = $tmp204->methods[0];
            panda$core$Bit $tmp207 = $tmp205(Iter$205$9194);
            panda$core$Bit $tmp208 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp207);
            bool $tmp203 = $tmp208.value;
            if (!$tmp203) goto $l202;
            {
                ITable* $tmp211 = Iter$205$9194->$class->itable;
                while ($tmp211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp211 = $tmp211->next;
                }
                $fn213 $tmp212 = $tmp211->methods[1];
                panda$core$Object* $tmp214 = $tmp212(Iter$205$9194);
                $tmp210 = $tmp214;
                v209 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp210)->value;
                panda$core$Panda$unref$panda$core$Object($tmp210);
                self->data[self->count.value] = v209;
                panda$core$Int64 $tmp215 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
                self->count = $tmp215;
            }
            goto $l201;
            $l202:;
        }
        $tmp193 = -1;
        goto $l191;
        $l191:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$9194));
        Iter$205$9194 = NULL;
        switch ($tmp193) {
            case -1: goto $l216;
        }
        $l216:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity219;
    panda$core$Bit $tmp217 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp217.value);
    panda$core$Bit $tmp218 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp218.value) {
    {
        return;
    }
    }
    oldCapacity219 = self->capacity;
    $l220:;
    panda$core$Bit $tmp223 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp222 = $tmp223.value;
    if (!$tmp222) goto $l221;
    {
        panda$core$Int64 $tmp224 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp224;
    }
    goto $l220;
    $l221:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity219.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $returnValue225;
    $returnValue225 = self->count;
    return $returnValue225;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp233;
    panda$core$Bit $tmp228 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp227 = $tmp228.value;
    if (!$tmp227) goto $l229;
    panda$core$Int64 $tmp230 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp231 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp230);
    $tmp227 = $tmp231.value;
    $l229:;
    panda$core$Bit $tmp232 = { $tmp227 };
    PANDA_ASSERT($tmp232.value);
    panda$core$Int64 $tmp234 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp233, p_index, $tmp234, ((panda$core$Bit) { false }));
    int64_t $tmp236 = $tmp233.min.value;
    panda$core$Int64 i235 = { $tmp236 };
    int64_t $tmp238 = $tmp233.max.value;
    bool $tmp239 = $tmp233.inclusive.value;
    if ($tmp239) goto $l246; else goto $l247;
    $l246:;
    if ($tmp236 <= $tmp238) goto $l240; else goto $l242;
    $l247:;
    if ($tmp236 < $tmp238) goto $l240; else goto $l242;
    $l240:;
    {
        panda$core$Int64 $tmp248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i235, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp249 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp248);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i235, $tmp249);
    }
    $l243:;
    int64_t $tmp251 = $tmp238 - i235.value;
    if ($tmp239) goto $l252; else goto $l253;
    $l252:;
    if ((uint64_t) $tmp251 >= 1) goto $l250; else goto $l242;
    $l253:;
    if ((uint64_t) $tmp251 > 1) goto $l250; else goto $l242;
    $l250:;
    i235.value += 1;
    goto $l240;
    $l242:;
    panda$core$Int64 $tmp256 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp256;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$Iterator* $returnValue257;
    panda$collections$Iterator* $tmp258;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp259;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp260 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp260, self);
    $tmp259 = $tmp260;
    $tmp258 = ((panda$collections$Iterator*) $tmp259);
    $returnValue257 = $tmp258;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
    return $returnValue257;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result265 = NULL;
    panda$core$MutableString* $tmp266;
    panda$core$MutableString* $tmp267;
    panda$core$Char8 $tmp269;
    panda$core$String* separator270 = NULL;
    panda$core$String* $tmp271;
    panda$collections$Iterator* Iter$251$9276 = NULL;
    panda$collections$Iterator* $tmp277;
    panda$collections$Iterator* $tmp278;
    org$pandalanguage$pandac$parser$Token v291;
    panda$core$Object* $tmp292;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$core$Object* $tmp300;
    panda$core$Char8 $tmp304;
    panda$core$String* $returnValue305;
    panda$core$String* $tmp306;
    panda$core$String* $tmp307;
    int $tmp264;
    {
        panda$core$MutableString* $tmp268 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp268);
        $tmp267 = $tmp268;
        $tmp266 = $tmp267;
        result265 = $tmp266;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
        panda$core$Char8$init$panda$core$UInt8(&$tmp269, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result265, $tmp269);
        $tmp271 = &$s272;
        separator270 = $tmp271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
        {
            int $tmp275;
            {
                ITable* $tmp279 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp279->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp279 = $tmp279->next;
                }
                $fn281 $tmp280 = $tmp279->methods[0];
                panda$collections$Iterator* $tmp282 = $tmp280(((panda$collections$Iterable*) self));
                $tmp278 = $tmp282;
                $tmp277 = $tmp278;
                Iter$251$9276 = $tmp277;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
                $l283:;
                ITable* $tmp286 = Iter$251$9276->$class->itable;
                while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp286 = $tmp286->next;
                }
                $fn288 $tmp287 = $tmp286->methods[0];
                panda$core$Bit $tmp289 = $tmp287(Iter$251$9276);
                panda$core$Bit $tmp290 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp289);
                bool $tmp285 = $tmp290.value;
                if (!$tmp285) goto $l284;
                {
                    ITable* $tmp293 = Iter$251$9276->$class->itable;
                    while ($tmp293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp293 = $tmp293->next;
                    }
                    $fn295 $tmp294 = $tmp293->methods[1];
                    panda$core$Object* $tmp296 = $tmp294(Iter$251$9276);
                    $tmp292 = $tmp296;
                    v291 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp292)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp292);
                    panda$core$MutableString$append$panda$core$String(result265, separator270);
                    {
                        $tmp297 = separator270;
                        $tmp298 = &$s299;
                        separator270 = $tmp298;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$wrapper* $tmp301;
                        $tmp301 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                        $tmp301->value = v291;
                        $tmp300 = ((panda$core$Object*) $tmp301);
                        panda$core$MutableString$append$panda$core$Object(result265, $tmp300);
                        panda$core$Panda$unref$panda$core$Object($tmp300);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result265, &$s302);
                    }
                    }
                }
                goto $l283;
                $l284:;
            }
            $tmp275 = -1;
            goto $l273;
            $l273:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$9276));
            Iter$251$9276 = NULL;
            switch ($tmp275) {
                case -1: goto $l303;
            }
            $l303:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp304, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result265, $tmp304);
        panda$core$String* $tmp308 = panda$core$MutableString$finish$R$panda$core$String(result265);
        $tmp307 = $tmp308;
        $tmp306 = $tmp307;
        $returnValue305 = $tmp306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
        $tmp264 = 0;
        goto $l262;
        $l309:;
        return $returnValue305;
    }
    $l262:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result265));
    result265 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator270));
    separator270 = NULL;
    switch ($tmp264) {
        case 0: goto $l309;
    }
    $l311:;
}

