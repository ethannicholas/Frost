#include "panda/collections/Array.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Collection.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/collections/Array/ArrayIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ImmutableArray.h"
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* p0) {
    panda$collections$Iterator* result = panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(p0);

    return result;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p0, p1, p2);

}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(p0, p1, p2);

}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1) {
    panda$core$Object* result = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p0, p1);

    return result;
}
void panda$collections$Array$add$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Object* p1) {
    panda$collections$Array$add$panda$collections$Array$T(p0, p1);

}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* p0, panda$collections$CollectionView* p1) {
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p0, p1);

}

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Array$_panda$collections$List, { panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Iterable, { panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn4)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn15)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn133)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn144)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn151)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn162)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn291)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn309)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s69 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s70 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 3442386153649448963, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 3507653011134952618, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 91, 5237712174387886614, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    self->count = ((panda$core$Int64) { 0 });
    panda$collections$Array$init$panda$core$Int64(self, ((panda$core$Int64) { 16 }));
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    self->count = ((panda$core$Int64) { 0 });
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) pandaZAlloc(p_capacity.value * 8));
}
void panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$ListView* p_list) {
    panda$collections$Iterator* Iter$50$910 = NULL;
    panda$collections$Iterator* $tmp11;
    panda$collections$Iterator* $tmp12;
    panda$core$Object* v28 = NULL;
    panda$core$Object* $tmp29;
    panda$core$Object* $tmp30;
    self->count = ((panda$core$Int64) { 0 });
    ITable* $tmp2 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp2->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2 = $tmp2->next;
    }
    $fn4 $tmp3 = $tmp2->methods[0];
    panda$core$Int64 $tmp5 = $tmp3(((panda$collections$CollectionView*) p_list));
    panda$core$Int64 $tmp6 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp5, ((panda$core$Int64) { 16 }));
    panda$collections$Array$init$panda$core$Int64(self, $tmp6);
    {
        int $tmp9;
        {
            ITable* $tmp13 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp13->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp13 = $tmp13->next;
            }
            $fn15 $tmp14 = $tmp13->methods[0];
            panda$collections$Iterator* $tmp16 = $tmp14(((panda$collections$Iterable*) p_list));
            $tmp12 = $tmp16;
            $tmp11 = $tmp12;
            Iter$50$910 = $tmp11;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
            $l17:;
            ITable* $tmp20 = Iter$50$910->$class->itable;
            while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp20 = $tmp20->next;
            }
            $fn22 $tmp21 = $tmp20->methods[0];
            panda$core$Bit $tmp23 = $tmp21(Iter$50$910);
            panda$core$Bit $tmp24 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp23);
            bool $tmp19 = $tmp24.value;
            if (!$tmp19) goto $l18;
            {
                int $tmp27;
                {
                    ITable* $tmp31 = Iter$50$910->$class->itable;
                    while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp31 = $tmp31->next;
                    }
                    $fn33 $tmp32 = $tmp31->methods[1];
                    panda$core$Object* $tmp34 = $tmp32(Iter$50$910);
                    $tmp30 = $tmp34;
                    $tmp29 = $tmp30;
                    v28 = $tmp29;
                    panda$core$Panda$ref$panda$core$Object($tmp29);
                    panda$core$Panda$unref$panda$core$Object($tmp30);
                    panda$collections$Array$add$panda$collections$Array$T(self, v28);
                }
                $tmp27 = -1;
                goto $l25;
                $l25:;
                panda$core$Panda$unref$panda$core$Object(v28);
                v28 = NULL;
                switch ($tmp27) {
                    case -1: goto $l35;
                }
                $l35:;
            }
            goto $l17;
            $l18:;
        }
        $tmp9 = -1;
        goto $l7;
        $l7:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$50$910));
        Iter$50$910 = NULL;
        switch ($tmp9) {
            case -1: goto $l36;
        }
        $l36:;
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    self->count = ((panda$core$Int64) { 0 });
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp40;
    int $tmp39;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp40, ((panda$core$Int64) { 0 }), self->count, ((panda$core$Bit) { false }));
        int64_t $tmp42 = $tmp40.min.value;
        panda$core$Int64 i41 = { $tmp42 };
        int64_t $tmp44 = $tmp40.max.value;
        bool $tmp45 = $tmp40.inclusive.value;
        if ($tmp45) goto $l52; else goto $l53;
        $l52:;
        if ($tmp42 <= $tmp44) goto $l46; else goto $l48;
        $l53:;
        if ($tmp42 < $tmp44) goto $l46; else goto $l48;
        $l46:;
        {
            if (((panda$core$Bit) { self->data[i41.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(self->data[i41.value]);
            }
            }
        }
        $l49:;
        int64_t $tmp55 = $tmp44 - i41.value;
        if ($tmp45) goto $l56; else goto $l57;
        $l56:;
        if ((uint64_t) $tmp55 >= 1) goto $l54; else goto $l48;
        $l57:;
        if ((uint64_t) $tmp55 > 1) goto $l54; else goto $l48;
        $l54:;
        i41.value += 1;
        goto $l46;
        $l48:;
        pandaFree(self->data);
    }
    $tmp39 = -1;
    goto $l37;
    $l37:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp39) {
        case -1: goto $l60;
    }
    $l60:;
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Object* $returnValue71;
    panda$core$Object* $tmp72;
    panda$core$Bit $tmp62 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp61 = $tmp62.value;
    if (!$tmp61) goto $l63;
    panda$core$Int64 $tmp64 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp65 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp64);
    $tmp61 = $tmp65.value;
    $l63:;
    panda$core$Bit $tmp66 = { $tmp61 };
    if ($tmp66.value) goto $l67; else goto $l68;
    $l68:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s69, (panda$core$Int64) { 73 }, &$s70);
    abort();
    $l67:;
    $tmp72 = self->data[p_index.value];
    $returnValue71 = $tmp72;
    panda$core$Panda$ref$panda$core$Object($tmp72);
    return $returnValue71;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Object** $tmp84;
    panda$core$Int64 $tmp85;
    panda$core$Object* $tmp86;
    panda$core$Bit $tmp75 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp74 = $tmp75.value;
    if (!$tmp74) goto $l76;
    panda$core$Int64 $tmp77 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp78 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp77);
    $tmp74 = $tmp78.value;
    $l76:;
    panda$core$Bit $tmp79 = { $tmp74 };
    if ($tmp79.value) goto $l80; else goto $l81;
    $l81:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s82, (panda$core$Int64) { 78 }, &$s83);
    abort();
    $l80:;
    {
        $tmp84 = self->data;
        $tmp85 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp84[$tmp85.value]);
        $tmp86 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp86);
        $tmp84[$tmp85.value] = $tmp86;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp88;
    panda$core$Object** $tmp107;
    panda$core$Int64 $tmp108;
    panda$core$Object* $tmp109;
    panda$core$Object** $tmp123;
    panda$core$Int64 $tmp124;
    panda$core$Object* $tmp125;
    panda$core$Int64 $tmp87 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp87);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp88, self->count, p_index, ((panda$core$Int64) { -1 }), ((panda$core$Bit) { false }));
    int64_t $tmp90 = $tmp88.start.value;
    panda$core$Int64 i89 = { $tmp90 };
    int64_t $tmp92 = $tmp88.end.value;
    int64_t $tmp93 = $tmp88.step.value;
    bool $tmp94 = $tmp88.inclusive.value;
    bool $tmp101 = $tmp93 > 0;
    if ($tmp101) goto $l99; else goto $l100;
    $l99:;
    if ($tmp94) goto $l102; else goto $l103;
    $l102:;
    if ($tmp90 <= $tmp92) goto $l95; else goto $l97;
    $l103:;
    if ($tmp90 < $tmp92) goto $l95; else goto $l97;
    $l100:;
    if ($tmp94) goto $l104; else goto $l105;
    $l104:;
    if ($tmp90 >= $tmp92) goto $l95; else goto $l97;
    $l105:;
    if ($tmp90 > $tmp92) goto $l95; else goto $l97;
    $l95:;
    {
        {
            $tmp107 = self->data;
            $tmp108 = i89;
            panda$core$Panda$unref$panda$core$Object($tmp107[$tmp108.value]);
            panda$core$Int64 $tmp110 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i89, ((panda$core$Int64) { 1 }));
            $tmp109 = self->data[$tmp110.value];
            panda$core$Panda$ref$panda$core$Object($tmp109);
            $tmp107[$tmp108.value] = $tmp109;
        }
    }
    $l98:;
    if ($tmp101) goto $l112; else goto $l113;
    $l112:;
    int64_t $tmp114 = $tmp92 - i89.value;
    if ($tmp94) goto $l115; else goto $l116;
    $l115:;
    if ((uint64_t) $tmp114 >= $tmp93) goto $l111; else goto $l97;
    $l116:;
    if ((uint64_t) $tmp114 > $tmp93) goto $l111; else goto $l97;
    $l113:;
    int64_t $tmp118 = i89.value - $tmp92;
    if ($tmp94) goto $l119; else goto $l120;
    $l119:;
    if ((uint64_t) $tmp118 >= -$tmp93) goto $l111; else goto $l97;
    $l120:;
    if ((uint64_t) $tmp118 > -$tmp93) goto $l111; else goto $l97;
    $l111:;
    i89.value += $tmp93;
    goto $l95;
    $l97:;
    panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp122;
    {
        $tmp123 = self->data;
        $tmp124 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp123[$tmp124.value]);
        $tmp125 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp125);
        $tmp123[$tmp124.value] = $tmp125;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Object** $tmp127;
    panda$core$Int64 $tmp128;
    panda$core$Object* $tmp129;
    panda$core$Int64 $tmp126 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp126);
    {
        $tmp127 = self->data;
        $tmp128 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp127[$tmp128.value]);
        $tmp129 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp129);
        $tmp127[$tmp128.value] = $tmp129;
    }
    panda$core$Int64 $tmp130 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp130;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$102$9139 = NULL;
    panda$collections$Iterator* $tmp140;
    panda$collections$Iterator* $tmp141;
    panda$core$Object* v157 = NULL;
    panda$core$Object* $tmp158;
    panda$core$Object* $tmp159;
    panda$core$Object** $tmp164;
    panda$core$Int64 $tmp165;
    panda$core$Object* $tmp166;
    ITable* $tmp131 = p_c->$class->itable;
    while ($tmp131->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp131 = $tmp131->next;
    }
    $fn133 $tmp132 = $tmp131->methods[0];
    panda$core$Int64 $tmp134 = $tmp132(p_c);
    panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp134);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp135);
    {
        int $tmp138;
        {
            ITable* $tmp142 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp142->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp142 = $tmp142->next;
            }
            $fn144 $tmp143 = $tmp142->methods[0];
            panda$collections$Iterator* $tmp145 = $tmp143(((panda$collections$Iterable*) p_c));
            $tmp141 = $tmp145;
            $tmp140 = $tmp141;
            Iter$102$9139 = $tmp140;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141));
            $l146:;
            ITable* $tmp149 = Iter$102$9139->$class->itable;
            while ($tmp149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp149 = $tmp149->next;
            }
            $fn151 $tmp150 = $tmp149->methods[0];
            panda$core$Bit $tmp152 = $tmp150(Iter$102$9139);
            panda$core$Bit $tmp153 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp152);
            bool $tmp148 = $tmp153.value;
            if (!$tmp148) goto $l147;
            {
                int $tmp156;
                {
                    ITable* $tmp160 = Iter$102$9139->$class->itable;
                    while ($tmp160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp160 = $tmp160->next;
                    }
                    $fn162 $tmp161 = $tmp160->methods[1];
                    panda$core$Object* $tmp163 = $tmp161(Iter$102$9139);
                    $tmp159 = $tmp163;
                    $tmp158 = $tmp159;
                    v157 = $tmp158;
                    panda$core$Panda$ref$panda$core$Object($tmp158);
                    panda$core$Panda$unref$panda$core$Object($tmp159);
                    {
                        $tmp164 = self->data;
                        $tmp165 = self->count;
                        panda$core$Panda$unref$panda$core$Object($tmp164[$tmp165.value]);
                        $tmp166 = v157;
                        panda$core$Panda$ref$panda$core$Object($tmp166);
                        $tmp164[$tmp165.value] = $tmp166;
                    }
                    panda$core$Int64 $tmp167 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
                    self->count = $tmp167;
                }
                $tmp156 = -1;
                goto $l154;
                $l154:;
                panda$core$Panda$unref$panda$core$Object(v157);
                v157 = NULL;
                switch ($tmp156) {
                    case -1: goto $l168;
                }
                $l168:;
            }
            goto $l146;
            $l147:;
        }
        $tmp138 = -1;
        goto $l136;
        $l136:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$102$9139));
        Iter$102$9139 = NULL;
        switch ($tmp138) {
            case -1: goto $l169;
        }
        $l169:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 oldCapacity175;
    panda$core$Range$LTpanda$core$Int64$GT $tmp181;
    panda$core$Bit $tmp170 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, ((panda$core$Int64) { 0 }));
    if ($tmp170.value) goto $l171; else goto $l172;
    $l172:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s173, (panda$core$Int64) { 109 });
    abort();
    $l171:;
    panda$core$Bit $tmp174 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp174.value) {
    {
        return;
    }
    }
    oldCapacity175 = self->capacity;
    $l176:;
    panda$core$Bit $tmp179 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp178 = $tmp179.value;
    if (!$tmp178) goto $l177;
    {
        panda$core$Int64 $tmp180 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, ((panda$core$Int64) { 2 }));
        self->capacity = $tmp180;
    }
    goto $l176;
    $l177:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity175.value * 8, self->capacity.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp181, oldCapacity175, self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp183 = $tmp181.min.value;
    panda$core$Int64 i182 = { $tmp183 };
    int64_t $tmp185 = $tmp181.max.value;
    bool $tmp186 = $tmp181.inclusive.value;
    if ($tmp186) goto $l193; else goto $l194;
    $l193:;
    if ($tmp183 <= $tmp185) goto $l187; else goto $l189;
    $l194:;
    if ($tmp183 < $tmp185) goto $l187; else goto $l189;
    $l187:;
    {
        if (((panda$core$Bit) { self->data[i182.value] == NULL }).value) goto $l195; else goto $l196;
        $l196:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s197, (panda$core$Int64) { 119 });
        abort();
        $l195:;
    }
    $l190:;
    int64_t $tmp199 = $tmp185 - i182.value;
    if ($tmp186) goto $l200; else goto $l201;
    $l200:;
    if ((uint64_t) $tmp199 >= 1) goto $l198; else goto $l189;
    $l201:;
    if ((uint64_t) $tmp199 > 1) goto $l198; else goto $l189;
    $l198:;
    i182.value += 1;
    goto $l187;
    $l189:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue204;
    $returnValue204 = self->count;
    return $returnValue204;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp216;
    panda$core$Object* $tmp231;
    panda$core$Object** $tmp241;
    panda$core$Int64 $tmp242;
    panda$core$Object* $tmp243;
    panda$core$Bit $tmp207 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, ((panda$core$Int64) { 0 }));
    bool $tmp206 = $tmp207.value;
    if (!$tmp206) goto $l208;
    panda$core$Int64 $tmp209 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp210 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp209);
    $tmp206 = $tmp210.value;
    $l208:;
    panda$core$Bit $tmp211 = { $tmp206 };
    if ($tmp211.value) goto $l212; else goto $l213;
    $l213:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s214, (panda$core$Int64) { 129 }, &$s215);
    abort();
    $l212:;
    panda$core$Int64 $tmp217 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp216, p_index, $tmp217, ((panda$core$Bit) { false }));
    int64_t $tmp219 = $tmp216.min.value;
    panda$core$Int64 i218 = { $tmp219 };
    int64_t $tmp221 = $tmp216.max.value;
    bool $tmp222 = $tmp216.inclusive.value;
    if ($tmp222) goto $l229; else goto $l230;
    $l229:;
    if ($tmp219 <= $tmp221) goto $l223; else goto $l225;
    $l230:;
    if ($tmp219 < $tmp221) goto $l223; else goto $l225;
    $l223:;
    {
        panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i218, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp232);
        $tmp231 = $tmp233;
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i218, $tmp231);
        panda$core$Panda$unref$panda$core$Object($tmp231);
    }
    $l226:;
    int64_t $tmp235 = $tmp221 - i218.value;
    if ($tmp222) goto $l236; else goto $l237;
    $l236:;
    if ((uint64_t) $tmp235 >= 1) goto $l234; else goto $l225;
    $l237:;
    if ((uint64_t) $tmp235 > 1) goto $l234; else goto $l225;
    $l234:;
    i218.value += 1;
    goto $l223;
    $l225:;
    panda$core$Int64 $tmp240 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, ((panda$core$Int64) { 1 }));
    self->count = $tmp240;
    {
        $tmp241 = self->data;
        $tmp242 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp241[$tmp242.value]);
        $tmp243 = NULL;
        panda$core$Panda$ref$panda$core$Object($tmp243);
        $tmp241[$tmp242.value] = $tmp243;
    }
}
panda$collections$Iterator* panda$collections$Array$iterator$R$panda$collections$Iterator$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$collections$Iterator* $returnValue244;
    panda$collections$Iterator* $tmp245;
    panda$collections$Array$ArrayIterator* $tmp246;
    panda$collections$Array$ArrayIterator* $tmp247 = (panda$collections$Array$ArrayIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Array$ArrayIterator$class);
    panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT($tmp247, self);
    $tmp246 = $tmp247;
    $tmp245 = ((panda$collections$Iterator*) $tmp246);
    $returnValue244 = $tmp245;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp246));
    return $returnValue244;
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp249;
    panda$core$Object** $tmp263;
    panda$core$Int64 $tmp264;
    panda$core$Object* $tmp265;
    self->count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp249, ((panda$core$Int64) { 0 }), self->capacity, ((panda$core$Bit) { false }));
    int64_t $tmp251 = $tmp249.min.value;
    panda$core$Int64 i250 = { $tmp251 };
    int64_t $tmp253 = $tmp249.max.value;
    bool $tmp254 = $tmp249.inclusive.value;
    if ($tmp254) goto $l261; else goto $l262;
    $l261:;
    if ($tmp251 <= $tmp253) goto $l255; else goto $l257;
    $l262:;
    if ($tmp251 < $tmp253) goto $l255; else goto $l257;
    $l255:;
    {
        {
            $tmp263 = self->data;
            $tmp264 = i250;
            panda$core$Panda$unref$panda$core$Object($tmp263[$tmp264.value]);
            $tmp265 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp265);
            $tmp263[$tmp264.value] = $tmp265;
        }
    }
    $l258:;
    int64_t $tmp267 = $tmp253 - i250.value;
    if ($tmp254) goto $l268; else goto $l269;
    $l268:;
    if ((uint64_t) $tmp267 >= 1) goto $l266; else goto $l257;
    $l269:;
    if ((uint64_t) $tmp267 > 1) goto $l266; else goto $l257;
    $l266:;
    i250.value += 1;
    goto $l255;
    $l257:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result275 = NULL;
    panda$core$MutableString* $tmp276;
    panda$core$MutableString* $tmp277;
    panda$core$Char8 $tmp279;
    panda$core$String* separator280 = NULL;
    panda$core$String* $tmp281;
    panda$collections$Iterator* Iter$155$9286 = NULL;
    panda$collections$Iterator* $tmp287;
    panda$collections$Iterator* $tmp288;
    panda$core$Object* v304 = NULL;
    panda$core$Object* $tmp305;
    panda$core$Object* $tmp306;
    panda$core$String* $tmp311;
    panda$core$String* $tmp312;
    panda$core$Char8 $tmp317;
    panda$core$String* $returnValue318;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    int $tmp274;
    {
        panda$core$MutableString* $tmp278 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp278);
        $tmp277 = $tmp278;
        $tmp276 = $tmp277;
        result275 = $tmp276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp276));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
        panda$core$Char8$init$panda$core$UInt8(&$tmp279, ((panda$core$UInt8) { 91 }));
        panda$core$MutableString$append$panda$core$Char8(result275, $tmp279);
        $tmp281 = &$s282;
        separator280 = $tmp281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
        {
            int $tmp285;
            {
                ITable* $tmp289 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp289->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp289 = $tmp289->next;
                }
                $fn291 $tmp290 = $tmp289->methods[0];
                panda$collections$Iterator* $tmp292 = $tmp290(((panda$collections$Iterable*) self));
                $tmp288 = $tmp292;
                $tmp287 = $tmp288;
                Iter$155$9286 = $tmp287;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                $l293:;
                ITable* $tmp296 = Iter$155$9286->$class->itable;
                while ($tmp296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp296 = $tmp296->next;
                }
                $fn298 $tmp297 = $tmp296->methods[0];
                panda$core$Bit $tmp299 = $tmp297(Iter$155$9286);
                panda$core$Bit $tmp300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp299);
                bool $tmp295 = $tmp300.value;
                if (!$tmp295) goto $l294;
                {
                    int $tmp303;
                    {
                        ITable* $tmp307 = Iter$155$9286->$class->itable;
                        while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp307 = $tmp307->next;
                        }
                        $fn309 $tmp308 = $tmp307->methods[1];
                        panda$core$Object* $tmp310 = $tmp308(Iter$155$9286);
                        $tmp306 = $tmp310;
                        $tmp305 = $tmp306;
                        v304 = $tmp305;
                        panda$core$Panda$ref$panda$core$Object($tmp305);
                        panda$core$Panda$unref$panda$core$Object($tmp306);
                        panda$core$MutableString$append$panda$core$String(result275, separator280);
                        {
                            $tmp311 = separator280;
                            $tmp312 = &$s313;
                            separator280 = $tmp312;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                        }
                        if (((panda$core$Bit) { v304 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result275, v304);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result275, &$s314);
                        }
                        }
                    }
                    $tmp303 = -1;
                    goto $l301;
                    $l301:;
                    panda$core$Panda$unref$panda$core$Object(v304);
                    v304 = NULL;
                    switch ($tmp303) {
                        case -1: goto $l315;
                    }
                    $l315:;
                }
                goto $l293;
                $l294:;
            }
            $tmp285 = -1;
            goto $l283;
            $l283:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$155$9286));
            Iter$155$9286 = NULL;
            switch ($tmp285) {
                case -1: goto $l316;
            }
            $l316:;
        }
        panda$core$Char8$init$panda$core$UInt8(&$tmp317, ((panda$core$UInt8) { 93 }));
        panda$core$MutableString$append$panda$core$Char8(result275, $tmp317);
        panda$core$String* $tmp321 = panda$core$MutableString$finish$R$panda$core$String(result275);
        $tmp320 = $tmp321;
        $tmp319 = $tmp320;
        $returnValue318 = $tmp319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
        $tmp274 = 0;
        goto $l272;
        $l322:;
        return $returnValue318;
    }
    $l272:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator280));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result275));
    result275 = NULL;
    separator280 = NULL;
    switch ($tmp274) {
        case 0: goto $l322;
    }
    $l324:;
    abort();
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp325;
    panda$core$Class* $tmp326;
    panda$collections$ImmutableArray* $tmp327;
    panda$collections$ImmutableArray* $returnValue329;
    panda$collections$ImmutableArray* $tmp330;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp325 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp328 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp328);
        $tmp327 = $tmp328;
        $tmp326 = ((panda$core$Object*) $tmp327)->$class;
        ((panda$core$Object*) self)->$class = $tmp326;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
    }
    self->capacity = ((panda$core$Int64) { -1 });
    $tmp330 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue329 = $tmp330;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
    return $returnValue329;
}

