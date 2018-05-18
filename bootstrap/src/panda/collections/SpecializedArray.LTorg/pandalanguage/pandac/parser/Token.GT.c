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
typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn23)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn30)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn176)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn187)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn194)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn201)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn267)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn317)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn324)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn331)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x70\x65\x63\x69\x61\x6c\x69\x7a\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x70\x61\x72\x73\x65\x72\x2e\x54\x6f\x6b\x65\x6e\x3e", 73, 7064294459071451611, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$String* $returnValue244;
    panda$core$String* $tmp245;
    panda$core$String* $tmp246;
    panda$core$String* $tmp248 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(self, &$s247);
    $tmp246 = $tmp248;
    $tmp245 = $tmp246;
    $returnValue244 = $tmp245;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
    return $returnValue244;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$join$panda$core$String$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self, panda$core$String* p_separator) {
    panda$core$String* $returnValue254;
    panda$core$String* $tmp255;
    panda$core$MutableString* result259 = NULL;
    panda$core$MutableString* $tmp260;
    panda$core$MutableString* $tmp261;
    panda$core$String* $tmp263;
    panda$core$Object* $tmp264;
    panda$core$Range$LTpanda$core$Int64$GT $tmp269;
    panda$core$Object* $tmp283;
    panda$core$String* $tmp292;
    panda$core$String* $tmp293;
    int $tmp252;
    {
        panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->count, ((panda$core$Int64) { 0 }));
        if ($tmp253.value) {
        {
            $tmp255 = &$s256;
            $returnValue254 = $tmp255;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
            $tmp252 = 0;
            goto $l250;
            $l257:;
            return $returnValue254;
        }
        }
        panda$core$MutableString* $tmp262 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        org$pandalanguage$pandac$parser$Token $tmp265 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, ((panda$core$Int64) { 0 }));
        org$pandalanguage$pandac$parser$Token$wrapper* $tmp266;
        $tmp266 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
        $tmp266->value = $tmp265;
        $tmp264 = ((panda$core$Object*) $tmp266);
        panda$core$String* $tmp268 = (($fn267) $tmp264->$class->vtable[0])($tmp264);
        $tmp263 = $tmp268;
        panda$core$MutableString$init$panda$core$String($tmp262, $tmp263);
        $tmp261 = $tmp262;
        $tmp260 = $tmp261;
        result259 = $tmp260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
        panda$core$Panda$unref$panda$core$Object($tmp264);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp269, ((panda$core$Int64) { 1 }), self->count, ((panda$core$Bit) { false }));
        int64_t $tmp271 = $tmp269.min.value;
        panda$core$Int64 i270 = { $tmp271 };
        int64_t $tmp273 = $tmp269.max.value;
        bool $tmp274 = $tmp269.inclusive.value;
        if ($tmp274) goto $l281; else goto $l282;
        $l281:;
        if ($tmp271 <= $tmp273) goto $l275; else goto $l277;
        $l282:;
        if ($tmp271 < $tmp273) goto $l275; else goto $l277;
        $l275:;
        {
            panda$core$MutableString$append$panda$core$String(result259, p_separator);
            org$pandalanguage$pandac$parser$Token $tmp284 = panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$parser$Token(self, i270);
            org$pandalanguage$pandac$parser$Token$wrapper* $tmp285;
            $tmp285 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
            $tmp285->value = $tmp284;
            $tmp283 = ((panda$core$Object*) $tmp285);
            panda$core$MutableString$append$panda$core$Object(result259, $tmp283);
            panda$core$Panda$unref$panda$core$Object($tmp283);
        }
        $l278:;
        int64_t $tmp287 = $tmp273 - i270.value;
        if ($tmp274) goto $l288; else goto $l289;
        $l288:;
        if ((uint64_t) $tmp287 >= 1) goto $l286; else goto $l277;
        $l289:;
        if ((uint64_t) $tmp287 > 1) goto $l286; else goto $l277;
        $l286:;
        i270.value += 1;
        goto $l275;
        $l277:;
        panda$core$String* $tmp294 = panda$core$MutableString$finish$R$panda$core$String(result259);
        $tmp293 = $tmp294;
        $tmp292 = $tmp293;
        $returnValue254 = $tmp292;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp292));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
        $tmp252 = 1;
        goto $l250;
        $l295:;
        return $returnValue254;
    }
    $l250:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result259));
    result259 = NULL;
    switch ($tmp252) {
        case 1: goto $l295;
        case 0: goto $l257;
    }
    $l297:;
}
panda$core$String* panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT$convert$R$panda$core$String(panda$collections$SpecializedArray$LTorg$pandalanguage$pandac$parser$Token$GT* self) {
    panda$core$MutableString* result301 = NULL;
    panda$core$MutableString* $tmp302;
    panda$core$MutableString* $tmp303;
    panda$core$Char8 $tmp305;
    panda$core$String* separator306 = NULL;
    panda$core$String* $tmp307;
    panda$collections$Iterator* Iter$268$9312 = NULL;
    panda$collections$Iterator* $tmp313;
    panda$collections$Iterator* $tmp314;
    org$pandalanguage$pandac$parser$Token v327;
    panda$core$Object* $tmp328;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    panda$core$Object* $tmp336;
    panda$core$Char8 $tmp340;
    panda$core$String* $returnValue341;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    int $tmp300;
    {
        panda$core$MutableString* $tmp304 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp304);
        $tmp303 = $tmp304;
        $tmp302 = $tmp303;
        result301 = $tmp302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
        panda$core$Char8$init$panda$core$UInt8(&$tmp305, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result301, $tmp305);
        $tmp307 = &$s308;
        separator306 = $tmp307;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp307));
        {
            int $tmp311;
            {
                ITable* $tmp315 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp315 = $tmp315->next;
                }
                $fn317 $tmp316 = $tmp315->methods[0];
                panda$collections$Iterator* $tmp318 = $tmp316(((panda$collections$Iterable*) self));
                $tmp314 = $tmp318;
                $tmp313 = $tmp314;
                Iter$268$9312 = $tmp313;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
                $l319:;
                ITable* $tmp322 = Iter$268$9312->$class->itable;
                while ($tmp322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp322 = $tmp322->next;
                }
                $fn324 $tmp323 = $tmp322->methods[0];
                panda$core$Bit $tmp325 = $tmp323(Iter$268$9312);
                panda$core$Bit $tmp326 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp325);
                bool $tmp321 = $tmp326.value;
                if (!$tmp321) goto $l320;
                {
                    ITable* $tmp329 = Iter$268$9312->$class->itable;
                    while ($tmp329->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp329 = $tmp329->next;
                    }
                    $fn331 $tmp330 = $tmp329->methods[1];
                    panda$core$Object* $tmp332 = $tmp330(Iter$268$9312);
                    $tmp328 = $tmp332;
                    v327 = ((org$pandalanguage$pandac$parser$Token$wrapper*) $tmp328)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp328);
                    panda$core$MutableString$append$panda$core$String(result301, separator306);
                    {
                        $tmp333 = separator306;
                        $tmp334 = &$s335;
                        separator306 = $tmp334;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                    }
                    if (((panda$core$Bit) { true }).value) {
                    {
                        org$pandalanguage$pandac$parser$Token$wrapper* $tmp337;
                        $tmp337 = (org$pandalanguage$pandac$parser$Token$wrapper*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$wrapperclass);
                        $tmp337->value = v327;
                        $tmp336 = ((panda$core$Object*) $tmp337);
                        panda$core$MutableString$append$panda$core$Object(result301, $tmp336);
                        panda$core$Panda$unref$panda$core$Object($tmp336);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result301, &$s338);
                    }
                    }
                }
                goto $l319;
                $l320:;
            }
            $tmp311 = -1;
            goto $l309;
            $l309:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$268$9312));
            Iter$268$9312 = NULL;
            switch ($tmp311) {
                case -1: goto $l339;
            }
            $l339:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp340, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result301, $tmp340);
        panda$core$String* $tmp344 = panda$core$MutableString$finish$R$panda$core$String(result301);
        $tmp343 = $tmp344;
        $tmp342 = $tmp343;
        $returnValue341 = $tmp342;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
        $tmp300 = 0;
        goto $l298;
        $l345:;
        return $returnValue341;
    }
    $l298:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result301));
    result301 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator306));
    separator306 = NULL;
    switch ($tmp300) {
        case 0: goto $l345;
    }
    $l347:;
}

