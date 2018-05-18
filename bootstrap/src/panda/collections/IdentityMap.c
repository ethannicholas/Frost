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
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim(panda$collections$IdentityMap* self, panda$core$Object* p0, panda$core$Object* p1) {
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, p0, p1);
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim(panda$collections$IdentityMap* self, panda$core$Object* p0) {
    panda$core$Object* result = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self, p0);
    return result;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim(panda$collections$IdentityMap* self) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(self);
    return result;
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim(panda$collections$IdentityMap* self) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$IdentityMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$IdentityMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapWriter, { panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$IdentityMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapView, { } };

static panda$core$String $s1;
panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$Map, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$collections$IdentityMap$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    panda$collections$IdentityMap$Entry** $tmp17;
    panda$core$Int64 $tmp18;
    panda$collections$IdentityMap$Entry* $tmp19;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp2;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp5 = $tmp3.min.value;
    panda$core$Int64 i4 = { $tmp5 };
    int64_t $tmp7 = $tmp3.max.value;
    bool $tmp8 = $tmp3.inclusive.value;
    if ($tmp8) goto $l15; else goto $l16;
    $l15:;
    if ($tmp5 <= $tmp7) goto $l9; else goto $l11;
    $l16:;
    if ($tmp5 < $tmp7) goto $l9; else goto $l11;
    $l9:;
    {
        {
            $tmp17 = self->contents;
            $tmp18 = i4;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17[$tmp18.value]));
            $tmp19 = NULL;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
            $tmp17[$tmp18.value] = $tmp19;
        }
    }
    $l12:;
    int64_t $tmp21 = $tmp7 - i4.value;
    if ($tmp8) goto $l22; else goto $l23;
    $l22:;
    if ((uint64_t) $tmp21 >= 1) goto $l20; else goto $l11;
    $l23:;
    if ((uint64_t) $tmp21 > 1) goto $l20; else goto $l11;
    $l20:;
    i4.value += 1;
    goto $l9;
    $l11:;
    panda$core$Int64 $tmp26 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp27 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp26, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp27;
}
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp31;
    int $tmp30;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp31, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp33 = $tmp31.min.value;
        panda$core$Int64 i32 = { $tmp33 };
        int64_t $tmp35 = $tmp31.max.value;
        bool $tmp36 = $tmp31.inclusive.value;
        if ($tmp36) goto $l43; else goto $l44;
        $l43:;
        if ($tmp33 <= $tmp35) goto $l37; else goto $l39;
        $l44:;
        if ($tmp33 < $tmp35) goto $l37; else goto $l39;
        $l37:;
        {
            if (((panda$core$Bit) { self->contents[i32.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i32.value]));
            }
            }
        }
        $l40:;
        int64_t $tmp46 = $tmp35 - i32.value;
        if ($tmp36) goto $l47; else goto $l48;
        $l47:;
        if ((uint64_t) $tmp46 >= 1) goto $l45; else goto $l39;
        $l48:;
        if ((uint64_t) $tmp46 > 1) goto $l45; else goto $l39;
        $l45:;
        i32.value += 1;
        goto $l37;
        $l39:;
        pandaFree(self->contents);
    }
    $tmp30 = -1;
    goto $l28;
    $l28:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp30) {
        case -1: goto $l51;
    }
    $l51:;
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $finallyReturn51;
    panda$core$Int64 $tmp53;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp53, p_key);
    panda$core$Int64 $tmp54 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp53, self->bucketCount);
    $finallyReturn51 = $tmp54;
    return $finallyReturn51;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index59;
    panda$collections$IdentityMap$Entry* e61 = NULL;
    panda$collections$IdentityMap$Entry* $tmp62;
    panda$collections$IdentityMap$Entry* $tmp69;
    panda$collections$IdentityMap$Entry* $tmp70;
    panda$core$Object* $finallyReturn70;
    panda$core$Object* $tmp72;
    panda$core$Object* $finallyReturn74;
    panda$core$Object* $tmp76;
    int $tmp58;
    {
        panda$core$Int64 $tmp60 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index59 = $tmp60;
        $tmp62 = self->contents[index59.value];
        e61 = $tmp62;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
        $l63:;
        bool $tmp66 = ((panda$core$Bit) { e61 != NULL }).value;
        if (!$tmp66) goto $l67;
        $tmp66 = ((panda$core$Bit) { e61->key != p_key }).value;
        $l67:;
        panda$core$Bit $tmp68 = { $tmp66 };
        bool $tmp65 = $tmp68.value;
        if (!$tmp65) goto $l64;
        {
            {
                $tmp69 = e61;
                $tmp70 = e61->next;
                e61 = $tmp70;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp69));
            }
        }
        goto $l63;
        $l64:;
        if (((panda$core$Bit) { e61 != NULL }).value) {
        {
            $tmp72 = e61->value;
            $finallyReturn70 = $tmp72;
            panda$core$Panda$ref$panda$core$Object($tmp72);
            $tmp58 = 0;
            goto $l56;
            $l73:;
            return $finallyReturn70;
        }
        }
        else {
        {
            $tmp76 = NULL;
            $finallyReturn74 = $tmp76;
            panda$core$Panda$ref$panda$core$Object($tmp76);
            $tmp58 = 1;
            goto $l56;
            $l77:;
            return $finallyReturn74;
        }
        }
    }
    $tmp58 = -1;
    goto $l56;
    $l56:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e61));
    e61 = NULL;
    switch ($tmp58) {
        case -1: goto $l79;
        case 0: goto $l73;
        case 1: goto $l77;
    }
    $l79:;
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index83;
    panda$collections$IdentityMap$Entry* e85 = NULL;
    panda$collections$IdentityMap$Entry* $tmp86;
    panda$collections$IdentityMap$Entry* $tmp93;
    panda$collections$IdentityMap$Entry* $tmp94;
    panda$core$Bit $finallyReturn94;
    int $tmp82;
    {
        panda$core$Int64 $tmp84 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index83 = $tmp84;
        $tmp86 = self->contents[index83.value];
        e85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        $l87:;
        bool $tmp90 = ((panda$core$Bit) { e85 != NULL }).value;
        if (!$tmp90) goto $l91;
        $tmp90 = ((panda$core$Bit) { e85->key != p_key }).value;
        $l91:;
        panda$core$Bit $tmp92 = { $tmp90 };
        bool $tmp89 = $tmp92.value;
        if (!$tmp89) goto $l88;
        {
            {
                $tmp93 = e85;
                $tmp94 = e85->next;
                e85 = $tmp94;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
            }
        }
        goto $l87;
        $l88:;
        $finallyReturn94 = ((panda$core$Bit) { e85 != NULL });
        $tmp82 = 0;
        goto $l80;
        $l96:;
        return $finallyReturn94;
    }
    $l80:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e85));
    e85 = NULL;
    switch ($tmp82) {
        case 0: goto $l96;
    }
    $l98:;
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index103;
    panda$collections$IdentityMap$Entry* e105 = NULL;
    panda$collections$IdentityMap$Entry* $tmp106;
    panda$collections$IdentityMap$Entry* $tmp113;
    panda$collections$IdentityMap$Entry* $tmp114;
    panda$collections$IdentityMap$Entry* old118 = NULL;
    panda$collections$IdentityMap$Entry* $tmp119;
    panda$collections$IdentityMap$Entry* $tmp120;
    panda$collections$IdentityMap$Entry* $tmp121;
    panda$collections$IdentityMap$Entry* $tmp122;
    panda$collections$IdentityMap$Entry* $tmp124;
    panda$collections$IdentityMap$Entry* $tmp125;
    panda$collections$IdentityMap$Entry** $tmp126;
    panda$core$Int64 $tmp127;
    panda$collections$IdentityMap$Entry* $tmp128;
    panda$core$Object* $tmp130;
    panda$core$Object* $tmp131;
    int $tmp101;
    {
        panda$core$Int64 $tmp102 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp102;
        panda$core$Int64 $tmp104 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index103 = $tmp104;
        $tmp106 = self->contents[index103.value];
        e105 = $tmp106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
        $l107:;
        bool $tmp110 = ((panda$core$Bit) { e105 != NULL }).value;
        if (!$tmp110) goto $l111;
        $tmp110 = ((panda$core$Bit) { e105->key != p_key }).value;
        $l111:;
        panda$core$Bit $tmp112 = { $tmp110 };
        bool $tmp109 = $tmp112.value;
        if (!$tmp109) goto $l108;
        {
            {
                $tmp113 = e105;
                $tmp114 = e105->next;
                e105 = $tmp114;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
            }
        }
        goto $l107;
        $l108:;
        if (((panda$core$Bit) { e105 == NULL }).value) {
        {
            int $tmp117;
            {
                $tmp119 = self->contents[index103.value];
                old118 = $tmp119;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
                {
                    $tmp120 = e105;
                    panda$collections$IdentityMap$Entry* $tmp123 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
                    panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp123, p_key, p_value);
                    $tmp122 = $tmp123;
                    $tmp121 = $tmp122;
                    e105 = $tmp121;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
                }
                {
                    $tmp124 = e105->next;
                    $tmp125 = old118;
                    e105->next = $tmp125;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
                }
                {
                    $tmp126 = self->contents;
                    $tmp127 = index103;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp126[$tmp127.value]));
                    $tmp128 = e105;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
                    $tmp126[$tmp127.value] = $tmp128;
                }
                panda$collections$IdentityMap$incrementCount(self);
            }
            $tmp117 = -1;
            goto $l115;
            $l115:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old118));
            old118 = NULL;
            switch ($tmp117) {
                case -1: goto $l129;
            }
            $l129:;
        }
        }
        else {
        {
            {
                $tmp130 = e105->value;
                $tmp131 = p_value;
                e105->value = $tmp131;
                panda$core$Panda$ref$panda$core$Object($tmp131);
                panda$core$Panda$unref$panda$core$Object($tmp130);
            }
        }
        }
    }
    $tmp101 = -1;
    goto $l99;
    $l99:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e105));
    e105 = NULL;
    switch ($tmp101) {
        case -1: goto $l132;
    }
    $l132:;
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index137;
    panda$collections$IdentityMap$Entry* e139 = NULL;
    panda$collections$IdentityMap$Entry* $tmp140;
    panda$collections$IdentityMap$Entry** $tmp142;
    panda$core$Int64 $tmp143;
    panda$collections$IdentityMap$Entry* $tmp144;
    panda$collections$IdentityMap$Entry* next152 = NULL;
    panda$collections$IdentityMap$Entry* $tmp153;
    panda$collections$IdentityMap$Entry* $tmp157;
    panda$collections$IdentityMap$Entry* $tmp158;
    panda$collections$IdentityMap$Entry* next160 = NULL;
    panda$collections$IdentityMap$Entry* $tmp161;
    panda$collections$IdentityMap$Entry* $tmp162;
    panda$collections$IdentityMap$Entry* $tmp163;
    int $tmp135;
    {
        panda$core$Int64 $tmp136 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp136;
        panda$core$Int64 $tmp138 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index137 = $tmp138;
        $tmp140 = self->contents[index137.value];
        e139 = $tmp140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp140));
        if (((panda$core$Bit) { e139 == NULL }).value) {
        {
            $tmp135 = 0;
            goto $l133;
            $l141:;
            return;
        }
        }
        if (((panda$core$Bit) { e139->key == p_key }).value) {
        {
            {
                $tmp142 = self->contents;
                $tmp143 = index137;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142[$tmp143.value]));
                $tmp144 = e139->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
                $tmp142[$tmp143.value] = $tmp144;
            }
            panda$core$Int64 $tmp145 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
            self->_count = $tmp145;
            $tmp135 = 1;
            goto $l133;
            $l146:;
            return;
        }
        }
        $l147:;
        while (true) {
        {
            int $tmp151;
            {
                $tmp153 = e139->next;
                next152 = $tmp153;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp153));
                if (((panda$core$Bit) { next152 == NULL }).value) {
                {
                    $tmp151 = 0;
                    goto $l149;
                    $l154:;
                    $tmp135 = 2;
                    goto $l133;
                    $l155:;
                    return;
                }
                }
                if (((panda$core$Bit) { next152->key == p_key }).value) {
                {
                    $tmp151 = 1;
                    goto $l149;
                    $l156:;
                    goto $l148;
                }
                }
                {
                    $tmp157 = e139;
                    $tmp158 = next152;
                    e139 = $tmp158;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
                }
            }
            $tmp151 = -1;
            goto $l149;
            $l149:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next152));
            next152 = NULL;
            switch ($tmp151) {
                case 0: goto $l154;
                case -1: goto $l159;
                case 1: goto $l156;
            }
            $l159:;
        }
        }
        $l148:;
        $tmp161 = e139->next;
        next160 = $tmp161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
        PANDA_ASSERT(((panda$core$Bit) { next160 != NULL }).value);
        {
            $tmp162 = e139->next;
            $tmp163 = next160->next;
            e139->next = $tmp163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
        }
        panda$core$Int64 $tmp164 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp164;
    }
    $tmp135 = -1;
    goto $l133;
    $l133:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e139));
    e139 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next160));
    next160 = NULL;
    switch ($tmp135) {
        case -1: goto $l165;
        case 1: goto $l146;
        case 2: goto $l155;
        case 0: goto $l141;
    }
    $l165:;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp167;
    panda$core$Range$LTpanda$core$Int64$GT $tmp187;
    panda$collections$IdentityMap$Entry** $tmp201;
    panda$core$Int64 $tmp202;
    panda$collections$IdentityMap$Entry* $tmp203;
    panda$core$Int64 $tmp166 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp166;
    self->_count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp167, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp169 = $tmp167.min.value;
    panda$core$Int64 i168 = { $tmp169 };
    int64_t $tmp171 = $tmp167.max.value;
    bool $tmp172 = $tmp167.inclusive.value;
    if ($tmp172) goto $l179; else goto $l180;
    $l179:;
    if ($tmp169 <= $tmp171) goto $l173; else goto $l175;
    $l180:;
    if ($tmp169 < $tmp171) goto $l173; else goto $l175;
    $l173:;
    {
        if (((panda$core$Bit) { self->contents[i168.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i168.value]));
        }
        }
    }
    $l176:;
    int64_t $tmp182 = $tmp171 - i168.value;
    if ($tmp172) goto $l183; else goto $l184;
    $l183:;
    if ((uint64_t) $tmp182 >= 1) goto $l181; else goto $l175;
    $l184:;
    if ((uint64_t) $tmp182 > 1) goto $l181; else goto $l175;
    $l181:;
    i168.value += 1;
    goto $l173;
    $l175:;
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp187, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp189 = $tmp187.min.value;
    panda$core$Int64 i188 = { $tmp189 };
    int64_t $tmp191 = $tmp187.max.value;
    bool $tmp192 = $tmp187.inclusive.value;
    if ($tmp192) goto $l199; else goto $l200;
    $l199:;
    if ($tmp189 <= $tmp191) goto $l193; else goto $l195;
    $l200:;
    if ($tmp189 < $tmp191) goto $l193; else goto $l195;
    $l193:;
    {
        if (((panda$core$Bit) { self->contents[i188.value] != NULL }).value) {
        {
            {
                $tmp201 = self->contents;
                $tmp202 = i188;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201[$tmp202.value]));
                $tmp203 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
                $tmp201[$tmp202.value] = $tmp203;
            }
        }
        }
    }
    $l196:;
    int64_t $tmp205 = $tmp191 - i188.value;
    if ($tmp192) goto $l206; else goto $l207;
    $l206:;
    if ((uint64_t) $tmp205 >= 1) goto $l204; else goto $l195;
    $l207:;
    if ((uint64_t) $tmp205 > 1) goto $l204; else goto $l195;
    $l204:;
    i188.value += 1;
    goto $l193;
    $l195:;
    panda$core$Int64 $tmp210 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp211 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp210, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp211;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents214;
    panda$core$Int64 oldBucketCount215;
    panda$core$Range$LTpanda$core$Int64$GT $tmp217;
    panda$collections$IdentityMap$Entry** $tmp231;
    panda$core$Int64 $tmp232;
    panda$collections$IdentityMap$Entry* $tmp233;
    panda$core$Range$LTpanda$core$Int64$GT $tmp241;
    panda$collections$IdentityMap$Entry* e258 = NULL;
    panda$collections$IdentityMap$Entry* $tmp259;
    panda$collections$IdentityMap$Entry* $tmp263;
    panda$collections$IdentityMap$Entry* $tmp264;
    panda$core$Range$LTpanda$core$Int64$GT $tmp272;
    panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp212;
    panda$core$Bit $tmp213 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp213.value) {
    {
        oldContents214 = self->contents;
        oldBucketCount215 = self->bucketCount;
        panda$core$Int64 $tmp216 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp216;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp217, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp219 = $tmp217.min.value;
        panda$core$Int64 i218 = { $tmp219 };
        int64_t $tmp221 = $tmp217.max.value;
        bool $tmp222 = $tmp217.inclusive.value;
        if ($tmp222) goto $l229; else goto $l230;
        $l229:;
        if ($tmp219 <= $tmp221) goto $l223; else goto $l225;
        $l230:;
        if ($tmp219 < $tmp221) goto $l223; else goto $l225;
        $l223:;
        {
            {
                $tmp231 = self->contents;
                $tmp232 = i218;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp231[$tmp232.value]));
                $tmp233 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
                $tmp231[$tmp232.value] = $tmp233;
            }
        }
        $l226:;
        int64_t $tmp235 = $tmp221 - i218.value;
        if ($tmp222) goto $l236; else goto $l237;
        $l236:;
        if ((uint64_t) $tmp235 >= 1) goto $l234; else goto $l225;
        $l237:;
        if ((uint64_t) $tmp235 > 1) goto $l234; else goto $l225;
        $l234:;
        i218.value += 1;
        goto $l223;
        $l225:;
        panda$core$Int64 $tmp240 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp240;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp241, ((panda$core$Int64) { 0 }), oldBucketCount215, ((panda$core$Bit) { false }));
        int64_t $tmp243 = $tmp241.min.value;
        panda$core$Int64 i242 = { $tmp243 };
        int64_t $tmp245 = $tmp241.max.value;
        bool $tmp246 = $tmp241.inclusive.value;
        if ($tmp246) goto $l253; else goto $l254;
        $l253:;
        if ($tmp243 <= $tmp245) goto $l247; else goto $l249;
        $l254:;
        if ($tmp243 < $tmp245) goto $l247; else goto $l249;
        $l247:;
        {
            int $tmp257;
            {
                $tmp259 = oldContents214[i242.value];
                e258 = $tmp259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
                $l260:;
                bool $tmp262 = ((panda$core$Bit) { e258 != NULL }).value;
                if (!$tmp262) goto $l261;
                {
                    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e258->key, e258->value);
                    {
                        $tmp263 = e258;
                        $tmp264 = e258->next;
                        e258 = $tmp264;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
                    }
                }
                goto $l260;
                $l261:;
            }
            $tmp257 = -1;
            goto $l255;
            $l255:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e258));
            e258 = NULL;
            switch ($tmp257) {
                case -1: goto $l265;
            }
            $l265:;
        }
        $l250:;
        int64_t $tmp267 = $tmp245 - i242.value;
        if ($tmp246) goto $l268; else goto $l269;
        $l268:;
        if ((uint64_t) $tmp267 >= 1) goto $l266; else goto $l249;
        $l269:;
        if ((uint64_t) $tmp267 > 1) goto $l266; else goto $l249;
        $l266:;
        i242.value += 1;
        goto $l247;
        $l249:;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp272, ((panda$core$Int64) { 0 }), oldBucketCount215, ((panda$core$Bit) { false }));
        int64_t $tmp274 = $tmp272.min.value;
        panda$core$Int64 i273 = { $tmp274 };
        int64_t $tmp276 = $tmp272.max.value;
        bool $tmp277 = $tmp272.inclusive.value;
        if ($tmp277) goto $l284; else goto $l285;
        $l284:;
        if ($tmp274 <= $tmp276) goto $l278; else goto $l280;
        $l285:;
        if ($tmp274 < $tmp276) goto $l278; else goto $l280;
        $l278:;
        {
            if (((panda$core$Bit) { oldContents214[i273.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents214[i273.value]));
            }
            }
        }
        $l281:;
        int64_t $tmp287 = $tmp276 - i273.value;
        if ($tmp277) goto $l288; else goto $l289;
        $l288:;
        if ((uint64_t) $tmp287 >= 1) goto $l286; else goto $l280;
        $l289:;
        if ((uint64_t) $tmp287 > 1) goto $l286; else goto $l280;
        $l286:;
        i273.value += 1;
        goto $l278;
        $l280:;
        pandaFree(oldContents214);
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    panda$core$Int64 $finallyReturn291;
    $finallyReturn291 = self->_count;
    return $finallyReturn291;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result297 = NULL;
    panda$core$MutableString* $tmp298;
    panda$core$MutableString* $tmp299;
    panda$core$Char8 $tmp301;
    panda$core$String* separator302 = NULL;
    panda$core$String* $tmp303;
    panda$core$Range$LTpanda$core$Int64$GT $tmp305;
    panda$collections$IdentityMap$Entry* entry322 = NULL;
    panda$collections$IdentityMap$Entry* $tmp323;
    panda$core$Char8 $tmp328;
    panda$collections$IdentityMap$Entry* $tmp330;
    panda$collections$IdentityMap$Entry* $tmp331;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$Char8 $tmp342;
    panda$core$String* $finallyReturn342;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    int $tmp296;
    {
        panda$core$MutableString* $tmp300 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp300);
        $tmp299 = $tmp300;
        $tmp298 = $tmp299;
        result297 = $tmp298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
        panda$core$Char8$init$panda$core$UInt8(&$tmp301, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result297, $tmp301);
        $tmp303 = &$s304;
        separator302 = $tmp303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp305, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp307 = $tmp305.min.value;
        panda$core$Int64 i306 = { $tmp307 };
        int64_t $tmp309 = $tmp305.max.value;
        bool $tmp310 = $tmp305.inclusive.value;
        if ($tmp310) goto $l317; else goto $l318;
        $l317:;
        if ($tmp307 <= $tmp309) goto $l311; else goto $l313;
        $l318:;
        if ($tmp307 < $tmp309) goto $l311; else goto $l313;
        $l311:;
        {
            int $tmp321;
            {
                $tmp323 = self->contents[i306.value];
                entry322 = $tmp323;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
                $l324:;
                bool $tmp326 = ((panda$core$Bit) { entry322 != NULL }).value;
                if (!$tmp326) goto $l325;
                {
                    panda$core$MutableString$append$panda$core$String(result297, separator302);
                    if (((panda$core$Bit) { entry322->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result297, entry322->key);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result297, &$s327);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp328, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result297, $tmp328);
                    if (((panda$core$Bit) { entry322->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result297, entry322->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result297, &$s329);
                    }
                    }
                    {
                        $tmp330 = entry322;
                        $tmp331 = entry322->next;
                        entry322 = $tmp331;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                    }
                    {
                        $tmp332 = separator302;
                        $tmp333 = &$s334;
                        separator302 = $tmp333;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp332));
                    }
                }
                goto $l324;
                $l325:;
            }
            $tmp321 = -1;
            goto $l319;
            $l319:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry322));
            entry322 = NULL;
            switch ($tmp321) {
                case -1: goto $l335;
            }
            $l335:;
        }
        $l314:;
        int64_t $tmp337 = $tmp309 - i306.value;
        if ($tmp310) goto $l338; else goto $l339;
        $l338:;
        if ((uint64_t) $tmp337 >= 1) goto $l336; else goto $l313;
        $l339:;
        if ((uint64_t) $tmp337 > 1) goto $l336; else goto $l313;
        $l336:;
        i306.value += 1;
        goto $l311;
        $l313:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp342, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result297, $tmp342);
        panda$core$String* $tmp346 = panda$core$MutableString$finish$R$panda$core$String(result297);
        $tmp345 = $tmp346;
        $tmp344 = $tmp345;
        $finallyReturn342 = $tmp344;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
        $tmp296 = 0;
        goto $l294;
        $l347:;
        return $finallyReturn342;
    }
    $l294:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result297));
    result297 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator302));
    separator302 = NULL;
    switch ($tmp296) {
        case 0: goto $l347;
    }
    $l349:;
}

