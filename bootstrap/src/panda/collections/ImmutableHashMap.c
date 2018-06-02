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
#include "panda/core/Equatable.h"
#include "panda/collections/ImmutableHashMap/KeyIterator.h"
#include "panda/collections/ImmutableHashMap/ValueIterator.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
__attribute__((weak)) panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim(panda$collections$ImmutableHashMap* p0, panda$core$Object* p1) {
    panda$core$Object* result = panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(p0, ((panda$collections$Key*) p1));

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim(panda$collections$ImmutableHashMap* p0) {
    panda$collections$Iterator* result = panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(p0);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim(panda$collections$ImmutableHashMap* p0) {
    panda$collections$Iterator* result = panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$ImmutableHashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, NULL, { panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64, panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim, panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim, panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim} };

static panda$core$String $s1;
panda$collections$ImmutableHashMap$class_type panda$collections$ImmutableHashMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableHashMap$_panda$collections$MapView, { panda$collections$ImmutableHashMap$convert$R$panda$core$String, panda$collections$ImmutableHashMap$cleanup, panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64, panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q$shim, panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit, panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT$shim, panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT$shim, panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn35)(panda$collections$Key*);
typedef panda$core$Bit (*$fn74)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn106)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70", 34, 4585553374950449834, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$ImmutableHashMap$init(panda$collections$ImmutableHashMap* self) {
    panda$core$Int64 $tmp2;
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp4;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->_count = $tmp2;
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    self->bucketCount = $tmp3;
    panda$core$Int64$init$builtin_int64(&$tmp4, 0);
    self->contents = ((panda$collections$ImmutableHashMap$Entry**) pandaZAlloc($tmp4.value * 8));
}
void panda$collections$ImmutableHashMap$cleanup(panda$collections$ImmutableHashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp8;
    panda$core$Int64 $tmp9;
    panda$core$Bit $tmp10;
    int $tmp7;
    {
        panda$core$Int64$init$builtin_int64(&$tmp9, 0);
        panda$core$Bit$init$builtin_bit(&$tmp10, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp8, $tmp9, self->bucketCount, $tmp10);
        int64_t $tmp12 = $tmp8.min.value;
        panda$core$Int64 i11 = { $tmp12 };
        int64_t $tmp14 = $tmp8.max.value;
        bool $tmp15 = $tmp8.inclusive.value;
        if ($tmp15) goto $l22; else goto $l23;
        $l22:;
        if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
        $l23:;
        if ($tmp12 < $tmp14) goto $l16; else goto $l18;
        $l16:;
        {
            if (((panda$core$Bit) { self->contents[i11.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i11.value]));
            }
            }
        }
        $l19:;
        int64_t $tmp25 = $tmp14 - i11.value;
        if ($tmp15) goto $l26; else goto $l27;
        $l26:;
        if ((uint64_t) $tmp25 >= 1) goto $l24; else goto $l18;
        $l27:;
        if ((uint64_t) $tmp25 > 1) goto $l24; else goto $l18;
        $l24:;
        i11.value += 1;
        goto $l16;
        $l18:;
        pandaFree(self->contents);
    }
    $tmp7 = -1;
    goto $l5;
    $l5:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp7) {
        case -1: goto $l30;
    }
    $l30:;
}
panda$core$Int64 panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h31;
    panda$core$Int64 $tmp32;
    panda$core$Int64 $tmp37;
    panda$core$Int64 $tmp39;
    panda$core$Int64 $tmp42;
    panda$core$Int64 $tmp45;
    panda$core$Int64 $tmp49;
    panda$core$Int64 $returnValue52;
    memset(&h31, 0, sizeof(h31));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp32, 0);
        h31 = $tmp32;
    }
    }
    else {
    {
        ITable* $tmp33 = p_key->$class->itable;
        while ($tmp33->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp33 = $tmp33->next;
        }
        $fn35 $tmp34 = $tmp33->methods[0];
        panda$core$Int64 $tmp36 = $tmp34(p_key);
        h31 = $tmp36;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp37, 20);
    panda$core$Int64 $tmp38 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h31, $tmp37);
    panda$core$Int64$init$builtin_int64(&$tmp39, 12);
    panda$core$Int64 $tmp40 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h31, $tmp39);
    panda$core$Int64 $tmp41 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp38, $tmp40);
    panda$core$Int64$init$builtin_int64(&$tmp42, 7);
    panda$core$Int64 $tmp43 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h31, $tmp42);
    panda$core$Int64 $tmp44 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp41, $tmp43);
    panda$core$Int64$init$builtin_int64(&$tmp45, 4);
    panda$core$Int64 $tmp46 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h31, $tmp45);
    panda$core$Int64 $tmp47 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp44, $tmp46);
    panda$core$Int64 $tmp48 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h31, $tmp47);
    h31 = $tmp48;
    panda$core$Int64$init$builtin_int64(&$tmp49, 1);
    panda$core$Int64 $tmp50 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, $tmp49);
    panda$core$Int64 $tmp51 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h31, $tmp50);
    h31 = $tmp51;
    $returnValue52 = h31;
    return $returnValue52;
}
panda$core$Object* panda$collections$ImmutableHashMap$$IDX$panda$collections$ImmutableHashMap$K$R$panda$collections$ImmutableHashMap$V$Q(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 $tmp57;
    panda$core$Object* $returnValue59;
    panda$core$Object* $tmp60;
    panda$core$Int64 index63;
    panda$collections$ImmutableHashMap$Entry* e65 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp66;
    panda$collections$ImmutableHashMap$Entry* $tmp77;
    panda$collections$ImmutableHashMap$Entry* $tmp78;
    panda$core$Object* $tmp79;
    panda$core$Object* $tmp82;
    int $tmp56;
    {
        panda$core$Int64$init$builtin_int64(&$tmp57, 0);
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, $tmp57);
        if ($tmp58.value) {
        {
            $tmp60 = NULL;
            $returnValue59 = $tmp60;
            panda$core$Panda$ref$panda$core$Object($tmp60);
            $tmp56 = 0;
            goto $l54;
            $l61:;
            return $returnValue59;
        }
        }
        panda$core$Int64 $tmp64 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
        index63 = $tmp64;
        $tmp66 = self->contents[index63.value];
        e65 = $tmp66;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
        $l67:;
        bool $tmp70 = ((panda$core$Bit) { e65 != NULL }).value;
        if (!$tmp70) goto $l71;
        ITable* $tmp72 = ((panda$core$Equatable*) e65->key)->$class->itable;
        while ($tmp72->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp72 = $tmp72->next;
        }
        $fn74 $tmp73 = $tmp72->methods[1];
        panda$core$Bit $tmp75 = $tmp73(((panda$core$Equatable*) e65->key), ((panda$core$Equatable*) p_key));
        $tmp70 = $tmp75.value;
        $l71:;
        panda$core$Bit $tmp76 = { $tmp70 };
        bool $tmp69 = $tmp76.value;
        if (!$tmp69) goto $l68;
        {
            {
                $tmp77 = e65;
                $tmp78 = e65->next;
                e65 = $tmp78;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
            }
        }
        goto $l67;
        $l68:;
        if (((panda$core$Bit) { e65 != NULL }).value) {
        {
            $tmp79 = e65->value;
            $returnValue59 = $tmp79;
            panda$core$Panda$ref$panda$core$Object($tmp79);
            $tmp56 = 1;
            goto $l54;
            $l80:;
            return $returnValue59;
        }
        }
        else {
        {
            $tmp82 = NULL;
            $returnValue59 = $tmp82;
            panda$core$Panda$ref$panda$core$Object($tmp82);
            $tmp56 = 2;
            goto $l54;
            $l83:;
            return $returnValue59;
        }
        }
    }
    $tmp56 = -1;
    goto $l54;
    $l54:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e65));
    e65 = NULL;
    switch ($tmp56) {
        case 1: goto $l80;
        case 2: goto $l83;
        case 0: goto $l61;
        case -1: goto $l85;
    }
    $l85:;
    abort();
}
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 $tmp89;
    panda$core$Bit $returnValue91;
    panda$core$Bit $tmp92;
    panda$core$Int64 index95;
    panda$collections$ImmutableHashMap$Entry* e97 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp98;
    panda$collections$ImmutableHashMap$Entry* $tmp109;
    panda$collections$ImmutableHashMap$Entry* $tmp110;
    int $tmp88;
    {
        panda$core$Int64$init$builtin_int64(&$tmp89, 0);
        panda$core$Bit $tmp90 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, $tmp89);
        if ($tmp90.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp92, false);
            $returnValue91 = $tmp92;
            $tmp88 = 0;
            goto $l86;
            $l93:;
            return $returnValue91;
        }
        }
        panda$core$Int64 $tmp96 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
        index95 = $tmp96;
        $tmp98 = self->contents[index95.value];
        e97 = $tmp98;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp98));
        $l99:;
        bool $tmp102 = ((panda$core$Bit) { e97 != NULL }).value;
        if (!$tmp102) goto $l103;
        ITable* $tmp104 = ((panda$core$Equatable*) e97->key)->$class->itable;
        while ($tmp104->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp104 = $tmp104->next;
        }
        $fn106 $tmp105 = $tmp104->methods[1];
        panda$core$Bit $tmp107 = $tmp105(((panda$core$Equatable*) e97->key), ((panda$core$Equatable*) p_key));
        $tmp102 = $tmp107.value;
        $l103:;
        panda$core$Bit $tmp108 = { $tmp102 };
        bool $tmp101 = $tmp108.value;
        if (!$tmp101) goto $l100;
        {
            {
                $tmp109 = e97;
                $tmp110 = e97->next;
                e97 = $tmp110;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp109));
            }
        }
        goto $l99;
        $l100:;
        $returnValue91 = ((panda$core$Bit) { e97 != NULL });
        $tmp88 = 1;
        goto $l86;
        $l111:;
        return $returnValue91;
    }
    $l86:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e97));
    e97 = NULL;
    switch ($tmp88) {
        case 1: goto $l111;
        case 0: goto $l93;
    }
    $l113:;
    abort();
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* $returnValue114;
    panda$collections$Iterator* $tmp115;
    panda$collections$ImmutableHashMap$KeyIterator* $tmp116;
    panda$collections$ImmutableHashMap$KeyIterator* $tmp117 = (panda$collections$ImmutableHashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$KeyIterator$class);
    panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT($tmp117, self);
    $tmp116 = $tmp117;
    $tmp115 = ((panda$collections$Iterator*) $tmp116);
    $returnValue114 = $tmp115;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
    return $returnValue114;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* $returnValue119;
    panda$collections$Iterator* $tmp120;
    panda$collections$ImmutableHashMap$ValueIterator* $tmp121;
    panda$collections$ImmutableHashMap$ValueIterator* $tmp122 = (panda$collections$ImmutableHashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$ValueIterator$class);
    panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT($tmp122, self);
    $tmp121 = $tmp122;
    $tmp120 = ((panda$collections$Iterator*) $tmp121);
    $returnValue119 = $tmp120;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp121));
    return $returnValue119;
}
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* self) {
    panda$core$Int64 $returnValue124;
    $returnValue124 = self->_count;
    return $returnValue124;
}
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* self) {
    panda$core$MutableString* result129 = NULL;
    panda$core$MutableString* $tmp130;
    panda$core$MutableString* $tmp131;
    panda$core$Char8 $tmp133;
    panda$core$UInt8 $tmp134;
    panda$core$String* separator135 = NULL;
    panda$core$String* $tmp136;
    panda$core$Range$LTpanda$core$Int64$GT $tmp138;
    panda$core$Int64 $tmp139;
    panda$core$Bit $tmp140;
    panda$collections$ImmutableHashMap$Entry* entry157 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp158;
    panda$core$Char8 $tmp163;
    panda$core$UInt8 $tmp164;
    panda$collections$ImmutableHashMap$Entry* $tmp166;
    panda$collections$ImmutableHashMap$Entry* $tmp167;
    panda$core$String* $tmp168;
    panda$core$String* $tmp169;
    panda$core$Char8 $tmp178;
    panda$core$UInt8 $tmp179;
    panda$core$String* $returnValue180;
    panda$core$String* $tmp181;
    panda$core$String* $tmp182;
    int $tmp128;
    {
        panda$core$MutableString* $tmp132 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp132);
        $tmp131 = $tmp132;
        $tmp130 = $tmp131;
        result129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
        panda$core$UInt8$init$builtin_uint8(&$tmp134, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp133, $tmp134);
        panda$core$MutableString$append$panda$core$Char8(result129, $tmp133);
        $tmp136 = &$s137;
        separator135 = $tmp136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
        panda$core$Int64$init$builtin_int64(&$tmp139, 0);
        panda$core$Bit$init$builtin_bit(&$tmp140, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp138, $tmp139, self->bucketCount, $tmp140);
        int64_t $tmp142 = $tmp138.min.value;
        panda$core$Int64 i141 = { $tmp142 };
        int64_t $tmp144 = $tmp138.max.value;
        bool $tmp145 = $tmp138.inclusive.value;
        if ($tmp145) goto $l152; else goto $l153;
        $l152:;
        if ($tmp142 <= $tmp144) goto $l146; else goto $l148;
        $l153:;
        if ($tmp142 < $tmp144) goto $l146; else goto $l148;
        $l146:;
        {
            int $tmp156;
            {
                $tmp158 = self->contents[i141.value];
                entry157 = $tmp158;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp158));
                $l159:;
                bool $tmp161 = ((panda$core$Bit) { entry157 != NULL }).value;
                if (!$tmp161) goto $l160;
                {
                    panda$core$MutableString$append$panda$core$String(result129, separator135);
                    if (((panda$core$Bit) { entry157->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result129, ((panda$core$Object*) entry157->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result129, &$s162);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp164, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp163, $tmp164);
                    panda$core$MutableString$append$panda$core$Char8(result129, $tmp163);
                    if (((panda$core$Bit) { entry157->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result129, entry157->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result129, &$s165);
                    }
                    }
                    {
                        $tmp166 = entry157;
                        $tmp167 = entry157->next;
                        entry157 = $tmp167;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
                    }
                    {
                        $tmp168 = separator135;
                        $tmp169 = &$s170;
                        separator135 = $tmp169;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
                    }
                }
                goto $l159;
                $l160:;
            }
            $tmp156 = -1;
            goto $l154;
            $l154:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry157));
            entry157 = NULL;
            switch ($tmp156) {
                case -1: goto $l171;
            }
            $l171:;
        }
        $l149:;
        int64_t $tmp173 = $tmp144 - i141.value;
        if ($tmp145) goto $l174; else goto $l175;
        $l174:;
        if ((uint64_t) $tmp173 >= 1) goto $l172; else goto $l148;
        $l175:;
        if ((uint64_t) $tmp173 > 1) goto $l172; else goto $l148;
        $l172:;
        i141.value += 1;
        goto $l146;
        $l148:;
        panda$core$UInt8$init$builtin_uint8(&$tmp179, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp178, $tmp179);
        panda$core$MutableString$append$panda$core$Char8(result129, $tmp178);
        panda$core$String* $tmp183 = panda$core$MutableString$finish$R$panda$core$String(result129);
        $tmp182 = $tmp183;
        $tmp181 = $tmp182;
        $returnValue180 = $tmp181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
        $tmp128 = 0;
        goto $l126;
        $l184:;
        return $returnValue180;
    }
    $l126:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator135));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result129));
    result129 = NULL;
    separator135 = NULL;
    switch ($tmp128) {
        case 0: goto $l184;
    }
    $l186:;
    abort();
}

