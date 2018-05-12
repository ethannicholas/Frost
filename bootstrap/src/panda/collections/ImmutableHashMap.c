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

typedef panda$core$Int64 (*$fn29)(panda$collections$Key*);
typedef panda$core$Bit (*$fn62)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn94)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70", 34, 4585553374950449834, NULL };
static panda$core$String $s125 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$ImmutableHashMap$init(panda$collections$ImmutableHashMap* self) {
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 0 });
    self->contents = ((panda$collections$ImmutableHashMap$Entry**) pandaZAlloc(((panda$core$Int64) { 0 }).value * 8));
}
void panda$collections$ImmutableHashMap$cleanup(panda$collections$ImmutableHashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    int $tmp4;
    {
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp7 = $tmp5.min.value;
        panda$core$Int64 i6 = { $tmp7 };
        int64_t $tmp9 = $tmp5.max.value;
        bool $tmp10 = $tmp5.inclusive.value;
        if ($tmp10) goto $l17; else goto $l18;
        $l17:;
        if ($tmp7 <= $tmp9) goto $l11; else goto $l13;
        $l18:;
        if ($tmp7 < $tmp9) goto $l11; else goto $l13;
        $l11:;
        {
            if (((panda$core$Bit) { self->contents[i6.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i6.value]));
            }
            }
        }
        $l14:;
        int64_t $tmp20 = $tmp9 - i6.value;
        if ($tmp10) goto $l21; else goto $l22;
        $l21:;
        if ((uint64_t) $tmp20 >= 1) goto $l19; else goto $l13;
        $l22:;
        if ((uint64_t) $tmp20 > 1) goto $l19; else goto $l13;
        $l19:;
        i6.value += 1;
        goto $l11;
        $l13:;
        pandaFree(self->contents);
    }
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4) {
        case -1: goto $l25;
    }
    $l25:;
}
panda$core$Int64 panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h26;
    panda$core$Int64 $finallyReturn40;
    memset(&h26, 0, sizeof(h26));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h26 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp27 = p_key->$class->itable;
        while ($tmp27->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp27 = $tmp27->next;
        }
        $fn29 $tmp28 = $tmp27->methods[0];
        panda$core$Int64 $tmp30 = $tmp28(p_key);
        h26 = $tmp30;
    }
    }
    panda$core$Int64 $tmp31 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h26, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp32 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h26, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp33 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp31, $tmp32);
    panda$core$Int64 $tmp34 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h26, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp35 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp33, $tmp34);
    panda$core$Int64 $tmp36 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h26, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp37 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp35, $tmp36);
    panda$core$Int64 $tmp38 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h26, $tmp37);
    h26 = $tmp38;
    panda$core$Int64 $tmp39 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp40 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h26, $tmp39);
    h26 = $tmp40;
    $finallyReturn40 = h26;
    return $finallyReturn40;
}
panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Object* $finallyReturn46;
    panda$core$Object* $tmp48;
    panda$core$Int64 index51;
    panda$collections$ImmutableHashMap$Entry* e53 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp54;
    panda$collections$ImmutableHashMap$Entry* $tmp65;
    panda$collections$ImmutableHashMap$Entry* $tmp66;
    panda$core$Object* $finallyReturn66;
    panda$core$Object* $tmp68;
    panda$core$Object* $finallyReturn70;
    panda$core$Object* $tmp72;
    int $tmp45;
    {
        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, ((panda$core$Int64) { 0 }));
        if ($tmp46.value) {
        {
            $tmp48 = NULL;
            $finallyReturn46 = $tmp48;
            panda$core$Panda$ref$panda$core$Object($tmp48);
            $tmp45 = 0;
            goto $l43;
            $l49:;
            return $finallyReturn46;
        }
        }
        panda$core$Int64 $tmp52 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
        index51 = $tmp52;
        $tmp54 = self->contents[index51.value];
        e53 = $tmp54;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
        $l55:;
        bool $tmp58 = ((panda$core$Bit) { e53 != NULL }).value;
        if (!$tmp58) goto $l59;
        ITable* $tmp60 = ((panda$core$Equatable*) e53->key)->$class->itable;
        while ($tmp60->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp60 = $tmp60->next;
        }
        $fn62 $tmp61 = $tmp60->methods[1];
        panda$core$Bit $tmp63 = $tmp61(((panda$core$Equatable*) e53->key), ((panda$core$Object*) p_key));
        $tmp58 = $tmp63.value;
        $l59:;
        panda$core$Bit $tmp64 = { $tmp58 };
        bool $tmp57 = $tmp64.value;
        if (!$tmp57) goto $l56;
        {
            {
                $tmp65 = e53;
                $tmp66 = e53->next;
                e53 = $tmp66;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
            }
        }
        goto $l55;
        $l56:;
        if (((panda$core$Bit) { e53 != NULL }).value) {
        {
            $tmp68 = e53->value;
            $finallyReturn66 = $tmp68;
            panda$core$Panda$ref$panda$core$Object($tmp68);
            $tmp45 = 1;
            goto $l43;
            $l69:;
            return $finallyReturn66;
        }
        }
        else {
        {
            $tmp72 = NULL;
            $finallyReturn70 = $tmp72;
            panda$core$Panda$ref$panda$core$Object($tmp72);
            $tmp45 = 2;
            goto $l43;
            $l73:;
            return $finallyReturn70;
        }
        }
    }
    $tmp45 = -1;
    goto $l43;
    $l43:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e53));
    e53 = NULL;
    switch ($tmp45) {
        case 1: goto $l69;
        case 2: goto $l73;
        case 0: goto $l49;
        case -1: goto $l75;
    }
    $l75:;
}
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Bit $finallyReturn79;
    panda$core$Int64 index83;
    panda$collections$ImmutableHashMap$Entry* e85 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp86;
    panda$collections$ImmutableHashMap$Entry* $tmp97;
    panda$collections$ImmutableHashMap$Entry* $tmp98;
    panda$core$Bit $finallyReturn98;
    int $tmp78;
    {
        panda$core$Bit $tmp79 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, ((panda$core$Int64) { 0 }));
        if ($tmp79.value) {
        {
            $finallyReturn79 = ((panda$core$Bit) { false });
            $tmp78 = 0;
            goto $l76;
            $l81:;
            return $finallyReturn79;
        }
        }
        panda$core$Int64 $tmp84 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
        index83 = $tmp84;
        $tmp86 = self->contents[index83.value];
        e85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        $l87:;
        bool $tmp90 = ((panda$core$Bit) { e85 != NULL }).value;
        if (!$tmp90) goto $l91;
        ITable* $tmp92 = ((panda$core$Equatable*) e85->key)->$class->itable;
        while ($tmp92->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp92 = $tmp92->next;
        }
        $fn94 $tmp93 = $tmp92->methods[1];
        panda$core$Bit $tmp95 = $tmp93(((panda$core$Equatable*) e85->key), ((panda$core$Object*) p_key));
        $tmp90 = $tmp95.value;
        $l91:;
        panda$core$Bit $tmp96 = { $tmp90 };
        bool $tmp89 = $tmp96.value;
        if (!$tmp89) goto $l88;
        {
            {
                $tmp97 = e85;
                $tmp98 = e85->next;
                e85 = $tmp98;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
            }
        }
        goto $l87;
        $l88:;
        $finallyReturn98 = ((panda$core$Bit) { e85 != NULL });
        $tmp78 = 1;
        goto $l76;
        $l100:;
        return $finallyReturn98;
    }
    $l76:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e85));
    e85 = NULL;
    switch ($tmp78) {
        case 1: goto $l100;
        case 0: goto $l81;
    }
    $l102:;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* $finallyReturn102;
    panda$collections$Iterator* $tmp104;
    panda$collections$ImmutableHashMap$KeyIterator* $tmp105;
    panda$collections$ImmutableHashMap$KeyIterator* $tmp106 = (panda$collections$ImmutableHashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$KeyIterator$class);
    panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT($tmp106, self);
    $tmp105 = $tmp106;
    $tmp104 = ((panda$collections$Iterator*) $tmp105);
    $finallyReturn102 = $tmp104;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
    return $finallyReturn102;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* $finallyReturn107;
    panda$collections$Iterator* $tmp109;
    panda$collections$ImmutableHashMap$ValueIterator* $tmp110;
    panda$collections$ImmutableHashMap$ValueIterator* $tmp111 = (panda$collections$ImmutableHashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$ValueIterator$class);
    panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT($tmp111, self);
    $tmp110 = $tmp111;
    $tmp109 = ((panda$collections$Iterator*) $tmp110);
    $finallyReturn107 = $tmp109;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    return $finallyReturn107;
}
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* self) {
    panda$core$Int64 $finallyReturn112;
    $finallyReturn112 = self->_count;
    return $finallyReturn112;
}
panda$core$Bit panda$collections$ImmutableHashMap$$EQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$Bit panda$collections$ImmutableHashMap$$NEQ$panda$collections$MapView$LTpanda$collections$ImmutableHashMap$K$Cpanda$collections$ImmutableHashMap$V$GT$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$MapView* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* self) {
    panda$core$MutableString* result118 = NULL;
    panda$core$MutableString* $tmp119;
    panda$core$MutableString* $tmp120;
    panda$core$Char8 $tmp122;
    panda$core$String* separator123 = NULL;
    panda$core$String* $tmp124;
    panda$core$Range$LTpanda$core$Int64$GT $tmp126;
    panda$collections$ImmutableHashMap$Entry* entry143 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp144;
    panda$core$Char8 $tmp149;
    panda$collections$ImmutableHashMap$Entry* $tmp151;
    panda$collections$ImmutableHashMap$Entry* $tmp152;
    panda$core$String* $tmp153;
    panda$core$String* $tmp154;
    panda$core$Char8 $tmp163;
    panda$core$String* $finallyReturn163;
    panda$core$String* $tmp165;
    panda$core$String* $tmp166;
    int $tmp117;
    {
        panda$core$MutableString* $tmp121 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp121);
        $tmp120 = $tmp121;
        $tmp119 = $tmp120;
        result118 = $tmp119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
        panda$core$Char8$init$panda$core$UInt8(&$tmp122, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result118, $tmp122);
        $tmp124 = &$s125;
        separator123 = $tmp124;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp126, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp128 = $tmp126.min.value;
        panda$core$Int64 i127 = { $tmp128 };
        int64_t $tmp130 = $tmp126.max.value;
        bool $tmp131 = $tmp126.inclusive.value;
        if ($tmp131) goto $l138; else goto $l139;
        $l138:;
        if ($tmp128 <= $tmp130) goto $l132; else goto $l134;
        $l139:;
        if ($tmp128 < $tmp130) goto $l132; else goto $l134;
        $l132:;
        {
            int $tmp142;
            {
                $tmp144 = self->contents[i127.value];
                entry143 = $tmp144;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
                $l145:;
                bool $tmp147 = ((panda$core$Bit) { entry143 != NULL }).value;
                if (!$tmp147) goto $l146;
                {
                    panda$core$MutableString$append$panda$core$String(result118, separator123);
                    if (((panda$core$Bit) { entry143->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result118, ((panda$core$Object*) entry143->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result118, &$s148);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp149, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result118, $tmp149);
                    if (((panda$core$Bit) { entry143->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result118, entry143->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result118, &$s150);
                    }
                    }
                    {
                        $tmp151 = entry143;
                        $tmp152 = entry143->next;
                        entry143 = $tmp152;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
                    }
                    {
                        $tmp153 = separator123;
                        $tmp154 = &$s155;
                        separator123 = $tmp154;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp154));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
                    }
                }
                goto $l145;
                $l146:;
            }
            $tmp142 = -1;
            goto $l140;
            $l140:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry143));
            entry143 = NULL;
            switch ($tmp142) {
                case -1: goto $l156;
            }
            $l156:;
        }
        $l135:;
        int64_t $tmp158 = $tmp130 - i127.value;
        if ($tmp131) goto $l159; else goto $l160;
        $l159:;
        if ((uint64_t) $tmp158 >= 1) goto $l157; else goto $l134;
        $l160:;
        if ((uint64_t) $tmp158 > 1) goto $l157; else goto $l134;
        $l157:;
        i127.value += 1;
        goto $l132;
        $l134:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp163, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result118, $tmp163);
        panda$core$String* $tmp167 = panda$core$MutableString$finish$R$panda$core$String(result118);
        $tmp166 = $tmp167;
        $tmp165 = $tmp166;
        $finallyReturn163 = $tmp165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
        $tmp117 = 0;
        goto $l115;
        $l168:;
        return $finallyReturn163;
    }
    $l115:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result118));
    result118 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator123));
    separator123 = NULL;
    switch ($tmp117) {
        case 0: goto $l168;
    }
    $l170:;
}

