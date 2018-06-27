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
typedef panda$core$Int64 (*$fn150)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn161)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn168)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn179)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn309)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn316)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn327)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, 4189143066065790879, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s77 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 3442386153649448963, NULL };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 3507653011134952618, NULL };
static panda$core$String $s193 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x70\x61\x6e\x64\x61", 11, -2538429574759027242, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -666229640664597948, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };

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
    panda$collections$Array* $tmp134;
    panda$core$Int64 $tmp135;
    panda$core$Object** $tmp137;
    panda$core$Int64 $tmp138;
    panda$core$Object* $tmp139;
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
    $tmp134 = self;
    panda$core$Int64$init$builtin_int64(&$tmp135, 1);
    panda$core$Int64 $tmp136 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp134->count, $tmp135);
    $tmp134->count = $tmp136;
    {
        $tmp137 = self->data;
        $tmp138 = p_index;
        panda$core$Panda$unref$panda$core$Object($tmp137[$tmp138.value]);
        $tmp139 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp139);
        $tmp137[$tmp138.value] = $tmp139;
    }
}
void panda$collections$Array$add$panda$collections$Array$T(panda$collections$Array* self, panda$core$Object* p_value) {
    panda$core$Int64 $tmp140;
    panda$core$Object** $tmp142;
    panda$core$Int64 $tmp143;
    panda$core$Object* $tmp144;
    panda$collections$Array* $tmp145;
    panda$core$Int64 $tmp146;
    panda$core$Int64$init$builtin_int64(&$tmp140, 1);
    panda$core$Int64 $tmp141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->count, $tmp140);
    panda$collections$Array$ensureCapacity$panda$core$Int64(self, $tmp141);
    {
        $tmp142 = self->data;
        $tmp143 = self->count;
        panda$core$Panda$unref$panda$core$Object($tmp142[$tmp143.value]);
        $tmp144 = p_value;
        panda$core$Panda$ref$panda$core$Object($tmp144);
        $tmp142[$tmp143.value] = $tmp144;
    }
    $tmp145 = self;
    panda$core$Int64$init$builtin_int64(&$tmp146, 1);
    panda$core$Int64 $tmp147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp145->count, $tmp146);
    $tmp145->count = $tmp147;
}
void panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT(panda$collections$Array* self, panda$collections$CollectionView* p_c) {
    panda$collections$Iterator* Iter$100$9156 = NULL;
    panda$collections$Iterator* $tmp157;
    panda$collections$Iterator* $tmp158;
    panda$core$Object* v174 = NULL;
    panda$core$Object* $tmp175;
    panda$core$Object* $tmp176;
    panda$core$Object** $tmp181;
    panda$core$Int64 $tmp182;
    panda$core$Object* $tmp183;
    panda$collections$Array* $tmp184;
    panda$core$Int64 $tmp185;
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
            Iter$100$9156 = $tmp157;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
            $l163:;
            ITable* $tmp166 = Iter$100$9156->$class->itable;
            while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp166 = $tmp166->next;
            }
            $fn168 $tmp167 = $tmp166->methods[0];
            panda$core$Bit $tmp169 = $tmp167(Iter$100$9156);
            panda$core$Bit $tmp170 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp169);
            bool $tmp165 = $tmp170.value;
            if (!$tmp165) goto $l164;
            {
                int $tmp173;
                {
                    ITable* $tmp177 = Iter$100$9156->$class->itable;
                    while ($tmp177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp177 = $tmp177->next;
                    }
                    $fn179 $tmp178 = $tmp177->methods[1];
                    panda$core$Object* $tmp180 = $tmp178(Iter$100$9156);
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
                    $tmp184 = self;
                    panda$core$Int64$init$builtin_int64(&$tmp185, 1);
                    panda$core$Int64 $tmp186 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp184->count, $tmp185);
                    $tmp184->count = $tmp186;
                }
                $tmp173 = -1;
                goto $l171;
                $l171:;
                panda$core$Panda$unref$panda$core$Object(v174);
                v174 = NULL;
                switch ($tmp173) {
                    case -1: goto $l187;
                }
                $l187:;
            }
            goto $l163;
            $l164:;
        }
        $tmp155 = -1;
        goto $l153;
        $l153:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$100$9156));
        Iter$100$9156 = NULL;
        switch ($tmp155) {
            case -1: goto $l188;
        }
        $l188:;
    }
}
void panda$collections$Array$ensureCapacity$panda$core$Int64(panda$collections$Array* self, panda$core$Int64 p_newCapacity) {
    panda$core$Int64 $tmp189;
    panda$core$Int64 oldCapacity195;
    panda$core$Int64 $tmp196;
    panda$collections$Array* $tmp202;
    panda$core$Int64 $tmp203;
    panda$core$Int64$init$builtin_int64(&$tmp189, 0);
    panda$core$Bit $tmp190 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->capacity, $tmp189);
    if ($tmp190.value) goto $l191; else goto $l192;
    $l192:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s193, (panda$core$Int64) { 107 });
    abort();
    $l191:;
    panda$core$Bit $tmp194 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_newCapacity, self->capacity);
    if ($tmp194.value) {
    {
        return;
    }
    }
    oldCapacity195 = self->capacity;
    panda$core$Int64$init$builtin_int64(&$tmp196, 1);
    panda$core$Int64 $tmp197 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(self->capacity, $tmp196);
    self->capacity = $tmp197;
    $l198:;
    panda$core$Bit $tmp201 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->capacity, p_newCapacity);
    bool $tmp200 = $tmp201.value;
    if (!$tmp200) goto $l199;
    {
        $tmp202 = self;
        panda$core$Int64$init$builtin_int64(&$tmp203, 2);
        panda$core$Int64 $tmp204 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp202->capacity, $tmp203);
        $tmp202->capacity = $tmp204;
    }
    goto $l198;
    $l199:;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, oldCapacity195.value * 8, self->capacity.value * 8));
}
panda$core$Int64 panda$collections$Array$get_count$R$panda$core$Int64(panda$collections$Array* self) {
    panda$core$Int64 $returnValue205;
    $returnValue205 = self->count;
    return $returnValue205;
}
panda$core$Object* panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(panda$collections$Array* self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp208;
    panda$core$Object* result221 = NULL;
    panda$core$Object* $tmp222;
    panda$core$Object* $tmp223;
    panda$core$Range$LTpanda$core$Int64$GT $tmp225;
    panda$core$Int64 $tmp226;
    panda$core$Bit $tmp228;
    panda$core$Object* $tmp242;
    panda$core$Int64 $tmp243;
    panda$collections$Array* $tmp252;
    panda$core$Int64 $tmp253;
    panda$core$Object** $tmp255;
    panda$core$Int64 $tmp256;
    panda$core$Object* $tmp257;
    panda$core$Object* $returnValue258;
    panda$core$Object* $tmp259;
    panda$core$Int64$init$builtin_int64(&$tmp208, 0);
    panda$core$Bit $tmp209 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp208);
    bool $tmp207 = $tmp209.value;
    if (!$tmp207) goto $l210;
    panda$core$Int64 $tmp211 = panda$collections$Array$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp212 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp211);
    $tmp207 = $tmp212.value;
    $l210:;
    panda$core$Bit $tmp213 = { $tmp207 };
    if ($tmp213.value) goto $l214; else goto $l215;
    $l215:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s216, (panda$core$Int64) { 125 }, &$s217);
    abort();
    $l214:;
    int $tmp220;
    {
        panda$core$Object* $tmp224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, p_index);
        $tmp223 = $tmp224;
        $tmp222 = $tmp223;
        result221 = $tmp222;
        panda$core$Panda$ref$panda$core$Object($tmp222);
        panda$core$Panda$unref$panda$core$Object($tmp223);
        panda$core$Int64$init$builtin_int64(&$tmp226, 1);
        panda$core$Int64 $tmp227 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->count, $tmp226);
        panda$core$Bit$init$builtin_bit(&$tmp228, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp225, p_index, $tmp227, $tmp228);
        int64_t $tmp230 = $tmp225.min.value;
        panda$core$Int64 i229 = { $tmp230 };
        int64_t $tmp232 = $tmp225.max.value;
        bool $tmp233 = $tmp225.inclusive.value;
        if ($tmp233) goto $l240; else goto $l241;
        $l240:;
        if ($tmp230 <= $tmp232) goto $l234; else goto $l236;
        $l241:;
        if ($tmp230 < $tmp232) goto $l234; else goto $l236;
        $l234:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp243, 1);
            panda$core$Int64 $tmp244 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i229, $tmp243);
            panda$core$Object* $tmp245 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self, $tmp244);
            $tmp242 = $tmp245;
            panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(self, i229, $tmp242);
            panda$core$Panda$unref$panda$core$Object($tmp242);
        }
        $l237:;
        int64_t $tmp247 = $tmp232 - i229.value;
        if ($tmp233) goto $l248; else goto $l249;
        $l248:;
        if ((uint64_t) $tmp247 >= 1) goto $l246; else goto $l236;
        $l249:;
        if ((uint64_t) $tmp247 > 1) goto $l246; else goto $l236;
        $l246:;
        i229.value += 1;
        goto $l234;
        $l236:;
        $tmp252 = self;
        panda$core$Int64$init$builtin_int64(&$tmp253, 1);
        panda$core$Int64 $tmp254 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp252->count, $tmp253);
        $tmp252->count = $tmp254;
        {
            $tmp255 = self->data;
            $tmp256 = self->count;
            panda$core$Panda$unref$panda$core$Object($tmp255[$tmp256.value]);
            $tmp257 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp257);
            $tmp255[$tmp256.value] = $tmp257;
        }
        $tmp259 = result221;
        $returnValue258 = $tmp259;
        panda$core$Panda$ref$panda$core$Object($tmp259);
        $tmp220 = 0;
        goto $l218;
        $l260:;
        return $returnValue258;
    }
    $l218:;
    panda$core$Panda$unref$panda$core$Object(result221);
    result221 = NULL;
    switch ($tmp220) {
        case 0: goto $l260;
    }
    $l262:;
    abort();
}
void panda$collections$Array$clear(panda$collections$Array* self) {
    panda$core$Int64 $tmp263;
    panda$core$Range$LTpanda$core$Int64$GT $tmp264;
    panda$core$Int64 $tmp265;
    panda$core$Bit $tmp266;
    panda$core$Object** $tmp280;
    panda$core$Int64 $tmp281;
    panda$core$Object* $tmp282;
    panda$core$Int64$init$builtin_int64(&$tmp263, 0);
    self->count = $tmp263;
    panda$core$Int64$init$builtin_int64(&$tmp265, 0);
    panda$core$Bit$init$builtin_bit(&$tmp266, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp264, $tmp265, self->capacity, $tmp266);
    int64_t $tmp268 = $tmp264.min.value;
    panda$core$Int64 i267 = { $tmp268 };
    int64_t $tmp270 = $tmp264.max.value;
    bool $tmp271 = $tmp264.inclusive.value;
    if ($tmp271) goto $l278; else goto $l279;
    $l278:;
    if ($tmp268 <= $tmp270) goto $l272; else goto $l274;
    $l279:;
    if ($tmp268 < $tmp270) goto $l272; else goto $l274;
    $l272:;
    {
        {
            $tmp280 = self->data;
            $tmp281 = i267;
            panda$core$Panda$unref$panda$core$Object($tmp280[$tmp281.value]);
            $tmp282 = NULL;
            panda$core$Panda$ref$panda$core$Object($tmp282);
            $tmp280[$tmp281.value] = $tmp282;
        }
    }
    $l275:;
    int64_t $tmp284 = $tmp270 - i267.value;
    if ($tmp271) goto $l285; else goto $l286;
    $l285:;
    if ((uint64_t) $tmp284 >= 1) goto $l283; else goto $l274;
    $l286:;
    if ((uint64_t) $tmp284 > 1) goto $l283; else goto $l274;
    $l283:;
    i267.value += 1;
    goto $l272;
    $l274:;
}
panda$core$String* panda$collections$Array$convert$R$panda$core$String(panda$collections$Array* self) {
    panda$core$MutableString* result292 = NULL;
    panda$core$MutableString* $tmp293;
    panda$core$MutableString* $tmp294;
    panda$core$Char8 $tmp296;
    panda$core$UInt8 $tmp297;
    panda$core$String* separator298 = NULL;
    panda$core$String* $tmp299;
    panda$collections$Iterator* Iter$148$9304 = NULL;
    panda$collections$Iterator* $tmp305;
    panda$collections$Iterator* $tmp306;
    panda$core$Object* v322 = NULL;
    panda$core$Object* $tmp323;
    panda$core$Object* $tmp324;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$Char8 $tmp335;
    panda$core$UInt8 $tmp336;
    panda$core$String* $returnValue337;
    panda$core$String* $tmp338;
    panda$core$String* $tmp339;
    int $tmp291;
    {
        panda$core$MutableString* $tmp295 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp295);
        $tmp294 = $tmp295;
        $tmp293 = $tmp294;
        result292 = $tmp293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
        panda$core$UInt8$init$builtin_uint8(&$tmp297, 91);
        panda$core$Char8$init$panda$core$UInt8(&$tmp296, $tmp297);
        panda$core$MutableString$append$panda$core$Char8(result292, $tmp296);
        $tmp299 = &$s300;
        separator298 = $tmp299;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp299));
        {
            int $tmp303;
            {
                ITable* $tmp307 = ((panda$collections$Iterable*) self)->$class->itable;
                while ($tmp307->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp307 = $tmp307->next;
                }
                $fn309 $tmp308 = $tmp307->methods[0];
                panda$collections$Iterator* $tmp310 = $tmp308(((panda$collections$Iterable*) self));
                $tmp306 = $tmp310;
                $tmp305 = $tmp306;
                Iter$148$9304 = $tmp305;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
                $l311:;
                ITable* $tmp314 = Iter$148$9304->$class->itable;
                while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp314 = $tmp314->next;
                }
                $fn316 $tmp315 = $tmp314->methods[0];
                panda$core$Bit $tmp317 = $tmp315(Iter$148$9304);
                panda$core$Bit $tmp318 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp317);
                bool $tmp313 = $tmp318.value;
                if (!$tmp313) goto $l312;
                {
                    int $tmp321;
                    {
                        ITable* $tmp325 = Iter$148$9304->$class->itable;
                        while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp325 = $tmp325->next;
                        }
                        $fn327 $tmp326 = $tmp325->methods[1];
                        panda$core$Object* $tmp328 = $tmp326(Iter$148$9304);
                        $tmp324 = $tmp328;
                        $tmp323 = $tmp324;
                        v322 = $tmp323;
                        panda$core$Panda$ref$panda$core$Object($tmp323);
                        panda$core$Panda$unref$panda$core$Object($tmp324);
                        panda$core$MutableString$append$panda$core$String(result292, separator298);
                        {
                            $tmp329 = separator298;
                            $tmp330 = &$s331;
                            separator298 = $tmp330;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                        }
                        if (((panda$core$Bit) { v322 != NULL }).value) {
                        {
                            panda$core$MutableString$append$panda$core$Object(result292, v322);
                        }
                        }
                        else {
                        {
                            panda$core$MutableString$append$panda$core$String(result292, &$s332);
                        }
                        }
                    }
                    $tmp321 = -1;
                    goto $l319;
                    $l319:;
                    panda$core$Panda$unref$panda$core$Object(v322);
                    v322 = NULL;
                    switch ($tmp321) {
                        case -1: goto $l333;
                    }
                    $l333:;
                }
                goto $l311;
                $l312:;
            }
            $tmp303 = -1;
            goto $l301;
            $l301:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$148$9304));
            Iter$148$9304 = NULL;
            switch ($tmp303) {
                case -1: goto $l334;
            }
            $l334:;
        }
        panda$core$UInt8$init$builtin_uint8(&$tmp336, 93);
        panda$core$Char8$init$panda$core$UInt8(&$tmp335, $tmp336);
        panda$core$MutableString$append$panda$core$Char8(result292, $tmp335);
        panda$core$String* $tmp340 = panda$core$MutableString$finish$R$panda$core$String(result292);
        $tmp339 = $tmp340;
        $tmp338 = $tmp339;
        $returnValue337 = $tmp338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
        $tmp291 = 0;
        goto $l289;
        $l341:;
        return $returnValue337;
    }
    $l289:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator298));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result292));
    result292 = NULL;
    separator298 = NULL;
    switch ($tmp291) {
        case 0: goto $l341;
    }
    $l343:;
    abort();
}
panda$collections$ImmutableArray* panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(panda$collections$Array* self) {
    panda$core$Class* $tmp344;
    panda$core$Class* $tmp345;
    panda$collections$ImmutableArray* $tmp346;
    panda$core$Int64 $tmp348;
    panda$collections$ImmutableArray* $returnValue349;
    panda$collections$ImmutableArray* $tmp350;
    self->data = ((panda$core$Object**) pandaRealloc(self->data, self->capacity.value * 8, self->count.value * 8));
    {
        $tmp344 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableArray* $tmp347 = (panda$collections$ImmutableArray*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$ImmutableArray$class);
        panda$collections$ImmutableArray$init($tmp347);
        $tmp346 = $tmp347;
        $tmp345 = ((panda$core$Object*) $tmp346)->$class;
        ((panda$core$Object*) self)->$class = $tmp345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
    }
    panda$core$Int64$init$builtin_int64(&$tmp348, -1);
    self->capacity = $tmp348;
    $tmp350 = ((panda$collections$ImmutableArray*) ((panda$core$Object*) self));
    $returnValue349 = $tmp350;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp350));
    return $returnValue349;
}

