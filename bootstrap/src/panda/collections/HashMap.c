#include "panda/collections/HashMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Map.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/MapWriter.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/HashMap/Entry.h"
#include "panda/core/Equatable.h"
#include "panda/collections/HashMap/KeyIterator.h"
#include "panda/collections/HashMap/ValueIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ImmutableHashMap.h"
__attribute__((weak)) panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim(panda$collections$HashMap* p0, panda$core$Object* p1) {
    panda$core$Object* result = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p0, ((panda$collections$Key*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim(panda$collections$HashMap* p0) {
    panda$collections$Iterator* result = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(p0);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim(panda$collections$HashMap* p0) {
    panda$collections$Iterator* result = panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(p0);

    return result;
}
__attribute__((weak)) void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim(panda$collections$HashMap* p0, panda$core$Object* p1, panda$core$Object* p2) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(p0, ((panda$collections$Key*) p1), p2);

}

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$HashMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$HashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$HashMap$_panda$collections$Map, { panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapView, { panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim} };

static panda$core$String $s1;
panda$collections$HashMap$class_type panda$collections$HashMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapWriter, { panda$collections$HashMap$convert$R$panda$core$String, panda$collections$HashMap$cleanup, panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit, panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim, panda$collections$HashMap$remove$panda$collections$HashMap$K, panda$collections$HashMap$clear, panda$collections$HashMap$incrementCount, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim, panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT} };

typedef panda$collections$Iterator* (*$fn45)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn52)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn63)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn68)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn102)(panda$collections$Key*);
typedef panda$core$Bit (*$fn135)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn166)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn196)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn232)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn252)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Int64 $tmp2;
    panda$collections$HashMap* $tmp3;
    panda$core$Int64 $tmp4;
    panda$core$Int64 $tmp6;
    panda$core$Int64 $tmp7;
    panda$core$Range$LTpanda$core$Int64$GT $tmp8;
    panda$core$Int64 $tmp9;
    panda$core$Bit $tmp10;
    panda$collections$HashMap$Entry** $tmp24;
    panda$core$Int64 $tmp25;
    panda$collections$HashMap$Entry* $tmp26;
    panda$core$Int64 $tmp33;
    panda$core$Int64 $tmp35;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->changeCount = $tmp2;
    $tmp3 = self;
    panda$core$Int64$init$builtin_int64(&$tmp4, 1);
    panda$core$Int64 $tmp5 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3->changeCount, $tmp4);
    $tmp3->changeCount = $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    self->_count = $tmp6;
    panda$core$Int64$init$builtin_int64(&$tmp7, 16);
    self->bucketCount = $tmp7;
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp9, 0);
    panda$core$Bit$init$builtin_bit(&$tmp10, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp8, $tmp9, self->bucketCount, $tmp10);
    int64_t $tmp12 = $tmp8.min.value;
    panda$core$Int64 i11 = { $tmp12 };
    int64_t $tmp14 = $tmp8.max.value;
    bool $tmp15 = $tmp8.inclusive.value;
    if ($tmp15) goto $l22; else goto $l23;
    $l22:;
    if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
    $l23:;
    if ($tmp12 < $tmp14) goto $l16; else goto $l18;
    $l16:;
    {
        {
            $tmp24 = self->contents;
            $tmp25 = i11;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24[$tmp25.value]));
            $tmp26 = NULL;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
            $tmp24[$tmp25.value] = $tmp26;
        }
    }
    $l19:;
    int64_t $tmp28 = $tmp14 - i11.value;
    if ($tmp15) goto $l29; else goto $l30;
    $l29:;
    if ((uint64_t) $tmp28 >= 1) goto $l27; else goto $l18;
    $l30:;
    if ((uint64_t) $tmp28 > 1) goto $l27; else goto $l18;
    $l27:;
    i11.value += 1;
    goto $l16;
    $l18:;
    panda$core$Int64$init$builtin_int64(&$tmp33, 3);
    panda$core$Int64 $tmp34 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp33);
    panda$core$Int64$init$builtin_int64(&$tmp35, 4);
    panda$core$Int64 $tmp36 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp34, $tmp35);
    self->threshold = $tmp36;
}
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map) {
    panda$collections$Iterator* Iter$152$940 = NULL;
    panda$collections$Iterator* $tmp41;
    panda$collections$Iterator* $tmp42;
    panda$collections$Key* k58 = NULL;
    panda$collections$Key* $tmp59;
    panda$core$Object* $tmp60;
    panda$core$Object* $tmp65;
    panda$collections$HashMap$init(self);
    {
        int $tmp39;
        {
            ITable* $tmp43 = p_map->$class->itable;
            while ($tmp43->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp43 = $tmp43->next;
            }
            $fn45 $tmp44 = $tmp43->methods[2];
            panda$collections$Iterator* $tmp46 = $tmp44(p_map);
            $tmp42 = $tmp46;
            $tmp41 = $tmp42;
            Iter$152$940 = $tmp41;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp42));
            $l47:;
            ITable* $tmp50 = Iter$152$940->$class->itable;
            while ($tmp50->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp50 = $tmp50->next;
            }
            $fn52 $tmp51 = $tmp50->methods[0];
            panda$core$Bit $tmp53 = $tmp51(Iter$152$940);
            panda$core$Bit $tmp54 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp53);
            bool $tmp49 = $tmp54.value;
            if (!$tmp49) goto $l48;
            {
                int $tmp57;
                {
                    ITable* $tmp61 = Iter$152$940->$class->itable;
                    while ($tmp61->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp61 = $tmp61->next;
                    }
                    $fn63 $tmp62 = $tmp61->methods[1];
                    panda$core$Object* $tmp64 = $tmp62(Iter$152$940);
                    $tmp60 = $tmp64;
                    $tmp59 = ((panda$collections$Key*) $tmp60);
                    k58 = $tmp59;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
                    panda$core$Panda$unref$panda$core$Object($tmp60);
                    ITable* $tmp66 = p_map->$class->itable;
                    while ($tmp66->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                        $tmp66 = $tmp66->next;
                    }
                    $fn68 $tmp67 = $tmp66->methods[1];
                    panda$core$Object* $tmp69 = $tmp67(p_map, ((panda$core$Object*) k58));
                    $tmp65 = $tmp69;
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k58, $tmp65);
                    panda$core$Panda$unref$panda$core$Object($tmp65);
                }
                $tmp57 = -1;
                goto $l55;
                $l55:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k58));
                k58 = NULL;
                switch ($tmp57) {
                    case -1: goto $l70;
                }
                $l70:;
            }
            goto $l47;
            $l48:;
        }
        $tmp39 = -1;
        goto $l37;
        $l37:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$152$940));
        Iter$152$940 = NULL;
        switch ($tmp39) {
            case -1: goto $l71;
        }
        $l71:;
    }
}
void panda$collections$HashMap$cleanup(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp75;
    panda$core$Int64 $tmp76;
    panda$core$Bit $tmp77;
    int $tmp74;
    {
        panda$core$Int64$init$builtin_int64(&$tmp76, 0);
        panda$core$Bit$init$builtin_bit(&$tmp77, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp75, $tmp76, self->bucketCount, $tmp77);
        int64_t $tmp79 = $tmp75.min.value;
        panda$core$Int64 i78 = { $tmp79 };
        int64_t $tmp81 = $tmp75.max.value;
        bool $tmp82 = $tmp75.inclusive.value;
        if ($tmp82) goto $l89; else goto $l90;
        $l89:;
        if ($tmp79 <= $tmp81) goto $l83; else goto $l85;
        $l90:;
        if ($tmp79 < $tmp81) goto $l83; else goto $l85;
        $l83:;
        {
            if (((panda$core$Bit) { self->contents[i78.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i78.value]));
            }
            }
        }
        $l86:;
        int64_t $tmp92 = $tmp81 - i78.value;
        if ($tmp82) goto $l93; else goto $l94;
        $l93:;
        if ((uint64_t) $tmp92 >= 1) goto $l91; else goto $l85;
        $l94:;
        if ((uint64_t) $tmp92 > 1) goto $l91; else goto $l85;
        $l91:;
        i78.value += 1;
        goto $l83;
        $l85:;
        pandaFree(self->contents);
    }
    $tmp74 = -1;
    goto $l72;
    $l72:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp74) {
        case -1: goto $l97;
    }
    $l97:;
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h98;
    panda$core$Int64 $tmp99;
    panda$core$Int64 $tmp104;
    panda$core$Int64 $tmp106;
    panda$core$Int64 $tmp109;
    panda$core$Int64 $tmp112;
    panda$core$Int64 $tmp116;
    panda$core$Int64 $returnValue119;
    memset(&h98, 0, sizeof(h98));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp99, 0);
        h98 = $tmp99;
    }
    }
    else {
    {
        ITable* $tmp100 = p_key->$class->itable;
        while ($tmp100->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp100 = $tmp100->next;
        }
        $fn102 $tmp101 = $tmp100->methods[0];
        panda$core$Int64 $tmp103 = $tmp101(p_key);
        h98 = $tmp103;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp104, 20);
    panda$core$Int64 $tmp105 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h98, $tmp104);
    panda$core$Int64$init$builtin_int64(&$tmp106, 12);
    panda$core$Int64 $tmp107 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h98, $tmp106);
    panda$core$Int64 $tmp108 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp105, $tmp107);
    panda$core$Int64$init$builtin_int64(&$tmp109, 7);
    panda$core$Int64 $tmp110 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h98, $tmp109);
    panda$core$Int64 $tmp111 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp108, $tmp110);
    panda$core$Int64$init$builtin_int64(&$tmp112, 4);
    panda$core$Int64 $tmp113 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h98, $tmp112);
    panda$core$Int64 $tmp114 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp111, $tmp113);
    panda$core$Int64 $tmp115 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h98, $tmp114);
    h98 = $tmp115;
    panda$core$Int64$init$builtin_int64(&$tmp116, 1);
    panda$core$Int64 $tmp117 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp116);
    panda$core$Int64 $tmp118 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h98, $tmp117);
    h98 = $tmp118;
    $returnValue119 = h98;
    return $returnValue119;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index124;
    panda$collections$HashMap$Entry* e126 = NULL;
    panda$collections$HashMap$Entry* $tmp127;
    panda$collections$HashMap$Entry* $tmp138;
    panda$collections$HashMap$Entry* $tmp139;
    panda$core$Object* $returnValue140;
    panda$core$Object* $tmp141;
    panda$core$Object* $tmp144;
    int $tmp123;
    {
        panda$core$Int64 $tmp125 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index124 = $tmp125;
        $tmp127 = self->contents[index124.value];
        e126 = $tmp127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
        $l128:;
        bool $tmp131 = ((panda$core$Bit) { e126 != NULL }).value;
        if (!$tmp131) goto $l132;
        ITable* $tmp133 = ((panda$core$Equatable*) e126->key)->$class->itable;
        while ($tmp133->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp133 = $tmp133->next;
        }
        $fn135 $tmp134 = $tmp133->methods[1];
        panda$core$Bit $tmp136 = $tmp134(((panda$core$Equatable*) e126->key), ((panda$core$Equatable*) p_key));
        $tmp131 = $tmp136.value;
        $l132:;
        panda$core$Bit $tmp137 = { $tmp131 };
        bool $tmp130 = $tmp137.value;
        if (!$tmp130) goto $l129;
        {
            {
                $tmp138 = e126;
                $tmp139 = e126->next;
                e126 = $tmp139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138));
            }
        }
        goto $l128;
        $l129:;
        if (((panda$core$Bit) { e126 != NULL }).value) {
        {
            $tmp141 = e126->value;
            $returnValue140 = $tmp141;
            panda$core$Panda$ref$panda$core$Object($tmp141);
            $tmp123 = 0;
            goto $l121;
            $l142:;
            return $returnValue140;
        }
        }
        else {
        {
            $tmp144 = NULL;
            $returnValue140 = $tmp144;
            panda$core$Panda$ref$panda$core$Object($tmp144);
            $tmp123 = 1;
            goto $l121;
            $l145:;
            return $returnValue140;
        }
        }
    }
    $tmp123 = -1;
    goto $l121;
    $l121:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e126));
    e126 = NULL;
    switch ($tmp123) {
        case 0: goto $l142;
        case -1: goto $l147;
        case 1: goto $l145;
    }
    $l147:;
    if (false) goto $l148; else goto $l149;
    $l149:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s150, (panda$core$Int64) { 189 }, &$s151);
    abort();
    $l148:;
    abort();
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index155;
    panda$collections$HashMap$Entry* e157 = NULL;
    panda$collections$HashMap$Entry* $tmp158;
    panda$collections$HashMap$Entry* $tmp169;
    panda$collections$HashMap$Entry* $tmp170;
    panda$core$Bit $returnValue171;
    int $tmp154;
    {
        panda$core$Int64 $tmp156 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index155 = $tmp156;
        $tmp158 = self->contents[index155.value];
        e157 = $tmp158;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
        $l159:;
        bool $tmp162 = ((panda$core$Bit) { e157 != NULL }).value;
        if (!$tmp162) goto $l163;
        ITable* $tmp164 = ((panda$core$Equatable*) e157->key)->$class->itable;
        while ($tmp164->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp164 = $tmp164->next;
        }
        $fn166 $tmp165 = $tmp164->methods[1];
        panda$core$Bit $tmp167 = $tmp165(((panda$core$Equatable*) e157->key), ((panda$core$Equatable*) p_key));
        $tmp162 = $tmp167.value;
        $l163:;
        panda$core$Bit $tmp168 = { $tmp162 };
        bool $tmp161 = $tmp168.value;
        if (!$tmp161) goto $l160;
        {
            {
                $tmp169 = e157;
                $tmp170 = e157->next;
                e157 = $tmp170;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
            }
        }
        goto $l159;
        $l160:;
        $returnValue171 = ((panda$core$Bit) { e157 != NULL });
        $tmp154 = 0;
        goto $l152;
        $l172:;
        return $returnValue171;
    }
    $l152:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e157));
    e157 = NULL;
    switch ($tmp154) {
        case 0: goto $l172;
    }
    $l174:;
    if (false) goto $l175; else goto $l176;
    $l176:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s177, (panda$core$Int64) { 203 }, &$s178);
    abort();
    $l175:;
    abort();
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$collections$HashMap* $tmp182;
    panda$core$Int64 $tmp183;
    panda$core$Int64 index185;
    panda$collections$HashMap$Entry* e187 = NULL;
    panda$collections$HashMap$Entry* $tmp188;
    panda$collections$HashMap$Entry* $tmp199;
    panda$collections$HashMap$Entry* $tmp200;
    panda$collections$HashMap$Entry* old204 = NULL;
    panda$collections$HashMap$Entry* $tmp205;
    panda$collections$HashMap$Entry* $tmp206;
    panda$collections$HashMap$Entry* $tmp207;
    panda$collections$HashMap$Entry* $tmp208;
    panda$collections$HashMap$Entry* $tmp210;
    panda$collections$HashMap$Entry* $tmp211;
    panda$collections$HashMap$Entry** $tmp212;
    panda$core$Int64 $tmp213;
    panda$collections$HashMap$Entry* $tmp214;
    panda$core$Object* $tmp216;
    panda$core$Object* $tmp217;
    int $tmp181;
    {
        $tmp182 = self;
        panda$core$Int64$init$builtin_int64(&$tmp183, 1);
        panda$core$Int64 $tmp184 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp182->changeCount, $tmp183);
        $tmp182->changeCount = $tmp184;
        panda$core$Int64 $tmp186 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index185 = $tmp186;
        $tmp188 = self->contents[index185.value];
        e187 = $tmp188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
        $l189:;
        bool $tmp192 = ((panda$core$Bit) { e187 != NULL }).value;
        if (!$tmp192) goto $l193;
        ITable* $tmp194 = ((panda$core$Equatable*) e187->key)->$class->itable;
        while ($tmp194->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp194 = $tmp194->next;
        }
        $fn196 $tmp195 = $tmp194->methods[1];
        panda$core$Bit $tmp197 = $tmp195(((panda$core$Equatable*) e187->key), ((panda$core$Equatable*) p_key));
        $tmp192 = $tmp197.value;
        $l193:;
        panda$core$Bit $tmp198 = { $tmp192 };
        bool $tmp191 = $tmp198.value;
        if (!$tmp191) goto $l190;
        {
            {
                $tmp199 = e187;
                $tmp200 = e187->next;
                e187 = $tmp200;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
            }
        }
        goto $l189;
        $l190:;
        if (((panda$core$Bit) { e187 == NULL }).value) {
        {
            int $tmp203;
            {
                $tmp205 = self->contents[index185.value];
                old204 = $tmp205;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                {
                    $tmp206 = e187;
                    panda$collections$HashMap$Entry* $tmp209 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
                    panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp209, p_key, p_value);
                    $tmp208 = $tmp209;
                    $tmp207 = $tmp208;
                    e187 = $tmp207;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp208));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
                }
                {
                    $tmp210 = e187->next;
                    $tmp211 = old204;
                    e187->next = $tmp211;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
                }
                {
                    $tmp212 = self->contents;
                    $tmp213 = index185;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212[$tmp213.value]));
                    $tmp214 = e187;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp214));
                    $tmp212[$tmp213.value] = $tmp214;
                }
                panda$collections$HashMap$incrementCount(self);
            }
            $tmp203 = -1;
            goto $l201;
            $l201:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old204));
            old204 = NULL;
            switch ($tmp203) {
                case -1: goto $l215;
            }
            $l215:;
        }
        }
        else {
        {
            {
                $tmp216 = e187->value;
                $tmp217 = p_value;
                e187->value = $tmp217;
                panda$core$Panda$ref$panda$core$Object($tmp217);
                panda$core$Panda$unref$panda$core$Object($tmp216);
            }
        }
        }
    }
    $tmp181 = -1;
    goto $l179;
    $l179:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e187));
    e187 = NULL;
    switch ($tmp181) {
        case -1: goto $l218;
    }
    $l218:;
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$collections$HashMap* $tmp222;
    panda$core$Int64 $tmp223;
    panda$core$Int64 index225;
    panda$collections$HashMap$Entry* e227 = NULL;
    panda$collections$HashMap$Entry* $tmp228;
    panda$collections$HashMap$Entry** $tmp234;
    panda$core$Int64 $tmp235;
    panda$collections$HashMap$Entry* $tmp236;
    panda$collections$HashMap* $tmp237;
    panda$core$Int64 $tmp238;
    panda$collections$HashMap$Entry* next246 = NULL;
    panda$collections$HashMap$Entry* $tmp247;
    panda$collections$HashMap$Entry* $tmp255;
    panda$collections$HashMap$Entry* $tmp256;
    panda$collections$HashMap$Entry* next258 = NULL;
    panda$collections$HashMap$Entry* $tmp259;
    panda$collections$HashMap$Entry* $tmp263;
    panda$collections$HashMap$Entry* $tmp264;
    panda$collections$HashMap* $tmp265;
    panda$core$Int64 $tmp266;
    int $tmp221;
    {
        $tmp222 = self;
        panda$core$Int64$init$builtin_int64(&$tmp223, 1);
        panda$core$Int64 $tmp224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp222->changeCount, $tmp223);
        $tmp222->changeCount = $tmp224;
        panda$core$Int64 $tmp226 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index225 = $tmp226;
        $tmp228 = self->contents[index225.value];
        e227 = $tmp228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
        if (((panda$core$Bit) { e227 == NULL }).value) {
        {
            $tmp221 = 0;
            goto $l219;
            $l229:;
            return;
        }
        }
        ITable* $tmp230 = ((panda$core$Equatable*) e227->key)->$class->itable;
        while ($tmp230->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp230 = $tmp230->next;
        }
        $fn232 $tmp231 = $tmp230->methods[0];
        panda$core$Bit $tmp233 = $tmp231(((panda$core$Equatable*) e227->key), ((panda$core$Equatable*) p_key));
        if ($tmp233.value) {
        {
            {
                $tmp234 = self->contents;
                $tmp235 = index225;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234[$tmp235.value]));
                $tmp236 = e227->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                $tmp234[$tmp235.value] = $tmp236;
            }
            $tmp237 = self;
            panda$core$Int64$init$builtin_int64(&$tmp238, 1);
            panda$core$Int64 $tmp239 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp237->_count, $tmp238);
            $tmp237->_count = $tmp239;
            $tmp221 = 1;
            goto $l219;
            $l240:;
            return;
        }
        }
        $l241:;
        while (true) {
        {
            int $tmp245;
            {
                $tmp247 = e227->next;
                next246 = $tmp247;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
                if (((panda$core$Bit) { next246 == NULL }).value) {
                {
                    $tmp245 = 0;
                    goto $l243;
                    $l248:;
                    $tmp221 = 2;
                    goto $l219;
                    $l249:;
                    return;
                }
                }
                ITable* $tmp250 = ((panda$core$Equatable*) next246->key)->$class->itable;
                while ($tmp250->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp250 = $tmp250->next;
                }
                $fn252 $tmp251 = $tmp250->methods[0];
                panda$core$Bit $tmp253 = $tmp251(((panda$core$Equatable*) next246->key), ((panda$core$Equatable*) p_key));
                if ($tmp253.value) {
                {
                    $tmp245 = 1;
                    goto $l243;
                    $l254:;
                    goto $l242;
                }
                }
                {
                    $tmp255 = e227;
                    $tmp256 = next246;
                    e227 = $tmp256;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
                }
            }
            $tmp245 = -1;
            goto $l243;
            $l243:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next246));
            next246 = NULL;
            switch ($tmp245) {
                case -1: goto $l257;
                case 0: goto $l248;
                case 1: goto $l254;
            }
            $l257:;
        }
        }
        $l242:;
        $tmp259 = e227->next;
        next258 = $tmp259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
        if (((panda$core$Bit) { next258 != NULL }).value) goto $l260; else goto $l261;
        $l261:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s262, (panda$core$Int64) { 260 });
        abort();
        $l260:;
        {
            $tmp263 = e227->next;
            $tmp264 = next258->next;
            e227->next = $tmp264;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
        }
        $tmp265 = self;
        panda$core$Int64$init$builtin_int64(&$tmp266, 1);
        panda$core$Int64 $tmp267 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp265->_count, $tmp266);
        $tmp265->_count = $tmp267;
    }
    $tmp221 = -1;
    goto $l219;
    $l219:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next258));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e227));
    e227 = NULL;
    next258 = NULL;
    switch ($tmp221) {
        case 2: goto $l249;
        case -1: goto $l268;
        case 0: goto $l229;
        case 1: goto $l240;
    }
    $l268:;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$collections$HashMap* $tmp269;
    panda$core$Int64 $tmp270;
    panda$core$Int64 $tmp272;
    panda$core$Range$LTpanda$core$Int64$GT $tmp273;
    panda$core$Int64 $tmp274;
    panda$core$Bit $tmp275;
    panda$core$Int64 $tmp295;
    panda$core$Range$LTpanda$core$Int64$GT $tmp296;
    panda$core$Int64 $tmp297;
    panda$core$Bit $tmp298;
    panda$collections$HashMap$Entry** $tmp312;
    panda$core$Int64 $tmp313;
    panda$collections$HashMap$Entry* $tmp314;
    panda$core$Int64 $tmp321;
    panda$core$Int64 $tmp323;
    $tmp269 = self;
    panda$core$Int64$init$builtin_int64(&$tmp270, 1);
    panda$core$Int64 $tmp271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp269->changeCount, $tmp270);
    $tmp269->changeCount = $tmp271;
    panda$core$Int64$init$builtin_int64(&$tmp272, 0);
    self->_count = $tmp272;
    panda$core$Int64$init$builtin_int64(&$tmp274, 0);
    panda$core$Bit$init$builtin_bit(&$tmp275, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp273, $tmp274, self->bucketCount, $tmp275);
    int64_t $tmp277 = $tmp273.min.value;
    panda$core$Int64 i276 = { $tmp277 };
    int64_t $tmp279 = $tmp273.max.value;
    bool $tmp280 = $tmp273.inclusive.value;
    if ($tmp280) goto $l287; else goto $l288;
    $l287:;
    if ($tmp277 <= $tmp279) goto $l281; else goto $l283;
    $l288:;
    if ($tmp277 < $tmp279) goto $l281; else goto $l283;
    $l281:;
    {
        if (((panda$core$Bit) { self->contents[i276.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i276.value]));
        }
        }
    }
    $l284:;
    int64_t $tmp290 = $tmp279 - i276.value;
    if ($tmp280) goto $l291; else goto $l292;
    $l291:;
    if ((uint64_t) $tmp290 >= 1) goto $l289; else goto $l283;
    $l292:;
    if ((uint64_t) $tmp290 > 1) goto $l289; else goto $l283;
    $l289:;
    i276.value += 1;
    goto $l281;
    $l283:;
    pandaFree(self->contents);
    panda$core$Int64$init$builtin_int64(&$tmp295, 16);
    self->bucketCount = $tmp295;
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp297, 0);
    panda$core$Bit$init$builtin_bit(&$tmp298, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp296, $tmp297, self->bucketCount, $tmp298);
    int64_t $tmp300 = $tmp296.min.value;
    panda$core$Int64 i299 = { $tmp300 };
    int64_t $tmp302 = $tmp296.max.value;
    bool $tmp303 = $tmp296.inclusive.value;
    if ($tmp303) goto $l310; else goto $l311;
    $l310:;
    if ($tmp300 <= $tmp302) goto $l304; else goto $l306;
    $l311:;
    if ($tmp300 < $tmp302) goto $l304; else goto $l306;
    $l304:;
    {
        if (((panda$core$Bit) { self->contents[i299.value] != NULL }).value) {
        {
            {
                $tmp312 = self->contents;
                $tmp313 = i299;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312[$tmp313.value]));
                $tmp314 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
                $tmp312[$tmp313.value] = $tmp314;
            }
        }
        }
    }
    $l307:;
    int64_t $tmp316 = $tmp302 - i299.value;
    if ($tmp303) goto $l317; else goto $l318;
    $l317:;
    if ((uint64_t) $tmp316 >= 1) goto $l315; else goto $l306;
    $l318:;
    if ((uint64_t) $tmp316 > 1) goto $l315; else goto $l306;
    $l315:;
    i299.value += 1;
    goto $l304;
    $l306:;
    panda$core$Int64$init$builtin_int64(&$tmp321, 3);
    panda$core$Int64 $tmp322 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp321);
    panda$core$Int64$init$builtin_int64(&$tmp323, 4);
    panda$core$Int64 $tmp324 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp322, $tmp323);
    self->threshold = $tmp324;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap* $tmp325;
    panda$core$Int64 $tmp326;
    panda$collections$HashMap$Entry** oldContents329;
    panda$core$Int64 oldBucketCount330;
    panda$collections$HashMap* $tmp331;
    panda$core$Int64 $tmp332;
    panda$core$Range$LTpanda$core$Int64$GT $tmp334;
    panda$core$Int64 $tmp335;
    panda$core$Bit $tmp336;
    panda$collections$HashMap$Entry** $tmp350;
    panda$core$Int64 $tmp351;
    panda$collections$HashMap$Entry* $tmp352;
    panda$collections$HashMap* $tmp359;
    panda$core$Int64 $tmp360;
    panda$core$Int64 $tmp362;
    panda$core$Range$LTpanda$core$Int64$GT $tmp363;
    panda$core$Int64 $tmp364;
    panda$core$Bit $tmp365;
    panda$collections$HashMap$Entry* e382 = NULL;
    panda$collections$HashMap$Entry* $tmp383;
    panda$collections$HashMap$Entry* $tmp387;
    panda$collections$HashMap$Entry* $tmp388;
    panda$core$Range$LTpanda$core$Int64$GT $tmp396;
    panda$core$Int64 $tmp397;
    panda$core$Bit $tmp398;
    $tmp325 = self;
    panda$core$Int64$init$builtin_int64(&$tmp326, 1);
    panda$core$Int64 $tmp327 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp325->_count, $tmp326);
    $tmp325->_count = $tmp327;
    panda$core$Bit $tmp328 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp328.value) {
    {
        oldContents329 = self->contents;
        oldBucketCount330 = self->bucketCount;
        $tmp331 = self;
        panda$core$Int64$init$builtin_int64(&$tmp332, 2);
        panda$core$Int64 $tmp333 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp331->bucketCount, $tmp332);
        $tmp331->bucketCount = $tmp333;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Int64$init$builtin_int64(&$tmp335, 0);
        panda$core$Bit$init$builtin_bit(&$tmp336, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp334, $tmp335, self->bucketCount, $tmp336);
        int64_t $tmp338 = $tmp334.min.value;
        panda$core$Int64 i337 = { $tmp338 };
        int64_t $tmp340 = $tmp334.max.value;
        bool $tmp341 = $tmp334.inclusive.value;
        if ($tmp341) goto $l348; else goto $l349;
        $l348:;
        if ($tmp338 <= $tmp340) goto $l342; else goto $l344;
        $l349:;
        if ($tmp338 < $tmp340) goto $l342; else goto $l344;
        $l342:;
        {
            {
                $tmp350 = self->contents;
                $tmp351 = i337;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350[$tmp351.value]));
                $tmp352 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
                $tmp350[$tmp351.value] = $tmp352;
            }
        }
        $l345:;
        int64_t $tmp354 = $tmp340 - i337.value;
        if ($tmp341) goto $l355; else goto $l356;
        $l355:;
        if ((uint64_t) $tmp354 >= 1) goto $l353; else goto $l344;
        $l356:;
        if ((uint64_t) $tmp354 > 1) goto $l353; else goto $l344;
        $l353:;
        i337.value += 1;
        goto $l342;
        $l344:;
        $tmp359 = self;
        panda$core$Int64$init$builtin_int64(&$tmp360, 2);
        panda$core$Int64 $tmp361 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp359->threshold, $tmp360);
        $tmp359->threshold = $tmp361;
        panda$core$Int64$init$builtin_int64(&$tmp362, 0);
        self->_count = $tmp362;
        panda$core$Int64$init$builtin_int64(&$tmp364, 0);
        panda$core$Bit$init$builtin_bit(&$tmp365, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp363, $tmp364, oldBucketCount330, $tmp365);
        int64_t $tmp367 = $tmp363.min.value;
        panda$core$Int64 i366 = { $tmp367 };
        int64_t $tmp369 = $tmp363.max.value;
        bool $tmp370 = $tmp363.inclusive.value;
        if ($tmp370) goto $l377; else goto $l378;
        $l377:;
        if ($tmp367 <= $tmp369) goto $l371; else goto $l373;
        $l378:;
        if ($tmp367 < $tmp369) goto $l371; else goto $l373;
        $l371:;
        {
            int $tmp381;
            {
                $tmp383 = oldContents329[i366.value];
                e382 = $tmp383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
                $l384:;
                bool $tmp386 = ((panda$core$Bit) { e382 != NULL }).value;
                if (!$tmp386) goto $l385;
                {
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e382->key, e382->value);
                    {
                        $tmp387 = e382;
                        $tmp388 = e382->next;
                        e382 = $tmp388;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp388));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                    }
                }
                goto $l384;
                $l385:;
            }
            $tmp381 = -1;
            goto $l379;
            $l379:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e382));
            e382 = NULL;
            switch ($tmp381) {
                case -1: goto $l389;
            }
            $l389:;
        }
        $l374:;
        int64_t $tmp391 = $tmp369 - i366.value;
        if ($tmp370) goto $l392; else goto $l393;
        $l392:;
        if ((uint64_t) $tmp391 >= 1) goto $l390; else goto $l373;
        $l393:;
        if ((uint64_t) $tmp391 > 1) goto $l390; else goto $l373;
        $l390:;
        i366.value += 1;
        goto $l371;
        $l373:;
        panda$core$Int64$init$builtin_int64(&$tmp397, 0);
        panda$core$Bit$init$builtin_bit(&$tmp398, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp396, $tmp397, oldBucketCount330, $tmp398);
        int64_t $tmp400 = $tmp396.min.value;
        panda$core$Int64 i399 = { $tmp400 };
        int64_t $tmp402 = $tmp396.max.value;
        bool $tmp403 = $tmp396.inclusive.value;
        if ($tmp403) goto $l410; else goto $l411;
        $l410:;
        if ($tmp400 <= $tmp402) goto $l404; else goto $l406;
        $l411:;
        if ($tmp400 < $tmp402) goto $l404; else goto $l406;
        $l404:;
        {
            if (((panda$core$Bit) { oldContents329[i399.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents329[i399.value]));
            }
            }
        }
        $l407:;
        int64_t $tmp413 = $tmp402 - i399.value;
        if ($tmp403) goto $l414; else goto $l415;
        $l414:;
        if ((uint64_t) $tmp413 >= 1) goto $l412; else goto $l406;
        $l415:;
        if ((uint64_t) $tmp413 > 1) goto $l412; else goto $l406;
        $l412:;
        i399.value += 1;
        goto $l404;
        $l406:;
        pandaFree(oldContents329);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue418;
    panda$collections$Iterator* $tmp419;
    panda$collections$HashMap$KeyIterator* $tmp420;
    panda$collections$HashMap$KeyIterator* $tmp421 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp421, self);
    $tmp420 = $tmp421;
    $tmp419 = ((panda$collections$Iterator*) $tmp420);
    $returnValue418 = $tmp419;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp419));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
    return $returnValue418;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue423;
    panda$collections$Iterator* $tmp424;
    panda$collections$HashMap$ValueIterator* $tmp425;
    panda$collections$HashMap$ValueIterator* $tmp426 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp426, self);
    $tmp425 = $tmp426;
    $tmp424 = ((panda$collections$Iterator*) $tmp425);
    $returnValue423 = $tmp424;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
    return $returnValue423;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $returnValue428;
    $returnValue428 = self->_count;
    return $returnValue428;
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result433 = NULL;
    panda$core$MutableString* $tmp434;
    panda$core$MutableString* $tmp435;
    panda$core$Char8 $tmp437;
    panda$core$UInt8 $tmp438;
    panda$core$String* separator439 = NULL;
    panda$core$String* $tmp440;
    panda$core$Range$LTpanda$core$Int64$GT $tmp442;
    panda$core$Int64 $tmp443;
    panda$core$Bit $tmp444;
    panda$collections$HashMap$Entry* entry461 = NULL;
    panda$collections$HashMap$Entry* $tmp462;
    panda$core$Char8 $tmp467;
    panda$core$UInt8 $tmp468;
    panda$collections$HashMap$Entry* $tmp470;
    panda$collections$HashMap$Entry* $tmp471;
    panda$core$String* $tmp472;
    panda$core$String* $tmp473;
    panda$core$Char8 $tmp482;
    panda$core$UInt8 $tmp483;
    panda$core$String* $returnValue484;
    panda$core$String* $tmp485;
    panda$core$String* $tmp486;
    int $tmp432;
    {
        panda$core$MutableString* $tmp436 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp436);
        $tmp435 = $tmp436;
        $tmp434 = $tmp435;
        result433 = $tmp434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
        panda$core$UInt8$init$builtin_uint8(&$tmp438, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp437, $tmp438);
        panda$core$MutableString$append$panda$core$Char8(result433, $tmp437);
        $tmp440 = &$s441;
        separator439 = $tmp440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp440));
        panda$core$Int64$init$builtin_int64(&$tmp443, 0);
        panda$core$Bit$init$builtin_bit(&$tmp444, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp442, $tmp443, self->bucketCount, $tmp444);
        int64_t $tmp446 = $tmp442.min.value;
        panda$core$Int64 i445 = { $tmp446 };
        int64_t $tmp448 = $tmp442.max.value;
        bool $tmp449 = $tmp442.inclusive.value;
        if ($tmp449) goto $l456; else goto $l457;
        $l456:;
        if ($tmp446 <= $tmp448) goto $l450; else goto $l452;
        $l457:;
        if ($tmp446 < $tmp448) goto $l450; else goto $l452;
        $l450:;
        {
            int $tmp460;
            {
                $tmp462 = self->contents[i445.value];
                entry461 = $tmp462;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
                $l463:;
                bool $tmp465 = ((panda$core$Bit) { entry461 != NULL }).value;
                if (!$tmp465) goto $l464;
                {
                    panda$core$MutableString$append$panda$core$String(result433, separator439);
                    if (((panda$core$Bit) { entry461->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result433, ((panda$core$Object*) entry461->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result433, &$s466);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp468, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp467, $tmp468);
                    panda$core$MutableString$append$panda$core$Char8(result433, $tmp467);
                    if (((panda$core$Bit) { entry461->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result433, entry461->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result433, &$s469);
                    }
                    }
                    {
                        $tmp470 = entry461;
                        $tmp471 = entry461->next;
                        entry461 = $tmp471;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp471));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
                    }
                    {
                        $tmp472 = separator439;
                        $tmp473 = &$s474;
                        separator439 = $tmp473;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
                    }
                }
                goto $l463;
                $l464:;
            }
            $tmp460 = -1;
            goto $l458;
            $l458:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry461));
            entry461 = NULL;
            switch ($tmp460) {
                case -1: goto $l475;
            }
            $l475:;
        }
        $l453:;
        int64_t $tmp477 = $tmp448 - i445.value;
        if ($tmp449) goto $l478; else goto $l479;
        $l478:;
        if ((uint64_t) $tmp477 >= 1) goto $l476; else goto $l452;
        $l479:;
        if ((uint64_t) $tmp477 > 1) goto $l476; else goto $l452;
        $l476:;
        i445.value += 1;
        goto $l450;
        $l452:;
        panda$core$UInt8$init$builtin_uint8(&$tmp483, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp482, $tmp483);
        panda$core$MutableString$append$panda$core$Char8(result433, $tmp482);
        panda$core$String* $tmp487 = panda$core$MutableString$finish$R$panda$core$String(result433);
        $tmp486 = $tmp487;
        $tmp485 = $tmp486;
        $returnValue484 = $tmp485;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
        $tmp432 = 0;
        goto $l430;
        $l488:;
        return $returnValue484;
    }
    $l430:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result433));
    result433 = NULL;
    separator439 = NULL;
    switch ($tmp432) {
        case 0: goto $l488;
    }
    $l490:;
    if (false) goto $l491; else goto $l492;
    $l492:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s493, (panda$core$Int64) { 335 }, &$s494);
    abort();
    $l491:;
    abort();
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$core$Class* $tmp495;
    panda$core$Class* $tmp496;
    panda$collections$ImmutableHashMap* $tmp497;
    panda$collections$ImmutableHashMap* $returnValue499;
    panda$collections$ImmutableHashMap* $tmp500;
    {
        $tmp495 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp498 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp498);
        $tmp497 = $tmp498;
        $tmp496 = ((panda$core$Object*) $tmp497)->$class;
        ((panda$core$Object*) self)->$class = $tmp496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp495));
    }
    $tmp500 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    $returnValue499 = $tmp500;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp500));
    return $returnValue499;
}

