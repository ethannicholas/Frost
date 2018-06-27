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
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Int64 $tmp2;
    panda$collections$IdentityMap* $tmp3;
    panda$core$Int64 $tmp4;
    panda$core$Int64 $tmp6;
    panda$core$Int64 $tmp7;
    panda$core$Range$LTpanda$core$Int64$GT $tmp8;
    panda$core$Int64 $tmp9;
    panda$core$Bit $tmp10;
    panda$collections$IdentityMap$Entry** $tmp24;
    panda$core$Int64 $tmp25;
    panda$collections$IdentityMap$Entry* $tmp26;
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
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
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
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp40;
    panda$core$Int64 $tmp41;
    panda$core$Bit $tmp42;
    int $tmp39;
    {
        panda$core$Int64$init$builtin_int64(&$tmp41, 0);
        panda$core$Bit$init$builtin_bit(&$tmp42, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp40, $tmp41, self->bucketCount, $tmp42);
        int64_t $tmp44 = $tmp40.min.value;
        panda$core$Int64 i43 = { $tmp44 };
        int64_t $tmp46 = $tmp40.max.value;
        bool $tmp47 = $tmp40.inclusive.value;
        if ($tmp47) goto $l54; else goto $l55;
        $l54:;
        if ($tmp44 <= $tmp46) goto $l48; else goto $l50;
        $l55:;
        if ($tmp44 < $tmp46) goto $l48; else goto $l50;
        $l48:;
        {
            if (((panda$core$Bit) { self->contents[i43.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i43.value]));
            }
            }
        }
        $l51:;
        int64_t $tmp57 = $tmp46 - i43.value;
        if ($tmp47) goto $l58; else goto $l59;
        $l58:;
        if ((uint64_t) $tmp57 >= 1) goto $l56; else goto $l50;
        $l59:;
        if ((uint64_t) $tmp57 > 1) goto $l56; else goto $l50;
        $l56:;
        i43.value += 1;
        goto $l48;
        $l50:;
        pandaFree(self->contents);
    }
    $tmp39 = -1;
    goto $l37;
    $l37:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp39) {
        case -1: goto $l62;
    }
    $l62:;
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $returnValue63;
    panda$core$Int64 $tmp64;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp64, p_key);
    panda$core$Int64 $tmp65 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp64, self->bucketCount);
    $returnValue63 = $tmp65;
    return $returnValue63;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index70;
    panda$collections$IdentityMap$Entry* e72 = NULL;
    panda$collections$IdentityMap$Entry* $tmp73;
    panda$collections$IdentityMap$Entry* $tmp80;
    panda$collections$IdentityMap$Entry* $tmp81;
    panda$core$Object* $returnValue82;
    panda$core$Object* $tmp83;
    panda$core$Object* $tmp86;
    int $tmp69;
    {
        panda$core$Int64 $tmp71 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index70 = $tmp71;
        $tmp73 = self->contents[index70.value];
        e72 = $tmp73;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp73));
        $l74:;
        bool $tmp77 = ((panda$core$Bit) { e72 != NULL }).value;
        if (!$tmp77) goto $l78;
        $tmp77 = ((panda$core$Bit) { e72->key != p_key }).value;
        $l78:;
        panda$core$Bit $tmp79 = { $tmp77 };
        bool $tmp76 = $tmp79.value;
        if (!$tmp76) goto $l75;
        {
            {
                $tmp80 = e72;
                $tmp81 = e72->next;
                e72 = $tmp81;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp81));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
            }
        }
        goto $l74;
        $l75:;
        if (((panda$core$Bit) { e72 != NULL }).value) {
        {
            $tmp83 = e72->value;
            $returnValue82 = $tmp83;
            panda$core$Panda$ref$panda$core$Object($tmp83);
            $tmp69 = 0;
            goto $l67;
            $l84:;
            return $returnValue82;
        }
        }
        else {
        {
            $tmp86 = NULL;
            $returnValue82 = $tmp86;
            panda$core$Panda$ref$panda$core$Object($tmp86);
            $tmp69 = 1;
            goto $l67;
            $l87:;
            return $returnValue82;
        }
        }
    }
    $tmp69 = -1;
    goto $l67;
    $l67:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e72));
    e72 = NULL;
    switch ($tmp69) {
        case 0: goto $l84;
        case -1: goto $l89;
        case 1: goto $l87;
    }
    $l89:;
    abort();
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index93;
    panda$collections$IdentityMap$Entry* e95 = NULL;
    panda$collections$IdentityMap$Entry* $tmp96;
    panda$collections$IdentityMap$Entry* $tmp103;
    panda$collections$IdentityMap$Entry* $tmp104;
    panda$core$Bit $returnValue105;
    int $tmp92;
    {
        panda$core$Int64 $tmp94 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index93 = $tmp94;
        $tmp96 = self->contents[index93.value];
        e95 = $tmp96;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
        $l97:;
        bool $tmp100 = ((panda$core$Bit) { e95 != NULL }).value;
        if (!$tmp100) goto $l101;
        $tmp100 = ((panda$core$Bit) { e95->key != p_key }).value;
        $l101:;
        panda$core$Bit $tmp102 = { $tmp100 };
        bool $tmp99 = $tmp102.value;
        if (!$tmp99) goto $l98;
        {
            {
                $tmp103 = e95;
                $tmp104 = e95->next;
                e95 = $tmp104;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp103));
            }
        }
        goto $l97;
        $l98:;
        $returnValue105 = ((panda$core$Bit) { e95 != NULL });
        $tmp92 = 0;
        goto $l90;
        $l106:;
        return $returnValue105;
    }
    $l90:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e95));
    e95 = NULL;
    switch ($tmp92) {
        case 0: goto $l106;
    }
    $l108:;
    abort();
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$collections$IdentityMap* $tmp112;
    panda$core$Int64 $tmp113;
    panda$core$Int64 index115;
    panda$collections$IdentityMap$Entry* e117 = NULL;
    panda$collections$IdentityMap$Entry* $tmp118;
    panda$collections$IdentityMap$Entry* $tmp125;
    panda$collections$IdentityMap$Entry* $tmp126;
    panda$collections$IdentityMap$Entry* old130 = NULL;
    panda$collections$IdentityMap$Entry* $tmp131;
    panda$collections$IdentityMap$Entry* $tmp132;
    panda$collections$IdentityMap$Entry* $tmp133;
    panda$collections$IdentityMap$Entry* $tmp134;
    panda$collections$IdentityMap$Entry* $tmp136;
    panda$collections$IdentityMap$Entry* $tmp137;
    panda$collections$IdentityMap$Entry** $tmp138;
    panda$core$Int64 $tmp139;
    panda$collections$IdentityMap$Entry* $tmp140;
    panda$core$Object* $tmp142;
    panda$core$Object* $tmp143;
    int $tmp111;
    {
        $tmp112 = self;
        panda$core$Int64$init$builtin_int64(&$tmp113, 1);
        panda$core$Int64 $tmp114 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp112->changeCount, $tmp113);
        $tmp112->changeCount = $tmp114;
        panda$core$Int64 $tmp116 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index115 = $tmp116;
        $tmp118 = self->contents[index115.value];
        e117 = $tmp118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
        $l119:;
        bool $tmp122 = ((panda$core$Bit) { e117 != NULL }).value;
        if (!$tmp122) goto $l123;
        $tmp122 = ((panda$core$Bit) { e117->key != p_key }).value;
        $l123:;
        panda$core$Bit $tmp124 = { $tmp122 };
        bool $tmp121 = $tmp124.value;
        if (!$tmp121) goto $l120;
        {
            {
                $tmp125 = e117;
                $tmp126 = e117->next;
                e117 = $tmp126;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125));
            }
        }
        goto $l119;
        $l120:;
        if (((panda$core$Bit) { e117 == NULL }).value) {
        {
            int $tmp129;
            {
                $tmp131 = self->contents[index115.value];
                old130 = $tmp131;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp131));
                {
                    $tmp132 = e117;
                    panda$collections$IdentityMap$Entry* $tmp135 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
                    panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp135, p_key, p_value);
                    $tmp134 = $tmp135;
                    $tmp133 = $tmp134;
                    e117 = $tmp133;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
                }
                {
                    $tmp136 = e117->next;
                    $tmp137 = old130;
                    e117->next = $tmp137;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
                }
                {
                    $tmp138 = self->contents;
                    $tmp139 = index115;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp138[$tmp139.value]));
                    $tmp140 = e117;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
                    $tmp138[$tmp139.value] = $tmp140;
                }
                panda$collections$IdentityMap$incrementCount(self);
            }
            $tmp129 = -1;
            goto $l127;
            $l127:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old130));
            old130 = NULL;
            switch ($tmp129) {
                case -1: goto $l141;
            }
            $l141:;
        }
        }
        else {
        {
            {
                $tmp142 = e117->value;
                $tmp143 = p_value;
                e117->value = $tmp143;
                panda$core$Panda$ref$panda$core$Object($tmp143);
                panda$core$Panda$unref$panda$core$Object($tmp142);
            }
        }
        }
    }
    $tmp111 = -1;
    goto $l109;
    $l109:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e117));
    e117 = NULL;
    switch ($tmp111) {
        case -1: goto $l144;
    }
    $l144:;
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$collections$IdentityMap* $tmp148;
    panda$core$Int64 $tmp149;
    panda$core$Int64 index151;
    panda$collections$IdentityMap$Entry* e153 = NULL;
    panda$collections$IdentityMap$Entry* $tmp154;
    panda$collections$IdentityMap$Entry** $tmp156;
    panda$core$Int64 $tmp157;
    panda$collections$IdentityMap$Entry* $tmp158;
    panda$collections$IdentityMap* $tmp159;
    panda$core$Int64 $tmp160;
    panda$collections$IdentityMap$Entry* next168 = NULL;
    panda$collections$IdentityMap$Entry* $tmp169;
    panda$collections$IdentityMap$Entry* $tmp173;
    panda$collections$IdentityMap$Entry* $tmp174;
    panda$collections$IdentityMap$Entry* next176 = NULL;
    panda$collections$IdentityMap$Entry* $tmp177;
    panda$collections$IdentityMap$Entry* $tmp181;
    panda$collections$IdentityMap$Entry* $tmp182;
    panda$collections$IdentityMap* $tmp183;
    panda$core$Int64 $tmp184;
    int $tmp147;
    {
        $tmp148 = self;
        panda$core$Int64$init$builtin_int64(&$tmp149, 1);
        panda$core$Int64 $tmp150 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp148->changeCount, $tmp149);
        $tmp148->changeCount = $tmp150;
        panda$core$Int64 $tmp152 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index151 = $tmp152;
        $tmp154 = self->contents[index151.value];
        e153 = $tmp154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
        if (((panda$core$Bit) { e153 == NULL }).value) {
        {
            $tmp147 = 0;
            goto $l145;
            $l155:;
            return;
        }
        }
        if (((panda$core$Bit) { e153->key == p_key }).value) {
        {
            {
                $tmp156 = self->contents;
                $tmp157 = index151;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156[$tmp157.value]));
                $tmp158 = e153->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
                $tmp156[$tmp157.value] = $tmp158;
            }
            $tmp159 = self;
            panda$core$Int64$init$builtin_int64(&$tmp160, 1);
            panda$core$Int64 $tmp161 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp159->_count, $tmp160);
            $tmp159->_count = $tmp161;
            $tmp147 = 1;
            goto $l145;
            $l162:;
            return;
        }
        }
        $l163:;
        while (true) {
        {
            int $tmp167;
            {
                $tmp169 = e153->next;
                next168 = $tmp169;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
                if (((panda$core$Bit) { next168 == NULL }).value) {
                {
                    $tmp167 = 0;
                    goto $l165;
                    $l170:;
                    $tmp147 = 2;
                    goto $l145;
                    $l171:;
                    return;
                }
                }
                if (((panda$core$Bit) { next168->key == p_key }).value) {
                {
                    $tmp167 = 1;
                    goto $l165;
                    $l172:;
                    goto $l164;
                }
                }
                {
                    $tmp173 = e153;
                    $tmp174 = next168;
                    e153 = $tmp174;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
                }
            }
            $tmp167 = -1;
            goto $l165;
            $l165:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next168));
            next168 = NULL;
            switch ($tmp167) {
                case 1: goto $l172;
                case -1: goto $l175;
                case 0: goto $l170;
            }
            $l175:;
        }
        }
        $l164:;
        $tmp177 = e153->next;
        next176 = $tmp177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
        if (((panda$core$Bit) { next176 != NULL }).value) goto $l178; else goto $l179;
        $l179:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s180, (panda$core$Int64) { 157 });
        abort();
        $l178:;
        {
            $tmp181 = e153->next;
            $tmp182 = next176->next;
            e153->next = $tmp182;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
        }
        $tmp183 = self;
        panda$core$Int64$init$builtin_int64(&$tmp184, 1);
        panda$core$Int64 $tmp185 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp183->_count, $tmp184);
        $tmp183->_count = $tmp185;
    }
    $tmp147 = -1;
    goto $l145;
    $l145:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next176));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e153));
    e153 = NULL;
    next176 = NULL;
    switch ($tmp147) {
        case 2: goto $l171;
        case -1: goto $l186;
        case 1: goto $l162;
        case 0: goto $l155;
    }
    $l186:;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap* $tmp187;
    panda$core$Int64 $tmp188;
    panda$core$Int64 $tmp190;
    panda$core$Range$LTpanda$core$Int64$GT $tmp191;
    panda$core$Int64 $tmp192;
    panda$core$Bit $tmp193;
    panda$core$Int64 $tmp213;
    panda$core$Range$LTpanda$core$Int64$GT $tmp214;
    panda$core$Int64 $tmp215;
    panda$core$Bit $tmp216;
    panda$collections$IdentityMap$Entry** $tmp230;
    panda$core$Int64 $tmp231;
    panda$collections$IdentityMap$Entry* $tmp232;
    panda$core$Int64 $tmp239;
    panda$core$Int64 $tmp241;
    $tmp187 = self;
    panda$core$Int64$init$builtin_int64(&$tmp188, 1);
    panda$core$Int64 $tmp189 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp187->changeCount, $tmp188);
    $tmp187->changeCount = $tmp189;
    panda$core$Int64$init$builtin_int64(&$tmp190, 0);
    self->_count = $tmp190;
    panda$core$Int64$init$builtin_int64(&$tmp192, 0);
    panda$core$Bit$init$builtin_bit(&$tmp193, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp191, $tmp192, self->bucketCount, $tmp193);
    int64_t $tmp195 = $tmp191.min.value;
    panda$core$Int64 i194 = { $tmp195 };
    int64_t $tmp197 = $tmp191.max.value;
    bool $tmp198 = $tmp191.inclusive.value;
    if ($tmp198) goto $l205; else goto $l206;
    $l205:;
    if ($tmp195 <= $tmp197) goto $l199; else goto $l201;
    $l206:;
    if ($tmp195 < $tmp197) goto $l199; else goto $l201;
    $l199:;
    {
        if (((panda$core$Bit) { self->contents[i194.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i194.value]));
        }
        }
    }
    $l202:;
    int64_t $tmp208 = $tmp197 - i194.value;
    if ($tmp198) goto $l209; else goto $l210;
    $l209:;
    if ((uint64_t) $tmp208 >= 1) goto $l207; else goto $l201;
    $l210:;
    if ((uint64_t) $tmp208 > 1) goto $l207; else goto $l201;
    $l207:;
    i194.value += 1;
    goto $l199;
    $l201:;
    pandaFree(self->contents);
    panda$core$Int64$init$builtin_int64(&$tmp213, 16);
    self->bucketCount = $tmp213;
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp215, 0);
    panda$core$Bit$init$builtin_bit(&$tmp216, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp214, $tmp215, self->bucketCount, $tmp216);
    int64_t $tmp218 = $tmp214.min.value;
    panda$core$Int64 i217 = { $tmp218 };
    int64_t $tmp220 = $tmp214.max.value;
    bool $tmp221 = $tmp214.inclusive.value;
    if ($tmp221) goto $l228; else goto $l229;
    $l228:;
    if ($tmp218 <= $tmp220) goto $l222; else goto $l224;
    $l229:;
    if ($tmp218 < $tmp220) goto $l222; else goto $l224;
    $l222:;
    {
        if (((panda$core$Bit) { self->contents[i217.value] != NULL }).value) {
        {
            {
                $tmp230 = self->contents;
                $tmp231 = i217;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230[$tmp231.value]));
                $tmp232 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
                $tmp230[$tmp231.value] = $tmp232;
            }
        }
        }
    }
    $l225:;
    int64_t $tmp234 = $tmp220 - i217.value;
    if ($tmp221) goto $l235; else goto $l236;
    $l235:;
    if ((uint64_t) $tmp234 >= 1) goto $l233; else goto $l224;
    $l236:;
    if ((uint64_t) $tmp234 > 1) goto $l233; else goto $l224;
    $l233:;
    i217.value += 1;
    goto $l222;
    $l224:;
    panda$core$Int64$init$builtin_int64(&$tmp239, 3);
    panda$core$Int64 $tmp240 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp239);
    panda$core$Int64$init$builtin_int64(&$tmp241, 4);
    panda$core$Int64 $tmp242 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp240, $tmp241);
    self->threshold = $tmp242;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap* $tmp243;
    panda$core$Int64 $tmp244;
    panda$collections$IdentityMap$Entry** oldContents247;
    panda$core$Int64 oldBucketCount248;
    panda$collections$IdentityMap* $tmp249;
    panda$core$Int64 $tmp250;
    panda$core$Range$LTpanda$core$Int64$GT $tmp252;
    panda$core$Int64 $tmp253;
    panda$core$Bit $tmp254;
    panda$collections$IdentityMap$Entry** $tmp268;
    panda$core$Int64 $tmp269;
    panda$collections$IdentityMap$Entry* $tmp270;
    panda$collections$IdentityMap* $tmp277;
    panda$core$Int64 $tmp278;
    panda$core$Int64 $tmp280;
    panda$core$Range$LTpanda$core$Int64$GT $tmp281;
    panda$core$Int64 $tmp282;
    panda$core$Bit $tmp283;
    panda$collections$IdentityMap$Entry* e300 = NULL;
    panda$collections$IdentityMap$Entry* $tmp301;
    panda$collections$IdentityMap$Entry* $tmp305;
    panda$collections$IdentityMap$Entry* $tmp306;
    panda$core$Range$LTpanda$core$Int64$GT $tmp314;
    panda$core$Int64 $tmp315;
    panda$core$Bit $tmp316;
    $tmp243 = self;
    panda$core$Int64$init$builtin_int64(&$tmp244, 1);
    panda$core$Int64 $tmp245 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp243->_count, $tmp244);
    $tmp243->_count = $tmp245;
    panda$core$Bit $tmp246 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp246.value) {
    {
        oldContents247 = self->contents;
        oldBucketCount248 = self->bucketCount;
        $tmp249 = self;
        panda$core$Int64$init$builtin_int64(&$tmp250, 2);
        panda$core$Int64 $tmp251 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp249->bucketCount, $tmp250);
        $tmp249->bucketCount = $tmp251;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Int64$init$builtin_int64(&$tmp253, 0);
        panda$core$Bit$init$builtin_bit(&$tmp254, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp252, $tmp253, self->bucketCount, $tmp254);
        int64_t $tmp256 = $tmp252.min.value;
        panda$core$Int64 i255 = { $tmp256 };
        int64_t $tmp258 = $tmp252.max.value;
        bool $tmp259 = $tmp252.inclusive.value;
        if ($tmp259) goto $l266; else goto $l267;
        $l266:;
        if ($tmp256 <= $tmp258) goto $l260; else goto $l262;
        $l267:;
        if ($tmp256 < $tmp258) goto $l260; else goto $l262;
        $l260:;
        {
            {
                $tmp268 = self->contents;
                $tmp269 = i255;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268[$tmp269.value]));
                $tmp270 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
                $tmp268[$tmp269.value] = $tmp270;
            }
        }
        $l263:;
        int64_t $tmp272 = $tmp258 - i255.value;
        if ($tmp259) goto $l273; else goto $l274;
        $l273:;
        if ((uint64_t) $tmp272 >= 1) goto $l271; else goto $l262;
        $l274:;
        if ((uint64_t) $tmp272 > 1) goto $l271; else goto $l262;
        $l271:;
        i255.value += 1;
        goto $l260;
        $l262:;
        $tmp277 = self;
        panda$core$Int64$init$builtin_int64(&$tmp278, 2);
        panda$core$Int64 $tmp279 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp277->threshold, $tmp278);
        $tmp277->threshold = $tmp279;
        panda$core$Int64$init$builtin_int64(&$tmp280, 0);
        self->_count = $tmp280;
        panda$core$Int64$init$builtin_int64(&$tmp282, 0);
        panda$core$Bit$init$builtin_bit(&$tmp283, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp281, $tmp282, oldBucketCount248, $tmp283);
        int64_t $tmp285 = $tmp281.min.value;
        panda$core$Int64 i284 = { $tmp285 };
        int64_t $tmp287 = $tmp281.max.value;
        bool $tmp288 = $tmp281.inclusive.value;
        if ($tmp288) goto $l295; else goto $l296;
        $l295:;
        if ($tmp285 <= $tmp287) goto $l289; else goto $l291;
        $l296:;
        if ($tmp285 < $tmp287) goto $l289; else goto $l291;
        $l289:;
        {
            int $tmp299;
            {
                $tmp301 = oldContents247[i284.value];
                e300 = $tmp301;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
                $l302:;
                bool $tmp304 = ((panda$core$Bit) { e300 != NULL }).value;
                if (!$tmp304) goto $l303;
                {
                    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e300->key, e300->value);
                    {
                        $tmp305 = e300;
                        $tmp306 = e300->next;
                        e300 = $tmp306;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
                    }
                }
                goto $l302;
                $l303:;
            }
            $tmp299 = -1;
            goto $l297;
            $l297:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e300));
            e300 = NULL;
            switch ($tmp299) {
                case -1: goto $l307;
            }
            $l307:;
        }
        $l292:;
        int64_t $tmp309 = $tmp287 - i284.value;
        if ($tmp288) goto $l310; else goto $l311;
        $l310:;
        if ((uint64_t) $tmp309 >= 1) goto $l308; else goto $l291;
        $l311:;
        if ((uint64_t) $tmp309 > 1) goto $l308; else goto $l291;
        $l308:;
        i284.value += 1;
        goto $l289;
        $l291:;
        panda$core$Int64$init$builtin_int64(&$tmp315, 0);
        panda$core$Bit$init$builtin_bit(&$tmp316, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp314, $tmp315, oldBucketCount248, $tmp316);
        int64_t $tmp318 = $tmp314.min.value;
        panda$core$Int64 i317 = { $tmp318 };
        int64_t $tmp320 = $tmp314.max.value;
        bool $tmp321 = $tmp314.inclusive.value;
        if ($tmp321) goto $l328; else goto $l329;
        $l328:;
        if ($tmp318 <= $tmp320) goto $l322; else goto $l324;
        $l329:;
        if ($tmp318 < $tmp320) goto $l322; else goto $l324;
        $l322:;
        {
            if (((panda$core$Bit) { oldContents247[i317.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents247[i317.value]));
            }
            }
        }
        $l325:;
        int64_t $tmp331 = $tmp320 - i317.value;
        if ($tmp321) goto $l332; else goto $l333;
        $l332:;
        if ((uint64_t) $tmp331 >= 1) goto $l330; else goto $l324;
        $l333:;
        if ((uint64_t) $tmp331 > 1) goto $l330; else goto $l324;
        $l330:;
        i317.value += 1;
        goto $l322;
        $l324:;
        pandaFree(oldContents247);
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    panda$core$Int64 $returnValue336;
    $returnValue336 = self->_count;
    return $returnValue336;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
    panda$core$Bit $tmp338;
    panda$core$Bit$init$builtin_bit(&$tmp338, false);
    if ($tmp338.value) goto $l339; else goto $l340;
    $l340:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s341, (panda$core$Int64) { 217 }, &$s342);
    abort();
    $l339:;
    abort();
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
    panda$core$Bit $tmp343;
    panda$core$Bit$init$builtin_bit(&$tmp343, false);
    if ($tmp343.value) goto $l344; else goto $l345;
    $l345:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s346, (panda$core$Int64) { 222 }, &$s347);
    abort();
    $l344:;
    abort();
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result351 = NULL;
    panda$core$MutableString* $tmp352;
    panda$core$MutableString* $tmp353;
    panda$core$Char8 $tmp355;
    panda$core$UInt8 $tmp356;
    panda$core$String* separator357 = NULL;
    panda$core$String* $tmp358;
    panda$core$Range$LTpanda$core$Int64$GT $tmp360;
    panda$core$Int64 $tmp361;
    panda$core$Bit $tmp362;
    panda$collections$IdentityMap$Entry* entry379 = NULL;
    panda$collections$IdentityMap$Entry* $tmp380;
    panda$core$Char8 $tmp385;
    panda$core$UInt8 $tmp386;
    panda$collections$IdentityMap$Entry* $tmp388;
    panda$collections$IdentityMap$Entry* $tmp389;
    panda$core$String* $tmp390;
    panda$core$String* $tmp391;
    panda$core$Char8 $tmp400;
    panda$core$UInt8 $tmp401;
    panda$core$String* $returnValue402;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    int $tmp350;
    {
        panda$core$MutableString* $tmp354 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp354);
        $tmp353 = $tmp354;
        $tmp352 = $tmp353;
        result351 = $tmp352;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp352));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp353));
        panda$core$UInt8$init$builtin_uint8(&$tmp356, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp355, $tmp356);
        panda$core$MutableString$append$panda$core$Char8(result351, $tmp355);
        $tmp358 = &$s359;
        separator357 = $tmp358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
        panda$core$Int64$init$builtin_int64(&$tmp361, 0);
        panda$core$Bit$init$builtin_bit(&$tmp362, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp360, $tmp361, self->bucketCount, $tmp362);
        int64_t $tmp364 = $tmp360.min.value;
        panda$core$Int64 i363 = { $tmp364 };
        int64_t $tmp366 = $tmp360.max.value;
        bool $tmp367 = $tmp360.inclusive.value;
        if ($tmp367) goto $l374; else goto $l375;
        $l374:;
        if ($tmp364 <= $tmp366) goto $l368; else goto $l370;
        $l375:;
        if ($tmp364 < $tmp366) goto $l368; else goto $l370;
        $l368:;
        {
            int $tmp378;
            {
                $tmp380 = self->contents[i363.value];
                entry379 = $tmp380;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
                $l381:;
                bool $tmp383 = ((panda$core$Bit) { entry379 != NULL }).value;
                if (!$tmp383) goto $l382;
                {
                    panda$core$MutableString$append$panda$core$String(result351, separator357);
                    if (((panda$core$Bit) { entry379->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result351, entry379->key);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result351, &$s384);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp386, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp385, $tmp386);
                    panda$core$MutableString$append$panda$core$Char8(result351, $tmp385);
                    if (((panda$core$Bit) { entry379->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result351, entry379->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result351, &$s387);
                    }
                    }
                    {
                        $tmp388 = entry379;
                        $tmp389 = entry379->next;
                        entry379 = $tmp389;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp389));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp388));
                    }
                    {
                        $tmp390 = separator357;
                        $tmp391 = &$s392;
                        separator357 = $tmp391;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp391));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp390));
                    }
                }
                goto $l381;
                $l382:;
            }
            $tmp378 = -1;
            goto $l376;
            $l376:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry379));
            entry379 = NULL;
            switch ($tmp378) {
                case -1: goto $l393;
            }
            $l393:;
        }
        $l371:;
        int64_t $tmp395 = $tmp366 - i363.value;
        if ($tmp367) goto $l396; else goto $l397;
        $l396:;
        if ((uint64_t) $tmp395 >= 1) goto $l394; else goto $l370;
        $l397:;
        if ((uint64_t) $tmp395 > 1) goto $l394; else goto $l370;
        $l394:;
        i363.value += 1;
        goto $l368;
        $l370:;
        panda$core$UInt8$init$builtin_uint8(&$tmp401, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp400, $tmp401);
        panda$core$MutableString$append$panda$core$Char8(result351, $tmp400);
        panda$core$String* $tmp405 = panda$core$MutableString$finish$R$panda$core$String(result351);
        $tmp404 = $tmp405;
        $tmp403 = $tmp404;
        $returnValue402 = $tmp403;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
        $tmp350 = 0;
        goto $l348;
        $l406:;
        return $returnValue402;
    }
    $l348:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator357));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result351));
    result351 = NULL;
    separator357 = NULL;
    switch ($tmp350) {
        case 0: goto $l406;
    }
    $l408:;
    abort();
}

