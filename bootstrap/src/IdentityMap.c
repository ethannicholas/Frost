#include "panda/collections/IdentityMap.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Map.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Equatable.h"
#include "panda/collections/MapWriter.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
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
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim(panda$collections$IdentityMap* self, panda$core$Object* p0, panda$core$Object* p1) {
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self, p0, p1);
}


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$IdentityMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$IdentityMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$Map, { panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$IdentityMap$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapView, { panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$IdentityMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, (ITable*) &panda$collections$IdentityMap$_panda$core$Equatable, { panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim} };

panda$collections$IdentityMap$class_type panda$collections$IdentityMap$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$IdentityMap$_panda$collections$MapWriter, { panda$collections$IdentityMap$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64, panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q$shim, panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit, panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V$shim, panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K, panda$collections$IdentityMap$clear, panda$collections$IdentityMap$incrementCount, panda$collections$IdentityMap$get_count$R$panda$core$Int64, panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit$shim, panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT$shim, panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT$shim} };

typedef void (*$fn165)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn181)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn206)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn207)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn209)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn211)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn212)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn214)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn228)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn229)(panda$core$MutableString*);
panda$collections$IdentityMap$Entry$class_type panda$collections$IdentityMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1 };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0 };
static panda$core$String $s208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4 };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1 };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4 };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2 };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1 };

void panda$collections$IdentityMap$init(panda$collections$IdentityMap* self) {
    panda$core$Range $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp2, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(self->bucketCount)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4 = ((panda$core$Int64$wrapper*) $tmp2.start)->value.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = ((panda$core$Int64$wrapper*) $tmp2.end)->value.value;
    int64_t $tmp7 = $tmp2.step.value;
    bool $tmp8 = $tmp2.inclusive.value;
    bool $tmp15 = $tmp7 > 0;
    if ($tmp15) goto $l13; else goto $l14;
    $l13:;
    if ($tmp8) goto $l16; else goto $l17;
    $l16:;
    if ($tmp4 <= $tmp6) goto $l9; else goto $l11;
    $l17:;
    if ($tmp4 < $tmp6) goto $l9; else goto $l11;
    $l14:;
    if ($tmp8) goto $l18; else goto $l19;
    $l18:;
    if ($tmp4 >= $tmp6) goto $l9; else goto $l11;
    $l19:;
    if ($tmp4 > $tmp6) goto $l9; else goto $l11;
    $l9:;
    {
        self->contents[i3.value] = NULL;
    }
    $l12:;
    if ($tmp15) goto $l22; else goto $l23;
    $l22:;
    int64_t $tmp24 = $tmp6 - i3.value;
    if ($tmp8) goto $l25; else goto $l26;
    $l25:;
    if ($tmp24 >= $tmp7) goto $l21; else goto $l11;
    $l26:;
    if ($tmp24 > $tmp7) goto $l21; else goto $l11;
    $l23:;
    int64_t $tmp28 = i3.value - $tmp6;
    if ($tmp8) goto $l29; else goto $l30;
    $l29:;
    if ($tmp28 >= -$tmp7) goto $l21; else goto $l11;
    $l30:;
    if ($tmp28 > -$tmp7) goto $l21; else goto $l11;
    $l21:;
    i3.value += $tmp7;
    goto $l9;
    $l11:;
    panda$core$Int64 $tmp32 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp33 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp32, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp33;
}
panda$core$Int64 panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 $tmp34;
    panda$core$Panda$addressOf$panda$core$Object$R$panda$core$Int64(&$tmp34, p_key);
    panda$core$Int64 $tmp35 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp34, self->bucketCount);
    return $tmp35;
}
panda$core$Object* panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index36;
    panda$collections$IdentityMap$Entry* e38;
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
        e38 = e38->next;
    }
    goto $l39;
    $l40:;
    if (((panda$core$Bit) { e38 != NULL }).value) {
    {
        return e38->value;
    }
    }
    else {
    {
        return NULL;
    }
    }
}
panda$core$Bit panda$collections$IdentityMap$contains$panda$collections$IdentityMap$K$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index44;
    panda$collections$IdentityMap$Entry* e46;
    panda$core$Int64 $tmp45 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index44 = $tmp45;
    e46 = self->contents[index44.value];
    $l47:;
    bool $tmp49 = ((panda$core$Bit) { e46 != NULL }).value;
    if (!$tmp49) goto $l50;
    $tmp49 = ((panda$core$Bit) { e46->key != p_key }).value;
    $l50:;
    panda$core$Bit $tmp51 = { $tmp49 };
    if (!$tmp51.value) goto $l48;
    {
        e46 = e46->next;
    }
    goto $l47;
    $l48:;
    return ((panda$core$Bit) { e46 != NULL });
}
void panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(panda$collections$IdentityMap* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index53;
    panda$collections$IdentityMap$Entry* e55;
    panda$collections$IdentityMap$Entry* old61;
    panda$core$Int64 $tmp52 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp52;
    panda$core$Int64 $tmp54 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index53 = $tmp54;
    e55 = self->contents[index53.value];
    $l56:;
    bool $tmp58 = ((panda$core$Bit) { e55 != NULL }).value;
    if (!$tmp58) goto $l59;
    $tmp58 = ((panda$core$Bit) { e55->key != p_key }).value;
    $l59:;
    panda$core$Bit $tmp60 = { $tmp58 };
    if (!$tmp60.value) goto $l57;
    {
        e55 = e55->next;
    }
    goto $l56;
    $l57:;
    if (((panda$core$Bit) { e55 == NULL }).value) {
    {
        old61 = self->contents[index53.value];
        panda$collections$IdentityMap$Entry* $tmp62 = (panda$collections$IdentityMap$Entry*) malloc(40);
        $tmp62->$class = (panda$core$Class*) &panda$collections$IdentityMap$Entry$class;
        $tmp62->refCount.value = 1;
        panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V($tmp62, p_key, p_value);
        e55 = $tmp62;
        e55->next = old61;
        self->contents[index53.value] = e55;
        panda$collections$IdentityMap$incrementCount(self);
    }
    }
    else {
    {
        e55->value = p_value;
    }
    }
}
void panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(panda$collections$IdentityMap* self, panda$core$Object* p_key) {
    panda$core$Int64 index65;
    panda$collections$IdentityMap$Entry* e67;
    panda$collections$IdentityMap$Entry* next71;
    panda$collections$IdentityMap$Entry* next72;
    panda$core$Int64 $tmp64 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp64;
    panda$core$Int64 $tmp66 = panda$collections$IdentityMap$indexFor$panda$collections$IdentityMap$K$R$panda$core$Int64(self, p_key);
    index65 = $tmp66;
    e67 = self->contents[index65.value];
    if (((panda$core$Bit) { e67 == NULL }).value) {
    {
        return;
    }
    }
    if (((panda$core$Bit) { e67->key == p_key }).value) {
    {
        self->contents[index65.value] = e67->next;
        panda$core$Int64 $tmp68 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp68;
        return;
    }
    }
    $l69:;
    while (true) {
    {
        next71 = e67->next;
        if (((panda$core$Bit) { next71 == NULL }).value) {
        {
            return;
        }
        }
        if (((panda$core$Bit) { next71->key == p_key }).value) {
        {
            goto $l70;
        }
        }
        e67 = next71;
    }
    }
    $l70:;
    next72 = e67->next;
    e67->next = next72->next;
    panda$core$Int64 $tmp73 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp73;
}
void panda$collections$IdentityMap$clear(panda$collections$IdentityMap* self) {
    panda$core$Range $tmp75;
    panda$core$Int64 $tmp74 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp74;
    self->_count = ((panda$core$Int64) { 0 });
    free(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp75, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(self->bucketCount)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp77 = ((panda$core$Int64$wrapper*) $tmp75.start)->value.value;
    panda$core$Int64 i76 = { $tmp77 };
    int64_t $tmp79 = ((panda$core$Int64$wrapper*) $tmp75.end)->value.value;
    int64_t $tmp80 = $tmp75.step.value;
    bool $tmp81 = $tmp75.inclusive.value;
    bool $tmp88 = $tmp80 > 0;
    if ($tmp88) goto $l86; else goto $l87;
    $l86:;
    if ($tmp81) goto $l89; else goto $l90;
    $l89:;
    if ($tmp77 <= $tmp79) goto $l82; else goto $l84;
    $l90:;
    if ($tmp77 < $tmp79) goto $l82; else goto $l84;
    $l87:;
    if ($tmp81) goto $l91; else goto $l92;
    $l91:;
    if ($tmp77 >= $tmp79) goto $l82; else goto $l84;
    $l92:;
    if ($tmp77 > $tmp79) goto $l82; else goto $l84;
    $l82:;
    {
        self->contents[i76.value] = NULL;
    }
    $l85:;
    if ($tmp88) goto $l95; else goto $l96;
    $l95:;
    int64_t $tmp97 = $tmp79 - i76.value;
    if ($tmp81) goto $l98; else goto $l99;
    $l98:;
    if ($tmp97 >= $tmp80) goto $l94; else goto $l84;
    $l99:;
    if ($tmp97 > $tmp80) goto $l94; else goto $l84;
    $l96:;
    int64_t $tmp101 = i76.value - $tmp79;
    if ($tmp81) goto $l102; else goto $l103;
    $l102:;
    if ($tmp101 >= -$tmp80) goto $l94; else goto $l84;
    $l103:;
    if ($tmp101 > -$tmp80) goto $l94; else goto $l84;
    $l94:;
    i76.value += $tmp80;
    goto $l82;
    $l84:;
    panda$core$Int64 $tmp105 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp106 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp105, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp106;
}
void panda$collections$IdentityMap$incrementCount(panda$collections$IdentityMap* self) {
    panda$collections$IdentityMap$Entry** oldContents109;
    panda$core$Int64 oldBucketCount110;
    panda$core$Range $tmp112;
    panda$core$Range $tmp143;
    panda$collections$IdentityMap$Entry* e162;
    panda$core$Int64 $tmp107 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp107;
    panda$core$Bit $tmp108 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp108.value) {
    {
        oldContents109 = self->contents;
        oldBucketCount110 = self->bucketCount;
        panda$core$Int64 $tmp111 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp111;
        self->contents = ((panda$collections$IdentityMap$Entry**) malloc(self->bucketCount.value * 40));
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp112, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(self->bucketCount)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp114 = ((panda$core$Int64$wrapper*) $tmp112.start)->value.value;
        panda$core$Int64 i113 = { $tmp114 };
        int64_t $tmp116 = ((panda$core$Int64$wrapper*) $tmp112.end)->value.value;
        int64_t $tmp117 = $tmp112.step.value;
        bool $tmp118 = $tmp112.inclusive.value;
        bool $tmp125 = $tmp117 > 0;
        if ($tmp125) goto $l123; else goto $l124;
        $l123:;
        if ($tmp118) goto $l126; else goto $l127;
        $l126:;
        if ($tmp114 <= $tmp116) goto $l119; else goto $l121;
        $l127:;
        if ($tmp114 < $tmp116) goto $l119; else goto $l121;
        $l124:;
        if ($tmp118) goto $l128; else goto $l129;
        $l128:;
        if ($tmp114 >= $tmp116) goto $l119; else goto $l121;
        $l129:;
        if ($tmp114 > $tmp116) goto $l119; else goto $l121;
        $l119:;
        {
            self->contents[i113.value] = NULL;
        }
        $l122:;
        if ($tmp125) goto $l132; else goto $l133;
        $l132:;
        int64_t $tmp134 = $tmp116 - i113.value;
        if ($tmp118) goto $l135; else goto $l136;
        $l135:;
        if ($tmp134 >= $tmp117) goto $l131; else goto $l121;
        $l136:;
        if ($tmp134 > $tmp117) goto $l131; else goto $l121;
        $l133:;
        int64_t $tmp138 = i113.value - $tmp116;
        if ($tmp118) goto $l139; else goto $l140;
        $l139:;
        if ($tmp138 >= -$tmp117) goto $l131; else goto $l121;
        $l140:;
        if ($tmp138 > -$tmp117) goto $l131; else goto $l121;
        $l131:;
        i113.value += $tmp117;
        goto $l119;
        $l121:;
        panda$core$Int64 $tmp142 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp142;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp143, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(oldBucketCount110)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp145 = ((panda$core$Int64$wrapper*) $tmp143.start)->value.value;
        panda$core$Int64 i144 = { $tmp145 };
        int64_t $tmp147 = ((panda$core$Int64$wrapper*) $tmp143.end)->value.value;
        int64_t $tmp148 = $tmp143.step.value;
        bool $tmp149 = $tmp143.inclusive.value;
        bool $tmp156 = $tmp148 > 0;
        if ($tmp156) goto $l154; else goto $l155;
        $l154:;
        if ($tmp149) goto $l157; else goto $l158;
        $l157:;
        if ($tmp145 <= $tmp147) goto $l150; else goto $l152;
        $l158:;
        if ($tmp145 < $tmp147) goto $l150; else goto $l152;
        $l155:;
        if ($tmp149) goto $l159; else goto $l160;
        $l159:;
        if ($tmp145 >= $tmp147) goto $l150; else goto $l152;
        $l160:;
        if ($tmp145 > $tmp147) goto $l150; else goto $l152;
        $l150:;
        {
            e162 = oldContents109[i144.value];
            $l163:;
            if (!((panda$core$Bit) { e162 != NULL }).value) goto $l164;
            {
                (($fn165) self->$class->vtable[5])(self, e162->key, e162->value);
                e162 = e162->next;
            }
            goto $l163;
            $l164:;
        }
        $l153:;
        if ($tmp156) goto $l167; else goto $l168;
        $l167:;
        int64_t $tmp169 = $tmp147 - i144.value;
        if ($tmp149) goto $l170; else goto $l171;
        $l170:;
        if ($tmp169 >= $tmp148) goto $l166; else goto $l152;
        $l171:;
        if ($tmp169 > $tmp148) goto $l166; else goto $l152;
        $l168:;
        int64_t $tmp173 = i144.value - $tmp147;
        if ($tmp149) goto $l174; else goto $l175;
        $l174:;
        if ($tmp173 >= -$tmp148) goto $l166; else goto $l152;
        $l175:;
        if ($tmp173 > -$tmp148) goto $l166; else goto $l152;
        $l166:;
        i144.value += $tmp148;
        goto $l150;
        $l152:;
    }
    }
}
panda$core$Int64 panda$collections$IdentityMap$get_count$R$panda$core$Int64(panda$collections$IdentityMap* self) {
    return self->_count;
}
panda$core$Bit panda$collections$IdentityMap$$EQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$collections$Map* p_other) {
}
panda$core$Bit panda$collections$IdentityMap$$NEQ$panda$collections$Map$LTpanda$collections$IdentityMap$K$Cpanda$collections$IdentityMap$V$GT$R$panda$core$Bit(panda$collections$IdentityMap* self, panda$collections$Map* p_other) {
}
panda$collections$Iterator* panda$collections$IdentityMap$keys$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$K$GT(panda$collections$IdentityMap* self) {
}
panda$collections$Iterator* panda$collections$IdentityMap$values$R$panda$collections$Iterator$LTpanda$collections$IdentityMap$V$GT(panda$collections$IdentityMap* self) {
}
panda$core$String* panda$collections$IdentityMap$convert$R$panda$core$String(panda$collections$IdentityMap* self) {
    panda$core$MutableString* result177;
    panda$core$String* separator182;
    panda$core$Range $tmp184;
    panda$collections$IdentityMap$Entry* entry203;
    panda$core$MutableString* $tmp178 = (panda$core$MutableString*) malloc(40);
    $tmp178->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp178->refCount.value = 1;
    panda$core$MutableString$init($tmp178);
    result177 = $tmp178;
    (($fn181) result177->$class->vtable[3])(result177, &$s180);
    separator182 = &$s183;
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp184, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(self->bucketCount)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp186 = ((panda$core$Int64$wrapper*) $tmp184.start)->value.value;
    panda$core$Int64 i185 = { $tmp186 };
    int64_t $tmp188 = ((panda$core$Int64$wrapper*) $tmp184.end)->value.value;
    int64_t $tmp189 = $tmp184.step.value;
    bool $tmp190 = $tmp184.inclusive.value;
    bool $tmp197 = $tmp189 > 0;
    if ($tmp197) goto $l195; else goto $l196;
    $l195:;
    if ($tmp190) goto $l198; else goto $l199;
    $l198:;
    if ($tmp186 <= $tmp188) goto $l191; else goto $l193;
    $l199:;
    if ($tmp186 < $tmp188) goto $l191; else goto $l193;
    $l196:;
    if ($tmp190) goto $l200; else goto $l201;
    $l200:;
    if ($tmp186 >= $tmp188) goto $l191; else goto $l193;
    $l201:;
    if ($tmp186 > $tmp188) goto $l191; else goto $l193;
    $l191:;
    {
        entry203 = self->contents[i185.value];
        $l204:;
        if (!((panda$core$Bit) { entry203 != NULL }).value) goto $l205;
        {
            (($fn206) result177->$class->vtable[3])(result177, separator182);
            if (((panda$core$Bit) { entry203->key != NULL }).value) {
            {
                (($fn207) result177->$class->vtable[5])(result177, entry203->key);
            }
            }
            else {
            {
                (($fn209) result177->$class->vtable[3])(result177, &$s208);
            }
            }
            (($fn211) result177->$class->vtable[3])(result177, &$s210);
            if (((panda$core$Bit) { entry203->value != NULL }).value) {
            {
                (($fn212) result177->$class->vtable[5])(result177, entry203->value);
            }
            }
            else {
            {
                (($fn214) result177->$class->vtable[3])(result177, &$s213);
            }
            }
            entry203 = entry203->next;
            separator182 = &$s215;
        }
        goto $l204;
        $l205:;
    }
    $l194:;
    if ($tmp197) goto $l217; else goto $l218;
    $l217:;
    int64_t $tmp219 = $tmp188 - i185.value;
    if ($tmp190) goto $l220; else goto $l221;
    $l220:;
    if ($tmp219 >= $tmp189) goto $l216; else goto $l193;
    $l221:;
    if ($tmp219 > $tmp189) goto $l216; else goto $l193;
    $l218:;
    int64_t $tmp223 = i185.value - $tmp188;
    if ($tmp190) goto $l224; else goto $l225;
    $l224:;
    if ($tmp223 >= -$tmp189) goto $l216; else goto $l193;
    $l225:;
    if ($tmp223 > -$tmp189) goto $l216; else goto $l193;
    $l216:;
    i185.value += $tmp189;
    goto $l191;
    $l193:;
    (($fn228) result177->$class->vtable[3])(result177, &$s227);
    panda$core$String* $tmp230 = (($fn229) result177->$class->vtable[0])(result177);
    return $tmp230;
}
void panda$collections$IdentityMap$Entry$init$panda$collections$IdentityMap$Entry$K$panda$collections$IdentityMap$Entry$V(panda$collections$IdentityMap$Entry* self, panda$core$Object* p_key, panda$core$Object* p_value) {
    self->key = p_key;
    self->value = p_value;
}

