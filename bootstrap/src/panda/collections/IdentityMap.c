#include "panda/collections/IdentityMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
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
#include "panda/core/String.h"
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

panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$core$Equatable, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };


static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaAlloc(self->bucketCount.value * 40));
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
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[i3.value]));
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
            self->contents[i3.value] = NULL;
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
    panda$core$Int64 $tmp22 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp23 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp22, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp23;
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $tmp24;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp24, p_key);
    panda$core$Int64 $tmp25 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp24, self->bucketCount);
    return $tmp25;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index26;
    panda$collections$IdentityMap$Entry* e28;
    panda$core$Int64 $tmp27 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index26 = $tmp27;
    panda$core$Object* $tmp29 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index26.value]));
    e28 = ((panda$collections$IdentityMap$Entry*) $tmp29);
    $l30:;
    bool $tmp32 = ((panda$core$Bit) { e28 != NULL }).value;
    if (!$tmp32) goto $l33;
    $tmp32 = ((panda$core$Bit) { e28->key != p_key }).value;
    $l33:;
    panda$core$Bit $tmp34 = { $tmp32 };
    if (!$tmp34.value) goto $l31;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e28));
            panda$core$Object* $tmp35 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e28->next));
            e28 = ((panda$collections$IdentityMap$Entry*) $tmp35);
        }
    }
    goto $l30;
    $l31:;
    if (((panda$core$Bit) { e28 != NULL }).value) {
    {
        return e28->value;
    }
    }
    else {
    {
        return NULL;
    }
    }
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index36;
    panda$collections$IdentityMap$Entry* e38;
    panda$core$Int64 $tmp37 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index36 = $tmp37;
    panda$core$Object* $tmp39 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index36.value]));
    e38 = ((panda$collections$IdentityMap$Entry*) $tmp39);
    $l40:;
    bool $tmp42 = ((panda$core$Bit) { e38 != NULL }).value;
    if (!$tmp42) goto $l43;
    $tmp42 = ((panda$core$Bit) { e38->key != p_key }).value;
    $l43:;
    panda$core$Bit $tmp44 = { $tmp42 };
    if (!$tmp44.value) goto $l41;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e38));
            panda$core$Object* $tmp45 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e38->next));
            e38 = ((panda$collections$IdentityMap$Entry*) $tmp45);
        }
    }
    goto $l40;
    $l41:;
    return ((panda$core$Bit) { e38 != NULL });
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index47;
    panda$collections$IdentityMap$Entry* e49;
    panda$collections$IdentityMap$Entry* old57;
    panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp46;
    panda$core$Int64 $tmp48 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index47 = $tmp48;
    panda$core$Object* $tmp50 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index47.value]));
    e49 = ((panda$collections$IdentityMap$Entry*) $tmp50);
    $l51:;
    bool $tmp53 = ((panda$core$Bit) { e49 != NULL }).value;
    if (!$tmp53) goto $l54;
    $tmp53 = ((panda$core$Bit) { e49->key != p_key }).value;
    $l54:;
    panda$core$Bit $tmp55 = { $tmp53 };
    if (!$tmp55.value) goto $l52;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e49));
            panda$core$Object* $tmp56 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e49->next));
            e49 = ((panda$collections$IdentityMap$Entry*) $tmp56);
        }
    }
    goto $l51;
    $l52:;
    if (((panda$core$Bit) { e49 == NULL }).value) {
    {
        panda$core$Object* $tmp58 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index47.value]));
        old57 = ((panda$collections$IdentityMap$Entry*) $tmp58);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e49));
            panda$collections$IdentityMap$Entry* $tmp59 = (panda$collections$IdentityMap$Entry*) malloc(40);
            $tmp59->$class = (panda$core$Class*) &panda$collections$IdentityMap$Entry$class;
            $tmp59->refCount.value = 1;
            panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp59, p_key, p_value);
            panda$core$Object* $tmp61 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp59));
            e49 = ((panda$collections$IdentityMap$Entry*) $tmp61);
        }
        {
            panda$core$Object* $tmp62 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) old57));
            e49->next = ((panda$collections$IdentityMap$Entry*) $tmp62);
        }
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index47.value]));
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e49));
            self->contents[index47.value] = e49;
        }
        panda$collections$IdentityMap$incrementCount(self);
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp63 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_value);
            e49->value = $tmp63;
        }
    }
    }
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index65;
    panda$collections$IdentityMap$Entry* e67;
    panda$collections$IdentityMap$Entry* next72;
    panda$collections$IdentityMap$Entry* next75;
    panda$core$Int64 $tmp64 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp64;
    panda$core$Int64 $tmp66 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index65 = $tmp66;
    panda$core$Object* $tmp68 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index65.value]));
    e67 = ((panda$collections$IdentityMap$Entry*) $tmp68);
    if (((panda$core$Bit) { e67 == NULL }).value) {
    {
        return;
    }
    }
    if (((panda$core$Bit) { e67->key == p_key }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index65.value]));
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e67->next));
            self->contents[index65.value] = e67->next;
        }
        panda$core$Int64 $tmp69 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp69;
        return;
    }
    }
    $l70:;
    while (true) {
    {
        panda$core$Object* $tmp73 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e67->next));
        next72 = ((panda$collections$IdentityMap$Entry*) $tmp73);
        if (((panda$core$Bit) { next72 == NULL }).value) {
        {
            return;
        }
        }
        if (((panda$core$Bit) { next72->key == p_key }).value) {
        {
            goto $l71;
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e67));
            panda$core$Object* $tmp74 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) next72));
            e67 = ((panda$collections$IdentityMap$Entry*) $tmp74);
        }
    }
    }
    $l71:;
    panda$core$Object* $tmp76 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e67->next));
    next75 = ((panda$collections$IdentityMap$Entry*) $tmp76);
    PANDA_ASSERT(((panda$core$Bit) { next75 != NULL }).value);
    {
        panda$core$Object* $tmp77 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) next75->next));
        e67->next = ((panda$collections$IdentityMap$Entry*) $tmp77);
    }
    panda$core$Int64 $tmp78 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp78;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp80;
    panda$core$Int64 $tmp79 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp79;
    self->_count = ((panda$core$Int64) { 0 });
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaAlloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp80, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp82 = $tmp80.min.value;
    panda$core$Int64 i81 = { $tmp82 };
    int64_t $tmp84 = $tmp80.max.value;
    bool $tmp85 = $tmp80.inclusive.value;
    if ($tmp85) goto $l92; else goto $l93;
    $l92:;
    if ($tmp82 <= $tmp84) goto $l86; else goto $l88;
    $l93:;
    if ($tmp82 < $tmp84) goto $l86; else goto $l88;
    $l86:;
    {
        if (((panda$core$Bit) { self->contents[i81.value] != NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[i81.value]));
                panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i81.value] = NULL;
            }
        }
        }
    }
    $l89:;
    int64_t $tmp95 = $tmp84 - i81.value;
    if ($tmp85) goto $l96; else goto $l97;
    $l96:;
    if ((uint64_t) $tmp95 >= 1) goto $l94; else goto $l88;
    $l97:;
    if ((uint64_t) $tmp95 > 1) goto $l94; else goto $l88;
    $l94:;
    i81.value += 1;
    goto $l86;
    $l88:;
    panda$core$Int64 $tmp100 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp101 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp100, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp101;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents104;
    panda$core$Int64 oldBucketCount105;
    panda$core$Range$LTpanda$core$Int64$GT $tmp107;
    panda$core$Range$LTpanda$core$Int64$GT $tmp128;
    panda$collections$IdentityMap$Entry* e142;
    panda$core$Int64 $tmp102 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp102;
    panda$core$Bit $tmp103 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp103.value) {
    {
        oldContents104 = self->contents;
        oldBucketCount105 = self->bucketCount;
        panda$core$Int64 $tmp106 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp106;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaAlloc(self->bucketCount.value * 40));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp107, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp109 = $tmp107.min.value;
        panda$core$Int64 i108 = { $tmp109 };
        int64_t $tmp111 = $tmp107.max.value;
        bool $tmp112 = $tmp107.inclusive.value;
        if ($tmp112) goto $l119; else goto $l120;
        $l119:;
        if ($tmp109 <= $tmp111) goto $l113; else goto $l115;
        $l120:;
        if ($tmp109 < $tmp111) goto $l113; else goto $l115;
        $l113:;
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[i108.value]));
                panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i108.value] = NULL;
            }
        }
        $l116:;
        int64_t $tmp122 = $tmp111 - i108.value;
        if ($tmp112) goto $l123; else goto $l124;
        $l123:;
        if ((uint64_t) $tmp122 >= 1) goto $l121; else goto $l115;
        $l124:;
        if ((uint64_t) $tmp122 > 1) goto $l121; else goto $l115;
        $l121:;
        i108.value += 1;
        goto $l113;
        $l115:;
        panda$core$Int64 $tmp127 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp127;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp128, ((panda$core$Int64) { 0 }), oldBucketCount105, ((panda$core$Bit) { false }));
        int64_t $tmp130 = $tmp128.min.value;
        panda$core$Int64 i129 = { $tmp130 };
        int64_t $tmp132 = $tmp128.max.value;
        bool $tmp133 = $tmp128.inclusive.value;
        if ($tmp133) goto $l140; else goto $l141;
        $l140:;
        if ($tmp130 <= $tmp132) goto $l134; else goto $l136;
        $l141:;
        if ($tmp130 < $tmp132) goto $l134; else goto $l136;
        $l134:;
        {
            panda$core$Object* $tmp143 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) oldContents104[i129.value]));
            e142 = ((panda$collections$IdentityMap$Entry*) $tmp143);
            $l144:;
            if (!((panda$core$Bit) { e142 != NULL }).value) goto $l145;
            {
                panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e142->key, e142->value);
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e142));
                    panda$core$Object* $tmp146 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e142->next));
                    e142 = ((panda$collections$IdentityMap$Entry*) $tmp146);
                }
            }
            goto $l144;
            $l145:;
        }
        $l137:;
        int64_t $tmp148 = $tmp132 - i129.value;
        if ($tmp133) goto $l149; else goto $l150;
        $l149:;
        if ((uint64_t) $tmp148 >= 1) goto $l147; else goto $l136;
        $l150:;
        if ((uint64_t) $tmp148 > 1) goto $l147; else goto $l136;
        $l147:;
        i129.value += 1;
        goto $l134;
        $l136:;
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    return self->_count;
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
    panda$core$MutableString* result153;
    panda$core$Char8 $tmp157;
    panda$core$String* separator158;
    panda$core$Range$LTpanda$core$Int64$GT $tmp161;
    panda$collections$IdentityMap$Entry* entry175;
    panda$core$Char8 $tmp180;
    panda$core$Char8 $tmp191;
    panda$core$MutableString* $tmp154 = (panda$core$MutableString*) malloc(48);
    $tmp154->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp154->refCount.value = 1;
    panda$core$MutableString$init($tmp154);
    panda$core$Object* $tmp156 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp154));
    result153 = ((panda$core$MutableString*) $tmp156);
    panda$core$Char8$init$panda$core$UInt8(&$tmp157, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result153, $tmp157);
    panda$core$Object* $tmp160 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s159));
    separator158 = ((panda$core$String*) $tmp160);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp161, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp163 = $tmp161.min.value;
    panda$core$Int64 i162 = { $tmp163 };
    int64_t $tmp165 = $tmp161.max.value;
    bool $tmp166 = $tmp161.inclusive.value;
    if ($tmp166) goto $l173; else goto $l174;
    $l173:;
    if ($tmp163 <= $tmp165) goto $l167; else goto $l169;
    $l174:;
    if ($tmp163 < $tmp165) goto $l167; else goto $l169;
    $l167:;
    {
        panda$core$Object* $tmp176 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[i162.value]));
        entry175 = ((panda$collections$IdentityMap$Entry*) $tmp176);
        $l177:;
        if (!((panda$core$Bit) { entry175 != NULL }).value) goto $l178;
        {
            panda$core$MutableString$append$panda$core$String(result153, separator158);
            if (((panda$core$Bit) { entry175->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result153, entry175->key);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result153, &$s179);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp180, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result153, $tmp180);
            if (((panda$core$Bit) { entry175->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result153, entry175->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result153, &$s181);
            }
            }
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) entry175));
                panda$core$Object* $tmp182 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) entry175->next));
                entry175 = ((panda$collections$IdentityMap$Entry*) $tmp182);
            }
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator158));
                panda$core$Object* $tmp184 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s183));
                separator158 = ((panda$core$String*) $tmp184);
            }
        }
        goto $l177;
        $l178:;
    }
    $l170:;
    int64_t $tmp186 = $tmp165 - i162.value;
    if ($tmp166) goto $l187; else goto $l188;
    $l187:;
    if ((uint64_t) $tmp186 >= 1) goto $l185; else goto $l169;
    $l188:;
    if ((uint64_t) $tmp186 > 1) goto $l185; else goto $l169;
    $l185:;
    i162.value += 1;
    goto $l167;
    $l169:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp191, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result153, $tmp191);
    panda$core$String* $tmp192 = panda$core$MutableString$finish$R$panda$core$String(result153);
    return $tmp192;
}

