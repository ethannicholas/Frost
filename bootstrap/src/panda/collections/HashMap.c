#include "panda/collections/HashMap.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
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

static panda$core$String $s1;
panda$collections$HashMap$class_type panda$collections$HashMap$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapWriter, { panda$collections$HashMap$convert$R$panda$core$String, panda$collections$HashMap$cleanup, panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit, panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim, panda$collections$HashMap$remove$panda$collections$HashMap$K, panda$collections$HashMap$clear, panda$collections$HashMap$incrementCount, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim, panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

typedef panda$collections$Iterator* (*$fn28)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn40)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn44)(panda$collections$MapView*, panda$core$Object*);
typedef panda$core$Int64 (*$fn49)(panda$collections$Key*);
typedef panda$core$Bit (*$fn70)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn84)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn98)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn110)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn118)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp2 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp2;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
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
void panda$collections$HashMap$init$panda$collections$MapView$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT(panda$collections$HashMap* self, panda$collections$MapView* p_map) {
    panda$collections$Iterator* k$Iter25;
    panda$collections$Key* k37;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$init(self);
    {
        ITable* $tmp26 = p_map->$class->itable;
        while ($tmp26->$class != (panda$core$Class*) &panda$collections$MapView$class) {
            $tmp26 = $tmp26->next;
        }
        $fn28 $tmp27 = $tmp26->methods[2];
        panda$collections$Iterator* $tmp29 = $tmp27(p_map);
        k$Iter25 = $tmp29;
        $l30:;
        ITable* $tmp32 = k$Iter25->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Bit $tmp35 = $tmp33(k$Iter25);
        panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        if (!$tmp36.value) goto $l31;
        {
            ITable* $tmp38 = k$Iter25->$class->itable;
            while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp38 = $tmp38->next;
            }
            $fn40 $tmp39 = $tmp38->methods[1];
            panda$core$Object* $tmp41 = $tmp39(k$Iter25);
            k37 = ((panda$collections$Key*) $tmp41);
            ITable* $tmp42 = p_map->$class->itable;
            while ($tmp42->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp42 = $tmp42->next;
            }
            $fn44 $tmp43 = $tmp42->methods[1];
            panda$core$Object* $tmp45 = $tmp43(p_map, ((panda$core$Object*) k37));
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k37, $tmp45);
        }
        goto $l30;
        $l31:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    }
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h46;
    memset(&h46, 0, sizeof(h46));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h46 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp47 = p_key->$class->itable;
        while ($tmp47->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp47 = $tmp47->next;
        }
        $fn49 $tmp48 = $tmp47->methods[0];
        panda$core$Int64 $tmp50 = $tmp48(p_key);
        h46 = $tmp50;
    }
    }
    panda$core$Int64 $tmp51 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h46, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp52 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h46, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp53 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp51, $tmp52);
    panda$core$Int64 $tmp54 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h46, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp55 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp53, $tmp54);
    panda$core$Int64 $tmp56 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h46, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp57 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp55, $tmp56);
    panda$core$Int64 $tmp58 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h46, $tmp57);
    h46 = $tmp58;
    panda$core$Int64 $tmp59 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp60 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h46, $tmp59);
    h46 = $tmp60;
    return h46;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index61;
    panda$collections$HashMap$Entry* e63;
    panda$core$Object* tmp173;
    panda$core$Object* tmp274;
    panda$core$Int64 $tmp62 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index61 = $tmp62;
    e63 = self->contents[index61.value];
    $l64:;
    bool $tmp66 = ((panda$core$Bit) { e63 != NULL }).value;
    if (!$tmp66) goto $l67;
    ITable* $tmp68 = ((panda$core$Equatable*) e63->key)->$class->itable;
    while ($tmp68->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp68 = $tmp68->next;
    }
    $fn70 $tmp69 = $tmp68->methods[1];
    panda$core$Bit $tmp71 = $tmp69(((panda$core$Equatable*) e63->key), ((panda$core$Object*) p_key));
    $tmp66 = $tmp71.value;
    $l67:;
    panda$core$Bit $tmp72 = { $tmp66 };
    if (!$tmp72.value) goto $l65;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e63));
            e63 = e63->next;
        }
    }
    goto $l64;
    $l65:;
    if (((panda$core$Bit) { e63 != NULL }).value) {
    {
        {
            tmp173 = e63->value;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e63));
            return tmp173;
        }
    }
    }
    else {
    {
        {
            tmp274 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e63));
            return tmp274;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e63));
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index75;
    panda$collections$HashMap$Entry* e77;
    panda$core$Bit tmp387;
    panda$core$Int64 $tmp76 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index75 = $tmp76;
    e77 = self->contents[index75.value];
    $l78:;
    bool $tmp80 = ((panda$core$Bit) { e77 != NULL }).value;
    if (!$tmp80) goto $l81;
    ITable* $tmp82 = ((panda$core$Equatable*) e77->key)->$class->itable;
    while ($tmp82->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp82 = $tmp82->next;
    }
    $fn84 $tmp83 = $tmp82->methods[1];
    panda$core$Bit $tmp85 = $tmp83(((panda$core$Equatable*) e77->key), ((panda$core$Object*) p_key));
    $tmp80 = $tmp85.value;
    $l81:;
    panda$core$Bit $tmp86 = { $tmp80 };
    if (!$tmp86.value) goto $l79;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e77));
            e77 = e77->next;
        }
    }
    goto $l78;
    $l79:;
    {
        tmp387 = ((panda$core$Bit) { e77 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e77));
        return tmp387;
    }
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index89;
    panda$collections$HashMap$Entry* e91;
    panda$collections$HashMap$Entry* old101;
    panda$core$Int64 $tmp88 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp88;
    panda$core$Int64 $tmp90 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index89 = $tmp90;
    e91 = self->contents[index89.value];
    $l92:;
    bool $tmp94 = ((panda$core$Bit) { e91 != NULL }).value;
    if (!$tmp94) goto $l95;
    ITable* $tmp96 = ((panda$core$Equatable*) e91->key)->$class->itable;
    while ($tmp96->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp96 = $tmp96->next;
    }
    $fn98 $tmp97 = $tmp96->methods[1];
    panda$core$Bit $tmp99 = $tmp97(((panda$core$Equatable*) e91->key), ((panda$core$Object*) p_key));
    $tmp94 = $tmp99.value;
    $l95:;
    panda$core$Bit $tmp100 = { $tmp94 };
    if (!$tmp100.value) goto $l93;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e91));
            e91 = e91->next;
        }
    }
    goto $l92;
    $l93:;
    if (((panda$core$Bit) { e91 == NULL }).value) {
    {
        old101 = self->contents[index89.value];
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e91));
            panda$collections$HashMap$Entry* $tmp102 = (panda$collections$HashMap$Entry*) pandaZAlloc(40);
            $tmp102->$class = (panda$core$Class*) &panda$collections$HashMap$Entry$class;
            $tmp102->refCount.value = 1;
            panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp102, p_key, p_value);
            e91 = $tmp102;
        }
        {
            e91->next = old101;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index89.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e91));
            self->contents[index89.value] = e91;
        }
        panda$collections$HashMap$incrementCount(self);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old101));
    }
    }
    else {
    {
        {
            e91->value = p_value;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e91));
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index105;
    panda$collections$HashMap$Entry* e107;
    panda$collections$HashMap$Entry* next115;
    panda$collections$HashMap$Entry* next120;
    panda$core$Int64 $tmp104 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp104;
    panda$core$Int64 $tmp106 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index105 = $tmp106;
    e107 = self->contents[index105.value];
    if (((panda$core$Bit) { e107 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e107));
            return;
        }
    }
    }
    ITable* $tmp108 = ((panda$core$Equatable*) e107->key)->$class->itable;
    while ($tmp108->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp108 = $tmp108->next;
    }
    $fn110 $tmp109 = $tmp108->methods[0];
    panda$core$Bit $tmp111 = $tmp109(((panda$core$Equatable*) e107->key), ((panda$core$Object*) p_key));
    if ($tmp111.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index105.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e107->next));
            self->contents[index105.value] = e107->next;
        }
        panda$core$Int64 $tmp112 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp112;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e107));
            return;
        }
    }
    }
    $l113:;
    while (true) {
    {
        next115 = e107->next;
        if (((panda$core$Bit) { next115 == NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next115));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e107));
                    return;
                }
            }
        }
        }
        ITable* $tmp116 = ((panda$core$Equatable*) next115->key)->$class->itable;
        while ($tmp116->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp116 = $tmp116->next;
        }
        $fn118 $tmp117 = $tmp116->methods[0];
        panda$core$Bit $tmp119 = $tmp117(((panda$core$Equatable*) next115->key), ((panda$core$Object*) p_key));
        if ($tmp119.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next115));
                goto $l114;
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e107));
            e107 = next115;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next115));
    }
    }
    $l114:;
    next120 = e107->next;
    PANDA_ASSERT(((panda$core$Bit) { next120 != NULL }).value);
    {
        e107->next = next120->next;
    }
    panda$core$Int64 $tmp121 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp121;
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next120));
    }
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp123;
    panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp122;
    self->_count = ((panda$core$Int64) { 0 });
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp123, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp125 = $tmp123.min.value;
    panda$core$Int64 i124 = { $tmp125 };
    int64_t $tmp127 = $tmp123.max.value;
    bool $tmp128 = $tmp123.inclusive.value;
    if ($tmp128) goto $l135; else goto $l136;
    $l135:;
    if ($tmp125 <= $tmp127) goto $l129; else goto $l131;
    $l136:;
    if ($tmp125 < $tmp127) goto $l129; else goto $l131;
    $l129:;
    {
        if (((panda$core$Bit) { self->contents[i124.value] != NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i124.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i124.value] = NULL;
            }
        }
        }
    }
    $l132:;
    int64_t $tmp138 = $tmp127 - i124.value;
    if ($tmp128) goto $l139; else goto $l140;
    $l139:;
    if ((uint64_t) $tmp138 >= 1) goto $l137; else goto $l131;
    $l140:;
    if ((uint64_t) $tmp138 > 1) goto $l137; else goto $l131;
    $l137:;
    i124.value += 1;
    goto $l129;
    $l131:;
    panda$core$Int64 $tmp143 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp144 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp143, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp144;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents147;
    panda$core$Int64 oldBucketCount148;
    panda$core$Range$LTpanda$core$Int64$GT $tmp150;
    panda$core$Range$LTpanda$core$Int64$GT $tmp171;
    panda$collections$HashMap$Entry* e185;
    panda$core$Int64 $tmp145 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp145;
    panda$core$Bit $tmp146 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp146.value) {
    {
        oldContents147 = self->contents;
        oldBucketCount148 = self->bucketCount;
        panda$core$Int64 $tmp149 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp149;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp150, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp152 = $tmp150.min.value;
        panda$core$Int64 i151 = { $tmp152 };
        int64_t $tmp154 = $tmp150.max.value;
        bool $tmp155 = $tmp150.inclusive.value;
        if ($tmp155) goto $l162; else goto $l163;
        $l162:;
        if ($tmp152 <= $tmp154) goto $l156; else goto $l158;
        $l163:;
        if ($tmp152 < $tmp154) goto $l156; else goto $l158;
        $l156:;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i151.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i151.value] = NULL;
            }
        }
        $l159:;
        int64_t $tmp165 = $tmp154 - i151.value;
        if ($tmp155) goto $l166; else goto $l167;
        $l166:;
        if ((uint64_t) $tmp165 >= 1) goto $l164; else goto $l158;
        $l167:;
        if ((uint64_t) $tmp165 > 1) goto $l164; else goto $l158;
        $l164:;
        i151.value += 1;
        goto $l156;
        $l158:;
        panda$core$Int64 $tmp170 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp170;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp171, ((panda$core$Int64) { 0 }), oldBucketCount148, ((panda$core$Bit) { false }));
        int64_t $tmp173 = $tmp171.min.value;
        panda$core$Int64 i172 = { $tmp173 };
        int64_t $tmp175 = $tmp171.max.value;
        bool $tmp176 = $tmp171.inclusive.value;
        if ($tmp176) goto $l183; else goto $l184;
        $l183:;
        if ($tmp173 <= $tmp175) goto $l177; else goto $l179;
        $l184:;
        if ($tmp173 < $tmp175) goto $l177; else goto $l179;
        $l177:;
        {
            e185 = oldContents147[i172.value];
            $l186:;
            if (!((panda$core$Bit) { e185 != NULL }).value) goto $l187;
            {
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e185->key, e185->value);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e185));
                    e185 = e185->next;
                }
            }
            goto $l186;
            $l187:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e185));
        }
        $l180:;
        int64_t $tmp189 = $tmp175 - i172.value;
        if ($tmp176) goto $l190; else goto $l191;
        $l190:;
        if ((uint64_t) $tmp189 >= 1) goto $l188; else goto $l179;
        $l191:;
        if ((uint64_t) $tmp189 > 1) goto $l188; else goto $l179;
        $l188:;
        i172.value += 1;
        goto $l177;
        $l179:;
        pandaFree(oldContents147);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp194 = (panda$collections$HashMap$KeyIterator*) pandaZAlloc(24);
    $tmp194->$class = (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class;
    $tmp194->refCount.value = 1;
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp194, self);
    return ((panda$collections$Iterator*) $tmp194);
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp196 = (panda$collections$HashMap$ValueIterator*) pandaZAlloc(24);
    $tmp196->$class = (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class;
    $tmp196->refCount.value = 1;
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp196, self);
    return ((panda$collections$Iterator*) $tmp196);
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
    panda$core$MutableString* result198;
    panda$core$Char8 $tmp201;
    panda$core$String* separator202;
    panda$core$Range$LTpanda$core$Int64$GT $tmp204;
    panda$collections$HashMap$Entry* entry218;
    panda$core$Char8 $tmp222;
    panda$core$Char8 $tmp231;
    panda$core$String* tmp4232;
    panda$core$MutableString* $tmp199 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp199->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp199->refCount.value = 1;
    panda$core$MutableString$init($tmp199);
    result198 = $tmp199;
    panda$core$Char8$init$panda$core$UInt8(&$tmp201, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result198, $tmp201);
    separator202 = &$s203;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp204, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp206 = $tmp204.min.value;
    panda$core$Int64 i205 = { $tmp206 };
    int64_t $tmp208 = $tmp204.max.value;
    bool $tmp209 = $tmp204.inclusive.value;
    if ($tmp209) goto $l216; else goto $l217;
    $l216:;
    if ($tmp206 <= $tmp208) goto $l210; else goto $l212;
    $l217:;
    if ($tmp206 < $tmp208) goto $l210; else goto $l212;
    $l210:;
    {
        entry218 = self->contents[i205.value];
        $l219:;
        if (!((panda$core$Bit) { entry218 != NULL }).value) goto $l220;
        {
            panda$core$MutableString$append$panda$core$String(result198, separator202);
            if (((panda$core$Bit) { entry218->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result198, ((panda$core$Object*) entry218->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result198, &$s221);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp222, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result198, $tmp222);
            if (((panda$core$Bit) { entry218->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result198, entry218->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result198, &$s223);
            }
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry218));
                entry218 = entry218->next;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator202));
                separator202 = &$s224;
            }
        }
        goto $l219;
        $l220:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry218));
    }
    $l213:;
    int64_t $tmp226 = $tmp208 - i205.value;
    if ($tmp209) goto $l227; else goto $l228;
    $l227:;
    if ((uint64_t) $tmp226 >= 1) goto $l225; else goto $l212;
    $l228:;
    if ((uint64_t) $tmp226 > 1) goto $l225; else goto $l212;
    $l225:;
    i205.value += 1;
    goto $l210;
    $l212:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp231, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result198, $tmp231);
    {
        panda$core$String* $tmp233 = panda$core$MutableString$finish$R$panda$core$String(result198);
        tmp4232 = $tmp233;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator202));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result198));
        }
        return tmp4232;
    }
}
void panda$collections$HashMap$cleanup(panda$collections$HashMap* self) {
}

