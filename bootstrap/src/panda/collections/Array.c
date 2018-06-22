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
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$List = { (panda$core$Class*) &panda$collections$List$class, NULL, { panda$collections$List$filterInPlace$$LPpanda$collections$List$T$RP$EQ$GT$LPpanda$core$Bit$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$collections$Array$_panda$collections$List, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$ListWriter = { (panda$core$Class*) &panda$collections$ListWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Iterable, { panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT, panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$clear, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn18)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn25)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn36)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn147)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn154)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn165)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn229)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn247)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn258)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn385)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn392)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn403)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 3442386153649448963, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 3507653011134952618, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x3e\x29", 162, -1293302702411835018, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -666229640664597948, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

void panda$collections$Array$init(panda$collections$Array* self) {
    panda$core$Int64 $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp2, 16);
    panda$collections$Array$init$panda$core$Int64(self, $tmp2);
}
void panda$collections$Array$init$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->count = $tmp3;
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
    self->count = $tmp40;
    self->data = p_data;
    self->count = p_count;
    self->capacity = p_count;
}
void panda$collections$Array$cleanup(panda$collections$Array* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp44;
    panda$core$Int64 $tmp45;
    panda$core$Bit $tmp46;
    int $tmp43;
    {
        panda$core$Int64$init$builtin_int64(&$tmp45, 0);
        panda$core$Bit$init$builtin_bit(&$tmp46, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp44, $tmp45, self->count, $tmp46);
        int64_t $tmp48 = $tmp44.min.value;
        panda$core$Int64 i47 = { $tmp48 };
        int64_t $tmp50 = $tmp44.max.value;
        bool $tmp51 = $tmp44.inclusive.value;
        if ($tmp51) goto $l58; else goto $l59;
        $l58:;
        if ($tmp48 <= $tmp50) goto $l52; else goto $l54;
        $l59:;
        if ($tmp48 < $tmp50) goto $l52; else goto $l54;
        $l52:;
        {
            if (((panda$core$Bit) { self->data[i47.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(self->data[i47.value]);
            }
            }
        }
        $l55:;
        int64_t $tmp61 = $tmp50 - i47.value;
        if ($tmp51) goto $l62; else goto $l63;
        $l62:;
        if ((uint64_t) $tmp61 >= 1) goto $l60; else goto $l54;
        $l63:;
        if ((uint64_t) $tmp61 > 1) goto $l60; else goto $l54;
        $l60:;
        i47.value += 1;
        goto $l52;
        $l54:;
        pandaFree(self->data);
    }
    $tmp43 = -1;
    goto $l41;
    $l41:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp43) {
        case -1: goto $l66;
    }
    $l66:;
}
panda$core$Object* panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp68;
    panda$core$Object* $returnValue78;
    panda$core$Object* $tmp79;
    panda$core$Int64$init$builtin_int64(&$tmp68, 0);
    panda$core$Bit $tmp69 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp68);
    bool $tmp67 = $tmp69.value;
    if (!$tmp67) goto $l70;
    panda$core$Int64 $tmp71 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp72 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp71);
    $tmp67 = $tmp72.value;
    $l70:;
    panda$core$Bit $tmp73 = { $tmp67 };
    if ($tmp73.value) goto $l74; else goto $l75;
    $l75:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s76, (panda$core$Int64) { 71 }, &$s77);
    abort();
    $l74:;
    $tmp79 = self->data[p_index.value];
    $returnValue78 = $tmp79;
    panda$core$Panda$ref$panda$core$Object($tmp79);
    return $returnValue78;
}
void panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Int64 $tmp82;
    panda$core$Object** $tmp92;
    panda$core$Int64 $tmp93;
    panda$core$Object* $tmp94;
    panda$core$Int64$init$builtin_int64(&$tmp82, 0);
    panda$core$Bit $tmp83 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp82);
    bool $tmp81 = $tmp83.value;
    if (!$tmp81) goto $l84;
    panda$core$Int64 $tmp85 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp86 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp85);
    $tmp81 = $tmp86.value;
    $l84:;
    panda$core$Bit $tmp87 = { $tmp81 };
    if ($tmp87.value) goto $l88; else goto $l89;
    $l89:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s90, (panda$core$Int64) { 76 }, &$s91);
    abort();
    $l88:;
    {
        $tmp92 = self->data;
        $tmp93 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp92[$tmp93.value]);
        $tmp94 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp94);
        $tmp92[$tmp93.value] = $tmp94;
    }
}
void panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$GT p_range, panda$collections$ListView* p_list) {
    panda$core$Int64 max100;
    panda$core$Int64 $tmp102;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp104;
    panda$core$Int64 $tmp105;
    panda$core$Bit $tmp106;
    panda$core$Object* $tmp125;
    panda$core$Int64 index138;
    panda$collections$Iterator* Iter$91$9142 = NULL;
    panda$collections$Iterator* $tmp143;
    panda$collections$Iterator* $tmp144;
    panda$core$Object* v160 = NULL;
    panda$core$Object* $tmp161;
    panda$core$Object* $tmp162;
    panda$core$Int64 $tmp167;
    panda$core$Bit $tmp95 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_range.min, p_range.max);
    if ($tmp95.value) goto $l96; else goto $l97;
    $l97:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s98, (panda$core$Int64) { 81 }, &$s99);
    abort();
    $l96:;
    max100 = p_range.max;
    panda$core$Bit $tmp101 = panda$core$Bit$$NOT$R$panda$core$Bit(p_range.inclusive);
    if ($tmp101.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp102, 1);
        panda$core$Int64 $tmp103 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max100, $tmp102);
        max100 = $tmp103;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp105, -1);
    panda$core$Bit$init$builtin_bit(&$tmp106, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp104, max100, p_range.min, $tmp105, $tmp106);
    int64_t $tmp108 = $tmp104.start.value;
    panda$core$Int64 i107 = { $tmp108 };
    int64_t $tmp110 = $tmp104.end.value;
    int64_t $tmp111 = $tmp104.step.value;
    bool $tmp112 = $tmp104.inclusive.value;
    bool $tmp119 = $tmp111 > 0;
    if ($tmp119) goto $l117; else goto $l118;
    $l117:;
    if ($tmp112) goto $l120; else goto $l121;
    $l120:;
    if ($tmp108 <= $tmp110) goto $l113; else goto $l115;
    $l121:;
    if ($tmp108 < $tmp110) goto $l113; else goto $l115;
    $l118:;
    if ($tmp112) goto $l122; else goto $l123;
    $l122:;
    if ($tmp108 >= $tmp110) goto $l113; else goto $l115;
    $l123:;
    if ($tmp108 > $tmp110) goto $l113; else goto $l115;
    $l113:;
    {
        panda$core$Object* $tmp126 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(self, i107);
        $tmp125 = $tmp126;
        panda$core$Panda$unref$panda$core$Object($tmp125);
    }
    $l116:;
    if ($tmp119) goto $l128; else goto $l129;
    $l128:;
    int64_t $tmp130 = $tmp110 - i107.value;
    if ($tmp112) goto $l131; else goto $l132;
    $l131:;
    if ((uint64_t) $tmp130 >= $tmp111) goto $l127; else goto $l115;
    $l132:;
    if ((uint64_t) $tmp130 > $tmp111) goto $l127; else goto $l115;
    $l129:;
    int64_t $tmp134 = i107.value - $tmp110;
    if ($tmp112) goto $l135; else goto $l136;
    $l135:;
    if ((uint64_t) $tmp134 >= -$tmp111) goto $l127; else goto $l115;
    $l136:;
    if ((uint64_t) $tmp134 > -$tmp111) goto $l127; else goto $l115;
    $l127:;
    i107.value += $tmp111;
    goto $l113;
    $l115:;
    index138 = p_range.min;
    {
        int $tmp141;
        {
            ITable* $tmp145 = ((panda$collections$Iterable*) p_list)->$class->itable;
            while ($tmp145->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp145 = $tmp145->next;
            }
            $fn147 $tmp146 = $tmp145->methods[0];
            panda$collections$Iterator* $tmp148 = $tmp146(((panda$collections$Iterable*) p_list));
            $tmp144 = $tmp148;
            $tmp143 = $tmp144;
            Iter$91$9142 = $tmp143;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
            $l149:;
            ITable* $tmp152 = Iter$91$9142->$class->itable;
            while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp152 = $tmp152->next;
            }
            $fn154 $tmp153 = $tmp152->methods[0];
            panda$core$Bit $tmp155 = $tmp153(Iter$91$9142);
            panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
            bool $tmp151 = $tmp156.value;
            if (!$tmp151) goto $l150;
            {
                int $tmp159;
                {
                    ITable* $tmp163 = Iter$91$9142->$class->itable;
                    while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp163 = $tmp163->next;
                    }
                    $fn165 $tmp164 = $tmp163->methods[1];
                    panda$core$Object* $tmp166 = $tmp164(Iter$91$9142);
                    $tmp162 = $tmp166;
                    $tmp161 = $tmp162;
                    v160 = $tmp161;
                    panda$core$Panda$ref$panda$core$Object($tmp161);
                    panda$core$Panda$unref$panda$core$Object($tmp162);
                    panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(self, index138, v160);
                    panda$core$Int64$init$builtin_int64(&$tmp167, 1);
                    panda$core$Int64 $tmp168 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index138, $tmp167);
                    index138 = $tmp168;
                }
                $tmp159 = -1;
                goto $l157;
                $l157:;
                panda$core$Panda$unref$panda$core$Object(v160);
                v160 = NULL;
                switch ($tmp159) {
                    case -1: goto $l169;
                }
                $l169:;
            }
            goto $l149;
            $l150:;
        }
        $tmp141 = -1;
        goto $l139;
        $l139:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$91$9142));
        Iter$91$9142 = NULL;
        switch ($tmp141) {
            case -1: goto $l170;
        }
        $l170:;
    }
}
void panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_range, panda$collections$ListView* p_list) {
    panda$core$Int64$nullable min171;
    panda$core$Int64 $tmp172;
    panda$core$Int64$nullable max173;
    panda$core$Range$LTpanda$core$Int64$GT $tmp175;
    min171 = p_range.min;
    if (((panda$core$Bit) { !min171.nonnull }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp172, 0);
        min171 = ((panda$core$Int64$nullable) { $tmp172, true });
    }
    }
    max173 = p_range.max;
    if (((panda$core$Bit) { !max173.nonnull }).value) {
    {
        panda$core$Int64 $tmp174 = panda$collections$Array$get_count$R$panda$core$Int64(self);
        max173 = ((panda$core$Int64$nullable) { $tmp174, true });
    }
    }
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp175, ((panda$core$Int64) min171.value), ((panda$core$Int64) max173.value), p_range.inclusive);
    panda$collections$Array$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$collections$ListView$LTpanda$collections$Array$T$GT(self, $tmp175, p_list);
}
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Int64 $tmp176;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp178;
    panda$core$Int64 $tmp179;
    panda$core$Bit $tmp180;
    panda$core$Object** $tmp199;
    panda$core$Int64 $tmp200;
    panda$core$Object* $tmp201;
    panda$core$Int64 $tmp202;
    panda$core$Int64 $tmp215;
    panda$core$Object** $tmp217;
    panda$core$Int64 $tmp218;
    panda$core$Object* $tmp219;
    panda$core$Int64$init$builtin_int64(&$tmp176, 1);
    panda$core$Int64 $tmp177 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp176);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp177);
    panda$core$Int64$init$builtin_int64(&$tmp179, -1);
    panda$core$Bit$init$builtin_bit(&$tmp180, false);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp178, self->count, p_index, $tmp179, $tmp180);
    int64_t $tmp182 = $tmp178.start.value;
    panda$core$Int64 i181 = { $tmp182 };
    int64_t $tmp184 = $tmp178.end.value;
    int64_t $tmp185 = $tmp178.step.value;
    bool $tmp186 = $tmp178.inclusive.value;
    bool $tmp193 = $tmp185 > 0;
    if ($tmp193) goto $l191; else goto $l192;
    $l191:;
    if ($tmp186) goto $l194; else goto $l195;
    $l194:;
    if ($tmp182 <= $tmp184) goto $l187; else goto $l189;
    $l195:;
    if ($tmp182 < $tmp184) goto $l187; else goto $l189;
    $l192:;
    if ($tmp186) goto $l196; else goto $l197;
    $l196:;
    if ($tmp182 >= $tmp184) goto $l187; else goto $l189;
    $l197:;
    if ($tmp182 > $tmp184) goto $l187; else goto $l189;
    $l187:;
    {
        {
            $tmp199 = self->data;
            $tmp200 = i181;
            panda$core$Panda$unref$panda$core$Object($tmp199[$tmp200.value]);
            panda$core$Int64$init$builtin_int64(&$tmp202, 1);
            panda$core$Int64 $tmp203 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i181, $tmp202);
            $tmp201 = self->data[$tmp203.value];
            panda$core$Panda$ref$panda$core$Object($tmp201);
            $tmp199[$tmp200.value] = $tmp201;
        }
    }
    $l190:;
    if ($tmp193) goto $l205; else goto $l206;
    $l205:;
    int64_t $tmp207 = $tmp184 - i181.value;
    if ($tmp186) goto $l208; else goto $l209;
    $l208:;
    if ((uint64_t) $tmp207 >= $tmp185) goto $l204; else goto $l189;
    $l209:;
    if ((uint64_t) $tmp207 > $tmp185) goto $l204; else goto $l189;
    $l206:;
    int64_t $tmp211 = i181.value - $tmp184;
    if ($tmp186) goto $l212; else goto $l213;
    $l212:;
    if ((uint64_t) $tmp211 >= -$tmp185) goto $l204; else goto $l189;
    $l213:;
    if ((uint64_t) $tmp211 > -$tmp185) goto $l204; else goto $l189;
    $l204:;
    i181.value += $tmp185;
    goto $l187;
    $l189:;
    panda$core$Int64$init$builtin_int64(&$tmp215, 1);
    panda$core$Int64 $tmp216 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp215);
    self->count = $tmp216;
    {
        $tmp217 = self->data;
        $tmp218 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp217[$tmp218.value]);
        $tmp219 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp219);
        $tmp217[$tmp218.value] = $tmp219;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp220;
    panda$core$Object** $tmp222;
    panda$core$Int64 $tmp223;
    panda$core$Object* $tmp224;
    panda$core$Int64 $tmp225;
    panda$core$Int64$init$builtin_int64(&$tmp220, 1);
    panda$core$Int64 $tmp221 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp220);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp221);
    {
        $tmp222 = self->data;
        $tmp223 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp222[$tmp223.value]);
        $tmp224 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp224);
        $tmp222[$tmp223.value] = $tmp224;
    }
    panda$core$Int64$init$builtin_int64(&$tmp225, 1);
    panda$core$Int64 $tmp226 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp225);
    self->count = $tmp226;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$131$9235 = NULL;
    panda$collections$Iterator* $tmp236;
    panda$collections$Iterator* $tmp237;
    panda$core$Object* v253 = NULL;
    panda$core$Object* $tmp254;
    panda$core$Object* $tmp255;
    panda$core$Object** $tmp260;
    panda$core$Int64 $tmp261;
    panda$core$Object* $tmp262;
    panda$core$Int64 $tmp263;
    ITable* $tmp227 = p_c->$class->itable;
    while ($tmp227->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp227 = $tmp227->next;
    }
    $fn229 $tmp228 = $tmp227->methods[0];
    panda$core$Int64 $tmp230 = $tmp228(p_c);
    panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp230);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp231);
    {
        int $tmp234;
        {
            ITable* $tmp238 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp238 = $tmp238->next;
            }
            $fn240 $tmp239 = $tmp238->methods[0];
            panda$collections$Iterator* $tmp241 = $tmp239(((panda$collections$Iterable*) p_c));
            $tmp237 = $tmp241;
            $tmp236 = $tmp237;
            Iter$131$9235 = $tmp236;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
            $l242:;
            ITable* $tmp245 = Iter$131$9235->$class->itable;
            while ($tmp245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp245 = $tmp245->next;
            }
            $fn247 $tmp246 = $tmp245->methods[0];
            panda$core$Bit $tmp248 = $tmp246(Iter$131$9235);
            panda$core$Bit $tmp249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp248);
            bool $tmp244 = $tmp249.value;
            if (!$tmp244) goto $l243;
            {
                int $tmp252;
                {
                    ITable* $tmp256 = Iter$131$9235->$class->itable;
                    while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp256 = $tmp256->next;
                    }
                    $fn258 $tmp257 = $tmp256->methods[1];
                    panda$core$Object* $tmp259 = $tmp257(Iter$131$9235);
                    $tmp255 = $tmp259;
                    $tmp254 = $tmp255;
                    v253 = $tmp254;
                    panda$core$Panda$ref$panda$core$Object($tmp254);
                    panda$core$Panda$unref$panda$core$Object($tmp255);
                    {
                        $tmp260 = self->data;
                        $tmp261 = self->count;
                        panda$core$Panda$unref$panda$core$Object($tmp260[$tmp261.value]);
                        $tmp262 = v253;
                        panda$core$Panda$ref$panda$core$Object($tmp262);
                        $tmp260[$tmp261.value] = $tmp262;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp263, 1);
                    panda$core$Int64 $tmp264 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp263);
                    self->count = $tmp264;
                }
                $tmp252 = -1;
                goto $l250;
                $l250:;
                panda$core$Panda$unref$panda$core$Object(v253);
                v253 = NULL;
                switch ($tmp252) {
                    case -1: goto $l265;
                }
                $l265:;
            }
            goto $l242;
            $l243:;
        }
        $tmp234 = -1;
        goto $l232;
        $l232:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$131$9235));
        Iter$131$9235 = NULL;
        switch ($tmp234) {
            case -1: goto $l266;
        }
        $l266:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp267;
    panda$core$Int64 oldCapacity273;
    panda$core$Int64 $tmp274;
    panda$core$Int64 $tmp280;
    panda$core$Int64$init$builtin_int64(&$tmp267, 0);
    panda$core$Bit $tmp268 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp267);
    if ($tmp268.value) goto $l269; else goto $l270;
    $l270:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s271, (panda$core$Int64) { 138 });
    abort();
    $l269:;
    panda$core$Bit $tmp272 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp272.value) {
    {
        return;
    }
    }
    oldCapacity273 = self->capacity;
    panda$core$Int64$init$builtin_int64(&$tmp274, 1);
    panda$core$Int64 $tmp275 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp274);
    self->capacity = $tmp275;
    $l276:;
    panda$core$Bit $tmp279 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp278 = $tmp279.value;
    if (!$tmp278) goto $l277;
    {
        panda$core$Int64$init$builtin_int64(&$tmp280, 2);
        panda$core$Int64 $tmp281 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp280);
        self->capacity = $tmp281;
    }
    goto $l276;
    $l277:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity273.value * 8, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue282;
    $returnValue282 = self->count;
    return $returnValue282;
}
panda$core$Object* panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp285;
    panda$core$Object* result298 = NULL;
    panda$core$Object* $tmp299;
    panda$core$Object* $tmp300;
    panda$core$Range$LTpanda$core$Int64$GT $tmp302;
    panda$core$Int64 $tmp303;
    panda$core$Bit $tmp305;
    panda$core$Object* $tmp319;
    panda$core$Int64 $tmp320;
    panda$core$Int64 $tmp329;
    panda$core$Object** $tmp331;
    panda$core$Int64 $tmp332;
    panda$core$Object* $tmp333;
    panda$core$Object* $returnValue334;
    panda$core$Object* $tmp335;
    panda$core$Int64$init$builtin_int64(&$tmp285, 0);
    panda$core$Bit $tmp286 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp285);
    bool $tmp284 = $tmp286.value;
    if (!$tmp284) goto $l287;
    panda$core$Int64 $tmp288 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp289 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp288);
    $tmp284 = $tmp289.value;
    $l287:;
    panda$core$Bit $tmp290 = { $tmp284 };
    if ($tmp290.value) goto $l291; else goto $l292;
    $l292:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s293, (panda$core$Int64) { 156 }, &$s294);
    abort();
    $l291:;
    int $tmp297;
    {
        panda$core$Object* $tmp301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, p_index);
        $tmp300 = $tmp301;
        $tmp299 = $tmp300;
        result298 = $tmp299;
        panda$core$Panda$ref$panda$core$Object($tmp299);
        panda$core$Panda$unref$panda$core$Object($tmp300);
        panda$core$Int64$init$builtin_int64(&$tmp303, 1);
        panda$core$Int64 $tmp304 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp303);
        panda$core$Bit$init$builtin_bit(&$tmp305, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp302, p_index, $tmp304, $tmp305);
        int64_t $tmp307 = $tmp302.min.value;
        panda$core$Int64 i306 = { $tmp307 };
        int64_t $tmp309 = $tmp302.max.value;
        bool $tmp310 = $tmp302.inclusive.value;
        if ($tmp310) goto $l317; else goto $l318;
        $l317:;
        if ($tmp307 <= $tmp309) goto $l311; else goto $l313;
        $l318:;
        if ($tmp307 < $tmp309) goto $l311; else goto $l313;
        $l311:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp320, 1);
            panda$core$Int64 $tmp321 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i306, $tmp320);
            panda$core$Object* $tmp322 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp321);
            $tmp319 = $tmp322;
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i306, $tmp319);
            panda$core$Panda$unref$panda$core$Object($tmp319);
        }
        $l314:;
        int64_t $tmp324 = $tmp309 - i306.value;
        if ($tmp310) goto $l325; else goto $l326;
        $l325:;
        if ((uint64_t) $tmp324 >= 1) goto $l323; else goto $l313;
        $l326:;
        if ((uint64_t) $tmp324 > 1) goto $l323; else goto $l313;
        $l323:;
        i306.value += 1;
        goto $l311;
        $l313:;
        panda$core$Int64$init$builtin_int64(&$tmp329, 1);
        panda$core$Int64 $tmp330 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp329);
        self->count = $tmp330;
        {
            $tmp331 = self->data;
            $tmp332 = self->count;
            panda$core$Panda$unref$panda$core$Object($tmp331[$tmp332.value]);
            $tmp333 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp333);
            $tmp331[$tmp332.value] = $tmp333;
        }
        $tmp335 = result298;
        $returnValue334 = $tmp335;
        panda$core$Panda$ref$panda$core$Object($tmp335);
        $tmp297 = 0;
        goto $l295;
        $l336:;
        return $returnValue334;
    }
    $l295:;
    panda$core$Panda$unref$panda$core$Object(result298);
    result298 = NULL;
    switch ($tmp297) {
        case 0: goto $l336;
    }
    $l338:;
    abort();
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Int64 $tmp339;
    panda$core$Range$LTpanda$core$Int64$GT $tmp340;
    panda$core$Int64 $tmp341;
    panda$core$Bit $tmp342;
    panda$core$Object** $tmp356;
    panda$core$Int64 $tmp357;
    panda$core$Object* $tmp358;
    panda$core$Int64$init$builtin_int64(&$tmp339, 0);
    self->count = $tmp339;
    panda$core$Int64$init$builtin_int64(&$tmp341, 0);
    panda$core$Bit$init$builtin_bit(&$tmp342, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp340, $tmp341, self->capacity, $tmp342);
    int64_t $tmp344 = $tmp340.min.value;
    panda$core$Int64 i343 = { $tmp344 };
    int64_t $tmp346 = $tmp340.max.value;
    bool $tmp347 = $tmp340.inclusive.value;
    if ($tmp347) goto $l354; else goto $l355;
    $l354:;
    if ($tmp344 <= $tmp346) goto $l348; else goto $l350;
    $l355:;
    if ($tmp344 < $tmp346) goto $l348; else goto $l350;
    $l348:;
    {
        {
            $tmp356 = self->data;
            $tmp357 = i343;
            panda$core$Panda$unref$panda$core$Object($tmp356[$tmp357.value]);
            $tmp358 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp358);
            $tmp356[$tmp357.value] = $tmp358;
        }
    }
    $l351:;
    int64_t $tmp360 = $tmp346 - i343.value;
    if ($tmp347) goto $l361; else goto $l362;
    $l361:;
    if ((uint64_t) $tmp360 >= 1) goto $l359; else goto $l350;
    $l362:;
    if ((uint64_t) $tmp360 > 1) goto $l359; else goto $l350;
    $l359:;
    i343.value += 1;
    goto $l348;
    $l350:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result368 = NULL;
    panda$core$MutableString* $tmp369;
    panda$core$MutableString* $tmp370;
    panda$core$Char8 $tmp372;
    panda$core$UInt8 $tmp373;
    panda$core$String* separator374 = NULL;
    panda$core$String* $tmp375;
    panda$collections$Iterator* Iter$179$9380 = NULL;
    panda$collections$Iterator* $tmp381;
    panda$collections$Iterator* $tmp382;
    panda$core$Object* v398 = NULL;
    panda$core$Object* $tmp399;
    panda$core$Object* $tmp400;
    panda$core$String* $tmp405;
    panda$core$String* $tmp406;
    panda$core$Char8 $tmp411;
    panda$core$UInt8 $tmp412;
    panda$core$String* $returnValue413;
    panda$core$String* $tmp414;
    panda$core$String* $tmp415;
    int $tmp367;
    {
        panda$core$MutableString* $tmp371 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp371);
        $tmp370 = $tmp371;
        $tmp369 = $tmp370;
        result368 = $tmp369;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp369));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
        panda$core$UInt8$init$builtin_uint8(&$tmp373, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp372, $tmp373);
        panda$core$MutableString$append$panda$core$Char8(result368, $tmp372);
        $tmp375 = &$s376;
        separator374 = $tmp375;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
        {
            int $tmp379;
            {
                ITable* $tmp383 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp383->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp383 = $tmp383->next;
                }
                $fn385 $tmp384 = $tmp383->methods[0];
                panda$collections$Iterator* $tmp386 = $tmp384(((panda$collections$Iterable*) self));
                $tmp382 = $tmp386;
                $tmp381 = $tmp382;
                Iter$179$9380 = $tmp381;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp381));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp382));
                $l387:;
                ITable* $tmp390 = Iter$179$9380->$class->itable;
                while ($tmp390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp390 = $tmp390->next;
                }
                $fn392 $tmp391 = $tmp390->methods[0];
                panda$core$Bit $tmp393 = $tmp391(Iter$179$9380);
                panda$core$Bit $tmp394 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp393);
                bool $tmp389 = $tmp394.value;
                if (!$tmp389) goto $l388;
                {
                    int $tmp397;
                    {
                        ITable* $tmp401 = Iter$179$9380->$class->itable;
                        while ($tmp401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp401 = $tmp401->next;
                        }
                        $fn403 $tmp402 = $tmp401->methods[1];
                        panda$core$Object* $tmp404 = $tmp402(Iter$179$9380);
                        $tmp400 = $tmp404;
                        $tmp399 = $tmp400;
                        v398 = $tmp399;
                        panda$core$Panda$ref$panda$core$Object($tmp399);
                        panda$core$Panda$unref$panda$core$Object($tmp400);
                        panda$core$MutableString$append$panda$core$String(result368, separator374);
                        {
                            $tmp405 = separator374;
                            $tmp406 = &$s407;
                            separator374 = $tmp406;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp406));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
                        }
                        if (((panda$core$Bit) { v398 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result368, v398);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result368, &$s408);
                        }
                        }
                    }
                    $tmp397 = -1;
                    goto $l395;
                    $l395:;
                    panda$core$Panda$unref$panda$core$Object(v398);
                    v398 = NULL;
                    switch ($tmp397) {
                        case -1: goto $l409;
                    }
                    $l409:;
                }
                goto $l387;
                $l388:;
            }
            $tmp379 = -1;
            goto $l377;
            $l377:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$179$9380));
            Iter$179$9380 = NULL;
            switch ($tmp379) {
                case -1: goto $l410;
            }
            $l410:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp412, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp411, $tmp412);
        panda$core$MutableString$append$panda$core$Char8(result368, $tmp411);
        panda$core$String* $tmp416 = panda$core$MutableString$finish$R$panda$core$String(result368);
        $tmp415 = $tmp416;
        $tmp414 = $tmp415;
        $returnValue413 = $tmp414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
        $tmp367 = 0;
        goto $l365;
        $l417:;
        return $returnValue413;
    }
    $l365:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator374));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result368));
    result368 = NULL;
    separator374 = NULL;
    switch ($tmp367) {
        case 0: goto $l417;
    }
    $l419:;
    abort();
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp420;
    panda$core$Class* $tmp421;
    panda$collections$ImmutableArray* $tmp422;
    panda$core$Int64 $tmp424;
    panda$collections$ImmutableArray* $returnValue425;
    panda$collections$ImmutableArray* $tmp426;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp420 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp423 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp423);
        $tmp422 = $tmp423;
        $tmp421 = ((panda$core$Object*) $tmp422)->$class;
        ((panda$core$Object*) self)->$class = $tmp421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
    }
    panda$core$Int64$init$builtin_int64(&$tmp424, -1);
    self->capacity = $tmp424;
    $tmp426 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue425 = $tmp426;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
    return $returnValue425;
}

