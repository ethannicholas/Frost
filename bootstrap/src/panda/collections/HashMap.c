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
typedef panda$core$Bit (*$fn187)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn222)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn241)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp5;
    panda$core$Int64 $tmp6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp7;
    panda$core$Int64 $tmp8;
    panda$core$Bit $tmp9;
    panda$collections$HashMap$Entry** $tmp23;
    panda$core$Int64 $tmp24;
    panda$collections$HashMap$Entry* $tmp25;
    panda$core$Int64 $tmp32;
    panda$core$Int64 $tmp34;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->changeCount = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 1);
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp3);
    self->changeCount = $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->_count = $tmp5;
    panda$core$Int64$init$builtin_int64(&$tmp6, 16);
    self->bucketCount = $tmp6;
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp8, 0);
    panda$core$Bit$init$builtin_bit(&$tmp9, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp7, $tmp8, self->bucketCount, $tmp9);
    int64_t $tmp11 = $tmp7.min.value;
    panda$core$Int64 i10 = { $tmp11 };
    int64_t $tmp13 = $tmp7.max.value;
    bool $tmp14 = $tmp7.inclusive.value;
    if ($tmp14) goto $l21; else goto $l22;
    $l21:;
    if ($tmp11 <= $tmp13) goto $l15; else goto $l17;
    $l22:;
    if ($tmp11 < $tmp13) goto $l15; else goto $l17;
    $l15:;
    {
        {
            $tmp23 = self->contents;
            $tmp24 = i10;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp23[$tmp24.value]));
            $tmp25 = NULL;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
            $tmp23[$tmp24.value] = $tmp25;
        }
    }
    $l18:;
    int64_t $tmp27 = $tmp13 - i10.value;
    if ($tmp14) goto $l28; else goto $l29;
    $l28:;
    if ((uint64_t) $tmp27 >= 1) goto $l26; else goto $l17;
    $l29:;
    if ((uint64_t) $tmp27 > 1) goto $l26; else goto $l17;
    $l26:;
    i10.value += 1;
    goto $l15;
    $l17:;
    panda$core$Int64$init$builtin_int64(&$tmp32, 3);
    panda$core$Int64 $tmp33 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp32);
    panda$core$Int64$init$builtin_int64(&$tmp34, 4);
    panda$core$Int64 $tmp35 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp33, $tmp34);
    self->threshold = $tmp35;
}
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map) {
    panda$core$Int64 $tmp36;
    panda$collections$Iterator* Iter$152$940 = NULL;
    panda$collections$Iterator* $tmp41;
    panda$collections$Iterator* $tmp42;
    panda$collections$Key* k58 = NULL;
    panda$collections$Key* $tmp59;
    panda$core$Object* $tmp60;
    panda$core$Object* $tmp65;
    panda$core$Int64$init$builtin_int64(&$tmp36, 0);
    self->changeCount = $tmp36;
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
    panda$core$Int64 $tmp174;
    panda$core$Int64 index176;
    panda$collections$HashMap$Entry* e178 = NULL;
    panda$collections$HashMap$Entry* $tmp179;
    panda$collections$HashMap$Entry* $tmp190;
    panda$collections$HashMap$Entry* $tmp191;
    panda$collections$HashMap$Entry* old195 = NULL;
    panda$collections$HashMap$Entry* $tmp196;
    panda$collections$HashMap$Entry* $tmp197;
    panda$collections$HashMap$Entry* $tmp198;
    panda$collections$HashMap$Entry* $tmp199;
    panda$collections$HashMap$Entry* $tmp201;
    panda$collections$HashMap$Entry* $tmp202;
    panda$collections$HashMap$Entry** $tmp203;
    panda$core$Int64 $tmp204;
    panda$collections$HashMap$Entry* $tmp205;
    panda$core$Object* $tmp207;
    panda$core$Object* $tmp208;
    int $tmp173;
    {
        panda$core$Int64$init$builtin_int64(&$tmp174, 1);
        panda$core$Int64 $tmp175 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp174);
        self->changeCount = $tmp175;
        panda$core$Int64 $tmp177 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index176 = $tmp177;
        $tmp179 = self->contents[index176.value];
        e178 = $tmp179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
        $l180:;
        bool $tmp183 = ((panda$core$Bit) { e178 != NULL }).value;
        if (!$tmp183) goto $l184;
        ITable* $tmp185 = ((panda$core$Equatable*) e178->key)->$class->itable;
        while ($tmp185->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp185 = $tmp185->next;
        }
        $fn187 $tmp186 = $tmp185->methods[1];
        panda$core$Bit $tmp188 = $tmp186(((panda$core$Equatable*) e178->key), ((panda$core$Equatable*) p_key));
        $tmp183 = $tmp188.value;
        $l184:;
        panda$core$Bit $tmp189 = { $tmp183 };
        bool $tmp182 = $tmp189.value;
        if (!$tmp182) goto $l181;
        {
            {
                $tmp190 = e178;
                $tmp191 = e178->next;
                e178 = $tmp191;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            }
        }
        goto $l180;
        $l181:;
        if (((panda$core$Bit) { e178 == NULL }).value) {
        {
            int $tmp194;
            {
                $tmp196 = self->contents[index176.value];
                old195 = $tmp196;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp196));
                {
                    $tmp197 = e178;
                    panda$collections$HashMap$Entry* $tmp200 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
                    panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp200, p_key, p_value);
                    $tmp199 = $tmp200;
                    $tmp198 = $tmp199;
                    e178 = $tmp198;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp199));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp197));
                }
                {
                    $tmp201 = e178->next;
                    $tmp202 = old195;
                    e178->next = $tmp202;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
                }
                {
                    $tmp203 = self->contents;
                    $tmp204 = index176;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203[$tmp204.value]));
                    $tmp205 = e178;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                    $tmp203[$tmp204.value] = $tmp205;
                }
                panda$collections$HashMap$incrementCount(self);
            }
            $tmp194 = -1;
            goto $l192;
            $l192:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old195));
            old195 = NULL;
            switch ($tmp194) {
                case -1: goto $l206;
            }
            $l206:;
        }
        }
        else {
        {
            {
                $tmp207 = e178->value;
                $tmp208 = p_value;
                e178->value = $tmp208;
                panda$core$Panda$ref$panda$core$Object($tmp208);
                panda$core$Panda$unref$panda$core$Object($tmp207);
            }
        }
        }
    }
    $tmp173 = -1;
    goto $l171;
    $l171:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e178));
    e178 = NULL;
    switch ($tmp173) {
        case -1: goto $l209;
    }
    $l209:;
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 $tmp213;
    panda$core$Int64 index215;
    panda$collections$HashMap$Entry* e217 = NULL;
    panda$collections$HashMap$Entry* $tmp218;
    panda$collections$HashMap$Entry** $tmp224;
    panda$core$Int64 $tmp225;
    panda$collections$HashMap$Entry* $tmp226;
    panda$core$Int64 $tmp227;
    panda$collections$HashMap$Entry* next235 = NULL;
    panda$collections$HashMap$Entry* $tmp236;
    panda$collections$HashMap$Entry* $tmp244;
    panda$collections$HashMap$Entry* $tmp245;
    panda$collections$HashMap$Entry* next247 = NULL;
    panda$collections$HashMap$Entry* $tmp248;
    panda$collections$HashMap$Entry* $tmp252;
    panda$collections$HashMap$Entry* $tmp253;
    panda$core$Int64 $tmp254;
    int $tmp212;
    {
        panda$core$Int64$init$builtin_int64(&$tmp213, 1);
        panda$core$Int64 $tmp214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp213);
        self->changeCount = $tmp214;
        panda$core$Int64 $tmp216 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index215 = $tmp216;
        $tmp218 = self->contents[index215.value];
        e217 = $tmp218;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp218));
        if (((panda$core$Bit) { e217 == NULL }).value) {
        {
            $tmp212 = 0;
            goto $l210;
            $l219:;
            return;
        }
        }
        ITable* $tmp220 = ((panda$core$Equatable*) e217->key)->$class->itable;
        while ($tmp220->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp220 = $tmp220->next;
        }
        $fn222 $tmp221 = $tmp220->methods[0];
        panda$core$Bit $tmp223 = $tmp221(((panda$core$Equatable*) e217->key), ((panda$core$Equatable*) p_key));
        if ($tmp223.value) {
        {
            {
                $tmp224 = self->contents;
                $tmp225 = index215;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224[$tmp225.value]));
                $tmp226 = e217->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                $tmp224[$tmp225.value] = $tmp226;
            }
            panda$core$Int64$init$builtin_int64(&$tmp227, 1);
            panda$core$Int64 $tmp228 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp227);
            self->_count = $tmp228;
            $tmp212 = 1;
            goto $l210;
            $l229:;
            return;
        }
        }
        $l230:;
        while (true) {
        {
            int $tmp234;
            {
                $tmp236 = e217->next;
                next235 = $tmp236;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp236));
                if (((panda$core$Bit) { next235 == NULL }).value) {
                {
                    $tmp234 = 0;
                    goto $l232;
                    $l237:;
                    $tmp212 = 2;
                    goto $l210;
                    $l238:;
                    return;
                }
                }
                ITable* $tmp239 = ((panda$core$Equatable*) next235->key)->$class->itable;
                while ($tmp239->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp239 = $tmp239->next;
                }
                $fn241 $tmp240 = $tmp239->methods[0];
                panda$core$Bit $tmp242 = $tmp240(((panda$core$Equatable*) next235->key), ((panda$core$Equatable*) p_key));
                if ($tmp242.value) {
                {
                    $tmp234 = 1;
                    goto $l232;
                    $l243:;
                    goto $l231;
                }
                }
                {
                    $tmp244 = e217;
                    $tmp245 = next235;
                    e217 = $tmp245;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp245));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
                }
            }
            $tmp234 = -1;
            goto $l232;
            $l232:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next235));
            next235 = NULL;
            switch ($tmp234) {
                case 0: goto $l237;
                case -1: goto $l246;
                case 1: goto $l243;
            }
            $l246:;
        }
        }
        $l231:;
        $tmp248 = e217->next;
        next247 = $tmp248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
        if (((panda$core$Bit) { next247 != NULL }).value) goto $l249; else goto $l250;
        $l250:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s251, (panda$core$Int64) { 260 });
        abort();
        $l249:;
        {
            $tmp252 = e217->next;
            $tmp253 = next247->next;
            e217->next = $tmp253;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
        }
        panda$core$Int64$init$builtin_int64(&$tmp254, 1);
        panda$core$Int64 $tmp255 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp254);
        self->_count = $tmp255;
    }
    $tmp212 = -1;
    goto $l210;
    $l210:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next247));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e217));
    e217 = NULL;
    next247 = NULL;
    switch ($tmp212) {
        case 1: goto $l229;
        case 0: goto $l219;
        case -1: goto $l256;
        case 2: goto $l238;
    }
    $l256:;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Int64 $tmp257;
    panda$core$Int64 $tmp259;
    panda$core$Range$LTpanda$core$Int64$GT $tmp260;
    panda$core$Int64 $tmp261;
    panda$core$Bit $tmp262;
    panda$core$Int64 $tmp282;
    panda$core$Range$LTpanda$core$Int64$GT $tmp283;
    panda$core$Int64 $tmp284;
    panda$core$Bit $tmp285;
    panda$collections$HashMap$Entry** $tmp299;
    panda$core$Int64 $tmp300;
    panda$collections$HashMap$Entry* $tmp301;
    panda$core$Int64 $tmp308;
    panda$core$Int64 $tmp310;
    panda$core$Int64$init$builtin_int64(&$tmp257, 1);
    panda$core$Int64 $tmp258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp257);
    self->changeCount = $tmp258;
    panda$core$Int64$init$builtin_int64(&$tmp259, 0);
    self->_count = $tmp259;
    panda$core$Int64$init$builtin_int64(&$tmp261, 0);
    panda$core$Bit$init$builtin_bit(&$tmp262, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp260, $tmp261, self->bucketCount, $tmp262);
    int64_t $tmp264 = $tmp260.min.value;
    panda$core$Int64 i263 = { $tmp264 };
    int64_t $tmp266 = $tmp260.max.value;
    bool $tmp267 = $tmp260.inclusive.value;
    if ($tmp267) goto $l274; else goto $l275;
    $l274:;
    if ($tmp264 <= $tmp266) goto $l268; else goto $l270;
    $l275:;
    if ($tmp264 < $tmp266) goto $l268; else goto $l270;
    $l268:;
    {
        if (((panda$core$Bit) { self->contents[i263.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i263.value]));
        }
        }
    }
    $l271:;
    int64_t $tmp277 = $tmp266 - i263.value;
    if ($tmp267) goto $l278; else goto $l279;
    $l278:;
    if ((uint64_t) $tmp277 >= 1) goto $l276; else goto $l270;
    $l279:;
    if ((uint64_t) $tmp277 > 1) goto $l276; else goto $l270;
    $l276:;
    i263.value += 1;
    goto $l268;
    $l270:;
    pandaFree(self->contents);
    panda$core$Int64$init$builtin_int64(&$tmp282, 16);
    self->bucketCount = $tmp282;
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp284, 0);
    panda$core$Bit$init$builtin_bit(&$tmp285, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp283, $tmp284, self->bucketCount, $tmp285);
    int64_t $tmp287 = $tmp283.min.value;
    panda$core$Int64 i286 = { $tmp287 };
    int64_t $tmp289 = $tmp283.max.value;
    bool $tmp290 = $tmp283.inclusive.value;
    if ($tmp290) goto $l297; else goto $l298;
    $l297:;
    if ($tmp287 <= $tmp289) goto $l291; else goto $l293;
    $l298:;
    if ($tmp287 < $tmp289) goto $l291; else goto $l293;
    $l291:;
    {
        if (((panda$core$Bit) { self->contents[i286.value] != NULL }).value) {
        {
            {
                $tmp299 = self->contents;
                $tmp300 = i286;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299[$tmp300.value]));
                $tmp301 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
                $tmp299[$tmp300.value] = $tmp301;
            }
        }
        }
    }
    $l294:;
    int64_t $tmp303 = $tmp289 - i286.value;
    if ($tmp290) goto $l304; else goto $l305;
    $l304:;
    if ((uint64_t) $tmp303 >= 1) goto $l302; else goto $l293;
    $l305:;
    if ((uint64_t) $tmp303 > 1) goto $l302; else goto $l293;
    $l302:;
    i286.value += 1;
    goto $l291;
    $l293:;
    panda$core$Int64$init$builtin_int64(&$tmp308, 3);
    panda$core$Int64 $tmp309 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp308);
    panda$core$Int64$init$builtin_int64(&$tmp310, 4);
    panda$core$Int64 $tmp311 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp309, $tmp310);
    self->threshold = $tmp311;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$core$Int64 $tmp312;
    panda$collections$HashMap$Entry** oldContents315;
    panda$core$Int64 oldBucketCount316;
    panda$core$Int64 $tmp317;
    panda$core$Range$LTpanda$core$Int64$GT $tmp319;
    panda$core$Int64 $tmp320;
    panda$core$Bit $tmp321;
    panda$collections$HashMap$Entry** $tmp335;
    panda$core$Int64 $tmp336;
    panda$collections$HashMap$Entry* $tmp337;
    panda$core$Int64 $tmp344;
    panda$core$Int64 $tmp346;
    panda$core$Range$LTpanda$core$Int64$GT $tmp347;
    panda$core$Int64 $tmp348;
    panda$core$Bit $tmp349;
    panda$collections$HashMap$Entry* e366 = NULL;
    panda$collections$HashMap$Entry* $tmp367;
    panda$collections$HashMap$Entry* $tmp371;
    panda$collections$HashMap$Entry* $tmp372;
    panda$core$Range$LTpanda$core$Int64$GT $tmp380;
    panda$core$Int64 $tmp381;
    panda$core$Bit $tmp382;
    panda$core$Int64$init$builtin_int64(&$tmp312, 1);
    panda$core$Int64 $tmp313 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp312);
    self->_count = $tmp313;
    panda$core$Bit $tmp314 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp314.value) {
    {
        oldContents315 = self->contents;
        oldBucketCount316 = self->bucketCount;
        panda$core$Int64$init$builtin_int64(&$tmp317, 2);
        panda$core$Int64 $tmp318 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp317);
        self->bucketCount = $tmp318;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Int64$init$builtin_int64(&$tmp320, 0);
        panda$core$Bit$init$builtin_bit(&$tmp321, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp319, $tmp320, self->bucketCount, $tmp321);
        int64_t $tmp323 = $tmp319.min.value;
        panda$core$Int64 i322 = { $tmp323 };
        int64_t $tmp325 = $tmp319.max.value;
        bool $tmp326 = $tmp319.inclusive.value;
        if ($tmp326) goto $l333; else goto $l334;
        $l333:;
        if ($tmp323 <= $tmp325) goto $l327; else goto $l329;
        $l334:;
        if ($tmp323 < $tmp325) goto $l327; else goto $l329;
        $l327:;
        {
            {
                $tmp335 = self->contents;
                $tmp336 = i322;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335[$tmp336.value]));
                $tmp337 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp337));
                $tmp335[$tmp336.value] = $tmp337;
            }
        }
        $l330:;
        int64_t $tmp339 = $tmp325 - i322.value;
        if ($tmp326) goto $l340; else goto $l341;
        $l340:;
        if ((uint64_t) $tmp339 >= 1) goto $l338; else goto $l329;
        $l341:;
        if ((uint64_t) $tmp339 > 1) goto $l338; else goto $l329;
        $l338:;
        i322.value += 1;
        goto $l327;
        $l329:;
        panda$core$Int64$init$builtin_int64(&$tmp344, 2);
        panda$core$Int64 $tmp345 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, $tmp344);
        self->threshold = $tmp345;
        panda$core$Int64$init$builtin_int64(&$tmp346, 0);
        self->_count = $tmp346;
        panda$core$Int64$init$builtin_int64(&$tmp348, 0);
        panda$core$Bit$init$builtin_bit(&$tmp349, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp347, $tmp348, oldBucketCount316, $tmp349);
        int64_t $tmp351 = $tmp347.min.value;
        panda$core$Int64 i350 = { $tmp351 };
        int64_t $tmp353 = $tmp347.max.value;
        bool $tmp354 = $tmp347.inclusive.value;
        if ($tmp354) goto $l361; else goto $l362;
        $l361:;
        if ($tmp351 <= $tmp353) goto $l355; else goto $l357;
        $l362:;
        if ($tmp351 < $tmp353) goto $l355; else goto $l357;
        $l355:;
        {
            int $tmp365;
            {
                $tmp367 = oldContents315[i350.value];
                e366 = $tmp367;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp367));
                $l368:;
                bool $tmp370 = ((panda$core$Bit) { e366 != NULL }).value;
                if (!$tmp370) goto $l369;
                {
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e366->key, e366->value);
                    {
                        $tmp371 = e366;
                        $tmp372 = e366->next;
                        e366 = $tmp372;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp371));
                    }
                }
                goto $l368;
                $l369:;
            }
            $tmp365 = -1;
            goto $l363;
            $l363:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e366));
            e366 = NULL;
            switch ($tmp365) {
                case -1: goto $l373;
            }
            $l373:;
        }
        $l358:;
        int64_t $tmp375 = $tmp353 - i350.value;
        if ($tmp354) goto $l376; else goto $l377;
        $l376:;
        if ((uint64_t) $tmp375 >= 1) goto $l374; else goto $l357;
        $l377:;
        if ((uint64_t) $tmp375 > 1) goto $l374; else goto $l357;
        $l374:;
        i350.value += 1;
        goto $l355;
        $l357:;
        panda$core$Int64$init$builtin_int64(&$tmp381, 0);
        panda$core$Bit$init$builtin_bit(&$tmp382, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp380, $tmp381, oldBucketCount316, $tmp382);
        int64_t $tmp384 = $tmp380.min.value;
        panda$core$Int64 i383 = { $tmp384 };
        int64_t $tmp386 = $tmp380.max.value;
        bool $tmp387 = $tmp380.inclusive.value;
        if ($tmp387) goto $l394; else goto $l395;
        $l394:;
        if ($tmp384 <= $tmp386) goto $l388; else goto $l390;
        $l395:;
        if ($tmp384 < $tmp386) goto $l388; else goto $l390;
        $l388:;
        {
            if (((panda$core$Bit) { oldContents315[i383.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents315[i383.value]));
            }
            }
        }
        $l391:;
        int64_t $tmp397 = $tmp386 - i383.value;
        if ($tmp387) goto $l398; else goto $l399;
        $l398:;
        if ((uint64_t) $tmp397 >= 1) goto $l396; else goto $l390;
        $l399:;
        if ((uint64_t) $tmp397 > 1) goto $l396; else goto $l390;
        $l396:;
        i383.value += 1;
        goto $l388;
        $l390:;
        pandaFree(oldContents315);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue402;
    panda$collections$Iterator* $tmp403;
    panda$collections$HashMap$KeyIterator* $tmp404;
    panda$collections$HashMap$KeyIterator* $tmp405 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp405, self);
    $tmp404 = $tmp405;
    $tmp403 = ((panda$collections$Iterator*) $tmp404);
    $returnValue402 = $tmp403;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
    return $returnValue402;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue407;
    panda$collections$Iterator* $tmp408;
    panda$collections$HashMap$ValueIterator* $tmp409;
    panda$collections$HashMap$ValueIterator* $tmp410 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp410, self);
    $tmp409 = $tmp410;
    $tmp408 = ((panda$collections$Iterator*) $tmp409);
    $returnValue407 = $tmp408;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
    return $returnValue407;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $returnValue412;
    $returnValue412 = self->_count;
    return $returnValue412;
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result417 = NULL;
    panda$core$MutableString* $tmp418;
    panda$core$MutableString* $tmp419;
    panda$core$Char8 $tmp421;
    panda$core$UInt8 $tmp422;
    panda$core$String* separator423 = NULL;
    panda$core$String* $tmp424;
    panda$core$Range$LTpanda$core$Int64$GT $tmp426;
    panda$core$Int64 $tmp427;
    panda$core$Bit $tmp428;
    panda$collections$HashMap$Entry* entry445 = NULL;
    panda$collections$HashMap$Entry* $tmp446;
    panda$core$Char8 $tmp451;
    panda$core$UInt8 $tmp452;
    panda$collections$HashMap$Entry* $tmp454;
    panda$collections$HashMap$Entry* $tmp455;
    panda$core$String* $tmp456;
    panda$core$String* $tmp457;
    panda$core$Char8 $tmp466;
    panda$core$UInt8 $tmp467;
    panda$core$String* $returnValue468;
    panda$core$String* $tmp469;
    panda$core$String* $tmp470;
    int $tmp416;
    {
        panda$core$MutableString* $tmp420 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp420);
        $tmp419 = $tmp420;
        $tmp418 = $tmp419;
        result417 = $tmp418;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
        panda$core$UInt8$init$builtin_uint8(&$tmp422, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp421, $tmp422);
        panda$core$MutableString$append$panda$core$Char8(result417, $tmp421);
        $tmp424 = &$s425;
        separator423 = $tmp424;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
        panda$core$Int64$init$builtin_int64(&$tmp427, 0);
        panda$core$Bit$init$builtin_bit(&$tmp428, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp426, $tmp427, self->bucketCount, $tmp428);
        int64_t $tmp430 = $tmp426.min.value;
        panda$core$Int64 i429 = { $tmp430 };
        int64_t $tmp432 = $tmp426.max.value;
        bool $tmp433 = $tmp426.inclusive.value;
        if ($tmp433) goto $l440; else goto $l441;
        $l440:;
        if ($tmp430 <= $tmp432) goto $l434; else goto $l436;
        $l441:;
        if ($tmp430 < $tmp432) goto $l434; else goto $l436;
        $l434:;
        {
            int $tmp444;
            {
                $tmp446 = self->contents[i429.value];
                entry445 = $tmp446;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp446));
                $l447:;
                bool $tmp449 = ((panda$core$Bit) { entry445 != NULL }).value;
                if (!$tmp449) goto $l448;
                {
                    panda$core$MutableString$append$panda$core$String(result417, separator423);
                    if (((panda$core$Bit) { entry445->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result417, ((panda$core$Object*) entry445->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result417, &$s450);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp452, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp451, $tmp452);
                    panda$core$MutableString$append$panda$core$Char8(result417, $tmp451);
                    if (((panda$core$Bit) { entry445->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result417, entry445->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result417, &$s453);
                    }
                    }
                    {
                        $tmp454 = entry445;
                        $tmp455 = entry445->next;
                        entry445 = $tmp455;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp455));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                    }
                    {
                        $tmp456 = separator423;
                        $tmp457 = &$s458;
                        separator423 = $tmp457;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp457));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
                    }
                }
                goto $l447;
                $l448:;
            }
            $tmp444 = -1;
            goto $l442;
            $l442:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry445));
            entry445 = NULL;
            switch ($tmp444) {
                case -1: goto $l459;
            }
            $l459:;
        }
        $l437:;
        int64_t $tmp461 = $tmp432 - i429.value;
        if ($tmp433) goto $l462; else goto $l463;
        $l462:;
        if ((uint64_t) $tmp461 >= 1) goto $l460; else goto $l436;
        $l463:;
        if ((uint64_t) $tmp461 > 1) goto $l460; else goto $l436;
        $l460:;
        i429.value += 1;
        goto $l434;
        $l436:;
        panda$core$UInt8$init$builtin_uint8(&$tmp467, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp466, $tmp467);
        panda$core$MutableString$append$panda$core$Char8(result417, $tmp466);
        panda$core$String* $tmp471 = panda$core$MutableString$finish$R$panda$core$String(result417);
        $tmp470 = $tmp471;
        $tmp469 = $tmp470;
        $returnValue468 = $tmp469;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp469));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp470));
        $tmp416 = 0;
        goto $l414;
        $l472:;
        return $returnValue468;
    }
    $l414:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator423));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result417));
    result417 = NULL;
    separator423 = NULL;
    switch ($tmp416) {
        case 0: goto $l472;
    }
    $l474:;
    abort();
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$core$Class* $tmp475;
    panda$core$Class* $tmp476;
    panda$collections$ImmutableHashMap* $tmp477;
    panda$collections$ImmutableHashMap* $returnValue479;
    panda$collections$ImmutableHashMap* $tmp480;
    {
        $tmp475 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp478 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp478);
        $tmp477 = $tmp478;
        $tmp476 = ((panda$core$Object*) $tmp477)->$class;
        ((panda$core$Object*) self)->$class = $tmp476;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
    }
    $tmp480 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    $returnValue479 = $tmp480;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp480));
    return $returnValue479;
}

