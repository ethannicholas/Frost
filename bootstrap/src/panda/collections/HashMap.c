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
typedef panda$core$Bit (*$fn238)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn258)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24[$tmp25.value]));
            $tmp26 = NULL;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
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
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
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
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
                    panda$core$Panda$unref$panda$core$Object$Q($tmp60);
                    ITable* $tmp66 = p_map->$class->itable;
                    while ($tmp66->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                        $tmp66 = $tmp66->next;
                    }
                    $fn68 $tmp67 = $tmp66->methods[1];
                    panda$core$Object* $tmp69 = $tmp67(p_map, ((panda$core$Object*) k58));
                    $tmp65 = $tmp69;
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k58, $tmp65);
                    panda$core$Panda$unref$panda$core$Object$Q($tmp65);
                }
                $tmp57 = -1;
                goto $l55;
                $l55:;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) k58));
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
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$152$940));
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
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->contents[i78.value]));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp139));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
            }
        }
        goto $l128;
        $l129:;
        if (((panda$core$Bit) { e126 != NULL }).value) {
        {
            $tmp141 = e126->value;
            $returnValue140 = $tmp141;
            panda$core$Panda$ref$panda$core$Object$Q($tmp141);
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
            panda$core$Panda$ref$panda$core$Object$Q($tmp144);
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
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) e126));
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp158));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp170));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp169));
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
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) e157));
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
    panda$collections$HashMap$Entry* $tmp212;
    panda$collections$HashMap$Entry* $tmp213;
    panda$collections$HashMap$Entry* $tmp214;
    panda$collections$HashMap$Entry* $tmp216;
    panda$collections$HashMap$Entry* $tmp217;
    panda$collections$HashMap$Entry** $tmp218;
    panda$core$Int64 $tmp219;
    panda$collections$HashMap$Entry* $tmp220;
    panda$core$Object* $tmp222;
    panda$core$Object* $tmp223;
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
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp200));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
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
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp205));
                if (((panda$core$Bit) { p_key != NULL }).value) goto $l206; else goto $l207;
                $l207:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s208, (panda$core$Int64) { 222 });
                abort();
                $l206:;
                if (((panda$core$Bit) { p_value != NULL }).value) goto $l209; else goto $l210;
                $l210:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s211, (panda$core$Int64) { 223 });
                abort();
                $l209:;
                {
                    $tmp212 = e187;
                    panda$collections$HashMap$Entry* $tmp215 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
                    panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp215, p_key, p_value);
                    $tmp214 = $tmp215;
                    $tmp213 = $tmp214;
                    e187 = $tmp213;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp213));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
                }
                {
                    $tmp216 = e187->next;
                    $tmp217 = old204;
                    e187->next = $tmp217;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp217));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
                }
                {
                    $tmp218 = self->contents;
                    $tmp219 = index185;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218[$tmp219.value]));
                    $tmp220 = e187;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
                    $tmp218[$tmp219.value] = $tmp220;
                }
                panda$collections$HashMap$incrementCount(self);
            }
            $tmp203 = -1;
            goto $l201;
            $l201:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) old204));
            old204 = NULL;
            switch ($tmp203) {
                case -1: goto $l221;
            }
            $l221:;
        }
        }
        else {
        {
            {
                $tmp222 = e187->value;
                $tmp223 = p_value;
                e187->value = $tmp223;
                panda$core$Panda$ref$panda$core$Object$Q($tmp223);
                panda$core$Panda$unref$panda$core$Object$Q($tmp222);
            }
        }
        }
    }
    $tmp181 = -1;
    goto $l179;
    $l179:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) e187));
    e187 = NULL;
    switch ($tmp181) {
        case -1: goto $l224;
    }
    $l224:;
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$collections$HashMap* $tmp228;
    panda$core$Int64 $tmp229;
    panda$core$Int64 index231;
    panda$collections$HashMap$Entry* e233 = NULL;
    panda$collections$HashMap$Entry* $tmp234;
    panda$collections$HashMap$Entry** $tmp240;
    panda$core$Int64 $tmp241;
    panda$collections$HashMap$Entry* $tmp242;
    panda$collections$HashMap* $tmp243;
    panda$core$Int64 $tmp244;
    panda$collections$HashMap$Entry* next252 = NULL;
    panda$collections$HashMap$Entry* $tmp253;
    panda$collections$HashMap$Entry* $tmp261;
    panda$collections$HashMap$Entry* $tmp262;
    panda$collections$HashMap$Entry* next264 = NULL;
    panda$collections$HashMap$Entry* $tmp265;
    panda$collections$HashMap$Entry* $tmp269;
    panda$collections$HashMap$Entry* $tmp270;
    panda$collections$HashMap* $tmp271;
    panda$core$Int64 $tmp272;
    int $tmp227;
    {
        $tmp228 = self;
        panda$core$Int64$init$builtin_int64(&$tmp229, 1);
        panda$core$Int64 $tmp230 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp228->changeCount, $tmp229);
        $tmp228->changeCount = $tmp230;
        panda$core$Int64 $tmp232 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index231 = $tmp232;
        $tmp234 = self->contents[index231.value];
        e233 = $tmp234;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp234));
        if (((panda$core$Bit) { e233 == NULL }).value) {
        {
            $tmp227 = 0;
            goto $l225;
            $l235:;
            return;
        }
        }
        ITable* $tmp236 = ((panda$core$Equatable*) e233->key)->$class->itable;
        while ($tmp236->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp236 = $tmp236->next;
        }
        $fn238 $tmp237 = $tmp236->methods[0];
        panda$core$Bit $tmp239 = $tmp237(((panda$core$Equatable*) e233->key), ((panda$core$Equatable*) p_key));
        if ($tmp239.value) {
        {
            {
                $tmp240 = self->contents;
                $tmp241 = index231;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp240[$tmp241.value]));
                $tmp242 = e233->next;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
                $tmp240[$tmp241.value] = $tmp242;
            }
            $tmp243 = self;
            panda$core$Int64$init$builtin_int64(&$tmp244, 1);
            panda$core$Int64 $tmp245 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp243->_count, $tmp244);
            $tmp243->_count = $tmp245;
            $tmp227 = 1;
            goto $l225;
            $l246:;
            return;
        }
        }
        $l247:;
        while (true) {
        {
            int $tmp251;
            {
                $tmp253 = e233->next;
                next252 = $tmp253;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
                if (((panda$core$Bit) { next252 == NULL }).value) {
                {
                    $tmp251 = 0;
                    goto $l249;
                    $l254:;
                    $tmp227 = 2;
                    goto $l225;
                    $l255:;
                    return;
                }
                }
                ITable* $tmp256 = ((panda$core$Equatable*) next252->key)->$class->itable;
                while ($tmp256->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp256 = $tmp256->next;
                }
                $fn258 $tmp257 = $tmp256->methods[0];
                panda$core$Bit $tmp259 = $tmp257(((panda$core$Equatable*) next252->key), ((panda$core$Equatable*) p_key));
                if ($tmp259.value) {
                {
                    $tmp251 = 1;
                    goto $l249;
                    $l260:;
                    goto $l248;
                }
                }
                {
                    $tmp261 = e233;
                    $tmp262 = next252;
                    e233 = $tmp262;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp261));
                }
            }
            $tmp251 = -1;
            goto $l249;
            $l249:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next252));
            next252 = NULL;
            switch ($tmp251) {
                case 1: goto $l260;
                case 0: goto $l254;
                case -1: goto $l263;
            }
            $l263:;
        }
        }
        $l248:;
        $tmp265 = e233->next;
        next264 = $tmp265;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
        if (((panda$core$Bit) { next264 != NULL }).value) goto $l266; else goto $l267;
        $l267:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s268, (panda$core$Int64) { 262 });
        abort();
        $l266:;
        {
            $tmp269 = e233->next;
            $tmp270 = next264->next;
            e233->next = $tmp270;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
        }
        $tmp271 = self;
        panda$core$Int64$init$builtin_int64(&$tmp272, 1);
        panda$core$Int64 $tmp273 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp271->_count, $tmp272);
        $tmp271->_count = $tmp273;
    }
    $tmp227 = -1;
    goto $l225;
    $l225:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) next264));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) e233));
    e233 = NULL;
    next264 = NULL;
    switch ($tmp227) {
        case 2: goto $l255;
        case -1: goto $l274;
        case 1: goto $l246;
        case 0: goto $l235;
    }
    $l274:;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$collections$HashMap* $tmp275;
    panda$core$Int64 $tmp276;
    panda$core$Int64 $tmp278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp279;
    panda$core$Int64 $tmp280;
    panda$core$Bit $tmp281;
    panda$core$Int64 $tmp301;
    panda$core$Range$LTpanda$core$Int64$GT $tmp302;
    panda$core$Int64 $tmp303;
    panda$core$Bit $tmp304;
    panda$collections$HashMap$Entry** $tmp318;
    panda$core$Int64 $tmp319;
    panda$collections$HashMap$Entry* $tmp320;
    panda$core$Int64 $tmp327;
    panda$core$Int64 $tmp329;
    $tmp275 = self;
    panda$core$Int64$init$builtin_int64(&$tmp276, 1);
    panda$core$Int64 $tmp277 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp275->changeCount, $tmp276);
    $tmp275->changeCount = $tmp277;
    panda$core$Int64$init$builtin_int64(&$tmp278, 0);
    self->_count = $tmp278;
    panda$core$Int64$init$builtin_int64(&$tmp280, 0);
    panda$core$Bit$init$builtin_bit(&$tmp281, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp279, $tmp280, self->bucketCount, $tmp281);
    int64_t $tmp283 = $tmp279.min.value;
    panda$core$Int64 i282 = { $tmp283 };
    int64_t $tmp285 = $tmp279.max.value;
    bool $tmp286 = $tmp279.inclusive.value;
    if ($tmp286) goto $l293; else goto $l294;
    $l293:;
    if ($tmp283 <= $tmp285) goto $l287; else goto $l289;
    $l294:;
    if ($tmp283 < $tmp285) goto $l287; else goto $l289;
    $l287:;
    {
        if (((panda$core$Bit) { self->contents[i282.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->contents[i282.value]));
        }
        }
    }
    $l290:;
    int64_t $tmp296 = $tmp285 - i282.value;
    if ($tmp286) goto $l297; else goto $l298;
    $l297:;
    if ((uint64_t) $tmp296 >= 1) goto $l295; else goto $l289;
    $l298:;
    if ((uint64_t) $tmp296 > 1) goto $l295; else goto $l289;
    $l295:;
    i282.value += 1;
    goto $l287;
    $l289:;
    pandaFree(self->contents);
    panda$core$Int64$init$builtin_int64(&$tmp301, 16);
    self->bucketCount = $tmp301;
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp303, 0);
    panda$core$Bit$init$builtin_bit(&$tmp304, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp302, $tmp303, self->bucketCount, $tmp304);
    int64_t $tmp306 = $tmp302.min.value;
    panda$core$Int64 i305 = { $tmp306 };
    int64_t $tmp308 = $tmp302.max.value;
    bool $tmp309 = $tmp302.inclusive.value;
    if ($tmp309) goto $l316; else goto $l317;
    $l316:;
    if ($tmp306 <= $tmp308) goto $l310; else goto $l312;
    $l317:;
    if ($tmp306 < $tmp308) goto $l310; else goto $l312;
    $l310:;
    {
        if (((panda$core$Bit) { self->contents[i305.value] != NULL }).value) {
        {
            {
                $tmp318 = self->contents;
                $tmp319 = i305;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318[$tmp319.value]));
                $tmp320 = NULL;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
                $tmp318[$tmp319.value] = $tmp320;
            }
        }
        }
    }
    $l313:;
    int64_t $tmp322 = $tmp308 - i305.value;
    if ($tmp309) goto $l323; else goto $l324;
    $l323:;
    if ((uint64_t) $tmp322 >= 1) goto $l321; else goto $l312;
    $l324:;
    if ((uint64_t) $tmp322 > 1) goto $l321; else goto $l312;
    $l321:;
    i305.value += 1;
    goto $l310;
    $l312:;
    panda$core$Int64$init$builtin_int64(&$tmp327, 3);
    panda$core$Int64 $tmp328 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp327);
    panda$core$Int64$init$builtin_int64(&$tmp329, 4);
    panda$core$Int64 $tmp330 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp328, $tmp329);
    self->threshold = $tmp330;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap* $tmp331;
    panda$core$Int64 $tmp332;
    panda$collections$HashMap$Entry** oldContents335;
    panda$core$Int64 oldBucketCount336;
    panda$collections$HashMap* $tmp337;
    panda$core$Int64 $tmp338;
    panda$core$Range$LTpanda$core$Int64$GT $tmp340;
    panda$core$Int64 $tmp341;
    panda$core$Bit $tmp342;
    panda$collections$HashMap$Entry** $tmp356;
    panda$core$Int64 $tmp357;
    panda$collections$HashMap$Entry* $tmp358;
    panda$collections$HashMap* $tmp365;
    panda$core$Int64 $tmp366;
    panda$core$Int64 $tmp368;
    panda$core$Range$LTpanda$core$Int64$GT $tmp369;
    panda$core$Int64 $tmp370;
    panda$core$Bit $tmp371;
    panda$collections$HashMap$Entry* e388 = NULL;
    panda$collections$HashMap$Entry* $tmp389;
    panda$collections$HashMap$Entry* $tmp393;
    panda$collections$HashMap$Entry* $tmp394;
    panda$core$Range$LTpanda$core$Int64$GT $tmp402;
    panda$core$Int64 $tmp403;
    panda$core$Bit $tmp404;
    $tmp331 = self;
    panda$core$Int64$init$builtin_int64(&$tmp332, 1);
    panda$core$Int64 $tmp333 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp331->_count, $tmp332);
    $tmp331->_count = $tmp333;
    panda$core$Bit $tmp334 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp334.value) {
    {
        oldContents335 = self->contents;
        oldBucketCount336 = self->bucketCount;
        $tmp337 = self;
        panda$core$Int64$init$builtin_int64(&$tmp338, 2);
        panda$core$Int64 $tmp339 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp337->bucketCount, $tmp338);
        $tmp337->bucketCount = $tmp339;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Int64$init$builtin_int64(&$tmp341, 0);
        panda$core$Bit$init$builtin_bit(&$tmp342, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp340, $tmp341, self->bucketCount, $tmp342);
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
                $tmp356 = self->contents;
                $tmp357 = i343;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356[$tmp357.value]));
                $tmp358 = NULL;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
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
        $tmp365 = self;
        panda$core$Int64$init$builtin_int64(&$tmp366, 2);
        panda$core$Int64 $tmp367 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp365->threshold, $tmp366);
        $tmp365->threshold = $tmp367;
        panda$core$Int64$init$builtin_int64(&$tmp368, 0);
        self->_count = $tmp368;
        panda$core$Int64$init$builtin_int64(&$tmp370, 0);
        panda$core$Bit$init$builtin_bit(&$tmp371, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp369, $tmp370, oldBucketCount336, $tmp371);
        int64_t $tmp373 = $tmp369.min.value;
        panda$core$Int64 i372 = { $tmp373 };
        int64_t $tmp375 = $tmp369.max.value;
        bool $tmp376 = $tmp369.inclusive.value;
        if ($tmp376) goto $l383; else goto $l384;
        $l383:;
        if ($tmp373 <= $tmp375) goto $l377; else goto $l379;
        $l384:;
        if ($tmp373 < $tmp375) goto $l377; else goto $l379;
        $l377:;
        {
            int $tmp387;
            {
                $tmp389 = oldContents335[i372.value];
                e388 = $tmp389;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
                $l390:;
                bool $tmp392 = ((panda$core$Bit) { e388 != NULL }).value;
                if (!$tmp392) goto $l391;
                {
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e388->key, e388->value);
                    {
                        $tmp393 = e388;
                        $tmp394 = e388->next;
                        e388 = $tmp394;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp393));
                    }
                }
                goto $l390;
                $l391:;
            }
            $tmp387 = -1;
            goto $l385;
            $l385:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) e388));
            e388 = NULL;
            switch ($tmp387) {
                case -1: goto $l395;
            }
            $l395:;
        }
        $l380:;
        int64_t $tmp397 = $tmp375 - i372.value;
        if ($tmp376) goto $l398; else goto $l399;
        $l398:;
        if ((uint64_t) $tmp397 >= 1) goto $l396; else goto $l379;
        $l399:;
        if ((uint64_t) $tmp397 > 1) goto $l396; else goto $l379;
        $l396:;
        i372.value += 1;
        goto $l377;
        $l379:;
        panda$core$Int64$init$builtin_int64(&$tmp403, 0);
        panda$core$Bit$init$builtin_bit(&$tmp404, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp402, $tmp403, oldBucketCount336, $tmp404);
        int64_t $tmp406 = $tmp402.min.value;
        panda$core$Int64 i405 = { $tmp406 };
        int64_t $tmp408 = $tmp402.max.value;
        bool $tmp409 = $tmp402.inclusive.value;
        if ($tmp409) goto $l416; else goto $l417;
        $l416:;
        if ($tmp406 <= $tmp408) goto $l410; else goto $l412;
        $l417:;
        if ($tmp406 < $tmp408) goto $l410; else goto $l412;
        $l410:;
        {
            if (((panda$core$Bit) { oldContents335[i405.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) oldContents335[i405.value]));
            }
            }
        }
        $l413:;
        int64_t $tmp419 = $tmp408 - i405.value;
        if ($tmp409) goto $l420; else goto $l421;
        $l420:;
        if ((uint64_t) $tmp419 >= 1) goto $l418; else goto $l412;
        $l421:;
        if ((uint64_t) $tmp419 > 1) goto $l418; else goto $l412;
        $l418:;
        i405.value += 1;
        goto $l410;
        $l412:;
        pandaFree(oldContents335);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue424;
    panda$collections$Iterator* $tmp425;
    panda$collections$HashMap$KeyIterator* $tmp426;
    panda$collections$HashMap$KeyIterator* $tmp427 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp427, self);
    $tmp426 = $tmp427;
    $tmp425 = ((panda$collections$Iterator*) $tmp426);
    $returnValue424 = $tmp425;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp425));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
    return $returnValue424;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue429;
    panda$collections$Iterator* $tmp430;
    panda$collections$HashMap$ValueIterator* $tmp431;
    panda$collections$HashMap$ValueIterator* $tmp432 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp432, self);
    $tmp431 = $tmp432;
    $tmp430 = ((panda$collections$Iterator*) $tmp431);
    $returnValue429 = $tmp430;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
    return $returnValue429;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $returnValue434;
    $returnValue434 = self->_count;
    return $returnValue434;
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result439 = NULL;
    panda$core$MutableString* $tmp440;
    panda$core$MutableString* $tmp441;
    panda$core$Char8 $tmp443;
    panda$core$UInt8 $tmp444;
    panda$core$String* separator445 = NULL;
    panda$core$String* $tmp446;
    panda$core$Range$LTpanda$core$Int64$GT $tmp448;
    panda$core$Int64 $tmp449;
    panda$core$Bit $tmp450;
    panda$collections$HashMap$Entry* entry467 = NULL;
    panda$collections$HashMap$Entry* $tmp468;
    panda$core$Char8 $tmp473;
    panda$core$UInt8 $tmp474;
    panda$collections$HashMap$Entry* $tmp476;
    panda$collections$HashMap$Entry* $tmp477;
    panda$core$String* $tmp478;
    panda$core$String* $tmp479;
    panda$core$Char8 $tmp488;
    panda$core$UInt8 $tmp489;
    panda$core$String* $returnValue490;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    int $tmp438;
    {
        panda$core$MutableString* $tmp442 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp442);
        $tmp441 = $tmp442;
        $tmp440 = $tmp441;
        result439 = $tmp440;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
        panda$core$UInt8$init$builtin_uint8(&$tmp444, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp443, $tmp444);
        panda$core$MutableString$append$panda$core$Char8(result439, $tmp443);
        $tmp446 = &$s447;
        separator445 = $tmp446;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
        panda$core$Int64$init$builtin_int64(&$tmp449, 0);
        panda$core$Bit$init$builtin_bit(&$tmp450, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp448, $tmp449, self->bucketCount, $tmp450);
        int64_t $tmp452 = $tmp448.min.value;
        panda$core$Int64 i451 = { $tmp452 };
        int64_t $tmp454 = $tmp448.max.value;
        bool $tmp455 = $tmp448.inclusive.value;
        if ($tmp455) goto $l462; else goto $l463;
        $l462:;
        if ($tmp452 <= $tmp454) goto $l456; else goto $l458;
        $l463:;
        if ($tmp452 < $tmp454) goto $l456; else goto $l458;
        $l456:;
        {
            int $tmp466;
            {
                $tmp468 = self->contents[i451.value];
                entry467 = $tmp468;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp468));
                $l469:;
                bool $tmp471 = ((panda$core$Bit) { entry467 != NULL }).value;
                if (!$tmp471) goto $l470;
                {
                    panda$core$MutableString$append$panda$core$String(result439, separator445);
                    if (((panda$core$Bit) { entry467->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result439, ((panda$core$Object*) entry467->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result439, &$s472);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp474, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp473, $tmp474);
                    panda$core$MutableString$append$panda$core$Char8(result439, $tmp473);
                    if (((panda$core$Bit) { entry467->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result439, entry467->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result439, &$s475);
                    }
                    }
                    {
                        $tmp476 = entry467;
                        $tmp477 = entry467->next;
                        entry467 = $tmp477;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
                    }
                    {
                        $tmp478 = separator445;
                        $tmp479 = &$s480;
                        separator445 = $tmp479;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
                    }
                }
                goto $l469;
                $l470:;
            }
            $tmp466 = -1;
            goto $l464;
            $l464:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) entry467));
            entry467 = NULL;
            switch ($tmp466) {
                case -1: goto $l481;
            }
            $l481:;
        }
        $l459:;
        int64_t $tmp483 = $tmp454 - i451.value;
        if ($tmp455) goto $l484; else goto $l485;
        $l484:;
        if ((uint64_t) $tmp483 >= 1) goto $l482; else goto $l458;
        $l485:;
        if ((uint64_t) $tmp483 > 1) goto $l482; else goto $l458;
        $l482:;
        i451.value += 1;
        goto $l456;
        $l458:;
        panda$core$UInt8$init$builtin_uint8(&$tmp489, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp488, $tmp489);
        panda$core$MutableString$append$panda$core$Char8(result439, $tmp488);
        panda$core$String* $tmp493 = panda$core$MutableString$finish$R$panda$core$String(result439);
        $tmp492 = $tmp493;
        $tmp491 = $tmp492;
        $returnValue490 = $tmp491;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
        $tmp438 = 0;
        goto $l436;
        $l494:;
        return $returnValue490;
    }
    $l436:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator445));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result439));
    result439 = NULL;
    separator445 = NULL;
    switch ($tmp438) {
        case 0: goto $l494;
    }
    $l496:;
    if (false) goto $l497; else goto $l498;
    $l498:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s499, (panda$core$Int64) { 337 }, &$s500);
    abort();
    $l497:;
    abort();
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$core$Class* $tmp501;
    panda$core$Class* $tmp502;
    panda$collections$ImmutableHashMap* $tmp503;
    panda$collections$ImmutableHashMap* $returnValue505;
    panda$collections$ImmutableHashMap* $tmp506;
    {
        $tmp501 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp504 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp504);
        $tmp503 = $tmp504;
        $tmp502 = ((panda$core$Object*) $tmp503)->$class;
        ((panda$core$Object*) self)->$class = $tmp502;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
    }
    $tmp506 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    $returnValue505 = $tmp506;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
    return $returnValue505;
}

