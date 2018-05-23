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

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionWriter, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$ListView, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$CollectionView, { } };

static panda$core$String $s1;
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class_type panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$_panda$collections$Collection, { panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$cleanup, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT$shim, panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear} };

typedef panda$core$Int64 (*$fn5)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn30)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn176)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn187)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn194)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn201)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn270)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn277)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    org$pandalanguage$pandac$parser$Token $returnValue42;
    panda$core$Bit $tmp38 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp37 = $tmp38.value;
    if (!$tmp37) goto $l39;
    panda$core$Bit $tmp40 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp37 = $tmp40.value;
    $l39:;
    panda$core$Bit $tmp41 = { $tmp37 };
    PANDA_ASSERT($tmp41.value);
    $returnValue42 = self->data[p_index.value];
    return $returnValue42;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Bit $tmp45 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp44 = $tmp45.value;
    if (!$tmp44) goto $l46;
    panda$core$Bit $tmp47 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, self->count);
    $tmp44 = $tmp47.value;
    $l46:;
    panda$core$Bit $tmp48 = { $tmp44 };
    PANDA_ASSERT($tmp48.value);
    self->data[p_index.value] = p_value;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$insert$panda$core$Int64$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp50;
    panda$core$Int64 $tmp49 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp49);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp50, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp52 = $tmp50.start.value;
    panda$core$Int64 i51 = { $tmp52 };
    int64_t $tmp54 = $tmp50.end.value;
    int64_t $tmp55 = $tmp50.step.value;
    bool $tmp56 = $tmp50.inclusive.value;
    bool $tmp63 = $tmp55 > 0;
    if ($tmp63) goto $l61; else goto $l62;
    $l61:;
    if ($tmp56) goto $l64; else goto $l65;
    $l64:;
    if ($tmp52 <= $tmp54) goto $l57; else goto $l59;
    $l65:;
    if ($tmp52 < $tmp54) goto $l57; else goto $l59;
    $l62:;
    if ($tmp56) goto $l66; else goto $l67;
    $l66:;
    if ($tmp52 >= $tmp54) goto $l57; else goto $l59;
    $l67:;
    if ($tmp52 > $tmp54) goto $l57; else goto $l59;
    $l57:;
    {
        panda$core$Int64 $tmp69 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i51, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp70 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp69);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i51, $tmp70);
    }
    $l60:;
    if ($tmp63) goto $l72; else goto $l73;
    $l72:;
    int64_t $tmp74 = $tmp54 - i51.value;
    if ($tmp56) goto $l75; else goto $l76;
    $l75:;
    if ((uint64_t) $tmp74 >= $tmp55) goto $l71; else goto $l59;
    $l76:;
    if ((uint64_t) $tmp74 > $tmp55) goto $l71; else goto $l59;
    $l73:;
    int64_t $tmp78 = i51.value - $tmp54;
    if ($tmp56) goto $l79; else goto $l80;
    $l79:;
    if ((uint64_t) $tmp78 >= -$tmp55) goto $l71; else goto $l59;
    $l80:;
    if ((uint64_t) $tmp78 > -$tmp55) goto $l71; else goto $l59;
    $l71:;
    i51.value += $tmp55;
    goto $l57;
    $l59:;
    panda$core$Int64 $tmp82 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp82;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, p_index, p_value);
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$GT p_r) {
    panda$core$Int64 max83;
    panda$core$Int64 count85;
    org$pandalanguage$pandac$parser$Token* result87;
    panda$core$Range$LTpanda$core$Int64$GT $tmp88;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue110;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp111;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp112;
    max83 = p_r.max;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64 $tmp84 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max83, ((panda$core$Int64) { 1 }));
        max83 = $tmp84;
    }
    }
    panda$core$Int64 $tmp86 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max83, p_r.min);
    count85 = $tmp86;
    result87 = ((org$pandalanguage$pandac$parser$Token*) pandaZAlloc(count85.value * 48));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp88, ((panda$core$Int64) { 0 }), count85, ((panda$core$Bit) { false }));
    int64_t $tmp90 = $tmp88.min.value;
    panda$core$Int64 i89 = { $tmp90 };
    int64_t $tmp92 = $tmp88.max.value;
    bool $tmp93 = $tmp88.inclusive.value;
    if ($tmp93) goto $l100; else goto $l101;
    $l100:;
    if ($tmp90 <= $tmp92) goto $l94; else goto $l96;
    $l101:;
    if ($tmp90 < $tmp92) goto $l94; else goto $l96;
    $l94:;
    {
        panda$core$Int64 $tmp102 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min, i89);
        org$pandalanguage$pandac$parser$Token $tmp103 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp102);
        result87[i89.value] = $tmp103;
    }
    $l97:;
    int64_t $tmp105 = $tmp92 - i89.value;
    if ($tmp93) goto $l106; else goto $l107;
    $l106:;
    if ((uint64_t) $tmp105 >= 1) goto $l104; else goto $l96;
    $l107:;
    if ((uint64_t) $tmp105 > 1) goto $l104; else goto $l96;
    $l104:;
    i89.value += 1;
    goto $l94;
    $l96:;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp113 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$unsafe$Pointer$LTorg$pandalanguage$pandac$parser$Token$GT$panda$core$Int64($tmp113, result87, count85);
    $tmp112 = $tmp113;
    $tmp111 = $tmp112;
    $returnValue110 = $tmp111;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp111));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
    return $returnValue110;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r) {
    panda$core$Int64 start115;
    panda$core$Int64 end116;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue119;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp120;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp121;
    panda$core$Range$LTpanda$core$Int64$GT $tmp122;
    memset(&start115, 0, sizeof(start115));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        start115 = ((panda$core$Int64) p_r.min.value);
    }
    }
    else {
    {
        start115 = ((panda$core$Int64) { 0 });
    }
    }
    memset(&end116, 0, sizeof(end116));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        end116 = ((panda$core$Int64) p_r.max.value);
    }
    }
    else {
    {
        panda$core$Int64 $tmp117 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        end116 = $tmp117;
        if (p_r.inclusive.value) {
        {
            panda$core$Int64 $tmp118 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(end116, ((panda$core$Int64) { 1 }));
            end116 = $tmp118;
        }
        }
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp122, start115, end116, p_r.inclusive);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp123 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(self, $tmp122);
    $tmp121 = $tmp123;
    $tmp120 = $tmp121;
    $returnValue119 = $tmp120;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
    return $returnValue119;
}
panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT p_r) {
    panda$core$Int64 step128;
    panda$core$Int64 current129;
    panda$core$Int64 end133;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* result136 = NULL;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp137;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp138;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $returnValue167;
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp168;
    int $tmp127;
    {
        step128 = p_r.step;
        memset(&current129, 0, sizeof(current129));
        if (((panda$core$Bit) { p_r.start.nonnull }).value) {
        {
            current129 = ((panda$core$Int64) p_r.start.value);
        }
        }
        else {
        panda$core$Bit $tmp130 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step128, ((panda$core$Int64) { 0 }));
        if ($tmp130.value) {
        {
            current129 = ((panda$core$Int64) { 0 });
        }
        }
        else {
        {
            panda$core$Int64 $tmp131 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            panda$core$Int64 $tmp132 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp131, ((panda$core$Int64) { 1 }));
            current129 = $tmp132;
        }
        }
        }
        memset(&end133, 0, sizeof(end133));
        if (((panda$core$Bit) { p_r.end.nonnull }).value) {
        {
            end133 = ((panda$core$Int64) p_r.end.value);
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(step128, ((panda$core$Int64) { 0 }));
        if ($tmp134.value) {
        {
            panda$core$Int64 $tmp135 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
            end133 = $tmp135;
        }
        }
        else {
        {
            end133 = ((panda$core$Int64) { 0 });
        }
        }
        }
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp139 = (panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$class);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$init($tmp139);
        $tmp138 = $tmp139;
        $tmp137 = $tmp138;
        result136 = $tmp137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
        panda$core$Bit $tmp140 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
        if ($tmp140.value) {
        {
            $l141:;
            panda$core$Bit $tmp144 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(current129, end133);
            bool $tmp143 = $tmp144.value;
            if (!$tmp143) goto $l142;
            {
                org$pandalanguage$pandac$parser$Token $tmp145 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current129);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result136, $tmp145);
                panda$core$Int64 $tmp146 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(current129, step128);
                current129 = $tmp146;
            }
            goto $l141;
            $l142:;
        }
        }
        else {
        {
            panda$core$Bit $tmp147 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.step, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp147.value);
            $l148:;
            panda$core$Bit $tmp151 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(current129, end133);
            bool $tmp150 = $tmp151.value;
            if (!$tmp150) goto $l149;
            {
                org$pandalanguage$pandac$parser$Token $tmp152 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current129);
                panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result136, $tmp152);
                panda$core$Int64 $tmp153 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(current129, step128);
                current129 = $tmp153;
            }
            goto $l148;
            $l149:;
        }
        }
        bool $tmp156 = p_r.inclusive.value;
        if ($tmp156) goto $l157;
        $tmp156 = ((panda$core$Bit) { !p_r.end.nonnull }).value;
        $l157:;
        panda$core$Bit $tmp158 = { $tmp156 };
        bool $tmp155 = $tmp158.value;
        if (!$tmp155) goto $l159;
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(current129, end133);
        $tmp155 = $tmp160.value;
        $l159:;
        panda$core$Bit $tmp161 = { $tmp155 };
        bool $tmp154 = $tmp161.value;
        if (!$tmp154) goto $l162;
        panda$core$Int64 $tmp163 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(self);
        panda$core$Bit $tmp164 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(end133, $tmp163);
        $tmp154 = $tmp164.value;
        $l162:;
        panda$core$Bit $tmp165 = { $tmp154 };
        if ($tmp165.value) {
        {
            org$pandalanguage$pandac$parser$Token $tmp166 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, current129);
            panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(result136, $tmp166);
        }
        }
        $tmp168 = result136;
        $returnValue167 = $tmp168;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp168));
        $tmp127 = 0;
        goto $l125;
        $l169:;
        return $returnValue167;
    }
    $l125:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result136));
    result136 = NULL;
    switch ($tmp127) {
        case 0: goto $l169;
    }
    $l171:;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$add$org$pandalanguage$pandac$parser$Token(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, org$pandalanguage$pandac$parser$Token p_value) {
    panda$core$Int64 $tmp172 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp172);
    self->data[self->count.value] = p_value;
    panda$core$Int64 $tmp173 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp173;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$addAll$panda$collections$CollectionView$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$205$9182 = NULL;
    panda$collections$Iterator* $tmp183;
    panda$collections$Iterator* $tmp184;
    org$pandalanguage$pandac$parser$Token v197;
    panda$core$Object* $tmp198;
    ITable* $tmp174 = p_c->$class->itable;
    while ($tmp174->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp174 = $tmp174->next;
    }
    $fn176 $tmp175 = $tmp174->methods[0];
    panda$core$Int64 $tmp177 = $tmp175(p_c);
    panda$core$Int64 $tmp178 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp177);
    panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(self, $tmp178);
    {
        int $tmp181;
        {
            ITable* $tmp185 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp185->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp185 = $tmp185->next;
            }
            $fn187 $tmp186 = $tmp185->methods[0];
            panda$collections$Iterator* $tmp188 = $tmp186(((panda$collections$Iterable*) p_c));
            $tmp184 = $tmp188;
            $tmp183 = $tmp184;
            Iter$205$9182 = $tmp183;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
            $l189:;
            ITable* $tmp192 = Iter$205$9182->$class->itable;
            while ($tmp192->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp192 = $tmp192->next;
            }
            $fn194 $tmp193 = $tmp192->methods[0];
            panda$core$Bit $tmp195 = $tmp193(Iter$205$9182);
            panda$core$Bit $tmp196 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp195);
            bool $tmp191 = $tmp196.value;
            if (!$tmp191) goto $l190;
            {
                ITable* $tmp199 = Iter$205$9182->$class->itable;
                while ($tmp199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp199 = $tmp199->next;
                }
                $fn201 $tmp200 = $tmp199->methods[1];
                panda$core$Object* $tmp202 = $tmp200(Iter$205$9182);
                $tmp198 = $tmp202;
                v197 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp198)->value;
                panda$core$Panda$unref$panda$core$Object($tmp198);
                self->data[self->count.value] = v197;
                panda$core$Int64 $tmp203 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
                self->count = $tmp203;
            }
            goto $l189;
            $l190:;
        }
        $tmp181 = -1;
        goto $l179;
        $l179:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$205$9182));
        Iter$205$9182 = NULL;
        switch ($tmp181) {
            case -1: goto $l204;
        }
        $l204:;
    }
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$ensureCapacity$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity207;
    panda$core$Bit $tmp205 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp205.value);
    panda$core$Bit $tmp206 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp206.value) {
    {
        return;
    }
    }
    oldCapacity207 = self->capacity;
    $l208:;
    panda$core$Bit $tmp211 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp210 = $tmp211.value;
    if (!$tmp210) goto $l209;
    {
        panda$core$Int64 $tmp212 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp212;
    }
    goto $l208;
    $l209:;
    self->data = ((org$pandalanguage$pandac$parser$Token*) pandaRealloc(self->data, oldCapacity207.value * 48, self->capacity.value * 48));
}
panda$core$Int64 panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$get_count$R$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$Int64 $returnValue213;
    $returnValue213 = self->count;
    return $returnValue213;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$removeIndex$panda$core$Int64(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp215;
    panda$core$Int64 $tmp216 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp215, p_index, $tmp216, ((panda$core$Bit) { false }));
    int64_t $tmp218 = $tmp215.min.value;
    panda$core$Int64 i217 = { $tmp218 };
    int64_t $tmp220 = $tmp215.max.value;
    bool $tmp221 = $tmp215.inclusive.value;
    if ($tmp221) goto $l228; else goto $l229;
    $l228:;
    if ($tmp218 <= $tmp220) goto $l222; else goto $l224;
    $l229:;
    if ($tmp218 < $tmp220) goto $l222; else goto $l224;
    $l222:;
    {
        panda$core$Int64 $tmp230 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i217, ((panda$core$Int64) { 1 }));
        org$pandalanguage$pandac$parser$Token $tmp231 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, $tmp230);
        panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDXEQ$panda$core$Int64$org$pandalanguage$pandac$parser$Token(self, i217, $tmp231);
    }
    $l225:;
    int64_t $tmp233 = $tmp220 - i217.value;
    if ($tmp221) goto $l234; else goto $l235;
    $l234:;
    if ((uint64_t) $tmp233 >= 1) goto $l232; else goto $l224;
    $l235:;
    if ((uint64_t) $tmp233 > 1) goto $l232; else goto $l224;
    $l232:;
    i217.value += 1;
    goto $l222;
    $l224:;
    panda$core$Int64 $tmp238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp238;
}
panda$collections$Iterator* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$iterator$R$panda$collections$Iterator$LTorg$pandalanguage$pandac$parser$Token$GT(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$collections$Iterator* $returnValue239;
    panda$collections$Iterator* $tmp240;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp241;
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT* $tmp242 = (panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$class);
    panda$collections$SpecializedArrayIterator$LTorg$pandalanguage$pandac$parser$Token$GT$init$panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT($tmp242, self);
    $tmp241 = $tmp242;
    $tmp240 = ((panda$collections$Iterator*) $tmp241);
    $returnValue239 = $tmp240;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp241));
    return $returnValue239;
}
void panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$clear(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    self->count = ((panda$core$Int64) { 0 });
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result247 = NULL;
    panda$core$MutableString* $tmp248;
    panda$core$MutableString* $tmp249;
    panda$core$Char8 $tmp251;
    panda$core$String* separator252 = NULL;
    panda$core$String* $tmp253;
    panda$collections$Iterator* Iter$251$9258 = NULL;
    panda$collections$Iterator* $tmp259;
    panda$collections$Iterator* $tmp260;
    org$pandalanguage$pandac$parser$Token v273;
    panda$core$Object* $tmp274;
    panda$core$String* $tmp279;
    panda$core$String* $tmp280;
    panda$core$Object* $tmp282;
    panda$core$Char8 $tmp286;
    panda$core$String* $returnValue287;
    panda$core$String* $tmp288;
    panda$core$String* $tmp289;
    int $tmp246;
    {
        panda$core$MutableString* $tmp250 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp250);
        $tmp249 = $tmp250;
        $tmp248 = $tmp249;
        result247 = $tmp248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp249));
        panda$core$Char8$init$panda$core$UInt8(&$tmp251, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result247, $tmp251);
        $tmp253 = &$s254;
        separator252 = $tmp253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
        {
            int $tmp257;
            {
                ITable* $tmp261 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp261 = $tmp261->next;
                }
                $fn263 $tmp262 = $tmp261->methods[0];
                panda$collections$Iterator* $tmp264 = $tmp262(((panda$collections$Iterable*) self));
                $tmp260 = $tmp264;
                $tmp259 = $tmp260;
                Iter$251$9258 = $tmp259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260));
                $l265:;
                ITable* $tmp268 = Iter$251$9258->$class->itable;
                while ($tmp268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp268 = $tmp268->next;
                }
                $fn270 $tmp269 = $tmp268->methods[0];
                panda$core$Bit $tmp271 = $tmp269(Iter$251$9258);
                panda$core$Bit $tmp272 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp271);
                bool $tmp267 = $tmp272.value;
                if (!$tmp267) goto $l266;
                {
                    ITable* $tmp275 = Iter$251$9258->$class->itable;
                    while ($tmp275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp275 = $tmp275->next;
                    }
                    $fn277 $tmp276 = $tmp275->methods[1];
                    panda$core$Object* $tmp278 = $tmp276(Iter$251$9258);
                    $tmp274 = $tmp278;
                    v273 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp274)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp274);
                    panda$core$MutableString$append$panda$core$String(result247, separator252);
                    {
                        $tmp279 = separator252;
                        $tmp280 = &$s281;
                        separator252 = $tmp280;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp280));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp279));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$wrapper* $tmp283;
                        $tmp283 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                        $tmp283->value = v273;
                        $tmp282 = ((panda$core$Object*) $tmp283);
                        panda$core$MutableString$append$panda$core$Object(result247, $tmp282);
                        panda$core$Panda$unref$panda$core$Object($tmp282);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result247, &$s284);
                    }
                    }
                }
                goto $l265;
                $l266:;
            }
            $tmp257 = -1;
            goto $l255;
            $l255:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$251$9258));
            Iter$251$9258 = NULL;
            switch ($tmp257) {
                case -1: goto $l285;
            }
            $l285:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp286, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result247, $tmp286);
        panda$core$String* $tmp290 = panda$core$MutableString$finish$R$panda$core$String(result247);
        $tmp289 = $tmp290;
        $tmp288 = $tmp289;
        $returnValue287 = $tmp288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
        $tmp246 = 0;
        goto $l244;
        $l291:;
        return $returnValue287;
    }
    $l244:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result247));
    result247 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator252));
    separator252 = NULL;
    switch ($tmp246) {
        case 0: goto $l291;
    }
    $l293:;
}

