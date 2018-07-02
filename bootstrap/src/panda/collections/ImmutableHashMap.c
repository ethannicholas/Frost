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
typedef panda$core$Bit (*$fn110)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70", 34, 4585553374950449834, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s173 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    if (false) goto $l86; else goto $l87;
    $l87:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s88, (panda$core$Int64) { 168 }, &$s89);
    abort();
    $l86:;
    abort();
}
panda$core$Bit panda$collections$ImmutableHashMap$contains$panda$collections$ImmutableHashMap$K$R$panda$core$Bit(panda$collections$ImmutableHashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 $tmp93;
    panda$core$Bit $returnValue95;
    panda$core$Bit $tmp96;
    panda$core$Int64 index99;
    panda$collections$ImmutableHashMap$Entry* e101 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp102;
    panda$collections$ImmutableHashMap$Entry* $tmp113;
    panda$collections$ImmutableHashMap$Entry* $tmp114;
    int $tmp92;
    {
        panda$core$Int64$init$builtin_int64(&$tmp93, 0);
        panda$core$Bit $tmp94 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucketCount, $tmp93);
        if ($tmp94.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp96, false);
            $returnValue95 = $tmp96;
            $tmp92 = 0;
            goto $l90;
            $l97:;
            return $returnValue95;
        }
        }
        panda$core$Int64 $tmp100 = panda$collections$ImmutableHashMap$indexFor$panda$collections$ImmutableHashMap$K$R$panda$core$Int64(self, p_key);
        index99 = $tmp100;
        $tmp102 = self->contents[index99.value];
        e101 = $tmp102;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp102));
        $l103:;
        bool $tmp106 = ((panda$core$Bit) { e101 != NULL }).value;
        if (!$tmp106) goto $l107;
        ITable* $tmp108 = ((panda$core$Equatable*) e101->key)->$class->itable;
        while ($tmp108->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp108 = $tmp108->next;
        }
        $fn110 $tmp109 = $tmp108->methods[1];
        panda$core$Bit $tmp111 = $tmp109(((panda$core$Equatable*) e101->key), ((panda$core$Equatable*) p_key));
        $tmp106 = $tmp111.value;
        $l107:;
        panda$core$Bit $tmp112 = { $tmp106 };
        bool $tmp105 = $tmp112.value;
        if (!$tmp105) goto $l104;
        {
            {
                $tmp113 = e101;
                $tmp114 = e101->next;
                e101 = $tmp114;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp113));
            }
        }
        goto $l103;
        $l104:;
        $returnValue95 = ((panda$core$Bit) { e101 != NULL });
        $tmp92 = 1;
        goto $l90;
        $l115:;
        return $returnValue95;
    }
    $l90:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e101));
    e101 = NULL;
    switch ($tmp92) {
        case 1: goto $l115;
        case 0: goto $l97;
    }
    $l117:;
    if (false) goto $l118; else goto $l119;
    $l119:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s120, (panda$core$Int64) { 185 }, &$s121);
    abort();
    $l118:;
    abort();
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$keys$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$K$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* $returnValue122;
    panda$collections$Iterator* $tmp123;
    panda$collections$ImmutableHashMap$KeyIterator* $tmp124;
    panda$collections$ImmutableHashMap$KeyIterator* $tmp125 = (panda$collections$ImmutableHashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$KeyIterator$class);
    panda$collections$ImmutableHashMap$KeyIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$KeyIterator$K$Cpanda$collections$ImmutableHashMap$KeyIterator$V$GT($tmp125, self);
    $tmp124 = $tmp125;
    $tmp123 = ((panda$collections$Iterator*) $tmp124);
    $returnValue122 = $tmp123;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp123));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124));
    return $returnValue122;
}
panda$collections$Iterator* panda$collections$ImmutableHashMap$values$R$panda$collections$Iterator$LTpanda$collections$ImmutableHashMap$V$GT(panda$collections$ImmutableHashMap* self) {
    panda$collections$Iterator* $returnValue127;
    panda$collections$Iterator* $tmp128;
    panda$collections$ImmutableHashMap$ValueIterator* $tmp129;
    panda$collections$ImmutableHashMap$ValueIterator* $tmp130 = (panda$collections$ImmutableHashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$ImmutableHashMap$ValueIterator$class);
    panda$collections$ImmutableHashMap$ValueIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$ValueIterator$K$Cpanda$collections$ImmutableHashMap$ValueIterator$V$GT($tmp130, self);
    $tmp129 = $tmp130;
    $tmp128 = ((panda$collections$Iterator*) $tmp129);
    $returnValue127 = $tmp128;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp128));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp129));
    return $returnValue127;
}
panda$core$Int64 panda$collections$ImmutableHashMap$get_count$R$panda$core$Int64(panda$collections$ImmutableHashMap* self) {
    panda$core$Int64 $returnValue132;
    $returnValue132 = self->_count;
    return $returnValue132;
}
panda$core$String* panda$collections$ImmutableHashMap$convert$R$panda$core$String(panda$collections$ImmutableHashMap* self) {
    panda$core$MutableString* result137 = NULL;
    panda$core$MutableString* $tmp138;
    panda$core$MutableString* $tmp139;
    panda$core$Char8 $tmp141;
    panda$core$UInt8 $tmp142;
    panda$core$String* separator143 = NULL;
    panda$core$String* $tmp144;
    panda$core$Range$LTpanda$core$Int64$GT $tmp146;
    panda$core$Int64 $tmp147;
    panda$core$Bit $tmp148;
    panda$collections$ImmutableHashMap$Entry* entry165 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp166;
    panda$core$Char8 $tmp171;
    panda$core$UInt8 $tmp172;
    panda$collections$ImmutableHashMap$Entry* $tmp174;
    panda$collections$ImmutableHashMap$Entry* $tmp175;
    panda$core$String* $tmp176;
    panda$core$String* $tmp177;
    panda$core$Char8 $tmp186;
    panda$core$UInt8 $tmp187;
    panda$core$String* $returnValue188;
    panda$core$String* $tmp189;
    panda$core$String* $tmp190;
    int $tmp136;
    {
        panda$core$MutableString* $tmp140 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp140);
        $tmp139 = $tmp140;
        $tmp138 = $tmp139;
        result137 = $tmp138;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$UInt8$init$builtin_uint8(&$tmp142, 123);
        panda$core$Char8$init$panda$core$UInt8(&$tmp141, $tmp142);
        panda$core$MutableString$append$panda$core$Char8(result137, $tmp141);
        $tmp144 = &$s145;
        separator143 = $tmp144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
        panda$core$Int64$init$builtin_int64(&$tmp147, 0);
        panda$core$Bit$init$builtin_bit(&$tmp148, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp146, $tmp147, self->bucketCount, $tmp148);
        int64_t $tmp150 = $tmp146.min.value;
        panda$core$Int64 i149 = { $tmp150 };
        int64_t $tmp152 = $tmp146.max.value;
        bool $tmp153 = $tmp146.inclusive.value;
        if ($tmp153) goto $l160; else goto $l161;
        $l160:;
        if ($tmp150 <= $tmp152) goto $l154; else goto $l156;
        $l161:;
        if ($tmp150 < $tmp152) goto $l154; else goto $l156;
        $l154:;
        {
            int $tmp164;
            {
                $tmp166 = self->contents[i149.value];
                entry165 = $tmp166;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp166));
                $l167:;
                bool $tmp169 = ((panda$core$Bit) { entry165 != NULL }).value;
                if (!$tmp169) goto $l168;
                {
                    panda$core$MutableString$append$panda$core$String(result137, separator143);
                    if (((panda$core$Bit) { entry165->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result137, ((panda$core$Object*) entry165->key));
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result137, &$s170);
                    }
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp172, 58);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp171, $tmp172);
                    panda$core$MutableString$append$panda$core$Char8(result137, $tmp171);
                    if (((panda$core$Bit) { entry165->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result137, entry165->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result137, &$s173);
                    }
                    }
                    {
                        $tmp174 = entry165;
                        $tmp175 = entry165->next;
                        entry165 = $tmp175;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp175));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp174));
                    }
                    {
                        $tmp176 = separator143;
                        $tmp177 = &$s178;
                        separator143 = $tmp177;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp177));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
                    }
                }
                goto $l167;
                $l168:;
            }
            $tmp164 = -1;
            goto $l162;
            $l162:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry165));
            entry165 = NULL;
            switch ($tmp164) {
                case -1: goto $l179;
            }
            $l179:;
        }
        $l157:;
        int64_t $tmp181 = $tmp152 - i149.value;
        if ($tmp153) goto $l182; else goto $l183;
        $l182:;
        if ((uint64_t) $tmp181 >= 1) goto $l180; else goto $l156;
        $l183:;
        if ((uint64_t) $tmp181 > 1) goto $l180; else goto $l156;
        $l180:;
        i149.value += 1;
        goto $l154;
        $l156:;
        panda$core$UInt8$init$builtin_uint8(&$tmp187, 125);
        panda$core$Char8$init$panda$core$UInt8(&$tmp186, $tmp187);
        panda$core$MutableString$append$panda$core$Char8(result137, $tmp186);
        panda$core$String* $tmp191 = panda$core$MutableString$finish$R$panda$core$String(result137);
        $tmp190 = $tmp191;
        $tmp189 = $tmp190;
        $returnValue188 = $tmp189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
        $tmp136 = 0;
        goto $l134;
        $l192:;
        return $returnValue188;
    }
    $l134:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator143));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result137));
    result137 = NULL;
    separator143 = NULL;
    switch ($tmp136) {
        case 0: goto $l192;
    }
    $l194:;
    if (false) goto $l195; else goto $l196;
    $l196:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s197, (panda$core$Int64) { 219 }, &$s198);
    abort();
    $l195:;
    abort();
}

