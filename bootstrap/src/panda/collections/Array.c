#include "panda/collections/Array.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/List.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ListWriter.h"
#include "panda/core/Int64.h"
#include "panda/collections/Collection.h"
#include "panda/collections/CollectionWriter.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ImmutableArray.h"
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1, panda$core$Object* p2) {
    panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) panda$core$Object* panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1) {
    panda$core$Object* result = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(p0, p1);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Int64 p1) {
    panda$core$Object* result = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p0, p1);

    return result;
}
__attribute__((weak)) void panda$collections$Array$add$panda$collections$Array$T$shim(panda$collections$Array* p0, panda$core$Object* p1) {
    panda$collections$Array$add$panda$collections$Array$T(p0, p1);

}
__attribute__((weak)) void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim(panda$collections$Array* p0, panda$collections$CollectionView* p1) {
    panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(p0, p1);

}

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$List$T$GT, panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Array$_panda$collections$List, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Iterable, { panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$clear, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn18)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn25)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn153)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn164)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn171)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn182)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn312)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn319)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn330)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 3442386153649448963, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 3507653011134952618, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -666229640664597948, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    panda$core$Int64 $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp2, 16);
    panda$collections$Array$init$panda$core$Int64(self, $tmp2);
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->_count = $tmp3;
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) pandaZAlloc(p_capacity.value * 8));
}
void panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$core$Int64 $tmp8;
    panda$collections$Iterator* Iter$48$913 = NULL;
    panda$collections$Iterator* $tmp14;
    panda$collections$Iterator* $tmp15;
    panda$core$Object* v31 = NULL;
    panda$core$Object* $tmp32;
    panda$core$Object* $tmp33;
    ITable* $tmp4 = p_c->$class->itable;
    while ($tmp4->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4 = $tmp4->next;
    }
    $fn6 $tmp5 = $tmp4->methods[0];
    panda$core$Int64 $tmp7 = $tmp5(p_c);
    panda$core$Int64$init$builtin_int64(&$tmp8, 16);
    panda$core$Int64 $tmp9 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp7, $tmp8);
    panda$collections$Array$init$panda$core$Int64(self, $tmp9);
    {
        int $tmp12;
        {
            ITable* $tmp16 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp16->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp16 = $tmp16->next;
            }
            $fn18 $tmp17 = $tmp16->methods[0];
            panda$collections$Iterator* $tmp19 = $tmp17(((panda$collections$Iterable*) p_c));
            $tmp15 = $tmp19;
            $tmp14 = $tmp15;
            Iter$48$913 = $tmp14;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
            $l20:;
            ITable* $tmp23 = Iter$48$913->$class->itable;
            while ($tmp23->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp23 = $tmp23->next;
            }
            $fn25 $tmp24 = $tmp23->methods[0];
            panda$core$Bit $tmp26 = $tmp24(Iter$48$913);
            panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
            bool $tmp22 = $tmp27.value;
            if (!$tmp22) goto $l21;
            {
                int $tmp30;
                {
                    ITable* $tmp34 = Iter$48$913->$class->itable;
                    while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp34 = $tmp34->next;
                    }
                    $fn36 $tmp35 = $tmp34->methods[1];
                    panda$core$Object* $tmp37 = $tmp35(Iter$48$913);
                    $tmp33 = $tmp37;
                    $tmp32 = $tmp33;
                    v31 = $tmp32;
                    panda$core$Panda$ref$panda$core$Object($tmp32);
                    panda$core$Panda$unref$panda$core$Object($tmp33);
                    panda$collections$Array$add$panda$collections$Array$T(self, v31);
                }
                $tmp30 = -1;
                goto $l28;
                $l28:;
                panda$core$Panda$unref$panda$core$Object(v31);
                v31 = NULL;
                switch ($tmp30) {
                    case -1: goto $l38;
                }
                $l38:;
            }
            goto $l20;
            $l21:;
        }
        $tmp12 = -1;
        goto $l10;
        $l10:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$48$913));
        Iter$48$913 = NULL;
        switch ($tmp12) {
            case -1: goto $l39;
        }
        $l39:;
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp40;
    panda$core$Int64$init$builtin_int64(&$tmp40, 0);
    self->_count = $tmp40;
    self->data = p_data;
    self->_count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp44;
    panda$core$Int64 $tmp45;
    panda$core$Bit $tmp47;
    int $tmp43;
    {
        panda$core$Int64$init$builtin_int64(&$tmp45, 0);
        panda$core$Int64 $tmp46 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        panda$core$Bit$init$builtin_bit(&$tmp47, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp44, $tmp45, $tmp46, $tmp47);
        int64_t $tmp49 = $tmp44.min.value;
        panda$core$Int64 i48 = { $tmp49 };
        int64_t $tmp51 = $tmp44.max.value;
        bool $tmp52 = $tmp44.inclusive.value;
        if ($tmp52) goto $l59; else goto $l60;
        $l59:;
        if ($tmp49 <= $tmp51) goto $l53; else goto $l55;
        $l60:;
        if ($tmp49 < $tmp51) goto $l53; else goto $l55;
        $l53:;
        {
            if (((panda$core$Bit) { self->data[i48.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(self->data[i48.value]);
            }
            }
        }
        $l56:;
        int64_t $tmp62 = $tmp51 - i48.value;
        if ($tmp52) goto $l63; else goto $l64;
        $l63:;
        if ((uint64_t) $tmp62 >= 1) goto $l61; else goto $l55;
        $l64:;
        if ((uint64_t) $tmp62 > 1) goto $l61; else goto $l55;
        $l61:;
        i48.value += 1;
        goto $l53;
        $l55:;
        pandaFree(self->data);
    }
    $tmp43 = -1;
    goto $l41;
    $l41:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp43) {
        case -1: goto $l67;
    }
    $l67:;
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp69;
    panda$core$Object* $returnValue79;
    panda$core$Object* $tmp80;
    panda$core$Int64$init$builtin_int64(&$tmp69, 0);
    panda$core$Bit $tmp70 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp69);
    bool $tmp68 = $tmp70.value;
    if (!$tmp68) goto $l71;
    panda$core$Int64 $tmp72 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp73 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp72);
    $tmp68 = $tmp73.value;
    $l71:;
    panda$core$Bit $tmp74 = { $tmp68 };
    if ($tmp74.value) goto $l75; else goto $l76;
    $l76:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s77, (panda$core$Int64) { 71 }, &$s78);
    abort();
    $l75:;
    $tmp80 = self->data[p_index.value];
    $returnValue79 = $tmp80;
    panda$core$Panda$ref$panda$core$Object($tmp80);
    return $returnValue79;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Int64 $tmp83;
    panda$core$Object** $tmp93;
    panda$core$Int64 $tmp94;
    panda$core$Object* $tmp95;
    panda$core$Int64$init$builtin_int64(&$tmp83, 0);
    panda$core$Bit $tmp84 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp83);
    bool $tmp82 = $tmp84.value;
    if (!$tmp82) goto $l85;
    panda$core$Int64 $tmp86 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp87 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp86);
    $tmp82 = $tmp87.value;
    $l85:;
    panda$core$Bit $tmp88 = { $tmp82 };
    if ($tmp88.value) goto $l89; else goto $l90;
    $l90:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s91, (panda$core$Int64) { 76 }, &$s92);
    abort();
    $l89:;
    {
        $tmp93 = self->data;
        $tmp94 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp93[$tmp94.value]);
        $tmp95 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp95);
        $tmp93[$tmp94.value] = $tmp95;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Int64 $tmp97;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp99;
    panda$core$Int64 $tmp101;
    panda$core$Bit $tmp102;
    panda$core$Object** $tmp121;
    panda$core$Int64 $tmp122;
    panda$core$Object* $tmp123;
    panda$core$Int64 $tmp124;
    panda$collections$Array* $tmp137;
    panda$core$Int64 $tmp138;
    panda$core$Object** $tmp140;
    panda$core$Int64 $tmp141;
    panda$core$Object* $tmp142;
    panda$core$Int64 $tmp96 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp97, 1);
    panda$core$Int64 $tmp98 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp96, $tmp97);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp98);
    panda$core$Int64 $tmp100 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp101, -1);
    panda$core$Bit$init$builtin_bit(&$tmp102, false);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp99, $tmp100, p_index, $tmp101, $tmp102);
    int64_t $tmp104 = $tmp99.start.value;
    panda$core$Int64 i103 = { $tmp104 };
    int64_t $tmp106 = $tmp99.end.value;
    int64_t $tmp107 = $tmp99.step.value;
    bool $tmp108 = $tmp99.inclusive.value;
    bool $tmp115 = $tmp107 > 0;
    if ($tmp115) goto $l113; else goto $l114;
    $l113:;
    if ($tmp108) goto $l116; else goto $l117;
    $l116:;
    if ($tmp104 <= $tmp106) goto $l109; else goto $l111;
    $l117:;
    if ($tmp104 < $tmp106) goto $l109; else goto $l111;
    $l114:;
    if ($tmp108) goto $l118; else goto $l119;
    $l118:;
    if ($tmp104 >= $tmp106) goto $l109; else goto $l111;
    $l119:;
    if ($tmp104 > $tmp106) goto $l109; else goto $l111;
    $l109:;
    {
        {
            $tmp121 = self->data;
            $tmp122 = i103;
            panda$core$Panda$unref$panda$core$Object($tmp121[$tmp122.value]);
            panda$core$Int64$init$builtin_int64(&$tmp124, 1);
            panda$core$Int64 $tmp125 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i103, $tmp124);
            $tmp123 = self->data[$tmp125.value];
            panda$core$Panda$ref$panda$core$Object($tmp123);
            $tmp121[$tmp122.value] = $tmp123;
        }
    }
    $l112:;
    if ($tmp115) goto $l127; else goto $l128;
    $l127:;
    int64_t $tmp129 = $tmp106 - i103.value;
    if ($tmp108) goto $l130; else goto $l131;
    $l130:;
    if ((uint64_t) $tmp129 >= $tmp107) goto $l126; else goto $l111;
    $l131:;
    if ((uint64_t) $tmp129 > $tmp107) goto $l126; else goto $l111;
    $l128:;
    int64_t $tmp133 = i103.value - $tmp106;
    if ($tmp108) goto $l134; else goto $l135;
    $l134:;
    if ((uint64_t) $tmp133 >= -$tmp107) goto $l126; else goto $l111;
    $l135:;
    if ((uint64_t) $tmp133 > -$tmp107) goto $l126; else goto $l111;
    $l126:;
    i103.value += $tmp107;
    goto $l109;
    $l111:;
    $tmp137 = self;
    panda$core$Int64$init$builtin_int64(&$tmp138, 1);
    panda$core$Int64 $tmp139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp137->_count, $tmp138);
    $tmp137->_count = $tmp139;
    {
        $tmp140 = self->data;
        $tmp141 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp140[$tmp141.value]);
        $tmp142 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp142);
        $tmp140[$tmp141.value] = $tmp142;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp143;
    panda$core$Object** $tmp145;
    panda$core$Int64 $tmp146;
    panda$core$Object* $tmp147;
    panda$collections$Array* $tmp148;
    panda$core$Int64 $tmp149;
    panda$core$Int64$init$builtin_int64(&$tmp143, 1);
    panda$core$Int64 $tmp144 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp143);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp144);
    {
        $tmp145 = self->data;
        $tmp146 = self->_count;
        panda$core$Panda$unref$panda$core$Object($tmp145[$tmp146.value]);
        $tmp147 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp147);
        $tmp145[$tmp146.value] = $tmp147;
    }
    $tmp148 = self;
    panda$core$Int64$init$builtin_int64(&$tmp149, 1);
    panda$core$Int64 $tmp150 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp148->_count, $tmp149);
    $tmp148->_count = $tmp150;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$100$9159 = NULL;
    panda$collections$Iterator* $tmp160;
    panda$collections$Iterator* $tmp161;
    panda$core$Object* v177 = NULL;
    panda$core$Object* $tmp178;
    panda$core$Object* $tmp179;
    panda$core$Object** $tmp184;
    panda$core$Int64 $tmp185;
    panda$core$Object* $tmp186;
    panda$collections$Array* $tmp187;
    panda$core$Int64 $tmp188;
    ITable* $tmp151 = p_c->$class->itable;
    while ($tmp151->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp151 = $tmp151->next;
    }
    $fn153 $tmp152 = $tmp151->methods[0];
    panda$core$Int64 $tmp154 = $tmp152(p_c);
    panda$core$Int64 $tmp155 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp154);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp155);
    {
        int $tmp158;
        {
            ITable* $tmp162 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp162->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp162 = $tmp162->next;
            }
            $fn164 $tmp163 = $tmp162->methods[0];
            panda$collections$Iterator* $tmp165 = $tmp163(((panda$collections$Iterable*) p_c));
            $tmp161 = $tmp165;
            $tmp160 = $tmp161;
            Iter$100$9159 = $tmp160;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
            $l166:;
            ITable* $tmp169 = Iter$100$9159->$class->itable;
            while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp169 = $tmp169->next;
            }
            $fn171 $tmp170 = $tmp169->methods[0];
            panda$core$Bit $tmp172 = $tmp170(Iter$100$9159);
            panda$core$Bit $tmp173 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp172);
            bool $tmp168 = $tmp173.value;
            if (!$tmp168) goto $l167;
            {
                int $tmp176;
                {
                    ITable* $tmp180 = Iter$100$9159->$class->itable;
                    while ($tmp180->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp180 = $tmp180->next;
                    }
                    $fn182 $tmp181 = $tmp180->methods[1];
                    panda$core$Object* $tmp183 = $tmp181(Iter$100$9159);
                    $tmp179 = $tmp183;
                    $tmp178 = $tmp179;
                    v177 = $tmp178;
                    panda$core$Panda$ref$panda$core$Object($tmp178);
                    panda$core$Panda$unref$panda$core$Object($tmp179);
                    {
                        $tmp184 = self->data;
                        $tmp185 = self->_count;
                        panda$core$Panda$unref$panda$core$Object($tmp184[$tmp185.value]);
                        $tmp186 = v177;
                        panda$core$Panda$ref$panda$core$Object($tmp186);
                        $tmp184[$tmp185.value] = $tmp186;
                    }
                    $tmp187 = self;
                    panda$core$Int64$init$builtin_int64(&$tmp188, 1);
                    panda$core$Int64 $tmp189 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp187->_count, $tmp188);
                    $tmp187->_count = $tmp189;
                }
                $tmp176 = -1;
                goto $l174;
                $l174:;
                panda$core$Panda$unref$panda$core$Object(v177);
                v177 = NULL;
                switch ($tmp176) {
                    case -1: goto $l190;
                }
                $l190:;
            }
            goto $l166;
            $l167:;
        }
        $tmp158 = -1;
        goto $l156;
        $l156:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$100$9159));
        Iter$100$9159 = NULL;
        switch ($tmp158) {
            case -1: goto $l191;
        }
        $l191:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp192;
    panda$core$Int64 oldCapacity198;
    panda$core$Int64 $tmp199;
    panda$collections$Array* $tmp205;
    panda$core$Int64 $tmp206;
    panda$core$Int64$init$builtin_int64(&$tmp192, 0);
    panda$core$Bit $tmp193 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp192);
    if ($tmp193.value) goto $l194; else goto $l195;
    $l195:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s196, (panda$core$Int64) { 107 });
    abort();
    $l194:;
    panda$core$Bit $tmp197 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp197.value) {
    {
        return;
    }
    }
    oldCapacity198 = self->capacity;
    panda$core$Int64$init$builtin_int64(&$tmp199, 1);
    panda$core$Int64 $tmp200 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp199);
    self->capacity = $tmp200;
    $l201:;
    panda$core$Bit $tmp204 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp203 = $tmp204.value;
    if (!$tmp203) goto $l202;
    {
        $tmp205 = self;
        panda$core$Int64$init$builtin_int64(&$tmp206, 2);
        panda$core$Int64 $tmp207 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp205->capacity, $tmp206);
        $tmp205->capacity = $tmp207;
    }
    goto $l201;
    $l202:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity198.value * 8, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue208;
    $returnValue208 = self->_count;
    return $returnValue208;
}
panda$core$Object* panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp211;
    panda$core$Object* result224 = NULL;
    panda$core$Object* $tmp225;
    panda$core$Object* $tmp226;
    panda$core$Range$LTpanda$core$Int64$GT $tmp228;
    panda$core$Int64 $tmp229;
    panda$core$Bit $tmp231;
    panda$core$Object* $tmp245;
    panda$core$Int64 $tmp246;
    panda$collections$Array* $tmp255;
    panda$core$Int64 $tmp256;
    panda$core$Object** $tmp258;
    panda$core$Int64 $tmp259;
    panda$core$Object* $tmp260;
    panda$core$Object* $returnValue261;
    panda$core$Object* $tmp262;
    panda$core$Int64$init$builtin_int64(&$tmp211, 0);
    panda$core$Bit $tmp212 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp211);
    bool $tmp210 = $tmp212.value;
    if (!$tmp210) goto $l213;
    panda$core$Int64 $tmp214 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp215 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp214);
    $tmp210 = $tmp215.value;
    $l213:;
    panda$core$Bit $tmp216 = { $tmp210 };
    if ($tmp216.value) goto $l217; else goto $l218;
    $l218:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s219, (panda$core$Int64) { 125 }, &$s220);
    abort();
    $l217:;
    int $tmp223;
    {
        panda$core$Object* $tmp227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, p_index);
        $tmp226 = $tmp227;
        $tmp225 = $tmp226;
        result224 = $tmp225;
        panda$core$Panda$ref$panda$core$Object($tmp225);
        panda$core$Panda$unref$panda$core$Object($tmp226);
        panda$core$Int64$init$builtin_int64(&$tmp229, 1);
        panda$core$Int64 $tmp230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp229);
        panda$core$Bit$init$builtin_bit(&$tmp231, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp228, p_index, $tmp230, $tmp231);
        int64_t $tmp233 = $tmp228.min.value;
        panda$core$Int64 i232 = { $tmp233 };
        int64_t $tmp235 = $tmp228.max.value;
        bool $tmp236 = $tmp228.inclusive.value;
        if ($tmp236) goto $l243; else goto $l244;
        $l243:;
        if ($tmp233 <= $tmp235) goto $l237; else goto $l239;
        $l244:;
        if ($tmp233 < $tmp235) goto $l237; else goto $l239;
        $l237:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp246, 1);
            panda$core$Int64 $tmp247 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i232, $tmp246);
            panda$core$Object* $tmp248 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp247);
            $tmp245 = $tmp248;
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i232, $tmp245);
            panda$core$Panda$unref$panda$core$Object($tmp245);
        }
        $l240:;
        int64_t $tmp250 = $tmp235 - i232.value;
        if ($tmp236) goto $l251; else goto $l252;
        $l251:;
        if ((uint64_t) $tmp250 >= 1) goto $l249; else goto $l239;
        $l252:;
        if ((uint64_t) $tmp250 > 1) goto $l249; else goto $l239;
        $l249:;
        i232.value += 1;
        goto $l237;
        $l239:;
        $tmp255 = self;
        panda$core$Int64$init$builtin_int64(&$tmp256, 1);
        panda$core$Int64 $tmp257 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp255->_count, $tmp256);
        $tmp255->_count = $tmp257;
        {
            $tmp258 = self->data;
            $tmp259 = self->_count;
            panda$core$Panda$unref$panda$core$Object($tmp258[$tmp259.value]);
            $tmp260 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp260);
            $tmp258[$tmp259.value] = $tmp260;
        }
        $tmp262 = result224;
        $returnValue261 = $tmp262;
        panda$core$Panda$ref$panda$core$Object($tmp262);
        $tmp223 = 0;
        goto $l221;
        $l263:;
        return $returnValue261;
    }
    $l221:;
    panda$core$Panda$unref$panda$core$Object(result224);
    result224 = NULL;
    switch ($tmp223) {
        case 0: goto $l263;
    }
    $l265:;
    abort();
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Int64 $tmp266;
    panda$core$Range$LTpanda$core$Int64$GT $tmp267;
    panda$core$Int64 $tmp268;
    panda$core$Bit $tmp269;
    panda$core$Object** $tmp283;
    panda$core$Int64 $tmp284;
    panda$core$Object* $tmp285;
    panda$core$Int64$init$builtin_int64(&$tmp266, 0);
    self->_count = $tmp266;
    panda$core$Int64$init$builtin_int64(&$tmp268, 0);
    panda$core$Bit$init$builtin_bit(&$tmp269, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp267, $tmp268, self->capacity, $tmp269);
    int64_t $tmp271 = $tmp267.min.value;
    panda$core$Int64 i270 = { $tmp271 };
    int64_t $tmp273 = $tmp267.max.value;
    bool $tmp274 = $tmp267.inclusive.value;
    if ($tmp274) goto $l281; else goto $l282;
    $l281:;
    if ($tmp271 <= $tmp273) goto $l275; else goto $l277;
    $l282:;
    if ($tmp271 < $tmp273) goto $l275; else goto $l277;
    $l275:;
    {
        {
            $tmp283 = self->data;
            $tmp284 = i270;
            panda$core$Panda$unref$panda$core$Object($tmp283[$tmp284.value]);
            $tmp285 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp285);
            $tmp283[$tmp284.value] = $tmp285;
        }
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
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result295 = NULL;
    panda$core$MutableString* $tmp296;
    panda$core$MutableString* $tmp297;
    panda$core$Char8 $tmp299;
    panda$core$UInt8 $tmp300;
    panda$core$String* separator301 = NULL;
    panda$core$String* $tmp302;
    panda$collections$Iterator* Iter$148$9307 = NULL;
    panda$collections$Iterator* $tmp308;
    panda$collections$Iterator* $tmp309;
    panda$core$Object* v325 = NULL;
    panda$core$Object* $tmp326;
    panda$core$Object* $tmp327;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$Char8 $tmp338;
    panda$core$UInt8 $tmp339;
    panda$core$String* $returnValue340;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    int $tmp294;
    {
        panda$core$MutableString* $tmp298 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp298);
        $tmp297 = $tmp298;
        $tmp296 = $tmp297;
        result295 = $tmp296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
        panda$core$UInt8$init$builtin_uint8(&$tmp300, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp299, $tmp300);
        panda$core$MutableString$append$panda$core$Char8(result295, $tmp299);
        $tmp302 = &$s303;
        separator301 = $tmp302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
        {
            int $tmp306;
            {
                ITable* $tmp310 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp310->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp310 = $tmp310->next;
                }
                $fn312 $tmp311 = $tmp310->methods[0];
                panda$collections$Iterator* $tmp313 = $tmp311(((panda$collections$Iterable*) self));
                $tmp309 = $tmp313;
                $tmp308 = $tmp309;
                Iter$148$9307 = $tmp308;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
                $l314:;
                ITable* $tmp317 = Iter$148$9307->$class->itable;
                while ($tmp317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp317 = $tmp317->next;
                }
                $fn319 $tmp318 = $tmp317->methods[0];
                panda$core$Bit $tmp320 = $tmp318(Iter$148$9307);
                panda$core$Bit $tmp321 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp320);
                bool $tmp316 = $tmp321.value;
                if (!$tmp316) goto $l315;
                {
                    int $tmp324;
                    {
                        ITable* $tmp328 = Iter$148$9307->$class->itable;
                        while ($tmp328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp328 = $tmp328->next;
                        }
                        $fn330 $tmp329 = $tmp328->methods[1];
                        panda$core$Object* $tmp331 = $tmp329(Iter$148$9307);
                        $tmp327 = $tmp331;
                        $tmp326 = $tmp327;
                        v325 = $tmp326;
                        panda$core$Panda$ref$panda$core$Object($tmp326);
                        panda$core$Panda$unref$panda$core$Object($tmp327);
                        panda$core$MutableString$append$panda$core$String(result295, separator301);
                        {
                            $tmp332 = separator301;
                            $tmp333 = &$s334;
                            separator301 = $tmp333;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                        }
                        if (((panda$core$Bit) { v325 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result295, v325);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result295, &$s335);
                        }
                        }
                    }
                    $tmp324 = -1;
                    goto $l322;
                    $l322:;
                    panda$core$Panda$unref$panda$core$Object(v325);
                    v325 = NULL;
                    switch ($tmp324) {
                        case -1: goto $l336;
                    }
                    $l336:;
                }
                goto $l314;
                $l315:;
            }
            $tmp306 = -1;
            goto $l304;
            $l304:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$148$9307));
            Iter$148$9307 = NULL;
            switch ($tmp306) {
                case -1: goto $l337;
            }
            $l337:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp339, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp338, $tmp339);
        panda$core$MutableString$append$panda$core$Char8(result295, $tmp338);
        panda$core$String* $tmp343 = panda$core$MutableString$finish$R$panda$core$String(result295);
        $tmp342 = $tmp343;
        $tmp341 = $tmp342;
        $returnValue340 = $tmp341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
        $tmp294 = 0;
        goto $l292;
        $l344:;
        return $returnValue340;
    }
    $l292:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator301));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result295));
    result295 = NULL;
    separator301 = NULL;
    switch ($tmp294) {
        case 0: goto $l344;
    }
    $l346:;
    abort();
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp347;
    panda$core$Class* $tmp348;
    panda$collections$ImmutableArray* $tmp349;
    panda$core$Int64 $tmp351;
    panda$collections$ImmutableArray* $returnValue352;
    panda$collections$ImmutableArray* $tmp353;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->_count.value * 8));
    {
        $tmp347 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp350 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp350);
        $tmp349 = $tmp350;
        $tmp348 = ((panda$core$Object*) $tmp349)->$class;
        ((panda$core$Object*) self)->$class = $tmp348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
    }
    panda$core$Int64$init$builtin_int64(&$tmp351, -1);
    self->capacity = $tmp351;
    $tmp353 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue352 = $tmp353;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
    return $returnValue352;
}

