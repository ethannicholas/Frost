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
typedef panda$core$Bit (*$fn162)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn188)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn224)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn244)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s254 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    abort();
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index151;
    panda$collections$HashMap$Entry* e153 = NULL;
    panda$collections$HashMap$Entry* $tmp154;
    panda$collections$HashMap$Entry* $tmp165;
    panda$collections$HashMap$Entry* $tmp166;
    panda$core$Bit $returnValue167;
    int $tmp150;
    {
        panda$core$Int64 $tmp152 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index151 = $tmp152;
        $tmp154 = self->contents[index151.value];
        e153 = $tmp154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
        $l155:;
        bool $tmp158 = ((panda$core$Bit) { e153 != NULL }).value;
        if (!$tmp158) goto $l159;
        ITable* $tmp160 = ((panda$core$Equatable*) e153->key)->$class->itable;
        while ($tmp160->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp160 = $tmp160->next;
        }
        $fn162 $tmp161 = $tmp160->methods[1];
        panda$core$Bit $tmp163 = $tmp161(((panda$core$Equatable*) e153->key), ((panda$core$Equatable*) p_key));
        $tmp158 = $tmp163.value;
        $l159:;
        panda$core$Bit $tmp164 = { $tmp158 };
        bool $tmp157 = $tmp164.value;
        if (!$tmp157) goto $l156;
        {
            {
                $tmp165 = e153;
                $tmp166 = e153->next;
                e153 = $tmp166;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp165));
            }
        }
        goto $l155;
        $l156:;
        $returnValue167 = ((panda$core$Bit) { e153 != NULL });
        $tmp150 = 0;
        goto $l148;
        $l168:;
        return $returnValue167;
    }
    $l148:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e153));
    e153 = NULL;
    switch ($tmp150) {
        case 0: goto $l168;
    }
    $l170:;
    abort();
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$collections$HashMap* $tmp174;
    panda$core$Int64 $tmp175;
    panda$core$Int64 index177;
    panda$collections$HashMap$Entry* e179 = NULL;
    panda$collections$HashMap$Entry* $tmp180;
    panda$collections$HashMap$Entry* $tmp191;
    panda$collections$HashMap$Entry* $tmp192;
    panda$collections$HashMap$Entry* old196 = NULL;
    panda$collections$HashMap$Entry* $tmp197;
    panda$collections$HashMap$Entry* $tmp198;
    panda$collections$HashMap$Entry* $tmp199;
    panda$collections$HashMap$Entry* $tmp200;
    panda$collections$HashMap$Entry* $tmp202;
    panda$collections$HashMap$Entry* $tmp203;
    panda$collections$HashMap$Entry** $tmp204;
    panda$core$Int64 $tmp205;
    panda$collections$HashMap$Entry* $tmp206;
    panda$core$Object* $tmp208;
    panda$core$Object* $tmp209;
    int $tmp173;
    {
        $tmp174 = self;
        panda$core$Int64$init$builtin_int64(&$tmp175, 1);
        panda$core$Int64 $tmp176 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp174->changeCount, $tmp175);
        $tmp174->changeCount = $tmp176;
        panda$core$Int64 $tmp178 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index177 = $tmp178;
        $tmp180 = self->contents[index177.value];
        e179 = $tmp180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
        $l181:;
        bool $tmp184 = ((panda$core$Bit) { e179 != NULL }).value;
        if (!$tmp184) goto $l185;
        ITable* $tmp186 = ((panda$core$Equatable*) e179->key)->$class->itable;
        while ($tmp186->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp186 = $tmp186->next;
        }
        $fn188 $tmp187 = $tmp186->methods[1];
        panda$core$Bit $tmp189 = $tmp187(((panda$core$Equatable*) e179->key), ((panda$core$Equatable*) p_key));
        $tmp184 = $tmp189.value;
        $l185:;
        panda$core$Bit $tmp190 = { $tmp184 };
        bool $tmp183 = $tmp190.value;
        if (!$tmp183) goto $l182;
        {
            {
                $tmp191 = e179;
                $tmp192 = e179->next;
                e179 = $tmp192;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
            }
        }
        goto $l181;
        $l182:;
        if (((panda$core$Bit) { e179 == NULL }).value) {
        {
            int $tmp195;
            {
                $tmp197 = self->contents[index177.value];
                old196 = $tmp197;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
                {
                    $tmp198 = e179;
                    panda$collections$HashMap$Entry* $tmp201 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
                    panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp201, p_key, p_value);
                    $tmp200 = $tmp201;
                    $tmp199 = $tmp200;
                    e179 = $tmp199;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                }
                {
                    $tmp202 = e179->next;
                    $tmp203 = old196;
                    e179->next = $tmp203;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202));
                }
                {
                    $tmp204 = self->contents;
                    $tmp205 = index177;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204[$tmp205.value]));
                    $tmp206 = e179;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
                    $tmp204[$tmp205.value] = $tmp206;
                }
                panda$collections$HashMap$incrementCount(self);
            }
            $tmp195 = -1;
            goto $l193;
            $l193:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old196));
            old196 = NULL;
            switch ($tmp195) {
                case -1: goto $l207;
            }
            $l207:;
        }
        }
        else {
        {
            {
                $tmp208 = e179->value;
                $tmp209 = p_value;
                e179->value = $tmp209;
                panda$core$Panda$ref$panda$core$Object($tmp209);
                panda$core$Panda$unref$panda$core$Object($tmp208);
            }
        }
        }
    }
    $tmp173 = -1;
    goto $l171;
    $l171:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e179));
    e179 = NULL;
    switch ($tmp173) {
        case -1: goto $l210;
    }
    $l210:;
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$collections$HashMap* $tmp214;
    panda$core$Int64 $tmp215;
    panda$core$Int64 index217;
    panda$collections$HashMap$Entry* e219 = NULL;
    panda$collections$HashMap$Entry* $tmp220;
    panda$collections$HashMap$Entry** $tmp226;
    panda$core$Int64 $tmp227;
    panda$collections$HashMap$Entry* $tmp228;
    panda$collections$HashMap* $tmp229;
    panda$core$Int64 $tmp230;
    panda$collections$HashMap$Entry* next238 = NULL;
    panda$collections$HashMap$Entry* $tmp239;
    panda$collections$HashMap$Entry* $tmp247;
    panda$collections$HashMap$Entry* $tmp248;
    panda$collections$HashMap$Entry* next250 = NULL;
    panda$collections$HashMap$Entry* $tmp251;
    panda$collections$HashMap$Entry* $tmp255;
    panda$collections$HashMap$Entry* $tmp256;
    panda$collections$HashMap* $tmp257;
    panda$core$Int64 $tmp258;
    int $tmp213;
    {
        $tmp214 = self;
        panda$core$Int64$init$builtin_int64(&$tmp215, 1);
        panda$core$Int64 $tmp216 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp214->changeCount, $tmp215);
        $tmp214->changeCount = $tmp216;
        panda$core$Int64 $tmp218 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index217 = $tmp218;
        $tmp220 = self->contents[index217.value];
        e219 = $tmp220;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
        if (((panda$core$Bit) { e219 == NULL }).value) {
        {
            $tmp213 = 0;
            goto $l211;
            $l221:;
            return;
        }
        }
        ITable* $tmp222 = ((panda$core$Equatable*) e219->key)->$class->itable;
        while ($tmp222->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp222 = $tmp222->next;
        }
        $fn224 $tmp223 = $tmp222->methods[0];
        panda$core$Bit $tmp225 = $tmp223(((panda$core$Equatable*) e219->key), ((panda$core$Equatable*) p_key));
        if ($tmp225.value) {
        {
            {
                $tmp226 = self->contents;
                $tmp227 = index217;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp226[$tmp227.value]));
                $tmp228 = e219->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
                $tmp226[$tmp227.value] = $tmp228;
            }
            $tmp229 = self;
            panda$core$Int64$init$builtin_int64(&$tmp230, 1);
            panda$core$Int64 $tmp231 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp229->_count, $tmp230);
            $tmp229->_count = $tmp231;
            $tmp213 = 1;
            goto $l211;
            $l232:;
            return;
        }
        }
        $l233:;
        while (true) {
        {
            int $tmp237;
            {
                $tmp239 = e219->next;
                next238 = $tmp239;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
                if (((panda$core$Bit) { next238 == NULL }).value) {
                {
                    $tmp237 = 0;
                    goto $l235;
                    $l240:;
                    $tmp213 = 2;
                    goto $l211;
                    $l241:;
                    return;
                }
                }
                ITable* $tmp242 = ((panda$core$Equatable*) next238->key)->$class->itable;
                while ($tmp242->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp242 = $tmp242->next;
                }
                $fn244 $tmp243 = $tmp242->methods[0];
                panda$core$Bit $tmp245 = $tmp243(((panda$core$Equatable*) next238->key), ((panda$core$Equatable*) p_key));
                if ($tmp245.value) {
                {
                    $tmp237 = 1;
                    goto $l235;
                    $l246:;
                    goto $l234;
                }
                }
                {
                    $tmp247 = e219;
                    $tmp248 = next238;
                    e219 = $tmp248;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp247));
                }
            }
            $tmp237 = -1;
            goto $l235;
            $l235:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next238));
            next238 = NULL;
            switch ($tmp237) {
                case 1: goto $l246;
                case -1: goto $l249;
                case 0: goto $l240;
            }
            $l249:;
        }
        }
        $l234:;
        $tmp251 = e219->next;
        next250 = $tmp251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
        if (((panda$core$Bit) { next250 != NULL }).value) goto $l252; else goto $l253;
        $l253:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s254, (panda$core$Int64) { 260 });
        abort();
        $l252:;
        {
            $tmp255 = e219->next;
            $tmp256 = next250->next;
            e219->next = $tmp256;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
        }
        $tmp257 = self;
        panda$core$Int64$init$builtin_int64(&$tmp258, 1);
        panda$core$Int64 $tmp259 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp257->_count, $tmp258);
        $tmp257->_count = $tmp259;
    }
    $tmp213 = -1;
    goto $l211;
    $l211:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next250));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e219));
    e219 = NULL;
    next250 = NULL;
    switch ($tmp213) {
        case 2: goto $l241;
        case 1: goto $l232;
        case -1: goto $l260;
        case 0: goto $l221;
    }
    $l260:;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$collections$HashMap* $tmp261;
    panda$core$Int64 $tmp262;
    panda$core$Int64 $tmp264;
    panda$core$Range$LTpanda$core$Int64$GT $tmp265;
    panda$core$Int64 $tmp266;
    panda$core$Bit $tmp267;
    panda$core$Int64 $tmp287;
    panda$core$Range$LTpanda$core$Int64$GT $tmp288;
    panda$core$Int64 $tmp289;
    panda$core$Bit $tmp290;
    panda$collections$HashMap$Entry** $tmp304;
    panda$core$Int64 $tmp305;
    panda$collections$HashMap$Entry* $tmp306;
    panda$core$Int64 $tmp313;
    panda$core$Int64 $tmp315;
    $tmp261 = self;
    panda$core$Int64$init$builtin_int64(&$tmp262, 1);
    panda$core$Int64 $tmp263 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp261->changeCount, $tmp262);
    $tmp261->changeCount = $tmp263;
    panda$core$Int64$init$builtin_int64(&$tmp264, 0);
    self->_count = $tmp264;
    panda$core$Int64$init$builtin_int64(&$tmp266, 0);
    panda$core$Bit$init$builtin_bit(&$tmp267, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp265, $tmp266, self->bucketCount, $tmp267);
    int64_t $tmp269 = $tmp265.min.value;
    panda$core$Int64 i268 = { $tmp269 };
    int64_t $tmp271 = $tmp265.max.value;
    bool $tmp272 = $tmp265.inclusive.value;
    if ($tmp272) goto $l279; else goto $l280;
    $l279:;
    if ($tmp269 <= $tmp271) goto $l273; else goto $l275;
    $l280:;
    if ($tmp269 < $tmp271) goto $l273; else goto $l275;
    $l273:;
    {
        if (((panda$core$Bit) { self->contents[i268.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i268.value]));
        }
        }
    }
    $l276:;
    int64_t $tmp282 = $tmp271 - i268.value;
    if ($tmp272) goto $l283; else goto $l284;
    $l283:;
    if ((uint64_t) $tmp282 >= 1) goto $l281; else goto $l275;
    $l284:;
    if ((uint64_t) $tmp282 > 1) goto $l281; else goto $l275;
    $l281:;
    i268.value += 1;
    goto $l273;
    $l275:;
    pandaFree(self->contents);
    panda$core$Int64$init$builtin_int64(&$tmp287, 16);
    self->bucketCount = $tmp287;
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp289, 0);
    panda$core$Bit$init$builtin_bit(&$tmp290, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp288, $tmp289, self->bucketCount, $tmp290);
    int64_t $tmp292 = $tmp288.min.value;
    panda$core$Int64 i291 = { $tmp292 };
    int64_t $tmp294 = $tmp288.max.value;
    bool $tmp295 = $tmp288.inclusive.value;
    if ($tmp295) goto $l302; else goto $l303;
    $l302:;
    if ($tmp292 <= $tmp294) goto $l296; else goto $l298;
    $l303:;
    if ($tmp292 < $tmp294) goto $l296; else goto $l298;
    $l296:;
    {
        if (((panda$core$Bit) { self->contents[i291.value] != NULL }).value) {
        {
            {
                $tmp304 = self->contents;
                $tmp305 = i291;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304[$tmp305.value]));
                $tmp306 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                $tmp304[$tmp305.value] = $tmp306;
            }
        }
        }
    }
    $l299:;
    int64_t $tmp308 = $tmp294 - i291.value;
    if ($tmp295) goto $l309; else goto $l310;
    $l309:;
    if ((uint64_t) $tmp308 >= 1) goto $l307; else goto $l298;
    $l310:;
    if ((uint64_t) $tmp308 > 1) goto $l307; else goto $l298;
    $l307:;
    i291.value += 1;
    goto $l296;
    $l298:;
    panda$core$Int64$init$builtin_int64(&$tmp313, 3);
    panda$core$Int64 $tmp314 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp313);
    panda$core$Int64$init$builtin_int64(&$tmp315, 4);
    panda$core$Int64 $tmp316 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp314, $tmp315);
    self->threshold = $tmp316;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap* $tmp317;
    panda$core$Int64 $tmp318;
    panda$collections$HashMap$Entry** oldContents321;
    panda$core$Int64 oldBucketCount322;
    panda$collections$HashMap* $tmp323;
    panda$core$Int64 $tmp324;
    panda$core$Range$LTpanda$core$Int64$GT $tmp326;
    panda$core$Int64 $tmp327;
    panda$core$Bit $tmp328;
    panda$collections$HashMap$Entry** $tmp342;
    panda$core$Int64 $tmp343;
    panda$collections$HashMap$Entry* $tmp344;
    panda$collections$HashMap* $tmp351;
    panda$core$Int64 $tmp352;
    panda$core$Int64 $tmp354;
    panda$core$Range$LTpanda$core$Int64$GT $tmp355;
    panda$core$Int64 $tmp356;
    panda$core$Bit $tmp357;
    panda$collections$HashMap$Entry* e374 = NULL;
    panda$collections$HashMap$Entry* $tmp375;
    panda$collections$HashMap$Entry* $tmp379;
    panda$collections$HashMap$Entry* $tmp380;
    panda$core$Range$LTpanda$core$Int64$GT $tmp388;
    panda$core$Int64 $tmp389;
    panda$core$Bit $tmp390;
    $tmp317 = self;
    panda$core$Int64$init$builtin_int64(&$tmp318, 1);
    panda$core$Int64 $tmp319 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp317->_count, $tmp318);
    $tmp317->_count = $tmp319;
    panda$core$Bit $tmp320 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp320.value) {
    {
        oldContents321 = self->contents;
        oldBucketCount322 = self->bucketCount;
        $tmp323 = self;
        panda$core$Int64$init$builtin_int64(&$tmp324, 2);
        panda$core$Int64 $tmp325 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp323->bucketCount, $tmp324);
        $tmp323->bucketCount = $tmp325;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Int64$init$builtin_int64(&$tmp327, 0);
        panda$core$Bit$init$builtin_bit(&$tmp328, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp326, $tmp327, self->bucketCount, $tmp328);
        int64_t $tmp330 = $tmp326.min.value;
        panda$core$Int64 i329 = { $tmp330 };
        int64_t $tmp332 = $tmp326.max.value;
        bool $tmp333 = $tmp326.inclusive.value;
        if ($tmp333) goto $l340; else goto $l341;
        $l340:;
        if ($tmp330 <= $tmp332) goto $l334; else goto $l336;
        $l341:;
        if ($tmp330 < $tmp332) goto $l334; else goto $l336;
        $l334:;
        {
            {
                $tmp342 = self->contents;
                $tmp343 = i329;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342[$tmp343.value]));
                $tmp344 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
                $tmp342[$tmp343.value] = $tmp344;
            }
        }
        $l337:;
        int64_t $tmp346 = $tmp332 - i329.value;
        if ($tmp333) goto $l347; else goto $l348;
        $l347:;
        if ((uint64_t) $tmp346 >= 1) goto $l345; else goto $l336;
        $l348:;
        if ((uint64_t) $tmp346 > 1) goto $l345; else goto $l336;
        $l345:;
        i329.value += 1;
        goto $l334;
        $l336:;
        $tmp351 = self;
        panda$core$Int64$init$builtin_int64(&$tmp352, 2);
        panda$core$Int64 $tmp353 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp351->threshold, $tmp352);
        $tmp351->threshold = $tmp353;
        panda$core$Int64$init$builtin_int64(&$tmp354, 0);
        self->_count = $tmp354;
        panda$core$Int64$init$builtin_int64(&$tmp356, 0);
        panda$core$Bit$init$builtin_bit(&$tmp357, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp355, $tmp356, oldBucketCount322, $tmp357);
        int64_t $tmp359 = $tmp355.min.value;
        panda$core$Int64 i358 = { $tmp359 };
        int64_t $tmp361 = $tmp355.max.value;
        bool $tmp362 = $tmp355.inclusive.value;
        if ($tmp362) goto $l369; else goto $l370;
        $l369:;
        if ($tmp359 <= $tmp361) goto $l363; else goto $l365;
        $l370:;
        if ($tmp359 < $tmp361) goto $l363; else goto $l365;
        $l363:;
        {
            int $tmp373;
            {
                $tmp375 = oldContents321[i358.value];
                e374 = $tmp375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
                $l376:;
                bool $tmp378 = ((panda$core$Bit) { e374 != NULL }).value;
                if (!$tmp378) goto $l377;
                {
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e374->key, e374->value);
                    {
                        $tmp379 = e374;
                        $tmp380 = e374->next;
                        e374 = $tmp380;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                    }
                }
                goto $l376;
                $l377:;
            }
            $tmp373 = -1;
            goto $l371;
            $l371:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e374));
            e374 = NULL;
            switch ($tmp373) {
                case -1: goto $l381;
            }
            $l381:;
        }
        $l366:;
        int64_t $tmp383 = $tmp361 - i358.value;
        if ($tmp362) goto $l384; else goto $l385;
        $l384:;
        if ((uint64_t) $tmp383 >= 1) goto $l382; else goto $l365;
        $l385:;
        if ((uint64_t) $tmp383 > 1) goto $l382; else goto $l365;
        $l382:;
        i358.value += 1;
        goto $l363;
        $l365:;
        panda$core$Int64$init$builtin_int64(&$tmp389, 0);
        panda$core$Bit$init$builtin_bit(&$tmp390, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp388, $tmp389, oldBucketCount322, $tmp390);
        int64_t $tmp392 = $tmp388.min.value;
        panda$core$Int64 i391 = { $tmp392 };
        int64_t $tmp394 = $tmp388.max.value;
        bool $tmp395 = $tmp388.inclusive.value;
        if ($tmp395) goto $l402; else goto $l403;
        $l402:;
        if ($tmp392 <= $tmp394) goto $l396; else goto $l398;
        $l403:;
        if ($tmp392 < $tmp394) goto $l396; else goto $l398;
        $l396:;
        {
            if (((panda$core$Bit) { oldContents321[i391.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents321[i391.value]));
            }
            }
        }
        $l399:;
        int64_t $tmp405 = $tmp394 - i391.value;
        if ($tmp395) goto $l406; else goto $l407;
        $l406:;
        if ((uint64_t) $tmp405 >= 1) goto $l404; else goto $l398;
        $l407:;
        if ((uint64_t) $tmp405 > 1) goto $l404; else goto $l398;
        $l404:;
        i391.value += 1;
        goto $l396;
        $l398:;
        pandaFree(oldContents321);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue410;
    panda$collections$Iterator* $tmp411;
    panda$collections$HashMap$KeyIterator* $tmp412;
    panda$collections$HashMap$KeyIterator* $tmp413 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp413, self);
    $tmp412 = $tmp413;
    $tmp411 = ((panda$collections$Iterator*) $tmp412);
    $returnValue410 = $tmp411;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
    return $returnValue410;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue415;
    panda$collections$Iterator* $tmp416;
    panda$collections$HashMap$ValueIterator* $tmp417;
    panda$collections$HashMap$ValueIterator* $tmp418 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp418, self);
    $tmp417 = $tmp418;
    $tmp416 = ((panda$collections$Iterator*) $tmp417);
    $returnValue415 = $tmp416;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
    return $returnValue415;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $returnValue420;
    $returnValue420 = self->_count;
    return $returnValue420;
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result425 = NULL;
    panda$core$MutableString* $tmp426;
    panda$core$MutableString* $tmp427;
    panda$core$Char8 $tmp429;
    panda$core$UInt8 $tmp430;
    panda$core$String* separator431 = NULL;
    panda$core$String* $tmp432;
    panda$core$Range$LTpanda$core$Int64$GT $tmp434;
    panda$core$Int64 $tmp435;
    panda$core$Bit $tmp436;
    panda$collections$HashMap$Entry* entry453 = NULL;
    panda$collections$HashMap$Entry* $tmp454;
    panda$core$Char8 $tmp459;
    panda$core$UInt8 $tmp460;
    panda$collections$HashMap$Entry* $tmp462;
    panda$collections$HashMap$Entry* $tmp463;
    panda$core$String* $tmp464;
    panda$core$String* $tmp465;
    panda$core$Char8 $tmp474;
    panda$core$UInt8 $tmp475;
    panda$core$String* $returnValue476;
    panda$core$String* $tmp477;
    panda$core$String* $tmp478;
    int $tmp424;
    {
        panda$core$MutableString* $tmp428 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp428);
        $tmp427 = $tmp428;
        $tmp426 = $tmp427;
        result425 = $tmp426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
        panda$core$UInt8$init$builtin_uint8(&$tmp430, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp429, $tmp430);
        panda$core$MutableString$append$panda$core$Char8(result425, $tmp429);
        $tmp432 = &$s433;
        separator431 = $tmp432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
        panda$core$Int64$init$builtin_int64(&$tmp435, 0);
        panda$core$Bit$init$builtin_bit(&$tmp436, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp434, $tmp435, self->bucketCount, $tmp436);
        int64_t $tmp438 = $tmp434.min.value;
        panda$core$Int64 i437 = { $tmp438 };
        int64_t $tmp440 = $tmp434.max.value;
        bool $tmp441 = $tmp434.inclusive.value;
        if ($tmp441) goto $l448; else goto $l449;
        $l448:;
        if ($tmp438 <= $tmp440) goto $l442; else goto $l444;
        $l449:;
        if ($tmp438 < $tmp440) goto $l442; else goto $l444;
        $l442:;
        {
            int $tmp452;
            {
                $tmp454 = self->contents[i437.value];
                entry453 = $tmp454;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp454));
                $l455:;
                bool $tmp457 = ((panda$core$Bit) { entry453 != NULL }).value;
                if (!$tmp457) goto $l456;
                {
                    panda$core$MutableString$append$panda$core$String(result425, separator431);
                    if (((panda$core$Bit) { entry453->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result425, ((panda$core$Object*) entry453->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result425, &$s458);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp460, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp459, $tmp460);
                    panda$core$MutableString$append$panda$core$Char8(result425, $tmp459);
                    if (((panda$core$Bit) { entry453->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result425, entry453->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result425, &$s461);
                    }
                    }
                    {
                        $tmp462 = entry453;
                        $tmp463 = entry453->next;
                        entry453 = $tmp463;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp463));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp462));
                    }
                    {
                        $tmp464 = separator431;
                        $tmp465 = &$s466;
                        separator431 = $tmp465;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp465));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
                    }
                }
                goto $l455;
                $l456:;
            }
            $tmp452 = -1;
            goto $l450;
            $l450:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry453));
            entry453 = NULL;
            switch ($tmp452) {
                case -1: goto $l467;
            }
            $l467:;
        }
        $l445:;
        int64_t $tmp469 = $tmp440 - i437.value;
        if ($tmp441) goto $l470; else goto $l471;
        $l470:;
        if ((uint64_t) $tmp469 >= 1) goto $l468; else goto $l444;
        $l471:;
        if ((uint64_t) $tmp469 > 1) goto $l468; else goto $l444;
        $l468:;
        i437.value += 1;
        goto $l442;
        $l444:;
        panda$core$UInt8$init$builtin_uint8(&$tmp475, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp474, $tmp475);
        panda$core$MutableString$append$panda$core$Char8(result425, $tmp474);
        panda$core$String* $tmp479 = panda$core$MutableString$finish$R$panda$core$String(result425);
        $tmp478 = $tmp479;
        $tmp477 = $tmp478;
        $returnValue476 = $tmp477;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp477));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
        $tmp424 = 0;
        goto $l422;
        $l480:;
        return $returnValue476;
    }
    $l422:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator431));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result425));
    result425 = NULL;
    separator431 = NULL;
    switch ($tmp424) {
        case 0: goto $l480;
    }
    $l482:;
    abort();
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$core$Class* $tmp483;
    panda$core$Class* $tmp484;
    panda$collections$ImmutableHashMap* $tmp485;
    panda$collections$ImmutableHashMap* $returnValue487;
    panda$collections$ImmutableHashMap* $tmp488;
    {
        $tmp483 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp486 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp486);
        $tmp485 = $tmp486;
        $tmp484 = ((panda$core$Object*) $tmp485)->$class;
        ((panda$core$Object*) self)->$class = $tmp484;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
    }
    $tmp488 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    $returnValue487 = $tmp488;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp488));
    return $returnValue487;
}

