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

typedef panda$collections$Iterator* (*$fn33)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn48)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn53)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn78)(panda$collections$Key*);
typedef panda$core$Bit (*$fn102)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn124)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn143)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn168)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn180)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
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
            panda$collections$HashMap$Entry** $tmp17 = self->contents;
            panda$core$Int64 $tmp18 = i4;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17[$tmp18.value]));
            panda$collections$HashMap$Entry* $tmp19 = NULL;
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
    panda$collections$Iterator* Iter$152$928;
    panda$collections$Key* k43;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$init(self);
    {
        ITable* $tmp31 = p_map->$class->itable;
        while ($tmp31->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp31 = $tmp31->next;
        }
        $fn33 $tmp32 = $tmp31->methods[2];
        panda$collections$Iterator* $tmp34 = $tmp32(p_map);
        panda$collections$Iterator* $tmp30 = $tmp34;
        panda$collections$Iterator* $tmp29 = $tmp30;
        Iter$152$928 = $tmp29;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
        $l35:;
        ITable* $tmp38 = Iter$152$928->$class->itable;
        while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp38 = $tmp38->next;
        }
        $fn40 $tmp39 = $tmp38->methods[0];
        panda$core$Bit $tmp41 = $tmp39(Iter$152$928);
        panda$core$Bit $tmp42 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp41);
        bool $tmp37 = $tmp42.value;
        if (!$tmp37) goto $l36;
        {
            ITable* $tmp46 = Iter$152$928->$class->itable;
            while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp46 = $tmp46->next;
            }
            $fn48 $tmp47 = $tmp46->methods[1];
            panda$core$Object* $tmp49 = $tmp47(Iter$152$928);
            panda$core$Object* $tmp45 = $tmp49;
            panda$collections$Key* $tmp44 = ((panda$collections$Key*) $tmp45);
            k43 = $tmp44;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
            panda$core$Panda$unref$panda$core$Object($tmp45);
            ITable* $tmp51 = p_map->$class->itable;
            while ($tmp51->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp51 = $tmp51->next;
            }
            $fn53 $tmp52 = $tmp51->methods[1];
            panda$core$Object* $tmp54 = $tmp52(p_map, ((panda$core$Object*) k43));
            panda$core$Object* $tmp50 = $tmp54;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k43, $tmp50);
            panda$core$Panda$unref$panda$core$Object($tmp50);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k43));
        }
        goto $l35;
        $l36:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$152$928));
    }
}
void panda$collections$HashMap$cleanup(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp55;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp55, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp57 = $tmp55.min.value;
    panda$core$Int64 i56 = { $tmp57 };
    int64_t $tmp59 = $tmp55.max.value;
    bool $tmp60 = $tmp55.inclusive.value;
    if ($tmp60) goto $l67; else goto $l68;
    $l67:;
    if ($tmp57 <= $tmp59) goto $l61; else goto $l63;
    $l68:;
    if ($tmp57 < $tmp59) goto $l61; else goto $l63;
    $l61:;
    {
        if (((panda$core$Bit) { self->contents[i56.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i56.value]));
        }
        }
    }
    $l64:;
    int64_t $tmp70 = $tmp59 - i56.value;
    if ($tmp60) goto $l71; else goto $l72;
    $l71:;
    if ((uint64_t) $tmp70 >= 1) goto $l69; else goto $l63;
    $l72:;
    if ((uint64_t) $tmp70 > 1) goto $l69; else goto $l63;
    $l69:;
    i56.value += 1;
    goto $l61;
    $l63:;
    pandaFree(self->contents);
    panda$core$Object$cleanup(((panda$core$Object*) self));
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h75;
    memset(&h75, 0, sizeof(h75));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h75 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp76 = p_key->$class->itable;
        while ($tmp76->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp76 = $tmp76->next;
        }
        $fn78 $tmp77 = $tmp76->methods[0];
        panda$core$Int64 $tmp79 = $tmp77(p_key);
        h75 = $tmp79;
    }
    }
    panda$core$Int64 $tmp80 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h75, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp81 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h75, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp82 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp80, $tmp81);
    panda$core$Int64 $tmp83 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h75, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp84 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp82, $tmp83);
    panda$core$Int64 $tmp85 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h75, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp86 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp84, $tmp85);
    panda$core$Int64 $tmp87 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h75, $tmp86);
    h75 = $tmp87;
    panda$core$Int64 $tmp88 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp89 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h75, $tmp88);
    h75 = $tmp89;
    panda$core$Int64 $tmp90 = h75;
    return $tmp90;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index91;
    panda$collections$HashMap$Entry* e93;
    panda$core$Object* tmp1107;
    panda$core$Object* tmp2110;
    panda$core$Int64 $tmp92 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index91 = $tmp92;
    panda$collections$HashMap$Entry* $tmp94 = self->contents[index91.value];
    e93 = $tmp94;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
    $l95:;
    bool $tmp98 = ((panda$core$Bit) { e93 != NULL }).value;
    if (!$tmp98) goto $l99;
    ITable* $tmp100 = ((panda$core$Equatable*) e93->key)->$class->itable;
    while ($tmp100->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp100 = $tmp100->next;
    }
    $fn102 $tmp101 = $tmp100->methods[1];
    panda$core$Bit $tmp103 = $tmp101(((panda$core$Equatable*) e93->key), ((panda$core$Object*) p_key));
    $tmp98 = $tmp103.value;
    $l99:;
    panda$core$Bit $tmp104 = { $tmp98 };
    bool $tmp97 = $tmp104.value;
    if (!$tmp97) goto $l96;
    {
        {
            panda$collections$HashMap$Entry* $tmp105 = e93;
            panda$collections$HashMap$Entry* $tmp106 = e93->next;
            e93 = $tmp106;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
        }
    }
    goto $l95;
    $l96:;
    if (((panda$core$Bit) { e93 != NULL }).value) {
    {
        {
            panda$core$Object* $tmp108 = e93->value;
            tmp1107 = $tmp108;
            panda$core$Panda$ref$panda$core$Object($tmp108);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e93));
            panda$core$Object* $tmp109 = tmp1107;
            return $tmp109;
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp111 = NULL;
            tmp2110 = $tmp111;
            panda$core$Panda$ref$panda$core$Object($tmp111);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e93));
            panda$core$Object* $tmp112 = tmp2110;
            return $tmp112;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e93));
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index113;
    panda$collections$HashMap$Entry* e115;
    panda$core$Bit tmp3129;
    panda$core$Int64 $tmp114 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index113 = $tmp114;
    panda$collections$HashMap$Entry* $tmp116 = self->contents[index113.value];
    e115 = $tmp116;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
    $l117:;
    bool $tmp120 = ((panda$core$Bit) { e115 != NULL }).value;
    if (!$tmp120) goto $l121;
    ITable* $tmp122 = ((panda$core$Equatable*) e115->key)->$class->itable;
    while ($tmp122->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp122 = $tmp122->next;
    }
    $fn124 $tmp123 = $tmp122->methods[1];
    panda$core$Bit $tmp125 = $tmp123(((panda$core$Equatable*) e115->key), ((panda$core$Object*) p_key));
    $tmp120 = $tmp125.value;
    $l121:;
    panda$core$Bit $tmp126 = { $tmp120 };
    bool $tmp119 = $tmp126.value;
    if (!$tmp119) goto $l118;
    {
        {
            panda$collections$HashMap$Entry* $tmp127 = e115;
            panda$collections$HashMap$Entry* $tmp128 = e115->next;
            e115 = $tmp128;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
        }
    }
    goto $l117;
    $l118:;
    {
        tmp3129 = ((panda$core$Bit) { e115 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e115));
        panda$core$Bit $tmp130 = tmp3129;
        return $tmp130;
    }
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index132;
    panda$collections$HashMap$Entry* e134;
    panda$collections$HashMap$Entry* old148;
    panda$core$Int64 $tmp131 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp131;
    panda$core$Int64 $tmp133 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index132 = $tmp133;
    panda$collections$HashMap$Entry* $tmp135 = self->contents[index132.value];
    e134 = $tmp135;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
    $l136:;
    bool $tmp139 = ((panda$core$Bit) { e134 != NULL }).value;
    if (!$tmp139) goto $l140;
    ITable* $tmp141 = ((panda$core$Equatable*) e134->key)->$class->itable;
    while ($tmp141->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp141 = $tmp141->next;
    }
    $fn143 $tmp142 = $tmp141->methods[1];
    panda$core$Bit $tmp144 = $tmp142(((panda$core$Equatable*) e134->key), ((panda$core$Object*) p_key));
    $tmp139 = $tmp144.value;
    $l140:;
    panda$core$Bit $tmp145 = { $tmp139 };
    bool $tmp138 = $tmp145.value;
    if (!$tmp138) goto $l137;
    {
        {
            panda$collections$HashMap$Entry* $tmp146 = e134;
            panda$collections$HashMap$Entry* $tmp147 = e134->next;
            e134 = $tmp147;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp146));
        }
    }
    goto $l136;
    $l137:;
    if (((panda$core$Bit) { e134 == NULL }).value) {
    {
        panda$collections$HashMap$Entry* $tmp149 = self->contents[index132.value];
        old148 = $tmp149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
        {
            panda$collections$HashMap$Entry* $tmp150 = e134;
            panda$collections$HashMap$Entry* $tmp153 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
            panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp153, p_key, p_value);
            panda$collections$HashMap$Entry* $tmp152 = $tmp153;
            panda$collections$HashMap$Entry* $tmp151 = $tmp152;
            e134 = $tmp151;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
        }
        {
            panda$collections$HashMap$Entry* $tmp154 = e134->next;
            panda$collections$HashMap$Entry* $tmp155 = old148;
            e134->next = $tmp155;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp155));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154));
        }
        {
            panda$collections$HashMap$Entry** $tmp156 = self->contents;
            panda$core$Int64 $tmp157 = index132;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp156[$tmp157.value]));
            panda$collections$HashMap$Entry* $tmp158 = e134;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
            $tmp156[$tmp157.value] = $tmp158;
        }
        panda$collections$HashMap$incrementCount(self);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old148));
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp159 = e134->value;
            panda$core$Object* $tmp160 = p_value;
            e134->value = $tmp160;
            panda$core$Panda$ref$panda$core$Object($tmp160);
            panda$core$Panda$unref$panda$core$Object($tmp159);
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e134));
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index162;
    panda$collections$HashMap$Entry* e164;
    panda$collections$HashMap$Entry* next176;
    panda$collections$HashMap$Entry* next184;
    panda$core$Int64 $tmp161 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp161;
    panda$core$Int64 $tmp163 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index162 = $tmp163;
    panda$collections$HashMap$Entry* $tmp165 = self->contents[index162.value];
    e164 = $tmp165;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
    if (((panda$core$Bit) { e164 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e164));
            return;
        }
    }
    }
    ITable* $tmp166 = ((panda$core$Equatable*) e164->key)->$class->itable;
    while ($tmp166->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp166 = $tmp166->next;
    }
    $fn168 $tmp167 = $tmp166->methods[0];
    panda$core$Bit $tmp169 = $tmp167(((panda$core$Equatable*) e164->key), ((panda$core$Object*) p_key));
    if ($tmp169.value) {
    {
        {
            panda$collections$HashMap$Entry** $tmp170 = self->contents;
            panda$core$Int64 $tmp171 = index162;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170[$tmp171.value]));
            panda$collections$HashMap$Entry* $tmp172 = e164->next;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
            $tmp170[$tmp171.value] = $tmp172;
        }
        panda$core$Int64 $tmp173 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp173;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e164));
            return;
        }
    }
    }
    $l174:;
    while (true) {
    {
        panda$collections$HashMap$Entry* $tmp177 = e164->next;
        next176 = $tmp177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
        if (((panda$core$Bit) { next176 == NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next176));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e164));
                    return;
                }
            }
        }
        }
        ITable* $tmp178 = ((panda$core$Equatable*) next176->key)->$class->itable;
        while ($tmp178->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp178 = $tmp178->next;
        }
        $fn180 $tmp179 = $tmp178->methods[0];
        panda$core$Bit $tmp181 = $tmp179(((panda$core$Equatable*) next176->key), ((panda$core$Object*) p_key));
        if ($tmp181.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next176));
                goto $l175;
            }
        }
        }
        {
            panda$collections$HashMap$Entry* $tmp182 = e164;
            panda$collections$HashMap$Entry* $tmp183 = next176;
            e164 = $tmp183;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp183));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next176));
    }
    }
    $l175:;
    panda$collections$HashMap$Entry* $tmp185 = e164->next;
    next184 = $tmp185;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
    PANDA_ASSERT(((panda$core$Bit) { next184 != NULL }).value);
    {
        panda$collections$HashMap$Entry* $tmp186 = e164->next;
        panda$collections$HashMap$Entry* $tmp187 = next184->next;
        e164->next = $tmp187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    }
    panda$core$Int64 $tmp188 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp188;
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next184));
    }
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp190;
    panda$core$Range$LTpanda$core$Int64$GT $tmp210;
    panda$core$Int64 $tmp189 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp189;
    self->_count = ((panda$core$Int64) { 0 });
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp190, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp192 = $tmp190.min.value;
    panda$core$Int64 i191 = { $tmp192 };
    int64_t $tmp194 = $tmp190.max.value;
    bool $tmp195 = $tmp190.inclusive.value;
    if ($tmp195) goto $l202; else goto $l203;
    $l202:;
    if ($tmp192 <= $tmp194) goto $l196; else goto $l198;
    $l203:;
    if ($tmp192 < $tmp194) goto $l196; else goto $l198;
    $l196:;
    {
        if (((panda$core$Bit) { self->contents[i191.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i191.value]));
        }
        }
    }
    $l199:;
    int64_t $tmp205 = $tmp194 - i191.value;
    if ($tmp195) goto $l206; else goto $l207;
    $l206:;
    if ((uint64_t) $tmp205 >= 1) goto $l204; else goto $l198;
    $l207:;
    if ((uint64_t) $tmp205 > 1) goto $l204; else goto $l198;
    $l204:;
    i191.value += 1;
    goto $l196;
    $l198:;
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp210, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp212 = $tmp210.min.value;
    panda$core$Int64 i211 = { $tmp212 };
    int64_t $tmp214 = $tmp210.max.value;
    bool $tmp215 = $tmp210.inclusive.value;
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
                panda$collections$HashMap$Entry** $tmp224 = self->contents;
                panda$core$Int64 $tmp225 = i211;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224[$tmp225.value]));
                panda$collections$HashMap$Entry* $tmp226 = NULL;
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
    panda$core$Int64 $tmp233 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp234 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp233, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp234;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents237;
    panda$core$Int64 oldBucketCount238;
    panda$core$Range$LTpanda$core$Int64$GT $tmp240;
    panda$core$Range$LTpanda$core$Int64$GT $tmp264;
    panda$collections$HashMap$Entry* e278;
    panda$core$Range$LTpanda$core$Int64$GT $tmp291;
    panda$core$Int64 $tmp235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp235;
    panda$core$Bit $tmp236 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp236.value) {
    {
        oldContents237 = self->contents;
        oldBucketCount238 = self->bucketCount;
        panda$core$Int64 $tmp239 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp239;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp240, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
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
            {
                panda$collections$HashMap$Entry** $tmp254 = self->contents;
                panda$core$Int64 $tmp255 = i241;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254[$tmp255.value]));
                panda$collections$HashMap$Entry* $tmp256 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp256));
                $tmp254[$tmp255.value] = $tmp256;
            }
        }
        $l249:;
        int64_t $tmp258 = $tmp244 - i241.value;
        if ($tmp245) goto $l259; else goto $l260;
        $l259:;
        if ((uint64_t) $tmp258 >= 1) goto $l257; else goto $l248;
        $l260:;
        if ((uint64_t) $tmp258 > 1) goto $l257; else goto $l248;
        $l257:;
        i241.value += 1;
        goto $l246;
        $l248:;
        panda$core$Int64 $tmp263 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp263;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp264, ((panda$core$Int64) { 0 }), oldBucketCount238, ((panda$core$Bit) { false }));
        int64_t $tmp266 = $tmp264.min.value;
        panda$core$Int64 i265 = { $tmp266 };
        int64_t $tmp268 = $tmp264.max.value;
        bool $tmp269 = $tmp264.inclusive.value;
        if ($tmp269) goto $l276; else goto $l277;
        $l276:;
        if ($tmp266 <= $tmp268) goto $l270; else goto $l272;
        $l277:;
        if ($tmp266 < $tmp268) goto $l270; else goto $l272;
        $l270:;
        {
            panda$collections$HashMap$Entry* $tmp279 = oldContents237[i265.value];
            e278 = $tmp279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
            $l280:;
            bool $tmp282 = ((panda$core$Bit) { e278 != NULL }).value;
            if (!$tmp282) goto $l281;
            {
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e278->key, e278->value);
                {
                    panda$collections$HashMap$Entry* $tmp283 = e278;
                    panda$collections$HashMap$Entry* $tmp284 = e278->next;
                    e278 = $tmp284;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
                }
            }
            goto $l280;
            $l281:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e278));
        }
        $l273:;
        int64_t $tmp286 = $tmp268 - i265.value;
        if ($tmp269) goto $l287; else goto $l288;
        $l287:;
        if ((uint64_t) $tmp286 >= 1) goto $l285; else goto $l272;
        $l288:;
        if ((uint64_t) $tmp286 > 1) goto $l285; else goto $l272;
        $l285:;
        i265.value += 1;
        goto $l270;
        $l272:;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp291, ((panda$core$Int64) { 0 }), oldBucketCount238, ((panda$core$Bit) { false }));
        int64_t $tmp293 = $tmp291.min.value;
        panda$core$Int64 i292 = { $tmp293 };
        int64_t $tmp295 = $tmp291.max.value;
        bool $tmp296 = $tmp291.inclusive.value;
        if ($tmp296) goto $l303; else goto $l304;
        $l303:;
        if ($tmp293 <= $tmp295) goto $l297; else goto $l299;
        $l304:;
        if ($tmp293 < $tmp295) goto $l297; else goto $l299;
        $l297:;
        {
            if (((panda$core$Bit) { oldContents237[i292.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents237[i292.value]));
            }
            }
        }
        $l300:;
        int64_t $tmp306 = $tmp295 - i292.value;
        if ($tmp296) goto $l307; else goto $l308;
        $l307:;
        if ((uint64_t) $tmp306 >= 1) goto $l305; else goto $l299;
        $l308:;
        if ((uint64_t) $tmp306 > 1) goto $l305; else goto $l299;
        $l305:;
        i292.value += 1;
        goto $l297;
        $l299:;
        pandaFree(oldContents237);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp314 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp314, self);
    panda$collections$HashMap$KeyIterator* $tmp313 = $tmp314;
    panda$collections$Iterator* $tmp312 = ((panda$collections$Iterator*) $tmp313);
    panda$collections$Iterator* $tmp311 = $tmp312;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp312));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
    return $tmp311;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp318 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp318, self);
    panda$collections$HashMap$ValueIterator* $tmp317 = $tmp318;
    panda$collections$Iterator* $tmp316 = ((panda$collections$Iterator*) $tmp317);
    panda$collections$Iterator* $tmp315 = $tmp316;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp316));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
    return $tmp315;
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    panda$core$Int64 $tmp319 = self->_count;
    return $tmp319;
}
panda$core$Bit panda$collections$HashMap$$EQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$Bit panda$collections$HashMap$$NEQ$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result320;
    panda$core$Char8 $tmp324;
    panda$core$String* separator325;
    panda$core$Range$LTpanda$core$Int64$GT $tmp328;
    panda$collections$HashMap$Entry* entry342;
    panda$core$Char8 $tmp348;
    panda$core$Char8 $tmp361;
    panda$core$String* tmp4362;
    panda$core$MutableString* $tmp323 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp323);
    panda$core$MutableString* $tmp322 = $tmp323;
    panda$core$MutableString* $tmp321 = $tmp322;
    result320 = $tmp321;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
    panda$core$Char8$init$panda$core$UInt8(&$tmp324, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result320, $tmp324);
    panda$core$String* $tmp326 = &$s327;
    separator325 = $tmp326;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp328, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp330 = $tmp328.min.value;
    panda$core$Int64 i329 = { $tmp330 };
    int64_t $tmp332 = $tmp328.max.value;
    bool $tmp333 = $tmp328.inclusive.value;
    if ($tmp333) goto $l340; else goto $l341;
    $l340:;
    if ($tmp330 <= $tmp332) goto $l334; else goto $l336;
    $l341:;
    if ($tmp330 < $tmp332) goto $l334; else goto $l336;
    $l334:;
    {
        panda$collections$HashMap$Entry* $tmp343 = self->contents[i329.value];
        entry342 = $tmp343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
        $l344:;
        bool $tmp346 = ((panda$core$Bit) { entry342 != NULL }).value;
        if (!$tmp346) goto $l345;
        {
            panda$core$MutableString$append$panda$core$String(result320, separator325);
            if (((panda$core$Bit) { entry342->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result320, ((panda$core$Object*) entry342->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result320, &$s347);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp348, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result320, $tmp348);
            if (((panda$core$Bit) { entry342->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result320, entry342->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result320, &$s349);
            }
            }
            {
                panda$collections$HashMap$Entry* $tmp350 = entry342;
                panda$collections$HashMap$Entry* $tmp351 = entry342->next;
                entry342 = $tmp351;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
            }
            {
                panda$core$String* $tmp352 = separator325;
                panda$core$String* $tmp353 = &$s354;
                separator325 = $tmp353;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
            }
        }
        goto $l344;
        $l345:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry342));
    }
    $l337:;
    int64_t $tmp356 = $tmp332 - i329.value;
    if ($tmp333) goto $l357; else goto $l358;
    $l357:;
    if ((uint64_t) $tmp356 >= 1) goto $l355; else goto $l336;
    $l358:;
    if ((uint64_t) $tmp356 > 1) goto $l355; else goto $l336;
    $l355:;
    i329.value += 1;
    goto $l334;
    $l336:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp361, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result320, $tmp361);
    {
        panda$core$String* $tmp365 = panda$core$MutableString$finish$R$panda$core$String(result320);
        panda$core$String* $tmp364 = $tmp365;
        panda$core$String* $tmp363 = $tmp364;
        tmp4362 = $tmp363;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result320));
        }
        panda$core$String* $tmp366 = tmp4362;
        return $tmp366;
    }
}
panda$collections$ImmutableHashMap* panda$collections$HashMap$finish$R$panda$collections$ImmutableHashMap$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    {
        panda$core$Class* $tmp367 = ((panda$core$Object*) self)->$class;
        panda$collections$ImmutableHashMap* $tmp370 = (panda$collections$ImmutableHashMap*) pandaObjectAlloc(56, (panda$core$Class*) &panda$collections$ImmutableHashMap$class);
        panda$collections$ImmutableHashMap$init($tmp370);
        panda$collections$ImmutableHashMap* $tmp369 = $tmp370;
        panda$core$Class* $tmp368 = ((panda$core$Object*) $tmp369)->$class;
        ((panda$core$Object*) self)->$class = $tmp368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp369));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
    }
    panda$collections$ImmutableHashMap* $tmp372 = ((panda$collections$ImmutableHashMap*) ((panda$core$Object*) self));
    panda$collections$ImmutableHashMap* $tmp371 = $tmp372;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp372));
    return $tmp371;
}

