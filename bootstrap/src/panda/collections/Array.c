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
typedef panda$core$Int64 (*$fn148)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn166)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn177)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn304)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn322)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 3442386153649448963, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 3507653011134952618, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -666229640664597948, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
void panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index, panda$core$Object* p_value) {
    panda$core$Int64 $tmp95;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp97;
    panda$core$Int64 $tmp98;
    panda$core$Bit $tmp99;
    panda$core$Object** $tmp118;
    panda$core$Int64 $tmp119;
    panda$core$Object* $tmp120;
    panda$core$Int64 $tmp121;
    panda$core$Int64 $tmp134;
    panda$core$Object** $tmp136;
    panda$core$Int64 $tmp137;
    panda$core$Object* $tmp138;
    panda$core$Int64$init$builtin_int64(&$tmp95, 1);
    panda$core$Int64 $tmp96 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp95);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp96);
    panda$core$Int64$init$builtin_int64(&$tmp98, -1);
    panda$core$Bit$init$builtin_bit(&$tmp99, false);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp97, self->count, p_index, $tmp98, $tmp99);
    int64_t $tmp101 = $tmp97.start.value;
    panda$core$Int64 i100 = { $tmp101 };
    int64_t $tmp103 = $tmp97.end.value;
    int64_t $tmp104 = $tmp97.step.value;
    bool $tmp105 = $tmp97.inclusive.value;
    bool $tmp112 = $tmp104 > 0;
    if ($tmp112) goto $l110; else goto $l111;
    $l110:;
    if ($tmp105) goto $l113; else goto $l114;
    $l113:;
    if ($tmp101 <= $tmp103) goto $l106; else goto $l108;
    $l114:;
    if ($tmp101 < $tmp103) goto $l106; else goto $l108;
    $l111:;
    if ($tmp105) goto $l115; else goto $l116;
    $l115:;
    if ($tmp101 >= $tmp103) goto $l106; else goto $l108;
    $l116:;
    if ($tmp101 > $tmp103) goto $l106; else goto $l108;
    $l106:;
    {
        {
            $tmp118 = self->data;
            $tmp119 = i100;
            panda$core$Panda$unref$panda$core$Object($tmp118[$tmp119.value]);
            panda$core$Int64$init$builtin_int64(&$tmp121, 1);
            panda$core$Int64 $tmp122 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i100, $tmp121);
            $tmp120 = self->data[$tmp122.value];
            panda$core$Panda$ref$panda$core$Object($tmp120);
            $tmp118[$tmp119.value] = $tmp120;
        }
    }
    $l109:;
    if ($tmp112) goto $l124; else goto $l125;
    $l124:;
    int64_t $tmp126 = $tmp103 - i100.value;
    if ($tmp105) goto $l127; else goto $l128;
    $l127:;
    if ((uint64_t) $tmp126 >= $tmp104) goto $l123; else goto $l108;
    $l128:;
    if ((uint64_t) $tmp126 > $tmp104) goto $l123; else goto $l108;
    $l125:;
    int64_t $tmp130 = i100.value - $tmp103;
    if ($tmp105) goto $l131; else goto $l132;
    $l131:;
    if ((uint64_t) $tmp130 >= -$tmp104) goto $l123; else goto $l108;
    $l132:;
    if ((uint64_t) $tmp130 > -$tmp104) goto $l123; else goto $l108;
    $l123:;
    i100.value += $tmp104;
    goto $l106;
    $l108:;
    panda$core$Int64$init$builtin_int64(&$tmp134, 1);
    panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp134);
    self->count = $tmp135;
    {
        $tmp136 = self->data;
        $tmp137 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp136[$tmp137.value]);
        $tmp138 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp138);
        $tmp136[$tmp137.value] = $tmp138;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp139;
    panda$core$Object** $tmp141;
    panda$core$Int64 $tmp142;
    panda$core$Object* $tmp143;
    panda$core$Int64 $tmp144;
    panda$core$Int64$init$builtin_int64(&$tmp139, 1);
    panda$core$Int64 $tmp140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp139);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp140);
    {
        $tmp141 = self->data;
        $tmp142 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp141[$tmp142.value]);
        $tmp143 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp143);
        $tmp141[$tmp142.value] = $tmp143;
    }
    panda$core$Int64$init$builtin_int64(&$tmp144, 1);
    panda$core$Int64 $tmp145 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp144);
    self->count = $tmp145;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$100$9154 = NULL;
    panda$collections$Iterator* $tmp155;
    panda$collections$Iterator* $tmp156;
    panda$core$Object* v172 = NULL;
    panda$core$Object* $tmp173;
    panda$core$Object* $tmp174;
    panda$core$Object** $tmp179;
    panda$core$Int64 $tmp180;
    panda$core$Object* $tmp181;
    panda$core$Int64 $tmp182;
    ITable* $tmp146 = p_c->$class->itable;
    while ($tmp146->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp146 = $tmp146->next;
    }
    $fn148 $tmp147 = $tmp146->methods[0];
    panda$core$Int64 $tmp149 = $tmp147(p_c);
    panda$core$Int64 $tmp150 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp149);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp150);
    {
        int $tmp153;
        {
            ITable* $tmp157 = ((panda$collections$Iterable*) p_c)->$class->itable;
            while ($tmp157->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp157 = $tmp157->next;
            }
            $fn159 $tmp158 = $tmp157->methods[0];
            panda$collections$Iterator* $tmp160 = $tmp158(((panda$collections$Iterable*) p_c));
            $tmp156 = $tmp160;
            $tmp155 = $tmp156;
            Iter$100$9154 = $tmp155;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
            $l161:;
            ITable* $tmp164 = Iter$100$9154->$class->itable;
            while ($tmp164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp164 = $tmp164->next;
            }
            $fn166 $tmp165 = $tmp164->methods[0];
            panda$core$Bit $tmp167 = $tmp165(Iter$100$9154);
            panda$core$Bit $tmp168 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp167);
            bool $tmp163 = $tmp168.value;
            if (!$tmp163) goto $l162;
            {
                int $tmp171;
                {
                    ITable* $tmp175 = Iter$100$9154->$class->itable;
                    while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp175 = $tmp175->next;
                    }
                    $fn177 $tmp176 = $tmp175->methods[1];
                    panda$core$Object* $tmp178 = $tmp176(Iter$100$9154);
                    $tmp174 = $tmp178;
                    $tmp173 = $tmp174;
                    v172 = $tmp173;
                    panda$core$Panda$ref$panda$core$Object($tmp173);
                    panda$core$Panda$unref$panda$core$Object($tmp174);
                    {
                        $tmp179 = self->data;
                        $tmp180 = self->count;
                        panda$core$Panda$unref$panda$core$Object($tmp179[$tmp180.value]);
                        $tmp181 = v172;
                        panda$core$Panda$ref$panda$core$Object($tmp181);
                        $tmp179[$tmp180.value] = $tmp181;
                    }
                    panda$core$Int64$init$builtin_int64(&$tmp182, 1);
                    panda$core$Int64 $tmp183 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp182);
                    self->count = $tmp183;
                }
                $tmp171 = -1;
                goto $l169;
                $l169:;
                panda$core$Panda$unref$panda$core$Object(v172);
                v172 = NULL;
                switch ($tmp171) {
                    case -1: goto $l184;
                }
                $l184:;
            }
            goto $l161;
            $l162:;
        }
        $tmp153 = -1;
        goto $l151;
        $l151:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$100$9154));
        Iter$100$9154 = NULL;
        switch ($tmp153) {
            case -1: goto $l185;
        }
        $l185:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp186;
    panda$core$Int64 oldCapacity192;
    panda$core$Int64 $tmp193;
    panda$core$Int64 $tmp199;
    panda$core$Int64$init$builtin_int64(&$tmp186, 0);
    panda$core$Bit $tmp187 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp186);
    if ($tmp187.value) goto $l188; else goto $l189;
    $l189:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s190, (panda$core$Int64) { 107 });
    abort();
    $l188:;
    panda$core$Bit $tmp191 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp191.value) {
    {
        return;
    }
    }
    oldCapacity192 = self->capacity;
    panda$core$Int64$init$builtin_int64(&$tmp193, 1);
    panda$core$Int64 $tmp194 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp193);
    self->capacity = $tmp194;
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
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity192.value * 8, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue201;
    $returnValue201 = self->count;
    return $returnValue201;
}
panda$core$Object* panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp204;
    panda$core$Object* result217 = NULL;
    panda$core$Object* $tmp218;
    panda$core$Object* $tmp219;
    panda$core$Range$LTpanda$core$Int64$GT $tmp221;
    panda$core$Int64 $tmp222;
    panda$core$Bit $tmp224;
    panda$core$Object* $tmp238;
    panda$core$Int64 $tmp239;
    panda$core$Int64 $tmp248;
    panda$core$Object** $tmp250;
    panda$core$Int64 $tmp251;
    panda$core$Object* $tmp252;
    panda$core$Object* $returnValue253;
    panda$core$Object* $tmp254;
    panda$core$Int64$init$builtin_int64(&$tmp204, 0);
    panda$core$Bit $tmp205 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp204);
    bool $tmp203 = $tmp205.value;
    if (!$tmp203) goto $l206;
    panda$core$Int64 $tmp207 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp208 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp207);
    $tmp203 = $tmp208.value;
    $l206:;
    panda$core$Bit $tmp209 = { $tmp203 };
    if ($tmp209.value) goto $l210; else goto $l211;
    $l211:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s212, (panda$core$Int64) { 125 }, &$s213);
    abort();
    $l210:;
    int $tmp216;
    {
        panda$core$Object* $tmp220 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, p_index);
        $tmp219 = $tmp220;
        $tmp218 = $tmp219;
        result217 = $tmp218;
        panda$core$Panda$ref$panda$core$Object($tmp218);
        panda$core$Panda$unref$panda$core$Object($tmp219);
        panda$core$Int64$init$builtin_int64(&$tmp222, 1);
        panda$core$Int64 $tmp223 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp222);
        panda$core$Bit$init$builtin_bit(&$tmp224, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp221, p_index, $tmp223, $tmp224);
        int64_t $tmp226 = $tmp221.min.value;
        panda$core$Int64 i225 = { $tmp226 };
        int64_t $tmp228 = $tmp221.max.value;
        bool $tmp229 = $tmp221.inclusive.value;
        if ($tmp229) goto $l236; else goto $l237;
        $l236:;
        if ($tmp226 <= $tmp228) goto $l230; else goto $l232;
        $l237:;
        if ($tmp226 < $tmp228) goto $l230; else goto $l232;
        $l230:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp239, 1);
            panda$core$Int64 $tmp240 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i225, $tmp239);
            panda$core$Object* $tmp241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp240);
            $tmp238 = $tmp241;
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i225, $tmp238);
            panda$core$Panda$unref$panda$core$Object($tmp238);
        }
        $l233:;
        int64_t $tmp243 = $tmp228 - i225.value;
        if ($tmp229) goto $l244; else goto $l245;
        $l244:;
        if ((uint64_t) $tmp243 >= 1) goto $l242; else goto $l232;
        $l245:;
        if ((uint64_t) $tmp243 > 1) goto $l242; else goto $l232;
        $l242:;
        i225.value += 1;
        goto $l230;
        $l232:;
        panda$core$Int64$init$builtin_int64(&$tmp248, 1);
        panda$core$Int64 $tmp249 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp248);
        self->count = $tmp249;
        {
            $tmp250 = self->data;
            $tmp251 = self->count;
            panda$core$Panda$unref$panda$core$Object($tmp250[$tmp251.value]);
            $tmp252 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp252);
            $tmp250[$tmp251.value] = $tmp252;
        }
        $tmp254 = result217;
        $returnValue253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object($tmp254);
        $tmp216 = 0;
        goto $l214;
        $l255:;
        return $returnValue253;
    }
    $l214:;
    panda$core$Panda$unref$panda$core$Object(result217);
    result217 = NULL;
    switch ($tmp216) {
        case 0: goto $l255;
    }
    $l257:;
    abort();
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Int64 $tmp258;
    panda$core$Range$LTpanda$core$Int64$GT $tmp259;
    panda$core$Int64 $tmp260;
    panda$core$Bit $tmp261;
    panda$core$Object** $tmp275;
    panda$core$Int64 $tmp276;
    panda$core$Object* $tmp277;
    panda$core$Int64$init$builtin_int64(&$tmp258, 0);
    self->count = $tmp258;
    panda$core$Int64$init$builtin_int64(&$tmp260, 0);
    panda$core$Bit$init$builtin_bit(&$tmp261, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp259, $tmp260, self->capacity, $tmp261);
    int64_t $tmp263 = $tmp259.min.value;
    panda$core$Int64 i262 = { $tmp263 };
    int64_t $tmp265 = $tmp259.max.value;
    bool $tmp266 = $tmp259.inclusive.value;
    if ($tmp266) goto $l273; else goto $l274;
    $l273:;
    if ($tmp263 <= $tmp265) goto $l267; else goto $l269;
    $l274:;
    if ($tmp263 < $tmp265) goto $l267; else goto $l269;
    $l267:;
    {
        {
            $tmp275 = self->data;
            $tmp276 = i262;
            panda$core$Panda$unref$panda$core$Object($tmp275[$tmp276.value]);
            $tmp277 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp277);
            $tmp275[$tmp276.value] = $tmp277;
        }
    }
    $l270:;
    int64_t $tmp279 = $tmp265 - i262.value;
    if ($tmp266) goto $l280; else goto $l281;
    $l280:;
    if ((uint64_t) $tmp279 >= 1) goto $l278; else goto $l269;
    $l281:;
    if ((uint64_t) $tmp279 > 1) goto $l278; else goto $l269;
    $l278:;
    i262.value += 1;
    goto $l267;
    $l269:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result287 = NULL;
    panda$core$MutableString* $tmp288;
    panda$core$MutableString* $tmp289;
    panda$core$Char8 $tmp291;
    panda$core$UInt8 $tmp292;
    panda$core$String* separator293 = NULL;
    panda$core$String* $tmp294;
    panda$collections$Iterator* Iter$148$9299 = NULL;
    panda$collections$Iterator* $tmp300;
    panda$collections$Iterator* $tmp301;
    panda$core$Object* v317 = NULL;
    panda$core$Object* $tmp318;
    panda$core$Object* $tmp319;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$Char8 $tmp330;
    panda$core$UInt8 $tmp331;
    panda$core$String* $returnValue332;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    int $tmp286;
    {
        panda$core$MutableString* $tmp290 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp290);
        $tmp289 = $tmp290;
        $tmp288 = $tmp289;
        result287 = $tmp288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
        panda$core$UInt8$init$builtin_uint8(&$tmp292, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp291, $tmp292);
        panda$core$MutableString$append$panda$core$Char8(result287, $tmp291);
        $tmp294 = &$s295;
        separator293 = $tmp294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp294));
        {
            int $tmp298;
            {
                ITable* $tmp302 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp302 = $tmp302->next;
                }
                $fn304 $tmp303 = $tmp302->methods[0];
                panda$collections$Iterator* $tmp305 = $tmp303(((panda$collections$Iterable*) self));
                $tmp301 = $tmp305;
                $tmp300 = $tmp301;
                Iter$148$9299 = $tmp300;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301));
                $l306:;
                ITable* $tmp309 = Iter$148$9299->$class->itable;
                while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp309 = $tmp309->next;
                }
                $fn311 $tmp310 = $tmp309->methods[0];
                panda$core$Bit $tmp312 = $tmp310(Iter$148$9299);
                panda$core$Bit $tmp313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp312);
                bool $tmp308 = $tmp313.value;
                if (!$tmp308) goto $l307;
                {
                    int $tmp316;
                    {
                        ITable* $tmp320 = Iter$148$9299->$class->itable;
                        while ($tmp320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp320 = $tmp320->next;
                        }
                        $fn322 $tmp321 = $tmp320->methods[1];
                        panda$core$Object* $tmp323 = $tmp321(Iter$148$9299);
                        $tmp319 = $tmp323;
                        $tmp318 = $tmp319;
                        v317 = $tmp318;
                        panda$core$Panda$ref$panda$core$Object($tmp318);
                        panda$core$Panda$unref$panda$core$Object($tmp319);
                        panda$core$MutableString$append$panda$core$String(result287, separator293);
                        {
                            $tmp324 = separator293;
                            $tmp325 = &$s326;
                            separator293 = $tmp325;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
                        }
                        if (((panda$core$Bit) { v317 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result287, v317);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result287, &$s327);
                        }
                        }
                    }
                    $tmp316 = -1;
                    goto $l314;
                    $l314:;
                    panda$core$Panda$unref$panda$core$Object(v317);
                    v317 = NULL;
                    switch ($tmp316) {
                        case -1: goto $l328;
                    }
                    $l328:;
                }
                goto $l306;
                $l307:;
            }
            $tmp298 = -1;
            goto $l296;
            $l296:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$148$9299));
            Iter$148$9299 = NULL;
            switch ($tmp298) {
                case -1: goto $l329;
            }
            $l329:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp331, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp330, $tmp331);
        panda$core$MutableString$append$panda$core$Char8(result287, $tmp330);
        panda$core$String* $tmp335 = panda$core$MutableString$finish$R$panda$core$String(result287);
        $tmp334 = $tmp335;
        $tmp333 = $tmp334;
        $returnValue332 = $tmp333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
        $tmp286 = 0;
        goto $l284;
        $l336:;
        return $returnValue332;
    }
    $l284:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator293));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result287));
    result287 = NULL;
    separator293 = NULL;
    switch ($tmp286) {
        case 0: goto $l336;
    }
    $l338:;
    abort();
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp339;
    panda$core$Class* $tmp340;
    panda$collections$ImmutableArray* $tmp341;
    panda$core$Int64 $tmp343;
    panda$collections$ImmutableArray* $returnValue344;
    panda$collections$ImmutableArray* $tmp345;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp339 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp342 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp342);
        $tmp341 = $tmp342;
        $tmp340 = ((panda$core$Object*) $tmp341)->$class;
        ((panda$core$Object*) self)->$class = $tmp340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
    }
    panda$core$Int64$init$builtin_int64(&$tmp343, -1);
    self->capacity = $tmp343;
    $tmp345 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue344 = $tmp345;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
    return $returnValue344;
}

