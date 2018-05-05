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
typedef panda$core$Bit (*$fn49)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn71)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70", 34, 4585553374950449834, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    panda$core$Int64 index38;
    panda$collections$ImmutableHashMap$Entry* e40;
    panda$core$Object* tmp154;
    panda$core$Object* tmp257;
    panda$core$Int64 $tmp39 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
    index38 = $tmp39;
    panda$collections$ImmutableHashMap$Entry* $tmp41 = self->contents[index38.value];
    e40 = $tmp41;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
    $l42:;
    bool $tmp45 = ((panda$core$Bit) { e40 != NULL }).value;
    if (!$tmp45) goto $l46;
    ITable* $tmp47 = ((panda$core$Equatable*) e40->key)->$class->itable;
    while ($tmp47->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp47 = $tmp47->next;
    }
    $fn49 $tmp48 = $tmp47->methods[1];
    panda$core$Bit $tmp50 = $tmp48(((panda$core$Equatable*) e40->key), ((panda$core$Object*) p_key));
    $tmp45 = $tmp50.value;
    $l46:;
    panda$core$Bit $tmp51 = { $tmp45 };
    bool $tmp44 = $tmp51.value;
    if (!$tmp44) goto $l43;
    {
        {
            panda$collections$ImmutableHashMap$Entry* $tmp52 = e40;
            panda$collections$ImmutableHashMap$Entry* $tmp53 = e40->next;
            e40 = $tmp53;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp53));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
        }
    }
    goto $l42;
    $l43:;
    if (((panda$core$Bit) { e40 != NULL }).value) {
    {
        {
            panda$core$Object* $tmp55 = e40->value;
            tmp154 = $tmp55;
            panda$core$Panda$ref$panda$core$Object($tmp55);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e40));
            panda$core$Object* $tmp56 = tmp154;
            return $tmp56;
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp58 = NULL;
            tmp257 = $tmp58;
            panda$core$Panda$ref$panda$core$Object($tmp58);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e40));
            panda$core$Object* $tmp59 = tmp257;
            return $tmp59;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e40));
}
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index60;
    panda$collections$ImmutableHashMap$Entry* e62;
    panda$core$Bit tmp376;
    panda$core$Int64 $tmp61 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
    index60 = $tmp61;
    panda$collections$ImmutableHashMap$Entry* $tmp63 = self->contents[index60.value];
    e62 = $tmp63;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp63));
    $l64:;
    bool $tmp67 = ((panda$core$Bit) { e62 != NULL }).value;
    if (!$tmp67) goto $l68;
    ITable* $tmp69 = ((panda$core$Equatable*) e62->key)->$class->itable;
    while ($tmp69->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp69 = $tmp69->next;
    }
    $fn71 $tmp70 = $tmp69->methods[1];
    panda$core$Bit $tmp72 = $tmp70(((panda$core$Equatable*) e62->key), ((panda$core$Object*) p_key));
    $tmp67 = $tmp72.value;
    $l68:;
    panda$core$Bit $tmp73 = { $tmp67 };
    bool $tmp66 = $tmp73.value;
    if (!$tmp66) goto $l65;
    {
        {
            panda$collections$ImmutableHashMap$Entry* $tmp74 = e62;
            panda$collections$ImmutableHashMap$Entry* $tmp75 = e62->next;
            e62 = $tmp75;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        }
    }
    goto $l64;
    $l65:;
    {
        tmp376 = ((panda$core$Bit) { e62 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e62));
        panda$core$Bit $tmp77 = tmp376;
        return $tmp77;
    }
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$ImmutableHashMap$KeyIterator* $tmp81 = (panda$collections$ImmutableHashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$KeyIterator$class);
    panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT($tmp81, self);
    panda$collections$ImmutableHashMap$KeyIterator* $tmp80 = $tmp81;
    panda$collections$Iterator* $tmp79 = ((panda$collections$Iterator*) $tmp80);
    panda$collections$Iterator* $tmp78 = $tmp79;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    return $tmp78;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$ImmutableHashMap$ValueIterator* $tmp85 = (panda$collections$ImmutableHashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$ValueIterator$class);
    panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT($tmp85, self);
    panda$collections$ImmutableHashMap$ValueIterator* $tmp84 = $tmp85;
    panda$collections$Iterator* $tmp83 = ((panda$collections$Iterator*) $tmp84);
    panda$collections$Iterator* $tmp82 = $tmp83;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    return $tmp82;
}
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* self) {
    panda$core$Int64 $tmp86 = self->_count;
    return $tmp86;
}
panda$core$Bit panda$collections$ImmutableHashMap$$EQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$Bit panda$collections$ImmutableHashMap$$NEQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* self) {
    panda$core$MutableString* result87;
    panda$core$Char8 $tmp91;
    panda$core$String* separator92;
    panda$core$Range$LTpanda$core$Int64$GT $tmp95;
    panda$collections$ImmutableHashMap$Entry* entry109;
    panda$core$Char8 $tmp115;
    panda$core$Char8 $tmp128;
    panda$core$String* tmp4129;
    panda$core$MutableString* $tmp90 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp90);
    panda$core$MutableString* $tmp89 = $tmp90;
    panda$core$MutableString* $tmp88 = $tmp89;
    result87 = $tmp88;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp88));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    panda$core$Char8$init$panda$core$UInt8(&$tmp91, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result87, $tmp91);
    panda$core$String* $tmp93 = &$s94;
    separator92 = $tmp93;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp95, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp97 = $tmp95.min.value;
    panda$core$Int64 i96 = { $tmp97 };
    int64_t $tmp99 = $tmp95.max.value;
    bool $tmp100 = $tmp95.inclusive.value;
    if ($tmp100) goto $l107; else goto $l108;
    $l107:;
    if ($tmp97 <= $tmp99) goto $l101; else goto $l103;
    $l108:;
    if ($tmp97 < $tmp99) goto $l101; else goto $l103;
    $l101:;
    {
        panda$collections$ImmutableHashMap$Entry* $tmp110 = self->contents[i96.value];
        entry109 = $tmp110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
        $l111:;
        bool $tmp113 = ((panda$core$Bit) { entry109 != NULL }).value;
        if (!$tmp113) goto $l112;
        {
            panda$core$MutableString$append$panda$core$String(result87, separator92);
            if (((panda$core$Bit) { entry109->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result87, ((panda$core$Object*) entry109->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result87, &$s114);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp115, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result87, $tmp115);
            if (((panda$core$Bit) { entry109->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result87, entry109->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result87, &$s116);
            }
            }
            {
                panda$collections$ImmutableHashMap$Entry* $tmp117 = entry109;
                panda$collections$ImmutableHashMap$Entry* $tmp118 = entry109->next;
                entry109 = $tmp118;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
            }
            {
                panda$core$String* $tmp119 = separator92;
                panda$core$String* $tmp120 = &$s121;
                separator92 = $tmp120;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
            }
        }
        goto $l111;
        $l112:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry109));
    }
    $l104:;
    int64_t $tmp123 = $tmp99 - i96.value;
    if ($tmp100) goto $l124; else goto $l125;
    $l124:;
    if ((uint64_t) $tmp123 >= 1) goto $l122; else goto $l103;
    $l125:;
    if ((uint64_t) $tmp123 > 1) goto $l122; else goto $l103;
    $l122:;
    i96.value += 1;
    goto $l101;
    $l103:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp128, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result87, $tmp128);
    {
        panda$core$String* $tmp132 = panda$core$MutableString$finish$R$panda$core$String(result87);
        panda$core$String* $tmp131 = $tmp132;
        panda$core$String* $tmp130 = $tmp131;
        tmp4129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator92));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result87));
        }
        panda$core$String* $tmp133 = tmp4129;
        return $tmp133;
    }
}

