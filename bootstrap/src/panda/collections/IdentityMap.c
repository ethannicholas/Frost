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
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
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
            panda$collections$IdentityMap$Entry** $tmp17 = self->contents;
            panda$core$Int64 $tmp18 = i4;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17[$tmp18.value]));
            panda$collections$IdentityMap$Entry* $tmp19 = NULL;
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
    pandaFree(self->contents);
    panda$core$Object$cleanup(((panda$core$Object*) self));
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $tmp29;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp29, p_key);
    panda$core$Int64 $tmp30 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp29, self->bucketCount);
    panda$core$Int64 $tmp28 = $tmp30;
    return $tmp28;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index31;
    panda$collections$IdentityMap$Entry* e33;
    panda$core$Object* tmp143;
    panda$core$Object* tmp246;
    panda$core$Int64 $tmp32 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index31 = $tmp32;
    panda$collections$IdentityMap$Entry* $tmp34 = self->contents[index31.value];
    e33 = $tmp34;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
    $l35:;
    bool $tmp38 = ((panda$core$Bit) { e33 != NULL }).value;
    if (!$tmp38) goto $l39;
    $tmp38 = ((panda$core$Bit) { e33->key != p_key }).value;
    $l39:;
    panda$core$Bit $tmp40 = { $tmp38 };
    bool $tmp37 = $tmp40.value;
    if (!$tmp37) goto $l36;
    {
        {
            panda$collections$IdentityMap$Entry* $tmp41 = e33;
            panda$collections$IdentityMap$Entry* $tmp42 = e33->next;
            e33 = $tmp42;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        }
    }
    goto $l35;
    $l36:;
    if (((panda$core$Bit) { e33 != NULL }).value) {
    {
        {
            panda$core$Object* $tmp44 = e33->value;
            tmp143 = $tmp44;
            panda$core$Panda$ref$panda$core$Object($tmp44);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e33));
            panda$core$Object* $tmp45 = tmp143;
            return $tmp45;
        }
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp47 = NULL;
            tmp246 = $tmp47;
            panda$core$Panda$ref$panda$core$Object($tmp47);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e33));
            panda$core$Object* $tmp48 = tmp246;
            return $tmp48;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e33));
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index49;
    panda$collections$IdentityMap$Entry* e51;
    panda$core$Bit tmp361;
    panda$core$Int64 $tmp50 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index49 = $tmp50;
    panda$collections$IdentityMap$Entry* $tmp52 = self->contents[index49.value];
    e51 = $tmp52;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
    $l53:;
    bool $tmp56 = ((panda$core$Bit) { e51 != NULL }).value;
    if (!$tmp56) goto $l57;
    $tmp56 = ((panda$core$Bit) { e51->key != p_key }).value;
    $l57:;
    panda$core$Bit $tmp58 = { $tmp56 };
    bool $tmp55 = $tmp58.value;
    if (!$tmp55) goto $l54;
    {
        {
            panda$collections$IdentityMap$Entry* $tmp59 = e51;
            panda$collections$IdentityMap$Entry* $tmp60 = e51->next;
            e51 = $tmp60;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
        }
    }
    goto $l53;
    $l54:;
    {
        tmp361 = ((panda$core$Bit) { e51 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e51));
        panda$core$Bit $tmp62 = tmp361;
        return $tmp62;
    }
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index64;
    panda$collections$IdentityMap$Entry* e66;
    panda$collections$IdentityMap$Entry* old76;
    panda$core$Int64 $tmp63 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp63;
    panda$core$Int64 $tmp65 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index64 = $tmp65;
    panda$collections$IdentityMap$Entry* $tmp67 = self->contents[index64.value];
    e66 = $tmp67;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
    $l68:;
    bool $tmp71 = ((panda$core$Bit) { e66 != NULL }).value;
    if (!$tmp71) goto $l72;
    $tmp71 = ((panda$core$Bit) { e66->key != p_key }).value;
    $l72:;
    panda$core$Bit $tmp73 = { $tmp71 };
    bool $tmp70 = $tmp73.value;
    if (!$tmp70) goto $l69;
    {
        {
            panda$collections$IdentityMap$Entry* $tmp74 = e66;
            panda$collections$IdentityMap$Entry* $tmp75 = e66->next;
            e66 = $tmp75;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp75));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
        }
    }
    goto $l68;
    $l69:;
    if (((panda$core$Bit) { e66 == NULL }).value) {
    {
        panda$collections$IdentityMap$Entry* $tmp77 = self->contents[index64.value];
        old76 = $tmp77;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
        {
            panda$collections$IdentityMap$Entry* $tmp78 = e66;
            panda$collections$IdentityMap$Entry* $tmp81 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
            panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp81, p_key, p_value);
            panda$collections$IdentityMap$Entry* $tmp80 = $tmp81;
            panda$collections$IdentityMap$Entry* $tmp79 = $tmp80;
            e66 = $tmp79;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        }
        {
            panda$collections$IdentityMap$Entry* $tmp82 = e66->next;
            panda$collections$IdentityMap$Entry* $tmp83 = old76;
            e66->next = $tmp83;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp82));
        }
        {
            panda$collections$IdentityMap$Entry** $tmp84 = self->contents;
            panda$core$Int64 $tmp85 = index64;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84[$tmp85.value]));
            panda$collections$IdentityMap$Entry* $tmp86 = e66;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
            $tmp84[$tmp85.value] = $tmp86;
        }
        panda$collections$IdentityMap$incrementCount(self);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old76));
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp87 = e66->value;
            panda$core$Object* $tmp88 = p_value;
            e66->value = $tmp88;
            panda$core$Panda$ref$panda$core$Object($tmp88);
            panda$core$Panda$unref$panda$core$Object($tmp87);
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e66));
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index90;
    panda$collections$IdentityMap$Entry* e92;
    panda$collections$IdentityMap$Entry* next100;
    panda$collections$IdentityMap$Entry* next104;
    panda$core$Int64 $tmp89 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp89;
    panda$core$Int64 $tmp91 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index90 = $tmp91;
    panda$collections$IdentityMap$Entry* $tmp93 = self->contents[index90.value];
    e92 = $tmp93;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp93));
    if (((panda$core$Bit) { e92 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e92));
            return;
        }
    }
    }
    if (((panda$core$Bit) { e92->key == p_key }).value) {
    {
        {
            panda$collections$IdentityMap$Entry** $tmp94 = self->contents;
            panda$core$Int64 $tmp95 = index90;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp94[$tmp95.value]));
            panda$collections$IdentityMap$Entry* $tmp96 = e92->next;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
            $tmp94[$tmp95.value] = $tmp96;
        }
        panda$core$Int64 $tmp97 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp97;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e92));
            return;
        }
    }
    }
    $l98:;
    while (true) {
    {
        panda$collections$IdentityMap$Entry* $tmp101 = e92->next;
        next100 = $tmp101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
        if (((panda$core$Bit) { next100 == NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next100));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e92));
                    return;
                }
            }
        }
        }
        if (((panda$core$Bit) { next100->key == p_key }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next100));
                goto $l99;
            }
        }
        }
        {
            panda$collections$IdentityMap$Entry* $tmp102 = e92;
            panda$collections$IdentityMap$Entry* $tmp103 = next100;
            e92 = $tmp103;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp103));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next100));
    }
    }
    $l99:;
    panda$collections$IdentityMap$Entry* $tmp105 = e92->next;
    next104 = $tmp105;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
    PANDA_ASSERT(((panda$core$Bit) { next104 != NULL }).value);
    {
        panda$collections$IdentityMap$Entry* $tmp106 = e92->next;
        panda$collections$IdentityMap$Entry* $tmp107 = next104->next;
        e92->next = $tmp107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    }
    panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp108;
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e92));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next104));
    }
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp110;
    panda$core$Int64 $tmp109 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp109;
    self->_count = ((panda$core$Int64) { 0 });
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp110, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp112 = $tmp110.min.value;
    panda$core$Int64 i111 = { $tmp112 };
    int64_t $tmp114 = $tmp110.max.value;
    bool $tmp115 = $tmp110.inclusive.value;
    if ($tmp115) goto $l122; else goto $l123;
    $l122:;
    if ($tmp112 <= $tmp114) goto $l116; else goto $l118;
    $l123:;
    if ($tmp112 < $tmp114) goto $l116; else goto $l118;
    $l116:;
    {
        if (((panda$core$Bit) { self->contents[i111.value] != NULL }).value) {
        {
            {
                panda$collections$IdentityMap$Entry** $tmp124 = self->contents;
                panda$core$Int64 $tmp125 = i111;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp124[$tmp125.value]));
                panda$collections$IdentityMap$Entry* $tmp126 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
                $tmp124[$tmp125.value] = $tmp126;
            }
        }
        }
    }
    $l119:;
    int64_t $tmp128 = $tmp114 - i111.value;
    if ($tmp115) goto $l129; else goto $l130;
    $l129:;
    if ((uint64_t) $tmp128 >= 1) goto $l127; else goto $l118;
    $l130:;
    if ((uint64_t) $tmp128 > 1) goto $l127; else goto $l118;
    $l127:;
    i111.value += 1;
    goto $l116;
    $l118:;
    panda$core$Int64 $tmp133 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp134 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp133, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp134;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents137;
    panda$core$Int64 oldBucketCount138;
    panda$core$Range$LTpanda$core$Int64$GT $tmp140;
    panda$core$Range$LTpanda$core$Int64$GT $tmp164;
    panda$collections$IdentityMap$Entry* e178;
    panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp135;
    panda$core$Bit $tmp136 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp136.value) {
    {
        oldContents137 = self->contents;
        oldBucketCount138 = self->bucketCount;
        panda$core$Int64 $tmp139 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp139;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 8));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp140, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp142 = $tmp140.min.value;
        panda$core$Int64 i141 = { $tmp142 };
        int64_t $tmp144 = $tmp140.max.value;
        bool $tmp145 = $tmp140.inclusive.value;
        if ($tmp145) goto $l152; else goto $l153;
        $l152:;
        if ($tmp142 <= $tmp144) goto $l146; else goto $l148;
        $l153:;
        if ($tmp142 < $tmp144) goto $l146; else goto $l148;
        $l146:;
        {
            {
                panda$collections$IdentityMap$Entry** $tmp154 = self->contents;
                panda$core$Int64 $tmp155 = i141;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp154[$tmp155.value]));
                panda$collections$IdentityMap$Entry* $tmp156 = NULL;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
                $tmp154[$tmp155.value] = $tmp156;
            }
        }
        $l149:;
        int64_t $tmp158 = $tmp144 - i141.value;
        if ($tmp145) goto $l159; else goto $l160;
        $l159:;
        if ((uint64_t) $tmp158 >= 1) goto $l157; else goto $l148;
        $l160:;
        if ((uint64_t) $tmp158 > 1) goto $l157; else goto $l148;
        $l157:;
        i141.value += 1;
        goto $l146;
        $l148:;
        panda$core$Int64 $tmp163 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp163;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp164, ((panda$core$Int64) { 0 }), oldBucketCount138, ((panda$core$Bit) { false }));
        int64_t $tmp166 = $tmp164.min.value;
        panda$core$Int64 i165 = { $tmp166 };
        int64_t $tmp168 = $tmp164.max.value;
        bool $tmp169 = $tmp164.inclusive.value;
        if ($tmp169) goto $l176; else goto $l177;
        $l176:;
        if ($tmp166 <= $tmp168) goto $l170; else goto $l172;
        $l177:;
        if ($tmp166 < $tmp168) goto $l170; else goto $l172;
        $l170:;
        {
            panda$collections$IdentityMap$Entry* $tmp179 = oldContents137[i165.value];
            e178 = $tmp179;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
            $l180:;
            bool $tmp182 = ((panda$core$Bit) { e178 != NULL }).value;
            if (!$tmp182) goto $l181;
            {
                panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e178->key, e178->value);
                {
                    panda$collections$IdentityMap$Entry* $tmp183 = e178;
                    panda$collections$IdentityMap$Entry* $tmp184 = e178->next;
                    e178 = $tmp184;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp183));
                }
            }
            goto $l180;
            $l181:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e178));
        }
        $l173:;
        int64_t $tmp186 = $tmp168 - i165.value;
        if ($tmp169) goto $l187; else goto $l188;
        $l187:;
        if ((uint64_t) $tmp186 >= 1) goto $l185; else goto $l172;
        $l188:;
        if ((uint64_t) $tmp186 > 1) goto $l185; else goto $l172;
        $l185:;
        i165.value += 1;
        goto $l170;
        $l172:;
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    panda$core$Int64 $tmp191 = self->_count;
    return $tmp191;
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
    panda$core$MutableString* result192;
    panda$core$Char8 $tmp196;
    panda$core$String* separator197;
    panda$core$Range$LTpanda$core$Int64$GT $tmp200;
    panda$collections$IdentityMap$Entry* entry214;
    panda$core$Char8 $tmp220;
    panda$core$Char8 $tmp233;
    panda$core$String* tmp4234;
    panda$core$MutableString* $tmp195 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp195);
    panda$core$MutableString* $tmp194 = $tmp195;
    panda$core$MutableString* $tmp193 = $tmp194;
    result192 = $tmp193;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
    panda$core$Char8$init$panda$core$UInt8(&$tmp196, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result192, $tmp196);
    panda$core$String* $tmp198 = &$s199;
    separator197 = $tmp198;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp200, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp202 = $tmp200.min.value;
    panda$core$Int64 i201 = { $tmp202 };
    int64_t $tmp204 = $tmp200.max.value;
    bool $tmp205 = $tmp200.inclusive.value;
    if ($tmp205) goto $l212; else goto $l213;
    $l212:;
    if ($tmp202 <= $tmp204) goto $l206; else goto $l208;
    $l213:;
    if ($tmp202 < $tmp204) goto $l206; else goto $l208;
    $l206:;
    {
        panda$collections$IdentityMap$Entry* $tmp215 = self->contents[i201.value];
        entry214 = $tmp215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
        $l216:;
        bool $tmp218 = ((panda$core$Bit) { entry214 != NULL }).value;
        if (!$tmp218) goto $l217;
        {
            panda$core$MutableString$append$panda$core$String(result192, separator197);
            if (((panda$core$Bit) { entry214->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result192, entry214->key);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result192, &$s219);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp220, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result192, $tmp220);
            if (((panda$core$Bit) { entry214->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result192, entry214->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result192, &$s221);
            }
            }
            {
                panda$collections$IdentityMap$Entry* $tmp222 = entry214;
                panda$collections$IdentityMap$Entry* $tmp223 = entry214->next;
                entry214 = $tmp223;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp222));
            }
            {
                panda$core$String* $tmp224 = separator197;
                panda$core$String* $tmp225 = &$s226;
                separator197 = $tmp225;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
            }
        }
        goto $l216;
        $l217:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry214));
    }
    $l209:;
    int64_t $tmp228 = $tmp204 - i201.value;
    if ($tmp205) goto $l229; else goto $l230;
    $l229:;
    if ((uint64_t) $tmp228 >= 1) goto $l227; else goto $l208;
    $l230:;
    if ((uint64_t) $tmp228 > 1) goto $l227; else goto $l208;
    $l227:;
    i201.value += 1;
    goto $l206;
    $l208:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp233, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result192, $tmp233);
    {
        panda$core$String* $tmp237 = panda$core$MutableString$finish$R$panda$core$String(result192);
        panda$core$String* $tmp236 = $tmp237;
        panda$core$String* $tmp235 = $tmp236;
        tmp4234 = $tmp235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp235));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp236));
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator197));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result192));
        }
        panda$core$String* $tmp238 = tmp4234;
        return $tmp238;
    }
}

