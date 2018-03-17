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
typedef panda$core$Int64 (*$fn69)(panda$collections$Key*);
typedef panda$core$Bit (*$fn90)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn104)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn118)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn129)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn137)(panda$core$Equatable*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70", 25, -7657594595818158330, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };

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
    panda$collections$Iterator* Iter$152$925;
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
        Iter$152$925 = $tmp29;
        $l30:;
        ITable* $tmp32 = Iter$152$925->$class->itable;
        while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp32 = $tmp32->next;
        }
        $fn34 $tmp33 = $tmp32->methods[0];
        panda$core$Bit $tmp35 = $tmp33(Iter$152$925);
        panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
        if (!$tmp36.value) goto $l31;
        {
            ITable* $tmp38 = Iter$152$925->$class->itable;
            while ($tmp38->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp38 = $tmp38->next;
            }
            $fn40 $tmp39 = $tmp38->methods[1];
            panda$core$Object* $tmp41 = $tmp39(Iter$152$925);
            k37 = ((panda$collections$Key*) $tmp41);
            ITable* $tmp42 = p_map->$class->itable;
            while ($tmp42->$class != (panda$core$Class*) &panda$collections$MapView$class) {
                $tmp42 = $tmp42->next;
            }
            $fn44 $tmp43 = $tmp42->methods[1];
            panda$core$Object* $tmp45 = $tmp43(p_map, ((panda$core$Object*) k37));
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, k37, $tmp45);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) k37));
        }
        goto $l30;
        $l31:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$152$925));
    }
}
void panda$collections$HashMap$cleanup(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp46;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp46, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp48 = $tmp46.min.value;
    panda$core$Int64 i47 = { $tmp48 };
    int64_t $tmp50 = $tmp46.max.value;
    bool $tmp51 = $tmp46.inclusive.value;
    if ($tmp51) goto $l58; else goto $l59;
    $l58:;
    if ($tmp48 <= $tmp50) goto $l52; else goto $l54;
    $l59:;
    if ($tmp48 < $tmp50) goto $l52; else goto $l54;
    $l52:;
    {
        if (((panda$core$Bit) { self->contents[i47.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i47.value]));
        }
        }
    }
    $l55:;
    int64_t $tmp61 = $tmp50 - i47.value;
    if ($tmp51) goto $l62; else goto $l63;
    $l62:;
    if ((uint64_t) $tmp61 >= 1) goto $l60; else goto $l54;
    $l63:;
    if ((uint64_t) $tmp61 > 1) goto $l60; else goto $l54;
    $l60:;
    i47.value += 1;
    goto $l52;
    $l54:;
    pandaFree(self->contents);
    panda$core$Object$cleanup(((panda$core$Object*) self));
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h66;
    memset(&h66, 0, sizeof(h66));
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h66 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp67 = p_key->$class->itable;
        while ($tmp67->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp67 = $tmp67->next;
        }
        $fn69 $tmp68 = $tmp67->methods[0];
        panda$core$Int64 $tmp70 = $tmp68(p_key);
        h66 = $tmp70;
    }
    }
    panda$core$Int64 $tmp71 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h66, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp72 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h66, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp73 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp71, $tmp72);
    panda$core$Int64 $tmp74 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h66, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp75 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp73, $tmp74);
    panda$core$Int64 $tmp76 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h66, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp77 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp75, $tmp76);
    panda$core$Int64 $tmp78 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h66, $tmp77);
    h66 = $tmp78;
    panda$core$Int64 $tmp79 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp80 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h66, $tmp79);
    h66 = $tmp80;
    return h66;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index81;
    panda$collections$HashMap$Entry* e83;
    panda$core$Object* tmp193;
    panda$core$Object* tmp294;
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
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e83));
            e83 = e83->next;
        }
    }
    goto $l84;
    $l85:;
    if (((panda$core$Bit) { e83 != NULL }).value) {
    {
        {
            tmp193 = e83->value;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e83));
            return tmp193;
        }
    }
    }
    else {
    {
        {
            tmp294 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e83));
            return tmp294;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e83));
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index95;
    panda$collections$HashMap$Entry* e97;
    panda$core$Bit tmp3107;
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
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e97));
            e97 = e97->next;
        }
    }
    goto $l98;
    $l99:;
    {
        tmp3107 = ((panda$core$Bit) { e97 != NULL });
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e97));
        return tmp3107;
    }
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index109;
    panda$collections$HashMap$Entry* e111;
    panda$collections$HashMap$Entry* old121;
    panda$core$Int64 $tmp108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp108;
    panda$core$Int64 $tmp110 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index109 = $tmp110;
    e111 = self->contents[index109.value];
    $l112:;
    bool $tmp114 = ((panda$core$Bit) { e111 != NULL }).value;
    if (!$tmp114) goto $l115;
    ITable* $tmp116 = ((panda$core$Equatable*) e111->key)->$class->itable;
    while ($tmp116->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp116 = $tmp116->next;
    }
    $fn118 $tmp117 = $tmp116->methods[1];
    panda$core$Bit $tmp119 = $tmp117(((panda$core$Equatable*) e111->key), ((panda$core$Object*) p_key));
    $tmp114 = $tmp119.value;
    $l115:;
    panda$core$Bit $tmp120 = { $tmp114 };
    if (!$tmp120.value) goto $l113;
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e111));
            e111 = e111->next;
        }
    }
    goto $l112;
    $l113:;
    if (((panda$core$Bit) { e111 == NULL }).value) {
    {
        old121 = self->contents[index109.value];
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e111));
            panda$collections$HashMap$Entry* $tmp122 = (panda$collections$HashMap$Entry*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$HashMap$Entry$class);
            panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp122, p_key, p_value);
            e111 = $tmp122;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e111->next));
            e111->next = old121;
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index109.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e111));
            self->contents[index109.value] = e111;
        }
        panda$collections$HashMap$incrementCount(self);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) old121));
    }
    }
    else {
    {
        {
            panda$core$Panda$unref$panda$core$Object(e111->value);
            e111->value = p_value;
        }
    }
    }
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e111));
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index124;
    panda$collections$HashMap$Entry* e126;
    panda$collections$HashMap$Entry* next134;
    panda$collections$HashMap$Entry* next139;
    panda$core$Int64 $tmp123 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp123;
    panda$core$Int64 $tmp125 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index124 = $tmp125;
    e126 = self->contents[index124.value];
    if (((panda$core$Bit) { e126 == NULL }).value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e126));
            return;
        }
    }
    }
    ITable* $tmp127 = ((panda$core$Equatable*) e126->key)->$class->itable;
    while ($tmp127->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp127 = $tmp127->next;
    }
    $fn129 $tmp128 = $tmp127->methods[0];
    panda$core$Bit $tmp130 = $tmp128(((panda$core$Equatable*) e126->key), ((panda$core$Object*) p_key));
    if ($tmp130.value) {
    {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[index124.value]));
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) e126->next));
            self->contents[index124.value] = e126->next;
        }
        panda$core$Int64 $tmp131 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp131;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e126));
            return;
        }
    }
    }
    $l132:;
    while (true) {
    {
        next134 = e126->next;
        if (((panda$core$Bit) { next134 == NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next134));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e126));
                    return;
                }
            }
        }
        }
        ITable* $tmp135 = ((panda$core$Equatable*) next134->key)->$class->itable;
        while ($tmp135->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp135 = $tmp135->next;
        }
        $fn137 $tmp136 = $tmp135->methods[0];
        panda$core$Bit $tmp138 = $tmp136(((panda$core$Equatable*) next134->key), ((panda$core$Object*) p_key));
        if ($tmp138.value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next134));
                goto $l133;
            }
        }
        }
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e126));
            e126 = next134;
        }
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next134));
    }
    }
    $l133:;
    next139 = e126->next;
    PANDA_ASSERT(((panda$core$Bit) { next139 != NULL }).value);
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e126->next));
        e126->next = next139->next;
    }
    panda$core$Int64 $tmp140 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp140;
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) next139));
    }
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp142;
    panda$core$Range$LTpanda$core$Int64$GT $tmp162;
    panda$core$Int64 $tmp141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp141;
    self->_count = ((panda$core$Int64) { 0 });
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
        if (((panda$core$Bit) { self->contents[i143.value] != NULL }).value) {
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i143.value]));
        }
        }
    }
    $l151:;
    int64_t $tmp157 = $tmp146 - i143.value;
    if ($tmp147) goto $l158; else goto $l159;
    $l158:;
    if ((uint64_t) $tmp157 >= 1) goto $l156; else goto $l150;
    $l159:;
    if ((uint64_t) $tmp157 > 1) goto $l156; else goto $l150;
    $l156:;
    i143.value += 1;
    goto $l148;
    $l150:;
    pandaFree(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp162, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp164 = $tmp162.min.value;
    panda$core$Int64 i163 = { $tmp164 };
    int64_t $tmp166 = $tmp162.max.value;
    bool $tmp167 = $tmp162.inclusive.value;
    if ($tmp167) goto $l174; else goto $l175;
    $l174:;
    if ($tmp164 <= $tmp166) goto $l168; else goto $l170;
    $l175:;
    if ($tmp164 < $tmp166) goto $l168; else goto $l170;
    $l168:;
    {
        if (((panda$core$Bit) { self->contents[i163.value] != NULL }).value) {
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i163.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i163.value] = NULL;
            }
        }
        }
    }
    $l171:;
    int64_t $tmp177 = $tmp166 - i163.value;
    if ($tmp167) goto $l178; else goto $l179;
    $l178:;
    if ((uint64_t) $tmp177 >= 1) goto $l176; else goto $l170;
    $l179:;
    if ((uint64_t) $tmp177 > 1) goto $l176; else goto $l170;
    $l176:;
    i163.value += 1;
    goto $l168;
    $l170:;
    panda$core$Int64 $tmp182 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp183 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp182, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp183;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents186;
    panda$core$Int64 oldBucketCount187;
    panda$core$Range$LTpanda$core$Int64$GT $tmp189;
    panda$core$Range$LTpanda$core$Int64$GT $tmp210;
    panda$collections$HashMap$Entry* e224;
    panda$core$Range$LTpanda$core$Int64$GT $tmp233;
    panda$core$Int64 $tmp184 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp184;
    panda$core$Bit $tmp185 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp185.value) {
    {
        oldContents186 = self->contents;
        oldBucketCount187 = self->bucketCount;
        panda$core$Int64 $tmp188 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp188;
        self->contents = ((panda$collections$HashMap$Entry**) pandaZAlloc(self->bucketCount.value * 40));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp189, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
        int64_t $tmp191 = $tmp189.min.value;
        panda$core$Int64 i190 = { $tmp191 };
        int64_t $tmp193 = $tmp189.max.value;
        bool $tmp194 = $tmp189.inclusive.value;
        if ($tmp194) goto $l201; else goto $l202;
        $l201:;
        if ($tmp191 <= $tmp193) goto $l195; else goto $l197;
        $l202:;
        if ($tmp191 < $tmp193) goto $l195; else goto $l197;
        $l195:;
        {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents[i190.value]));
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) NULL));
                self->contents[i190.value] = NULL;
            }
        }
        $l198:;
        int64_t $tmp204 = $tmp193 - i190.value;
        if ($tmp194) goto $l205; else goto $l206;
        $l205:;
        if ((uint64_t) $tmp204 >= 1) goto $l203; else goto $l197;
        $l206:;
        if ((uint64_t) $tmp204 > 1) goto $l203; else goto $l197;
        $l203:;
        i190.value += 1;
        goto $l195;
        $l197:;
        panda$core$Int64 $tmp209 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp209;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp210, ((panda$core$Int64) { 0 }), oldBucketCount187, ((panda$core$Bit) { false }));
        int64_t $tmp212 = $tmp210.min.value;
        panda$core$Int64 i211 = { $tmp212 };
        int64_t $tmp214 = $tmp210.max.value;
        bool $tmp215 = $tmp210.inclusive.value;
        if ($tmp215) goto $l222; else goto $l223;
        $l222:;
        if ($tmp212 <= $tmp214) goto $l216; else goto $l218;
        $l223:;
        if ($tmp212 < $tmp214) goto $l216; else goto $l218;
        $l216:;
        {
            e224 = oldContents186[i211.value];
            $l225:;
            if (!((panda$core$Bit) { e224 != NULL }).value) goto $l226;
            {
                panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self, e224->key, e224->value);
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e224));
                    e224 = e224->next;
                }
            }
            goto $l225;
            $l226:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e224));
        }
        $l219:;
        int64_t $tmp228 = $tmp214 - i211.value;
        if ($tmp215) goto $l229; else goto $l230;
        $l229:;
        if ((uint64_t) $tmp228 >= 1) goto $l227; else goto $l218;
        $l230:;
        if ((uint64_t) $tmp228 > 1) goto $l227; else goto $l218;
        $l227:;
        i211.value += 1;
        goto $l216;
        $l218:;
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp233, ((panda$core$Int64) { 0 }), oldBucketCount187, ((panda$core$Bit) { false }));
        int64_t $tmp235 = $tmp233.min.value;
        panda$core$Int64 i234 = { $tmp235 };
        int64_t $tmp237 = $tmp233.max.value;
        bool $tmp238 = $tmp233.inclusive.value;
        if ($tmp238) goto $l245; else goto $l246;
        $l245:;
        if ($tmp235 <= $tmp237) goto $l239; else goto $l241;
        $l246:;
        if ($tmp235 < $tmp237) goto $l239; else goto $l241;
        $l239:;
        {
            if (((panda$core$Bit) { oldContents186[i234.value] != NULL }).value) {
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) oldContents186[i234.value]));
            }
            }
        }
        $l242:;
        int64_t $tmp248 = $tmp237 - i234.value;
        if ($tmp238) goto $l249; else goto $l250;
        $l249:;
        if ((uint64_t) $tmp248 >= 1) goto $l247; else goto $l241;
        $l250:;
        if ((uint64_t) $tmp248 > 1) goto $l247; else goto $l241;
        $l247:;
        i234.value += 1;
        goto $l239;
        $l241:;
        pandaFree(oldContents186);
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp253 = (panda$collections$HashMap$KeyIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class);
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp253, self);
    return ((panda$collections$Iterator*) $tmp253);
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp254 = (panda$collections$HashMap$ValueIterator*) pandaObjectAlloc(24, (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class);
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp254, self);
    return ((panda$collections$Iterator*) $tmp254);
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
    panda$core$MutableString* result255;
    panda$core$Char8 $tmp257;
    panda$core$String* separator258;
    panda$core$Range$LTpanda$core$Int64$GT $tmp260;
    panda$collections$HashMap$Entry* entry274;
    panda$core$Char8 $tmp278;
    panda$core$Char8 $tmp287;
    panda$core$String* tmp4288;
    panda$core$MutableString* $tmp256 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp256);
    result255 = $tmp256;
    panda$core$Char8$init$panda$core$UInt8(&$tmp257, ((panda$core$UInt8) { 123 }));
    panda$core$MutableString$append$panda$core$Char8(result255, $tmp257);
    separator258 = &$s259;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp260, ((panda$core$Int64) { 0 }), self->bucketCount, ((panda$core$Bit) { false }));
    int64_t $tmp262 = $tmp260.min.value;
    panda$core$Int64 i261 = { $tmp262 };
    int64_t $tmp264 = $tmp260.max.value;
    bool $tmp265 = $tmp260.inclusive.value;
    if ($tmp265) goto $l272; else goto $l273;
    $l272:;
    if ($tmp262 <= $tmp264) goto $l266; else goto $l268;
    $l273:;
    if ($tmp262 < $tmp264) goto $l266; else goto $l268;
    $l266:;
    {
        entry274 = self->contents[i261.value];
        $l275:;
        if (!((panda$core$Bit) { entry274 != NULL }).value) goto $l276;
        {
            panda$core$MutableString$append$panda$core$String(result255, separator258);
            if (((panda$core$Bit) { entry274->key != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result255, ((panda$core$Object*) entry274->key));
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result255, &$s277);
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp278, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result255, $tmp278);
            if (((panda$core$Bit) { entry274->value != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$Object(result255, entry274->value);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result255, &$s279);
            }
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry274));
                entry274 = entry274->next;
            }
            {
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator258));
                separator258 = &$s280;
            }
        }
        goto $l275;
        $l276:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) entry274));
    }
    $l269:;
    int64_t $tmp282 = $tmp264 - i261.value;
    if ($tmp265) goto $l283; else goto $l284;
    $l283:;
    if ((uint64_t) $tmp282 >= 1) goto $l281; else goto $l268;
    $l284:;
    if ((uint64_t) $tmp282 > 1) goto $l281; else goto $l268;
    $l281:;
    i261.value += 1;
    goto $l266;
    $l268:;
    panda$core$Char8$init$panda$core$UInt8(&$tmp287, ((panda$core$UInt8) { 125 }));
    panda$core$MutableString$append$panda$core$Char8(result255, $tmp287);
    {
        panda$core$String* $tmp289 = panda$core$MutableString$finish$R$panda$core$String(result255);
        tmp4288 = $tmp289;
        {
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator258));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result255));
        }
        return tmp4288;
    }
}

