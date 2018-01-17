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

panda$collections$HashMap$class_type panda$collections$HashMap$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapWriter, { panda$collections$HashMap$convert$R$panda$core$String, panda$collections$HashMap$cleanup, panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit, panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim, panda$collections$HashMap$remove$panda$collections$HashMap$K, panda$collections$HashMap$clear, panda$collections$HashMap$incrementCount, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim, panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

typedef panda$collections$Iterator* (*$fn27)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn39)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn48)(panda$collections$Key*);
typedef panda$core$Bit (*$fn69)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn83)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn97)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn109)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn117)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s222 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
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
    panda$core$Object* tmp172;
    panda$core$Object* tmp273;
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
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e62));
            e62 = e62->next;
        }
    }
    goto $l63;
    $l64:;
    if (((panda$core$Bit) { e62 != NULL }).value) {
    {
        {
            tmp172 = e62->value;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e62));
            return tmp172;
        }
    }
    }
    else {
    {
        {
            tmp273 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e62));
            return tmp273;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e62));
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index74;
    panda$collections$HashMap$Entry* e76;
    panda$core$Bit tmp386;
    panda$core$Int64 $tmp75 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index74 = $tmp75;
    e76 = self->contents[index74.value];
    $l77:;
    bool $tmp79 = ((panda$core$Bit) { e76 != NULL }).value;
    if (!$tmp79) goto $l80;
    ITable* $tmp81 = ((panda$core$Equatable*) e76->key)->$class->itable;
    while ($tmp81->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp81 = $tmp81->next;
    }
    $fn83 $tmp82 = $tmp81->methods[1];
    panda$core$Bit $tmp84 = $tmp82(((panda$core$Equatable*) e76->key), ((panda$core$Object*) p_key));
    $tmp79 = $tmp84.value;
    $l80:;
    panda$core$Bit $tmp85 = { $tmp79 };
    if (!$tmp85.value) goto $l78;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e76));
            e76 = e76->next;
        }
    }
    goto $l77;
    $l78:;
    {
        tmp386 = ((panda$core$Bit) { e76 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e76));
        return tmp386;
    }
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index88;
    panda$collections$HashMap$Entry* e90;
    panda$collections$HashMap$Entry* old100;
    panda$core$Int64 $tmp87 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp87;
    panda$core$Int64 $tmp89 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index88 = $tmp89;
    e90 = self->contents[index88.value];
    $l91:;
    bool $tmp93 = ((panda$core$Bit) { e90 != NULL }).value;
    if (!$tmp93) goto $l94;
    ITable* $tmp95 = ((panda$core$Equatable*) e90->key)->$class->itable;
    while ($tmp95->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp95 = $tmp95->next;
    }
    $fn97 $tmp96 = $tmp95->methods[1];
    panda$core$Bit $tmp98 = $tmp96(((panda$core$Equatable*) e90->key), ((panda$core$Object*) p_key));
    $tmp93 = $tmp98.value;
    $l94:;
    panda$core$Bit $tmp99 = { $tmp93 };
    if (!$tmp99.value) goto $l92;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e90));
            e90 = e90->next;
        }
    }
    goto $l91;
    $l92:;
    if (((panda$core$Bit) { e90 == NULL }).value) {
    {
        old100 = self->contents[index88.value];
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e90));
            panda$collections$HashMap$Entry* $tmp101 = (panda$collections$HashMap$Entry*) pandaZAlloc(40);
            $tmp101->$class = (panda$core$Class*) &panda$collections$HashMap$Entry$class;
            $tmp101->refCount.value = 1;
            panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp101, p_key, p_value);
            e90 = $tmp101;
        }
        {
            e90->next = old100;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index88.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e90));
            self->contents[index88.value] = e90;
        }
        panda$collections$HashMap$incrementCount(self);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old100));
    }
    }
    else {
    {
        {
            e90->value = p_value;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e90));
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index104;
    panda$collections$HashMap$Entry* e106;
    panda$collections$HashMap$Entry* next114;
    panda$collections$HashMap$Entry* next119;
    panda$core$Int64 $tmp103 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp103;
    panda$core$Int64 $tmp105 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index104 = $tmp105;
    e106 = self->contents[index104.value];
    if (((panda$core$Bit) { e106 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e106));
            return;
        }
    }
    }
    ITable* $tmp107 = ((panda$core$Equatable*) e106->key)->$class->itable;
    while ($tmp107->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp107 = $tmp107->next;
    }
    $fn109 $tmp108 = $tmp107->methods[0];
    panda$core$Bit $tmp110 = $tmp108(((panda$core$Equatable*) e106->key), ((panda$core$Object*) p_key));
    if ($tmp110.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index104.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e106->next));
            self->contents[index104.value] = e106->next;
        }
        panda$core$Int64 $tmp111 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp111;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e106));
            return;
        }
    }
    }
    $l112:;
    while (true) {
    {
        next114 = e106->next;
        if (((panda$core$Bit) { next114 == NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next114));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e106));
                    return;
                }
            }
        }
        }
        ITable* $tmp115 = ((panda$core$Equatable*) next114->key)->$class->itable;
        while ($tmp115->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp115 = $tmp115->next;
        }
        $fn117 $tmp116 = $tmp115->methods[0];
        panda$core$Bit $tmp118 = $tmp116(((panda$core$Equatable*) next114->key), ((panda$core$Object*) p_key));
        if ($tmp118.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next114));
                goto $l113;
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e106));
            e106 = next114;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next114));
    }
    }
    $l113:;
    next119 = e106->next;
    PANDA_ASSERT(((panda$core$Bit) { next119 != NULL }).value);
    {
        e106->next = next119->next;
    }
    panda$core$Int64 $tmp120 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp120;
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next119));
    }
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp122;
    panda$core$Int64 $tmp121 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp121;
    self->_count = ((panda$core$Int64) { 0 });
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp122, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp124 = $tmp122.min.value;
    panda$core$Int64 i123 = { $tmp124 };
    int64_t $tmp126 = $tmp122.max.value;
    bool $tmp127 = $tmp122.inclusive.value;
    if ($tmp127) goto $l134; else goto $l135;
    $l134:;
    if ($tmp124 <= $tmp126) goto $l128; else goto $l130;
    $l135:;
    if ($tmp124 < $tmp126) goto $l128; else goto $l130;
    $l128:;
    {
        if (((panda$core$Bit) { self->contents[i123.value] != NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i123.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i123.value] = NULL;
            }
        }
        }
    }
    $l131:;
    int64_t $tmp137 = $tmp126 - i123.value;
    if ($tmp127) goto $l138; else goto $l139;
    $l138:;
    if ((uint64_t) $tmp137 >= 1) goto $l136; else goto $l130;
    $l139:;
    if ((uint64_t) $tmp137 > 1) goto $l136; else goto $l130;
    $l136:;
    i123.value += 1;
    goto $l128;
    $l130:;
    panda$core$Int64 $tmp142 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp143 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp142, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp143;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents146;
    panda$core$Int64 oldBucketCount147;
    panda$core$Range$LTpanda$core$Int64$GT $tmp149;
    panda$core$Range$LTpanda$core$Int64$GT $tmp170;
    panda$collections$HashMap$Entry* e184;
    panda$core$Int64 $tmp144 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp144;
    panda$core$Bit $tmp145 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp145.value) {
    {
        oldContents146 = self->contents;
        oldBucketCount147 = self->bucketCount;
        panda$core$Int64 $tmp148 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp148;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp149, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp151 = $tmp149.min.value;
        panda$core$Int64 i150 = { $tmp151 };
        int64_t $tmp153 = $tmp149.max.value;
        bool $tmp154 = $tmp149.inclusive.value;
        if ($tmp154) goto $l161; else goto $l162;
        $l161:;
        if ($tmp151 <= $tmp153) goto $l155; else goto $l157;
        $l162:;
        if ($tmp151 < $tmp153) goto $l155; else goto $l157;
        $l155:;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i150.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i150.value] = NULL;
            }
        }
        $l158:;
        int64_t $tmp164 = $tmp153 - i150.value;
        if ($tmp154) goto $l165; else goto $l166;
        $l165:;
        if ((uint64_t) $tmp164 >= 1) goto $l163; else goto $l157;
        $l166:;
        if ((uint64_t) $tmp164 > 1) goto $l163; else goto $l157;
        $l163:;
        i150.value += 1;
        goto $l155;
        $l157:;
        panda$core$Int64 $tmp169 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp169;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp170, ((panda$core$Int64) { 0 }), oldBucketCount147, ((panda$core$Bit) { false }));
        int64_t $tmp172 = $tmp170.min.value;
        panda$core$Int64 i171 = { $tmp172 };
        int64_t $tmp174 = $tmp170.max.value;
        bool $tmp175 = $tmp170.inclusive.value;
        if ($tmp175) goto $l182; else goto $l183;
        $l182:;
        if ($tmp172 <= $tmp174) goto $l176; else goto $l178;
        $l183:;
        if ($tmp172 < $tmp174) goto $l176; else goto $l178;
        $l176:;
        {
            e184 = oldContents146[i171.value];
            $l185:;
            if (!((panda$core$Bit) { e184 != NULL }).value) goto $l186;
            {
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e184->key, e184->value);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e184));
                    e184 = e184->next;
                }
            }
            goto $l185;
            $l186:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e184));
        }
        $l179:;
        int64_t $tmp188 = $tmp174 - i171.value;
        if ($tmp175) goto $l189; else goto $l190;
        $l189:;
        if ((uint64_t) $tmp188 >= 1) goto $l187; else goto $l178;
        $l190:;
        if ((uint64_t) $tmp188 > 1) goto $l187; else goto $l178;
        $l187:;
        i171.value += 1;
        goto $l176;
        $l178:;
        pandaFree(oldContents146);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp193 = (panda$collections$HashMap$KeyIterator*) pandaZAlloc(24);
    $tmp193->$class = (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class;
    $tmp193->refCount.value = 1;
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp193, self);
    return ((panda$collections$Iterator*) $tmp193);
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp195 = (panda$collections$HashMap$ValueIterator*) pandaZAlloc(24);
    $tmp195->$class = (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class;
    $tmp195->refCount.value = 1;
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp195, self);
    return ((panda$collections$Iterator*) $tmp195);
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
    panda$core$MutableString* result197;
    panda$core$Char8 $tmp200;
    panda$core$String* separator201;
    panda$core$Range$LTpanda$core$Int64$GT $tmp203;
    panda$collections$HashMap$Entry* entry217;
    panda$core$Char8 $tmp221;
    panda$core$Char8 $tmp230;
    panda$core$String* tmp4231;
    panda$core$MutableString* $tmp198 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp198->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp198->refCount.value = 1;
    panda$core$MutableString$init($tmp198);
    result197 = $tmp198;
    panda$core$Char8$init$panda$core$UInt8(&$tmp200, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result197, $tmp200);
    separator201 = &$s202;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp203, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp205 = $tmp203.min.value;
    panda$core$Int64 i204 = { $tmp205 };
    int64_t $tmp207 = $tmp203.max.value;
    bool $tmp208 = $tmp203.inclusive.value;
    if ($tmp208) goto $l215; else goto $l216;
    $l215:;
    if ($tmp205 <= $tmp207) goto $l209; else goto $l211;
    $l216:;
    if ($tmp205 < $tmp207) goto $l209; else goto $l211;
    $l209:;
    {
        entry217 = self->contents[i204.value];
        $l218:;
        if (!((panda$core$Bit) { entry217 != NULL }).value) goto $l219;
        {
            panda$core$MutableString$append$panda$core$String(result197, separator201);
            if (((panda$core$Bit) { entry217->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result197, ((panda$core$Object*) entry217->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result197, &$s220);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp221, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result197, $tmp221);
            if (((panda$core$Bit) { entry217->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result197, entry217->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result197, &$s222);
            }
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry217));
                entry217 = entry217->next;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator201));
                separator201 = &$s223;
            }
        }
        goto $l218;
        $l219:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry217));
    }
    $l212:;
    int64_t $tmp225 = $tmp207 - i204.value;
    if ($tmp208) goto $l226; else goto $l227;
    $l226:;
    if ((uint64_t) $tmp225 >= 1) goto $l224; else goto $l211;
    $l227:;
    if ((uint64_t) $tmp225 > 1) goto $l224; else goto $l211;
    $l224:;
    i204.value += 1;
    goto $l209;
    $l211:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp230, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result197, $tmp230);
    {
        panda$core$String* $tmp232 = panda$core$MutableString$finish$R$panda$core$String(result197);
        tmp4231 = $tmp232;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator201));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result197));
        }
        return tmp4231;
    }
}
void panda$collections$HashMap$cleanup(panda$collections$HashMap* self) {
}

