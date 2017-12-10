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
#include "panda/core/SimpleRange.LTpanda/core/Int64.GT.h"
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

typedef panda$collections$Iterator* (*$fn36)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn48)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn52)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn57)(panda$collections$Key*);
typedef panda$core$Bit (*$fn78)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn90)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn103)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn115)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn123)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp4 = $tmp2.min.value;
    panda$core$Int64 i3 = { $tmp4 };
    int64_t $tmp6 = $tmp2.max.value;
    bool $tmp7 = $tmp2.inclusive.value;
    bool $tmp14 = 1 > 0;
    if ($tmp14) goto $l12; else goto $l13;
    $l12:;
    if ($tmp7) goto $l15; else goto $l16;
    $l15:;
    if ($tmp4 <= $tmp6) goto $l8; else goto $l10;
    $l16:;
    if ($tmp4 < $tmp6) goto $l8; else goto $l10;
    $l13:;
    if ($tmp7) goto $l17; else goto $l18;
    $l17:;
    if ($tmp4 >= $tmp6) goto $l8; else goto $l10;
    $l18:;
    if ($tmp4 > $tmp6) goto $l8; else goto $l10;
    $l8:;
    {
        self->contents[i3.value] = NULL;
    }
    $l11:;
    if ($tmp14) goto $l21; else goto $l22;
    $l21:;
    int64_t $tmp23 = $tmp6 - i3.value;
    if ($tmp7) goto $l24; else goto $l25;
    $l24:;
    if ($tmp23 >= 1) goto $l20; else goto $l10;
    $l25:;
    if ($tmp23 > 1) goto $l20; else goto $l10;
    $l22:;
    int64_t $tmp27 = i3.value - $tmp6;
    if ($tmp7) goto $l28; else goto $l29;
    $l28:;
    if ($tmp27 >= -1) goto $l20; else goto $l10;
    $l29:;
    if ($tmp27 > -1) goto $l20; else goto $l10;
    $l20:;
    i3.value += 1;
    goto $l8;
    $l10:;
    panda$core$Int64 $tmp31 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp32 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp31, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp32;
}
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map) {
    panda$collections$Iterator* k$Iter33;
    panda$collections$Key* k45;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$init(self);
    {
        ITable* $tmp34 = p_map->$class->itable;
        while ($tmp34->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp34 = $tmp34->next;
        }
        $fn36 $tmp35 = $tmp34->methods[2];
        panda$collections$Iterator* $tmp37 = $tmp35(p_map);
        k$Iter33 = $tmp37;
        $l38:;
        ITable* $tmp40 = k$Iter33->$class->itable;
        while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp40 = $tmp40->next;
        }
        $fn42 $tmp41 = $tmp40->methods[0];
        panda$core$Bit $tmp43 = $tmp41(k$Iter33);
        panda$core$Bit $tmp44 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp43);
        if (!$tmp44.value) goto $l39;
        {
            ITable* $tmp46 = k$Iter33->$class->itable;
            while ($tmp46->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp46 = $tmp46->next;
            }
            $fn48 $tmp47 = $tmp46->methods[1];
            panda$core$Object* $tmp49 = $tmp47(k$Iter33);
            k45 = ((panda$collections$Key*) $tmp49);
            ITable* $tmp50 = p_map->$class->itable;
            while ($tmp50->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp50 = $tmp50->next;
            }
            $fn52 $tmp51 = $tmp50->methods[1];
            panda$core$Object* $tmp53 = $tmp51(p_map, ((panda$core$Object*) k45));
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k45, $tmp53);
        }
        goto $l38;
        $l39:;
    }
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h54;
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h54 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp55 = p_key->$class->itable;
        while ($tmp55->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp55 = $tmp55->next;
        }
        $fn57 $tmp56 = $tmp55->methods[0];
        panda$core$Int64 $tmp58 = $tmp56(p_key);
        h54 = $tmp58;
    }
    }
    panda$core$Int64 $tmp59 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h54, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp60 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h54, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp61 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp59, $tmp60);
    panda$core$Int64 $tmp62 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h54, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp63 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp61, $tmp62);
    panda$core$Int64 $tmp64 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h54, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp65 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp63, $tmp64);
    panda$core$Int64 $tmp66 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h54, $tmp65);
    h54 = $tmp66;
    panda$core$Int64 $tmp67 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp68 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h54, $tmp67);
    h54 = $tmp68;
    return h54;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index69;
    panda$collections$HashMap$Entry* e71;
    panda$core$Int64 $tmp70 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index69 = $tmp70;
    e71 = self->contents[index69.value];
    $l72:;
    bool $tmp74 = ((panda$core$Bit) { e71 != NULL }).value;
    if (!$tmp74) goto $l75;
    ITable* $tmp76 = ((panda$core$Equatable*) e71->key)->$class->itable;
    while ($tmp76->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp76 = $tmp76->next;
    }
    $fn78 $tmp77 = $tmp76->methods[1];
    panda$core$Bit $tmp79 = $tmp77(((panda$core$Equatable*) e71->key), ((panda$core$Object*) p_key));
    $tmp74 = $tmp79.value;
    $l75:;
    panda$core$Bit $tmp80 = { $tmp74 };
    if (!$tmp80.value) goto $l73;
    {
        e71 = e71->next;
    }
    goto $l72;
    $l73:;
    if (((panda$core$Bit) { e71 != NULL }).value) {
    {
        return e71->value;
    }
    }
    else {
    {
        return NULL;
    }
    }
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index81;
    panda$collections$HashMap$Entry* e83;
    panda$core$Int64 $tmp82 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index81 = $tmp82;
    e83 = self->contents[index81.value];
    $l84:;
    bool $tmp86 = ((panda$core$Bit) { e83 != NULL }).value;
    if (!$tmp86) goto $l87;
    ITable* $tmp88 = ((panda$core$Equatable*) e83->key)->$class->itable;
    while ($tmp88->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp88 = $tmp88->next;
    }
    $fn90 $tmp89 = $tmp88->methods[1];
    panda$core$Bit $tmp91 = $tmp89(((panda$core$Equatable*) e83->key), ((panda$core$Object*) p_key));
    $tmp86 = $tmp91.value;
    $l87:;
    panda$core$Bit $tmp92 = { $tmp86 };
    if (!$tmp92.value) goto $l85;
    {
        e83 = e83->next;
    }
    goto $l84;
    $l85:;
    return ((panda$core$Bit) { e83 != NULL });
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index94;
    panda$collections$HashMap$Entry* e96;
    panda$collections$HashMap$Entry* old106;
    panda$core$Int64 $tmp93 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp93;
    panda$core$Int64 $tmp95 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index94 = $tmp95;
    e96 = self->contents[index94.value];
    $l97:;
    bool $tmp99 = ((panda$core$Bit) { e96 != NULL }).value;
    if (!$tmp99) goto $l100;
    ITable* $tmp101 = ((panda$core$Equatable*) e96->key)->$class->itable;
    while ($tmp101->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp101 = $tmp101->next;
    }
    $fn103 $tmp102 = $tmp101->methods[1];
    panda$core$Bit $tmp104 = $tmp102(((panda$core$Equatable*) e96->key), ((panda$core$Object*) p_key));
    $tmp99 = $tmp104.value;
    $l100:;
    panda$core$Bit $tmp105 = { $tmp99 };
    if (!$tmp105.value) goto $l98;
    {
        e96 = e96->next;
    }
    goto $l97;
    $l98:;
    if (((panda$core$Bit) { e96 == NULL }).value) {
    {
        old106 = self->contents[index94.value];
        panda$collections$HashMap$Entry* $tmp107 = (panda$collections$HashMap$Entry*) malloc(40);
        $tmp107->$class = (panda$core$Class*) &panda$collections$HashMap$Entry$class;
        $tmp107->refCount.value = 1;
        panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp107, p_key, p_value);
        e96 = $tmp107;
        e96->next = old106;
        self->contents[index94.value] = e96;
        panda$collections$HashMap$incrementCount(self);
    }
    }
    else {
    {
        e96->value = p_value;
    }
    }
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index110;
    panda$collections$HashMap$Entry* e112;
    panda$collections$HashMap$Entry* next120;
    panda$collections$HashMap$Entry* next125;
    panda$core$Int64 $tmp109 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp109;
    panda$core$Int64 $tmp111 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index110 = $tmp111;
    e112 = self->contents[index110.value];
    if (((panda$core$Bit) { e112 == NULL }).value) {
    {
        return;
    }
    }
    ITable* $tmp113 = ((panda$core$Equatable*) e112->key)->$class->itable;
    while ($tmp113->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp113 = $tmp113->next;
    }
    $fn115 $tmp114 = $tmp113->methods[0];
    panda$core$Bit $tmp116 = $tmp114(((panda$core$Equatable*) e112->key), ((panda$core$Object*) p_key));
    if ($tmp116.value) {
    {
        self->contents[index110.value] = e112->next;
        panda$core$Int64 $tmp117 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp117;
        return;
    }
    }
    $l118:;
    while (true) {
    {
        next120 = e112->next;
        if (((panda$core$Bit) { next120 == NULL }).value) {
        {
            return;
        }
        }
        ITable* $tmp121 = ((panda$core$Equatable*) next120->key)->$class->itable;
        while ($tmp121->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp121 = $tmp121->next;
        }
        $fn123 $tmp122 = $tmp121->methods[0];
        panda$core$Bit $tmp124 = $tmp122(((panda$core$Equatable*) next120->key), ((panda$core$Object*) p_key));
        if ($tmp124.value) {
        {
            goto $l119;
        }
        }
        e112 = next120;
    }
    }
    $l119:;
    next125 = e112->next;
    PANDA_ASSERT(((panda$core$Bit) { next125 != NULL }).value);
    e112->next = next125->next;
    panda$core$Int64 $tmp126 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp126;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp128;
    panda$core$Int64 $tmp127 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp127;
    self->_count = ((panda$core$Int64) { 0 });
    free(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp128, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp130 = $tmp128.min.value;
    panda$core$Int64 i129 = { $tmp130 };
    int64_t $tmp132 = $tmp128.max.value;
    bool $tmp133 = $tmp128.inclusive.value;
    bool $tmp140 = 1 > 0;
    if ($tmp140) goto $l138; else goto $l139;
    $l138:;
    if ($tmp133) goto $l141; else goto $l142;
    $l141:;
    if ($tmp130 <= $tmp132) goto $l134; else goto $l136;
    $l142:;
    if ($tmp130 < $tmp132) goto $l134; else goto $l136;
    $l139:;
    if ($tmp133) goto $l143; else goto $l144;
    $l143:;
    if ($tmp130 >= $tmp132) goto $l134; else goto $l136;
    $l144:;
    if ($tmp130 > $tmp132) goto $l134; else goto $l136;
    $l134:;
    {
        self->contents[i129.value] = NULL;
    }
    $l137:;
    if ($tmp140) goto $l147; else goto $l148;
    $l147:;
    int64_t $tmp149 = $tmp132 - i129.value;
    if ($tmp133) goto $l150; else goto $l151;
    $l150:;
    if ($tmp149 >= 1) goto $l146; else goto $l136;
    $l151:;
    if ($tmp149 > 1) goto $l146; else goto $l136;
    $l148:;
    int64_t $tmp153 = i129.value - $tmp132;
    if ($tmp133) goto $l154; else goto $l155;
    $l154:;
    if ($tmp153 >= -1) goto $l146; else goto $l136;
    $l155:;
    if ($tmp153 > -1) goto $l146; else goto $l136;
    $l146:;
    i129.value += 1;
    goto $l134;
    $l136:;
    panda$core$Int64 $tmp157 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp158 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp157, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp158;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents161;
    panda$core$Int64 oldBucketCount162;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp164;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp194;
    panda$collections$HashMap$Entry* e212;
    panda$core$Int64 $tmp159 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp159;
    panda$core$Bit $tmp160 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp160.value) {
    {
        oldContents161 = self->contents;
        oldBucketCount162 = self->bucketCount;
        panda$core$Int64 $tmp163 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp163;
        self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp164, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp166 = $tmp164.min.value;
        panda$core$Int64 i165 = { $tmp166 };
        int64_t $tmp168 = $tmp164.max.value;
        bool $tmp169 = $tmp164.inclusive.value;
        bool $tmp176 = 1 > 0;
        if ($tmp176) goto $l174; else goto $l175;
        $l174:;
        if ($tmp169) goto $l177; else goto $l178;
        $l177:;
        if ($tmp166 <= $tmp168) goto $l170; else goto $l172;
        $l178:;
        if ($tmp166 < $tmp168) goto $l170; else goto $l172;
        $l175:;
        if ($tmp169) goto $l179; else goto $l180;
        $l179:;
        if ($tmp166 >= $tmp168) goto $l170; else goto $l172;
        $l180:;
        if ($tmp166 > $tmp168) goto $l170; else goto $l172;
        $l170:;
        {
            self->contents[i165.value] = NULL;
        }
        $l173:;
        if ($tmp176) goto $l183; else goto $l184;
        $l183:;
        int64_t $tmp185 = $tmp168 - i165.value;
        if ($tmp169) goto $l186; else goto $l187;
        $l186:;
        if ($tmp185 >= 1) goto $l182; else goto $l172;
        $l187:;
        if ($tmp185 > 1) goto $l182; else goto $l172;
        $l184:;
        int64_t $tmp189 = i165.value - $tmp168;
        if ($tmp169) goto $l190; else goto $l191;
        $l190:;
        if ($tmp189 >= -1) goto $l182; else goto $l172;
        $l191:;
        if ($tmp189 > -1) goto $l182; else goto $l172;
        $l182:;
        i165.value += 1;
        goto $l170;
        $l172:;
        panda$core$Int64 $tmp193 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp193;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp194, ((panda$core$Int64) { 0 }), oldBucketCount162, ((panda$core$Bit) { false }));
        int64_t $tmp196 = $tmp194.min.value;
        panda$core$Int64 i195 = { $tmp196 };
        int64_t $tmp198 = $tmp194.max.value;
        bool $tmp199 = $tmp194.inclusive.value;
        bool $tmp206 = 1 > 0;
        if ($tmp206) goto $l204; else goto $l205;
        $l204:;
        if ($tmp199) goto $l207; else goto $l208;
        $l207:;
        if ($tmp196 <= $tmp198) goto $l200; else goto $l202;
        $l208:;
        if ($tmp196 < $tmp198) goto $l200; else goto $l202;
        $l205:;
        if ($tmp199) goto $l209; else goto $l210;
        $l209:;
        if ($tmp196 >= $tmp198) goto $l200; else goto $l202;
        $l210:;
        if ($tmp196 > $tmp198) goto $l200; else goto $l202;
        $l200:;
        {
            e212 = oldContents161[i195.value];
            $l213:;
            if (!((panda$core$Bit) { e212 != NULL }).value) goto $l214;
            {
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e212->key, e212->value);
                e212 = e212->next;
            }
            goto $l213;
            $l214:;
        }
        $l203:;
        if ($tmp206) goto $l216; else goto $l217;
        $l216:;
        int64_t $tmp218 = $tmp198 - i195.value;
        if ($tmp199) goto $l219; else goto $l220;
        $l219:;
        if ($tmp218 >= 1) goto $l215; else goto $l202;
        $l220:;
        if ($tmp218 > 1) goto $l215; else goto $l202;
        $l217:;
        int64_t $tmp222 = i195.value - $tmp198;
        if ($tmp199) goto $l223; else goto $l224;
        $l223:;
        if ($tmp222 >= -1) goto $l215; else goto $l202;
        $l224:;
        if ($tmp222 > -1) goto $l215; else goto $l202;
        $l215:;
        i195.value += 1;
        goto $l200;
        $l202:;
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp226 = (panda$collections$HashMap$KeyIterator*) malloc(24);
    $tmp226->$class = (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class;
    $tmp226->refCount.value = 1;
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp226, self);
    return ((panda$collections$Iterator*) $tmp226);
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp228 = (panda$collections$HashMap$ValueIterator*) malloc(24);
    $tmp228->$class = (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class;
    $tmp228->refCount.value = 1;
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp228, self);
    return ((panda$collections$Iterator*) $tmp228);
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
    panda$core$MutableString* result230;
    panda$core$String* separator234;
    panda$core$SimpleRange$LTpanda$core$Int64$GT $tmp236;
    panda$collections$HashMap$Entry* entry254;
    panda$core$MutableString* $tmp231 = (panda$core$MutableString*) malloc(40);
    $tmp231->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp231->refCount.value = 1;
    panda$core$MutableString$init($tmp231);
    result230 = $tmp231;
    panda$core$MutableString$append$panda$core$String(result230, &$s233);
    separator234 = &$s235;
    panda$core$SimpleRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp236, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp238 = $tmp236.min.value;
    panda$core$Int64 i237 = { $tmp238 };
    int64_t $tmp240 = $tmp236.max.value;
    bool $tmp241 = $tmp236.inclusive.value;
    bool $tmp248 = 1 > 0;
    if ($tmp248) goto $l246; else goto $l247;
    $l246:;
    if ($tmp241) goto $l249; else goto $l250;
    $l249:;
    if ($tmp238 <= $tmp240) goto $l242; else goto $l244;
    $l250:;
    if ($tmp238 < $tmp240) goto $l242; else goto $l244;
    $l247:;
    if ($tmp241) goto $l251; else goto $l252;
    $l251:;
    if ($tmp238 >= $tmp240) goto $l242; else goto $l244;
    $l252:;
    if ($tmp238 > $tmp240) goto $l242; else goto $l244;
    $l242:;
    {
        entry254 = self->contents[i237.value];
        $l255:;
        if (!((panda$core$Bit) { entry254 != NULL }).value) goto $l256;
        {
            panda$core$MutableString$append$panda$core$String(result230, separator234);
            if (((panda$core$Bit) { entry254->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result230, ((panda$core$Object*) entry254->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result230, &$s257);
            }
            }
            panda$core$MutableString$append$panda$core$String(result230, &$s258);
            if (((panda$core$Bit) { entry254->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result230, entry254->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result230, &$s259);
            }
            }
            entry254 = entry254->next;
            separator234 = &$s260;
        }
        goto $l255;
        $l256:;
    }
    $l245:;
    if ($tmp248) goto $l262; else goto $l263;
    $l262:;
    int64_t $tmp264 = $tmp240 - i237.value;
    if ($tmp241) goto $l265; else goto $l266;
    $l265:;
    if ($tmp264 >= 1) goto $l261; else goto $l244;
    $l266:;
    if ($tmp264 > 1) goto $l261; else goto $l244;
    $l263:;
    int64_t $tmp268 = i237.value - $tmp240;
    if ($tmp241) goto $l269; else goto $l270;
    $l269:;
    if ($tmp268 >= -1) goto $l261; else goto $l244;
    $l270:;
    if ($tmp268 > -1) goto $l261; else goto $l244;
    $l261:;
    i237.value += 1;
    goto $l242;
    $l244:;
    panda$core$MutableString$append$panda$core$String(result230, &$s272);
    panda$core$String* $tmp273 = panda$core$MutableString$convert$R$panda$core$String(result230);
    return $tmp273;
}

