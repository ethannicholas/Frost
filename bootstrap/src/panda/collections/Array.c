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

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Array$_panda$collections$List, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Iterable, { panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$removeIndex$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[5]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$CollectionView$filter$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$CollectionView$LTpanda$collections$CollectionView$T$GT, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$clear, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn20)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn27)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn38)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn150)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn316)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn323)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn334)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s79 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 3442386153649448963, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 3507653011134952618, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 91, 5237712174387886614, NULL };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->count = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 16);
    panda$collections$Array$init$panda$core$Int64(self, $tmp3);
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp4, 0);
    self->count = $tmp4;
    self->capacity = p_capacity;
    self->data = ((panda$core$Object**) pandaZAlloc(p_capacity.value * 8));
}
void panda$collections$Array$init$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$ListView* p_list) {
    panda$core$Int64 $tmp5;
    panda$core$Int64 $tmp10;
    panda$collections$Iterator* Iter$29$915 = NULL;
    panda$collections$Iterator* $tmp16;
    panda$collections$Iterator* $tmp17;
    panda$core$Object* v33 = NULL;
    panda$core$Object* $tmp34;
    panda$core$Object* $tmp35;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->count = $tmp5;
    ITable* $tmp6 = ((panda$collections$CollectionView*) p_list)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) p_list));
    panda$core$Int64$init$builtin_int64(&$tmp10, 16);
    panda$core$Int64 $tmp11 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp9, $tmp10);
    panda$collections$Array$init$panda$core$Int64(self, $tmp11);
    {
        int $tmp14;
        {
            ITable* $tmp18 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp18 = $tmp18->next;
            }
            $fn20 $tmp19 = $tmp18->methods[0];
            panda$collections$Iterator* $tmp21 = $tmp19(((panda$collections$Iterable*) p_list));
            $tmp17 = $tmp21;
            $tmp16 = $tmp17;
            Iter$29$915 = $tmp16;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
            $l22:;
            ITable* $tmp25 = Iter$29$915->$class->itable;
            while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp25 = $tmp25->next;
            }
            $fn27 $tmp26 = $tmp25->methods[0];
            panda$core$Bit $tmp28 = $tmp26(Iter$29$915);
            panda$core$Bit $tmp29 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp28);
            bool $tmp24 = $tmp29.value;
            if (!$tmp24) goto $l23;
            {
                int $tmp32;
                {
                    ITable* $tmp36 = Iter$29$915->$class->itable;
                    while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp36 = $tmp36->next;
                    }
                    $fn38 $tmp37 = $tmp36->methods[1];
                    panda$core$Object* $tmp39 = $tmp37(Iter$29$915);
                    $tmp35 = $tmp39;
                    $tmp34 = $tmp35;
                    v33 = $tmp34;
                    panda$core$Panda$ref$panda$core$Object($tmp34);
                    panda$core$Panda$unref$panda$core$Object($tmp35);
                    panda$collections$Array$add$panda$collections$Array$T(self, v33);
                }
                $tmp32 = -1;
                goto $l30;
                $l30:;
                panda$core$Panda$unref$panda$core$Object(v33);
                v33 = NULL;
                switch ($tmp32) {
                    case -1: goto $l40;
                }
                $l40:;
            }
            goto $l22;
            $l23:;
        }
        $tmp14 = -1;
        goto $l12;
        $l12:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$29$915));
        Iter$29$915 = NULL;
        switch ($tmp14) {
            case -1: goto $l41;
        }
        $l41:;
    }
}
void panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64(panda$collections$Array* self, panda$core$Object** p_data, panda$core$Int64 p_count) {
    panda$core$Int64 $tmp42;
    panda$core$Int64$init$builtin_int64(&$tmp42, 0);
    self->count = $tmp42;
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp46;
    panda$core$Int64 $tmp47;
    panda$core$Bit $tmp48;
    int $tmp45;
    {
        panda$core$Int64$init$builtin_int64(&$tmp47, 0);
        panda$core$Bit$init$builtin_bit(&$tmp48, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp46, $tmp47, self->count, $tmp48);
        int64_t $tmp50 = $tmp46.min.value;
        panda$core$Int64 i49 = { $tmp50 };
        int64_t $tmp52 = $tmp46.max.value;
        bool $tmp53 = $tmp46.inclusive.value;
        if ($tmp53) goto $l60; else goto $l61;
        $l60:;
        if ($tmp50 <= $tmp52) goto $l54; else goto $l56;
        $l61:;
        if ($tmp50 < $tmp52) goto $l54; else goto $l56;
        $l54:;
        {
            if (((panda$core$Bit) { self->data[i49.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(self->data[i49.value]);
            }
            }
        }
        $l57:;
        int64_t $tmp63 = $tmp52 - i49.value;
        if ($tmp53) goto $l64; else goto $l65;
        $l64:;
        if ((uint64_t) $tmp63 >= 1) goto $l62; else goto $l56;
        $l65:;
        if ((uint64_t) $tmp63 > 1) goto $l62; else goto $l56;
        $l62:;
        i49.value += 1;
        goto $l54;
        $l56:;
        pandaFree(self->data);
    }
    $tmp45 = -1;
    goto $l43;
    $l43:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp45) {
        case -1: goto $l68;
    }
    $l68:;
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp70;
    panda$core$Object* $returnValue80;
    panda$core$Object* $tmp81;
    panda$core$Int64$init$builtin_int64(&$tmp70, 0);
    panda$core$Bit $tmp71 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp70);
    bool $tmp69 = $tmp71.value;
    if (!$tmp69) goto $l72;
    panda$core$Int64 $tmp73 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp74 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp73);
    $tmp69 = $tmp74.value;
    $l72:;
    panda$core$Bit $tmp75 = { $tmp69 };
    if ($tmp75.value) goto $l76; else goto $l77;
    $l77:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s78, (panda$core$Int64) { 52 }, &$s79);
    abort();
    $l76:;
    $tmp81 = self->data[p_index.value];
    $returnValue80 = $tmp81;
    panda$core$Panda$ref$panda$core$Object($tmp81);
    return $returnValue80;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Int64 $tmp84;
    panda$core$Object** $tmp94;
    panda$core$Int64 $tmp95;
    panda$core$Object* $tmp96;
    panda$core$Int64$init$builtin_int64(&$tmp84, 0);
    panda$core$Bit $tmp85 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp84);
    bool $tmp83 = $tmp85.value;
    if (!$tmp83) goto $l86;
    panda$core$Int64 $tmp87 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp88 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp87);
    $tmp83 = $tmp88.value;
    $l86:;
    panda$core$Bit $tmp89 = { $tmp83 };
    if ($tmp89.value) goto $l90; else goto $l91;
    $l91:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s92, (panda$core$Int64) { 57 }, &$s93);
    abort();
    $l90:;
    {
        $tmp94 = self->data;
        $tmp95 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp94[$tmp95.value]);
        $tmp96 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp96);
        $tmp94[$tmp95.value] = $tmp96;
    }
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Int64 $tmp97;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp99;
    panda$core$Int64 $tmp100;
    panda$core$Bit $tmp101;
    panda$core$Object** $tmp120;
    panda$core$Int64 $tmp121;
    panda$core$Object* $tmp122;
    panda$core$Int64 $tmp123;
    panda$core$Int64 $tmp136;
    panda$core$Object** $tmp138;
    panda$core$Int64 $tmp139;
    panda$core$Object* $tmp140;
    panda$core$Int64$init$builtin_int64(&$tmp97, 1);
    panda$core$Int64 $tmp98 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp97);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp98);
    panda$core$Int64$init$builtin_int64(&$tmp100, -1);
    panda$core$Bit$init$builtin_bit(&$tmp101, false);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp99, self->count, p_index, $tmp100, $tmp101);
    int64_t $tmp103 = $tmp99.start.value;
    panda$core$Int64 i102 = { $tmp103 };
    int64_t $tmp105 = $tmp99.end.value;
    int64_t $tmp106 = $tmp99.step.value;
    bool $tmp107 = $tmp99.inclusive.value;
    bool $tmp114 = $tmp106 > 0;
    if ($tmp114) goto $l112; else goto $l113;
    $l112:;
    if ($tmp107) goto $l115; else goto $l116;
    $l115:;
    if ($tmp103 <= $tmp105) goto $l108; else goto $l110;
    $l116:;
    if ($tmp103 < $tmp105) goto $l108; else goto $l110;
    $l113:;
    if ($tmp107) goto $l117; else goto $l118;
    $l117:;
    if ($tmp103 >= $tmp105) goto $l108; else goto $l110;
    $l118:;
    if ($tmp103 > $tmp105) goto $l108; else goto $l110;
    $l108:;
    {
        {
            $tmp120 = self->data;
            $tmp121 = i102;
            panda$core$Panda$unref$panda$core$Object($tmp120[$tmp121.value]);
            panda$core$Int64$init$builtin_int64(&$tmp123, 1);
            panda$core$Int64 $tmp124 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i102, $tmp123);
            $tmp122 = self->data[$tmp124.value];
            panda$core$Panda$ref$panda$core$Object($tmp122);
            $tmp120[$tmp121.value] = $tmp122;
        }
    }
    $l111:;
    if ($tmp114) goto $l126; else goto $l127;
    $l126:;
    int64_t $tmp128 = $tmp105 - i102.value;
    if ($tmp107) goto $l129; else goto $l130;
    $l129:;
    if ((uint64_t) $tmp128 >= $tmp106) goto $l125; else goto $l110;
    $l130:;
    if ((uint64_t) $tmp128 > $tmp106) goto $l125; else goto $l110;
    $l127:;
    int64_t $tmp132 = i102.value - $tmp105;
    if ($tmp107) goto $l133; else goto $l134;
    $l133:;
    if ((uint64_t) $tmp132 >= -$tmp106) goto $l125; else goto $l110;
    $l134:;
    if ((uint64_t) $tmp132 > -$tmp106) goto $l125; else goto $l110;
    $l125:;
    i102.value += $tmp106;
    goto $l108;
    $l110:;
    panda$core$Int64$init$builtin_int64(&$tmp136, 1);
    panda$core$Int64 $tmp137 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp136);
    self->count = $tmp137;
    {
        $tmp138 = self->data;
        $tmp139 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp138[$tmp139.value]);
        $tmp140 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp140);
        $tmp138[$tmp139.value] = $tmp140;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp141;
    panda$core$Object** $tmp143;
    panda$core$Int64 $tmp144;
    panda$core$Object* $tmp145;
    panda$core$Int64 $tmp146;
    panda$core$Int64$init$builtin_int64(&$tmp141, 1);
    panda$core$Int64 $tmp142 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp141);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp142);
    {
        $tmp143 = self->data;
        $tmp144 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp143[$tmp144.value]);
        $tmp145 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp145);
        $tmp143[$tmp144.value] = $tmp145;
    }
    panda$core$Int64$init$builtin_int64(&$tmp146, 1);
    panda$core$Int64 $tmp147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp146);
    self->count = $tmp147;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$81$9156 = NULL;
    panda$collections$Iterator* $tmp157;
    panda$collections$Iterator* $tmp158;
    panda$core$Object* v174 = NULL;
    panda$core$Object* $tmp175;
    panda$core$Object* $tmp176;
    panda$core$Object** $tmp181;
    panda$core$Int64 $tmp182;
    panda$core$Object* $tmp183;
    panda$core$Int64 $tmp184;
    ITable* $tmp148 = p_c->$class->itable;
    while ($tmp148->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp148 = $tmp148->next;
    }
    $fn150 $tmp149 = $tmp148->methods[0];
    panda$core$Int64 $tmp151 = $tmp149(p_c);
    panda$core$Int64 $tmp152 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp151);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp152);
    {
        int $tmp155;
        {
            ITable* $tmp159 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp159->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp159 = $tmp159->next;
            }
            $fn161 $tmp160 = $tmp159->methods[0];
            panda$collections$Iterator* $tmp162 = $tmp160(((panda$collections$Iterable*) p_c));
            $tmp158 = $tmp162;
            $tmp157 = $tmp158;
            Iter$81$9156 = $tmp157;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
            $l163:;
            ITable* $tmp166 = Iter$81$9156->$class->itable;
            while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp166 = $tmp166->next;
            }
            $fn168 $tmp167 = $tmp166->methods[0];
            panda$core$Bit $tmp169 = $tmp167(Iter$81$9156);
            panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
            bool $tmp165 = $tmp170.value;
            if (!$tmp165) goto $l164;
            {
                int $tmp173;
                {
                    ITable* $tmp177 = Iter$81$9156->$class->itable;
                    while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp177 = $tmp177->next;
                    }
                    $fn179 $tmp178 = $tmp177->methods[1];
                    panda$core$Object* $tmp180 = $tmp178(Iter$81$9156);
                    $tmp176 = $tmp180;
                    $tmp175 = $tmp176;
                    v174 = $tmp175;
                    panda$core$Panda$ref$panda$core$Object($tmp175);
                    panda$core$Panda$unref$panda$core$Object($tmp176);
                    {
                        $tmp181 = self->data;
                        $tmp182 = self->count;
                        panda$core$Panda$unref$panda$core$Object($tmp181[$tmp182.value]);
                        $tmp183 = v174;
                        panda$core$Panda$ref$panda$core$Object($tmp183);
                        $tmp181[$tmp182.value] = $tmp183;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp184, 1);
                    panda$core$Int64 $tmp185 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp184);
                    self->count = $tmp185;
                }
                $tmp173 = -1;
                goto $l171;
                $l171:;
                panda$core$Panda$unref$panda$core$Object(v174);
                v174 = NULL;
                switch ($tmp173) {
                    case -1: goto $l186;
                }
                $l186:;
            }
            goto $l163;
            $l164:;
        }
        $tmp155 = -1;
        goto $l153;
        $l153:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$81$9156));
        Iter$81$9156 = NULL;
        switch ($tmp155) {
            case -1: goto $l187;
        }
        $l187:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp188;
    panda$core$Int64 oldCapacity194;
    panda$core$Int64 $tmp199;
    panda$core$Range$LTpanda$core$Int64$GT $tmp201;
    panda$core$Bit $tmp202;
    panda$core$Int64$init$builtin_int64(&$tmp188, 0);
    panda$core$Bit $tmp189 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp188);
    if ($tmp189.value) goto $l190; else goto $l191;
    $l191:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s192, (panda$core$Int64) { 88 });
    abort();
    $l190:;
    panda$core$Bit $tmp193 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp193.value) {
    {
        return;
    }
    }
    oldCapacity194 = self->capacity;
    $l195:;
    panda$core$Bit $tmp198 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp197 = $tmp198.value;
    if (!$tmp197) goto $l196;
    {
        panda$core$Int64$init$builtin_int64(&$tmp199, 2);
        panda$core$Int64 $tmp200 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp199);
        self->capacity = $tmp200;
    }
    goto $l195;
    $l196:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity194.value * 8, self->capacity.value * 8));
    panda$core$Bit$init$builtin_bit(&$tmp202, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp201, oldCapacity194, self->capacity, $tmp202);
    int64_t $tmp204 = $tmp201.min.value;
    panda$core$Int64 i203 = { $tmp204 };
    int64_t $tmp206 = $tmp201.max.value;
    bool $tmp207 = $tmp201.inclusive.value;
    if ($tmp207) goto $l214; else goto $l215;
    $l214:;
    if ($tmp204 <= $tmp206) goto $l208; else goto $l210;
    $l215:;
    if ($tmp204 < $tmp206) goto $l208; else goto $l210;
    $l208:;
    {
        if (((panda$core$Bit) { self->data[i203.value] == NULL }).value) goto $l216; else goto $l217;
        $l217:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s218, (panda$core$Int64) { 98 });
        abort();
        $l216:;
    }
    $l211:;
    int64_t $tmp220 = $tmp206 - i203.value;
    if ($tmp207) goto $l221; else goto $l222;
    $l221:;
    if ((uint64_t) $tmp220 >= 1) goto $l219; else goto $l210;
    $l222:;
    if ((uint64_t) $tmp220 > 1) goto $l219; else goto $l210;
    $l219:;
    i203.value += 1;
    goto $l208;
    $l210:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue225;
    $returnValue225 = self->count;
    return $returnValue225;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp228;
    panda$core$Range$LTpanda$core$Int64$GT $tmp238;
    panda$core$Int64 $tmp239;
    panda$core$Bit $tmp241;
    panda$core$Object* $tmp255;
    panda$core$Int64 $tmp256;
    panda$core$Int64 $tmp265;
    panda$core$Object** $tmp267;
    panda$core$Int64 $tmp268;
    panda$core$Object* $tmp269;
    panda$core$Int64$init$builtin_int64(&$tmp228, 0);
    panda$core$Bit $tmp229 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp228);
    bool $tmp227 = $tmp229.value;
    if (!$tmp227) goto $l230;
    panda$core$Int64 $tmp231 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp232 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp231);
    $tmp227 = $tmp232.value;
    $l230:;
    panda$core$Bit $tmp233 = { $tmp227 };
    if ($tmp233.value) goto $l234; else goto $l235;
    $l235:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s236, (panda$core$Int64) { 108 }, &$s237);
    abort();
    $l234:;
    panda$core$Int64$init$builtin_int64(&$tmp239, 1);
    panda$core$Int64 $tmp240 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp239);
    panda$core$Bit$init$builtin_bit(&$tmp241, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp238, p_index, $tmp240, $tmp241);
    int64_t $tmp243 = $tmp238.min.value;
    panda$core$Int64 i242 = { $tmp243 };
    int64_t $tmp245 = $tmp238.max.value;
    bool $tmp246 = $tmp238.inclusive.value;
    if ($tmp246) goto $l253; else goto $l254;
    $l253:;
    if ($tmp243 <= $tmp245) goto $l247; else goto $l249;
    $l254:;
    if ($tmp243 < $tmp245) goto $l247; else goto $l249;
    $l247:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp256, 1);
        panda$core$Int64 $tmp257 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i242, $tmp256);
        panda$core$Object* $tmp258 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp257);
        $tmp255 = $tmp258;
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i242, $tmp255);
        panda$core$Panda$unref$panda$core$Object($tmp255);
    }
    $l250:;
    int64_t $tmp260 = $tmp245 - i242.value;
    if ($tmp246) goto $l261; else goto $l262;
    $l261:;
    if ((uint64_t) $tmp260 >= 1) goto $l259; else goto $l249;
    $l262:;
    if ((uint64_t) $tmp260 > 1) goto $l259; else goto $l249;
    $l259:;
    i242.value += 1;
    goto $l247;
    $l249:;
    panda$core$Int64$init$builtin_int64(&$tmp265, 1);
    panda$core$Int64 $tmp266 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp265);
    self->count = $tmp266;
    {
        $tmp267 = self->data;
        $tmp268 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp267[$tmp268.value]);
        $tmp269 = NULL;
        panda$core$Panda$ref$panda$core$Object($tmp269);
        $tmp267[$tmp268.value] = $tmp269;
    }
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Int64 $tmp270;
    panda$core$Range$LTpanda$core$Int64$GT $tmp271;
    panda$core$Int64 $tmp272;
    panda$core$Bit $tmp273;
    panda$core$Object** $tmp287;
    panda$core$Int64 $tmp288;
    panda$core$Object* $tmp289;
    panda$core$Int64$init$builtin_int64(&$tmp270, 0);
    self->count = $tmp270;
    panda$core$Int64$init$builtin_int64(&$tmp272, 0);
    panda$core$Bit$init$builtin_bit(&$tmp273, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp271, $tmp272, self->capacity, $tmp273);
    int64_t $tmp275 = $tmp271.min.value;
    panda$core$Int64 i274 = { $tmp275 };
    int64_t $tmp277 = $tmp271.max.value;
    bool $tmp278 = $tmp271.inclusive.value;
    if ($tmp278) goto $l285; else goto $l286;
    $l285:;
    if ($tmp275 <= $tmp277) goto $l279; else goto $l281;
    $l286:;
    if ($tmp275 < $tmp277) goto $l279; else goto $l281;
    $l279:;
    {
        {
            $tmp287 = self->data;
            $tmp288 = i274;
            panda$core$Panda$unref$panda$core$Object($tmp287[$tmp288.value]);
            $tmp289 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp289);
            $tmp287[$tmp288.value] = $tmp289;
        }
    }
    $l282:;
    int64_t $tmp291 = $tmp277 - i274.value;
    if ($tmp278) goto $l292; else goto $l293;
    $l292:;
    if ((uint64_t) $tmp291 >= 1) goto $l290; else goto $l281;
    $l293:;
    if ((uint64_t) $tmp291 > 1) goto $l290; else goto $l281;
    $l290:;
    i274.value += 1;
    goto $l279;
    $l281:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result299 = NULL;
    panda$core$MutableString* $tmp300;
    panda$core$MutableString* $tmp301;
    panda$core$Char8 $tmp303;
    panda$core$UInt8 $tmp304;
    panda$core$String* separator305 = NULL;
    panda$core$String* $tmp306;
    panda$collections$Iterator* Iter$129$9311 = NULL;
    panda$collections$Iterator* $tmp312;
    panda$collections$Iterator* $tmp313;
    panda$core$Object* v329 = NULL;
    panda$core$Object* $tmp330;
    panda$core$Object* $tmp331;
    panda$core$String* $tmp336;
    panda$core$String* $tmp337;
    panda$core$Char8 $tmp342;
    panda$core$UInt8 $tmp343;
    panda$core$String* $returnValue344;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    int $tmp298;
    {
        panda$core$MutableString* $tmp302 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp302);
        $tmp301 = $tmp302;
        $tmp300 = $tmp301;
        result299 = $tmp300;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
        panda$core$UInt8$init$builtin_uint8(&$tmp304, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp303, $tmp304);
        panda$core$MutableString$append$panda$core$Char8(result299, $tmp303);
        $tmp306 = &$s307;
        separator305 = $tmp306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
        {
            int $tmp310;
            {
                ITable* $tmp314 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp314 = $tmp314->next;
                }
                $fn316 $tmp315 = $tmp314->methods[0];
                panda$collections$Iterator* $tmp317 = $tmp315(((panda$collections$Iterable*) self));
                $tmp313 = $tmp317;
                $tmp312 = $tmp313;
                Iter$129$9311 = $tmp312;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
                $l318:;
                ITable* $tmp321 = Iter$129$9311->$class->itable;
                while ($tmp321->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp321 = $tmp321->next;
                }
                $fn323 $tmp322 = $tmp321->methods[0];
                panda$core$Bit $tmp324 = $tmp322(Iter$129$9311);
                panda$core$Bit $tmp325 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp324);
                bool $tmp320 = $tmp325.value;
                if (!$tmp320) goto $l319;
                {
                    int $tmp328;
                    {
                        ITable* $tmp332 = Iter$129$9311->$class->itable;
                        while ($tmp332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp332 = $tmp332->next;
                        }
                        $fn334 $tmp333 = $tmp332->methods[1];
                        panda$core$Object* $tmp335 = $tmp333(Iter$129$9311);
                        $tmp331 = $tmp335;
                        $tmp330 = $tmp331;
                        v329 = $tmp330;
                        panda$core$Panda$ref$panda$core$Object($tmp330);
                        panda$core$Panda$unref$panda$core$Object($tmp331);
                        panda$core$MutableString$append$panda$core$String(result299, separator305);
                        {
                            $tmp336 = separator305;
                            $tmp337 = &$s338;
                            separator305 = $tmp337;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp337));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
                        }
                        if (((panda$core$Bit) { v329 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result299, v329);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result299, &$s339);
                        }
                        }
                    }
                    $tmp328 = -1;
                    goto $l326;
                    $l326:;
                    panda$core$Panda$unref$panda$core$Object(v329);
                    v329 = NULL;
                    switch ($tmp328) {
                        case -1: goto $l340;
                    }
                    $l340:;
                }
                goto $l318;
                $l319:;
            }
            $tmp310 = -1;
            goto $l308;
            $l308:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$129$9311));
            Iter$129$9311 = NULL;
            switch ($tmp310) {
                case -1: goto $l341;
            }
            $l341:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp343, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp342, $tmp343);
        panda$core$MutableString$append$panda$core$Char8(result299, $tmp342);
        panda$core$String* $tmp347 = panda$core$MutableString$finish$R$panda$core$String(result299);
        $tmp346 = $tmp347;
        $tmp345 = $tmp346;
        $returnValue344 = $tmp345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
        $tmp298 = 0;
        goto $l296;
        $l348:;
        return $returnValue344;
    }
    $l296:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator305));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result299));
    result299 = NULL;
    separator305 = NULL;
    switch ($tmp298) {
        case 0: goto $l348;
    }
    $l350:;
    abort();
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp351;
    panda$core$Class* $tmp352;
    panda$collections$ImmutableArray* $tmp353;
    panda$core$Int64 $tmp355;
    panda$collections$ImmutableArray* $returnValue356;
    panda$collections$ImmutableArray* $tmp357;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp351 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp354 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp354);
        $tmp353 = $tmp354;
        $tmp352 = ((panda$core$Object*) $tmp353)->$class;
        ((panda$core$Object*) self)->$class = $tmp352;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
    }
    panda$core$Int64$init$builtin_int64(&$tmp355, -1);
    self->capacity = $tmp355;
    $tmp357 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue356 = $tmp357;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
    return $returnValue356;
}

