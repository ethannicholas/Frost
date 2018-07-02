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
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s188 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    if (false) goto $l90; else goto $l91;
    $l91:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s92, (panda$core$Int64) { 86 }, &$s93);
    abort();
    $l90:;
    abort();
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index97;
    panda$collections$IdentityMap$Entry* e99 = NULL;
    panda$collections$IdentityMap$Entry* $tmp100;
    panda$collections$IdentityMap$Entry* $tmp107;
    panda$collections$IdentityMap$Entry* $tmp108;
    panda$core$Bit $returnValue109;
    int $tmp96;
    {
        panda$core$Int64 $tmp98 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index97 = $tmp98;
        $tmp100 = self->contents[index97.value];
        e99 = $tmp100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
        $l101:;
        bool $tmp104 = ((panda$core$Bit) { e99 != NULL }).value;
        if (!$tmp104) goto $l105;
        $tmp104 = ((panda$core$Bit) { e99->key != p_key }).value;
        $l105:;
        panda$core$Bit $tmp106 = { $tmp104 };
        bool $tmp103 = $tmp106.value;
        if (!$tmp103) goto $l102;
        {
            {
                $tmp107 = e99;
                $tmp108 = e99->next;
                e99 = $tmp108;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
            }
        }
        goto $l101;
        $l102:;
        $returnValue109 = ((panda$core$Bit) { e99 != NULL });
        $tmp96 = 0;
        goto $l94;
        $l110:;
        return $returnValue109;
    }
    $l94:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e99));
    e99 = NULL;
    switch ($tmp96) {
        case 0: goto $l110;
    }
    $l112:;
    if (false) goto $l113; else goto $l114;
    $l114:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s115, (panda$core$Int64) { 100 }, &$s116);
    abort();
    $l113:;
    abort();
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$collections$IdentityMap* $tmp120;
    panda$core$Int64 $tmp121;
    panda$core$Int64 index123;
    panda$collections$IdentityMap$Entry* e125 = NULL;
    panda$collections$IdentityMap$Entry* $tmp126;
    panda$collections$IdentityMap$Entry* $tmp133;
    panda$collections$IdentityMap$Entry* $tmp134;
    panda$collections$IdentityMap$Entry* old138 = NULL;
    panda$collections$IdentityMap$Entry* $tmp139;
    panda$collections$IdentityMap$Entry* $tmp140;
    panda$collections$IdentityMap$Entry* $tmp141;
    panda$collections$IdentityMap$Entry* $tmp142;
    panda$collections$IdentityMap$Entry* $tmp144;
    panda$collections$IdentityMap$Entry* $tmp145;
    panda$collections$IdentityMap$Entry** $tmp146;
    panda$core$Int64 $tmp147;
    panda$collections$IdentityMap$Entry* $tmp148;
    panda$core$Object* $tmp150;
    panda$core$Object* $tmp151;
    int $tmp119;
    {
        $tmp120 = self;
        panda$core$Int64$init$builtin_int64(&$tmp121, 1);
        panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp120->changeCount, $tmp121);
        $tmp120->changeCount = $tmp122;
        panda$core$Int64 $tmp124 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index123 = $tmp124;
        $tmp126 = self->contents[index123.value];
        e125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        $l127:;
        bool $tmp130 = ((panda$core$Bit) { e125 != NULL }).value;
        if (!$tmp130) goto $l131;
        $tmp130 = ((panda$core$Bit) { e125->key != p_key }).value;
        $l131:;
        panda$core$Bit $tmp132 = { $tmp130 };
        bool $tmp129 = $tmp132.value;
        if (!$tmp129) goto $l128;
        {
            {
                $tmp133 = e125;
                $tmp134 = e125->next;
                e125 = $tmp134;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp133));
            }
        }
        goto $l127;
        $l128:;
        if (((panda$core$Bit) { e125 == NULL }).value) {
        {
            int $tmp137;
            {
                $tmp139 = self->contents[index123.value];
                old138 = $tmp139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
                {
                    $tmp140 = e125;
                    panda$collections$IdentityMap$Entry* $tmp143 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
                    panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp143, p_key, p_value);
                    $tmp142 = $tmp143;
                    $tmp141 = $tmp142;
                    e125 = $tmp141;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
                }
                {
                    $tmp144 = e125->next;
                    $tmp145 = old138;
                    e125->next = $tmp145;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp145));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
                }
                {
                    $tmp146 = self->contents;
                    $tmp147 = index123;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146[$tmp147.value]));
                    $tmp148 = e125;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
                    $tmp146[$tmp147.value] = $tmp148;
                }
                panda$collections$IdentityMap$incrementCount(self);
            }
            $tmp137 = -1;
            goto $l135;
            $l135:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old138));
            old138 = NULL;
            switch ($tmp137) {
                case -1: goto $l149;
            }
            $l149:;
        }
        }
        else {
        {
            {
                $tmp150 = e125->value;
                $tmp151 = p_value;
                e125->value = $tmp151;
                panda$core$Panda$ref$panda$core$Object($tmp151);
                panda$core$Panda$unref$panda$core$Object($tmp150);
            }
        }
        }
    }
    $tmp119 = -1;
    goto $l117;
    $l117:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e125));
    e125 = NULL;
    switch ($tmp119) {
        case -1: goto $l152;
    }
    $l152:;
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$collections$IdentityMap* $tmp156;
    panda$core$Int64 $tmp157;
    panda$core$Int64 index159;
    panda$collections$IdentityMap$Entry* e161 = NULL;
    panda$collections$IdentityMap$Entry* $tmp162;
    panda$collections$IdentityMap$Entry** $tmp164;
    panda$core$Int64 $tmp165;
    panda$collections$IdentityMap$Entry* $tmp166;
    panda$collections$IdentityMap* $tmp167;
    panda$core$Int64 $tmp168;
    panda$collections$IdentityMap$Entry* next176 = NULL;
    panda$collections$IdentityMap$Entry* $tmp177;
    panda$collections$IdentityMap$Entry* $tmp181;
    panda$collections$IdentityMap$Entry* $tmp182;
    panda$collections$IdentityMap$Entry* next184 = NULL;
    panda$collections$IdentityMap$Entry* $tmp185;
    panda$collections$IdentityMap$Entry* $tmp189;
    panda$collections$IdentityMap$Entry* $tmp190;
    panda$collections$IdentityMap* $tmp191;
    panda$core$Int64 $tmp192;
    int $tmp155;
    {
        $tmp156 = self;
        panda$core$Int64$init$builtin_int64(&$tmp157, 1);
        panda$core$Int64 $tmp158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp156->changeCount, $tmp157);
        $tmp156->changeCount = $tmp158;
        panda$core$Int64 $tmp160 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index159 = $tmp160;
        $tmp162 = self->contents[index159.value];
        e161 = $tmp162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
        if (((panda$core$Bit) { e161 == NULL }).value) {
        {
            $tmp155 = 0;
            goto $l153;
            $l163:;
            return;
        }
        }
        if (((panda$core$Bit) { e161->key == p_key }).value) {
        {
            {
                $tmp164 = self->contents;
                $tmp165 = index159;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164[$tmp165.value]));
                $tmp166 = e161->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
                $tmp164[$tmp165.value] = $tmp166;
            }
            $tmp167 = self;
            panda$core$Int64$init$builtin_int64(&$tmp168, 1);
            panda$core$Int64 $tmp169 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp167->_count, $tmp168);
            $tmp167->_count = $tmp169;
            $tmp155 = 1;
            goto $l153;
            $l170:;
            return;
        }
        }
        $l171:;
        while (true) {
        {
            int $tmp175;
            {
                $tmp177 = e161->next;
                next176 = $tmp177;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
                if (((panda$core$Bit) { next176 == NULL }).value) {
                {
                    $tmp175 = 0;
                    goto $l173;
                    $l178:;
                    $tmp155 = 2;
                    goto $l153;
                    $l179:;
                    return;
                }
                }
                if (((panda$core$Bit) { next176->key == p_key }).value) {
                {
                    $tmp175 = 1;
                    goto $l173;
                    $l180:;
                    goto $l172;
                }
                }
                {
                    $tmp181 = e161;
                    $tmp182 = next176;
                    e161 = $tmp182;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                }
            }
            $tmp175 = -1;
            goto $l173;
            $l173:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next176));
            next176 = NULL;
            switch ($tmp175) {
                case 0: goto $l178;
                case 1: goto $l180;
                case -1: goto $l183;
            }
            $l183:;
        }
        }
        $l172:;
        $tmp185 = e161->next;
        next184 = $tmp185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
        if (((panda$core$Bit) { next184 != NULL }).value) goto $l186; else goto $l187;
        $l187:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s188, (panda$core$Int64) { 157 });
        abort();
        $l186:;
        {
            $tmp189 = e161->next;
            $tmp190 = next184->next;
            e161->next = $tmp190;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp190));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp189));
        }
        $tmp191 = self;
        panda$core$Int64$init$builtin_int64(&$tmp192, 1);
        panda$core$Int64 $tmp193 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp191->_count, $tmp192);
        $tmp191->_count = $tmp193;
    }
    $tmp155 = -1;
    goto $l153;
    $l153:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next184));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e161));
    e161 = NULL;
    next184 = NULL;
    switch ($tmp155) {
        case -1: goto $l194;
        case 1: goto $l170;
        case 2: goto $l179;
        case 0: goto $l163;
    }
    $l194:;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap* $tmp195;
    panda$core$Int64 $tmp196;
    panda$core$Int64 $tmp198;
    panda$core$Range$LTpanda$core$Int64$GT $tmp199;
    panda$core$Int64 $tmp200;
    panda$core$Bit $tmp201;
    panda$core$Int64 $tmp221;
    panda$core$Range$LTpanda$core$Int64$GT $tmp222;
    panda$core$Int64 $tmp223;
    panda$core$Bit $tmp224;
    panda$collections$IdentityMap$Entry** $tmp238;
    panda$core$Int64 $tmp239;
    panda$collections$IdentityMap$Entry* $tmp240;
    panda$core$Int64 $tmp247;
    panda$core$Int64 $tmp249;
    $tmp195 = self;
    panda$core$Int64$init$builtin_int64(&$tmp196, 1);
    panda$core$Int64 $tmp197 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp195->changeCount, $tmp196);
    $tmp195->changeCount = $tmp197;
    panda$core$Int64$init$builtin_int64(&$tmp198, 0);
    self->_count = $tmp198;
    panda$core$Int64$init$builtin_int64(&$tmp200, 0);
    panda$core$Bit$init$builtin_bit(&$tmp201, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp199, $tmp200, self->bucketCount, $tmp201);
    int64_t $tmp203 = $tmp199.min.value;
    panda$core$Int64 i202 = { $tmp203 };
    int64_t $tmp205 = $tmp199.max.value;
    bool $tmp206 = $tmp199.inclusive.value;
    if ($tmp206) goto $l213; else goto $l214;
    $l213:;
    if ($tmp203 <= $tmp205) goto $l207; else goto $l209;
    $l214:;
    if ($tmp203 < $tmp205) goto $l207; else goto $l209;
    $l207:;
    {
        if (((panda$core$Bit) { self->contents[i202.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i202.value]));
        }
        }
    }
    $l210:;
    int64_t $tmp216 = $tmp205 - i202.value;
    if ($tmp206) goto $l217; else goto $l218;
    $l217:;
    if ((uint64_t) $tmp216 >= 1) goto $l215; else goto $l209;
    $l218:;
    if ((uint64_t) $tmp216 > 1) goto $l215; else goto $l209;
    $l215:;
    i202.value += 1;
    goto $l207;
    $l209:;
    pandaFree(self->contents);
    panda$core$Int64$init$builtin_int64(&$tmp221, 16);
    self->bucketCount = $tmp221;
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Int64$init$builtin_int64(&$tmp223, 0);
    panda$core$Bit$init$builtin_bit(&$tmp224, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp222, $tmp223, self->bucketCount, $tmp224);
    int64_t $tmp226 = $tmp222.min.value;
    panda$core$Int64 i225 = { $tmp226 };
    int64_t $tmp228 = $tmp222.max.value;
    bool $tmp229 = $tmp222.inclusive.value;
    if ($tmp229) goto $l236; else goto $l237;
    $l236:;
    if ($tmp226 <= $tmp228) goto $l230; else goto $l232;
    $l237:;
    if ($tmp226 < $tmp228) goto $l230; else goto $l232;
    $l230:;
    {
        if (((panda$core$Bit) { self->contents[i225.value] != NULL }).value) {
        {
            {
                $tmp238 = self->contents;
                $tmp239 = i225;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp238[$tmp239.value]));
                $tmp240 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp240));
                $tmp238[$tmp239.value] = $tmp240;
            }
        }
        }
    }
    $l233:;
    int64_t $tmp242 = $tmp228 - i225.value;
    if ($tmp229) goto $l243; else goto $l244;
    $l243:;
    if ((uint64_t) $tmp242 >= 1) goto $l241; else goto $l232;
    $l244:;
    if ((uint64_t) $tmp242 > 1) goto $l241; else goto $l232;
    $l241:;
    i225.value += 1;
    goto $l230;
    $l232:;
    panda$core$Int64$init$builtin_int64(&$tmp247, 3);
    panda$core$Int64 $tmp248 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp247);
    panda$core$Int64$init$builtin_int64(&$tmp249, 4);
    panda$core$Int64 $tmp250 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp248, $tmp249);
    self->threshold = $tmp250;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap* $tmp251;
    panda$core$Int64 $tmp252;
    panda$collections$IdentityMap$Entry** oldContents255;
    panda$core$Int64 oldBucketCount256;
    panda$collections$IdentityMap* $tmp257;
    panda$core$Int64 $tmp258;
    panda$core$Range$LTpanda$core$Int64$GT $tmp260;
    panda$core$Int64 $tmp261;
    panda$core$Bit $tmp262;
    panda$collections$IdentityMap$Entry** $tmp276;
    panda$core$Int64 $tmp277;
    panda$collections$IdentityMap$Entry* $tmp278;
    panda$collections$IdentityMap* $tmp285;
    panda$core$Int64 $tmp286;
    panda$core$Int64 $tmp288;
    panda$core$Range$LTpanda$core$Int64$GT $tmp289;
    panda$core$Int64 $tmp290;
    panda$core$Bit $tmp291;
    panda$collections$IdentityMap$Entry* e308 = NULL;
    panda$collections$IdentityMap$Entry* $tmp309;
    panda$collections$IdentityMap$Entry* $tmp313;
    panda$collections$IdentityMap$Entry* $tmp314;
    panda$core$Range$LTpanda$core$Int64$GT $tmp322;
    panda$core$Int64 $tmp323;
    panda$core$Bit $tmp324;
    $tmp251 = self;
    panda$core$Int64$init$builtin_int64(&$tmp252, 1);
    panda$core$Int64 $tmp253 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp251->_count, $tmp252);
    $tmp251->_count = $tmp253;
    panda$core$Bit $tmp254 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp254.value) {
    {
        oldContents255 = self->contents;
        oldBucketCount256 = self->bucketCount;
        $tmp257 = self;
        panda$core$Int64$init$builtin_int64(&$tmp258, 2);
        panda$core$Int64 $tmp259 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp257->bucketCount, $tmp258);
        $tmp257->bucketCount = $tmp259;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
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
            {
                $tmp276 = self->contents;
                $tmp277 = i263;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276[$tmp277.value]));
                $tmp278 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
                $tmp276[$tmp277.value] = $tmp278;
            }
        }
        $l271:;
        int64_t $tmp280 = $tmp266 - i263.value;
        if ($tmp267) goto $l281; else goto $l282;
        $l281:;
        if ((uint64_t) $tmp280 >= 1) goto $l279; else goto $l270;
        $l282:;
        if ((uint64_t) $tmp280 > 1) goto $l279; else goto $l270;
        $l279:;
        i263.value += 1;
        goto $l268;
        $l270:;
        $tmp285 = self;
        panda$core$Int64$init$builtin_int64(&$tmp286, 2);
        panda$core$Int64 $tmp287 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp285->threshold, $tmp286);
        $tmp285->threshold = $tmp287;
        panda$core$Int64$init$builtin_int64(&$tmp288, 0);
        self->_count = $tmp288;
        panda$core$Int64$init$builtin_int64(&$tmp290, 0);
        panda$core$Bit$init$builtin_bit(&$tmp291, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp289, $tmp290, oldBucketCount256, $tmp291);
        int64_t $tmp293 = $tmp289.min.value;
        panda$core$Int64 i292 = { $tmp293 };
        int64_t $tmp295 = $tmp289.max.value;
        bool $tmp296 = $tmp289.inclusive.value;
        if ($tmp296) goto $l303; else goto $l304;
        $l303:;
        if ($tmp293 <= $tmp295) goto $l297; else goto $l299;
        $l304:;
        if ($tmp293 < $tmp295) goto $l297; else goto $l299;
        $l297:;
        {
            int $tmp307;
            {
                $tmp309 = oldContents255[i292.value];
                e308 = $tmp309;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
                $l310:;
                bool $tmp312 = ((panda$core$Bit) { e308 != NULL }).value;
                if (!$tmp312) goto $l311;
                {
                    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e308->key, e308->value);
                    {
                        $tmp313 = e308;
                        $tmp314 = e308->next;
                        e308 = $tmp314;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
                    }
                }
                goto $l310;
                $l311:;
            }
            $tmp307 = -1;
            goto $l305;
            $l305:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e308));
            e308 = NULL;
            switch ($tmp307) {
                case -1: goto $l315;
            }
            $l315:;
        }
        $l300:;
        int64_t $tmp317 = $tmp295 - i292.value;
        if ($tmp296) goto $l318; else goto $l319;
        $l318:;
        if ((uint64_t) $tmp317 >= 1) goto $l316; else goto $l299;
        $l319:;
        if ((uint64_t) $tmp317 > 1) goto $l316; else goto $l299;
        $l316:;
        i292.value += 1;
        goto $l297;
        $l299:;
        panda$core$Int64$init$builtin_int64(&$tmp323, 0);
        panda$core$Bit$init$builtin_bit(&$tmp324, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp322, $tmp323, oldBucketCount256, $tmp324);
        int64_t $tmp326 = $tmp322.min.value;
        panda$core$Int64 i325 = { $tmp326 };
        int64_t $tmp328 = $tmp322.max.value;
        bool $tmp329 = $tmp322.inclusive.value;
        if ($tmp329) goto $l336; else goto $l337;
        $l336:;
        if ($tmp326 <= $tmp328) goto $l330; else goto $l332;
        $l337:;
        if ($tmp326 < $tmp328) goto $l330; else goto $l332;
        $l330:;
        {
            if (((panda$core$Bit) { oldContents255[i325.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents255[i325.value]));
            }
            }
        }
        $l333:;
        int64_t $tmp339 = $tmp328 - i325.value;
        if ($tmp329) goto $l340; else goto $l341;
        $l340:;
        if ((uint64_t) $tmp339 >= 1) goto $l338; else goto $l332;
        $l341:;
        if ((uint64_t) $tmp339 > 1) goto $l338; else goto $l332;
        $l338:;
        i325.value += 1;
        goto $l330;
        $l332:;
        pandaFree(oldContents255);
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    panda$core$Int64 $returnValue344;
    $returnValue344 = self->_count;
    return $returnValue344;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
    panda$core$Bit $tmp346;
    panda$core$Bit$init$builtin_bit(&$tmp346, false);
    if ($tmp346.value) goto $l347; else goto $l348;
    $l348:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s349, (panda$core$Int64) { 217 }, &$s350);
    abort();
    $l347:;
    if (false) goto $l351; else goto $l352;
    $l352:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s353, (panda$core$Int64) { 216 }, &$s354);
    abort();
    $l351:;
    abort();
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
    panda$core$Bit $tmp355;
    panda$core$Bit$init$builtin_bit(&$tmp355, false);
    if ($tmp355.value) goto $l356; else goto $l357;
    $l357:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s358, (panda$core$Int64) { 222 }, &$s359);
    abort();
    $l356:;
    if (false) goto $l360; else goto $l361;
    $l361:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s362, (panda$core$Int64) { 221 }, &$s363);
    abort();
    $l360:;
    abort();
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result367 = NULL;
    panda$core$MutableString* $tmp368;
    panda$core$MutableString* $tmp369;
    panda$core$Char8 $tmp371;
    panda$core$UInt8 $tmp372;
    panda$core$String* separator373 = NULL;
    panda$core$String* $tmp374;
    panda$core$Range$LTpanda$core$Int64$GT $tmp376;
    panda$core$Int64 $tmp377;
    panda$core$Bit $tmp378;
    panda$collections$IdentityMap$Entry* entry395 = NULL;
    panda$collections$IdentityMap$Entry* $tmp396;
    panda$core$Char8 $tmp401;
    panda$core$UInt8 $tmp402;
    panda$collections$IdentityMap$Entry* $tmp404;
    panda$collections$IdentityMap$Entry* $tmp405;
    panda$core$String* $tmp406;
    panda$core$String* $tmp407;
    panda$core$Char8 $tmp416;
    panda$core$UInt8 $tmp417;
    panda$core$String* $returnValue418;
    panda$core$String* $tmp419;
    panda$core$String* $tmp420;
    int $tmp366;
    {
        panda$core$MutableString* $tmp370 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp370);
        $tmp369 = $tmp370;
        $tmp368 = $tmp369;
        result367 = $tmp368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
        panda$core$UInt8$init$builtin_uint8(&$tmp372, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp371, $tmp372);
        panda$core$MutableString$append$panda$core$Char8(result367, $tmp371);
        $tmp374 = &$s375;
        separator373 = $tmp374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp374));
        panda$core$Int64$init$builtin_int64(&$tmp377, 0);
        panda$core$Bit$init$builtin_bit(&$tmp378, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp376, $tmp377, self->bucketCount, $tmp378);
        int64_t $tmp380 = $tmp376.min.value;
        panda$core$Int64 i379 = { $tmp380 };
        int64_t $tmp382 = $tmp376.max.value;
        bool $tmp383 = $tmp376.inclusive.value;
        if ($tmp383) goto $l390; else goto $l391;
        $l390:;
        if ($tmp380 <= $tmp382) goto $l384; else goto $l386;
        $l391:;
        if ($tmp380 < $tmp382) goto $l384; else goto $l386;
        $l384:;
        {
            int $tmp394;
            {
                $tmp396 = self->contents[i379.value];
                entry395 = $tmp396;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
                $l397:;
                bool $tmp399 = ((panda$core$Bit) { entry395 != NULL }).value;
                if (!$tmp399) goto $l398;
                {
                    panda$core$MutableString$append$panda$core$String(result367, separator373);
                    if (((panda$core$Bit) { entry395->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result367, entry395->key);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result367, &$s400);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp402, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp401, $tmp402);
                    panda$core$MutableString$append$panda$core$Char8(result367, $tmp401);
                    if (((panda$core$Bit) { entry395->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result367, entry395->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result367, &$s403);
                    }
                    }
                    {
                        $tmp404 = entry395;
                        $tmp405 = entry395->next;
                        entry395 = $tmp405;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp405));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                    }
                    {
                        $tmp406 = separator373;
                        $tmp407 = &$s408;
                        separator373 = $tmp407;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp407));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp406));
                    }
                }
                goto $l397;
                $l398:;
            }
            $tmp394 = -1;
            goto $l392;
            $l392:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry395));
            entry395 = NULL;
            switch ($tmp394) {
                case -1: goto $l409;
            }
            $l409:;
        }
        $l387:;
        int64_t $tmp411 = $tmp382 - i379.value;
        if ($tmp383) goto $l412; else goto $l413;
        $l412:;
        if ((uint64_t) $tmp411 >= 1) goto $l410; else goto $l386;
        $l413:;
        if ((uint64_t) $tmp411 > 1) goto $l410; else goto $l386;
        $l410:;
        i379.value += 1;
        goto $l384;
        $l386:;
        panda$core$UInt8$init$builtin_uint8(&$tmp417, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp416, $tmp417);
        panda$core$MutableString$append$panda$core$Char8(result367, $tmp416);
        panda$core$String* $tmp421 = panda$core$MutableString$finish$R$panda$core$String(result367);
        $tmp420 = $tmp421;
        $tmp419 = $tmp420;
        $returnValue418 = $tmp419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
        $tmp366 = 0;
        goto $l364;
        $l422:;
        return $returnValue418;
    }
    $l364:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator373));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result367));
    result367 = NULL;
    separator373 = NULL;
    switch ($tmp366) {
        case 0: goto $l422;
    }
    $l424:;
    if (false) goto $l425; else goto $l426;
    $l426:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s427, (panda$core$Int64) { 232 }, &$s428);
    abort();
    $l425:;
    abort();
}

