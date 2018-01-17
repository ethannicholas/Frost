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

panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$core$Equatable, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$collections$IdentityMap$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };


static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i3.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
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
    panda$core$Object* tmp134;
    panda$core$Object* tmp235;
    panda$core$Int64 $tmp27 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index26 = $tmp27;
    e28 = self->contents[index26.value];
    $l29:;
    bool $tmp31 = ((panda$core$Bit) { e28 != NULL }).value;
    if (!$tmp31) goto $l32;
    $tmp31 = ((panda$core$Bit) { e28->key != p_key }).value;
    $l32:;
    panda$core$Bit $tmp33 = { $tmp31 };
    if (!$tmp33.value) goto $l30;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e28));
            e28 = e28->next;
        }
    }
    goto $l29;
    $l30:;
    if (((panda$core$Bit) { e28 != NULL }).value) {
    {
        {
            tmp134 = e28->value;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e28));
            return tmp134;
        }
    }
    }
    else {
    {
        {
            tmp235 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e28));
            return tmp235;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e28));
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index36;
    panda$collections$IdentityMap$Entry* e38;
    panda$core$Bit tmp344;
    panda$core$Int64 $tmp37 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index36 = $tmp37;
    e38 = self->contents[index36.value];
    $l39:;
    bool $tmp41 = ((panda$core$Bit) { e38 != NULL }).value;
    if (!$tmp41) goto $l42;
    $tmp41 = ((panda$core$Bit) { e38->key != p_key }).value;
    $l42:;
    panda$core$Bit $tmp43 = { $tmp41 };
    if (!$tmp43.value) goto $l40;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e38));
            e38 = e38->next;
        }
    }
    goto $l39;
    $l40:;
    {
        tmp344 = ((panda$core$Bit) { e38 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e38));
        return tmp344;
    }
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index46;
    panda$collections$IdentityMap$Entry* e48;
    panda$collections$IdentityMap$Entry* old54;
    panda$core$Int64 $tmp45 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp45;
    panda$core$Int64 $tmp47 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index46 = $tmp47;
    e48 = self->contents[index46.value];
    $l49:;
    bool $tmp51 = ((panda$core$Bit) { e48 != NULL }).value;
    if (!$tmp51) goto $l52;
    $tmp51 = ((panda$core$Bit) { e48->key != p_key }).value;
    $l52:;
    panda$core$Bit $tmp53 = { $tmp51 };
    if (!$tmp53.value) goto $l50;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e48));
            e48 = e48->next;
        }
    }
    goto $l49;
    $l50:;
    if (((panda$core$Bit) { e48 == NULL }).value) {
    {
        old54 = self->contents[index46.value];
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e48));
            panda$collections$IdentityMap$Entry* $tmp55 = (panda$collections$IdentityMap$Entry*) pandaZAlloc(40);
            $tmp55->$class = (panda$core$Class*) &panda$collections$IdentityMap$Entry$class;
            $tmp55->refCount.value = 1;
            panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp55, p_key, p_value);
            e48 = $tmp55;
        }
        {
            e48->next = old54;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index46.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e48));
            self->contents[index46.value] = e48;
        }
        panda$collections$IdentityMap$incrementCount(self);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old54));
    }
    }
    else {
    {
        {
            e48->value = p_value;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e48));
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index58;
    panda$collections$IdentityMap$Entry* e60;
    panda$collections$IdentityMap$Entry* next64;
    panda$collections$IdentityMap$Entry* next65;
    panda$core$Int64 $tmp57 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp57;
    panda$core$Int64 $tmp59 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index58 = $tmp59;
    e60 = self->contents[index58.value];
    if (((panda$core$Bit) { e60 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e60));
            return;
        }
    }
    }
    if (((panda$core$Bit) { e60->key == p_key }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index58.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e60->next));
            self->contents[index58.value] = e60->next;
        }
        panda$core$Int64 $tmp61 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp61;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e60));
            return;
        }
    }
    }
    $l62:;
    while (true) {
    {
        next64 = e60->next;
        if (((panda$core$Bit) { next64 == NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next64));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e60));
                    return;
                }
            }
        }
        }
        if (((panda$core$Bit) { next64->key == p_key }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next64));
                goto $l63;
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e60));
            e60 = next64;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next64));
    }
    }
    $l63:;
    next65 = e60->next;
    PANDA_ASSERT(((panda$core$Bit) { next65 != NULL }).value);
    {
        e60->next = next65->next;
    }
    panda$core$Int64 $tmp66 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp66;
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e60));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next65));
    }
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp68;
    panda$core$Int64 $tmp67 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp67;
    self->_count = ((panda$core$Int64) { 0 });
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp68, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp70 = $tmp68.min.value;
    panda$core$Int64 i69 = { $tmp70 };
    int64_t $tmp72 = $tmp68.max.value;
    bool $tmp73 = $tmp68.inclusive.value;
    if ($tmp73) goto $l80; else goto $l81;
    $l80:;
    if ($tmp70 <= $tmp72) goto $l74; else goto $l76;
    $l81:;
    if ($tmp70 < $tmp72) goto $l74; else goto $l76;
    $l74:;
    {
        if (((panda$core$Bit) { self->contents[i69.value] != NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i69.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i69.value] = NULL;
            }
        }
        }
    }
    $l77:;
    int64_t $tmp83 = $tmp72 - i69.value;
    if ($tmp73) goto $l84; else goto $l85;
    $l84:;
    if ((uint64_t) $tmp83 >= 1) goto $l82; else goto $l76;
    $l85:;
    if ((uint64_t) $tmp83 > 1) goto $l82; else goto $l76;
    $l82:;
    i69.value += 1;
    goto $l74;
    $l76:;
    panda$core$Int64 $tmp88 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp89 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp88, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp89;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents92;
    panda$core$Int64 oldBucketCount93;
    panda$core$Range$LTpanda$core$Int64$GT $tmp95;
    panda$core$Range$LTpanda$core$Int64$GT $tmp116;
    panda$collections$IdentityMap$Entry* e130;
    panda$core$Int64 $tmp90 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp90;
    panda$core$Bit $tmp91 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp91.value) {
    {
        oldContents92 = self->contents;
        oldBucketCount93 = self->bucketCount;
        panda$core$Int64 $tmp94 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp94;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
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
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i96.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i96.value] = NULL;
            }
        }
        $l104:;
        int64_t $tmp110 = $tmp99 - i96.value;
        if ($tmp100) goto $l111; else goto $l112;
        $l111:;
        if ((uint64_t) $tmp110 >= 1) goto $l109; else goto $l103;
        $l112:;
        if ((uint64_t) $tmp110 > 1) goto $l109; else goto $l103;
        $l109:;
        i96.value += 1;
        goto $l101;
        $l103:;
        panda$core$Int64 $tmp115 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp115;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp116, ((panda$core$Int64) { 0 }), oldBucketCount93, ((panda$core$Bit) { false }));
        int64_t $tmp118 = $tmp116.min.value;
        panda$core$Int64 i117 = { $tmp118 };
        int64_t $tmp120 = $tmp116.max.value;
        bool $tmp121 = $tmp116.inclusive.value;
        if ($tmp121) goto $l128; else goto $l129;
        $l128:;
        if ($tmp118 <= $tmp120) goto $l122; else goto $l124;
        $l129:;
        if ($tmp118 < $tmp120) goto $l122; else goto $l124;
        $l122:;
        {
            e130 = oldContents92[i117.value];
            $l131:;
            if (!((panda$core$Bit) { e130 != NULL }).value) goto $l132;
            {
                panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e130->key, e130->value);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e130));
                    e130 = e130->next;
                }
            }
            goto $l131;
            $l132:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e130));
        }
        $l125:;
        int64_t $tmp134 = $tmp120 - i117.value;
        if ($tmp121) goto $l135; else goto $l136;
        $l135:;
        if ((uint64_t) $tmp134 >= 1) goto $l133; else goto $l124;
        $l136:;
        if ((uint64_t) $tmp134 > 1) goto $l133; else goto $l124;
        $l133:;
        i117.value += 1;
        goto $l122;
        $l124:;
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
    panda$core$MutableString* result139;
    panda$core$Char8 $tmp142;
    panda$core$String* separator143;
    panda$core$Range$LTpanda$core$Int64$GT $tmp145;
    panda$collections$IdentityMap$Entry* entry159;
    panda$core$Char8 $tmp163;
    panda$core$Char8 $tmp172;
    panda$core$String* tmp4173;
    panda$core$MutableString* $tmp140 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp140->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp140->refCount.value = 1;
    panda$core$MutableString$init($tmp140);
    result139 = $tmp140;
    panda$core$Char8$init$panda$core$UInt8(&$tmp142, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result139, $tmp142);
    separator143 = &$s144;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp145, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp147 = $tmp145.min.value;
    panda$core$Int64 i146 = { $tmp147 };
    int64_t $tmp149 = $tmp145.max.value;
    bool $tmp150 = $tmp145.inclusive.value;
    if ($tmp150) goto $l157; else goto $l158;
    $l157:;
    if ($tmp147 <= $tmp149) goto $l151; else goto $l153;
    $l158:;
    if ($tmp147 < $tmp149) goto $l151; else goto $l153;
    $l151:;
    {
        entry159 = self->contents[i146.value];
        $l160:;
        if (!((panda$core$Bit) { entry159 != NULL }).value) goto $l161;
        {
            panda$core$MutableString$append$panda$core$String(result139, separator143);
            if (((panda$core$Bit) { entry159->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result139, entry159->key);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result139, &$s162);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp163, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result139, $tmp163);
            if (((panda$core$Bit) { entry159->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result139, entry159->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result139, &$s164);
            }
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry159));
                entry159 = entry159->next;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator143));
                separator143 = &$s165;
            }
        }
        goto $l160;
        $l161:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry159));
    }
    $l154:;
    int64_t $tmp167 = $tmp149 - i146.value;
    if ($tmp150) goto $l168; else goto $l169;
    $l168:;
    if ((uint64_t) $tmp167 >= 1) goto $l166; else goto $l153;
    $l169:;
    if ((uint64_t) $tmp167 > 1) goto $l166; else goto $l153;
    $l166:;
    i146.value += 1;
    goto $l151;
    $l153:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp172, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result139, $tmp172);
    {
        panda$core$String* $tmp174 = panda$core$MutableString$finish$R$panda$core$String(result139);
        tmp4173 = $tmp174;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result139));
        }
        return tmp4173;
    }
}
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* self) {
}

