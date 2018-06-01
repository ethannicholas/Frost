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
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim(panda$collections$HashMap* p0, panda$core$Object* p1) {
    panda$core$Object* result = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(p0, ((panda$collections$Key*) p1));

    return result;
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim(panda$collections$HashMap* p0) {
    panda$collections$Iterator* result = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(p0);

    return result;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim(panda$collections$HashMap* p0) {
    panda$collections$Iterator* result = panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(p0);

    return result;
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim(panda$collections$HashMap* p0, panda$core$Object* p1, panda$core$Object* p2) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(p0, ((panda$collections$Key*) p1), p2);

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
static panda$core$String $s231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    abort();
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
    abort();
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
    panda$collections$HashMap$Entry* $tmp232;
    panda$collections$HashMap$Entry* $tmp233;
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
        if (((panda$core$Bit) { next227 != NULL }).value) goto $l229; else goto $l230;
        $l230:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s231, (panda$core$Int64) { 260 });
        abort();
        $l229:;
        {
            $tmp232 = e198->next;
            $tmp233 = next227->next;
            e198->next = $tmp233;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
        }
        panda$core$Int64 $tmp234 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp234;
    }
    $tmp194 = -1;
    goto $l192;
    $l192:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next227));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e198));
    e198 = NULL;
    next227 = NULL;
    switch ($tmp194) {
        case 2: goto $l218;
        case 0: goto $l200;
        case -1: goto $l235;
        case 1: goto $l209;
    }
    $l235:;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp237;
    panda$core$Range$LTpanda$core$Int64$GT $tmp257;
    panda$collections$HashMap$Entry** $tmp271;
    panda$core$Int64 $tmp272;
    panda$collections$HashMap$Entry* $tmp273;
    panda$core$Int64 $tmp236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp236;
    self->_count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp237, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp239 = $tmp237.min.value;
    panda$core$Int64 i238 = { $tmp239 };
    int64_t $tmp241 = $tmp237.max.value;
    bool $tmp242 = $tmp237.inclusive.value;
    if ($tmp242) goto $l249; else goto $l250;
    $l249:;
    if ($tmp239 <= $tmp241) goto $l243; else goto $l245;
    $l250:;
    if ($tmp239 < $tmp241) goto $l243; else goto $l245;
    $l243:;
    {
        if (((panda$core$Bit) { self->contents[i238.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i238.value]));
        }
        }
    }
    $l246:;
    int64_t $tmp252 = $tmp241 - i238.value;
    if ($tmp242) goto $l253; else goto $l254;
    $l253:;
    if ((uint64_t) $tmp252 >= 1) goto $l251; else goto $l245;
    $l254:;
    if ((uint64_t) $tmp252 > 1) goto $l251; else goto $l245;
    $l251:;
    i238.value += 1;
    goto $l243;
    $l245:;
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp257, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp259 = $tmp257.min.value;
    panda$core$Int64 i258 = { $tmp259 };
    int64_t $tmp261 = $tmp257.max.value;
    bool $tmp262 = $tmp257.inclusive.value;
    if ($tmp262) goto $l269; else goto $l270;
    $l269:;
    if ($tmp259 <= $tmp261) goto $l263; else goto $l265;
    $l270:;
    if ($tmp259 < $tmp261) goto $l263; else goto $l265;
    $l263:;
    {
        if (((panda$core$Bit) { self->contents[i258.value] != NULL }).value) {
        {
            {
                $tmp271 = self->contents;
                $tmp272 = i258;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271[$tmp272.value]));
                $tmp273 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
                $tmp271[$tmp272.value] = $tmp273;
            }
        }
        }
    }
    $l266:;
    int64_t $tmp275 = $tmp261 - i258.value;
    if ($tmp262) goto $l276; else goto $l277;
    $l276:;
    if ((uint64_t) $tmp275 >= 1) goto $l274; else goto $l265;
    $l277:;
    if ((uint64_t) $tmp275 > 1) goto $l274; else goto $l265;
    $l274:;
    i258.value += 1;
    goto $l263;
    $l265:;
    panda$core$Int64 $tmp280 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp281 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp280, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp281;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents284;
    panda$core$Int64 oldBucketCount285;
    panda$core$Range$LTpanda$core$Int64$GT $tmp287;
    panda$collections$HashMap$Entry** $tmp301;
    panda$core$Int64 $tmp302;
    panda$collections$HashMap$Entry* $tmp303;
    panda$core$Range$LTpanda$core$Int64$GT $tmp311;
    panda$collections$HashMap$Entry* e328 = NULL;
    panda$collections$HashMap$Entry* $tmp329;
    panda$collections$HashMap$Entry* $tmp333;
    panda$collections$HashMap$Entry* $tmp334;
    panda$core$Range$LTpanda$core$Int64$GT $tmp342;
    panda$core$Int64 $tmp282 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp282;
    panda$core$Bit $tmp283 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp283.value) {
    {
        oldContents284 = self->contents;
        oldBucketCount285 = self->bucketCount;
        panda$core$Int64 $tmp286 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp286;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp287, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp289 = $tmp287.min.value;
        panda$core$Int64 i288 = { $tmp289 };
        int64_t $tmp291 = $tmp287.max.value;
        bool $tmp292 = $tmp287.inclusive.value;
        if ($tmp292) goto $l299; else goto $l300;
        $l299:;
        if ($tmp289 <= $tmp291) goto $l293; else goto $l295;
        $l300:;
        if ($tmp289 < $tmp291) goto $l293; else goto $l295;
        $l293:;
        {
            {
                $tmp301 = self->contents;
                $tmp302 = i288;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp301[$tmp302.value]));
                $tmp303 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp303));
                $tmp301[$tmp302.value] = $tmp303;
            }
        }
        $l296:;
        int64_t $tmp305 = $tmp291 - i288.value;
        if ($tmp292) goto $l306; else goto $l307;
        $l306:;
        if ((uint64_t) $tmp305 >= 1) goto $l304; else goto $l295;
        $l307:;
        if ((uint64_t) $tmp305 > 1) goto $l304; else goto $l295;
        $l304:;
        i288.value += 1;
        goto $l293;
        $l295:;
        panda$core$Int64 $tmp310 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp310;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp311, ((panda$core$Int64) { 0 }), oldBucketCount285, ((panda$core$Bit) { false }));
        int64_t $tmp313 = $tmp311.min.value;
        panda$core$Int64 i312 = { $tmp313 };
        int64_t $tmp315 = $tmp311.max.value;
        bool $tmp316 = $tmp311.inclusive.value;
        if ($tmp316) goto $l323; else goto $l324;
        $l323:;
        if ($tmp313 <= $tmp315) goto $l317; else goto $l319;
        $l324:;
        if ($tmp313 < $tmp315) goto $l317; else goto $l319;
        $l317:;
        {
            int $tmp327;
            {
                $tmp329 = oldContents284[i312.value];
                e328 = $tmp329;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp329));
                $l330:;
                bool $tmp332 = ((panda$core$Bit) { e328 != NULL }).value;
                if (!$tmp332) goto $l331;
                {
                    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e328->key, e328->value);
                    {
                        $tmp333 = e328;
                        $tmp334 = e328->next;
                        e328 = $tmp334;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp333));
                    }
                }
                goto $l330;
                $l331:;
            }
            $tmp327 = -1;
            goto $l325;
            $l325:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e328));
            e328 = NULL;
            switch ($tmp327) {
                case -1: goto $l335;
            }
            $l335:;
        }
        $l320:;
        int64_t $tmp337 = $tmp315 - i312.value;
        if ($tmp316) goto $l338; else goto $l339;
        $l338:;
        if ((uint64_t) $tmp337 >= 1) goto $l336; else goto $l319;
        $l339:;
        if ((uint64_t) $tmp337 > 1) goto $l336; else goto $l319;
        $l336:;
        i312.value += 1;
        goto $l317;
        $l319:;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp342, ((panda$core$Int64) { 0 }), oldBucketCount285, ((panda$core$Bit) { false }));
        int64_t $tmp344 = $tmp342.min.value;
        panda$core$Int64 i343 = { $tmp344 };
        int64_t $tmp346 = $tmp342.max.value;
        bool $tmp347 = $tmp342.inclusive.value;
        if ($tmp347) goto $l354; else goto $l355;
        $l354:;
        if ($tmp344 <= $tmp346) goto $l348; else goto $l350;
        $l355:;
        if ($tmp344 < $tmp346) goto $l348; else goto $l350;
        $l348:;
        {
            if (((panda$core$Bit) { oldContents284[i343.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents284[i343.value]));
            }
            }
        }
        $l351:;
        int64_t $tmp357 = $tmp346 - i343.value;
        if ($tmp347) goto $l358; else goto $l359;
        $l358:;
        if ((uint64_t) $tmp357 >= 1) goto $l356; else goto $l350;
        $l359:;
        if ((uint64_t) $tmp357 > 1) goto $l356; else goto $l350;
        $l356:;
        i343.value += 1;
        goto $l348;
        $l350:;
        pandaFree(oldContents284);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue362;
    panda$collections$Iterator* $tmp363;
    panda$collections$HashMap$KeyIterator* $tmp364;
    panda$collections$HashMap$KeyIterator* $tmp365 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp365, self);
    $tmp364 = $tmp365;
    $tmp363 = ((panda$collections$Iterator*) $tmp364);
    $returnValue362 = $tmp363;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
    return $returnValue362;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$Iterator* $returnValue367;
    panda$collections$Iterator* $tmp368;
    panda$collections$HashMap$ValueIterator* $tmp369;
    panda$collections$HashMap$ValueIterator* $tmp370 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp370, self);
    $tmp369 = $tmp370;
    $tmp368 = ((panda$collections$Iterator*) $tmp369);
    $returnValue367 = $tmp368;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
    return $returnValue367;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $returnValue372;
    $returnValue372 = self->_count;
    return $returnValue372;
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result377 = NULL;
    panda$core$MutableString* $tmp378;
    panda$core$MutableString* $tmp379;
    panda$core$Char8 $tmp381;
    panda$core$String* separator382 = NULL;
    panda$core$String* $tmp383;
    panda$core$Range$LTpanda$core$Int64$GT $tmp385;
    panda$collections$HashMap$Entry* entry402 = NULL;
    panda$collections$HashMap$Entry* $tmp403;
    panda$core$Char8 $tmp408;
    panda$collections$HashMap$Entry* $tmp410;
    panda$collections$HashMap$Entry* $tmp411;
    panda$core$String* $tmp412;
    panda$core$String* $tmp413;
    panda$core$Char8 $tmp422;
    panda$core$String* $returnValue423;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    int $tmp376;
    {
        panda$core$MutableString* $tmp380 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp380);
        $tmp379 = $tmp380;
        $tmp378 = $tmp379;
        result377 = $tmp378;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
        panda$core$Char8$init$panda$core$UInt8(&$tmp381, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result377, $tmp381);
        $tmp383 = &$s384;
        separator382 = $tmp383;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp385, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp387 = $tmp385.min.value;
        panda$core$Int64 i386 = { $tmp387 };
        int64_t $tmp389 = $tmp385.max.value;
        bool $tmp390 = $tmp385.inclusive.value;
        if ($tmp390) goto $l397; else goto $l398;
        $l397:;
        if ($tmp387 <= $tmp389) goto $l391; else goto $l393;
        $l398:;
        if ($tmp387 < $tmp389) goto $l391; else goto $l393;
        $l391:;
        {
            int $tmp401;
            {
                $tmp403 = self->contents[i386.value];
                entry402 = $tmp403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
                $l404:;
                bool $tmp406 = ((panda$core$Bit) { entry402 != NULL }).value;
                if (!$tmp406) goto $l405;
                {
                    panda$core$MutableString$append$panda$core$String(result377, separator382);
                    if (((panda$core$Bit) { entry402->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result377, ((panda$core$Object*) entry402->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result377, &$s407);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp408, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result377, $tmp408);
                    if (((panda$core$Bit) { entry402->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result377, entry402->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result377, &$s409);
                    }
                    }
                    {
                        $tmp410 = entry402;
                        $tmp411 = entry402->next;
                        entry402 = $tmp411;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
                    }
                    {
                        $tmp412 = separator382;
                        $tmp413 = &$s414;
                        separator382 = $tmp413;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
                    }
                }
                goto $l404;
                $l405:;
            }
            $tmp401 = -1;
            goto $l399;
            $l399:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry402));
            entry402 = NULL;
            switch ($tmp401) {
                case -1: goto $l415;
            }
            $l415:;
        }
        $l394:;
        int64_t $tmp417 = $tmp389 - i386.value;
        if ($tmp390) goto $l418; else goto $l419;
        $l418:;
        if ((uint64_t) $tmp417 >= 1) goto $l416; else goto $l393;
        $l419:;
        if ((uint64_t) $tmp417 > 1) goto $l416; else goto $l393;
        $l416:;
        i386.value += 1;
        goto $l391;
        $l393:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp422, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result377, $tmp422);
        panda$core$String* $tmp426 = panda$core$MutableString$finish$R$panda$core$String(result377);
        $tmp425 = $tmp426;
        $tmp424 = $tmp425;
        $returnValue423 = $tmp424;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
        $tmp376 = 0;
        goto $l374;
        $l427:;
        return $returnValue423;
    }
    $l374:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator382));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result377));
    result377 = NULL;
    separator382 = NULL;
    switch ($tmp376) {
        case 0: goto $l427;
    }
    $l429:;
    abort();
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$core$Class* $tmp430;
    panda$core$Class* $tmp431;
    panda$collections$ImmutableHashMap* $tmp432;
    panda$collections$ImmutableHashMap* $returnValue434;
    panda$collections$ImmutableHashMap* $tmp435;
    {
        $tmp430 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp433 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp433);
        $tmp432 = $tmp433;
        $tmp431 = ((panda$core$Object*) $tmp432)->$class;
        ((panda$core$Object*) self)->$class = $tmp431;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
    }
    $tmp435 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    $returnValue434 = $tmp435;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp435));
    return $returnValue434;
}

