#include "panda/collections/HashMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Map.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Key.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/MapWriter.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/collections/HashMap/Entry.h"
#include "panda/collections/HashMap/KeyIterator.h"
#include "panda/collections/HashMap/ValueIterator.h"
#include "panda/core/String.h"
#include "panda/core/MutableString.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
panda$core$Bit panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim(panda$collections$HashMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(self, ((panda$collections$Map*) p0));
    return result;
}
panda$core$Bit panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim(panda$collections$HashMap* self, panda$core$Object* p0) {
    panda$core$Bit result = panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(self, ((panda$collections$Map*) p0));
    return result;
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
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim(panda$collections$HashMap* self, panda$core$Object* p0, panda$core$Object* p1) {
    panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, ((panda$collections$Key*) p0), p1);
}


struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$HashMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, NULL, { } };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$collections$HashMap$_panda$collections$Map, { panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$HashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$HashMap$_panda$core$Equatable, { panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapView, { panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim} };

panda$collections$HashMap$class_type panda$collections$HashMap$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapWriter, { panda$collections$HashMap$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit, panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim, panda$collections$HashMap$remove$panda$collections$HashMap$K, panda$collections$HashMap$clear, panda$collections$HashMap$incrementCount, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim, panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

typedef panda$collections$Iterator* (*$fn27)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn39)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn48)(panda$collections$Key*);
typedef panda$core$Bit (*$fn69)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn81)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn94)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn106)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn114)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
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
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map) {
    panda$collections$Iterator* k$Iter24;
    panda$collections$Key* k36;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$init(self);
    {
        ITable* $tmp25 = p_map->$class->itable;
        while ($tmp25->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp25 = $tmp25->next;
        }
        $fn27 $tmp26 = $tmp25->methods[2];
        panda$collections$Iterator* $tmp28 = $tmp26(p_map);
        k$Iter24 = $tmp28;
        $l29:;
        ITable* $tmp31 = k$Iter24->$class->itable;
        while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp31 = $tmp31->next;
        }
        $fn33 $tmp32 = $tmp31->methods[0];
        panda$core$Bit $tmp34 = $tmp32(k$Iter24);
        panda$core$Bit $tmp35 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp34);
        if (!$tmp35.value) goto $l30;
        {
            ITable* $tmp37 = k$Iter24->$class->itable;
            while ($tmp37->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp37 = $tmp37->next;
            }
            $fn39 $tmp38 = $tmp37->methods[1];
            panda$core$Object* $tmp40 = $tmp38(k$Iter24);
            k36 = ((panda$collections$Key*) $tmp40);
            ITable* $tmp41 = p_map->$class->itable;
            while ($tmp41->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp41 = $tmp41->next;
            }
            $fn43 $tmp42 = $tmp41->methods[1];
            panda$core$Object* $tmp44 = $tmp42(p_map, ((panda$core$Object*) k36));
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k36, $tmp44);
        }
        goto $l29;
        $l30:;
    }
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h45;
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h45 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp46 = p_key->$class->itable;
        while ($tmp46->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp46 = $tmp46->next;
        }
        $fn48 $tmp47 = $tmp46->methods[0];
        panda$core$Int64 $tmp49 = $tmp47(p_key);
        h45 = $tmp49;
    }
    }
    panda$core$Int64 $tmp50 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h45, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp51 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h45, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp52 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp50, $tmp51);
    panda$core$Int64 $tmp53 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h45, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp54 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp52, $tmp53);
    panda$core$Int64 $tmp55 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h45, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp56 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp54, $tmp55);
    panda$core$Int64 $tmp57 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h45, $tmp56);
    h45 = $tmp57;
    panda$core$Int64 $tmp58 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp59 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h45, $tmp58);
    h45 = $tmp59;
    return h45;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index60;
    panda$collections$HashMap$Entry* e62;
    panda$core$Int64 $tmp61 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index60 = $tmp61;
    e62 = self->contents[index60.value];
    $l63:;
    bool $tmp65 = ((panda$core$Bit) { e62 != NULL }).value;
    if (!$tmp65) goto $l66;
    ITable* $tmp67 = ((panda$core$Equatable*) e62->key)->$class->itable;
    while ($tmp67->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp67 = $tmp67->next;
    }
    $fn69 $tmp68 = $tmp67->methods[1];
    panda$core$Bit $tmp70 = $tmp68(((panda$core$Equatable*) e62->key), ((panda$core$Object*) p_key));
    $tmp65 = $tmp70.value;
    $l66:;
    panda$core$Bit $tmp71 = { $tmp65 };
    if (!$tmp71.value) goto $l64;
    {
        e62 = e62->next;
    }
    goto $l63;
    $l64:;
    if (((panda$core$Bit) { e62 != NULL }).value) {
    {
        return e62->value;
    }
    }
    else {
    {
        return NULL;
    }
    }
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index72;
    panda$collections$HashMap$Entry* e74;
    panda$core$Int64 $tmp73 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index72 = $tmp73;
    e74 = self->contents[index72.value];
    $l75:;
    bool $tmp77 = ((panda$core$Bit) { e74 != NULL }).value;
    if (!$tmp77) goto $l78;
    ITable* $tmp79 = ((panda$core$Equatable*) e74->key)->$class->itable;
    while ($tmp79->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp79 = $tmp79->next;
    }
    $fn81 $tmp80 = $tmp79->methods[1];
    panda$core$Bit $tmp82 = $tmp80(((panda$core$Equatable*) e74->key), ((panda$core$Object*) p_key));
    $tmp77 = $tmp82.value;
    $l78:;
    panda$core$Bit $tmp83 = { $tmp77 };
    if (!$tmp83.value) goto $l76;
    {
        e74 = e74->next;
    }
    goto $l75;
    $l76:;
    return ((panda$core$Bit) { e74 != NULL });
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index85;
    panda$collections$HashMap$Entry* e87;
    panda$collections$HashMap$Entry* old97;
    panda$core$Int64 $tmp84 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp84;
    panda$core$Int64 $tmp86 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index85 = $tmp86;
    e87 = self->contents[index85.value];
    $l88:;
    bool $tmp90 = ((panda$core$Bit) { e87 != NULL }).value;
    if (!$tmp90) goto $l91;
    ITable* $tmp92 = ((panda$core$Equatable*) e87->key)->$class->itable;
    while ($tmp92->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp92 = $tmp92->next;
    }
    $fn94 $tmp93 = $tmp92->methods[1];
    panda$core$Bit $tmp95 = $tmp93(((panda$core$Equatable*) e87->key), ((panda$core$Object*) p_key));
    $tmp90 = $tmp95.value;
    $l91:;
    panda$core$Bit $tmp96 = { $tmp90 };
    if (!$tmp96.value) goto $l89;
    {
        e87 = e87->next;
    }
    goto $l88;
    $l89:;
    if (((panda$core$Bit) { e87 == NULL }).value) {
    {
        old97 = self->contents[index85.value];
        panda$collections$HashMap$Entry* $tmp98 = (panda$collections$HashMap$Entry*) malloc(40);
        $tmp98->$class = (panda$core$Class*) &panda$collections$HashMap$Entry$class;
        $tmp98->refCount.value = 1;
        panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp98, p_key, p_value);
        e87 = $tmp98;
        e87->next = old97;
        self->contents[index85.value] = e87;
        panda$collections$HashMap$incrementCount(self);
    }
    }
    else {
    {
        e87->value = p_value;
    }
    }
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index101;
    panda$collections$HashMap$Entry* e103;
    panda$collections$HashMap$Entry* next111;
    panda$collections$HashMap$Entry* next116;
    panda$core$Int64 $tmp100 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp100;
    panda$core$Int64 $tmp102 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index101 = $tmp102;
    e103 = self->contents[index101.value];
    if (((panda$core$Bit) { e103 == NULL }).value) {
    {
        return;
    }
    }
    ITable* $tmp104 = ((panda$core$Equatable*) e103->key)->$class->itable;
    while ($tmp104->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp104 = $tmp104->next;
    }
    $fn106 $tmp105 = $tmp104->methods[0];
    panda$core$Bit $tmp107 = $tmp105(((panda$core$Equatable*) e103->key), ((panda$core$Object*) p_key));
    if ($tmp107.value) {
    {
        self->contents[index101.value] = e103->next;
        panda$core$Int64 $tmp108 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp108;
        return;
    }
    }
    $l109:;
    while (true) {
    {
        next111 = e103->next;
        if (((panda$core$Bit) { next111 == NULL }).value) {
        {
            return;
        }
        }
        ITable* $tmp112 = ((panda$core$Equatable*) next111->key)->$class->itable;
        while ($tmp112->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp112 = $tmp112->next;
        }
        $fn114 $tmp113 = $tmp112->methods[0];
        panda$core$Bit $tmp115 = $tmp113(((panda$core$Equatable*) next111->key), ((panda$core$Object*) p_key));
        if ($tmp115.value) {
        {
            goto $l110;
        }
        }
        e103 = next111;
    }
    }
    $l110:;
    next116 = e103->next;
    PANDA_ASSERT(((panda$core$Bit) { next116 != NULL }).value);
    e103->next = next116->next;
    panda$core$Int64 $tmp117 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp117;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp119;
    panda$core$Int64 $tmp118 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp118;
    self->_count = ((panda$core$Int64) { 0 });
    free(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp119, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp121 = $tmp119.min.value;
    panda$core$Int64 i120 = { $tmp121 };
    int64_t $tmp123 = $tmp119.max.value;
    bool $tmp124 = $tmp119.inclusive.value;
    if ($tmp124) goto $l131; else goto $l132;
    $l131:;
    if ($tmp121 <= $tmp123) goto $l125; else goto $l127;
    $l132:;
    if ($tmp121 < $tmp123) goto $l125; else goto $l127;
    $l125:;
    {
        self->contents[i120.value] = NULL;
    }
    $l128:;
    int64_t $tmp134 = $tmp123 - i120.value;
    if ($tmp124) goto $l135; else goto $l136;
    $l135:;
    if ((uint64_t) $tmp134 >= 1) goto $l133; else goto $l127;
    $l136:;
    if ((uint64_t) $tmp134 > 1) goto $l133; else goto $l127;
    $l133:;
    i120.value += 1;
    goto $l125;
    $l127:;
    panda$core$Int64 $tmp139 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp140 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp139, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp140;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents143;
    panda$core$Int64 oldBucketCount144;
    panda$core$Range$LTpanda$core$Int64$GT $tmp146;
    panda$core$Range$LTpanda$core$Int64$GT $tmp167;
    panda$collections$HashMap$Entry* e181;
    panda$core$Int64 $tmp141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp141;
    panda$core$Bit $tmp142 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp142.value) {
    {
        oldContents143 = self->contents;
        oldBucketCount144 = self->bucketCount;
        panda$core$Int64 $tmp145 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp145;
        self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
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
            self->contents[i147.value] = NULL;
        }
        $l155:;
        int64_t $tmp161 = $tmp150 - i147.value;
        if ($tmp151) goto $l162; else goto $l163;
        $l162:;
        if ((uint64_t) $tmp161 >= 1) goto $l160; else goto $l154;
        $l163:;
        if ((uint64_t) $tmp161 > 1) goto $l160; else goto $l154;
        $l160:;
        i147.value += 1;
        goto $l152;
        $l154:;
        panda$core$Int64 $tmp166 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp166;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp167, ((panda$core$Int64) { 0 }), oldBucketCount144, ((panda$core$Bit) { false }));
        int64_t $tmp169 = $tmp167.min.value;
        panda$core$Int64 i168 = { $tmp169 };
        int64_t $tmp171 = $tmp167.max.value;
        bool $tmp172 = $tmp167.inclusive.value;
        if ($tmp172) goto $l179; else goto $l180;
        $l179:;
        if ($tmp169 <= $tmp171) goto $l173; else goto $l175;
        $l180:;
        if ($tmp169 < $tmp171) goto $l173; else goto $l175;
        $l173:;
        {
            e181 = oldContents143[i168.value];
            $l182:;
            if (!((panda$core$Bit) { e181 != NULL }).value) goto $l183;
            {
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e181->key, e181->value);
                e181 = e181->next;
            }
            goto $l182;
            $l183:;
        }
        $l176:;
        int64_t $tmp185 = $tmp171 - i168.value;
        if ($tmp172) goto $l186; else goto $l187;
        $l186:;
        if ((uint64_t) $tmp185 >= 1) goto $l184; else goto $l175;
        $l187:;
        if ((uint64_t) $tmp185 > 1) goto $l184; else goto $l175;
        $l184:;
        i168.value += 1;
        goto $l173;
        $l175:;
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp190 = (panda$collections$HashMap$KeyIterator*) malloc(24);
    $tmp190->$class = (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class;
    $tmp190->refCount.value = 1;
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp190, self);
    return ((panda$collections$Iterator*) $tmp190);
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp192 = (panda$collections$HashMap$ValueIterator*) malloc(24);
    $tmp192->$class = (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class;
    $tmp192->refCount.value = 1;
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp192, self);
    return ((panda$collections$Iterator*) $tmp192);
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
    panda$core$MutableString* result194;
    panda$core$Char8 $tmp197;
    panda$core$String* separator198;
    panda$core$Range$LTpanda$core$Int64$GT $tmp200;
    panda$collections$HashMap$Entry* entry214;
    panda$core$Char8 $tmp218;
    panda$core$Char8 $tmp227;
    panda$core$MutableString* $tmp195 = (panda$core$MutableString*) malloc(48);
    $tmp195->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp195->refCount.value = 1;
    panda$core$MutableString$init($tmp195);
    result194 = $tmp195;
    panda$core$Char8$init$panda$core$UInt8(&$tmp197, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result194, $tmp197);
    separator198 = &$s199;
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
        entry214 = self->contents[i201.value];
        $l215:;
        if (!((panda$core$Bit) { entry214 != NULL }).value) goto $l216;
        {
            panda$core$MutableString$append$panda$core$String(result194, separator198);
            if (((panda$core$Bit) { entry214->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result194, ((panda$core$Object*) entry214->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result194, &$s217);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp218, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result194, $tmp218);
            if (((panda$core$Bit) { entry214->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result194, entry214->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result194, &$s219);
            }
            }
            entry214 = entry214->next;
            separator198 = &$s220;
        }
        goto $l215;
        $l216:;
    }
    $l209:;
    int64_t $tmp222 = $tmp204 - i201.value;
    if ($tmp205) goto $l223; else goto $l224;
    $l223:;
    if ((uint64_t) $tmp222 >= 1) goto $l221; else goto $l208;
    $l224:;
    if ((uint64_t) $tmp222 > 1) goto $l221; else goto $l208;
    $l221:;
    i201.value += 1;
    goto $l206;
    $l208:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp227, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result194, $tmp227);
    panda$core$String* $tmp228 = panda$core$MutableString$finish$R$panda$core$String(result194);
    return $tmp228;
}

