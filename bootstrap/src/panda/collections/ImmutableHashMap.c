#include "panda/collections/ImmutableHashMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
#include "panda/collections/ImmutableHashMap/Entry.h"
#include "panda/collections/ImmutableHashMap/KeyIterator.h"
#include "panda/collections/ImmutableHashMap/ValueIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
panda$core$Bit panda$collections$ImmutableHashMap$$EQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit$shim(panda$collections$ImmutableHashMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$ImmutableHashMap$$EQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit(self, ((panda$collections$MapView*) p0));
    return result;
}
panda$core$Bit panda$collections$ImmutableHashMap$$NEQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit$shim(panda$collections$ImmutableHashMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$ImmutableHashMap$$NEQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit(self, ((panda$collections$MapView*) p0));
    return result;
}
panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim(panda$collections$ImmutableHashMap* self, panda$core$Object* p0) {
    panda$core$Object* result = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(self, ((panda$collections$Key*) p0));
    return result;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* result = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(self);
    return result;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* result = panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$ImmutableHashMap$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$collections$ImmutableHashMap$$EQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit$shim, panda$collections$ImmutableHashMap$$NEQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$ImmutableHashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$ImmutableHashMap$_panda$core$Equatable, { panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64, panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim, panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim, panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim} };

static panda$core$String $s1;
panda$collections$ImmutableHashMap$class_type panda$collections$ImmutableHashMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableHashMap$_panda$collections$MapView, { panda$collections$ImmutableHashMap$convert$R$panda$core$String, panda$collections$ImmutableHashMap$cleanup, panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64, panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim, panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit, panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim, panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim, panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64, panda$collections$ImmutableHashMap$$EQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit$shim, panda$collections$ImmutableHashMap$$NEQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit$shim} };

typedef panda$core$Int64 (*$fn25)(panda$collections$Key*);
typedef panda$core$Bit (*$fn52)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn76)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70", 34, 4585553374950449834, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s126 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$ImmutableHashMap$init(panda$collections$ImmutableHashMap* self) {
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 0 });
    self->contents = ((panda$collections$ImmutableHashMap$Entry**) pandaZAlloc(((panda$core$Int64) { 0 }).value * 8));
}
void panda$collections$ImmutableHashMap$cleanup(panda$collections$ImmutableHashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp4 = $tmp2.min.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = $tmp2.max.value;
    bool $tmp7 = $tmp2.inclusive.value;
    if ($tmp7) goto $l14; else goto $l15;
    $l14:;
    if ($tmp4 <= $tmp6) goto $l8; else goto $l10;
    $l15:;
    if ($tmp4 < $tmp6) goto $l8; else goto $l10;
    $l8:;
    {
        if (((panda$core$Bit) { self->contents[i3.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i3.value]));
        }
        }
    }
    $l11:;
    int64_t $tmp17 = $tmp6 - i3.value;
    if ($tmp7) goto $l18; else goto $l19;
    $l18:;
    if ((uint64_t) $tmp17 >= 1) goto $l16; else goto $l10;
    $l19:;
    if ((uint64_t) $tmp17 > 1) goto $l16; else goto $l10;
    $l16:;
    i3.value += 1;
    goto $l8;
    $l10:;
    pandaFree(self->contents);
    panda$core$Object$cleanup(((panda$core$Object*) self));
}
panda$core$Int64 panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h22;
    memset(&h22, 0, sizeof(h22));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h22 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp23 = p_key->$class->itable;
        while ($tmp23->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp23 = $tmp23->next;
        }
        $fn25 $tmp24 = $tmp23->methods[0];
        panda$core$Int64 $tmp26 = $tmp24(p_key);
        h22 = $tmp26;
    }
    }
    panda$core$Int64 $tmp27 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h22, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp28 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h22, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp29 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp27, $tmp28);
    panda$core$Int64 $tmp30 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h22, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp31 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp29, $tmp30);
    panda$core$Int64 $tmp32 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h22, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp33 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp31, $tmp32);
    panda$core$Int64 $tmp34 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h22, $tmp33);
    h22 = $tmp34;
    panda$core$Int64 $tmp35 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp36 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h22, $tmp35);
    h22 = $tmp36;
    panda$core$Int64 $tmp37 = h22;
    return $tmp37;
}
panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index41;
    panda$collections$ImmutableHashMap$Entry* e43;
    panda$core$Object* tmp157;
    panda$core$Object* tmp260;
    panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, ((panda$core$Int64) { 0 }));
    if ($tmp38.value) {
    {
        panda$core$Object* $tmp40 = NULL;
        panda$core$Object* $tmp39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object($tmp40);
        return $tmp39;
    }
    }
    panda$core$Int64 $tmp42 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
    index41 = $tmp42;
    panda$collections$ImmutableHashMap$Entry* $tmp44 = self->contents[index41.value];
    e43 = $tmp44;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
    $l45:;
    bool $tmp48 = ((panda$core$Bit) { e43 != NULL }).value;
    if (!$tmp48) goto $l49;
    ITable* $tmp50 = ((panda$core$Equatable*) e43->key)->$class->itable;
    while ($tmp50->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp50 = $tmp50->next;
    }
    $fn52 $tmp51 = $tmp50->methods[1];
    panda$core$Bit $tmp53 = $tmp51(((panda$core$Equatable*) e43->key), ((panda$core$Object*) p_key));
    $tmp48 = $tmp53.value;
    $l49:;
    panda$core$Bit $tmp54 = { $tmp48 };
    bool $tmp47 = $tmp54.value;
    if (!$tmp47) goto $l46;
    {
        {
            panda$collections$ImmutableHashMap$Entry* $tmp55 = e43;
            panda$collections$ImmutableHashMap$Entry* $tmp56 = e43->next;
            e43 = $tmp56;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
        }
    }
    goto $l45;
    $l46:;
    if (((panda$core$Bit) { e43 != NULL }).value) {
    {
        {
            panda$core$Object* $tmp58 = e43->value;
            tmp157 = $tmp58;
            panda$core$Panda$ref$panda$core$Object($tmp58);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e43));
            panda$core$Object* $tmp59 = tmp157;
            return $tmp59;
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp61 = NULL;
            tmp260 = $tmp61;
            panda$core$Panda$ref$panda$core$Object($tmp61);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e43));
            panda$core$Object* $tmp62 = tmp260;
            return $tmp62;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e43));
}
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index65;
    panda$collections$ImmutableHashMap$Entry* e67;
    panda$core$Bit tmp381;
    panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, ((panda$core$Int64) { 0 }));
    if ($tmp63.value) {
    {
        panda$core$Bit $tmp64 = ((panda$core$Bit) { false });
        return $tmp64;
    }
    }
    panda$core$Int64 $tmp66 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
    index65 = $tmp66;
    panda$collections$ImmutableHashMap$Entry* $tmp68 = self->contents[index65.value];
    e67 = $tmp68;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
    $l69:;
    bool $tmp72 = ((panda$core$Bit) { e67 != NULL }).value;
    if (!$tmp72) goto $l73;
    ITable* $tmp74 = ((panda$core$Equatable*) e67->key)->$class->itable;
    while ($tmp74->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp74 = $tmp74->next;
    }
    $fn76 $tmp75 = $tmp74->methods[1];
    panda$core$Bit $tmp77 = $tmp75(((panda$core$Equatable*) e67->key), ((panda$core$Object*) p_key));
    $tmp72 = $tmp77.value;
    $l73:;
    panda$core$Bit $tmp78 = { $tmp72 };
    bool $tmp71 = $tmp78.value;
    if (!$tmp71) goto $l70;
    {
        {
            panda$collections$ImmutableHashMap$Entry* $tmp79 = e67;
            panda$collections$ImmutableHashMap$Entry* $tmp80 = e67->next;
            e67 = $tmp80;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
        }
    }
    goto $l69;
    $l70:;
    {
        tmp381 = ((panda$core$Bit) { e67 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e67));
        panda$core$Bit $tmp82 = tmp381;
        return $tmp82;
    }
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$ImmutableHashMap$KeyIterator* $tmp86 = (panda$collections$ImmutableHashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$KeyIterator$class);
    panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT($tmp86, self);
    panda$collections$ImmutableHashMap$KeyIterator* $tmp85 = $tmp86;
    panda$collections$Iterator* $tmp84 = ((panda$collections$Iterator*) $tmp85);
    panda$collections$Iterator* $tmp83 = $tmp84;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
    return $tmp83;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$ImmutableHashMap$ValueIterator* $tmp90 = (panda$collections$ImmutableHashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$ValueIterator$class);
    panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT($tmp90, self);
    panda$collections$ImmutableHashMap$ValueIterator* $tmp89 = $tmp90;
    panda$collections$Iterator* $tmp88 = ((panda$collections$Iterator*) $tmp89);
    panda$collections$Iterator* $tmp87 = $tmp88;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    return $tmp87;
}
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* self) {
    panda$core$Int64 $tmp91 = self->_count;
    return $tmp91;
}
panda$core$Bit panda$collections$ImmutableHashMap$$EQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$Bit panda$collections$ImmutableHashMap$$NEQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* self) {
    panda$core$MutableString* result92;
    panda$core$Char8 $tmp96;
    panda$core$String* separator97;
    panda$core$Range$LTpanda$core$Int64$GT $tmp100;
    panda$collections$ImmutableHashMap$Entry* entry114;
    panda$core$Char8 $tmp120;
    panda$core$Char8 $tmp133;
    panda$core$String* tmp4134;
    panda$core$MutableString* $tmp95 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp95);
    panda$core$MutableString* $tmp94 = $tmp95;
    panda$core$MutableString* $tmp93 = $tmp94;
    result92 = $tmp93;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94));
    panda$core$Char8$init$panda$core$UInt8(&$tmp96, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result92, $tmp96);
    panda$core$String* $tmp98 = &$s99;
    separator97 = $tmp98;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp100, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp102 = $tmp100.min.value;
    panda$core$Int64 i101 = { $tmp102 };
    int64_t $tmp104 = $tmp100.max.value;
    bool $tmp105 = $tmp100.inclusive.value;
    if ($tmp105) goto $l112; else goto $l113;
    $l112:;
    if ($tmp102 <= $tmp104) goto $l106; else goto $l108;
    $l113:;
    if ($tmp102 < $tmp104) goto $l106; else goto $l108;
    $l106:;
    {
        panda$collections$ImmutableHashMap$Entry* $tmp115 = self->contents[i101.value];
        entry114 = $tmp115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
        $l116:;
        bool $tmp118 = ((panda$core$Bit) { entry114 != NULL }).value;
        if (!$tmp118) goto $l117;
        {
            panda$core$MutableString$append$panda$core$String(result92, separator97);
            if (((panda$core$Bit) { entry114->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result92, ((panda$core$Object*) entry114->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result92, &$s119);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp120, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result92, $tmp120);
            if (((panda$core$Bit) { entry114->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result92, entry114->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result92, &$s121);
            }
            }
            {
                panda$collections$ImmutableHashMap$Entry* $tmp122 = entry114;
                panda$collections$ImmutableHashMap$Entry* $tmp123 = entry114->next;
                entry114 = $tmp123;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122));
            }
            {
                panda$core$String* $tmp124 = separator97;
                panda$core$String* $tmp125 = &$s126;
                separator97 = $tmp125;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
            }
        }
        goto $l116;
        $l117:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry114));
    }
    $l109:;
    int64_t $tmp128 = $tmp104 - i101.value;
    if ($tmp105) goto $l129; else goto $l130;
    $l129:;
    if ((uint64_t) $tmp128 >= 1) goto $l127; else goto $l108;
    $l130:;
    if ((uint64_t) $tmp128 > 1) goto $l127; else goto $l108;
    $l127:;
    i101.value += 1;
    goto $l106;
    $l108:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp133, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result92, $tmp133);
    {
        panda$core$String* $tmp137 = panda$core$MutableString$finish$R$panda$core$String(result92);
        panda$core$String* $tmp136 = $tmp137;
        panda$core$String* $tmp135 = $tmp136;
        tmp4134 = $tmp135;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator97));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result92));
        }
        panda$core$String* $tmp138 = tmp4134;
        return $tmp138;
    }
}

