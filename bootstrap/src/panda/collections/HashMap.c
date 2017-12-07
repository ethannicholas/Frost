#include "panda/collections/HashMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/MapWriter.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Map.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/Key.h"
#include "panda/collections/HashMap/Entry.h"
#include "panda/collections/HashMap/KeyIterator.h"
#include "panda/collections/HashMap/ValueIterator.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim(panda$collections$HashMap* self, panda$core$Object* p0, panda$core$Object* p1) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, ((panda$collections$Key*) p0), p1);
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim(panda$collections$HashMap* self, panda$core$Object* p0) {
    panda$core$Object* result = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self, ((panda$collections$Key*) p0));
    return result;
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim(panda$collections$HashMap* self) {
    panda$collections$Iterator* result = panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(self);
    return result;
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim(panda$collections$HashMap* self) {
    panda$collections$Iterator* result = panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(self);
    return result;
}
panda$core$Bit panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim(panda$collections$HashMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(self, ((panda$collections$Map*) p0));
    return result;
}
panda$core$Bit panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim(panda$collections$HashMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(self, ((panda$collections$Map*) p0));
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$HashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapWriter, { panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapView, { panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$HashMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$HashMap$_panda$core$Equatable, { } };

panda$collections$HashMap$class_type panda$collections$HashMap$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$_panda$collections$Map, { panda$collections$HashMap$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit, panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim, panda$collections$HashMap$remove$panda$collections$HashMap$K, panda$collections$HashMap$clear, panda$collections$HashMap$incrementCount, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim, panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

typedef panda$collections$Iterator* (*$fn37)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn49)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn53)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn58)(panda$collections$Key*);
typedef panda$core$Bit (*$fn79)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn91)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn104)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn116)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn124)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4 = $tmp2.start.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = $tmp2.end.value;
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
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map) {
    panda$collections$Iterator* k$Iter34;
    panda$collections$Key* k46;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$init(self);
    {
        ITable* $tmp35 = p_map->$class->itable;
        while ($tmp35->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp35 = $tmp35->next;
        }
        $fn37 $tmp36 = $tmp35->methods[2];
        panda$collections$Iterator* $tmp38 = $tmp36(p_map);
        k$Iter34 = $tmp38;
        $l39:;
        ITable* $tmp41 = k$Iter34->$class->itable;
        while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp41 = $tmp41->next;
        }
        $fn43 $tmp42 = $tmp41->methods[0];
        panda$core$Bit $tmp44 = $tmp42(k$Iter34);
        panda$core$Bit $tmp45 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp44);
        if (!$tmp45.value) goto $l40;
        {
            ITable* $tmp47 = k$Iter34->$class->itable;
            while ($tmp47->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp47 = $tmp47->next;
            }
            $fn49 $tmp48 = $tmp47->methods[1];
            panda$core$Object* $tmp50 = $tmp48(k$Iter34);
            k46 = ((panda$collections$Key*) $tmp50);
            ITable* $tmp51 = p_map->$class->itable;
            while ($tmp51->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp51 = $tmp51->next;
            }
            $fn53 $tmp52 = $tmp51->methods[1];
            panda$core$Object* $tmp54 = $tmp52(p_map, ((panda$core$Object*) k46));
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k46, $tmp54);
        }
        goto $l39;
        $l40:;
    }
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h55;
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h55 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp56 = p_key->$class->itable;
        while ($tmp56->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp56 = $tmp56->next;
        }
        $fn58 $tmp57 = $tmp56->methods[0];
        panda$core$Int64 $tmp59 = $tmp57(p_key);
        h55 = $tmp59;
    }
    }
    panda$core$Int64 $tmp60 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h55, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp61 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h55, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp62 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp60, $tmp61);
    panda$core$Int64 $tmp63 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h55, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp64 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp62, $tmp63);
    panda$core$Int64 $tmp65 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h55, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp66 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp64, $tmp65);
    panda$core$Int64 $tmp67 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h55, $tmp66);
    h55 = $tmp67;
    panda$core$Int64 $tmp68 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp69 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h55, $tmp68);
    h55 = $tmp69;
    return h55;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index70;
    panda$collections$HashMap$Entry* e72;
    panda$core$Int64 $tmp71 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index70 = $tmp71;
    e72 = self->contents[index70.value];
    $l73:;
    bool $tmp75 = ((panda$core$Bit) { e72 != NULL }).value;
    if (!$tmp75) goto $l76;
    ITable* $tmp77 = ((panda$core$Equatable*) e72->key)->$class->itable;
    while ($tmp77->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp77 = $tmp77->next;
    }
    $fn79 $tmp78 = $tmp77->methods[1];
    panda$core$Bit $tmp80 = $tmp78(((panda$core$Equatable*) e72->key), ((panda$core$Object*) p_key));
    $tmp75 = $tmp80.value;
    $l76:;
    panda$core$Bit $tmp81 = { $tmp75 };
    if (!$tmp81.value) goto $l74;
    {
        e72 = e72->next;
    }
    goto $l73;
    $l74:;
    if (((panda$core$Bit) { e72 != NULL }).value) {
    {
        return e72->value;
    }
    }
    else {
    {
        return NULL;
    }
    }
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index82;
    panda$collections$HashMap$Entry* e84;
    panda$core$Int64 $tmp83 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index82 = $tmp83;
    e84 = self->contents[index82.value];
    $l85:;
    bool $tmp87 = ((panda$core$Bit) { e84 != NULL }).value;
    if (!$tmp87) goto $l88;
    ITable* $tmp89 = ((panda$core$Equatable*) e84->key)->$class->itable;
    while ($tmp89->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp89 = $tmp89->next;
    }
    $fn91 $tmp90 = $tmp89->methods[1];
    panda$core$Bit $tmp92 = $tmp90(((panda$core$Equatable*) e84->key), ((panda$core$Object*) p_key));
    $tmp87 = $tmp92.value;
    $l88:;
    panda$core$Bit $tmp93 = { $tmp87 };
    if (!$tmp93.value) goto $l86;
    {
        e84 = e84->next;
    }
    goto $l85;
    $l86:;
    return ((panda$core$Bit) { e84 != NULL });
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index95;
    panda$collections$HashMap$Entry* e97;
    panda$collections$HashMap$Entry* old107;
    panda$core$Int64 $tmp94 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp94;
    panda$core$Int64 $tmp96 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index95 = $tmp96;
    e97 = self->contents[index95.value];
    $l98:;
    bool $tmp100 = ((panda$core$Bit) { e97 != NULL }).value;
    if (!$tmp100) goto $l101;
    ITable* $tmp102 = ((panda$core$Equatable*) e97->key)->$class->itable;
    while ($tmp102->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp102 = $tmp102->next;
    }
    $fn104 $tmp103 = $tmp102->methods[1];
    panda$core$Bit $tmp105 = $tmp103(((panda$core$Equatable*) e97->key), ((panda$core$Object*) p_key));
    $tmp100 = $tmp105.value;
    $l101:;
    panda$core$Bit $tmp106 = { $tmp100 };
    if (!$tmp106.value) goto $l99;
    {
        e97 = e97->next;
    }
    goto $l98;
    $l99:;
    if (((panda$core$Bit) { e97 == NULL }).value) {
    {
        old107 = self->contents[index95.value];
        panda$collections$HashMap$Entry* $tmp108 = (panda$collections$HashMap$Entry*) malloc(40);
        $tmp108->$class = (panda$core$Class*) &panda$collections$HashMap$Entry$class;
        $tmp108->refCount.value = 1;
        panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp108, p_key, p_value);
        e97 = $tmp108;
        e97->next = old107;
        self->contents[index95.value] = e97;
        panda$collections$HashMap$incrementCount(self);
    }
    }
    else {
    {
        e97->value = p_value;
    }
    }
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index111;
    panda$collections$HashMap$Entry* e113;
    panda$collections$HashMap$Entry* next121;
    panda$collections$HashMap$Entry* next126;
    panda$core$Int64 $tmp110 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp110;
    panda$core$Int64 $tmp112 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index111 = $tmp112;
    e113 = self->contents[index111.value];
    if (((panda$core$Bit) { e113 == NULL }).value) {
    {
        return;
    }
    }
    ITable* $tmp114 = ((panda$core$Equatable*) e113->key)->$class->itable;
    while ($tmp114->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp114 = $tmp114->next;
    }
    $fn116 $tmp115 = $tmp114->methods[0];
    panda$core$Bit $tmp117 = $tmp115(((panda$core$Equatable*) e113->key), ((panda$core$Object*) p_key));
    if ($tmp117.value) {
    {
        self->contents[index111.value] = e113->next;
        panda$core$Int64 $tmp118 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp118;
        return;
    }
    }
    $l119:;
    while (true) {
    {
        next121 = e113->next;
        if (((panda$core$Bit) { next121 == NULL }).value) {
        {
            return;
        }
        }
        ITable* $tmp122 = ((panda$core$Equatable*) next121->key)->$class->itable;
        while ($tmp122->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp122 = $tmp122->next;
        }
        $fn124 $tmp123 = $tmp122->methods[0];
        panda$core$Bit $tmp125 = $tmp123(((panda$core$Equatable*) next121->key), ((panda$core$Object*) p_key));
        if ($tmp125.value) {
        {
            goto $l120;
        }
        }
        e113 = next121;
    }
    }
    $l120:;
    next126 = e113->next;
    PANDA_ASSERT(((panda$core$Bit) { next126 != NULL }).value);
    e113->next = next126->next;
    panda$core$Int64 $tmp127 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp127;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp129;
    panda$core$Int64 $tmp128 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp128;
    self->_count = ((panda$core$Int64) { 0 });
    free(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp129, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp131 = $tmp129.start.value;
    panda$core$Int64 i130 = { $tmp131 };
    int64_t $tmp133 = $tmp129.end.value;
    int64_t $tmp134 = $tmp129.step.value;
    bool $tmp135 = $tmp129.inclusive.value;
    bool $tmp142 = $tmp134 > 0;
    if ($tmp142) goto $l140; else goto $l141;
    $l140:;
    if ($tmp135) goto $l143; else goto $l144;
    $l143:;
    if ($tmp131 <= $tmp133) goto $l136; else goto $l138;
    $l144:;
    if ($tmp131 < $tmp133) goto $l136; else goto $l138;
    $l141:;
    if ($tmp135) goto $l145; else goto $l146;
    $l145:;
    if ($tmp131 >= $tmp133) goto $l136; else goto $l138;
    $l146:;
    if ($tmp131 > $tmp133) goto $l136; else goto $l138;
    $l136:;
    {
        self->contents[i130.value] = NULL;
    }
    $l139:;
    if ($tmp142) goto $l149; else goto $l150;
    $l149:;
    int64_t $tmp151 = $tmp133 - i130.value;
    if ($tmp135) goto $l152; else goto $l153;
    $l152:;
    if ($tmp151 >= $tmp134) goto $l148; else goto $l138;
    $l153:;
    if ($tmp151 > $tmp134) goto $l148; else goto $l138;
    $l150:;
    int64_t $tmp155 = i130.value - $tmp133;
    if ($tmp135) goto $l156; else goto $l157;
    $l156:;
    if ($tmp155 >= -$tmp134) goto $l148; else goto $l138;
    $l157:;
    if ($tmp155 > -$tmp134) goto $l148; else goto $l138;
    $l148:;
    i130.value += $tmp134;
    goto $l136;
    $l138:;
    panda$core$Int64 $tmp159 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp160 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp159, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp160;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents163;
    panda$core$Int64 oldBucketCount164;
    panda$core$Range$LTpanda$core$Int64$GT $tmp166;
    panda$core$Range$LTpanda$core$Int64$GT $tmp197;
    panda$collections$HashMap$Entry* e216;
    panda$core$Int64 $tmp161 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp161;
    panda$core$Bit $tmp162 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp162.value) {
    {
        oldContents163 = self->contents;
        oldBucketCount164 = self->bucketCount;
        panda$core$Int64 $tmp165 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp165;
        self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp166, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp168 = $tmp166.start.value;
        panda$core$Int64 i167 = { $tmp168 };
        int64_t $tmp170 = $tmp166.end.value;
        int64_t $tmp171 = $tmp166.step.value;
        bool $tmp172 = $tmp166.inclusive.value;
        bool $tmp179 = $tmp171 > 0;
        if ($tmp179) goto $l177; else goto $l178;
        $l177:;
        if ($tmp172) goto $l180; else goto $l181;
        $l180:;
        if ($tmp168 <= $tmp170) goto $l173; else goto $l175;
        $l181:;
        if ($tmp168 < $tmp170) goto $l173; else goto $l175;
        $l178:;
        if ($tmp172) goto $l182; else goto $l183;
        $l182:;
        if ($tmp168 >= $tmp170) goto $l173; else goto $l175;
        $l183:;
        if ($tmp168 > $tmp170) goto $l173; else goto $l175;
        $l173:;
        {
            self->contents[i167.value] = NULL;
        }
        $l176:;
        if ($tmp179) goto $l186; else goto $l187;
        $l186:;
        int64_t $tmp188 = $tmp170 - i167.value;
        if ($tmp172) goto $l189; else goto $l190;
        $l189:;
        if ($tmp188 >= $tmp171) goto $l185; else goto $l175;
        $l190:;
        if ($tmp188 > $tmp171) goto $l185; else goto $l175;
        $l187:;
        int64_t $tmp192 = i167.value - $tmp170;
        if ($tmp172) goto $l193; else goto $l194;
        $l193:;
        if ($tmp192 >= -$tmp171) goto $l185; else goto $l175;
        $l194:;
        if ($tmp192 > -$tmp171) goto $l185; else goto $l175;
        $l185:;
        i167.value += $tmp171;
        goto $l173;
        $l175:;
        panda$core$Int64 $tmp196 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp196;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp197, ((panda$core$Int64) { 0 }), oldBucketCount164, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp199 = $tmp197.start.value;
        panda$core$Int64 i198 = { $tmp199 };
        int64_t $tmp201 = $tmp197.end.value;
        int64_t $tmp202 = $tmp197.step.value;
        bool $tmp203 = $tmp197.inclusive.value;
        bool $tmp210 = $tmp202 > 0;
        if ($tmp210) goto $l208; else goto $l209;
        $l208:;
        if ($tmp203) goto $l211; else goto $l212;
        $l211:;
        if ($tmp199 <= $tmp201) goto $l204; else goto $l206;
        $l212:;
        if ($tmp199 < $tmp201) goto $l204; else goto $l206;
        $l209:;
        if ($tmp203) goto $l213; else goto $l214;
        $l213:;
        if ($tmp199 >= $tmp201) goto $l204; else goto $l206;
        $l214:;
        if ($tmp199 > $tmp201) goto $l204; else goto $l206;
        $l204:;
        {
            e216 = oldContents163[i198.value];
            $l217:;
            if (!((panda$core$Bit) { e216 != NULL }).value) goto $l218;
            {
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e216->key, e216->value);
                e216 = e216->next;
            }
            goto $l217;
            $l218:;
        }
        $l207:;
        if ($tmp210) goto $l220; else goto $l221;
        $l220:;
        int64_t $tmp222 = $tmp201 - i198.value;
        if ($tmp203) goto $l223; else goto $l224;
        $l223:;
        if ($tmp222 >= $tmp202) goto $l219; else goto $l206;
        $l224:;
        if ($tmp222 > $tmp202) goto $l219; else goto $l206;
        $l221:;
        int64_t $tmp226 = i198.value - $tmp201;
        if ($tmp203) goto $l227; else goto $l228;
        $l227:;
        if ($tmp226 >= -$tmp202) goto $l219; else goto $l206;
        $l228:;
        if ($tmp226 > -$tmp202) goto $l219; else goto $l206;
        $l219:;
        i198.value += $tmp202;
        goto $l204;
        $l206:;
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp230 = (panda$collections$HashMap$KeyIterator*) malloc(24);
    $tmp230->$class = (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class;
    $tmp230->refCount.value = 1;
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp230, self);
    return ((panda$collections$Iterator*) $tmp230);
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp232 = (panda$collections$HashMap$ValueIterator*) malloc(24);
    $tmp232->$class = (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class;
    $tmp232->refCount.value = 1;
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp232, self);
    return ((panda$collections$Iterator*) $tmp232);
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    return self->_count;
}
panda$core$Bit panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Map* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$Bit panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Map* p_other) {
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result234;
    panda$core$String* separator238;
    panda$core$Range$LTpanda$core$Int64$GT $tmp240;
    panda$collections$HashMap$Entry* entry259;
    panda$core$MutableString* $tmp235 = (panda$core$MutableString*) malloc(40);
    $tmp235->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp235->refCount.value = 1;
    panda$core$MutableString$init($tmp235);
    result234 = $tmp235;
    panda$core$MutableString$append$panda$core$String(result234, &$s237);
    separator238 = &$s239;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp240, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp242 = $tmp240.start.value;
    panda$core$Int64 i241 = { $tmp242 };
    int64_t $tmp244 = $tmp240.end.value;
    int64_t $tmp245 = $tmp240.step.value;
    bool $tmp246 = $tmp240.inclusive.value;
    bool $tmp253 = $tmp245 > 0;
    if ($tmp253) goto $l251; else goto $l252;
    $l251:;
    if ($tmp246) goto $l254; else goto $l255;
    $l254:;
    if ($tmp242 <= $tmp244) goto $l247; else goto $l249;
    $l255:;
    if ($tmp242 < $tmp244) goto $l247; else goto $l249;
    $l252:;
    if ($tmp246) goto $l256; else goto $l257;
    $l256:;
    if ($tmp242 >= $tmp244) goto $l247; else goto $l249;
    $l257:;
    if ($tmp242 > $tmp244) goto $l247; else goto $l249;
    $l247:;
    {
        entry259 = self->contents[i241.value];
        $l260:;
        if (!((panda$core$Bit) { entry259 != NULL }).value) goto $l261;
        {
            panda$core$MutableString$append$panda$core$String(result234, separator238);
            if (((panda$core$Bit) { entry259->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result234, ((panda$core$Object*) entry259->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result234, &$s262);
            }
            }
            panda$core$MutableString$append$panda$core$String(result234, &$s263);
            if (((panda$core$Bit) { entry259->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result234, entry259->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result234, &$s264);
            }
            }
            entry259 = entry259->next;
            separator238 = &$s265;
        }
        goto $l260;
        $l261:;
    }
    $l250:;
    if ($tmp253) goto $l267; else goto $l268;
    $l267:;
    int64_t $tmp269 = $tmp244 - i241.value;
    if ($tmp246) goto $l270; else goto $l271;
    $l270:;
    if ($tmp269 >= $tmp245) goto $l266; else goto $l249;
    $l271:;
    if ($tmp269 > $tmp245) goto $l266; else goto $l249;
    $l268:;
    int64_t $tmp273 = i241.value - $tmp244;
    if ($tmp246) goto $l274; else goto $l275;
    $l274:;
    if ($tmp273 >= -$tmp245) goto $l266; else goto $l249;
    $l275:;
    if ($tmp273 > -$tmp245) goto $l266; else goto $l249;
    $l266:;
    i241.value += $tmp245;
    goto $l247;
    $l249:;
    panda$core$MutableString$append$panda$core$String(result234, &$s277);
    panda$core$String* $tmp278 = panda$core$MutableString$convert$R$panda$core$String(result234);
    return $tmp278;
}

