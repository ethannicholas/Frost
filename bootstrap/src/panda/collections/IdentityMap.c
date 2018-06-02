#include "panda/collections/IdentityMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/MapWriter.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Map.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/IdentityMap/Entry.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
__attribute__((weak)) void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim(panda$collections$IdentityMap* p0, panda$core$Object* p1, panda$core$Object* p2) {
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(p0, p1, p2);

}
__attribute__((weak)) panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim(panda$collections$IdentityMap* p0, panda$core$Object* p1) {
    panda$core$Object* result = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(p0, p1);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim(panda$collections$IdentityMap* p0) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(p0);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim(panda$collections$IdentityMap* p0) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$IdentityMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$IdentityMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapWriter, { panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$IdentityMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapView, { } };

static panda$core$String $s1;
panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$Map, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$collections$IdentityMap$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp5;
    panda$core$Int64 $tmp6;
    panda$core$Range$LTpanda$core$Int64$GT $tmp7;
    panda$core$Int64 $tmp8;
    panda$core$Bit $tmp9;
    panda$collections$IdentityMap$Entry** $tmp23;
    panda$core$Int64 $tmp24;
    panda$collections$IdentityMap$Entry* $tmp25;
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
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
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
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp39;
    panda$core$Int64 $tmp40;
    panda$core$Bit $tmp41;
    int $tmp38;
    {
        panda$core$Int64$init$builtin_int64(&$tmp40, 0);
        panda$core$Bit$init$builtin_bit(&$tmp41, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp39, $tmp40, self->bucketCount, $tmp41);
        int64_t $tmp43 = $tmp39.min.value;
        panda$core$Int64 i42 = { $tmp43 };
        int64_t $tmp45 = $tmp39.max.value;
        bool $tmp46 = $tmp39.inclusive.value;
        if ($tmp46) goto $l53; else goto $l54;
        $l53:;
        if ($tmp43 <= $tmp45) goto $l47; else goto $l49;
        $l54:;
        if ($tmp43 < $tmp45) goto $l47; else goto $l49;
        $l47:;
        {
            if (((panda$core$Bit) { self->contents[i42.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i42.value]));
            }
            }
        }
        $l50:;
        int64_t $tmp56 = $tmp45 - i42.value;
        if ($tmp46) goto $l57; else goto $l58;
        $l57:;
        if ((uint64_t) $tmp56 >= 1) goto $l55; else goto $l49;
        $l58:;
        if ((uint64_t) $tmp56 > 1) goto $l55; else goto $l49;
        $l55:;
        i42.value += 1;
        goto $l47;
        $l49:;
        pandaFree(self->contents);
    }
    $tmp38 = -1;
    goto $l36;
    $l36:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp38) {
        case -1: goto $l61;
    }
    $l61:;
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $returnValue62;
    panda$core$Int64 $tmp63;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp63, p_key);
    panda$core$Int64 $tmp64 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp63, self->bucketCount);
    $returnValue62 = $tmp64;
    return $returnValue62;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index69;
    panda$collections$IdentityMap$Entry* e71 = NULL;
    panda$collections$IdentityMap$Entry* $tmp72;
    panda$collections$IdentityMap$Entry* $tmp79;
    panda$collections$IdentityMap$Entry* $tmp80;
    panda$core$Object* $returnValue81;
    panda$core$Object* $tmp82;
    panda$core$Object* $tmp85;
    int $tmp68;
    {
        panda$core$Int64 $tmp70 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index69 = $tmp70;
        $tmp72 = self->contents[index69.value];
        e71 = $tmp72;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
        $l73:;
        bool $tmp76 = ((panda$core$Bit) { e71 != NULL }).value;
        if (!$tmp76) goto $l77;
        $tmp76 = ((panda$core$Bit) { e71->key != p_key }).value;
        $l77:;
        panda$core$Bit $tmp78 = { $tmp76 };
        bool $tmp75 = $tmp78.value;
        if (!$tmp75) goto $l74;
        {
            {
                $tmp79 = e71;
                $tmp80 = e71->next;
                e71 = $tmp80;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
            }
        }
        goto $l73;
        $l74:;
        if (((panda$core$Bit) { e71 != NULL }).value) {
        {
            $tmp82 = e71->value;
            $returnValue81 = $tmp82;
            panda$core$Panda$ref$panda$core$Object($tmp82);
            $tmp68 = 0;
            goto $l66;
            $l83:;
            return $returnValue81;
        }
        }
        else {
        {
            $tmp85 = NULL;
            $returnValue81 = $tmp85;
            panda$core$Panda$ref$panda$core$Object($tmp85);
            $tmp68 = 1;
            goto $l66;
            $l86:;
            return $returnValue81;
        }
        }
    }
    $tmp68 = -1;
    goto $l66;
    $l66:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e71));
    e71 = NULL;
    switch ($tmp68) {
        case 0: goto $l83;
        case -1: goto $l88;
        case 1: goto $l86;
    }
    $l88:;
    abort();
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index92;
    panda$collections$IdentityMap$Entry* e94 = NULL;
    panda$collections$IdentityMap$Entry* $tmp95;
    panda$collections$IdentityMap$Entry* $tmp102;
    panda$collections$IdentityMap$Entry* $tmp103;
    panda$core$Bit $returnValue104;
    int $tmp91;
    {
        panda$core$Int64 $tmp93 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index92 = $tmp93;
        $tmp95 = self->contents[index92.value];
        e94 = $tmp95;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
        $l96:;
        bool $tmp99 = ((panda$core$Bit) { e94 != NULL }).value;
        if (!$tmp99) goto $l100;
        $tmp99 = ((panda$core$Bit) { e94->key != p_key }).value;
        $l100:;
        panda$core$Bit $tmp101 = { $tmp99 };
        bool $tmp98 = $tmp101.value;
        if (!$tmp98) goto $l97;
        {
            {
                $tmp102 = e94;
                $tmp103 = e94->next;
                e94 = $tmp103;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
            }
        }
        goto $l96;
        $l97:;
        $returnValue104 = ((panda$core$Bit) { e94 != NULL });
        $tmp91 = 0;
        goto $l89;
        $l105:;
        return $returnValue104;
    }
    $l89:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e94));
    e94 = NULL;
    switch ($tmp91) {
        case 0: goto $l105;
    }
    $l107:;
    abort();
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 $tmp111;
    panda$core$Int64 index113;
    panda$collections$IdentityMap$Entry* e115 = NULL;
    panda$collections$IdentityMap$Entry* $tmp116;
    panda$collections$IdentityMap$Entry* $tmp123;
    panda$collections$IdentityMap$Entry* $tmp124;
    panda$collections$IdentityMap$Entry* old128 = NULL;
    panda$collections$IdentityMap$Entry* $tmp129;
    panda$collections$IdentityMap$Entry* $tmp130;
    panda$collections$IdentityMap$Entry* $tmp131;
    panda$collections$IdentityMap$Entry* $tmp132;
    panda$collections$IdentityMap$Entry* $tmp134;
    panda$collections$IdentityMap$Entry* $tmp135;
    panda$collections$IdentityMap$Entry** $tmp136;
    panda$core$Int64 $tmp137;
    panda$collections$IdentityMap$Entry* $tmp138;
    panda$core$Object* $tmp140;
    panda$core$Object* $tmp141;
    int $tmp110;
    {
        panda$core$Int64$init$builtin_int64(&$tmp111, 1);
        panda$core$Int64 $tmp112 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp111);
        self->changeCount = $tmp112;
        panda$core$Int64 $tmp114 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index113 = $tmp114;
        $tmp116 = self->contents[index113.value];
        e115 = $tmp116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
        $l117:;
        bool $tmp120 = ((panda$core$Bit) { e115 != NULL }).value;
        if (!$tmp120) goto $l121;
        $tmp120 = ((panda$core$Bit) { e115->key != p_key }).value;
        $l121:;
        panda$core$Bit $tmp122 = { $tmp120 };
        bool $tmp119 = $tmp122.value;
        if (!$tmp119) goto $l118;
        {
            {
                $tmp123 = e115;
                $tmp124 = e115->next;
                e115 = $tmp124;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
            }
        }
        goto $l117;
        $l118:;
        if (((panda$core$Bit) { e115 == NULL }).value) {
        {
            int $tmp127;
            {
                $tmp129 = self->contents[index113.value];
                old128 = $tmp129;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
                {
                    $tmp130 = e115;
                    panda$collections$IdentityMap$Entry* $tmp133 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
                    panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp133, p_key, p_value);
                    $tmp132 = $tmp133;
                    $tmp131 = $tmp132;
                    e115 = $tmp131;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
                }
                {
                    $tmp134 = e115->next;
                    $tmp135 = old128;
                    e115->next = $tmp135;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
                }
                {
                    $tmp136 = self->contents;
                    $tmp137 = index113;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136[$tmp137.value]));
                    $tmp138 = e115;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
                    $tmp136[$tmp137.value] = $tmp138;
                }
                panda$collections$IdentityMap$incrementCount(self);
            }
            $tmp127 = -1;
            goto $l125;
            $l125:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old128));
            old128 = NULL;
            switch ($tmp127) {
                case -1: goto $l139;
            }
            $l139:;
        }
        }
        else {
        {
            {
                $tmp140 = e115->value;
                $tmp141 = p_value;
                e115->value = $tmp141;
                panda$core$Panda$ref$panda$core$Object($tmp141);
                panda$core$Panda$unref$panda$core$Object($tmp140);
            }
        }
        }
    }
    $tmp110 = -1;
    goto $l108;
    $l108:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e115));
    e115 = NULL;
    switch ($tmp110) {
        case -1: goto $l142;
    }
    $l142:;
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $tmp146;
    panda$core$Int64 index148;
    panda$collections$IdentityMap$Entry* e150 = NULL;
    panda$collections$IdentityMap$Entry* $tmp151;
    panda$collections$IdentityMap$Entry** $tmp153;
    panda$core$Int64 $tmp154;
    panda$collections$IdentityMap$Entry* $tmp155;
    panda$core$Int64 $tmp156;
    panda$collections$IdentityMap$Entry* next164 = NULL;
    panda$collections$IdentityMap$Entry* $tmp165;
    panda$collections$IdentityMap$Entry* $tmp169;
    panda$collections$IdentityMap$Entry* $tmp170;
    panda$collections$IdentityMap$Entry* next172 = NULL;
    panda$collections$IdentityMap$Entry* $tmp173;
    panda$collections$IdentityMap$Entry* $tmp177;
    panda$collections$IdentityMap$Entry* $tmp178;
    panda$core$Int64 $tmp179;
    int $tmp145;
    {
        panda$core$Int64$init$builtin_int64(&$tmp146, 1);
        panda$core$Int64 $tmp147 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp146);
        self->changeCount = $tmp147;
        panda$core$Int64 $tmp149 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index148 = $tmp149;
        $tmp151 = self->contents[index148.value];
        e150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        if (((panda$core$Bit) { e150 == NULL }).value) {
        {
            $tmp145 = 0;
            goto $l143;
            $l152:;
            return;
        }
        }
        if (((panda$core$Bit) { e150->key == p_key }).value) {
        {
            {
                $tmp153 = self->contents;
                $tmp154 = index148;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153[$tmp154.value]));
                $tmp155 = e150->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
                $tmp153[$tmp154.value] = $tmp155;
            }
            panda$core$Int64$init$builtin_int64(&$tmp156, 1);
            panda$core$Int64 $tmp157 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp156);
            self->_count = $tmp157;
            $tmp145 = 1;
            goto $l143;
            $l158:;
            return;
        }
        }
        $l159:;
        while (true) {
        {
            int $tmp163;
            {
                $tmp165 = e150->next;
                next164 = $tmp165;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
                if (((panda$core$Bit) { next164 == NULL }).value) {
                {
                    $tmp163 = 0;
                    goto $l161;
                    $l166:;
                    $tmp145 = 2;
                    goto $l143;
                    $l167:;
                    return;
                }
                }
                if (((panda$core$Bit) { next164->key == p_key }).value) {
                {
                    $tmp163 = 1;
                    goto $l161;
                    $l168:;
                    goto $l160;
                }
                }
                {
                    $tmp169 = e150;
                    $tmp170 = next164;
                    e150 = $tmp170;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp170));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
                }
            }
            $tmp163 = -1;
            goto $l161;
            $l161:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next164));
            next164 = NULL;
            switch ($tmp163) {
                case 0: goto $l166;
                case -1: goto $l171;
                case 1: goto $l168;
            }
            $l171:;
        }
        }
        $l160:;
        $tmp173 = e150->next;
        next172 = $tmp173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
        if (((panda$core$Bit) { next172 != NULL }).value) goto $l174; else goto $l175;
        $l175:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s176, (panda$core$Int64) { 157 });
        abort();
        $l174:;
        {
            $tmp177 = e150->next;
            $tmp178 = next172->next;
            e150->next = $tmp178;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp177));
        }
        panda$core$Int64$init$builtin_int64(&$tmp179, 1);
        panda$core$Int64 $tmp180 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp179);
        self->_count = $tmp180;
    }
    $tmp145 = -1;
    goto $l143;
    $l143:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next172));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e150));
    e150 = NULL;
    next172 = NULL;
    switch ($tmp145) {
        case -1: goto $l181;
        case 1: goto $l158;
        case 2: goto $l167;
        case 0: goto $l152;
    }
    $l181:;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Int64 $tmp182;
    panda$core$Int64 $tmp184;
    panda$core$Range$LTpanda$core$Int64$GT $tmp185;
    panda$core$Int64 $tmp186;
    panda$core$Bit $tmp187;
    panda$core$Int64 $tmp207;
    panda$core$Range$LTpanda$core$Int64$GT $tmp208;
    panda$core$Int64 $tmp209;
    panda$core$Bit $tmp210;
    panda$collections$IdentityMap$Entry** $tmp224;
    panda$core$Int64 $tmp225;
    panda$collections$IdentityMap$Entry* $tmp226;
    panda$core$Int64 $tmp233;
    panda$core$Int64 $tmp235;
    panda$core$Int64$init$builtin_int64(&$tmp182, 1);
    panda$core$Int64 $tmp183 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, $tmp182);
    self->changeCount = $tmp183;
    panda$core$Int64$init$builtin_int64(&$tmp184, 0);
    self->_count = $tmp184;
    panda$core$Int64$init$builtin_int64(&$tmp186, 0);
    panda$core$Bit$init$builtin_bit(&$tmp187, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp185, $tmp186, self->bucketCount, $tmp187);
    int64_t $tmp189 = $tmp185.min.value;
    panda$core$Int64 i188 = { $tmp189 };
    int64_t $tmp191 = $tmp185.max.value;
    bool $tmp192 = $tmp185.inclusive.value;
    if ($tmp192) goto $l199; else goto $l200;
    $l199:;
    if ($tmp189 <= $tmp191) goto $l193; else goto $l195;
    $l200:;
    if ($tmp189 < $tmp191) goto $l193; else goto $l195;
    $l193:;
    {
        if (((panda$core$Bit) { self->contents[i188.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i188.value]));
        }
        }
    }
    $l196:;
    int64_t $tmp202 = $tmp191 - i188.value;
    if ($tmp192) goto $l203; else goto $l204;
    $l203:;
    if ((uint64_t) $tmp202 >= 1) goto $l201; else goto $l195;
    $l204:;
    if ((uint64_t) $tmp202 > 1) goto $l201; else goto $l195;
    $l201:;
    i188.value += 1;
    goto $l193;
    $l195:;
    pandaFree(self->contents);
    panda$core$Int64$init$builtin_int64(&$tmp207, 16);
    self->bucketCount = $tmp207;
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp209, 0);
    panda$core$Bit$init$builtin_bit(&$tmp210, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp208, $tmp209, self->bucketCount, $tmp210);
    int64_t $tmp212 = $tmp208.min.value;
    panda$core$Int64 i211 = { $tmp212 };
    int64_t $tmp214 = $tmp208.max.value;
    bool $tmp215 = $tmp208.inclusive.value;
    if ($tmp215) goto $l222; else goto $l223;
    $l222:;
    if ($tmp212 <= $tmp214) goto $l216; else goto $l218;
    $l223:;
    if ($tmp212 < $tmp214) goto $l216; else goto $l218;
    $l216:;
    {
        if (((panda$core$Bit) { self->contents[i211.value] != NULL }).value) {
        {
            {
                $tmp224 = self->contents;
                $tmp225 = i211;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224[$tmp225.value]));
                $tmp226 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                $tmp224[$tmp225.value] = $tmp226;
            }
        }
        }
    }
    $l219:;
    int64_t $tmp228 = $tmp214 - i211.value;
    if ($tmp215) goto $l229; else goto $l230;
    $l229:;
    if ((uint64_t) $tmp228 >= 1) goto $l227; else goto $l218;
    $l230:;
    if ((uint64_t) $tmp228 > 1) goto $l227; else goto $l218;
    $l227:;
    i211.value += 1;
    goto $l216;
    $l218:;
    panda$core$Int64$init$builtin_int64(&$tmp233, 3);
    panda$core$Int64 $tmp234 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp233);
    panda$core$Int64$init$builtin_int64(&$tmp235, 4);
    panda$core$Int64 $tmp236 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp234, $tmp235);
    self->threshold = $tmp236;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$core$Int64 $tmp237;
    panda$collections$IdentityMap$Entry** oldContents240;
    panda$core$Int64 oldBucketCount241;
    panda$core$Int64 $tmp242;
    panda$core$Range$LTpanda$core$Int64$GT $tmp244;
    panda$core$Int64 $tmp245;
    panda$core$Bit $tmp246;
    panda$collections$IdentityMap$Entry** $tmp260;
    panda$core$Int64 $tmp261;
    panda$collections$IdentityMap$Entry* $tmp262;
    panda$core$Int64 $tmp269;
    panda$core$Int64 $tmp271;
    panda$core$Range$LTpanda$core$Int64$GT $tmp272;
    panda$core$Int64 $tmp273;
    panda$core$Bit $tmp274;
    panda$collections$IdentityMap$Entry* e291 = NULL;
    panda$collections$IdentityMap$Entry* $tmp292;
    panda$collections$IdentityMap$Entry* $tmp296;
    panda$collections$IdentityMap$Entry* $tmp297;
    panda$core$Range$LTpanda$core$Int64$GT $tmp305;
    panda$core$Int64 $tmp306;
    panda$core$Bit $tmp307;
    panda$core$Int64$init$builtin_int64(&$tmp237, 1);
    panda$core$Int64 $tmp238 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, $tmp237);
    self->_count = $tmp238;
    panda$core$Bit $tmp239 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp239.value) {
    {
        oldContents240 = self->contents;
        oldBucketCount241 = self->bucketCount;
        panda$core$Int64$init$builtin_int64(&$tmp242, 2);
        panda$core$Int64 $tmp243 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp242);
        self->bucketCount = $tmp243;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Int64$init$builtin_int64(&$tmp245, 0);
        panda$core$Bit$init$builtin_bit(&$tmp246, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp244, $tmp245, self->bucketCount, $tmp246);
        int64_t $tmp248 = $tmp244.min.value;
        panda$core$Int64 i247 = { $tmp248 };
        int64_t $tmp250 = $tmp244.max.value;
        bool $tmp251 = $tmp244.inclusive.value;
        if ($tmp251) goto $l258; else goto $l259;
        $l258:;
        if ($tmp248 <= $tmp250) goto $l252; else goto $l254;
        $l259:;
        if ($tmp248 < $tmp250) goto $l252; else goto $l254;
        $l252:;
        {
            {
                $tmp260 = self->contents;
                $tmp261 = i247;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp260[$tmp261.value]));
                $tmp262 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
                $tmp260[$tmp261.value] = $tmp262;
            }
        }
        $l255:;
        int64_t $tmp264 = $tmp250 - i247.value;
        if ($tmp251) goto $l265; else goto $l266;
        $l265:;
        if ((uint64_t) $tmp264 >= 1) goto $l263; else goto $l254;
        $l266:;
        if ((uint64_t) $tmp264 > 1) goto $l263; else goto $l254;
        $l263:;
        i247.value += 1;
        goto $l252;
        $l254:;
        panda$core$Int64$init$builtin_int64(&$tmp269, 2);
        panda$core$Int64 $tmp270 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, $tmp269);
        self->threshold = $tmp270;
        panda$core$Int64$init$builtin_int64(&$tmp271, 0);
        self->_count = $tmp271;
        panda$core$Int64$init$builtin_int64(&$tmp273, 0);
        panda$core$Bit$init$builtin_bit(&$tmp274, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp272, $tmp273, oldBucketCount241, $tmp274);
        int64_t $tmp276 = $tmp272.min.value;
        panda$core$Int64 i275 = { $tmp276 };
        int64_t $tmp278 = $tmp272.max.value;
        bool $tmp279 = $tmp272.inclusive.value;
        if ($tmp279) goto $l286; else goto $l287;
        $l286:;
        if ($tmp276 <= $tmp278) goto $l280; else goto $l282;
        $l287:;
        if ($tmp276 < $tmp278) goto $l280; else goto $l282;
        $l280:;
        {
            int $tmp290;
            {
                $tmp292 = oldContents240[i275.value];
                e291 = $tmp292;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp292));
                $l293:;
                bool $tmp295 = ((panda$core$Bit) { e291 != NULL }).value;
                if (!$tmp295) goto $l294;
                {
                    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e291->key, e291->value);
                    {
                        $tmp296 = e291;
                        $tmp297 = e291->next;
                        e291 = $tmp297;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
                    }
                }
                goto $l293;
                $l294:;
            }
            $tmp290 = -1;
            goto $l288;
            $l288:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e291));
            e291 = NULL;
            switch ($tmp290) {
                case -1: goto $l298;
            }
            $l298:;
        }
        $l283:;
        int64_t $tmp300 = $tmp278 - i275.value;
        if ($tmp279) goto $l301; else goto $l302;
        $l301:;
        if ((uint64_t) $tmp300 >= 1) goto $l299; else goto $l282;
        $l302:;
        if ((uint64_t) $tmp300 > 1) goto $l299; else goto $l282;
        $l299:;
        i275.value += 1;
        goto $l280;
        $l282:;
        panda$core$Int64$init$builtin_int64(&$tmp306, 0);
        panda$core$Bit$init$builtin_bit(&$tmp307, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp305, $tmp306, oldBucketCount241, $tmp307);
        int64_t $tmp309 = $tmp305.min.value;
        panda$core$Int64 i308 = { $tmp309 };
        int64_t $tmp311 = $tmp305.max.value;
        bool $tmp312 = $tmp305.inclusive.value;
        if ($tmp312) goto $l319; else goto $l320;
        $l319:;
        if ($tmp309 <= $tmp311) goto $l313; else goto $l315;
        $l320:;
        if ($tmp309 < $tmp311) goto $l313; else goto $l315;
        $l313:;
        {
            if (((panda$core$Bit) { oldContents240[i308.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents240[i308.value]));
            }
            }
        }
        $l316:;
        int64_t $tmp322 = $tmp311 - i308.value;
        if ($tmp312) goto $l323; else goto $l324;
        $l323:;
        if ((uint64_t) $tmp322 >= 1) goto $l321; else goto $l315;
        $l324:;
        if ((uint64_t) $tmp322 > 1) goto $l321; else goto $l315;
        $l321:;
        i308.value += 1;
        goto $l313;
        $l315:;
        pandaFree(oldContents240);
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    panda$core$Int64 $returnValue327;
    $returnValue327 = self->_count;
    return $returnValue327;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
    panda$core$Bit $tmp329;
    panda$core$Bit$init$builtin_bit(&$tmp329, false);
    if ($tmp329.value) goto $l330; else goto $l331;
    $l331:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s332, (panda$core$Int64) { 217 }, &$s333);
    abort();
    $l330:;
    abort();
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
    panda$core$Bit $tmp334;
    panda$core$Bit$init$builtin_bit(&$tmp334, false);
    if ($tmp334.value) goto $l335; else goto $l336;
    $l336:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s337, (panda$core$Int64) { 222 }, &$s338);
    abort();
    $l335:;
    abort();
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result342 = NULL;
    panda$core$MutableString* $tmp343;
    panda$core$MutableString* $tmp344;
    panda$core$Char8 $tmp346;
    panda$core$UInt8 $tmp347;
    panda$core$String* separator348 = NULL;
    panda$core$String* $tmp349;
    panda$core$Range$LTpanda$core$Int64$GT $tmp351;
    panda$core$Int64 $tmp352;
    panda$core$Bit $tmp353;
    panda$collections$IdentityMap$Entry* entry370 = NULL;
    panda$collections$IdentityMap$Entry* $tmp371;
    panda$core$Char8 $tmp376;
    panda$core$UInt8 $tmp377;
    panda$collections$IdentityMap$Entry* $tmp379;
    panda$collections$IdentityMap$Entry* $tmp380;
    panda$core$String* $tmp381;
    panda$core$String* $tmp382;
    panda$core$Char8 $tmp391;
    panda$core$UInt8 $tmp392;
    panda$core$String* $returnValue393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp395;
    int $tmp341;
    {
        panda$core$MutableString* $tmp345 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp345);
        $tmp344 = $tmp345;
        $tmp343 = $tmp344;
        result342 = $tmp343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
        panda$core$UInt8$init$builtin_uint8(&$tmp347, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp346, $tmp347);
        panda$core$MutableString$append$panda$core$Char8(result342, $tmp346);
        $tmp349 = &$s350;
        separator348 = $tmp349;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp349));
        panda$core$Int64$init$builtin_int64(&$tmp352, 0);
        panda$core$Bit$init$builtin_bit(&$tmp353, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp351, $tmp352, self->bucketCount, $tmp353);
        int64_t $tmp355 = $tmp351.min.value;
        panda$core$Int64 i354 = { $tmp355 };
        int64_t $tmp357 = $tmp351.max.value;
        bool $tmp358 = $tmp351.inclusive.value;
        if ($tmp358) goto $l365; else goto $l366;
        $l365:;
        if ($tmp355 <= $tmp357) goto $l359; else goto $l361;
        $l366:;
        if ($tmp355 < $tmp357) goto $l359; else goto $l361;
        $l359:;
        {
            int $tmp369;
            {
                $tmp371 = self->contents[i354.value];
                entry370 = $tmp371;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
                $l372:;
                bool $tmp374 = ((panda$core$Bit) { entry370 != NULL }).value;
                if (!$tmp374) goto $l373;
                {
                    panda$core$MutableString$append$panda$core$String(result342, separator348);
                    if (((panda$core$Bit) { entry370->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result342, entry370->key);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result342, &$s375);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp377, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp376, $tmp377);
                    panda$core$MutableString$append$panda$core$Char8(result342, $tmp376);
                    if (((panda$core$Bit) { entry370->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result342, entry370->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result342, &$s378);
                    }
                    }
                    {
                        $tmp379 = entry370;
                        $tmp380 = entry370->next;
                        entry370 = $tmp380;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                    }
                    {
                        $tmp381 = separator348;
                        $tmp382 = &$s383;
                        separator348 = $tmp382;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp382));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp381));
                    }
                }
                goto $l372;
                $l373:;
            }
            $tmp369 = -1;
            goto $l367;
            $l367:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry370));
            entry370 = NULL;
            switch ($tmp369) {
                case -1: goto $l384;
            }
            $l384:;
        }
        $l362:;
        int64_t $tmp386 = $tmp357 - i354.value;
        if ($tmp358) goto $l387; else goto $l388;
        $l387:;
        if ((uint64_t) $tmp386 >= 1) goto $l385; else goto $l361;
        $l388:;
        if ((uint64_t) $tmp386 > 1) goto $l385; else goto $l361;
        $l385:;
        i354.value += 1;
        goto $l359;
        $l361:;
        panda$core$UInt8$init$builtin_uint8(&$tmp392, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp391, $tmp392);
        panda$core$MutableString$append$panda$core$Char8(result342, $tmp391);
        panda$core$String* $tmp396 = panda$core$MutableString$finish$R$panda$core$String(result342);
        $tmp395 = $tmp396;
        $tmp394 = $tmp395;
        $returnValue393 = $tmp394;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp394));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
        $tmp341 = 0;
        goto $l339;
        $l397:;
        return $returnValue393;
    }
    $l339:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator348));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result342));
    result342 = NULL;
    separator348 = NULL;
    switch ($tmp341) {
        case 0: goto $l397;
    }
    $l399:;
    abort();
}

