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
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    panda$core$Int64 $returnValue52;
    panda$core$Int64 $tmp53;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp53, p_key);
    panda$core$Int64 $tmp54 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp53, self->bucketCount);
    $returnValue52 = $tmp54;
    return $returnValue52;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index59;
    panda$collections$IdentityMap$Entry* e61 = NULL;
    panda$collections$IdentityMap$Entry* $tmp62;
    panda$collections$IdentityMap$Entry* $tmp69;
    panda$collections$IdentityMap$Entry* $tmp70;
    panda$core$Object* $returnValue71;
    panda$core$Object* $tmp72;
    panda$core$Object* $tmp75;
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
            $returnValue71 = $tmp72;
            panda$core$Panda$ref$panda$core$Object($tmp72);
            $tmp58 = 0;
            goto $l56;
            $l73:;
            return $returnValue71;
        }
        }
        else {
        {
            $tmp75 = NULL;
            $returnValue71 = $tmp75;
            panda$core$Panda$ref$panda$core$Object($tmp75);
            $tmp58 = 1;
            goto $l56;
            $l76:;
            return $returnValue71;
        }
        }
    }
    $tmp58 = -1;
    goto $l56;
    $l56:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e61));
    e61 = NULL;
    switch ($tmp58) {
        case -1: goto $l78;
        case 0: goto $l73;
        case 1: goto $l76;
    }
    $l78:;
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index82;
    panda$collections$IdentityMap$Entry* e84 = NULL;
    panda$collections$IdentityMap$Entry* $tmp85;
    panda$collections$IdentityMap$Entry* $tmp92;
    panda$collections$IdentityMap$Entry* $tmp93;
    panda$core$Bit $returnValue94;
    int $tmp81;
    {
        panda$core$Int64 $tmp83 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index82 = $tmp83;
        $tmp85 = self->contents[index82.value];
        e84 = $tmp85;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
        $l86:;
        bool $tmp89 = ((panda$core$Bit) { e84 != NULL }).value;
        if (!$tmp89) goto $l90;
        $tmp89 = ((panda$core$Bit) { e84->key != p_key }).value;
        $l90:;
        panda$core$Bit $tmp91 = { $tmp89 };
        bool $tmp88 = $tmp91.value;
        if (!$tmp88) goto $l87;
        {
            {
                $tmp92 = e84;
                $tmp93 = e84->next;
                e84 = $tmp93;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
            }
        }
        goto $l86;
        $l87:;
        $returnValue94 = ((panda$core$Bit) { e84 != NULL });
        $tmp81 = 0;
        goto $l79;
        $l95:;
        return $returnValue94;
    }
    $l79:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e84));
    e84 = NULL;
    switch ($tmp81) {
        case 0: goto $l95;
    }
    $l97:;
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index102;
    panda$collections$IdentityMap$Entry* e104 = NULL;
    panda$collections$IdentityMap$Entry* $tmp105;
    panda$collections$IdentityMap$Entry* $tmp112;
    panda$collections$IdentityMap$Entry* $tmp113;
    panda$collections$IdentityMap$Entry* old117 = NULL;
    panda$collections$IdentityMap$Entry* $tmp118;
    panda$collections$IdentityMap$Entry* $tmp119;
    panda$collections$IdentityMap$Entry* $tmp120;
    panda$collections$IdentityMap$Entry* $tmp121;
    panda$collections$IdentityMap$Entry* $tmp123;
    panda$collections$IdentityMap$Entry* $tmp124;
    panda$collections$IdentityMap$Entry** $tmp125;
    panda$core$Int64 $tmp126;
    panda$collections$IdentityMap$Entry* $tmp127;
    panda$core$Object* $tmp129;
    panda$core$Object* $tmp130;
    int $tmp100;
    {
        panda$core$Int64 $tmp101 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp101;
        panda$core$Int64 $tmp103 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index102 = $tmp103;
        $tmp105 = self->contents[index102.value];
        e104 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        $l106:;
        bool $tmp109 = ((panda$core$Bit) { e104 != NULL }).value;
        if (!$tmp109) goto $l110;
        $tmp109 = ((panda$core$Bit) { e104->key != p_key }).value;
        $l110:;
        panda$core$Bit $tmp111 = { $tmp109 };
        bool $tmp108 = $tmp111.value;
        if (!$tmp108) goto $l107;
        {
            {
                $tmp112 = e104;
                $tmp113 = e104->next;
                e104 = $tmp113;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp112));
            }
        }
        goto $l106;
        $l107:;
        if (((panda$core$Bit) { e104 == NULL }).value) {
        {
            int $tmp116;
            {
                $tmp118 = self->contents[index102.value];
                old117 = $tmp118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
                {
                    $tmp119 = e104;
                    panda$collections$IdentityMap$Entry* $tmp122 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
                    panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp122, p_key, p_value);
                    $tmp121 = $tmp122;
                    $tmp120 = $tmp121;
                    e104 = $tmp120;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
                }
                {
                    $tmp123 = e104->next;
                    $tmp124 = old117;
                    e104->next = $tmp124;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
                }
                {
                    $tmp125 = self->contents;
                    $tmp126 = index102;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp125[$tmp126.value]));
                    $tmp127 = e104;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
                    $tmp125[$tmp126.value] = $tmp127;
                }
                panda$collections$IdentityMap$incrementCount(self);
            }
            $tmp116 = -1;
            goto $l114;
            $l114:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old117));
            old117 = NULL;
            switch ($tmp116) {
                case -1: goto $l128;
            }
            $l128:;
        }
        }
        else {
        {
            {
                $tmp129 = e104->value;
                $tmp130 = p_value;
                e104->value = $tmp130;
                panda$core$Panda$ref$panda$core$Object($tmp130);
                panda$core$Panda$unref$panda$core$Object($tmp129);
            }
        }
        }
    }
    $tmp100 = -1;
    goto $l98;
    $l98:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e104));
    e104 = NULL;
    switch ($tmp100) {
        case -1: goto $l131;
    }
    $l131:;
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index136;
    panda$collections$IdentityMap$Entry* e138 = NULL;
    panda$collections$IdentityMap$Entry* $tmp139;
    panda$collections$IdentityMap$Entry** $tmp141;
    panda$core$Int64 $tmp142;
    panda$collections$IdentityMap$Entry* $tmp143;
    panda$collections$IdentityMap$Entry* next151 = NULL;
    panda$collections$IdentityMap$Entry* $tmp152;
    panda$collections$IdentityMap$Entry* $tmp156;
    panda$collections$IdentityMap$Entry* $tmp157;
    panda$collections$IdentityMap$Entry* next159 = NULL;
    panda$collections$IdentityMap$Entry* $tmp160;
    panda$collections$IdentityMap$Entry* $tmp161;
    panda$collections$IdentityMap$Entry* $tmp162;
    int $tmp134;
    {
        panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp135;
        panda$core$Int64 $tmp137 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index136 = $tmp137;
        $tmp139 = self->contents[index136.value];
        e138 = $tmp139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
        if (((panda$core$Bit) { e138 == NULL }).value) {
        {
            $tmp134 = 0;
            goto $l132;
            $l140:;
            return;
        }
        }
        if (((panda$core$Bit) { e138->key == p_key }).value) {
        {
            {
                $tmp141 = self->contents;
                $tmp142 = index136;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp141[$tmp142.value]));
                $tmp143 = e138->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
                $tmp141[$tmp142.value] = $tmp143;
            }
            panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
            self->_count = $tmp144;
            $tmp134 = 1;
            goto $l132;
            $l145:;
            return;
        }
        }
        $l146:;
        while (true) {
        {
            int $tmp150;
            {
                $tmp152 = e138->next;
                next151 = $tmp152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
                if (((panda$core$Bit) { next151 == NULL }).value) {
                {
                    $tmp150 = 0;
                    goto $l148;
                    $l153:;
                    $tmp134 = 2;
                    goto $l132;
                    $l154:;
                    return;
                }
                }
                if (((panda$core$Bit) { next151->key == p_key }).value) {
                {
                    $tmp150 = 1;
                    goto $l148;
                    $l155:;
                    goto $l147;
                }
                }
                {
                    $tmp156 = e138;
                    $tmp157 = next151;
                    e138 = $tmp157;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp157));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156));
                }
            }
            $tmp150 = -1;
            goto $l148;
            $l148:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next151));
            next151 = NULL;
            switch ($tmp150) {
                case 0: goto $l153;
                case 1: goto $l155;
                case -1: goto $l158;
            }
            $l158:;
        }
        }
        $l147:;
        $tmp160 = e138->next;
        next159 = $tmp160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
        PANDA_ASSERT(((panda$core$Bit) { next159 != NULL }).value);
        {
            $tmp161 = e138->next;
            $tmp162 = next159->next;
            e138->next = $tmp162;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161));
        }
        panda$core$Int64 $tmp163 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp163;
    }
    $tmp134 = -1;
    goto $l132;
    $l132:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e138));
    e138 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next159));
    next159 = NULL;
    switch ($tmp134) {
        case -1: goto $l164;
        case 1: goto $l145;
        case 2: goto $l154;
        case 0: goto $l140;
    }
    $l164:;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp166;
    panda$core$Range$LTpanda$core$Int64$GT $tmp186;
    panda$collections$IdentityMap$Entry** $tmp200;
    panda$core$Int64 $tmp201;
    panda$collections$IdentityMap$Entry* $tmp202;
    panda$core$Int64 $tmp165 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp165;
    self->_count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp166, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp168 = $tmp166.min.value;
    panda$core$Int64 i167 = { $tmp168 };
    int64_t $tmp170 = $tmp166.max.value;
    bool $tmp171 = $tmp166.inclusive.value;
    if ($tmp171) goto $l178; else goto $l179;
    $l178:;
    if ($tmp168 <= $tmp170) goto $l172; else goto $l174;
    $l179:;
    if ($tmp168 < $tmp170) goto $l172; else goto $l174;
    $l172:;
    {
        if (((panda$core$Bit) { self->contents[i167.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i167.value]));
        }
        }
    }
    $l175:;
    int64_t $tmp181 = $tmp170 - i167.value;
    if ($tmp171) goto $l182; else goto $l183;
    $l182:;
    if ((uint64_t) $tmp181 >= 1) goto $l180; else goto $l174;
    $l183:;
    if ((uint64_t) $tmp181 > 1) goto $l180; else goto $l174;
    $l180:;
    i167.value += 1;
    goto $l172;
    $l174:;
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp186, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp188 = $tmp186.min.value;
    panda$core$Int64 i187 = { $tmp188 };
    int64_t $tmp190 = $tmp186.max.value;
    bool $tmp191 = $tmp186.inclusive.value;
    if ($tmp191) goto $l198; else goto $l199;
    $l198:;
    if ($tmp188 <= $tmp190) goto $l192; else goto $l194;
    $l199:;
    if ($tmp188 < $tmp190) goto $l192; else goto $l194;
    $l192:;
    {
        if (((panda$core$Bit) { self->contents[i187.value] != NULL }).value) {
        {
            {
                $tmp200 = self->contents;
                $tmp201 = i187;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200[$tmp201.value]));
                $tmp202 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp202));
                $tmp200[$tmp201.value] = $tmp202;
            }
        }
        }
    }
    $l195:;
    int64_t $tmp204 = $tmp190 - i187.value;
    if ($tmp191) goto $l205; else goto $l206;
    $l205:;
    if ((uint64_t) $tmp204 >= 1) goto $l203; else goto $l194;
    $l206:;
    if ((uint64_t) $tmp204 > 1) goto $l203; else goto $l194;
    $l203:;
    i187.value += 1;
    goto $l192;
    $l194:;
    panda$core$Int64 $tmp209 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp210 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp209, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp210;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents213;
    panda$core$Int64 oldBucketCount214;
    panda$core$Range$LTpanda$core$Int64$GT $tmp216;
    panda$collections$IdentityMap$Entry** $tmp230;
    panda$core$Int64 $tmp231;
    panda$collections$IdentityMap$Entry* $tmp232;
    panda$core$Range$LTpanda$core$Int64$GT $tmp240;
    panda$collections$IdentityMap$Entry* e257 = NULL;
    panda$collections$IdentityMap$Entry* $tmp258;
    panda$collections$IdentityMap$Entry* $tmp262;
    panda$collections$IdentityMap$Entry* $tmp263;
    panda$core$Range$LTpanda$core$Int64$GT $tmp271;
    panda$core$Int64 $tmp211 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp211;
    panda$core$Bit $tmp212 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp212.value) {
    {
        oldContents213 = self->contents;
        oldBucketCount214 = self->bucketCount;
        panda$core$Int64 $tmp215 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp215;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp216, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp218 = $tmp216.min.value;
        panda$core$Int64 i217 = { $tmp218 };
        int64_t $tmp220 = $tmp216.max.value;
        bool $tmp221 = $tmp216.inclusive.value;
        if ($tmp221) goto $l228; else goto $l229;
        $l228:;
        if ($tmp218 <= $tmp220) goto $l222; else goto $l224;
        $l229:;
        if ($tmp218 < $tmp220) goto $l222; else goto $l224;
        $l222:;
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
        panda$core$Int64 $tmp239 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp239;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp240, ((panda$core$Int64) { 0 }), oldBucketCount214, ((panda$core$Bit) { false }));
        int64_t $tmp242 = $tmp240.min.value;
        panda$core$Int64 i241 = { $tmp242 };
        int64_t $tmp244 = $tmp240.max.value;
        bool $tmp245 = $tmp240.inclusive.value;
        if ($tmp245) goto $l252; else goto $l253;
        $l252:;
        if ($tmp242 <= $tmp244) goto $l246; else goto $l248;
        $l253:;
        if ($tmp242 < $tmp244) goto $l246; else goto $l248;
        $l246:;
        {
            int $tmp256;
            {
                $tmp258 = oldContents213[i241.value];
                e257 = $tmp258;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp258));
                $l259:;
                bool $tmp261 = ((panda$core$Bit) { e257 != NULL }).value;
                if (!$tmp261) goto $l260;
                {
                    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e257->key, e257->value);
                    {
                        $tmp262 = e257;
                        $tmp263 = e257->next;
                        e257 = $tmp263;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp262));
                    }
                }
                goto $l259;
                $l260:;
            }
            $tmp256 = -1;
            goto $l254;
            $l254:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e257));
            e257 = NULL;
            switch ($tmp256) {
                case -1: goto $l264;
            }
            $l264:;
        }
        $l249:;
        int64_t $tmp266 = $tmp244 - i241.value;
        if ($tmp245) goto $l267; else goto $l268;
        $l267:;
        if ((uint64_t) $tmp266 >= 1) goto $l265; else goto $l248;
        $l268:;
        if ((uint64_t) $tmp266 > 1) goto $l265; else goto $l248;
        $l265:;
        i241.value += 1;
        goto $l246;
        $l248:;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp271, ((panda$core$Int64) { 0 }), oldBucketCount214, ((panda$core$Bit) { false }));
        int64_t $tmp273 = $tmp271.min.value;
        panda$core$Int64 i272 = { $tmp273 };
        int64_t $tmp275 = $tmp271.max.value;
        bool $tmp276 = $tmp271.inclusive.value;
        if ($tmp276) goto $l283; else goto $l284;
        $l283:;
        if ($tmp273 <= $tmp275) goto $l277; else goto $l279;
        $l284:;
        if ($tmp273 < $tmp275) goto $l277; else goto $l279;
        $l277:;
        {
            if (((panda$core$Bit) { oldContents213[i272.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents213[i272.value]));
            }
            }
        }
        $l280:;
        int64_t $tmp286 = $tmp275 - i272.value;
        if ($tmp276) goto $l287; else goto $l288;
        $l287:;
        if ((uint64_t) $tmp286 >= 1) goto $l285; else goto $l279;
        $l288:;
        if ((uint64_t) $tmp286 > 1) goto $l285; else goto $l279;
        $l285:;
        i272.value += 1;
        goto $l277;
        $l279:;
        pandaFree(oldContents213);
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    panda$core$Int64 $returnValue291;
    $returnValue291 = self->_count;
    return $returnValue291;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result296 = NULL;
    panda$core$MutableString* $tmp297;
    panda$core$MutableString* $tmp298;
    panda$core$Char8 $tmp300;
    panda$core$String* separator301 = NULL;
    panda$core$String* $tmp302;
    panda$core$Range$LTpanda$core$Int64$GT $tmp304;
    panda$collections$IdentityMap$Entry* entry321 = NULL;
    panda$collections$IdentityMap$Entry* $tmp322;
    panda$core$Char8 $tmp327;
    panda$collections$IdentityMap$Entry* $tmp329;
    panda$collections$IdentityMap$Entry* $tmp330;
    panda$core$String* $tmp331;
    panda$core$String* $tmp332;
    panda$core$Char8 $tmp341;
    panda$core$String* $returnValue342;
    panda$core$String* $tmp343;
    panda$core$String* $tmp344;
    int $tmp295;
    {
        panda$core$MutableString* $tmp299 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp299);
        $tmp298 = $tmp299;
        $tmp297 = $tmp298;
        result296 = $tmp297;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
        panda$core$Char8$init$panda$core$UInt8(&$tmp300, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result296, $tmp300);
        $tmp302 = &$s303;
        separator301 = $tmp302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp304, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp306 = $tmp304.min.value;
        panda$core$Int64 i305 = { $tmp306 };
        int64_t $tmp308 = $tmp304.max.value;
        bool $tmp309 = $tmp304.inclusive.value;
        if ($tmp309) goto $l316; else goto $l317;
        $l316:;
        if ($tmp306 <= $tmp308) goto $l310; else goto $l312;
        $l317:;
        if ($tmp306 < $tmp308) goto $l310; else goto $l312;
        $l310:;
        {
            int $tmp320;
            {
                $tmp322 = self->contents[i305.value];
                entry321 = $tmp322;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp322));
                $l323:;
                bool $tmp325 = ((panda$core$Bit) { entry321 != NULL }).value;
                if (!$tmp325) goto $l324;
                {
                    panda$core$MutableString$append$panda$core$String(result296, separator301);
                    if (((panda$core$Bit) { entry321->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result296, entry321->key);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result296, &$s326);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp327, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result296, $tmp327);
                    if (((panda$core$Bit) { entry321->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result296, entry321->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result296, &$s328);
                    }
                    }
                    {
                        $tmp329 = entry321;
                        $tmp330 = entry321->next;
                        entry321 = $tmp330;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                    }
                    {
                        $tmp331 = separator301;
                        $tmp332 = &$s333;
                        separator301 = $tmp332;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                    }
                }
                goto $l323;
                $l324:;
            }
            $tmp320 = -1;
            goto $l318;
            $l318:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry321));
            entry321 = NULL;
            switch ($tmp320) {
                case -1: goto $l334;
            }
            $l334:;
        }
        $l313:;
        int64_t $tmp336 = $tmp308 - i305.value;
        if ($tmp309) goto $l337; else goto $l338;
        $l337:;
        if ((uint64_t) $tmp336 >= 1) goto $l335; else goto $l312;
        $l338:;
        if ((uint64_t) $tmp336 > 1) goto $l335; else goto $l312;
        $l335:;
        i305.value += 1;
        goto $l310;
        $l312:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp341, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result296, $tmp341);
        panda$core$String* $tmp345 = panda$core$MutableString$finish$R$panda$core$String(result296);
        $tmp344 = $tmp345;
        $tmp343 = $tmp344;
        $returnValue342 = $tmp343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
        $tmp295 = 0;
        goto $l293;
        $l346:;
        return $returnValue342;
    }
    $l293:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result296));
    result296 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator301));
    separator301 = NULL;
    switch ($tmp295) {
        case 0: goto $l346;
    }
    $l348:;
}

