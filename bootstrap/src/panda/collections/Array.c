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

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

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
typedef panda$collections$Iterator* (*$fn407)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn414)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn425)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 3442386153649448963, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 3507653011134952618, NULL };
static panda$core$String $s98 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x2c\x20\x6c\x69\x73\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x3e\x29", 162, -1293302702411835018, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -666229640664597948, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    panda$collections$Iterator* Iter$29$913 = NULL;
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
            Iter$29$913 = $tmp14;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
            $l20:;
            ITable* $tmp23 = Iter$29$913->$class->itable;
            while ($tmp23->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp23 = $tmp23->next;
            }
            $fn25 $tmp24 = $tmp23->methods[0];
            panda$core$Bit $tmp26 = $tmp24(Iter$29$913);
            panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
            bool $tmp22 = $tmp27.value;
            if (!$tmp22) goto $l21;
            {
                int $tmp30;
                {
                    ITable* $tmp34 = Iter$29$913->$class->itable;
                    while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp34 = $tmp34->next;
                    }
                    $fn36 $tmp35 = $tmp34->methods[1];
                    panda$core$Object* $tmp37 = $tmp35(Iter$29$913);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$29$913));
        Iter$29$913 = NULL;
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s76, (panda$core$Int64) { 52 }, &$s77);
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
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s90, (panda$core$Int64) { 57 }, &$s91);
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
    panda$collections$Iterator* Iter$72$9142 = NULL;
    panda$collections$Iterator* $tmp143;
    panda$collections$Iterator* $tmp144;
    panda$core$Object* v160 = NULL;
    panda$core$Object* $tmp161;
    panda$core$Object* $tmp162;
    panda$core$Int64 $tmp167;
    panda$core$Bit $tmp95 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_range.min, p_range.max);
    if ($tmp95.value) goto $l96; else goto $l97;
    $l97:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s98, (panda$core$Int64) { 62 }, &$s99);
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
            Iter$72$9142 = $tmp143;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
            $l149:;
            ITable* $tmp152 = Iter$72$9142->$class->itable;
            while ($tmp152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp152 = $tmp152->next;
            }
            $fn154 $tmp153 = $tmp152->methods[0];
            panda$core$Bit $tmp155 = $tmp153(Iter$72$9142);
            panda$core$Bit $tmp156 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp155);
            bool $tmp151 = $tmp156.value;
            if (!$tmp151) goto $l150;
            {
                int $tmp159;
                {
                    ITable* $tmp163 = Iter$72$9142->$class->itable;
                    while ($tmp163->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp163 = $tmp163->next;
                    }
                    $fn165 $tmp164 = $tmp163->methods[1];
                    panda$core$Object* $tmp166 = $tmp164(Iter$72$9142);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$72$9142));
        Iter$72$9142 = NULL;
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
    panda$collections$Iterator* Iter$112$9235 = NULL;
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
            Iter$112$9235 = $tmp236;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp237));
            $l242:;
            ITable* $tmp245 = Iter$112$9235->$class->itable;
            while ($tmp245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp245 = $tmp245->next;
            }
            $fn247 $tmp246 = $tmp245->methods[0];
            panda$core$Bit $tmp248 = $tmp246(Iter$112$9235);
            panda$core$Bit $tmp249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp248);
            bool $tmp244 = $tmp249.value;
            if (!$tmp244) goto $l243;
            {
                int $tmp252;
                {
                    ITable* $tmp256 = Iter$112$9235->$class->itable;
                    while ($tmp256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp256 = $tmp256->next;
                    }
                    $fn258 $tmp257 = $tmp256->methods[1];
                    panda$core$Object* $tmp259 = $tmp257(Iter$112$9235);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$112$9235));
        Iter$112$9235 = NULL;
        switch ($tmp234) {
            case -1: goto $l266;
        }
        $l266:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp267;
    panda$core$Int64 oldCapacity273;
    panda$core$Int64 $tmp278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp280;
    panda$core$Bit $tmp281;
    panda$core$Int64$init$builtin_int64(&$tmp267, 0);
    panda$core$Bit $tmp268 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp267);
    if ($tmp268.value) goto $l269; else goto $l270;
    $l270:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s271, (panda$core$Int64) { 119 });
    abort();
    $l269:;
    panda$core$Bit $tmp272 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp272.value) {
    {
        return;
    }
    }
    oldCapacity273 = self->capacity;
    $l274:;
    panda$core$Bit $tmp277 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp276 = $tmp277.value;
    if (!$tmp276) goto $l275;
    {
        panda$core$Int64$init$builtin_int64(&$tmp278, 2);
        panda$core$Int64 $tmp279 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp278);
        self->capacity = $tmp279;
    }
    goto $l274;
    $l275:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity273.value * 8, self->capacity.value * 8));
    panda$core$Bit$init$builtin_bit(&$tmp281, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp280, oldCapacity273, self->capacity, $tmp281);
    int64_t $tmp283 = $tmp280.min.value;
    panda$core$Int64 i282 = { $tmp283 };
    int64_t $tmp285 = $tmp280.max.value;
    bool $tmp286 = $tmp280.inclusive.value;
    if ($tmp286) goto $l293; else goto $l294;
    $l293:;
    if ($tmp283 <= $tmp285) goto $l287; else goto $l289;
    $l294:;
    if ($tmp283 < $tmp285) goto $l287; else goto $l289;
    $l287:;
    {
        if (((panda$core$Bit) { self->data[i282.value] == NULL }).value) goto $l295; else goto $l296;
        $l296:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s297, (panda$core$Int64) { 129 });
        abort();
        $l295:;
    }
    $l290:;
    int64_t $tmp299 = $tmp285 - i282.value;
    if ($tmp286) goto $l300; else goto $l301;
    $l300:;
    if ((uint64_t) $tmp299 >= 1) goto $l298; else goto $l289;
    $l301:;
    if ((uint64_t) $tmp299 > 1) goto $l298; else goto $l289;
    $l298:;
    i282.value += 1;
    goto $l287;
    $l289:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue304;
    $returnValue304 = self->count;
    return $returnValue304;
}
panda$core$Object* panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp307;
    panda$core$Object* result320 = NULL;
    panda$core$Object* $tmp321;
    panda$core$Object* $tmp322;
    panda$core$Range$LTpanda$core$Int64$GT $tmp324;
    panda$core$Int64 $tmp325;
    panda$core$Bit $tmp327;
    panda$core$Object* $tmp341;
    panda$core$Int64 $tmp342;
    panda$core$Int64 $tmp351;
    panda$core$Object** $tmp353;
    panda$core$Int64 $tmp354;
    panda$core$Object* $tmp355;
    panda$core$Object* $returnValue356;
    panda$core$Object* $tmp357;
    panda$core$Int64$init$builtin_int64(&$tmp307, 0);
    panda$core$Bit $tmp308 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp307);
    bool $tmp306 = $tmp308.value;
    if (!$tmp306) goto $l309;
    panda$core$Int64 $tmp310 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp311 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp310);
    $tmp306 = $tmp311.value;
    $l309:;
    panda$core$Bit $tmp312 = { $tmp306 };
    if ($tmp312.value) goto $l313; else goto $l314;
    $l314:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s315, (panda$core$Int64) { 139 }, &$s316);
    abort();
    $l313:;
    int $tmp319;
    {
        panda$core$Object* $tmp323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, p_index);
        $tmp322 = $tmp323;
        $tmp321 = $tmp322;
        result320 = $tmp321;
        panda$core$Panda$ref$panda$core$Object($tmp321);
        panda$core$Panda$unref$panda$core$Object($tmp322);
        panda$core$Int64$init$builtin_int64(&$tmp325, 1);
        panda$core$Int64 $tmp326 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp325);
        panda$core$Bit$init$builtin_bit(&$tmp327, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp324, p_index, $tmp326, $tmp327);
        int64_t $tmp329 = $tmp324.min.value;
        panda$core$Int64 i328 = { $tmp329 };
        int64_t $tmp331 = $tmp324.max.value;
        bool $tmp332 = $tmp324.inclusive.value;
        if ($tmp332) goto $l339; else goto $l340;
        $l339:;
        if ($tmp329 <= $tmp331) goto $l333; else goto $l335;
        $l340:;
        if ($tmp329 < $tmp331) goto $l333; else goto $l335;
        $l333:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp342, 1);
            panda$core$Int64 $tmp343 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i328, $tmp342);
            panda$core$Object* $tmp344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp343);
            $tmp341 = $tmp344;
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i328, $tmp341);
            panda$core$Panda$unref$panda$core$Object($tmp341);
        }
        $l336:;
        int64_t $tmp346 = $tmp331 - i328.value;
        if ($tmp332) goto $l347; else goto $l348;
        $l347:;
        if ((uint64_t) $tmp346 >= 1) goto $l345; else goto $l335;
        $l348:;
        if ((uint64_t) $tmp346 > 1) goto $l345; else goto $l335;
        $l345:;
        i328.value += 1;
        goto $l333;
        $l335:;
        panda$core$Int64$init$builtin_int64(&$tmp351, 1);
        panda$core$Int64 $tmp352 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp351);
        self->count = $tmp352;
        {
            $tmp353 = self->data;
            $tmp354 = self->count;
            panda$core$Panda$unref$panda$core$Object($tmp353[$tmp354.value]);
            $tmp355 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp355);
            $tmp353[$tmp354.value] = $tmp355;
        }
        $tmp357 = result320;
        $returnValue356 = $tmp357;
        panda$core$Panda$ref$panda$core$Object($tmp357);
        $tmp319 = 0;
        goto $l317;
        $l358:;
        return $returnValue356;
    }
    $l317:;
    panda$core$Panda$unref$panda$core$Object(result320);
    result320 = NULL;
    switch ($tmp319) {
        case 0: goto $l358;
    }
    $l360:;
    abort();
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Int64 $tmp361;
    panda$core$Range$LTpanda$core$Int64$GT $tmp362;
    panda$core$Int64 $tmp363;
    panda$core$Bit $tmp364;
    panda$core$Object** $tmp378;
    panda$core$Int64 $tmp379;
    panda$core$Object* $tmp380;
    panda$core$Int64$init$builtin_int64(&$tmp361, 0);
    self->count = $tmp361;
    panda$core$Int64$init$builtin_int64(&$tmp363, 0);
    panda$core$Bit$init$builtin_bit(&$tmp364, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp362, $tmp363, self->capacity, $tmp364);
    int64_t $tmp366 = $tmp362.min.value;
    panda$core$Int64 i365 = { $tmp366 };
    int64_t $tmp368 = $tmp362.max.value;
    bool $tmp369 = $tmp362.inclusive.value;
    if ($tmp369) goto $l376; else goto $l377;
    $l376:;
    if ($tmp366 <= $tmp368) goto $l370; else goto $l372;
    $l377:;
    if ($tmp366 < $tmp368) goto $l370; else goto $l372;
    $l370:;
    {
        {
            $tmp378 = self->data;
            $tmp379 = i365;
            panda$core$Panda$unref$panda$core$Object($tmp378[$tmp379.value]);
            $tmp380 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp380);
            $tmp378[$tmp379.value] = $tmp380;
        }
    }
    $l373:;
    int64_t $tmp382 = $tmp368 - i365.value;
    if ($tmp369) goto $l383; else goto $l384;
    $l383:;
    if ((uint64_t) $tmp382 >= 1) goto $l381; else goto $l372;
    $l384:;
    if ((uint64_t) $tmp382 > 1) goto $l381; else goto $l372;
    $l381:;
    i365.value += 1;
    goto $l370;
    $l372:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result390 = NULL;
    panda$core$MutableString* $tmp391;
    panda$core$MutableString* $tmp392;
    panda$core$Char8 $tmp394;
    panda$core$UInt8 $tmp395;
    panda$core$String* separator396 = NULL;
    panda$core$String* $tmp397;
    panda$collections$Iterator* Iter$162$9402 = NULL;
    panda$collections$Iterator* $tmp403;
    panda$collections$Iterator* $tmp404;
    panda$core$Object* v420 = NULL;
    panda$core$Object* $tmp421;
    panda$core$Object* $tmp422;
    panda$core$String* $tmp427;
    panda$core$String* $tmp428;
    panda$core$Char8 $tmp433;
    panda$core$UInt8 $tmp434;
    panda$core$String* $returnValue435;
    panda$core$String* $tmp436;
    panda$core$String* $tmp437;
    int $tmp389;
    {
        panda$core$MutableString* $tmp393 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp393);
        $tmp392 = $tmp393;
        $tmp391 = $tmp392;
        result390 = $tmp391;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp392));
        panda$core$UInt8$init$builtin_uint8(&$tmp395, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp394, $tmp395);
        panda$core$MutableString$append$panda$core$Char8(result390, $tmp394);
        $tmp397 = &$s398;
        separator396 = $tmp397;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp397));
        {
            int $tmp401;
            {
                ITable* $tmp405 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp405->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp405 = $tmp405->next;
                }
                $fn407 $tmp406 = $tmp405->methods[0];
                panda$collections$Iterator* $tmp408 = $tmp406(((panda$collections$Iterable*) self));
                $tmp404 = $tmp408;
                $tmp403 = $tmp404;
                Iter$162$9402 = $tmp403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                $l409:;
                ITable* $tmp412 = Iter$162$9402->$class->itable;
                while ($tmp412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp412 = $tmp412->next;
                }
                $fn414 $tmp413 = $tmp412->methods[0];
                panda$core$Bit $tmp415 = $tmp413(Iter$162$9402);
                panda$core$Bit $tmp416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp415);
                bool $tmp411 = $tmp416.value;
                if (!$tmp411) goto $l410;
                {
                    int $tmp419;
                    {
                        ITable* $tmp423 = Iter$162$9402->$class->itable;
                        while ($tmp423->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp423 = $tmp423->next;
                        }
                        $fn425 $tmp424 = $tmp423->methods[1];
                        panda$core$Object* $tmp426 = $tmp424(Iter$162$9402);
                        $tmp422 = $tmp426;
                        $tmp421 = $tmp422;
                        v420 = $tmp421;
                        panda$core$Panda$ref$panda$core$Object($tmp421);
                        panda$core$Panda$unref$panda$core$Object($tmp422);
                        panda$core$MutableString$append$panda$core$String(result390, separator396);
                        {
                            $tmp427 = separator396;
                            $tmp428 = &$s429;
                            separator396 = $tmp428;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                        }
                        if (((panda$core$Bit) { v420 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result390, v420);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result390, &$s430);
                        }
                        }
                    }
                    $tmp419 = -1;
                    goto $l417;
                    $l417:;
                    panda$core$Panda$unref$panda$core$Object(v420);
                    v420 = NULL;
                    switch ($tmp419) {
                        case -1: goto $l431;
                    }
                    $l431:;
                }
                goto $l409;
                $l410:;
            }
            $tmp401 = -1;
            goto $l399;
            $l399:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$162$9402));
            Iter$162$9402 = NULL;
            switch ($tmp401) {
                case -1: goto $l432;
            }
            $l432:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp434, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp433, $tmp434);
        panda$core$MutableString$append$panda$core$Char8(result390, $tmp433);
        panda$core$String* $tmp438 = panda$core$MutableString$finish$R$panda$core$String(result390);
        $tmp437 = $tmp438;
        $tmp436 = $tmp437;
        $returnValue435 = $tmp436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
        $tmp389 = 0;
        goto $l387;
        $l439:;
        return $returnValue435;
    }
    $l387:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator396));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result390));
    result390 = NULL;
    separator396 = NULL;
    switch ($tmp389) {
        case 0: goto $l439;
    }
    $l441:;
    abort();
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp442;
    panda$core$Class* $tmp443;
    panda$collections$ImmutableArray* $tmp444;
    panda$core$Int64 $tmp446;
    panda$collections$ImmutableArray* $returnValue447;
    panda$collections$ImmutableArray* $tmp448;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp442 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp445 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp445);
        $tmp444 = $tmp445;
        $tmp443 = ((panda$core$Object*) $tmp444)->$class;
        ((panda$core$Object*) self)->$class = $tmp443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
    }
    panda$core$Int64$init$builtin_int64(&$tmp446, -1);
    self->capacity = $tmp446;
    $tmp448 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue447 = $tmp448;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
    return $returnValue447;
}

