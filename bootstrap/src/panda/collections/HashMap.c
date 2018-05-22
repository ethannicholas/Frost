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
#include "panda/core/Method.h"
#include "panda/core/Equatable.h"
#include "panda/collections/HashMap/KeyIterator.h"
#include "panda/collections/HashMap/ValueIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ImmutableHashMap.h"
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


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$HashMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$HashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$HashMap$_panda$collections$Map, { panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapView, { panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim} };

static panda$core$String $s1;
panda$collections$HashMap$class_type panda$collections$HashMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapWriter, { panda$collections$HashMap$convert$R$panda$core$String, panda$collections$HashMap$cleanup, panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit, panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim, panda$collections$HashMap$remove$panda$collections$HashMap$K, panda$collections$HashMap$clear, panda$collections$HashMap$incrementCount, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim, panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT} };

typedef panda$collections$Iterator* (*$fn36)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn54)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn59)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn90)(panda$collections$Key*);
typedef panda$core$Bit (*$fn118)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn145)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn169)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn203)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn221)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    panda$collections$Iterator* Iter$152$931 = NULL;
    panda$collections$Iterator* $tmp32;
    panda$collections$Iterator* $tmp33;
    panda$collections$Key* k49 = NULL;
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
                k49 = NULL;
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
        Iter$152$931 = NULL;
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
    panda$core$Int64 $returnValue102;
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
    $returnValue102 = h87;
    return $returnValue102;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index107;
    panda$collections$HashMap$Entry* e109 = NULL;
    panda$collections$HashMap$Entry* $tmp110;
    panda$collections$HashMap$Entry* $tmp121;
    panda$collections$HashMap$Entry* $tmp122;
    panda$core$Object* $returnValue123;
    panda$core$Object* $tmp124;
    panda$core$Object* $tmp127;
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
        panda$core$Bit $tmp119 = $tmp117(((panda$core$Equatable*) e109->key), ((panda$core$Equatable*) p_key));
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
            $returnValue123 = $tmp124;
            panda$core$Panda$ref$panda$core$Object($tmp124);
            $tmp106 = 0;
            goto $l104;
            $l125:;
            return $returnValue123;
        }
        }
        else {
        {
            $tmp127 = NULL;
            $returnValue123 = $tmp127;
            panda$core$Panda$ref$panda$core$Object($tmp127);
            $tmp106 = 1;
            goto $l104;
            $l128:;
            return $returnValue123;
        }
        }
    }
    $tmp106 = -1;
    goto $l104;
    $l104:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e109));
    e109 = NULL;
    switch ($tmp106) {
        case -1: goto $l130;
        case 1: goto $l128;
        case 0: goto $l125;
    }
    $l130:;
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index134;
    panda$collections$HashMap$Entry* e136 = NULL;
    panda$collections$HashMap$Entry* $tmp137;
    panda$collections$HashMap$Entry* $tmp148;
    panda$collections$HashMap$Entry* $tmp149;
    panda$core$Bit $returnValue150;
    int $tmp133;
    {
        panda$core$Int64 $tmp135 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index134 = $tmp135;
        $tmp137 = self->contents[index134.value];
        e136 = $tmp137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp137));
        $l138:;
        bool $tmp141 = ((panda$core$Bit) { e136 != NULL }).value;
        if (!$tmp141) goto $l142;
        ITable* $tmp143 = ((panda$core$Equatable*) e136->key)->$class->itable;
        while ($tmp143->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp143 = $tmp143->next;
        }
        $fn145 $tmp144 = $tmp143->methods[1];
        panda$core$Bit $tmp146 = $tmp144(((panda$core$Equatable*) e136->key), ((panda$core$Equatable*) p_key));
        $tmp141 = $tmp146.value;
        $l142:;
        panda$core$Bit $tmp147 = { $tmp141 };
        bool $tmp140 = $tmp147.value;
        if (!$tmp140) goto $l139;
        {
            {
                $tmp148 = e136;
                $tmp149 = e136->next;
                e136 = $tmp149;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
            }
        }
        goto $l138;
        $l139:;
        $returnValue150 = ((panda$core$Bit) { e136 != NULL });
        $tmp133 = 0;
        goto $l131;
        $l151:;
        return $returnValue150;
    }
    $l131:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e136));
    e136 = NULL;
    switch ($tmp133) {
        case 0: goto $l151;
    }
    $l153:;
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index158;
    panda$collections$HashMap$Entry* e160 = NULL;
    panda$collections$HashMap$Entry* $tmp161;
    panda$collections$HashMap$Entry* $tmp172;
    panda$collections$HashMap$Entry* $tmp173;
    panda$collections$HashMap$Entry* old177 = NULL;
    panda$collections$HashMap$Entry* $tmp178;
    panda$collections$HashMap$Entry* $tmp179;
    panda$collections$HashMap$Entry* $tmp180;
    panda$collections$HashMap$Entry* $tmp181;
    panda$collections$HashMap$Entry* $tmp183;
    panda$collections$HashMap$Entry* $tmp184;
    panda$collections$HashMap$Entry** $tmp185;
    panda$core$Int64 $tmp186;
    panda$collections$HashMap$Entry* $tmp187;
    panda$core$Object* $tmp189;
    panda$core$Object* $tmp190;
    int $tmp156;
    {
        panda$core$Int64 $tmp157 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp157;
        panda$core$Int64 $tmp159 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index158 = $tmp159;
        $tmp161 = self->contents[index158.value];
        e160 = $tmp161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
        $l162:;
        bool $tmp165 = ((panda$core$Bit) { e160 != NULL }).value;
        if (!$tmp165) goto $l166;
        ITable* $tmp167 = ((panda$core$Equatable*) e160->key)->$class->itable;
        while ($tmp167->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp167 = $tmp167->next;
        }
        $fn169 $tmp168 = $tmp167->methods[1];
        panda$core$Bit $tmp170 = $tmp168(((panda$core$Equatable*) e160->key), ((panda$core$Equatable*) p_key));
        $tmp165 = $tmp170.value;
        $l166:;
        panda$core$Bit $tmp171 = { $tmp165 };
        bool $tmp164 = $tmp171.value;
        if (!$tmp164) goto $l163;
        {
            {
                $tmp172 = e160;
                $tmp173 = e160->next;
                e160 = $tmp173;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp172));
            }
        }
        goto $l162;
        $l163:;
        if (((panda$core$Bit) { e160 == NULL }).value) {
        {
            int $tmp176;
            {
                $tmp178 = self->contents[index158.value];
                old177 = $tmp178;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp178));
                {
                    $tmp179 = e160;
                    panda$collections$HashMap$Entry* $tmp182 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
                    panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp182, p_key, p_value);
                    $tmp181 = $tmp182;
                    $tmp180 = $tmp181;
                    e160 = $tmp180;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp180));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
                }
                {
                    $tmp183 = e160->next;
                    $tmp184 = old177;
                    e160->next = $tmp184;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                }
                {
                    $tmp185 = self->contents;
                    $tmp186 = index158;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185[$tmp186.value]));
                    $tmp187 = e160;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
                    $tmp185[$tmp186.value] = $tmp187;
                }
                panda$collections$HashMap$incrementCount(self);
            }
            $tmp176 = -1;
            goto $l174;
            $l174:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old177));
            old177 = NULL;
            switch ($tmp176) {
                case -1: goto $l188;
            }
            $l188:;
        }
        }
        else {
        {
            {
                $tmp189 = e160->value;
                $tmp190 = p_value;
                e160->value = $tmp190;
                panda$core$Panda$ref$panda$core$Object($tmp190);
                panda$core$Panda$unref$panda$core$Object($tmp189);
            }
        }
        }
    }
    $tmp156 = -1;
    goto $l154;
    $l154:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e160));
    e160 = NULL;
    switch ($tmp156) {
        case -1: goto $l191;
    }
    $l191:;
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index196;
    panda$collections$HashMap$Entry* e198 = NULL;
    panda$collections$HashMap$Entry* $tmp199;
    panda$collections$HashMap$Entry** $tmp205;
    panda$core$Int64 $tmp206;
    panda$collections$HashMap$Entry* $tmp207;
    panda$collections$HashMap$Entry* next215 = NULL;
    panda$collections$HashMap$Entry* $tmp216;
    panda$collections$HashMap$Entry* $tmp224;
    panda$collections$HashMap$Entry* $tmp225;
    panda$collections$HashMap$Entry* next227 = NULL;
    panda$collections$HashMap$Entry* $tmp228;
    panda$collections$HashMap$Entry* $tmp229;
    panda$collections$HashMap$Entry* $tmp230;
    int $tmp194;
    {
        panda$core$Int64 $tmp195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp195;
        panda$core$Int64 $tmp197 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
        index196 = $tmp197;
        $tmp199 = self->contents[index196.value];
        e198 = $tmp199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
        if (((panda$core$Bit) { e198 == NULL }).value) {
        {
            $tmp194 = 0;
            goto $l192;
            $l200:;
            return;
        }
        }
        ITable* $tmp201 = ((panda$core$Equatable*) e198->key)->$class->itable;
        while ($tmp201->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp201 = $tmp201->next;
        }
        $fn203 $tmp202 = $tmp201->methods[0];
        panda$core$Bit $tmp204 = $tmp202(((panda$core$Equatable*) e198->key), ((panda$core$Equatable*) p_key));
        if ($tmp204.value) {
        {
            {
                $tmp205 = self->contents;
                $tmp206 = index196;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp205[$tmp206.value]));
                $tmp207 = e198->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
                $tmp205[$tmp206.value] = $tmp207;
            }
            panda$core$Int64 $tmp208 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
            self->_count = $tmp208;
            $tmp194 = 1;
            goto $l192;
            $l209:;
            return;
        }
        }
        $l210:;
        while (true) {
        {
            int $tmp214;
            {
                $tmp216 = e198->next;
                next215 = $tmp216;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp216));
                if (((panda$core$Bit) { next215 == NULL }).value) {
                {
                    $tmp214 = 0;
                    goto $l212;
                    $l217:;
                    $tmp194 = 2;
                    goto $l192;
                    $l218:;
                    return;
                }
                }
                ITable* $tmp219 = ((panda$core$Equatable*) next215->key)->$class->itable;
                while ($tmp219->$class != (panda$core$Class*) &panda$core$Equatable$class) {
                    $tmp219 = $tmp219->next;
                }
                $fn221 $tmp220 = $tmp219->methods[0];
                panda$core$Bit $tmp222 = $tmp220(((panda$core$Equatable*) next215->key), ((panda$core$Equatable*) p_key));
                if ($tmp222.value) {
                {
                    $tmp214 = 1;
                    goto $l212;
                    $l223:;
                    goto $l211;
                }
                }
                {
                    $tmp224 = e198;
                    $tmp225 = next215;
                    e198 = $tmp225;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
                }
            }
            $tmp214 = -1;
            goto $l212;
            $l212:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next215));
            next215 = NULL;
            switch ($tmp214) {
                case -1: goto $l226;
                case 0: goto $l217;
                case 1: goto $l223;
            }
            $l226:;
        }
        }
        $l211:;
        $tmp228 = e198->next;
        next227 = $tmp228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
        PANDA_ASSERT(((panda$core$Bit) { next227 != NULL }).value);
        {
            $tmp229 = e198->next;
            $tmp230 = next227->next;
            e198->next = $tmp230;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp230));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
        }
        panda$core$Int64 $tmp231 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp231;
    }
    $tmp194 = -1;
    goto $l192;
    $l192:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e198));
    e198 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next227));
    next227 = NULL;
    switch ($tmp194) {
        case -1: goto $l232;
        case 2: goto $l218;
        case 0: goto $l200;
        case 1: goto $l209;
    }
    $l232:;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp234;
    panda$core$Range$LTpanda$core$Int64$GT $tmp254;
    panda$collections$HashMap$Entry** $tmp268;
    panda$core$Int64 $tmp269;
    panda$collections$HashMap$Entry* $tmp270;
    panda$core$Int64 $tmp233 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp233;
    self->_count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp234, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp236 = $tmp234.min.value;
    panda$core$Int64 i235 = { $tmp236 };
    int64_t $tmp238 = $tmp234.max.value;
    bool $tmp239 = $tmp234.inclusive.value;
    if ($tmp239) goto $l246; else goto $l247;
    $l246:;
    if ($tmp236 <= $tmp238) goto $l240; else goto $l242;
    $l247:;
    if ($tmp236 < $tmp238) goto $l240; else goto $l242;
    $l240:;
    {
        if (((panda$core$Bit) { self->contents[i235.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i235.value]));
        }
        }
    }
    $l243:;
    int64_t $tmp249 = $tmp238 - i235.value;
    if ($tmp239) goto $l250; else goto $l251;
    $l250:;
    if ((uint64_t) $tmp249 >= 1) goto $l248; else goto $l242;
    $l251:;
    if ((uint64_t) $tmp249 > 1) goto $l248; else goto $l242;
    $l248:;
    i235.value += 1;
    goto $l240;
    $l242:;
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp254, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp256 = $tmp254.min.value;
    panda$core$Int64 i255 = { $tmp256 };
    int64_t $tmp258 = $tmp254.max.value;
    bool $tmp259 = $tmp254.inclusive.value;
    if ($tmp259) goto $l266; else goto $l267;
    $l266:;
    if ($tmp256 <= $tmp258) goto $l260; else goto $l262;
    $l267:;
    if ($tmp256 < $tmp258) goto $l260; else goto $l262;
    $l260:;
    {
        if (((panda$core$Bit) { self->contents[i255.value] != NULL }).value) {
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
    panda$core$Int64 $tmp277 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp278 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp277, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp278;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents281;
    panda$core$Int64 oldBucketCount282;
    panda$core$Range$LTpanda$core$Int64$GT $tmp284;
    panda$collections$HashMap$Entry** $tmp298;
    panda$core$Int64 $tmp299;
    panda$collections$HashMap$Entry* $tmp300;
    panda$core$Range$LTpanda$core$Int64$GT $tmp308;
    panda$collections$HashMap$Entry* e325 = NULL;
    panda$collections$HashMap$Entry* $tmp326;
    panda$collections$HashMap$Entry* $tmp330;
    panda$collections$HashMap$Entry* $tmp331;
    panda$core$Range$LTpanda$core$Int64$GT $tmp339;
    panda$core$Int64 $tmp279 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp279;
    panda$core$Bit $tmp280 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp280.value) {
    {
        oldContents281 = self->contents;
        oldBucketCount282 = self->bucketCount;
        panda$core$Int64 $tmp283 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp283;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp284, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp286 = $tmp284.min.value;
        panda$core$Int64 i285 = { $tmp286 };
        int64_t $tmp288 = $tmp284.max.value;
        bool $tmp289 = $tmp284.inclusive.value;
        if ($tmp289) goto $l296; else goto $l297;
        $l296:;
        if ($tmp286 <= $tmp288) goto $l290; else goto $l292;
        $l297:;
        if ($tmp286 < $tmp288) goto $l290; else goto $l292;
        $l290:;
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
        panda$core$Int64 $tmp307 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp307;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp308, ((panda$core$Int64) { 0 }), oldBucketCount282, ((panda$core$Bit) { false }));
        int64_t $tmp310 = $tmp308.min.value;
        panda$core$Int64 i309 = { $tmp310 };
        int64_t $tmp312 = $tmp308.max.value;
        bool $tmp313 = $tmp308.inclusive.value;
        if ($tmp313) goto $l320; else goto $l321;
        $l320:;
        if ($tmp310 <= $tmp312) goto $l314; else goto $l316;
        $l321:;
        if ($tmp310 < $tmp312) goto $l314; else goto $l316;
        $l314:;
        {
            int $tmp324;
            {
                $tmp326 = oldContents281[i309.value];
                e325 = $tmp326;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
                $l327:;
                bool $tmp329 = ((panda$core$Bit) { e325 != NULL }).value;
                if (!$tmp329) goto $l328;
                {
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e325->key, e325->value);
                    {
                        $tmp330 = e325;
                        $tmp331 = e325->next;
                        e325 = $tmp331;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                    }
                }
                goto $l327;
                $l328:;
            }
            $tmp324 = -1;
            goto $l322;
            $l322:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e325));
            e325 = NULL;
            switch ($tmp324) {
                case -1: goto $l332;
            }
            $l332:;
        }
        $l317:;
        int64_t $tmp334 = $tmp312 - i309.value;
        if ($tmp313) goto $l335; else goto $l336;
        $l335:;
        if ((uint64_t) $tmp334 >= 1) goto $l333; else goto $l316;
        $l336:;
        if ((uint64_t) $tmp334 > 1) goto $l333; else goto $l316;
        $l333:;
        i309.value += 1;
        goto $l314;
        $l316:;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp339, ((panda$core$Int64) { 0 }), oldBucketCount282, ((panda$core$Bit) { false }));
        int64_t $tmp341 = $tmp339.min.value;
        panda$core$Int64 i340 = { $tmp341 };
        int64_t $tmp343 = $tmp339.max.value;
        bool $tmp344 = $tmp339.inclusive.value;
        if ($tmp344) goto $l351; else goto $l352;
        $l351:;
        if ($tmp341 <= $tmp343) goto $l345; else goto $l347;
        $l352:;
        if ($tmp341 < $tmp343) goto $l345; else goto $l347;
        $l345:;
        {
            if (((panda$core$Bit) { oldContents281[i340.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents281[i340.value]));
            }
            }
        }
        $l348:;
        int64_t $tmp354 = $tmp343 - i340.value;
        if ($tmp344) goto $l355; else goto $l356;
        $l355:;
        if ((uint64_t) $tmp354 >= 1) goto $l353; else goto $l347;
        $l356:;
        if ((uint64_t) $tmp354 > 1) goto $l353; else goto $l347;
        $l353:;
        i340.value += 1;
        goto $l345;
        $l347:;
        pandaFree(oldContents281);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue359;
    panda$collections$Iterator* $tmp360;
    panda$collections$HashMap$KeyIterator* $tmp361;
    panda$collections$HashMap$KeyIterator* $tmp362 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp362, self);
    $tmp361 = $tmp362;
    $tmp360 = ((panda$collections$Iterator*) $tmp361);
    $returnValue359 = $tmp360;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp360));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
    return $returnValue359;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue364;
    panda$collections$Iterator* $tmp365;
    panda$collections$HashMap$ValueIterator* $tmp366;
    panda$collections$HashMap$ValueIterator* $tmp367 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp367, self);
    $tmp366 = $tmp367;
    $tmp365 = ((panda$collections$Iterator*) $tmp366);
    $returnValue364 = $tmp365;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp365));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp366));
    return $returnValue364;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $returnValue369;
    $returnValue369 = self->_count;
    return $returnValue369;
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result374 = NULL;
    panda$core$MutableString* $tmp375;
    panda$core$MutableString* $tmp376;
    panda$core$Char8 $tmp378;
    panda$core$String* separator379 = NULL;
    panda$core$String* $tmp380;
    panda$core$Range$LTpanda$core$Int64$GT $tmp382;
    panda$collections$HashMap$Entry* entry399 = NULL;
    panda$collections$HashMap$Entry* $tmp400;
    panda$core$Char8 $tmp405;
    panda$collections$HashMap$Entry* $tmp407;
    panda$collections$HashMap$Entry* $tmp408;
    panda$core$String* $tmp409;
    panda$core$String* $tmp410;
    panda$core$Char8 $tmp419;
    panda$core$String* $returnValue420;
    panda$core$String* $tmp421;
    panda$core$String* $tmp422;
    int $tmp373;
    {
        panda$core$MutableString* $tmp377 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp377);
        $tmp376 = $tmp377;
        $tmp375 = $tmp376;
        result374 = $tmp375;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
        panda$core$Char8$init$panda$core$UInt8(&$tmp378, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result374, $tmp378);
        $tmp380 = &$s381;
        separator379 = $tmp380;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp380));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp382, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp384 = $tmp382.min.value;
        panda$core$Int64 i383 = { $tmp384 };
        int64_t $tmp386 = $tmp382.max.value;
        bool $tmp387 = $tmp382.inclusive.value;
        if ($tmp387) goto $l394; else goto $l395;
        $l394:;
        if ($tmp384 <= $tmp386) goto $l388; else goto $l390;
        $l395:;
        if ($tmp384 < $tmp386) goto $l388; else goto $l390;
        $l388:;
        {
            int $tmp398;
            {
                $tmp400 = self->contents[i383.value];
                entry399 = $tmp400;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp400));
                $l401:;
                bool $tmp403 = ((panda$core$Bit) { entry399 != NULL }).value;
                if (!$tmp403) goto $l402;
                {
                    panda$core$MutableString$append$panda$core$String(result374, separator379);
                    if (((panda$core$Bit) { entry399->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result374, ((panda$core$Object*) entry399->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result374, &$s404);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp405, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result374, $tmp405);
                    if (((panda$core$Bit) { entry399->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result374, entry399->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result374, &$s406);
                    }
                    }
                    {
                        $tmp407 = entry399;
                        $tmp408 = entry399->next;
                        entry399 = $tmp408;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                    }
                    {
                        $tmp409 = separator379;
                        $tmp410 = &$s411;
                        separator379 = $tmp410;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                    }
                }
                goto $l401;
                $l402:;
            }
            $tmp398 = -1;
            goto $l396;
            $l396:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry399));
            entry399 = NULL;
            switch ($tmp398) {
                case -1: goto $l412;
            }
            $l412:;
        }
        $l391:;
        int64_t $tmp414 = $tmp386 - i383.value;
        if ($tmp387) goto $l415; else goto $l416;
        $l415:;
        if ((uint64_t) $tmp414 >= 1) goto $l413; else goto $l390;
        $l416:;
        if ((uint64_t) $tmp414 > 1) goto $l413; else goto $l390;
        $l413:;
        i383.value += 1;
        goto $l388;
        $l390:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp419, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result374, $tmp419);
        panda$core$String* $tmp423 = panda$core$MutableString$finish$R$panda$core$String(result374);
        $tmp422 = $tmp423;
        $tmp421 = $tmp422;
        $returnValue420 = $tmp421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
        $tmp373 = 0;
        goto $l371;
        $l424:;
        return $returnValue420;
    }
    $l371:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result374));
    result374 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator379));
    separator379 = NULL;
    switch ($tmp373) {
        case 0: goto $l424;
    }
    $l426:;
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$core$Class* $tmp427;
    panda$core$Class* $tmp428;
    panda$collections$ImmutableHashMap* $tmp429;
    panda$collections$ImmutableHashMap* $returnValue431;
    panda$collections$ImmutableHashMap* $tmp432;
    {
        $tmp427 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp430 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp430);
        $tmp429 = $tmp430;
        $tmp428 = ((panda$core$Object*) $tmp429)->$class;
        ((panda$core$Object*) self)->$class = $tmp428;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
    }
    $tmp432 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    $returnValue431 = $tmp432;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
    return $returnValue431;
}

