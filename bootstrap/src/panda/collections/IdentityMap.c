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
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e29));
            e29 = e29->next;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e39));
            e39 = e39->next;
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
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e49));
            e49 = e49->next;
        }
    }
    goto $l50;
    $l51:;
    if (((panda$core$Bit) { e49 == NULL }).value) {
    {
        old55 = self->contents[index47.value];
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e49));
            panda$collections$IdentityMap$Entry* $tmp56 = (panda$collections$IdentityMap$Entry*) pandaZAlloc(40);
            $tmp56->$class = (panda$core$Class*) &panda$collections$IdentityMap$Entry$class;
            $tmp56->refCount.value = 1;
            panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp56, p_key, p_value);
            e49 = $tmp56;
        }
        {
            e49->next = old55;
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
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e49));
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index59;
    panda$collections$IdentityMap$Entry* e61;
    panda$collections$IdentityMap$Entry* next65;
    panda$collections$IdentityMap$Entry* next66;
    panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp58;
    panda$core$Int64 $tmp60 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index59 = $tmp60;
    e61 = self->contents[index59.value];
    if (((panda$core$Bit) { e61 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e61));
            return;
        }
    }
    }
    if (((panda$core$Bit) { e61->key == p_key }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index59.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e61->next));
            self->contents[index59.value] = e61->next;
        }
        panda$core$Int64 $tmp62 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp62;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e61));
            return;
        }
    }
    }
    $l63:;
    while (true) {
    {
        next65 = e61->next;
        if (((panda$core$Bit) { next65 == NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next65));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e61));
                    return;
                }
            }
        }
        }
        if (((panda$core$Bit) { next65->key == p_key }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next65));
                goto $l64;
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e61));
            e61 = next65;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next65));
    }
    }
    $l64:;
    next66 = e61->next;
    PANDA_ASSERT(((panda$core$Bit) { next66 != NULL }).value);
    {
        e61->next = next66->next;
    }
    panda$core$Int64 $tmp67 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp67;
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next66));
    }
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp69;
    panda$core$Int64 $tmp68 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp68;
    self->_count = ((panda$core$Int64) { 0 });
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp69, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp71 = $tmp69.min.value;
    panda$core$Int64 i70 = { $tmp71 };
    int64_t $tmp73 = $tmp69.max.value;
    bool $tmp74 = $tmp69.inclusive.value;
    if ($tmp74) goto $l81; else goto $l82;
    $l81:;
    if ($tmp71 <= $tmp73) goto $l75; else goto $l77;
    $l82:;
    if ($tmp71 < $tmp73) goto $l75; else goto $l77;
    $l75:;
    {
        if (((panda$core$Bit) { self->contents[i70.value] != NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i70.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i70.value] = NULL;
            }
        }
        }
    }
    $l78:;
    int64_t $tmp84 = $tmp73 - i70.value;
    if ($tmp74) goto $l85; else goto $l86;
    $l85:;
    if ((uint64_t) $tmp84 >= 1) goto $l83; else goto $l77;
    $l86:;
    if ((uint64_t) $tmp84 > 1) goto $l83; else goto $l77;
    $l83:;
    i70.value += 1;
    goto $l75;
    $l77:;
    panda$core$Int64 $tmp89 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp90 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp89, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp90;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents93;
    panda$core$Int64 oldBucketCount94;
    panda$core$Range$LTpanda$core$Int64$GT $tmp96;
    panda$core$Range$LTpanda$core$Int64$GT $tmp117;
    panda$collections$IdentityMap$Entry* e131;
    panda$core$Int64 $tmp91 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp91;
    panda$core$Bit $tmp92 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp92.value) {
    {
        oldContents93 = self->contents;
        oldBucketCount94 = self->bucketCount;
        panda$core$Int64 $tmp95 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp95;
        self->contents = ((panda$collections$IdentityMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp96, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp98 = $tmp96.min.value;
        panda$core$Int64 i97 = { $tmp98 };
        int64_t $tmp100 = $tmp96.max.value;
        bool $tmp101 = $tmp96.inclusive.value;
        if ($tmp101) goto $l108; else goto $l109;
        $l108:;
        if ($tmp98 <= $tmp100) goto $l102; else goto $l104;
        $l109:;
        if ($tmp98 < $tmp100) goto $l102; else goto $l104;
        $l102:;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i97.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i97.value] = NULL;
            }
        }
        $l105:;
        int64_t $tmp111 = $tmp100 - i97.value;
        if ($tmp101) goto $l112; else goto $l113;
        $l112:;
        if ((uint64_t) $tmp111 >= 1) goto $l110; else goto $l104;
        $l113:;
        if ((uint64_t) $tmp111 > 1) goto $l110; else goto $l104;
        $l110:;
        i97.value += 1;
        goto $l102;
        $l104:;
        panda$core$Int64 $tmp116 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp116;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp117, ((panda$core$Int64) { 0 }), oldBucketCount94, ((panda$core$Bit) { false }));
        int64_t $tmp119 = $tmp117.min.value;
        panda$core$Int64 i118 = { $tmp119 };
        int64_t $tmp121 = $tmp117.max.value;
        bool $tmp122 = $tmp117.inclusive.value;
        if ($tmp122) goto $l129; else goto $l130;
        $l129:;
        if ($tmp119 <= $tmp121) goto $l123; else goto $l125;
        $l130:;
        if ($tmp119 < $tmp121) goto $l123; else goto $l125;
        $l123:;
        {
            e131 = oldContents93[i118.value];
            $l132:;
            if (!((panda$core$Bit) { e131 != NULL }).value) goto $l133;
            {
                panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e131->key, e131->value);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e131));
                    e131 = e131->next;
                }
            }
            goto $l132;
            $l133:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e131));
        }
        $l126:;
        int64_t $tmp135 = $tmp121 - i118.value;
        if ($tmp122) goto $l136; else goto $l137;
        $l136:;
        if ((uint64_t) $tmp135 >= 1) goto $l134; else goto $l125;
        $l137:;
        if ((uint64_t) $tmp135 > 1) goto $l134; else goto $l125;
        $l134:;
        i118.value += 1;
        goto $l123;
        $l125:;
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
    panda$core$MutableString* result140;
    panda$core$Char8 $tmp143;
    panda$core$String* separator144;
    panda$core$Range$LTpanda$core$Int64$GT $tmp146;
    panda$collections$IdentityMap$Entry* entry160;
    panda$core$Char8 $tmp164;
    panda$core$Char8 $tmp173;
    panda$core$String* tmp4174;
    panda$core$MutableString* $tmp141 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp141->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp141->refCount.value = 1;
    panda$core$MutableString$init($tmp141);
    result140 = $tmp141;
    panda$core$Char8$init$panda$core$UInt8(&$tmp143, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result140, $tmp143);
    separator144 = &$s145;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp146, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp148 = $tmp146.min.value;
    panda$core$Int64 i147 = { $tmp148 };
    int64_t $tmp150 = $tmp146.max.value;
    bool $tmp151 = $tmp146.inclusive.value;
    if ($tmp151) goto $l158; else goto $l159;
    $l158:;
    if ($tmp148 <= $tmp150) goto $l152; else goto $l154;
    $l159:;
    if ($tmp148 < $tmp150) goto $l152; else goto $l154;
    $l152:;
    {
        entry160 = self->contents[i147.value];
        $l161:;
        if (!((panda$core$Bit) { entry160 != NULL }).value) goto $l162;
        {
            panda$core$MutableString$append$panda$core$String(result140, separator144);
            if (((panda$core$Bit) { entry160->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result140, entry160->key);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result140, &$s163);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp164, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result140, $tmp164);
            if (((panda$core$Bit) { entry160->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result140, entry160->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result140, &$s165);
            }
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry160));
                entry160 = entry160->next;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator144));
                separator144 = &$s166;
            }
        }
        goto $l161;
        $l162:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry160));
    }
    $l155:;
    int64_t $tmp168 = $tmp150 - i147.value;
    if ($tmp151) goto $l169; else goto $l170;
    $l169:;
    if ((uint64_t) $tmp168 >= 1) goto $l167; else goto $l154;
    $l170:;
    if ((uint64_t) $tmp168 > 1) goto $l167; else goto $l154;
    $l167:;
    i147.value += 1;
    goto $l152;
    $l154:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp173, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result140, $tmp173);
    {
        panda$core$String* $tmp175 = panda$core$MutableString$finish$R$panda$core$String(result140);
        tmp4174 = $tmp175;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator144));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result140));
        }
        return tmp4174;
    }
}
void panda$collections$IdentityMap$cleanup(panda$collections$IdentityMap* self) {
}

