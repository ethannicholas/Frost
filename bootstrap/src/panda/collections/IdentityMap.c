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
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim(panda$collections$IdentityMap* p0, panda$core$Object* p1, panda$core$Object* p2) {
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(p0, p1, p2);

}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim(panda$collections$IdentityMap* p0, panda$core$Object* p1) {
    panda$core$Object* result = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(p0, p1);

    return result;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim(panda$collections$IdentityMap* p0) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(p0);

    return result;
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim(panda$collections$IdentityMap* p0) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$IdentityMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$IdentityMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapWriter, { panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$IdentityMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapView, { } };

static panda$core$String $s1;
panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$Map, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$collections$IdentityMap$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 17, -1268156345948147025, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -3192095292821253576, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    abort();
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
    abort();
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
    panda$collections$IdentityMap$Entry* $tmp164;
    panda$collections$IdentityMap$Entry* $tmp165;
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
        if (((panda$core$Bit) { next159 != NULL }).value) goto $l161; else goto $l162;
        $l162:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s163, (panda$core$Int64) { 157 });
        abort();
        $l161:;
        {
            $tmp164 = e138->next;
            $tmp165 = next159->next;
            e138->next = $tmp165;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
        }
        panda$core$Int64 $tmp166 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp166;
    }
    $tmp134 = -1;
    goto $l132;
    $l132:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next159));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e138));
    e138 = NULL;
    next159 = NULL;
    switch ($tmp134) {
        case -1: goto $l167;
        case 1: goto $l145;
        case 2: goto $l154;
        case 0: goto $l140;
    }
    $l167:;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp169;
    panda$core$Range$LTpanda$core$Int64$GT $tmp189;
    panda$collections$IdentityMap$Entry** $tmp203;
    panda$core$Int64 $tmp204;
    panda$collections$IdentityMap$Entry* $tmp205;
    panda$core$Int64 $tmp168 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp168;
    self->_count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp169, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp171 = $tmp169.min.value;
    panda$core$Int64 i170 = { $tmp171 };
    int64_t $tmp173 = $tmp169.max.value;
    bool $tmp174 = $tmp169.inclusive.value;
    if ($tmp174) goto $l181; else goto $l182;
    $l181:;
    if ($tmp171 <= $tmp173) goto $l175; else goto $l177;
    $l182:;
    if ($tmp171 < $tmp173) goto $l175; else goto $l177;
    $l175:;
    {
        if (((panda$core$Bit) { self->contents[i170.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i170.value]));
        }
        }
    }
    $l178:;
    int64_t $tmp184 = $tmp173 - i170.value;
    if ($tmp174) goto $l185; else goto $l186;
    $l185:;
    if ((uint64_t) $tmp184 >= 1) goto $l183; else goto $l177;
    $l186:;
    if ((uint64_t) $tmp184 > 1) goto $l183; else goto $l177;
    $l183:;
    i170.value += 1;
    goto $l175;
    $l177:;
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp189, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp191 = $tmp189.min.value;
    panda$core$Int64 i190 = { $tmp191 };
    int64_t $tmp193 = $tmp189.max.value;
    bool $tmp194 = $tmp189.inclusive.value;
    if ($tmp194) goto $l201; else goto $l202;
    $l201:;
    if ($tmp191 <= $tmp193) goto $l195; else goto $l197;
    $l202:;
    if ($tmp191 < $tmp193) goto $l195; else goto $l197;
    $l195:;
    {
        if (((panda$core$Bit) { self->contents[i190.value] != NULL }).value) {
        {
            {
                $tmp203 = self->contents;
                $tmp204 = i190;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203[$tmp204.value]));
                $tmp205 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp205));
                $tmp203[$tmp204.value] = $tmp205;
            }
        }
        }
    }
    $l198:;
    int64_t $tmp207 = $tmp193 - i190.value;
    if ($tmp194) goto $l208; else goto $l209;
    $l208:;
    if ((uint64_t) $tmp207 >= 1) goto $l206; else goto $l197;
    $l209:;
    if ((uint64_t) $tmp207 > 1) goto $l206; else goto $l197;
    $l206:;
    i190.value += 1;
    goto $l195;
    $l197:;
    panda$core$Int64 $tmp212 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp213 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp212, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp213;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents216;
    panda$core$Int64 oldBucketCount217;
    panda$core$Range$LTpanda$core$Int64$GT $tmp219;
    panda$collections$IdentityMap$Entry** $tmp233;
    panda$core$Int64 $tmp234;
    panda$collections$IdentityMap$Entry* $tmp235;
    panda$core$Range$LTpanda$core$Int64$GT $tmp243;
    panda$collections$IdentityMap$Entry* e260 = NULL;
    panda$collections$IdentityMap$Entry* $tmp261;
    panda$collections$IdentityMap$Entry* $tmp265;
    panda$collections$IdentityMap$Entry* $tmp266;
    panda$core$Range$LTpanda$core$Int64$GT $tmp274;
    panda$core$Int64 $tmp214 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp214;
    panda$core$Bit $tmp215 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp215.value) {
    {
        oldContents216 = self->contents;
        oldBucketCount217 = self->bucketCount;
        panda$core$Int64 $tmp218 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp218;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp219, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp221 = $tmp219.min.value;
        panda$core$Int64 i220 = { $tmp221 };
        int64_t $tmp223 = $tmp219.max.value;
        bool $tmp224 = $tmp219.inclusive.value;
        if ($tmp224) goto $l231; else goto $l232;
        $l231:;
        if ($tmp221 <= $tmp223) goto $l225; else goto $l227;
        $l232:;
        if ($tmp221 < $tmp223) goto $l225; else goto $l227;
        $l225:;
        {
            {
                $tmp233 = self->contents;
                $tmp234 = i220;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233[$tmp234.value]));
                $tmp235 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
                $tmp233[$tmp234.value] = $tmp235;
            }
        }
        $l228:;
        int64_t $tmp237 = $tmp223 - i220.value;
        if ($tmp224) goto $l238; else goto $l239;
        $l238:;
        if ((uint64_t) $tmp237 >= 1) goto $l236; else goto $l227;
        $l239:;
        if ((uint64_t) $tmp237 > 1) goto $l236; else goto $l227;
        $l236:;
        i220.value += 1;
        goto $l225;
        $l227:;
        panda$core$Int64 $tmp242 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp242;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp243, ((panda$core$Int64) { 0 }), oldBucketCount217, ((panda$core$Bit) { false }));
        int64_t $tmp245 = $tmp243.min.value;
        panda$core$Int64 i244 = { $tmp245 };
        int64_t $tmp247 = $tmp243.max.value;
        bool $tmp248 = $tmp243.inclusive.value;
        if ($tmp248) goto $l255; else goto $l256;
        $l255:;
        if ($tmp245 <= $tmp247) goto $l249; else goto $l251;
        $l256:;
        if ($tmp245 < $tmp247) goto $l249; else goto $l251;
        $l249:;
        {
            int $tmp259;
            {
                $tmp261 = oldContents216[i244.value];
                e260 = $tmp261;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
                $l262:;
                bool $tmp264 = ((panda$core$Bit) { e260 != NULL }).value;
                if (!$tmp264) goto $l263;
                {
                    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e260->key, e260->value);
                    {
                        $tmp265 = e260;
                        $tmp266 = e260->next;
                        e260 = $tmp266;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp265));
                    }
                }
                goto $l262;
                $l263:;
            }
            $tmp259 = -1;
            goto $l257;
            $l257:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e260));
            e260 = NULL;
            switch ($tmp259) {
                case -1: goto $l267;
            }
            $l267:;
        }
        $l252:;
        int64_t $tmp269 = $tmp247 - i244.value;
        if ($tmp248) goto $l270; else goto $l271;
        $l270:;
        if ((uint64_t) $tmp269 >= 1) goto $l268; else goto $l251;
        $l271:;
        if ((uint64_t) $tmp269 > 1) goto $l268; else goto $l251;
        $l268:;
        i244.value += 1;
        goto $l249;
        $l251:;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp274, ((panda$core$Int64) { 0 }), oldBucketCount217, ((panda$core$Bit) { false }));
        int64_t $tmp276 = $tmp274.min.value;
        panda$core$Int64 i275 = { $tmp276 };
        int64_t $tmp278 = $tmp274.max.value;
        bool $tmp279 = $tmp274.inclusive.value;
        if ($tmp279) goto $l286; else goto $l287;
        $l286:;
        if ($tmp276 <= $tmp278) goto $l280; else goto $l282;
        $l287:;
        if ($tmp276 < $tmp278) goto $l280; else goto $l282;
        $l280:;
        {
            if (((panda$core$Bit) { oldContents216[i275.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents216[i275.value]));
            }
            }
        }
        $l283:;
        int64_t $tmp289 = $tmp278 - i275.value;
        if ($tmp279) goto $l290; else goto $l291;
        $l290:;
        if ((uint64_t) $tmp289 >= 1) goto $l288; else goto $l282;
        $l291:;
        if ((uint64_t) $tmp289 > 1) goto $l288; else goto $l282;
        $l288:;
        i275.value += 1;
        goto $l280;
        $l282:;
        pandaFree(oldContents216);
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    panda$core$Int64 $returnValue294;
    $returnValue294 = self->_count;
    return $returnValue294;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
    if (((panda$core$Bit) { false }).value) goto $l296; else goto $l297;
    $l297:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s298, (panda$core$Int64) { 217 }, &$s299);
    abort();
    $l296:;
    abort();
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
    if (((panda$core$Bit) { false }).value) goto $l300; else goto $l301;
    $l301:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s302, (panda$core$Int64) { 222 }, &$s303);
    abort();
    $l300:;
    abort();
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result307 = NULL;
    panda$core$MutableString* $tmp308;
    panda$core$MutableString* $tmp309;
    panda$core$Char8 $tmp311;
    panda$core$String* separator312 = NULL;
    panda$core$String* $tmp313;
    panda$core$Range$LTpanda$core$Int64$GT $tmp315;
    panda$collections$IdentityMap$Entry* entry332 = NULL;
    panda$collections$IdentityMap$Entry* $tmp333;
    panda$core$Char8 $tmp338;
    panda$collections$IdentityMap$Entry* $tmp340;
    panda$collections$IdentityMap$Entry* $tmp341;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$Char8 $tmp352;
    panda$core$String* $returnValue353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp355;
    int $tmp306;
    {
        panda$core$MutableString* $tmp310 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp310);
        $tmp309 = $tmp310;
        $tmp308 = $tmp309;
        result307 = $tmp308;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp309));
        panda$core$Char8$init$panda$core$UInt8(&$tmp311, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result307, $tmp311);
        $tmp313 = &$s314;
        separator312 = $tmp313;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp315, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp317 = $tmp315.min.value;
        panda$core$Int64 i316 = { $tmp317 };
        int64_t $tmp319 = $tmp315.max.value;
        bool $tmp320 = $tmp315.inclusive.value;
        if ($tmp320) goto $l327; else goto $l328;
        $l327:;
        if ($tmp317 <= $tmp319) goto $l321; else goto $l323;
        $l328:;
        if ($tmp317 < $tmp319) goto $l321; else goto $l323;
        $l321:;
        {
            int $tmp331;
            {
                $tmp333 = self->contents[i316.value];
                entry332 = $tmp333;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
                $l334:;
                bool $tmp336 = ((panda$core$Bit) { entry332 != NULL }).value;
                if (!$tmp336) goto $l335;
                {
                    panda$core$MutableString$append$panda$core$String(result307, separator312);
                    if (((panda$core$Bit) { entry332->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result307, entry332->key);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result307, &$s337);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp338, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result307, $tmp338);
                    if (((panda$core$Bit) { entry332->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result307, entry332->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result307, &$s339);
                    }
                    }
                    {
                        $tmp340 = entry332;
                        $tmp341 = entry332->next;
                        entry332 = $tmp341;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp341));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
                    }
                    {
                        $tmp342 = separator312;
                        $tmp343 = &$s344;
                        separator312 = $tmp343;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
                    }
                }
                goto $l334;
                $l335:;
            }
            $tmp331 = -1;
            goto $l329;
            $l329:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry332));
            entry332 = NULL;
            switch ($tmp331) {
                case -1: goto $l345;
            }
            $l345:;
        }
        $l324:;
        int64_t $tmp347 = $tmp319 - i316.value;
        if ($tmp320) goto $l348; else goto $l349;
        $l348:;
        if ((uint64_t) $tmp347 >= 1) goto $l346; else goto $l323;
        $l349:;
        if ((uint64_t) $tmp347 > 1) goto $l346; else goto $l323;
        $l346:;
        i316.value += 1;
        goto $l321;
        $l323:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp352, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result307, $tmp352);
        panda$core$String* $tmp356 = panda$core$MutableString$finish$R$panda$core$String(result307);
        $tmp355 = $tmp356;
        $tmp354 = $tmp355;
        $returnValue353 = $tmp354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp355));
        $tmp306 = 0;
        goto $l304;
        $l357:;
        return $returnValue353;
    }
    $l304:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result307));
    result307 = NULL;
    separator312 = NULL;
    switch ($tmp306) {
        case 0: goto $l357;
    }
    $l359:;
    abort();
}

