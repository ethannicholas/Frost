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

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$collections$Array$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$Array$_panda$collections$ListWriter, { panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$Array$_panda$collections$Collection = { (panda$core$Class*) &panda$collections$Collection$class, (ITable*) &panda$collections$Array$_panda$collections$ListView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Array$_panda$collections$CollectionWriter = { (panda$core$Class*) &panda$collections$CollectionWriter$class, (ITable*) &panda$collections$Array$_panda$collections$Collection, { panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$clear} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$Array$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionWriter, { panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$Array$class_type panda$collections$Array$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$_panda$collections$CollectionView, { panda$collections$Array$convert$R$panda$core$String, panda$collections$Array$cleanup, panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T$shim, panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$insert$panda$core$Int64$panda$collections$Array$T$shim, panda$collections$Array$add$panda$collections$Array$T$shim, panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT$shim, panda$collections$Array$ensureCapacity$panda$core$Int64, panda$collections$Array$get_count$R$panda$core$Int64, panda$collections$Array$removeIndex$panda$core$Int64, panda$collections$Array$clear, panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT} };

typedef panda$core$Int64 (*$fn6)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn18)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn25)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn148)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn159)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn166)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn177)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn314)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn332)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 3442386153649448963, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 3507653011134952618, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 91, 5237712174387886614, NULL };
static panda$core$String $s305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    panda$collections$Iterator* Iter$81$9154 = NULL;
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
            Iter$81$9154 = $tmp155;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
            $l161:;
            ITable* $tmp164 = Iter$81$9154->$class->itable;
            while ($tmp164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp164 = $tmp164->next;
            }
            $fn166 $tmp165 = $tmp164->methods[0];
            panda$core$Bit $tmp167 = $tmp165(Iter$81$9154);
            panda$core$Bit $tmp168 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp167);
            bool $tmp163 = $tmp168.value;
            if (!$tmp163) goto $l162;
            {
                int $tmp171;
                {
                    ITable* $tmp175 = Iter$81$9154->$class->itable;
                    while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp175 = $tmp175->next;
                    }
                    $fn177 $tmp176 = $tmp175->methods[1];
                    panda$core$Object* $tmp178 = $tmp176(Iter$81$9154);
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
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$81$9154));
        Iter$81$9154 = NULL;
        switch ($tmp153) {
            case -1: goto $l185;
        }
        $l185:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp186;
    panda$core$Int64 oldCapacity192;
    panda$core$Int64 $tmp197;
    panda$core$Range$LTpanda$core$Int64$GT $tmp199;
    panda$core$Bit $tmp200;
    panda$core$Int64$init$builtin_int64(&$tmp186, 0);
    panda$core$Bit $tmp187 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp186);
    if ($tmp187.value) goto $l188; else goto $l189;
    $l189:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s190, (panda$core$Int64) { 88 });
    abort();
    $l188:;
    panda$core$Bit $tmp191 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp191.value) {
    {
        return;
    }
    }
    oldCapacity192 = self->capacity;
    $l193:;
    panda$core$Bit $tmp196 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp195 = $tmp196.value;
    if (!$tmp195) goto $l194;
    {
        panda$core$Int64$init$builtin_int64(&$tmp197, 2);
        panda$core$Int64 $tmp198 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp197);
        self->capacity = $tmp198;
    }
    goto $l193;
    $l194:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity192.value * 8, self->capacity.value * 8));
    panda$core$Bit$init$builtin_bit(&$tmp200, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp199, oldCapacity192, self->capacity, $tmp200);
    int64_t $tmp202 = $tmp199.min.value;
    panda$core$Int64 i201 = { $tmp202 };
    int64_t $tmp204 = $tmp199.max.value;
    bool $tmp205 = $tmp199.inclusive.value;
    if ($tmp205) goto $l212; else goto $l213;
    $l212:;
    if ($tmp202 <= $tmp204) goto $l206; else goto $l208;
    $l213:;
    if ($tmp202 < $tmp204) goto $l206; else goto $l208;
    $l206:;
    {
        if (((panda$core$Bit) { self->data[i201.value] == NULL }).value) goto $l214; else goto $l215;
        $l215:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s216, (panda$core$Int64) { 98 });
        abort();
        $l214:;
    }
    $l209:;
    int64_t $tmp218 = $tmp204 - i201.value;
    if ($tmp205) goto $l219; else goto $l220;
    $l219:;
    if ((uint64_t) $tmp218 >= 1) goto $l217; else goto $l208;
    $l220:;
    if ((uint64_t) $tmp218 > 1) goto $l217; else goto $l208;
    $l217:;
    i201.value += 1;
    goto $l206;
    $l208:;
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue223;
    $returnValue223 = self->count;
    return $returnValue223;
}
void panda$collections$Array$removeIndex$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp226;
    panda$core$Range$LTpanda$core$Int64$GT $tmp236;
    panda$core$Int64 $tmp237;
    panda$core$Bit $tmp239;
    panda$core$Object* $tmp253;
    panda$core$Int64 $tmp254;
    panda$core$Int64 $tmp263;
    panda$core$Object** $tmp265;
    panda$core$Int64 $tmp266;
    panda$core$Object* $tmp267;
    panda$core$Int64$init$builtin_int64(&$tmp226, 0);
    panda$core$Bit $tmp227 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp226);
    bool $tmp225 = $tmp227.value;
    if (!$tmp225) goto $l228;
    panda$core$Int64 $tmp229 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp230 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp229);
    $tmp225 = $tmp230.value;
    $l228:;
    panda$core$Bit $tmp231 = { $tmp225 };
    if ($tmp231.value) goto $l232; else goto $l233;
    $l233:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s234, (panda$core$Int64) { 108 }, &$s235);
    abort();
    $l232:;
    panda$core$Int64$init$builtin_int64(&$tmp237, 1);
    panda$core$Int64 $tmp238 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp237);
    panda$core$Bit$init$builtin_bit(&$tmp239, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp236, p_index, $tmp238, $tmp239);
    int64_t $tmp241 = $tmp236.min.value;
    panda$core$Int64 i240 = { $tmp241 };
    int64_t $tmp243 = $tmp236.max.value;
    bool $tmp244 = $tmp236.inclusive.value;
    if ($tmp244) goto $l251; else goto $l252;
    $l251:;
    if ($tmp241 <= $tmp243) goto $l245; else goto $l247;
    $l252:;
    if ($tmp241 < $tmp243) goto $l245; else goto $l247;
    $l245:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp254, 1);
        panda$core$Int64 $tmp255 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i240, $tmp254);
        panda$core$Object* $tmp256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp255);
        $tmp253 = $tmp256;
        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i240, $tmp253);
        panda$core$Panda$unref$panda$core$Object($tmp253);
    }
    $l248:;
    int64_t $tmp258 = $tmp243 - i240.value;
    if ($tmp244) goto $l259; else goto $l260;
    $l259:;
    if ((uint64_t) $tmp258 >= 1) goto $l257; else goto $l247;
    $l260:;
    if ((uint64_t) $tmp258 > 1) goto $l257; else goto $l247;
    $l257:;
    i240.value += 1;
    goto $l245;
    $l247:;
    panda$core$Int64$init$builtin_int64(&$tmp263, 1);
    panda$core$Int64 $tmp264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp263);
    self->count = $tmp264;
    {
        $tmp265 = self->data;
        $tmp266 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp265[$tmp266.value]);
        $tmp267 = NULL;
        panda$core$Panda$ref$panda$core$Object($tmp267);
        $tmp265[$tmp266.value] = $tmp267;
    }
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Int64 $tmp268;
    panda$core$Range$LTpanda$core$Int64$GT $tmp269;
    panda$core$Int64 $tmp270;
    panda$core$Bit $tmp271;
    panda$core$Object** $tmp285;
    panda$core$Int64 $tmp286;
    panda$core$Object* $tmp287;
    panda$core$Int64$init$builtin_int64(&$tmp268, 0);
    self->count = $tmp268;
    panda$core$Int64$init$builtin_int64(&$tmp270, 0);
    panda$core$Bit$init$builtin_bit(&$tmp271, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp269, $tmp270, self->capacity, $tmp271);
    int64_t $tmp273 = $tmp269.min.value;
    panda$core$Int64 i272 = { $tmp273 };
    int64_t $tmp275 = $tmp269.max.value;
    bool $tmp276 = $tmp269.inclusive.value;
    if ($tmp276) goto $l283; else goto $l284;
    $l283:;
    if ($tmp273 <= $tmp275) goto $l277; else goto $l279;
    $l284:;
    if ($tmp273 < $tmp275) goto $l277; else goto $l279;
    $l277:;
    {
        {
            $tmp285 = self->data;
            $tmp286 = i272;
            panda$core$Panda$unref$panda$core$Object($tmp285[$tmp286.value]);
            $tmp287 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp287);
            $tmp285[$tmp286.value] = $tmp287;
        }
    }
    $l280:;
    int64_t $tmp289 = $tmp275 - i272.value;
    if ($tmp276) goto $l290; else goto $l291;
    $l290:;
    if ((uint64_t) $tmp289 >= 1) goto $l288; else goto $l279;
    $l291:;
    if ((uint64_t) $tmp289 > 1) goto $l288; else goto $l279;
    $l288:;
    i272.value += 1;
    goto $l277;
    $l279:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result297 = NULL;
    panda$core$MutableString* $tmp298;
    panda$core$MutableString* $tmp299;
    panda$core$Char8 $tmp301;
    panda$core$UInt8 $tmp302;
    panda$core$String* separator303 = NULL;
    panda$core$String* $tmp304;
    panda$collections$Iterator* Iter$129$9309 = NULL;
    panda$collections$Iterator* $tmp310;
    panda$collections$Iterator* $tmp311;
    panda$core$Object* v327 = NULL;
    panda$core$Object* $tmp328;
    panda$core$Object* $tmp329;
    panda$core$String* $tmp334;
    panda$core$String* $tmp335;
    panda$core$Char8 $tmp340;
    panda$core$UInt8 $tmp341;
    panda$core$String* $returnValue342;
    panda$core$String* $tmp343;
    panda$core$String* $tmp344;
    int $tmp296;
    {
        panda$core$MutableString* $tmp300 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp300);
        $tmp299 = $tmp300;
        $tmp298 = $tmp299;
        result297 = $tmp298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
        panda$core$UInt8$init$builtin_uint8(&$tmp302, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp301, $tmp302);
        panda$core$MutableString$append$panda$core$Char8(result297, $tmp301);
        $tmp304 = &$s305;
        separator303 = $tmp304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
        {
            int $tmp308;
            {
                ITable* $tmp312 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp312->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp312 = $tmp312->next;
                }
                $fn314 $tmp313 = $tmp312->methods[0];
                panda$collections$Iterator* $tmp315 = $tmp313(((panda$collections$Iterable*) self));
                $tmp311 = $tmp315;
                $tmp310 = $tmp311;
                Iter$129$9309 = $tmp310;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp310));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
                $l316:;
                ITable* $tmp319 = Iter$129$9309->$class->itable;
                while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp319 = $tmp319->next;
                }
                $fn321 $tmp320 = $tmp319->methods[0];
                panda$core$Bit $tmp322 = $tmp320(Iter$129$9309);
                panda$core$Bit $tmp323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp322);
                bool $tmp318 = $tmp323.value;
                if (!$tmp318) goto $l317;
                {
                    int $tmp326;
                    {
                        ITable* $tmp330 = Iter$129$9309->$class->itable;
                        while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp330 = $tmp330->next;
                        }
                        $fn332 $tmp331 = $tmp330->methods[1];
                        panda$core$Object* $tmp333 = $tmp331(Iter$129$9309);
                        $tmp329 = $tmp333;
                        $tmp328 = $tmp329;
                        v327 = $tmp328;
                        panda$core$Panda$ref$panda$core$Object($tmp328);
                        panda$core$Panda$unref$panda$core$Object($tmp329);
                        panda$core$MutableString$append$panda$core$String(result297, separator303);
                        {
                            $tmp334 = separator303;
                            $tmp335 = &$s336;
                            separator303 = $tmp335;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp335));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
                        }
                        if (((panda$core$Bit) { v327 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result297, v327);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result297, &$s337);
                        }
                        }
                    }
                    $tmp326 = -1;
                    goto $l324;
                    $l324:;
                    panda$core$Panda$unref$panda$core$Object(v327);
                    v327 = NULL;
                    switch ($tmp326) {
                        case -1: goto $l338;
                    }
                    $l338:;
                }
                goto $l316;
                $l317:;
            }
            $tmp308 = -1;
            goto $l306;
            $l306:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$129$9309));
            Iter$129$9309 = NULL;
            switch ($tmp308) {
                case -1: goto $l339;
            }
            $l339:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp341, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp340, $tmp341);
        panda$core$MutableString$append$panda$core$Char8(result297, $tmp340);
        panda$core$String* $tmp345 = panda$core$MutableString$finish$R$panda$core$String(result297);
        $tmp344 = $tmp345;
        $tmp343 = $tmp344;
        $returnValue342 = $tmp343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
        $tmp296 = 0;
        goto $l294;
        $l346:;
        return $returnValue342;
    }
    $l294:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator303));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result297));
    result297 = NULL;
    separator303 = NULL;
    switch ($tmp296) {
        case 0: goto $l346;
    }
    $l348:;
    abort();
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp349;
    panda$core$Class* $tmp350;
    panda$collections$ImmutableArray* $tmp351;
    panda$core$Int64 $tmp353;
    panda$collections$ImmutableArray* $returnValue354;
    panda$collections$ImmutableArray* $tmp355;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp349 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp352 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp352);
        $tmp351 = $tmp352;
        $tmp350 = ((panda$core$Object*) $tmp351)->$class;
        ((panda$core$Object*) self)->$class = $tmp350;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
    }
    panda$core$Int64$init$builtin_int64(&$tmp353, -1);
    self->capacity = $tmp353;
    $tmp355 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue354 = $tmp355;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
    return $returnValue354;
}

