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
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp2;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i4.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
            self->contents[i4.value] = NULL;
        }
    }
    $l12:;
    int64_t $tmp18 = $tmp7 - i4.value;
    if ($tmp8) goto $l19; else goto $l20;
    $l19:;
    if ((uint64_t) $tmp18 >= 1) goto $l17; else goto $l11;
    $l20:;
    if ((uint64_t) $tmp18 > 1) goto $l17; else goto $l11;
    $l17:;
    i4.value += 1;
    goto $l9;
    $l11:;
    panda$core$Int64 $tmp23 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp24 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp23, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp24;
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $tmp25;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp25, p_key);
    panda$core$Int64 $tmp26 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp25, self->bucketCount);
    return $tmp26;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index27;
    panda$collections$IdentityMap$Entry* e29;
    panda$core$Object* tmp135;
    panda$core$Object* tmp236;
    panda$core$Int64 $tmp28 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index27 = $tmp28;
    e29 = self->contents[index27.value];
    $l30:;
    bool $tmp32 = ((panda$core$Bit) { e29 != NULL }).value;
    if (!$tmp32) goto $l33;
    $tmp32 = ((panda$core$Bit) { e29->key != p_key }).value;
    $l33:;
    panda$core$Bit $tmp34 = { $tmp32 };
    if (!$tmp34.value) goto $l31;
    {
        {
            e29 = e29->next;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e29));
        }
    }
    goto $l30;
    $l31:;
    if (((panda$core$Bit) { e29 != NULL }).value) {
    {
        {
            tmp135 = e29->value;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e29));
            return tmp135;
        }
    }
    }
    else {
    {
        {
            tmp236 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e29));
            return tmp236;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e29));
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index37;
    panda$collections$IdentityMap$Entry* e39;
    panda$core$Bit tmp345;
    panda$core$Int64 $tmp38 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index37 = $tmp38;
    e39 = self->contents[index37.value];
    $l40:;
    bool $tmp42 = ((panda$core$Bit) { e39 != NULL }).value;
    if (!$tmp42) goto $l43;
    $tmp42 = ((panda$core$Bit) { e39->key != p_key }).value;
    $l43:;
    panda$core$Bit $tmp44 = { $tmp42 };
    if (!$tmp44.value) goto $l41;
    {
        {
            e39 = e39->next;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e39));
        }
    }
    goto $l40;
    $l41:;
    {
        tmp345 = ((panda$core$Bit) { e39 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e39));
        return tmp345;
    }
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index47;
    panda$collections$IdentityMap$Entry* e49;
    panda$collections$IdentityMap$Entry* old55;
    panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp46;
    panda$core$Int64 $tmp48 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index47 = $tmp48;
    e49 = self->contents[index47.value];
    $l50:;
    bool $tmp52 = ((panda$core$Bit) { e49 != NULL }).value;
    if (!$tmp52) goto $l53;
    $tmp52 = ((panda$core$Bit) { e49->key != p_key }).value;
    $l53:;
    panda$core$Bit $tmp54 = { $tmp52 };
    if (!$tmp54.value) goto $l51;
    {
        {
            e49 = e49->next;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e49));
        }
    }
    goto $l50;
    $l51:;
    if (((panda$core$Bit) { e49 == NULL }).value) {
    {
        old55 = self->contents[index47.value];
        {
            panda$collections$IdentityMap$Entry* $tmp56 = (panda$collections$IdentityMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$IdentityMap$Entry$class);
            panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp56, p_key, p_value);
            e49 = $tmp56;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e49));
        }
        {
            e49->next = old55;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e49->next));
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index47.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e49));
            self->contents[index47.value] = e49;
        }
        panda$collections$IdentityMap$incrementCount(self);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old55));
    }
    }
    else {
    {
        {
            e49->value = p_value;
            panda$core$Panda$unref$panda$core$Object(e49->value);
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e49));
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
            e60 = next64;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e60));
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next64));
    }
    }
    $l63:;
    next65 = e60->next;
    PANDA_ASSERT(((panda$core$Bit) { next65 != NULL }).value);
    {
        e60->next = next65->next;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e60->next));
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
                    e130 = e130->next;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e130));
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
    panda$core$Char8 $tmp141;
    panda$core$String* separator142;
    panda$core$Range$LTpanda$core$Int64$GT $tmp144;
    panda$collections$IdentityMap$Entry* entry158;
    panda$core$Char8 $tmp162;
    panda$core$Char8 $tmp171;
    panda$core$String* tmp4172;
    panda$core$MutableString* $tmp140 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp140);
    result139 = $tmp140;
    panda$core$Char8$init$panda$core$UInt8(&$tmp141, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result139, $tmp141);
    separator142 = &$s143;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp144, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp146 = $tmp144.min.value;
    panda$core$Int64 i145 = { $tmp146 };
    int64_t $tmp148 = $tmp144.max.value;
    bool $tmp149 = $tmp144.inclusive.value;
    if ($tmp149) goto $l156; else goto $l157;
    $l156:;
    if ($tmp146 <= $tmp148) goto $l150; else goto $l152;
    $l157:;
    if ($tmp146 < $tmp148) goto $l150; else goto $l152;
    $l150:;
    {
        entry158 = self->contents[i145.value];
        $l159:;
        if (!((panda$core$Bit) { entry158 != NULL }).value) goto $l160;
        {
            panda$core$MutableString$append$panda$core$String(result139, separator142);
            if (((panda$core$Bit) { entry158->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result139, entry158->key);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result139, &$s161);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp162, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result139, $tmp162);
            if (((panda$core$Bit) { entry158->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result139, entry158->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result139, &$s163);
            }
            }
            {
                entry158 = entry158->next;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry158));
            }
            {
                separator142 = &$s164;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator142));
            }
        }
        goto $l159;
        $l160:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry158));
    }
    $l153:;
    int64_t $tmp166 = $tmp148 - i145.value;
    if ($tmp149) goto $l167; else goto $l168;
    $l167:;
    if ((uint64_t) $tmp166 >= 1) goto $l165; else goto $l152;
    $l168:;
    if ((uint64_t) $tmp166 > 1) goto $l165; else goto $l152;
    $l165:;
    i145.value += 1;
    goto $l150;
    $l152:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp171, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result139, $tmp171);
    {
        panda$core$String* $tmp173 = panda$core$MutableString$finish$R$panda$core$String(result139);
        tmp4172 = $tmp173;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator142));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result139));
        }
        return tmp4172;
    }
}
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

