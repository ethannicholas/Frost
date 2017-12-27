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
#include "panda/core/Panda.h"
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
typedef panda$core$Bit (*$fn70)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn84)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn99)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn117)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn126)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaAlloc(self->bucketCount.value * 40));
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
    memset(&h45, 0, sizeof(h45));
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
    panda$core$Object* $tmp63 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index60.value]));
    e62 = ((panda$collections$HashMap$Entry*) $tmp63);
    $l64:;
    bool $tmp66 = ((panda$core$Bit) { e62 != NULL }).value;
    if (!$tmp66) goto $l67;
    ITable* $tmp68 = ((panda$core$Equatable*) e62->key)->$class->itable;
    while ($tmp68->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp68 = $tmp68->next;
    }
    $fn70 $tmp69 = $tmp68->methods[1];
    panda$core$Bit $tmp71 = $tmp69(((panda$core$Equatable*) e62->key), ((panda$core$Object*) p_key));
    $tmp66 = $tmp71.value;
    $l67:;
    panda$core$Bit $tmp72 = { $tmp66 };
    if (!$tmp72.value) goto $l65;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e62));
            panda$core$Object* $tmp73 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e62->next));
            e62 = ((panda$collections$HashMap$Entry*) $tmp73);
        }
    }
    goto $l64;
    $l65:;
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
    panda$core$Int64 index74;
    panda$collections$HashMap$Entry* e76;
    panda$core$Int64 $tmp75 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index74 = $tmp75;
    panda$core$Object* $tmp77 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index74.value]));
    e76 = ((panda$collections$HashMap$Entry*) $tmp77);
    $l78:;
    bool $tmp80 = ((panda$core$Bit) { e76 != NULL }).value;
    if (!$tmp80) goto $l81;
    ITable* $tmp82 = ((panda$core$Equatable*) e76->key)->$class->itable;
    while ($tmp82->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp82 = $tmp82->next;
    }
    $fn84 $tmp83 = $tmp82->methods[1];
    panda$core$Bit $tmp85 = $tmp83(((panda$core$Equatable*) e76->key), ((panda$core$Object*) p_key));
    $tmp80 = $tmp85.value;
    $l81:;
    panda$core$Bit $tmp86 = { $tmp80 };
    if (!$tmp86.value) goto $l79;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e76));
            panda$core$Object* $tmp87 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e76->next));
            e76 = ((panda$collections$HashMap$Entry*) $tmp87);
        }
    }
    goto $l78;
    $l79:;
    return ((panda$core$Bit) { e76 != NULL });
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index89;
    panda$collections$HashMap$Entry* e91;
    panda$collections$HashMap$Entry* old103;
    panda$core$Int64 $tmp88 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp88;
    panda$core$Int64 $tmp90 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index89 = $tmp90;
    panda$core$Object* $tmp92 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index89.value]));
    e91 = ((panda$collections$HashMap$Entry*) $tmp92);
    $l93:;
    bool $tmp95 = ((panda$core$Bit) { e91 != NULL }).value;
    if (!$tmp95) goto $l96;
    ITable* $tmp97 = ((panda$core$Equatable*) e91->key)->$class->itable;
    while ($tmp97->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp97 = $tmp97->next;
    }
    $fn99 $tmp98 = $tmp97->methods[1];
    panda$core$Bit $tmp100 = $tmp98(((panda$core$Equatable*) e91->key), ((panda$core$Object*) p_key));
    $tmp95 = $tmp100.value;
    $l96:;
    panda$core$Bit $tmp101 = { $tmp95 };
    if (!$tmp101.value) goto $l94;
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e91));
            panda$core$Object* $tmp102 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e91->next));
            e91 = ((panda$collections$HashMap$Entry*) $tmp102);
        }
    }
    goto $l93;
    $l94:;
    if (((panda$core$Bit) { e91 == NULL }).value) {
    {
        panda$core$Object* $tmp104 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index89.value]));
        old103 = ((panda$collections$HashMap$Entry*) $tmp104);
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e91));
            panda$collections$HashMap$Entry* $tmp105 = (panda$collections$HashMap$Entry*) malloc(40);
            $tmp105->$class = (panda$core$Class*) &panda$collections$HashMap$Entry$class;
            $tmp105->refCount.value = 1;
            panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp105, p_key, p_value);
            panda$core$Object* $tmp107 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp105));
            e91 = ((panda$collections$HashMap$Entry*) $tmp107);
        }
        {
            panda$core$Object* $tmp108 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) old103));
            e91->next = ((panda$collections$HashMap$Entry*) $tmp108);
        }
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index89.value]));
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e91));
            self->contents[index89.value] = e91;
        }
        panda$collections$HashMap$incrementCount(self);
    }
    }
    else {
    {
        {
            panda$core$Object* $tmp109 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(p_value);
            e91->value = $tmp109;
        }
    }
    }
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index111;
    panda$collections$HashMap$Entry* e113;
    panda$collections$HashMap$Entry* next122;
    panda$collections$HashMap$Entry* next129;
    panda$core$Int64 $tmp110 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp110;
    panda$core$Int64 $tmp112 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index111 = $tmp112;
    panda$core$Object* $tmp114 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index111.value]));
    e113 = ((panda$collections$HashMap$Entry*) $tmp114);
    if (((panda$core$Bit) { e113 == NULL }).value) {
    {
        return;
    }
    }
    ITable* $tmp115 = ((panda$core$Equatable*) e113->key)->$class->itable;
    while ($tmp115->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp115 = $tmp115->next;
    }
    $fn117 $tmp116 = $tmp115->methods[0];
    panda$core$Bit $tmp118 = $tmp116(((panda$core$Equatable*) e113->key), ((panda$core$Object*) p_key));
    if ($tmp118.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[index111.value]));
            panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e113->next));
            self->contents[index111.value] = e113->next;
        }
        panda$core$Int64 $tmp119 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp119;
        return;
    }
    }
    $l120:;
    while (true) {
    {
        panda$core$Object* $tmp123 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e113->next));
        next122 = ((panda$collections$HashMap$Entry*) $tmp123);
        if (((panda$core$Bit) { next122 == NULL }).value) {
        {
            return;
        }
        }
        ITable* $tmp124 = ((panda$core$Equatable*) next122->key)->$class->itable;
        while ($tmp124->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp124 = $tmp124->next;
        }
        $fn126 $tmp125 = $tmp124->methods[0];
        panda$core$Bit $tmp127 = $tmp125(((panda$core$Equatable*) next122->key), ((panda$core$Object*) p_key));
        if ($tmp127.value) {
        {
            goto $l121;
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e113));
            panda$core$Object* $tmp128 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) next122));
            e113 = ((panda$collections$HashMap$Entry*) $tmp128);
        }
    }
    }
    $l121:;
    panda$core$Object* $tmp130 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e113->next));
    next129 = ((panda$collections$HashMap$Entry*) $tmp130);
    PANDA_ASSERT(((panda$core$Bit) { next129 != NULL }).value);
    {
        panda$core$Object* $tmp131 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) next129->next));
        e113->next = ((panda$collections$HashMap$Entry*) $tmp131);
    }
    panda$core$Int64 $tmp132 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp132;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp134;
    panda$core$Int64 $tmp133 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp133;
    self->_count = ((panda$core$Int64) { 0 });
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaAlloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp134, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp136 = $tmp134.min.value;
    panda$core$Int64 i135 = { $tmp136 };
    int64_t $tmp138 = $tmp134.max.value;
    bool $tmp139 = $tmp134.inclusive.value;
    if ($tmp139) goto $l146; else goto $l147;
    $l146:;
    if ($tmp136 <= $tmp138) goto $l140; else goto $l142;
    $l147:;
    if ($tmp136 < $tmp138) goto $l140; else goto $l142;
    $l140:;
    {
        if (((panda$core$Bit) { self->contents[i135.value] != NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[i135.value]));
                panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i135.value] = NULL;
            }
        }
        }
    }
    $l143:;
    int64_t $tmp149 = $tmp138 - i135.value;
    if ($tmp139) goto $l150; else goto $l151;
    $l150:;
    if ((uint64_t) $tmp149 >= 1) goto $l148; else goto $l142;
    $l151:;
    if ((uint64_t) $tmp149 > 1) goto $l148; else goto $l142;
    $l148:;
    i135.value += 1;
    goto $l140;
    $l142:;
    panda$core$Int64 $tmp154 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp155 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp154, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp155;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents158;
    panda$core$Int64 oldBucketCount159;
    panda$core$Range$LTpanda$core$Int64$GT $tmp161;
    panda$core$Range$LTpanda$core$Int64$GT $tmp182;
    panda$collections$HashMap$Entry* e196;
    panda$core$Int64 $tmp156 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp156;
    panda$core$Bit $tmp157 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp157.value) {
    {
        oldContents158 = self->contents;
        oldBucketCount159 = self->bucketCount;
        panda$core$Int64 $tmp160 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp160;
        self->contents = ((panda$collections$HashMap$Entry**) pandaAlloc(self->bucketCount.value * 40));
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
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[i162.value]));
                panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i162.value] = NULL;
            }
        }
        $l170:;
        int64_t $tmp176 = $tmp165 - i162.value;
        if ($tmp166) goto $l177; else goto $l178;
        $l177:;
        if ((uint64_t) $tmp176 >= 1) goto $l175; else goto $l169;
        $l178:;
        if ((uint64_t) $tmp176 > 1) goto $l175; else goto $l169;
        $l175:;
        i162.value += 1;
        goto $l167;
        $l169:;
        panda$core$Int64 $tmp181 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp181;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp182, ((panda$core$Int64) { 0 }), oldBucketCount159, ((panda$core$Bit) { false }));
        int64_t $tmp184 = $tmp182.min.value;
        panda$core$Int64 i183 = { $tmp184 };
        int64_t $tmp186 = $tmp182.max.value;
        bool $tmp187 = $tmp182.inclusive.value;
        if ($tmp187) goto $l194; else goto $l195;
        $l194:;
        if ($tmp184 <= $tmp186) goto $l188; else goto $l190;
        $l195:;
        if ($tmp184 < $tmp186) goto $l188; else goto $l190;
        $l188:;
        {
            panda$core$Object* $tmp197 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) oldContents158[i183.value]));
            e196 = ((panda$collections$HashMap$Entry*) $tmp197);
            $l198:;
            if (!((panda$core$Bit) { e196 != NULL }).value) goto $l199;
            {
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e196->key, e196->value);
                {
                    panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e196));
                    panda$core$Object* $tmp200 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) e196->next));
                    e196 = ((panda$collections$HashMap$Entry*) $tmp200);
                }
            }
            goto $l198;
            $l199:;
        }
        $l191:;
        int64_t $tmp202 = $tmp186 - i183.value;
        if ($tmp187) goto $l203; else goto $l204;
        $l203:;
        if ((uint64_t) $tmp202 >= 1) goto $l201; else goto $l190;
        $l204:;
        if ((uint64_t) $tmp202 > 1) goto $l201; else goto $l190;
        $l201:;
        i183.value += 1;
        goto $l188;
        $l190:;
        pandaFree(oldContents158);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp207 = (panda$collections$HashMap$KeyIterator*) malloc(24);
    $tmp207->$class = (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class;
    $tmp207->refCount.value = 1;
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp207, self);
    return ((panda$collections$Iterator*) $tmp207);
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp209 = (panda$collections$HashMap$ValueIterator*) malloc(24);
    $tmp209->$class = (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class;
    $tmp209->refCount.value = 1;
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp209, self);
    return ((panda$collections$Iterator*) $tmp209);
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
    panda$core$MutableString* result211;
    panda$core$Char8 $tmp215;
    panda$core$String* separator216;
    panda$core$Range$LTpanda$core$Int64$GT $tmp219;
    panda$collections$HashMap$Entry* entry233;
    panda$core$Char8 $tmp238;
    panda$core$Char8 $tmp249;
    panda$core$MutableString* $tmp212 = (panda$core$MutableString*) malloc(48);
    $tmp212->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp212->refCount.value = 1;
    panda$core$MutableString$init($tmp212);
    panda$core$Object* $tmp214 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp212));
    result211 = ((panda$core$MutableString*) $tmp214);
    panda$core$Char8$init$panda$core$UInt8(&$tmp215, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result211, $tmp215);
    panda$core$Object* $tmp218 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s217));
    separator216 = ((panda$core$String*) $tmp218);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp219, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp221 = $tmp219.min.value;
    panda$core$Int64 i220 = { $tmp221 };
    int64_t $tmp223 = $tmp219.max.value;
    bool $tmp224 = $tmp219.inclusive.value;
    if ($tmp224) goto $l231; else goto $l232;
    $l231:;
    if ($tmp221 <= $tmp223) goto $l225; else goto $l227;
    $l232:;
    if ($tmp221 < $tmp223) goto $l225; else goto $l227;
    $l225:;
    {
        panda$core$Object* $tmp234 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->contents[i220.value]));
        entry233 = ((panda$collections$HashMap$Entry*) $tmp234);
        $l235:;
        if (!((panda$core$Bit) { entry233 != NULL }).value) goto $l236;
        {
            panda$core$MutableString$append$panda$core$String(result211, separator216);
            if (((panda$core$Bit) { entry233->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result211, ((panda$core$Object*) entry233->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result211, &$s237);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp238, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result211, $tmp238);
            if (((panda$core$Bit) { entry233->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result211, entry233->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result211, &$s239);
            }
            }
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) entry233));
                panda$core$Object* $tmp240 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) entry233->next));
                entry233 = ((panda$collections$HashMap$Entry*) $tmp240);
            }
            {
                panda$core$Panda$unref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) separator216));
                panda$core$Object* $tmp242 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) &$s241));
                separator216 = ((panda$core$String*) $tmp242);
            }
        }
        goto $l235;
        $l236:;
    }
    $l228:;
    int64_t $tmp244 = $tmp223 - i220.value;
    if ($tmp224) goto $l245; else goto $l246;
    $l245:;
    if ((uint64_t) $tmp244 >= 1) goto $l243; else goto $l227;
    $l246:;
    if ((uint64_t) $tmp244 > 1) goto $l243; else goto $l227;
    $l243:;
    i220.value += 1;
    goto $l225;
    $l227:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp249, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result211, $tmp249);
    panda$core$String* $tmp250 = panda$core$MutableString$finish$R$panda$core$String(result211);
    return $tmp250;
}

