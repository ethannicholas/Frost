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

typedef panda$collections$Iterator* (*$fn44)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn51)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn62)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn67)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn101)(panda$collections$Key*);
typedef panda$core$Bit (*$fn134)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn161)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn186)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn221)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn240)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    panda$collections$Iterator* Iter$152$939 = NULL;
    panda$collections$Iterator* $tmp40;
    panda$collections$Iterator* $tmp41;
    panda$collections$Key* k57 = NULL;
    panda$collections$Key* $tmp58;
    panda$core$Object* $tmp59;
    panda$core$Object* $tmp64;
    panda$collections$HashMap$init(self);
    {
        int $tmp38;
        {
            ITable* $tmp42 = p_map->$class->itable;
            while ($tmp42->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp42 = $tmp42->next;
            }
            $fn44 $tmp43 = $tmp42->methods[2];
            panda$collections$Iterator* $tmp45 = $tmp43(p_map);
            $tmp41 = $tmp45;
            $tmp40 = $tmp41;
            Iter$152$939 = $tmp40;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
            $l46:;
            ITable* $tmp49 = Iter$152$939->$class->itable;
            while ($tmp49->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp49 = $tmp49->next;
            }
            $fn51 $tmp50 = $tmp49->methods[0];
            panda$core$Bit $tmp52 = $tmp50(Iter$152$939);
            panda$core$Bit $tmp53 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp52);
            bool $tmp48 = $tmp53.value;
            if (!$tmp48) goto $l47;
            {
                int $tmp56;
                {
                    ITable* $tmp60 = Iter$152$939->$class->itable;
                    while ($tmp60->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp60 = $tmp60->next;
                    }
                    $fn62 $tmp61 = $tmp60->methods[1];
                    panda$core$Object* $tmp63 = $tmp61(Iter$152$939);
                    $tmp59 = $tmp63;
                    $tmp58 = ((panda$collections$Key*) $tmp59);
                    k57 = $tmp58;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
                    panda$core$Panda$unref$panda$core$Object($tmp59);
                    ITable* $tmp65 = p_map->$class->itable;
                    while ($tmp65->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                        $tmp65 = $tmp65->next;
                    }
                    $fn67 $tmp66 = $tmp65->methods[1];
                    panda$core$Object* $tmp68 = $tmp66(p_map, ((panda$core$Object*) k57));
                    $tmp64 = $tmp68;
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k57, $tmp64);
                    panda$core$Panda$unref$panda$core$Object($tmp64);
                }
                $tmp56 = -1;
                goto $l54;
                $l54:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k57));
                k57 = NULL;
                switch ($tmp56) {
                    case -1: goto $l69;
                }
                $l69:;
            }
            goto $l46;
            $l47:;
        }
        $tmp38 = -1;
        goto $l36;
        $l36:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$152$939));
        Iter$152$939 = NULL;
        switch ($tmp38) {
            case -1: goto $l70;
        }
        $l70:;
    }
}
void panda$collections$HashMap$cleanup(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp74;
    panda$core$Int64 $tmp75;
    panda$core$Bit $tmp76;
    int $tmp73;
    {
        panda$core$Int64$init$builtin_int64(&$tmp75, 0);
        panda$core$Bit$init$builtin_bit(&$tmp76, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp74, $tmp75, self->bucketCount, $tmp76);
        int64_t $tmp78 = $tmp74.min.value;
        panda$core$Int64 i77 = { $tmp78 };
        int64_t $tmp80 = $tmp74.max.value;
        bool $tmp81 = $tmp74.inclusive.value;
        if ($tmp81) goto $l88; else goto $l89;
        $l88:;
        if ($tmp78 <= $tmp80) goto $l82; else goto $l84;
        $l89:;
        if ($tmp78 < $tmp80) goto $l82; else goto $l84;
        $l82:;
        {
            if (((panda$core$Bit) { self->contents[i77.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i77.value]));
            }
            }
        }
        $l85:;
        int64_t $tmp91 = $tmp80 - i77.value;
        if ($tmp81) goto $l92; else goto $l93;
        $l92:;
        if ((uint64_t) $tmp91 >= 1) goto $l90; else goto $l84;
        $l93:;
        if ((uint64_t) $tmp91 > 1) goto $l90; else goto $l84;
        $l90:;
        i77.value += 1;
        goto $l82;
        $l84:;
        pandaFree(self->contents);
    }
    $tmp73 = -1;
    goto $l71;
    $l71:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp73) {
        case -1: goto $l96;
    }
    $l96:;
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h97;
    panda$core$Int64 $tmp98;
    panda$core$Int64 $tmp103;
    panda$core$Int64 $tmp105;
    panda$core$Int64 $tmp108;
    panda$core$Int64 $tmp111;
    panda$core$Int64 $tmp115;
    panda$core$Int64 $returnValue118;
    memset(&h97, 0, sizeof(h97));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp98, 0);
        h97 = $tmp98;
    }
    }
    else {
    {
        ITable* $tmp99 = p_key->$class->itable;
        while ($tmp99->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp99 = $tmp99->next;
        }
        $fn101 $tmp100 = $tmp99->methods[0];
        panda$core$Int64 $tmp102 = $tmp100(p_key);
        h97 = $tmp102;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp103, 20);
    panda$core$Int64 $tmp104 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h97, $tmp103);
    panda$core$Int64$init$builtin_int64(&$tmp105, 12);
    panda$core$Int64 $tmp106 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h97, $tmp105);
    panda$core$Int64 $tmp107 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp104, $tmp106);
    panda$core$Int64$init$builtin_int64(&$tmp108, 7);
    panda$core$Int64 $tmp109 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h97, $tmp108);
    panda$core$Int64 $tmp110 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp107, $tmp109);
    panda$core$Int64$init$builtin_int64(&$tmp111, 4);
    panda$core$Int64 $tmp112 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h97, $tmp111);
    panda$core$Int64 $tmp113 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp110, $tmp112);
    panda$core$Int64 $tmp114 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h97, $tmp113);
    h97 = $tmp114;
    panda$core$Int64$init$builtin_int64(&$tmp115, 1);
    panda$core$Int64 $tmp116 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp115);
    panda$core$Int64 $tmp117 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h97, $tmp116);
    h97 = $tmp117;
    $returnValue118 = h97;
    return $returnValue118;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index123;
    panda$collections$HashMap$Entry* e125 = NULL;
    panda$collections$HashMap$Entry* $tmp126;
    panda$collections$HashMap$Entry* $tmp137;
    panda$collections$HashMap$Entry* $tmp138;
    panda$core$Object* $returnValue139;
    panda$core$Object* $tmp140;
    panda$core$Object* $tmp143;
    int $tmp122;
    {
        panda$core$Int64 $tmp124 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index123 = $tmp124;
        $tmp126 = self->contents[index123.value];
        e125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        $l127:;
        bool $tmp130 = ((panda$core$Bit) { e125 != NULL }).value;
        if (!$tmp130) goto $l131;
        ITable* $tmp132 = ((panda$core$Equatable*) e125->key)->$class->itable;
        while ($tmp132->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp132 = $tmp132->next;
        }
        $fn134 $tmp133 = $tmp132->methods[1];
        panda$core$Bit $tmp135 = $tmp133(((panda$core$Equatable*) e125->key), ((panda$core$Equatable*) p_key));
        $tmp130 = $tmp135.value;
        $l131:;
        panda$core$Bit $tmp136 = { $tmp130 };
        bool $tmp129 = $tmp136.value;
        if (!$tmp129) goto $l128;
        {
            {
                $tmp137 = e125;
                $tmp138 = e125->next;
                e125 = $tmp138;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
            }
        }
        goto $l127;
        $l128:;
        if (((panda$core$Bit) { e125 != NULL }).value) {
        {
            $tmp140 = e125->value;
            $returnValue139 = $tmp140;
            panda$core$Panda$ref$panda$core$Object($tmp140);
            $tmp122 = 0;
            goto $l120;
            $l141:;
            return $returnValue139;
        }
        }
        else {
        {
            $tmp143 = NULL;
            $returnValue139 = $tmp143;
            panda$core$Panda$ref$panda$core$Object($tmp143);
            $tmp122 = 1;
            goto $l120;
            $l144:;
            return $returnValue139;
        }
        }
    }
    $tmp122 = -1;
    goto $l120;
    $l120:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e125));
    e125 = NULL;
    switch ($tmp122) {
        case 0: goto $l141;
        case 1: goto $l144;
        case -1: goto $l146;
    }
    $l146:;
    abort();
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index150;
    panda$collections$HashMap$Entry* e152 = NULL;
    panda$collections$HashMap$Entry* $tmp153;
    panda$collections$HashMap$Entry* $tmp164;
    panda$collections$HashMap$Entry* $tmp165;
    panda$core$Bit $returnValue166;
    int $tmp149;
    {
        panda$core$Int64 $tmp151 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index150 = $tmp151;
        $tmp153 = self->contents[index150.value];
        e152 = $tmp153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
        $l154:;
        bool $tmp157 = ((panda$core$Bit) { e152 != NULL }).value;
        if (!$tmp157) goto $l158;
        ITable* $tmp159 = ((panda$core$Equatable*) e152->key)->$class->itable;
        while ($tmp159->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp159 = $tmp159->next;
        }
        $fn161 $tmp160 = $tmp159->methods[1];
        panda$core$Bit $tmp162 = $tmp160(((panda$core$Equatable*) e152->key), ((panda$core$Equatable*) p_key));
        $tmp157 = $tmp162.value;
        $l158:;
        panda$core$Bit $tmp163 = { $tmp157 };
        bool $tmp156 = $tmp163.value;
        if (!$tmp156) goto $l155;
        {
            {
                $tmp164 = e152;
                $tmp165 = e152->next;
                e152 = $tmp165;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
            }
        }
        goto $l154;
        $l155:;
        $returnValue166 = ((panda$core$Bit) { e152 != NULL });
        $tmp149 = 0;
        goto $l147;
        $l167:;
        return $returnValue166;
    }
    $l147:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e152));
    e152 = NULL;
    switch ($tmp149) {
        case 0: goto $l167;
    }
    $l169:;
    abort();
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 $tmp173;
    panda$core$Int64 index175;
    panda$collections$HashMap$Entry* e177 = NULL;
    panda$collections$HashMap$Entry* $tmp178;
    panda$collections$HashMap$Entry* $tmp189;
    panda$collections$HashMap$Entry* $tmp190;
    panda$collections$HashMap$Entry* old194 = NULL;
    panda$collections$HashMap$Entry* $tmp195;
    panda$collections$HashMap$Entry* $tmp196;
    panda$collections$HashMap$Entry* $tmp197;
    panda$collections$HashMap$Entry* $tmp198;
    panda$collections$HashMap$Entry* $tmp200;
    panda$collections$HashMap$Entry* $tmp201;
    panda$collections$HashMap$Entry** $tmp202;
    panda$core$Int64 $tmp203;
    panda$collections$HashMap$Entry* $tmp204;
    panda$core$Object* $tmp206;
    panda$core$Object* $tmp207;
    int $tmp172;
    {
        panda$core$Int64$init$builtin_int64(&$tmp173, 1);
        panda$core$Int64 $tmp174 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp173);
        self->changeCount = $tmp174;
        panda$core$Int64 $tmp176 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index175 = $tmp176;
        $tmp178 = self->contents[index175.value];
        e177 = $tmp178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
        $l179:;
        bool $tmp182 = ((panda$core$Bit) { e177 != NULL }).value;
        if (!$tmp182) goto $l183;
        ITable* $tmp184 = ((panda$core$Equatable*) e177->key)->$class->itable;
        while ($tmp184->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp184 = $tmp184->next;
        }
        $fn186 $tmp185 = $tmp184->methods[1];
        panda$core$Bit $tmp187 = $tmp185(((panda$core$Equatable*) e177->key), ((panda$core$Equatable*) p_key));
        $tmp182 = $tmp187.value;
        $l183:;
        panda$core$Bit $tmp188 = { $tmp182 };
        bool $tmp181 = $tmp188.value;
        if (!$tmp181) goto $l180;
        {
            {
                $tmp189 = e177;
                $tmp190 = e177->next;
                e177 = $tmp190;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
            }
        }
        goto $l179;
        $l180:;
        if (((panda$core$Bit) { e177 == NULL }).value) {
        {
            int $tmp193;
            {
                $tmp195 = self->contents[index175.value];
                old194 = $tmp195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp195));
                {
                    $tmp196 = e177;
                    panda$collections$HashMap$Entry* $tmp199 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
                    panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp199, p_key, p_value);
                    $tmp198 = $tmp199;
                    $tmp197 = $tmp198;
                    e177 = $tmp197;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp196));
                }
                {
                    $tmp200 = e177->next;
                    $tmp201 = old194;
                    e177->next = $tmp201;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
                }
                {
                    $tmp202 = self->contents;
                    $tmp203 = index175;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp202[$tmp203.value]));
                    $tmp204 = e177;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
                    $tmp202[$tmp203.value] = $tmp204;
                }
                panda$collections$HashMap$incrementCount(self);
            }
            $tmp193 = -1;
            goto $l191;
            $l191:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old194));
            old194 = NULL;
            switch ($tmp193) {
                case -1: goto $l205;
            }
            $l205:;
        }
        }
        else {
        {
            {
                $tmp206 = e177->value;
                $tmp207 = p_value;
                e177->value = $tmp207;
                panda$core$Panda$ref$panda$core$Object($tmp207);
                panda$core$Panda$unref$panda$core$Object($tmp206);
            }
        }
        }
    }
    $tmp172 = -1;
    goto $l170;
    $l170:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e177));
    e177 = NULL;
    switch ($tmp172) {
        case -1: goto $l208;
    }
    $l208:;
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 $tmp212;
    panda$core$Int64 index214;
    panda$collections$HashMap$Entry* e216 = NULL;
    panda$collections$HashMap$Entry* $tmp217;
    panda$collections$HashMap$Entry** $tmp223;
    panda$core$Int64 $tmp224;
    panda$collections$HashMap$Entry* $tmp225;
    panda$core$Int64 $tmp226;
    panda$collections$HashMap$Entry* next234 = NULL;
    panda$collections$HashMap$Entry* $tmp235;
    panda$collections$HashMap$Entry* $tmp243;
    panda$collections$HashMap$Entry* $tmp244;
    panda$collections$HashMap$Entry* next246 = NULL;
    panda$collections$HashMap$Entry* $tmp247;
    panda$collections$HashMap$Entry* $tmp251;
    panda$collections$HashMap$Entry* $tmp252;
    panda$core$Int64 $tmp253;
    int $tmp211;
    {
        panda$core$Int64$init$builtin_int64(&$tmp212, 1);
        panda$core$Int64 $tmp213 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp212);
        self->changeCount = $tmp213;
        panda$core$Int64 $tmp215 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index214 = $tmp215;
        $tmp217 = self->contents[index214.value];
        e216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        if (((panda$core$Bit) { e216 == NULL }).value) {
        {
            $tmp211 = 0;
            goto $l209;
            $l218:;
            return;
        }
        }
        ITable* $tmp219 = ((panda$core$Equatable*) e216->key)->$class->itable;
        while ($tmp219->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp219 = $tmp219->next;
        }
        $fn221 $tmp220 = $tmp219->methods[0];
        panda$core$Bit $tmp222 = $tmp220(((panda$core$Equatable*) e216->key), ((panda$core$Equatable*) p_key));
        if ($tmp222.value) {
        {
            {
                $tmp223 = self->contents;
                $tmp224 = index214;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223[$tmp224.value]));
                $tmp225 = e216->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
                $tmp223[$tmp224.value] = $tmp225;
            }
            panda$core$Int64$init$builtin_int64(&$tmp226, 1);
            panda$core$Int64 $tmp227 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp226);
            self->_count = $tmp227;
            $tmp211 = 1;
            goto $l209;
            $l228:;
            return;
        }
        }
        $l229:;
        while (true) {
        {
            int $tmp233;
            {
                $tmp235 = e216->next;
                next234 = $tmp235;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
                if (((panda$core$Bit) { next234 == NULL }).value) {
                {
                    $tmp233 = 0;
                    goto $l231;
                    $l236:;
                    $tmp211 = 2;
                    goto $l209;
                    $l237:;
                    return;
                }
                }
                ITable* $tmp238 = ((panda$core$Equatable*) next234->key)->$class->itable;
                while ($tmp238->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp238 = $tmp238->next;
                }
                $fn240 $tmp239 = $tmp238->methods[0];
                panda$core$Bit $tmp241 = $tmp239(((panda$core$Equatable*) next234->key), ((panda$core$Equatable*) p_key));
                if ($tmp241.value) {
                {
                    $tmp233 = 1;
                    goto $l231;
                    $l242:;
                    goto $l230;
                }
                }
                {
                    $tmp243 = e216;
                    $tmp244 = next234;
                    e216 = $tmp244;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                }
            }
            $tmp233 = -1;
            goto $l231;
            $l231:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next234));
            next234 = NULL;
            switch ($tmp233) {
                case -1: goto $l245;
                case 0: goto $l236;
                case 1: goto $l242;
            }
            $l245:;
        }
        }
        $l230:;
        $tmp247 = e216->next;
        next246 = $tmp247;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
        if (((panda$core$Bit) { next246 != NULL }).value) goto $l248; else goto $l249;
        $l249:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s250, (panda$core$Int64) { 260 });
        abort();
        $l248:;
        {
            $tmp251 = e216->next;
            $tmp252 = next246->next;
            e216->next = $tmp252;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp251));
        }
        panda$core$Int64$init$builtin_int64(&$tmp253, 1);
        panda$core$Int64 $tmp254 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp253);
        self->_count = $tmp254;
    }
    $tmp211 = -1;
    goto $l209;
    $l209:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next246));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e216));
    e216 = NULL;
    next246 = NULL;
    switch ($tmp211) {
        case -1: goto $l255;
        case 1: goto $l228;
        case 0: goto $l218;
        case 2: goto $l237;
    }
    $l255:;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Int64 $tmp256;
    panda$core$Int64 $tmp258;
    panda$core$Range$LTpanda$core$Int64$GT $tmp259;
    panda$core$Int64 $tmp260;
    panda$core$Bit $tmp261;
    panda$core$Int64 $tmp281;
    panda$core$Range$LTpanda$core$Int64$GT $tmp282;
    panda$core$Int64 $tmp283;
    panda$core$Bit $tmp284;
    panda$collections$HashMap$Entry** $tmp298;
    panda$core$Int64 $tmp299;
    panda$collections$HashMap$Entry* $tmp300;
    panda$core$Int64 $tmp307;
    panda$core$Int64 $tmp309;
    panda$core$Int64$init$builtin_int64(&$tmp256, 1);
    panda$core$Int64 $tmp257 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp256);
    self->changeCount = $tmp257;
    panda$core$Int64$init$builtin_int64(&$tmp258, 0);
    self->_count = $tmp258;
    panda$core$Int64$init$builtin_int64(&$tmp260, 0);
    panda$core$Bit$init$builtin_bit(&$tmp261, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp259, $tmp260, self->bucketCount, $tmp261);
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
        if (((panda$core$Bit) { self->contents[i262.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i262.value]));
        }
        }
    }
    $l270:;
    int64_t $tmp276 = $tmp265 - i262.value;
    if ($tmp266) goto $l277; else goto $l278;
    $l277:;
    if ((uint64_t) $tmp276 >= 1) goto $l275; else goto $l269;
    $l278:;
    if ((uint64_t) $tmp276 > 1) goto $l275; else goto $l269;
    $l275:;
    i262.value += 1;
    goto $l267;
    $l269:;
    pandaFree(self->contents);
    panda$core$Int64$init$builtin_int64(&$tmp281, 16);
    self->bucketCount = $tmp281;
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp283, 0);
    panda$core$Bit$init$builtin_bit(&$tmp284, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp282, $tmp283, self->bucketCount, $tmp284);
    int64_t $tmp286 = $tmp282.min.value;
    panda$core$Int64 i285 = { $tmp286 };
    int64_t $tmp288 = $tmp282.max.value;
    bool $tmp289 = $tmp282.inclusive.value;
    if ($tmp289) goto $l296; else goto $l297;
    $l296:;
    if ($tmp286 <= $tmp288) goto $l290; else goto $l292;
    $l297:;
    if ($tmp286 < $tmp288) goto $l290; else goto $l292;
    $l290:;
    {
        if (((panda$core$Bit) { self->contents[i285.value] != NULL }).value) {
        {
            {
                $tmp298 = self->contents;
                $tmp299 = i285;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298[$tmp299.value]));
                $tmp300 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
                $tmp298[$tmp299.value] = $tmp300;
            }
        }
        }
    }
    $l293:;
    int64_t $tmp302 = $tmp288 - i285.value;
    if ($tmp289) goto $l303; else goto $l304;
    $l303:;
    if ((uint64_t) $tmp302 >= 1) goto $l301; else goto $l292;
    $l304:;
    if ((uint64_t) $tmp302 > 1) goto $l301; else goto $l292;
    $l301:;
    i285.value += 1;
    goto $l290;
    $l292:;
    panda$core$Int64$init$builtin_int64(&$tmp307, 3);
    panda$core$Int64 $tmp308 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp307);
    panda$core$Int64$init$builtin_int64(&$tmp309, 4);
    panda$core$Int64 $tmp310 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp308, $tmp309);
    self->threshold = $tmp310;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$core$Int64 $tmp311;
    panda$collections$HashMap$Entry** oldContents314;
    panda$core$Int64 oldBucketCount315;
    panda$core$Int64 $tmp316;
    panda$core$Range$LTpanda$core$Int64$GT $tmp318;
    panda$core$Int64 $tmp319;
    panda$core$Bit $tmp320;
    panda$collections$HashMap$Entry** $tmp334;
    panda$core$Int64 $tmp335;
    panda$collections$HashMap$Entry* $tmp336;
    panda$core$Int64 $tmp343;
    panda$core$Int64 $tmp345;
    panda$core$Range$LTpanda$core$Int64$GT $tmp346;
    panda$core$Int64 $tmp347;
    panda$core$Bit $tmp348;
    panda$collections$HashMap$Entry* e365 = NULL;
    panda$collections$HashMap$Entry* $tmp366;
    panda$collections$HashMap$Entry* $tmp370;
    panda$collections$HashMap$Entry* $tmp371;
    panda$core$Range$LTpanda$core$Int64$GT $tmp379;
    panda$core$Int64 $tmp380;
    panda$core$Bit $tmp381;
    panda$core$Int64$init$builtin_int64(&$tmp311, 1);
    panda$core$Int64 $tmp312 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp311);
    self->_count = $tmp312;
    panda$core$Bit $tmp313 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp313.value) {
    {
        oldContents314 = self->contents;
        oldBucketCount315 = self->bucketCount;
        panda$core$Int64$init$builtin_int64(&$tmp316, 2);
        panda$core$Int64 $tmp317 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp316);
        self->bucketCount = $tmp317;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Int64$init$builtin_int64(&$tmp319, 0);
        panda$core$Bit$init$builtin_bit(&$tmp320, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp318, $tmp319, self->bucketCount, $tmp320);
        int64_t $tmp322 = $tmp318.min.value;
        panda$core$Int64 i321 = { $tmp322 };
        int64_t $tmp324 = $tmp318.max.value;
        bool $tmp325 = $tmp318.inclusive.value;
        if ($tmp325) goto $l332; else goto $l333;
        $l332:;
        if ($tmp322 <= $tmp324) goto $l326; else goto $l328;
        $l333:;
        if ($tmp322 < $tmp324) goto $l326; else goto $l328;
        $l326:;
        {
            {
                $tmp334 = self->contents;
                $tmp335 = i321;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334[$tmp335.value]));
                $tmp336 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp336));
                $tmp334[$tmp335.value] = $tmp336;
            }
        }
        $l329:;
        int64_t $tmp338 = $tmp324 - i321.value;
        if ($tmp325) goto $l339; else goto $l340;
        $l339:;
        if ((uint64_t) $tmp338 >= 1) goto $l337; else goto $l328;
        $l340:;
        if ((uint64_t) $tmp338 > 1) goto $l337; else goto $l328;
        $l337:;
        i321.value += 1;
        goto $l326;
        $l328:;
        panda$core$Int64$init$builtin_int64(&$tmp343, 2);
        panda$core$Int64 $tmp344 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, $tmp343);
        self->threshold = $tmp344;
        panda$core$Int64$init$builtin_int64(&$tmp345, 0);
        self->_count = $tmp345;
        panda$core$Int64$init$builtin_int64(&$tmp347, 0);
        panda$core$Bit$init$builtin_bit(&$tmp348, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp346, $tmp347, oldBucketCount315, $tmp348);
        int64_t $tmp350 = $tmp346.min.value;
        panda$core$Int64 i349 = { $tmp350 };
        int64_t $tmp352 = $tmp346.max.value;
        bool $tmp353 = $tmp346.inclusive.value;
        if ($tmp353) goto $l360; else goto $l361;
        $l360:;
        if ($tmp350 <= $tmp352) goto $l354; else goto $l356;
        $l361:;
        if ($tmp350 < $tmp352) goto $l354; else goto $l356;
        $l354:;
        {
            int $tmp364;
            {
                $tmp366 = oldContents314[i349.value];
                e365 = $tmp366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
                $l367:;
                bool $tmp369 = ((panda$core$Bit) { e365 != NULL }).value;
                if (!$tmp369) goto $l368;
                {
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e365->key, e365->value);
                    {
                        $tmp370 = e365;
                        $tmp371 = e365->next;
                        e365 = $tmp371;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp370));
                    }
                }
                goto $l367;
                $l368:;
            }
            $tmp364 = -1;
            goto $l362;
            $l362:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e365));
            e365 = NULL;
            switch ($tmp364) {
                case -1: goto $l372;
            }
            $l372:;
        }
        $l357:;
        int64_t $tmp374 = $tmp352 - i349.value;
        if ($tmp353) goto $l375; else goto $l376;
        $l375:;
        if ((uint64_t) $tmp374 >= 1) goto $l373; else goto $l356;
        $l376:;
        if ((uint64_t) $tmp374 > 1) goto $l373; else goto $l356;
        $l373:;
        i349.value += 1;
        goto $l354;
        $l356:;
        panda$core$Int64$init$builtin_int64(&$tmp380, 0);
        panda$core$Bit$init$builtin_bit(&$tmp381, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp379, $tmp380, oldBucketCount315, $tmp381);
        int64_t $tmp383 = $tmp379.min.value;
        panda$core$Int64 i382 = { $tmp383 };
        int64_t $tmp385 = $tmp379.max.value;
        bool $tmp386 = $tmp379.inclusive.value;
        if ($tmp386) goto $l393; else goto $l394;
        $l393:;
        if ($tmp383 <= $tmp385) goto $l387; else goto $l389;
        $l394:;
        if ($tmp383 < $tmp385) goto $l387; else goto $l389;
        $l387:;
        {
            if (((panda$core$Bit) { oldContents314[i382.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents314[i382.value]));
            }
            }
        }
        $l390:;
        int64_t $tmp396 = $tmp385 - i382.value;
        if ($tmp386) goto $l397; else goto $l398;
        $l397:;
        if ((uint64_t) $tmp396 >= 1) goto $l395; else goto $l389;
        $l398:;
        if ((uint64_t) $tmp396 > 1) goto $l395; else goto $l389;
        $l395:;
        i382.value += 1;
        goto $l387;
        $l389:;
        pandaFree(oldContents314);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue401;
    panda$collections$Iterator* $tmp402;
    panda$collections$HashMap$KeyIterator* $tmp403;
    panda$collections$HashMap$KeyIterator* $tmp404 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp404, self);
    $tmp403 = $tmp404;
    $tmp402 = ((panda$collections$Iterator*) $tmp403);
    $returnValue401 = $tmp402;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
    return $returnValue401;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue406;
    panda$collections$Iterator* $tmp407;
    panda$collections$HashMap$ValueIterator* $tmp408;
    panda$collections$HashMap$ValueIterator* $tmp409 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp409, self);
    $tmp408 = $tmp409;
    $tmp407 = ((panda$collections$Iterator*) $tmp408);
    $returnValue406 = $tmp407;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
    return $returnValue406;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $returnValue411;
    $returnValue411 = self->_count;
    return $returnValue411;
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result416 = NULL;
    panda$core$MutableString* $tmp417;
    panda$core$MutableString* $tmp418;
    panda$core$Char8 $tmp420;
    panda$core$UInt8 $tmp421;
    panda$core$String* separator422 = NULL;
    panda$core$String* $tmp423;
    panda$core$Range$LTpanda$core$Int64$GT $tmp425;
    panda$core$Int64 $tmp426;
    panda$core$Bit $tmp427;
    panda$collections$HashMap$Entry* entry444 = NULL;
    panda$collections$HashMap$Entry* $tmp445;
    panda$core$Char8 $tmp450;
    panda$core$UInt8 $tmp451;
    panda$collections$HashMap$Entry* $tmp453;
    panda$collections$HashMap$Entry* $tmp454;
    panda$core$String* $tmp455;
    panda$core$String* $tmp456;
    panda$core$Char8 $tmp465;
    panda$core$UInt8 $tmp466;
    panda$core$String* $returnValue467;
    panda$core$String* $tmp468;
    panda$core$String* $tmp469;
    int $tmp415;
    {
        panda$core$MutableString* $tmp419 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp419);
        $tmp418 = $tmp419;
        $tmp417 = $tmp418;
        result416 = $tmp417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp418));
        panda$core$UInt8$init$builtin_uint8(&$tmp421, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp420, $tmp421);
        panda$core$MutableString$append$panda$core$Char8(result416, $tmp420);
        $tmp423 = &$s424;
        separator422 = $tmp423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
        panda$core$Int64$init$builtin_int64(&$tmp426, 0);
        panda$core$Bit$init$builtin_bit(&$tmp427, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp425, $tmp426, self->bucketCount, $tmp427);
        int64_t $tmp429 = $tmp425.min.value;
        panda$core$Int64 i428 = { $tmp429 };
        int64_t $tmp431 = $tmp425.max.value;
        bool $tmp432 = $tmp425.inclusive.value;
        if ($tmp432) goto $l439; else goto $l440;
        $l439:;
        if ($tmp429 <= $tmp431) goto $l433; else goto $l435;
        $l440:;
        if ($tmp429 < $tmp431) goto $l433; else goto $l435;
        $l433:;
        {
            int $tmp443;
            {
                $tmp445 = self->contents[i428.value];
                entry444 = $tmp445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp445));
                $l446:;
                bool $tmp448 = ((panda$core$Bit) { entry444 != NULL }).value;
                if (!$tmp448) goto $l447;
                {
                    panda$core$MutableString$append$panda$core$String(result416, separator422);
                    if (((panda$core$Bit) { entry444->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result416, ((panda$core$Object*) entry444->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result416, &$s449);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp451, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp450, $tmp451);
                    panda$core$MutableString$append$panda$core$Char8(result416, $tmp450);
                    if (((panda$core$Bit) { entry444->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result416, entry444->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result416, &$s452);
                    }
                    }
                    {
                        $tmp453 = entry444;
                        $tmp454 = entry444->next;
                        entry444 = $tmp454;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp454));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
                    }
                    {
                        $tmp455 = separator422;
                        $tmp456 = &$s457;
                        separator422 = $tmp456;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp456));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                    }
                }
                goto $l446;
                $l447:;
            }
            $tmp443 = -1;
            goto $l441;
            $l441:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry444));
            entry444 = NULL;
            switch ($tmp443) {
                case -1: goto $l458;
            }
            $l458:;
        }
        $l436:;
        int64_t $tmp460 = $tmp431 - i428.value;
        if ($tmp432) goto $l461; else goto $l462;
        $l461:;
        if ((uint64_t) $tmp460 >= 1) goto $l459; else goto $l435;
        $l462:;
        if ((uint64_t) $tmp460 > 1) goto $l459; else goto $l435;
        $l459:;
        i428.value += 1;
        goto $l433;
        $l435:;
        panda$core$UInt8$init$builtin_uint8(&$tmp466, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp465, $tmp466);
        panda$core$MutableString$append$panda$core$Char8(result416, $tmp465);
        panda$core$String* $tmp470 = panda$core$MutableString$finish$R$panda$core$String(result416);
        $tmp469 = $tmp470;
        $tmp468 = $tmp469;
        $returnValue467 = $tmp468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
        $tmp415 = 0;
        goto $l413;
        $l471:;
        return $returnValue467;
    }
    $l413:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator422));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result416));
    result416 = NULL;
    separator422 = NULL;
    switch ($tmp415) {
        case 0: goto $l471;
    }
    $l473:;
    abort();
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$core$Class* $tmp474;
    panda$core$Class* $tmp475;
    panda$collections$ImmutableHashMap* $tmp476;
    panda$collections$ImmutableHashMap* $returnValue478;
    panda$collections$ImmutableHashMap* $tmp479;
    {
        $tmp474 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp477 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp477);
        $tmp476 = $tmp477;
        $tmp475 = ((panda$core$Object*) $tmp476)->$class;
        ((panda$core$Object*) self)->$class = $tmp475;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
    }
    $tmp479 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    $returnValue478 = $tmp479;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp479));
    return $returnValue478;
}

