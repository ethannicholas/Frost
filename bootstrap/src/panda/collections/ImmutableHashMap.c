#include "panda/collections/ImmutableHashMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/collections/ImmutableHashMap/Entry.h"
#include "panda/core/Method.h"
#include "panda/core/Equatable.h"
#include "panda/collections/ImmutableHashMap/KeyIterator.h"
#include "panda/collections/ImmutableHashMap/ValueIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
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


struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$ImmutableHashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, NULL, { panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64, panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim, panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim, panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim} };

static panda$core$String $s1;
panda$collections$ImmutableHashMap$class_type panda$collections$ImmutableHashMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableHashMap$_panda$collections$MapView, { panda$collections$ImmutableHashMap$convert$R$panda$core$String, panda$collections$ImmutableHashMap$cleanup, panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64, panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim, panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit, panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim, panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim, panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn29)(panda$collections$Key*);
typedef panda$core$Bit (*$fn62)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn92)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70", 34, 4585553374950449834, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    panda$core$Int64 $returnValue41;
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
    $returnValue41 = h26;
    return $returnValue41;
}
panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Object* $returnValue47;
    panda$core$Object* $tmp48;
    panda$core$Int64 index51;
    panda$collections$ImmutableHashMap$Entry* e53 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp54;
    panda$collections$ImmutableHashMap$Entry* $tmp65;
    panda$collections$ImmutableHashMap$Entry* $tmp66;
    panda$core$Object* $tmp67;
    panda$core$Object* $tmp70;
    int $tmp45;
    {
        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, ((panda$core$Int64) { 0 }));
        if ($tmp46.value) {
        {
            $tmp48 = NULL;
            $returnValue47 = $tmp48;
            panda$core$Panda$ref$panda$core$Object($tmp48);
            $tmp45 = 0;
            goto $l43;
            $l49:;
            return $returnValue47;
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
        panda$core$Bit $tmp63 = $tmp61(((panda$core$Equatable*) e53->key), ((panda$core$Equatable*) p_key));
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
            $tmp67 = e53->value;
            $returnValue47 = $tmp67;
            panda$core$Panda$ref$panda$core$Object($tmp67);
            $tmp45 = 1;
            goto $l43;
            $l68:;
            return $returnValue47;
        }
        }
        else {
        {
            $tmp70 = NULL;
            $returnValue47 = $tmp70;
            panda$core$Panda$ref$panda$core$Object($tmp70);
            $tmp45 = 2;
            goto $l43;
            $l71:;
            return $returnValue47;
        }
        }
    }
    $tmp45 = -1;
    goto $l43;
    $l43:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e53));
    e53 = NULL;
    switch ($tmp45) {
        case 1: goto $l68;
        case 2: goto $l71;
        case -1: goto $l73;
        case 0: goto $l49;
    }
    $l73:;
}
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Bit $returnValue78;
    panda$core$Int64 index81;
    panda$collections$ImmutableHashMap$Entry* e83 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp84;
    panda$collections$ImmutableHashMap$Entry* $tmp95;
    panda$collections$ImmutableHashMap$Entry* $tmp96;
    int $tmp76;
    {
        panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, ((panda$core$Int64) { 0 }));
        if ($tmp77.value) {
        {
            $returnValue78 = ((panda$core$Bit) { false });
            $tmp76 = 0;
            goto $l74;
            $l79:;
            return $returnValue78;
        }
        }
        panda$core$Int64 $tmp82 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
        index81 = $tmp82;
        $tmp84 = self->contents[index81.value];
        e83 = $tmp84;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
        $l85:;
        bool $tmp88 = ((panda$core$Bit) { e83 != NULL }).value;
        if (!$tmp88) goto $l89;
        ITable* $tmp90 = ((panda$core$Equatable*) e83->key)->$class->itable;
        while ($tmp90->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp90 = $tmp90->next;
        }
        $fn92 $tmp91 = $tmp90->methods[1];
        panda$core$Bit $tmp93 = $tmp91(((panda$core$Equatable*) e83->key), ((panda$core$Equatable*) p_key));
        $tmp88 = $tmp93.value;
        $l89:;
        panda$core$Bit $tmp94 = { $tmp88 };
        bool $tmp87 = $tmp94.value;
        if (!$tmp87) goto $l86;
        {
            {
                $tmp95 = e83;
                $tmp96 = e83->next;
                e83 = $tmp96;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp95));
            }
        }
        goto $l85;
        $l86:;
        $returnValue78 = ((panda$core$Bit) { e83 != NULL });
        $tmp76 = 1;
        goto $l74;
        $l97:;
        return $returnValue78;
    }
    $l74:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e83));
    e83 = NULL;
    switch ($tmp76) {
        case 1: goto $l97;
        case 0: goto $l79;
    }
    $l99:;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* $returnValue100;
    panda$collections$Iterator* $tmp101;
    panda$collections$ImmutableHashMap$KeyIterator* $tmp102;
    panda$collections$ImmutableHashMap$KeyIterator* $tmp103 = (panda$collections$ImmutableHashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$KeyIterator$class);
    panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT($tmp103, self);
    $tmp102 = $tmp103;
    $tmp101 = ((panda$collections$Iterator*) $tmp102);
    $returnValue100 = $tmp101;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    return $returnValue100;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* $returnValue105;
    panda$collections$Iterator* $tmp106;
    panda$collections$ImmutableHashMap$ValueIterator* $tmp107;
    panda$collections$ImmutableHashMap$ValueIterator* $tmp108 = (panda$collections$ImmutableHashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$ValueIterator$class);
    panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT($tmp108, self);
    $tmp107 = $tmp108;
    $tmp106 = ((panda$collections$Iterator*) $tmp107);
    $returnValue105 = $tmp106;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
    return $returnValue105;
}
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* self) {
    panda$core$Int64 $returnValue110;
    $returnValue110 = self->_count;
    return $returnValue110;
}
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* self) {
    panda$core$MutableString* result115 = NULL;
    panda$core$MutableString* $tmp116;
    panda$core$MutableString* $tmp117;
    panda$core$Char8 $tmp119;
    panda$core$String* separator120 = NULL;
    panda$core$String* $tmp121;
    panda$core$Range$LTpanda$core$Int64$GT $tmp123;
    panda$collections$ImmutableHashMap$Entry* entry140 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp141;
    panda$core$Char8 $tmp146;
    panda$collections$ImmutableHashMap$Entry* $tmp148;
    panda$collections$ImmutableHashMap$Entry* $tmp149;
    panda$core$String* $tmp150;
    panda$core$String* $tmp151;
    panda$core$Char8 $tmp160;
    panda$core$String* $returnValue161;
    panda$core$String* $tmp162;
    panda$core$String* $tmp163;
    int $tmp114;
    {
        panda$core$MutableString* $tmp118 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp118);
        $tmp117 = $tmp118;
        $tmp116 = $tmp117;
        result115 = $tmp116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp117));
        panda$core$Char8$init$panda$core$UInt8(&$tmp119, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result115, $tmp119);
        $tmp121 = &$s122;
        separator120 = $tmp121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp123, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp125 = $tmp123.min.value;
        panda$core$Int64 i124 = { $tmp125 };
        int64_t $tmp127 = $tmp123.max.value;
        bool $tmp128 = $tmp123.inclusive.value;
        if ($tmp128) goto $l135; else goto $l136;
        $l135:;
        if ($tmp125 <= $tmp127) goto $l129; else goto $l131;
        $l136:;
        if ($tmp125 < $tmp127) goto $l129; else goto $l131;
        $l129:;
        {
            int $tmp139;
            {
                $tmp141 = self->contents[i124.value];
                entry140 = $tmp141;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
                $l142:;
                bool $tmp144 = ((panda$core$Bit) { entry140 != NULL }).value;
                if (!$tmp144) goto $l143;
                {
                    panda$core$MutableString$append$panda$core$String(result115, separator120);
                    if (((panda$core$Bit) { entry140->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result115, ((panda$core$Object*) entry140->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result115, &$s145);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp146, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result115, $tmp146);
                    if (((panda$core$Bit) { entry140->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result115, entry140->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result115, &$s147);
                    }
                    }
                    {
                        $tmp148 = entry140;
                        $tmp149 = entry140->next;
                        entry140 = $tmp149;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
                    }
                    {
                        $tmp150 = separator120;
                        $tmp151 = &$s152;
                        separator120 = $tmp151;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp150));
                    }
                }
                goto $l142;
                $l143:;
            }
            $tmp139 = -1;
            goto $l137;
            $l137:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry140));
            entry140 = NULL;
            switch ($tmp139) {
                case -1: goto $l153;
            }
            $l153:;
        }
        $l132:;
        int64_t $tmp155 = $tmp127 - i124.value;
        if ($tmp128) goto $l156; else goto $l157;
        $l156:;
        if ((uint64_t) $tmp155 >= 1) goto $l154; else goto $l131;
        $l157:;
        if ((uint64_t) $tmp155 > 1) goto $l154; else goto $l131;
        $l154:;
        i124.value += 1;
        goto $l129;
        $l131:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp160, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result115, $tmp160);
        panda$core$String* $tmp164 = panda$core$MutableString$finish$R$panda$core$String(result115);
        $tmp163 = $tmp164;
        $tmp162 = $tmp163;
        $returnValue161 = $tmp162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp163));
        $tmp114 = 0;
        goto $l112;
        $l165:;
        return $returnValue161;
    }
    $l112:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result115));
    result115 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator120));
    separator120 = NULL;
    switch ($tmp114) {
        case 0: goto $l165;
    }
    $l167:;
}

