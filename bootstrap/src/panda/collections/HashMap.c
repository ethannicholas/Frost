#include "panda/collections/HashMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Map.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/MapWriter.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
#include "panda/collections/HashMap/Entry.h"
#include "panda/collections/HashMap/KeyIterator.h"
#include "panda/collections/HashMap/ValueIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ImmutableHashMap.h"
panda$core$Bit panda$collections$HashMap$$EQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim(panda$collections$HashMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$HashMap$$EQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(self, ((panda$collections$MapView*) p0));
    return result;
}
panda$core$Bit panda$collections$HashMap$$NEQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim(panda$collections$HashMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$HashMap$$NEQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(self, ((panda$collections$MapView*) p0));
    return result;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim(panda$collections$HashMap* self, panda$core$Object* p0) {
    panda$core$Object* result = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self, ((panda$collections$Key*) p0));
    return result;
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim(panda$collections$HashMap* self) {
    panda$collections$Iterator* result = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self);
    return result;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim(panda$collections$HashMap* self) {
    panda$collections$Iterator* result = panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(self);
    return result;
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim(panda$collections$HashMap* self, panda$core$Object* p0, panda$core$Object* p1) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, ((panda$collections$Key*) p0), p1);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$collections$HashMap$$EQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$HashMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$HashMap$_panda$core$Equatable, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$HashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$HashMap$_panda$collections$Map, { panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapView, { panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim} };

static panda$core$String $s1;
panda$collections$HashMap$class_type panda$collections$HashMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapWriter, { panda$collections$HashMap$convert$R$panda$core$String, panda$collections$HashMap$cleanup, panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit, panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim, panda$collections$HashMap$remove$panda$collections$HashMap$K, panda$collections$HashMap$clear, panda$collections$HashMap$incrementCount, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim, panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$EQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT} };

typedef panda$collections$Iterator* (*$fn36)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn54)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn59)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn90)(panda$collections$Key*);
typedef panda$core$Bit (*$fn118)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn146)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn170)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn204)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn222)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    panda$collections$HashMap$Entry** $tmp17;
    panda$core$Int64 $tmp18;
    panda$collections$HashMap$Entry* $tmp19;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp2;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
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
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map) {
    panda$collections$Iterator* Iter$152$931;
    panda$collections$Iterator* $tmp32;
    panda$collections$Iterator* $tmp33;
    panda$collections$Key* k49;
    panda$collections$Key* $tmp50;
    panda$core$Object* $tmp51;
    panda$core$Object* $tmp56;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$init(self);
    {
        int $tmp30;
        {
            ITable* $tmp34 = p_map->$class->itable;
            while ($tmp34->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp34 = $tmp34->next;
            }
            $fn36 $tmp35 = $tmp34->methods[2];
            panda$collections$Iterator* $tmp37 = $tmp35(p_map);
            $tmp33 = $tmp37;
            $tmp32 = $tmp33;
            Iter$152$931 = $tmp32;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp33));
            $l38:;
            ITable* $tmp41 = Iter$152$931->$class->itable;
            while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp41 = $tmp41->next;
            }
            $fn43 $tmp42 = $tmp41->methods[0];
            panda$core$Bit $tmp44 = $tmp42(Iter$152$931);
            panda$core$Bit $tmp45 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp44);
            bool $tmp40 = $tmp45.value;
            if (!$tmp40) goto $l39;
            {
                int $tmp48;
                {
                    ITable* $tmp52 = Iter$152$931->$class->itable;
                    while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp52 = $tmp52->next;
                    }
                    $fn54 $tmp53 = $tmp52->methods[1];
                    panda$core$Object* $tmp55 = $tmp53(Iter$152$931);
                    $tmp51 = $tmp55;
                    $tmp50 = ((panda$collections$Key*) $tmp51);
                    k49 = $tmp50;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
                    panda$core$Panda$unref$panda$core$Object($tmp51);
                    ITable* $tmp57 = p_map->$class->itable;
                    while ($tmp57->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                        $tmp57 = $tmp57->next;
                    }
                    $fn59 $tmp58 = $tmp57->methods[1];
                    panda$core$Object* $tmp60 = $tmp58(p_map, ((panda$core$Object*) k49));
                    $tmp56 = $tmp60;
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k49, $tmp56);
                    panda$core$Panda$unref$panda$core$Object($tmp56);
                }
                $tmp48 = -1;
                goto $l46;
                $l46:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k49));
                switch ($tmp48) {
                    case -1: goto $l61;
                }
                $l61:;
            }
            goto $l38;
            $l39:;
        }
        $tmp30 = -1;
        goto $l28;
        $l28:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$152$931));
        switch ($tmp30) {
            case -1: goto $l62;
        }
        $l62:;
    }
}
void panda$collections$HashMap$cleanup(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp66;
    int $tmp65;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp66, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp68 = $tmp66.min.value;
        panda$core$Int64 i67 = { $tmp68 };
        int64_t $tmp70 = $tmp66.max.value;
        bool $tmp71 = $tmp66.inclusive.value;
        if ($tmp71) goto $l78; else goto $l79;
        $l78:;
        if ($tmp68 <= $tmp70) goto $l72; else goto $l74;
        $l79:;
        if ($tmp68 < $tmp70) goto $l72; else goto $l74;
        $l72:;
        {
            if (((panda$core$Bit) { self->contents[i67.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i67.value]));
            }
            }
        }
        $l75:;
        int64_t $tmp81 = $tmp70 - i67.value;
        if ($tmp71) goto $l82; else goto $l83;
        $l82:;
        if ((uint64_t) $tmp81 >= 1) goto $l80; else goto $l74;
        $l83:;
        if ((uint64_t) $tmp81 > 1) goto $l80; else goto $l74;
        $l80:;
        i67.value += 1;
        goto $l72;
        $l74:;
        pandaFree(self->contents);
    }
    $tmp65 = -1;
    goto $l63;
    $l63:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp65) {
        case -1: goto $l86;
    }
    $l86:;
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h87;
    panda$core$Int64 $finallyReturn101;
    memset(&h87, 0, sizeof(h87));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h87 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp88 = p_key->$class->itable;
        while ($tmp88->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp88 = $tmp88->next;
        }
        $fn90 $tmp89 = $tmp88->methods[0];
        panda$core$Int64 $tmp91 = $tmp89(p_key);
        h87 = $tmp91;
    }
    }
    panda$core$Int64 $tmp92 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h87, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp93 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h87, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp94 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp92, $tmp93);
    panda$core$Int64 $tmp95 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h87, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp96 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp94, $tmp95);
    panda$core$Int64 $tmp97 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h87, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp98 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp96, $tmp97);
    panda$core$Int64 $tmp99 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h87, $tmp98);
    h87 = $tmp99;
    panda$core$Int64 $tmp100 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp101 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h87, $tmp100);
    h87 = $tmp101;
    $finallyReturn101 = h87;
    return $finallyReturn101;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index107;
    panda$collections$HashMap$Entry* e109;
    panda$collections$HashMap$Entry* $tmp110;
    panda$collections$HashMap$Entry* $tmp121;
    panda$collections$HashMap$Entry* $tmp122;
    panda$core$Object* $finallyReturn122;
    panda$core$Object* $tmp124;
    panda$core$Object* $finallyReturn126;
    panda$core$Object* $tmp128;
    int $tmp106;
    {
        panda$core$Int64 $tmp108 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index107 = $tmp108;
        $tmp110 = self->contents[index107.value];
        e109 = $tmp110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
        $l111:;
        bool $tmp114 = ((panda$core$Bit) { e109 != NULL }).value;
        if (!$tmp114) goto $l115;
        ITable* $tmp116 = ((panda$core$Equatable*) e109->key)->$class->itable;
        while ($tmp116->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp116 = $tmp116->next;
        }
        $fn118 $tmp117 = $tmp116->methods[1];
        panda$core$Bit $tmp119 = $tmp117(((panda$core$Equatable*) e109->key), ((panda$core$Object*) p_key));
        $tmp114 = $tmp119.value;
        $l115:;
        panda$core$Bit $tmp120 = { $tmp114 };
        bool $tmp113 = $tmp120.value;
        if (!$tmp113) goto $l112;
        {
            {
                $tmp121 = e109;
                $tmp122 = e109->next;
                e109 = $tmp122;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
            }
        }
        goto $l111;
        $l112:;
        if (((panda$core$Bit) { e109 != NULL }).value) {
        {
            $tmp124 = e109->value;
            $finallyReturn122 = $tmp124;
            panda$core$Panda$ref$panda$core$Object($tmp124);
            $tmp106 = 0;
            goto $l104;
            $l125:;
            return $finallyReturn122;
        }
        }
        else {
        {
            $tmp128 = NULL;
            $finallyReturn126 = $tmp128;
            panda$core$Panda$ref$panda$core$Object($tmp128);
            $tmp106 = 1;
            goto $l104;
            $l129:;
            return $finallyReturn126;
        }
        }
    }
    $tmp106 = -1;
    goto $l104;
    $l104:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e109));
    switch ($tmp106) {
        case -1: goto $l131;
        case 1: goto $l129;
        case 0: goto $l125;
    }
    $l131:;
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index135;
    panda$collections$HashMap$Entry* e137;
    panda$collections$HashMap$Entry* $tmp138;
    panda$collections$HashMap$Entry* $tmp149;
    panda$collections$HashMap$Entry* $tmp150;
    panda$core$Bit $finallyReturn150;
    int $tmp134;
    {
        panda$core$Int64 $tmp136 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index135 = $tmp136;
        $tmp138 = self->contents[index135.value];
        e137 = $tmp138;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
        $l139:;
        bool $tmp142 = ((panda$core$Bit) { e137 != NULL }).value;
        if (!$tmp142) goto $l143;
        ITable* $tmp144 = ((panda$core$Equatable*) e137->key)->$class->itable;
        while ($tmp144->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp144 = $tmp144->next;
        }
        $fn146 $tmp145 = $tmp144->methods[1];
        panda$core$Bit $tmp147 = $tmp145(((panda$core$Equatable*) e137->key), ((panda$core$Object*) p_key));
        $tmp142 = $tmp147.value;
        $l143:;
        panda$core$Bit $tmp148 = { $tmp142 };
        bool $tmp141 = $tmp148.value;
        if (!$tmp141) goto $l140;
        {
            {
                $tmp149 = e137;
                $tmp150 = e137->next;
                e137 = $tmp150;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
            }
        }
        goto $l139;
        $l140:;
        $finallyReturn150 = ((panda$core$Bit) { e137 != NULL });
        $tmp134 = 0;
        goto $l132;
        $l152:;
        return $finallyReturn150;
    }
    $l132:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e137));
    switch ($tmp134) {
        case 0: goto $l152;
    }
    $l154:;
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index159;
    panda$collections$HashMap$Entry* e161;
    panda$collections$HashMap$Entry* $tmp162;
    panda$collections$HashMap$Entry* $tmp173;
    panda$collections$HashMap$Entry* $tmp174;
    panda$collections$HashMap$Entry* old178;
    panda$collections$HashMap$Entry* $tmp179;
    panda$collections$HashMap$Entry* $tmp180;
    panda$collections$HashMap$Entry* $tmp181;
    panda$collections$HashMap$Entry* $tmp182;
    panda$collections$HashMap$Entry* $tmp184;
    panda$collections$HashMap$Entry* $tmp185;
    panda$collections$HashMap$Entry** $tmp186;
    panda$core$Int64 $tmp187;
    panda$collections$HashMap$Entry* $tmp188;
    panda$core$Object* $tmp190;
    panda$core$Object* $tmp191;
    int $tmp157;
    {
        panda$core$Int64 $tmp158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp158;
        panda$core$Int64 $tmp160 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index159 = $tmp160;
        $tmp162 = self->contents[index159.value];
        e161 = $tmp162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
        $l163:;
        bool $tmp166 = ((panda$core$Bit) { e161 != NULL }).value;
        if (!$tmp166) goto $l167;
        ITable* $tmp168 = ((panda$core$Equatable*) e161->key)->$class->itable;
        while ($tmp168->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp168 = $tmp168->next;
        }
        $fn170 $tmp169 = $tmp168->methods[1];
        panda$core$Bit $tmp171 = $tmp169(((panda$core$Equatable*) e161->key), ((panda$core$Object*) p_key));
        $tmp166 = $tmp171.value;
        $l167:;
        panda$core$Bit $tmp172 = { $tmp166 };
        bool $tmp165 = $tmp172.value;
        if (!$tmp165) goto $l164;
        {
            {
                $tmp173 = e161;
                $tmp174 = e161->next;
                e161 = $tmp174;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
            }
        }
        goto $l163;
        $l164:;
        if (((panda$core$Bit) { e161 == NULL }).value) {
        {
            int $tmp177;
            {
                $tmp179 = self->contents[index159.value];
                old178 = $tmp179;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
                {
                    $tmp180 = e161;
                    panda$collections$HashMap$Entry* $tmp183 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
                    panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp183, p_key, p_value);
                    $tmp182 = $tmp183;
                    $tmp181 = $tmp182;
                    e161 = $tmp181;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
                }
                {
                    $tmp184 = e161->next;
                    $tmp185 = old178;
                    e161->next = $tmp185;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp184));
                }
                {
                    $tmp186 = self->contents;
                    $tmp187 = index159;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186[$tmp187.value]));
                    $tmp188 = e161;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
                    $tmp186[$tmp187.value] = $tmp188;
                }
                panda$collections$HashMap$incrementCount(self);
            }
            $tmp177 = -1;
            goto $l175;
            $l175:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old178));
            switch ($tmp177) {
                case -1: goto $l189;
            }
            $l189:;
        }
        }
        else {
        {
            {
                $tmp190 = e161->value;
                $tmp191 = p_value;
                e161->value = $tmp191;
                panda$core$Panda$ref$panda$core$Object($tmp191);
                panda$core$Panda$unref$panda$core$Object($tmp190);
            }
        }
        }
    }
    $tmp157 = -1;
    goto $l155;
    $l155:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e161));
    switch ($tmp157) {
        case -1: goto $l192;
    }
    $l192:;
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index197;
    panda$collections$HashMap$Entry* e199;
    panda$collections$HashMap$Entry* $tmp200;
    panda$collections$HashMap$Entry** $tmp206;
    panda$core$Int64 $tmp207;
    panda$collections$HashMap$Entry* $tmp208;
    panda$collections$HashMap$Entry* next216;
    panda$collections$HashMap$Entry* $tmp217;
    panda$collections$HashMap$Entry* $tmp225;
    panda$collections$HashMap$Entry* $tmp226;
    panda$collections$HashMap$Entry* next228;
    panda$collections$HashMap$Entry* $tmp229;
    panda$collections$HashMap$Entry* $tmp230;
    panda$collections$HashMap$Entry* $tmp231;
    int $tmp195;
    {
        panda$core$Int64 $tmp196 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp196;
        panda$core$Int64 $tmp198 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index197 = $tmp198;
        $tmp200 = self->contents[index197.value];
        e199 = $tmp200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp200));
        if (((panda$core$Bit) { e199 == NULL }).value) {
        {
            $tmp195 = 0;
            goto $l193;
            $l201:;
            return;
        }
        }
        ITable* $tmp202 = ((panda$core$Equatable*) e199->key)->$class->itable;
        while ($tmp202->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp202 = $tmp202->next;
        }
        $fn204 $tmp203 = $tmp202->methods[0];
        panda$core$Bit $tmp205 = $tmp203(((panda$core$Equatable*) e199->key), ((panda$core$Object*) p_key));
        if ($tmp205.value) {
        {
            {
                $tmp206 = self->contents;
                $tmp207 = index197;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206[$tmp207.value]));
                $tmp208 = e199->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp208));
                $tmp206[$tmp207.value] = $tmp208;
            }
            panda$core$Int64 $tmp209 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
            self->_count = $tmp209;
            $tmp195 = 1;
            goto $l193;
            $l210:;
            return;
        }
        }
        $l211:;
        while (true) {
        {
            int $tmp215;
            {
                $tmp217 = e199->next;
                next216 = $tmp217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
                if (((panda$core$Bit) { next216 == NULL }).value) {
                {
                    $tmp215 = 0;
                    goto $l213;
                    $l218:;
                    $tmp195 = 2;
                    goto $l193;
                    $l219:;
                    return;
                }
                }
                ITable* $tmp220 = ((panda$core$Equatable*) next216->key)->$class->itable;
                while ($tmp220->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp220 = $tmp220->next;
                }
                $fn222 $tmp221 = $tmp220->methods[0];
                panda$core$Bit $tmp223 = $tmp221(((panda$core$Equatable*) next216->key), ((panda$core$Object*) p_key));
                if ($tmp223.value) {
                {
                    $tmp215 = 1;
                    goto $l213;
                    $l224:;
                    goto $l212;
                }
                }
                {
                    $tmp225 = e199;
                    $tmp226 = next216;
                    e199 = $tmp226;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp225));
                }
            }
            $tmp215 = -1;
            goto $l213;
            $l213:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next216));
            switch ($tmp215) {
                case -1: goto $l227;
                case 0: goto $l218;
                case 1: goto $l224;
            }
            $l227:;
        }
        }
        $l212:;
        $tmp229 = e199->next;
        next228 = $tmp229;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp229));
        PANDA_ASSERT(((panda$core$Bit) { next228 != NULL }).value);
        {
            $tmp230 = e199->next;
            $tmp231 = next228->next;
            e199->next = $tmp231;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
        }
        panda$core$Int64 $tmp232 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp232;
    }
    $tmp195 = -1;
    goto $l193;
    $l193:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e199));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next228));
    switch ($tmp195) {
        case 1: goto $l210;
        case -1: goto $l233;
        case 2: goto $l219;
        case 0: goto $l201;
    }
    $l233:;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp235;
    panda$core$Range$LTpanda$core$Int64$GT $tmp255;
    panda$collections$HashMap$Entry** $tmp269;
    panda$core$Int64 $tmp270;
    panda$collections$HashMap$Entry* $tmp271;
    panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp234;
    self->_count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp235, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp237 = $tmp235.min.value;
    panda$core$Int64 i236 = { $tmp237 };
    int64_t $tmp239 = $tmp235.max.value;
    bool $tmp240 = $tmp235.inclusive.value;
    if ($tmp240) goto $l247; else goto $l248;
    $l247:;
    if ($tmp237 <= $tmp239) goto $l241; else goto $l243;
    $l248:;
    if ($tmp237 < $tmp239) goto $l241; else goto $l243;
    $l241:;
    {
        if (((panda$core$Bit) { self->contents[i236.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i236.value]));
        }
        }
    }
    $l244:;
    int64_t $tmp250 = $tmp239 - i236.value;
    if ($tmp240) goto $l251; else goto $l252;
    $l251:;
    if ((uint64_t) $tmp250 >= 1) goto $l249; else goto $l243;
    $l252:;
    if ((uint64_t) $tmp250 > 1) goto $l249; else goto $l243;
    $l249:;
    i236.value += 1;
    goto $l241;
    $l243:;
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp255, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp257 = $tmp255.min.value;
    panda$core$Int64 i256 = { $tmp257 };
    int64_t $tmp259 = $tmp255.max.value;
    bool $tmp260 = $tmp255.inclusive.value;
    if ($tmp260) goto $l267; else goto $l268;
    $l267:;
    if ($tmp257 <= $tmp259) goto $l261; else goto $l263;
    $l268:;
    if ($tmp257 < $tmp259) goto $l261; else goto $l263;
    $l261:;
    {
        if (((panda$core$Bit) { self->contents[i256.value] != NULL }).value) {
        {
            {
                $tmp269 = self->contents;
                $tmp270 = i256;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269[$tmp270.value]));
                $tmp271 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                $tmp269[$tmp270.value] = $tmp271;
            }
        }
        }
    }
    $l264:;
    int64_t $tmp273 = $tmp259 - i256.value;
    if ($tmp260) goto $l274; else goto $l275;
    $l274:;
    if ((uint64_t) $tmp273 >= 1) goto $l272; else goto $l263;
    $l275:;
    if ((uint64_t) $tmp273 > 1) goto $l272; else goto $l263;
    $l272:;
    i256.value += 1;
    goto $l261;
    $l263:;
    panda$core$Int64 $tmp278 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp279 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp278, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp279;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents282;
    panda$core$Int64 oldBucketCount283;
    panda$core$Range$LTpanda$core$Int64$GT $tmp285;
    panda$collections$HashMap$Entry** $tmp299;
    panda$core$Int64 $tmp300;
    panda$collections$HashMap$Entry* $tmp301;
    panda$core$Range$LTpanda$core$Int64$GT $tmp309;
    panda$collections$HashMap$Entry* e326;
    panda$collections$HashMap$Entry* $tmp327;
    panda$collections$HashMap$Entry* $tmp331;
    panda$collections$HashMap$Entry* $tmp332;
    panda$core$Range$LTpanda$core$Int64$GT $tmp340;
    panda$core$Int64 $tmp280 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp280;
    panda$core$Bit $tmp281 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp281.value) {
    {
        oldContents282 = self->contents;
        oldBucketCount283 = self->bucketCount;
        panda$core$Int64 $tmp284 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp284;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp285, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp287 = $tmp285.min.value;
        panda$core$Int64 i286 = { $tmp287 };
        int64_t $tmp289 = $tmp285.max.value;
        bool $tmp290 = $tmp285.inclusive.value;
        if ($tmp290) goto $l297; else goto $l298;
        $l297:;
        if ($tmp287 <= $tmp289) goto $l291; else goto $l293;
        $l298:;
        if ($tmp287 < $tmp289) goto $l291; else goto $l293;
        $l291:;
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
        panda$core$Int64 $tmp308 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp308;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp309, ((panda$core$Int64) { 0 }), oldBucketCount283, ((panda$core$Bit) { false }));
        int64_t $tmp311 = $tmp309.min.value;
        panda$core$Int64 i310 = { $tmp311 };
        int64_t $tmp313 = $tmp309.max.value;
        bool $tmp314 = $tmp309.inclusive.value;
        if ($tmp314) goto $l321; else goto $l322;
        $l321:;
        if ($tmp311 <= $tmp313) goto $l315; else goto $l317;
        $l322:;
        if ($tmp311 < $tmp313) goto $l315; else goto $l317;
        $l315:;
        {
            int $tmp325;
            {
                $tmp327 = oldContents282[i310.value];
                e326 = $tmp327;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp327));
                $l328:;
                bool $tmp330 = ((panda$core$Bit) { e326 != NULL }).value;
                if (!$tmp330) goto $l329;
                {
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e326->key, e326->value);
                    {
                        $tmp331 = e326;
                        $tmp332 = e326->next;
                        e326 = $tmp332;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp332));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
                    }
                }
                goto $l328;
                $l329:;
            }
            $tmp325 = -1;
            goto $l323;
            $l323:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e326));
            switch ($tmp325) {
                case -1: goto $l333;
            }
            $l333:;
        }
        $l318:;
        int64_t $tmp335 = $tmp313 - i310.value;
        if ($tmp314) goto $l336; else goto $l337;
        $l336:;
        if ((uint64_t) $tmp335 >= 1) goto $l334; else goto $l317;
        $l337:;
        if ((uint64_t) $tmp335 > 1) goto $l334; else goto $l317;
        $l334:;
        i310.value += 1;
        goto $l315;
        $l317:;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp340, ((panda$core$Int64) { 0 }), oldBucketCount283, ((panda$core$Bit) { false }));
        int64_t $tmp342 = $tmp340.min.value;
        panda$core$Int64 i341 = { $tmp342 };
        int64_t $tmp344 = $tmp340.max.value;
        bool $tmp345 = $tmp340.inclusive.value;
        if ($tmp345) goto $l352; else goto $l353;
        $l352:;
        if ($tmp342 <= $tmp344) goto $l346; else goto $l348;
        $l353:;
        if ($tmp342 < $tmp344) goto $l346; else goto $l348;
        $l346:;
        {
            if (((panda$core$Bit) { oldContents282[i341.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents282[i341.value]));
            }
            }
        }
        $l349:;
        int64_t $tmp355 = $tmp344 - i341.value;
        if ($tmp345) goto $l356; else goto $l357;
        $l356:;
        if ((uint64_t) $tmp355 >= 1) goto $l354; else goto $l348;
        $l357:;
        if ((uint64_t) $tmp355 > 1) goto $l354; else goto $l348;
        $l354:;
        i341.value += 1;
        goto $l346;
        $l348:;
        pandaFree(oldContents282);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $finallyReturn359;
    panda$collections$Iterator* $tmp361;
    panda$collections$HashMap$KeyIterator* $tmp362;
    panda$collections$HashMap$KeyIterator* $tmp363 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp363, self);
    $tmp362 = $tmp363;
    $tmp361 = ((panda$collections$Iterator*) $tmp362);
    $finallyReturn359 = $tmp361;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp361));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp362));
    return $finallyReturn359;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $finallyReturn364;
    panda$collections$Iterator* $tmp366;
    panda$collections$HashMap$ValueIterator* $tmp367;
    panda$collections$HashMap$ValueIterator* $tmp368 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp368, self);
    $tmp367 = $tmp368;
    $tmp366 = ((panda$collections$Iterator*) $tmp367);
    $finallyReturn364 = $tmp366;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
    return $finallyReturn364;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $finallyReturn369;
    $finallyReturn369 = self->_count;
    return $finallyReturn369;
}
panda$core$Bit panda$collections$HashMap$$EQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$Bit panda$collections$HashMap$$NEQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result375;
    panda$core$MutableString* $tmp376;
    panda$core$MutableString* $tmp377;
    panda$core$Char8 $tmp379;
    panda$core$String* separator380;
    panda$core$String* $tmp381;
    panda$core$Range$LTpanda$core$Int64$GT $tmp383;
    panda$collections$HashMap$Entry* entry400;
    panda$collections$HashMap$Entry* $tmp401;
    panda$core$Char8 $tmp406;
    panda$collections$HashMap$Entry* $tmp408;
    panda$collections$HashMap$Entry* $tmp409;
    panda$core$String* $tmp410;
    panda$core$String* $tmp411;
    panda$core$Char8 $tmp420;
    panda$core$String* $finallyReturn420;
    panda$core$String* $tmp422;
    panda$core$String* $tmp423;
    int $tmp374;
    {
        panda$core$MutableString* $tmp378 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp378);
        $tmp377 = $tmp378;
        $tmp376 = $tmp377;
        result375 = $tmp376;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
        panda$core$Char8$init$panda$core$UInt8(&$tmp379, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result375, $tmp379);
        $tmp381 = &$s382;
        separator380 = $tmp381;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp381));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp383, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp385 = $tmp383.min.value;
        panda$core$Int64 i384 = { $tmp385 };
        int64_t $tmp387 = $tmp383.max.value;
        bool $tmp388 = $tmp383.inclusive.value;
        if ($tmp388) goto $l395; else goto $l396;
        $l395:;
        if ($tmp385 <= $tmp387) goto $l389; else goto $l391;
        $l396:;
        if ($tmp385 < $tmp387) goto $l389; else goto $l391;
        $l389:;
        {
            int $tmp399;
            {
                $tmp401 = self->contents[i384.value];
                entry400 = $tmp401;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
                $l402:;
                bool $tmp404 = ((panda$core$Bit) { entry400 != NULL }).value;
                if (!$tmp404) goto $l403;
                {
                    panda$core$MutableString$append$panda$core$String(result375, separator380);
                    if (((panda$core$Bit) { entry400->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result375, ((panda$core$Object*) entry400->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result375, &$s405);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp406, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result375, $tmp406);
                    if (((panda$core$Bit) { entry400->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result375, entry400->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result375, &$s407);
                    }
                    }
                    {
                        $tmp408 = entry400;
                        $tmp409 = entry400->next;
                        entry400 = $tmp409;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp409));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp408));
                    }
                    {
                        $tmp410 = separator380;
                        $tmp411 = &$s412;
                        separator380 = $tmp411;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
                    }
                }
                goto $l402;
                $l403:;
            }
            $tmp399 = -1;
            goto $l397;
            $l397:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry400));
            switch ($tmp399) {
                case -1: goto $l413;
            }
            $l413:;
        }
        $l392:;
        int64_t $tmp415 = $tmp387 - i384.value;
        if ($tmp388) goto $l416; else goto $l417;
        $l416:;
        if ((uint64_t) $tmp415 >= 1) goto $l414; else goto $l391;
        $l417:;
        if ((uint64_t) $tmp415 > 1) goto $l414; else goto $l391;
        $l414:;
        i384.value += 1;
        goto $l389;
        $l391:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp420, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result375, $tmp420);
        panda$core$String* $tmp424 = panda$core$MutableString$finish$R$panda$core$String(result375);
        $tmp423 = $tmp424;
        $tmp422 = $tmp423;
        $finallyReturn420 = $tmp422;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp422));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
        $tmp374 = 0;
        goto $l372;
        $l425:;
        return $finallyReturn420;
    }
    $l372:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result375));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator380));
    switch ($tmp374) {
        case 0: goto $l425;
    }
    $l427:;
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$core$Class* $tmp428;
    panda$core$Class* $tmp429;
    panda$collections$ImmutableHashMap* $tmp430;
    panda$collections$ImmutableHashMap* $finallyReturn431;
    panda$collections$ImmutableHashMap* $tmp433;
    {
        $tmp428 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp431 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp431);
        $tmp430 = $tmp431;
        $tmp429 = ((panda$core$Object*) $tmp430)->$class;
        ((panda$core$Object*) self)->$class = $tmp429;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
    }
    $tmp433 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    $finallyReturn431 = $tmp433;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp433));
    return $finallyReturn431;
}

