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


static panda$core$String $s139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 218598044, NULL };
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
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
        self->contents[i3.value] = NULL;
    }
    $l11:;
    int64_t $tmp17 = $tmp6 - i3.value;
    if ($tmp7) goto $l18; else goto $l19;
    $l18:;
    if ($tmp17 >= 1) goto $l16; else goto $l10;
    $l19:;
    if ($tmp17 > 1) goto $l16; else goto $l10;
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
    e28 = self->contents[index26.value];
    $l29:;
    bool $tmp31 = ((panda$core$Bit) { e28 != NULL }).value;
    if (!$tmp31) goto $l32;
    $tmp31 = ((panda$core$Bit) { e28->key != p_key }).value;
    $l32:;
    panda$core$Bit $tmp33 = { $tmp31 };
    if (!$tmp33.value) goto $l30;
    {
        e28 = e28->next;
    }
    goto $l29;
    $l30:;
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
    panda$core$Int64 index34;
    panda$collections$IdentityMap$Entry* e36;
    panda$core$Int64 $tmp35 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index34 = $tmp35;
    e36 = self->contents[index34.value];
    $l37:;
    bool $tmp39 = ((panda$core$Bit) { e36 != NULL }).value;
    if (!$tmp39) goto $l40;
    $tmp39 = ((panda$core$Bit) { e36->key != p_key }).value;
    $l40:;
    panda$core$Bit $tmp41 = { $tmp39 };
    if (!$tmp41.value) goto $l38;
    {
        e36 = e36->next;
    }
    goto $l37;
    $l38:;
    return ((panda$core$Bit) { e36 != NULL });
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index43;
    panda$collections$IdentityMap$Entry* e45;
    panda$collections$IdentityMap$Entry* old51;
    panda$core$Int64 $tmp42 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp42;
    panda$core$Int64 $tmp44 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index43 = $tmp44;
    e45 = self->contents[index43.value];
    $l46:;
    bool $tmp48 = ((panda$core$Bit) { e45 != NULL }).value;
    if (!$tmp48) goto $l49;
    $tmp48 = ((panda$core$Bit) { e45->key != p_key }).value;
    $l49:;
    panda$core$Bit $tmp50 = { $tmp48 };
    if (!$tmp50.value) goto $l47;
    {
        e45 = e45->next;
    }
    goto $l46;
    $l47:;
    if (((panda$core$Bit) { e45 == NULL }).value) {
    {
        old51 = self->contents[index43.value];
        panda$collections$IdentityMap$Entry* $tmp52 = (panda$collections$IdentityMap$Entry*) malloc(40);
        $tmp52->$class = (panda$core$Class*) &panda$collections$IdentityMap$Entry$class;
        $tmp52->refCount.value = 1;
        panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp52, p_key, p_value);
        e45 = $tmp52;
        e45->next = old51;
        self->contents[index43.value] = e45;
        panda$collections$IdentityMap$incrementCount(self);
    }
    }
    else {
    {
        e45->value = p_value;
    }
    }
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index55;
    panda$collections$IdentityMap$Entry* e57;
    panda$collections$IdentityMap$Entry* next61;
    panda$collections$IdentityMap$Entry* next62;
    panda$core$Int64 $tmp54 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp54;
    panda$core$Int64 $tmp56 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index55 = $tmp56;
    e57 = self->contents[index55.value];
    if (((panda$core$Bit) { e57 == NULL }).value) {
    {
        return;
    }
    }
    if (((panda$core$Bit) { e57->key == p_key }).value) {
    {
        self->contents[index55.value] = e57->next;
        panda$core$Int64 $tmp58 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp58;
        return;
    }
    }
    $l59:;
    while (true) {
    {
        next61 = e57->next;
        if (((panda$core$Bit) { next61 == NULL }).value) {
        {
            return;
        }
        }
        if (((panda$core$Bit) { next61->key == p_key }).value) {
        {
            goto $l60;
        }
        }
        e57 = next61;
    }
    }
    $l60:;
    next62 = e57->next;
    PANDA_ASSERT(((panda$core$Bit) { next62 != NULL }).value);
    e57->next = next62->next;
    panda$core$Int64 $tmp63 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp63;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp65;
    panda$core$Int64 $tmp64 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp64;
    self->_count = ((panda$core$Int64) { 0 });
    free(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp65, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp67 = $tmp65.min.value;
    panda$core$Int64 i66 = { $tmp67 };
    int64_t $tmp69 = $tmp65.max.value;
    bool $tmp70 = $tmp65.inclusive.value;
    if ($tmp70) goto $l77; else goto $l78;
    $l77:;
    if ($tmp67 <= $tmp69) goto $l71; else goto $l73;
    $l78:;
    if ($tmp67 < $tmp69) goto $l71; else goto $l73;
    $l71:;
    {
        self->contents[i66.value] = NULL;
    }
    $l74:;
    int64_t $tmp80 = $tmp69 - i66.value;
    if ($tmp70) goto $l81; else goto $l82;
    $l81:;
    if ($tmp80 >= 1) goto $l79; else goto $l73;
    $l82:;
    if ($tmp80 > 1) goto $l79; else goto $l73;
    $l79:;
    i66.value += 1;
    goto $l71;
    $l73:;
    panda$core$Int64 $tmp85 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp86 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp85, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp86;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents89;
    panda$core$Int64 oldBucketCount90;
    panda$core$Range$LTpanda$core$Int64$GT $tmp92;
    panda$core$Range$LTpanda$core$Int64$GT $tmp113;
    panda$collections$IdentityMap$Entry* e127;
    panda$core$Int64 $tmp87 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp87;
    panda$core$Bit $tmp88 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp88.value) {
    {
        oldContents89 = self->contents;
        oldBucketCount90 = self->bucketCount;
        panda$core$Int64 $tmp91 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp91;
        self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp92, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp94 = $tmp92.min.value;
        panda$core$Int64 i93 = { $tmp94 };
        int64_t $tmp96 = $tmp92.max.value;
        bool $tmp97 = $tmp92.inclusive.value;
        if ($tmp97) goto $l104; else goto $l105;
        $l104:;
        if ($tmp94 <= $tmp96) goto $l98; else goto $l100;
        $l105:;
        if ($tmp94 < $tmp96) goto $l98; else goto $l100;
        $l98:;
        {
            self->contents[i93.value] = NULL;
        }
        $l101:;
        int64_t $tmp107 = $tmp96 - i93.value;
        if ($tmp97) goto $l108; else goto $l109;
        $l108:;
        if ($tmp107 >= 1) goto $l106; else goto $l100;
        $l109:;
        if ($tmp107 > 1) goto $l106; else goto $l100;
        $l106:;
        i93.value += 1;
        goto $l98;
        $l100:;
        panda$core$Int64 $tmp112 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp112;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp113, ((panda$core$Int64) { 0 }), oldBucketCount90, ((panda$core$Bit) { false }));
        int64_t $tmp115 = $tmp113.min.value;
        panda$core$Int64 i114 = { $tmp115 };
        int64_t $tmp117 = $tmp113.max.value;
        bool $tmp118 = $tmp113.inclusive.value;
        if ($tmp118) goto $l125; else goto $l126;
        $l125:;
        if ($tmp115 <= $tmp117) goto $l119; else goto $l121;
        $l126:;
        if ($tmp115 < $tmp117) goto $l119; else goto $l121;
        $l119:;
        {
            e127 = oldContents89[i114.value];
            $l128:;
            if (!((panda$core$Bit) { e127 != NULL }).value) goto $l129;
            {
                panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, e127->key, e127->value);
                e127 = e127->next;
            }
            goto $l128;
            $l129:;
        }
        $l122:;
        int64_t $tmp131 = $tmp117 - i114.value;
        if ($tmp118) goto $l132; else goto $l133;
        $l132:;
        if ($tmp131 >= 1) goto $l130; else goto $l121;
        $l133:;
        if ($tmp131 > 1) goto $l130; else goto $l121;
        $l130:;
        i114.value += 1;
        goto $l119;
        $l121:;
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
    panda$core$MutableString* result136;
    panda$core$String* separator140;
    panda$core$Range$LTpanda$core$Int64$GT $tmp142;
    panda$collections$IdentityMap$Entry* entry156;
    panda$core$MutableString* $tmp137 = (panda$core$MutableString*) malloc(48);
    $tmp137->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp137->refCount.value = 1;
    panda$core$MutableString$init($tmp137);
    result136 = $tmp137;
    panda$core$MutableString$append$panda$core$String(result136, &$s139);
    separator140 = &$s141;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp142, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp144 = $tmp142.min.value;
    panda$core$Int64 i143 = { $tmp144 };
    int64_t $tmp146 = $tmp142.max.value;
    bool $tmp147 = $tmp142.inclusive.value;
    if ($tmp147) goto $l154; else goto $l155;
    $l154:;
    if ($tmp144 <= $tmp146) goto $l148; else goto $l150;
    $l155:;
    if ($tmp144 < $tmp146) goto $l148; else goto $l150;
    $l148:;
    {
        entry156 = self->contents[i143.value];
        $l157:;
        if (!((panda$core$Bit) { entry156 != NULL }).value) goto $l158;
        {
            panda$core$MutableString$append$panda$core$String(result136, separator140);
            if (((panda$core$Bit) { entry156->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result136, entry156->key);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result136, &$s159);
            }
            }
            panda$core$MutableString$append$panda$core$String(result136, &$s160);
            if (((panda$core$Bit) { entry156->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result136, entry156->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result136, &$s161);
            }
            }
            entry156 = entry156->next;
            separator140 = &$s162;
        }
        goto $l157;
        $l158:;
    }
    $l151:;
    int64_t $tmp164 = $tmp146 - i143.value;
    if ($tmp147) goto $l165; else goto $l166;
    $l165:;
    if ($tmp164 >= 1) goto $l163; else goto $l150;
    $l166:;
    if ($tmp164 > 1) goto $l163; else goto $l150;
    $l163:;
    i143.value += 1;
    goto $l148;
    $l150:;
    panda$core$MutableString$append$panda$core$String(result136, &$s169);
    panda$core$String* $tmp170 = panda$core$MutableString$finish$R$panda$core$String(result136);
    return $tmp170;
}

