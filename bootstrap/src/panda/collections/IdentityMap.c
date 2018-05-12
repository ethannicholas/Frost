#include "panda/collections/IdentityMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/MapWriter.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Map.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
#include "panda/collections/IdentityMap/Entry.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim(panda$collections$IdentityMap* self, panda$core$Object* p0, panda$core$Object* p1) {
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, p0, p1);
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim(panda$collections$IdentityMap* self, panda$core$Object* p0) {
    panda$core$Object* result = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self, p0);
    return result;
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim(panda$collections$IdentityMap* self) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(self);
    return result;
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim(panda$collections$IdentityMap* self) {
    panda$collections$Iterator* result = panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(self);
    return result;
}
panda$core$Bit panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim(panda$collections$IdentityMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(self, ((panda$collections$Map*) p0));
    return result;
}
panda$core$Bit panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim(panda$collections$IdentityMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(self, ((panda$collections$Map*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$IdentityMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$IdentityMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapWriter, { panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$IdentityMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapView, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$IdentityMap$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$Map, { panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$core$Equatable, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$collections$IdentityMap$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70", 29, -1297284844070118424, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    panda$collections$IdentityMap$Entry** $tmp17;
    panda$core$Int64 $tmp18;
    panda$collections$IdentityMap$Entry* $tmp19;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp2;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
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
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* self) {
    int $tmp30;
    {
        pandaFree(self->contents);
    }
    $tmp30 = -1;
    goto $l28;
    $l28:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp30) {
        case -1: goto $l31;
    }
    $l31:;
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $finallyReturn31;
    panda$core$Int64 $tmp33;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp33, p_key);
    panda$core$Int64 $tmp34 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp33, self->bucketCount);
    $finallyReturn31 = $tmp34;
    return $finallyReturn31;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index39;
    panda$collections$IdentityMap$Entry* e41 = NULL;
    panda$collections$IdentityMap$Entry* $tmp42;
    panda$collections$IdentityMap$Entry* $tmp49;
    panda$collections$IdentityMap$Entry* $tmp50;
    panda$core$Object* $finallyReturn50;
    panda$core$Object* $tmp52;
    panda$core$Object* $finallyReturn54;
    panda$core$Object* $tmp56;
    int $tmp38;
    {
        panda$core$Int64 $tmp40 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index39 = $tmp40;
        $tmp42 = self->contents[index39.value];
        e41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        $l43:;
        bool $tmp46 = ((panda$core$Bit) { e41 != NULL }).value;
        if (!$tmp46) goto $l47;
        $tmp46 = ((panda$core$Bit) { e41->key != p_key }).value;
        $l47:;
        panda$core$Bit $tmp48 = { $tmp46 };
        bool $tmp45 = $tmp48.value;
        if (!$tmp45) goto $l44;
        {
            {
                $tmp49 = e41;
                $tmp50 = e41->next;
                e41 = $tmp50;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
            }
        }
        goto $l43;
        $l44:;
        if (((panda$core$Bit) { e41 != NULL }).value) {
        {
            $tmp52 = e41->value;
            $finallyReturn50 = $tmp52;
            panda$core$Panda$ref$panda$core$Object($tmp52);
            $tmp38 = 0;
            goto $l36;
            $l53:;
            return $finallyReturn50;
        }
        }
        else {
        {
            $tmp56 = NULL;
            $finallyReturn54 = $tmp56;
            panda$core$Panda$ref$panda$core$Object($tmp56);
            $tmp38 = 1;
            goto $l36;
            $l57:;
            return $finallyReturn54;
        }
        }
    }
    $tmp38 = -1;
    goto $l36;
    $l36:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e41));
    e41 = NULL;
    switch ($tmp38) {
        case 0: goto $l53;
        case -1: goto $l59;
        case 1: goto $l57;
    }
    $l59:;
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index63;
    panda$collections$IdentityMap$Entry* e65 = NULL;
    panda$collections$IdentityMap$Entry* $tmp66;
    panda$collections$IdentityMap$Entry* $tmp73;
    panda$collections$IdentityMap$Entry* $tmp74;
    panda$core$Bit $finallyReturn74;
    int $tmp62;
    {
        panda$core$Int64 $tmp64 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index63 = $tmp64;
        $tmp66 = self->contents[index63.value];
        e65 = $tmp66;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp66));
        $l67:;
        bool $tmp70 = ((panda$core$Bit) { e65 != NULL }).value;
        if (!$tmp70) goto $l71;
        $tmp70 = ((panda$core$Bit) { e65->key != p_key }).value;
        $l71:;
        panda$core$Bit $tmp72 = { $tmp70 };
        bool $tmp69 = $tmp72.value;
        if (!$tmp69) goto $l68;
        {
            {
                $tmp73 = e65;
                $tmp74 = e65->next;
                e65 = $tmp74;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
            }
        }
        goto $l67;
        $l68:;
        $finallyReturn74 = ((panda$core$Bit) { e65 != NULL });
        $tmp62 = 0;
        goto $l60;
        $l76:;
        return $finallyReturn74;
    }
    $l60:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e65));
    e65 = NULL;
    switch ($tmp62) {
        case 0: goto $l76;
    }
    $l78:;
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index83;
    panda$collections$IdentityMap$Entry* e85 = NULL;
    panda$collections$IdentityMap$Entry* $tmp86;
    panda$collections$IdentityMap$Entry* $tmp93;
    panda$collections$IdentityMap$Entry* $tmp94;
    panda$collections$IdentityMap$Entry* old98 = NULL;
    panda$collections$IdentityMap$Entry* $tmp99;
    panda$collections$IdentityMap$Entry* $tmp100;
    panda$collections$IdentityMap$Entry* $tmp101;
    panda$collections$IdentityMap$Entry* $tmp102;
    panda$collections$IdentityMap$Entry* $tmp104;
    panda$collections$IdentityMap$Entry* $tmp105;
    panda$collections$IdentityMap$Entry** $tmp106;
    panda$core$Int64 $tmp107;
    panda$collections$IdentityMap$Entry* $tmp108;
    panda$core$Object* $tmp110;
    panda$core$Object* $tmp111;
    int $tmp81;
    {
        panda$core$Int64 $tmp82 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp82;
        panda$core$Int64 $tmp84 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index83 = $tmp84;
        $tmp86 = self->contents[index83.value];
        e85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        $l87:;
        bool $tmp90 = ((panda$core$Bit) { e85 != NULL }).value;
        if (!$tmp90) goto $l91;
        $tmp90 = ((panda$core$Bit) { e85->key != p_key }).value;
        $l91:;
        panda$core$Bit $tmp92 = { $tmp90 };
        bool $tmp89 = $tmp92.value;
        if (!$tmp89) goto $l88;
        {
            {
                $tmp93 = e85;
                $tmp94 = e85->next;
                e85 = $tmp94;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp94));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
            }
        }
        goto $l87;
        $l88:;
        if (((panda$core$Bit) { e85 == NULL }).value) {
        {
            int $tmp97;
            {
                $tmp99 = self->contents[index83.value];
                old98 = $tmp99;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
                {
                    $tmp100 = e85;
                    panda$collections$IdentityMap$Entry* $tmp103 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
                    panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp103, p_key, p_value);
                    $tmp102 = $tmp103;
                    $tmp101 = $tmp102;
                    e85 = $tmp101;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
                }
                {
                    $tmp104 = e85->next;
                    $tmp105 = old98;
                    e85->next = $tmp105;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp104));
                }
                {
                    $tmp106 = self->contents;
                    $tmp107 = index83;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106[$tmp107.value]));
                    $tmp108 = e85;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
                    $tmp106[$tmp107.value] = $tmp108;
                }
                panda$collections$IdentityMap$incrementCount(self);
            }
            $tmp97 = -1;
            goto $l95;
            $l95:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old98));
            old98 = NULL;
            switch ($tmp97) {
                case -1: goto $l109;
            }
            $l109:;
        }
        }
        else {
        {
            {
                $tmp110 = e85->value;
                $tmp111 = p_value;
                e85->value = $tmp111;
                panda$core$Panda$ref$panda$core$Object($tmp111);
                panda$core$Panda$unref$panda$core$Object($tmp110);
            }
        }
        }
    }
    $tmp81 = -1;
    goto $l79;
    $l79:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e85));
    e85 = NULL;
    switch ($tmp81) {
        case -1: goto $l112;
    }
    $l112:;
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index117;
    panda$collections$IdentityMap$Entry* e119 = NULL;
    panda$collections$IdentityMap$Entry* $tmp120;
    panda$collections$IdentityMap$Entry** $tmp122;
    panda$core$Int64 $tmp123;
    panda$collections$IdentityMap$Entry* $tmp124;
    panda$collections$IdentityMap$Entry* next132 = NULL;
    panda$collections$IdentityMap$Entry* $tmp133;
    panda$collections$IdentityMap$Entry* $tmp137;
    panda$collections$IdentityMap$Entry* $tmp138;
    panda$collections$IdentityMap$Entry* next140 = NULL;
    panda$collections$IdentityMap$Entry* $tmp141;
    panda$collections$IdentityMap$Entry* $tmp142;
    panda$collections$IdentityMap$Entry* $tmp143;
    int $tmp115;
    {
        panda$core$Int64 $tmp116 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
        self->changeCount = $tmp116;
        panda$core$Int64 $tmp118 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
        index117 = $tmp118;
        $tmp120 = self->contents[index117.value];
        e119 = $tmp120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp120));
        if (((panda$core$Bit) { e119 == NULL }).value) {
        {
            $tmp115 = 0;
            goto $l113;
            $l121:;
            return;
        }
        }
        if (((panda$core$Bit) { e119->key == p_key }).value) {
        {
            {
                $tmp122 = self->contents;
                $tmp123 = index117;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp122[$tmp123.value]));
                $tmp124 = e119->next;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp124));
                $tmp122[$tmp123.value] = $tmp124;
            }
            panda$core$Int64 $tmp125 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
            self->_count = $tmp125;
            $tmp115 = 1;
            goto $l113;
            $l126:;
            return;
        }
        }
        $l127:;
        while (true) {
        {
            int $tmp131;
            {
                $tmp133 = e119->next;
                next132 = $tmp133;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
                if (((panda$core$Bit) { next132 == NULL }).value) {
                {
                    $tmp131 = 0;
                    goto $l129;
                    $l134:;
                    $tmp115 = 2;
                    goto $l113;
                    $l135:;
                    return;
                }
                }
                if (((panda$core$Bit) { next132->key == p_key }).value) {
                {
                    $tmp131 = 1;
                    goto $l129;
                    $l136:;
                    goto $l128;
                }
                }
                {
                    $tmp137 = e119;
                    $tmp138 = next132;
                    e119 = $tmp138;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp138));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp137));
                }
            }
            $tmp131 = -1;
            goto $l129;
            $l129:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next132));
            next132 = NULL;
            switch ($tmp131) {
                case 0: goto $l134;
                case 1: goto $l136;
                case -1: goto $l139;
            }
            $l139:;
        }
        }
        $l128:;
        $tmp141 = e119->next;
        next140 = $tmp141;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp141));
        PANDA_ASSERT(((panda$core$Bit) { next140 != NULL }).value);
        {
            $tmp142 = e119->next;
            $tmp143 = next140->next;
            e119->next = $tmp143;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp142));
        }
        panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp144;
    }
    $tmp115 = -1;
    goto $l113;
    $l113:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e119));
    e119 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next140));
    next140 = NULL;
    switch ($tmp115) {
        case -1: goto $l145;
        case 2: goto $l135;
        case 1: goto $l126;
        case 0: goto $l121;
    }
    $l145:;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp147;
    panda$collections$IdentityMap$Entry** $tmp161;
    panda$core$Int64 $tmp162;
    panda$collections$IdentityMap$Entry* $tmp163;
    panda$core$Int64 $tmp146 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp146;
    self->_count = ((panda$core$Int64) { 0 });
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp147, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp149 = $tmp147.min.value;
    panda$core$Int64 i148 = { $tmp149 };
    int64_t $tmp151 = $tmp147.max.value;
    bool $tmp152 = $tmp147.inclusive.value;
    if ($tmp152) goto $l159; else goto $l160;
    $l159:;
    if ($tmp149 <= $tmp151) goto $l153; else goto $l155;
    $l160:;
    if ($tmp149 < $tmp151) goto $l153; else goto $l155;
    $l153:;
    {
        if (((panda$core$Bit) { self->contents[i148.value] != NULL }).value) {
        {
            {
                $tmp161 = self->contents;
                $tmp162 = i148;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp161[$tmp162.value]));
                $tmp163 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
                $tmp161[$tmp162.value] = $tmp163;
            }
        }
        }
    }
    $l156:;
    int64_t $tmp165 = $tmp151 - i148.value;
    if ($tmp152) goto $l166; else goto $l167;
    $l166:;
    if ((uint64_t) $tmp165 >= 1) goto $l164; else goto $l155;
    $l167:;
    if ((uint64_t) $tmp165 > 1) goto $l164; else goto $l155;
    $l164:;
    i148.value += 1;
    goto $l153;
    $l155:;
    panda$core$Int64 $tmp170 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp171 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp170, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp171;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents174;
    panda$core$Int64 oldBucketCount175;
    panda$core$Range$LTpanda$core$Int64$GT $tmp177;
    panda$collections$IdentityMap$Entry** $tmp191;
    panda$core$Int64 $tmp192;
    panda$collections$IdentityMap$Entry* $tmp193;
    panda$core$Range$LTpanda$core$Int64$GT $tmp201;
    panda$collections$IdentityMap$Entry* e218 = NULL;
    panda$collections$IdentityMap$Entry* $tmp219;
    panda$collections$IdentityMap$Entry* $tmp223;
    panda$collections$IdentityMap$Entry* $tmp224;
    panda$core$Int64 $tmp172 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp172;
    panda$core$Bit $tmp173 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp173.value) {
    {
        oldContents174 = self->contents;
        oldBucketCount175 = self->bucketCount;
        panda$core$Int64 $tmp176 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp176;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp177, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp179 = $tmp177.min.value;
        panda$core$Int64 i178 = { $tmp179 };
        int64_t $tmp181 = $tmp177.max.value;
        bool $tmp182 = $tmp177.inclusive.value;
        if ($tmp182) goto $l189; else goto $l190;
        $l189:;
        if ($tmp179 <= $tmp181) goto $l183; else goto $l185;
        $l190:;
        if ($tmp179 < $tmp181) goto $l183; else goto $l185;
        $l183:;
        {
            {
                $tmp191 = self->contents;
                $tmp192 = i178;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191[$tmp192.value]));
                $tmp193 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
                $tmp191[$tmp192.value] = $tmp193;
            }
        }
        $l186:;
        int64_t $tmp195 = $tmp181 - i178.value;
        if ($tmp182) goto $l196; else goto $l197;
        $l196:;
        if ((uint64_t) $tmp195 >= 1) goto $l194; else goto $l185;
        $l197:;
        if ((uint64_t) $tmp195 > 1) goto $l194; else goto $l185;
        $l194:;
        i178.value += 1;
        goto $l183;
        $l185:;
        panda$core$Int64 $tmp200 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp200;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp201, ((panda$core$Int64) { 0 }), oldBucketCount175, ((panda$core$Bit) { false }));
        int64_t $tmp203 = $tmp201.min.value;
        panda$core$Int64 i202 = { $tmp203 };
        int64_t $tmp205 = $tmp201.max.value;
        bool $tmp206 = $tmp201.inclusive.value;
        if ($tmp206) goto $l213; else goto $l214;
        $l213:;
        if ($tmp203 <= $tmp205) goto $l207; else goto $l209;
        $l214:;
        if ($tmp203 < $tmp205) goto $l207; else goto $l209;
        $l207:;
        {
            int $tmp217;
            {
                $tmp219 = oldContents174[i202.value];
                e218 = $tmp219;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
                $l220:;
                bool $tmp222 = ((panda$core$Bit) { e218 != NULL }).value;
                if (!$tmp222) goto $l221;
                {
                    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e218->key, e218->value);
                    {
                        $tmp223 = e218;
                        $tmp224 = e218->next;
                        e218 = $tmp224;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp224));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
                    }
                }
                goto $l220;
                $l221:;
            }
            $tmp217 = -1;
            goto $l215;
            $l215:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e218));
            e218 = NULL;
            switch ($tmp217) {
                case -1: goto $l225;
            }
            $l225:;
        }
        $l210:;
        int64_t $tmp227 = $tmp205 - i202.value;
        if ($tmp206) goto $l228; else goto $l229;
        $l228:;
        if ((uint64_t) $tmp227 >= 1) goto $l226; else goto $l209;
        $l229:;
        if ((uint64_t) $tmp227 > 1) goto $l226; else goto $l209;
        $l226:;
        i202.value += 1;
        goto $l207;
        $l209:;
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    panda$core$Int64 $finallyReturn231;
    $finallyReturn231 = self->_count;
    return $finallyReturn231;
}
panda$core$Bit panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$collections$Map* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$Bit panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$collections$Map* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result237 = NULL;
    panda$core$MutableString* $tmp238;
    panda$core$MutableString* $tmp239;
    panda$core$Char8 $tmp241;
    panda$core$String* separator242 = NULL;
    panda$core$String* $tmp243;
    panda$core$Range$LTpanda$core$Int64$GT $tmp245;
    panda$collections$IdentityMap$Entry* entry262 = NULL;
    panda$collections$IdentityMap$Entry* $tmp263;
    panda$core$Char8 $tmp268;
    panda$collections$IdentityMap$Entry* $tmp270;
    panda$collections$IdentityMap$Entry* $tmp271;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    panda$core$Char8 $tmp282;
    panda$core$String* $finallyReturn282;
    panda$core$String* $tmp284;
    panda$core$String* $tmp285;
    int $tmp236;
    {
        panda$core$MutableString* $tmp240 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp240);
        $tmp239 = $tmp240;
        $tmp238 = $tmp239;
        result237 = $tmp238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
        panda$core$Char8$init$panda$core$UInt8(&$tmp241, ((panda$core$UInt8) { 123 }));
        panda$core$MutableString$append$panda$core$Char8(result237, $tmp241);
        $tmp243 = &$s244;
        separator242 = $tmp243;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp243));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp245, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp247 = $tmp245.min.value;
        panda$core$Int64 i246 = { $tmp247 };
        int64_t $tmp249 = $tmp245.max.value;
        bool $tmp250 = $tmp245.inclusive.value;
        if ($tmp250) goto $l257; else goto $l258;
        $l257:;
        if ($tmp247 <= $tmp249) goto $l251; else goto $l253;
        $l258:;
        if ($tmp247 < $tmp249) goto $l251; else goto $l253;
        $l251:;
        {
            int $tmp261;
            {
                $tmp263 = self->contents[i246.value];
                entry262 = $tmp263;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
                $l264:;
                bool $tmp266 = ((panda$core$Bit) { entry262 != NULL }).value;
                if (!$tmp266) goto $l265;
                {
                    panda$core$MutableString$append$panda$core$String(result237, separator242);
                    if (((panda$core$Bit) { entry262->key != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result237, entry262->key);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result237, &$s267);
                    }
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp268, ((panda$core$UInt8) { 58 }));
                    panda$core$MutableString$append$panda$core$Char8(result237, $tmp268);
                    if (((panda$core$Bit) { entry262->value != NULL }).value) {
                    {
                        panda$core$MutableString$append$panda$core$Object(result237, entry262->value);
                    }
                    }
                    else {
                    {
                        panda$core$MutableString$append$panda$core$String(result237, &$s269);
                    }
                    }
                    {
                        $tmp270 = entry262;
                        $tmp271 = entry262->next;
                        entry262 = $tmp271;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                    }
                    {
                        $tmp272 = separator242;
                        $tmp273 = &$s274;
                        separator242 = $tmp273;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp273));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
                    }
                }
                goto $l264;
                $l265:;
            }
            $tmp261 = -1;
            goto $l259;
            $l259:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry262));
            entry262 = NULL;
            switch ($tmp261) {
                case -1: goto $l275;
            }
            $l275:;
        }
        $l254:;
        int64_t $tmp277 = $tmp249 - i246.value;
        if ($tmp250) goto $l278; else goto $l279;
        $l278:;
        if ((uint64_t) $tmp277 >= 1) goto $l276; else goto $l253;
        $l279:;
        if ((uint64_t) $tmp277 > 1) goto $l276; else goto $l253;
        $l276:;
        i246.value += 1;
        goto $l251;
        $l253:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp282, ((panda$core$UInt8) { 125 }));
        panda$core$MutableString$append$panda$core$Char8(result237, $tmp282);
        panda$core$String* $tmp286 = panda$core$MutableString$finish$R$panda$core$String(result237);
        $tmp285 = $tmp286;
        $tmp284 = $tmp285;
        $finallyReturn282 = $tmp284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
        $tmp236 = 0;
        goto $l234;
        $l287:;
        return $finallyReturn282;
    }
    $l234:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result237));
    result237 = NULL;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator242));
    separator242 = NULL;
    switch ($tmp236) {
        case 0: goto $l287;
    }
    $l289:;
}

