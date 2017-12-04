#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.h"
#include "panda/core/Bit.h"
#include "panda/collections/MapView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/MapWriter.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Map.h"
#include "panda/collections/Key.h"
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
panda$core$Object* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim(panda$collections$HashMap$EntryIterator* self) {
    panda$collections$HashMap$Entry* result = panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(self);
    return ((panda$core$Object*) result);
}
panda$core$Object* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim(panda$collections$HashMap$KeyIterator* self) {
    panda$collections$Key* result = panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(self);
    return ((panda$core$Object*) result);
}
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Object* result = panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(self);
    return result;
}


typedef panda$collections$Iterator* (*$fn37)(panda$collections$MapView*);
typedef panda$core$Bit (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn49)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn53)(panda$collections$MapView*, panda$core$Object*);
struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$HashMap$_panda$collections$MapWriter = { (panda$core$Class*) &panda$collections$MapWriter$class, NULL, { panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$collections$HashMap$_panda$collections$MapView = { (panda$core$Class*) &panda$collections$MapView$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapWriter, { panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$collections$HashMap$_panda$collections$MapView, { panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[0]; } panda$collections$HashMap$_panda$collections$Map = { (panda$core$Class*) &panda$collections$Map$class, (ITable*) &panda$collections$HashMap$_panda$core$Equatable, { } };

panda$collections$HashMap$class_type panda$collections$HashMap$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$_panda$collections$Map, { panda$collections$HashMap$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64, panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q$shim, panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit, panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V$shim, panda$collections$HashMap$remove$panda$collections$HashMap$K, panda$collections$HashMap$clear, panda$collections$HashMap$incrementCount, panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT$shim, panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT$shim, panda$collections$HashMap$get_count$R$panda$core$Int64, panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim, panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit$shim} };

typedef void (*$fn55)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn59)(panda$collections$Key*);
typedef panda$core$Bit (*$fn80)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn92)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn105)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn117)(panda$core$Equatable*, panda$core$Object*);
typedef panda$core$Bit (*$fn125)(panda$core$Equatable*, panda$core$Object*);
typedef void (*$fn220)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn240)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn265)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn266)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn268)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn270)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn271)(panda$core$MutableString*, panda$core$Object*);
typedef void (*$fn273)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn287)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn288)(panda$core$MutableString*);
panda$collections$HashMap$Entry$class_type panda$collections$HashMap$Entry$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$EntryIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim} };

panda$collections$HashMap$EntryIterator$class_type panda$collections$HashMap$EntryIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$EntryIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim} };

typedef panda$core$Bit (*$fn309)(panda$collections$HashMap$EntryIterator*);
typedef panda$core$Object* (*$fn311)(panda$collections$HashMap$EntryIterator*);
struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$KeyIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim} };

panda$collections$HashMap$KeyIterator$class_type panda$collections$HashMap$KeyIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$KeyIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K$shim} };

typedef panda$core$Bit (*$fn315)(panda$collections$HashMap$EntryIterator*);
typedef panda$core$Object* (*$fn317)(panda$collections$HashMap$EntryIterator*);
struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$ValueIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim} };

panda$collections$HashMap$ValueIterator$class_type panda$collections$HashMap$ValueIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$ValueIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V$shim} };


static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

void panda$collections$HashMap$init(panda$collections$HashMap* self) {
    panda$core$Range $tmp2;
    self->changeCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp1 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp1;
    self->_count = ((panda$core$Int64) { 0 });
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
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
            (($fn55) self->$class->vtable[5])(self, ((panda$core$Object*) k46), $tmp54);
        }
        goto $l39;
        $l40:;
    }
}
panda$core$Int64 panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 h56;
    if (((panda$core$Bit) { p_key == NULL }).value) {
    {
        h56 = ((panda$core$Int64) { 0 });
    }
    }
    else {
    {
        ITable* $tmp57 = p_key->$class->itable;
        while ($tmp57->$class != (panda$core$Class*) &panda$collections$Key$class) {
            $tmp57 = $tmp57->next;
        }
        $fn59 $tmp58 = $tmp57->methods[0];
        panda$core$Int64 $tmp60 = $tmp58(p_key);
        h56 = $tmp60;
    }
    }
    panda$core$Int64 $tmp61 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h56, ((panda$core$Int64) { 20 }));
    panda$core$Int64 $tmp62 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h56, ((panda$core$Int64) { 12 }));
    panda$core$Int64 $tmp63 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp61, $tmp62);
    panda$core$Int64 $tmp64 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h56, ((panda$core$Int64) { 7 }));
    panda$core$Int64 $tmp65 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp63, $tmp64);
    panda$core$Int64 $tmp66 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(h56, ((panda$core$Int64) { 4 }));
    panda$core$Int64 $tmp67 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64($tmp65, $tmp66);
    panda$core$Int64 $tmp68 = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(h56, $tmp67);
    h56 = $tmp68;
    panda$core$Int64 $tmp69 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp70 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(h56, $tmp69);
    h56 = $tmp70;
    return h56;
}
panda$core$Object* panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index71;
    panda$collections$HashMap$Entry* e73;
    panda$core$Int64 $tmp72 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index71 = $tmp72;
    e73 = self->contents[index71.value];
    $l74:;
    bool $tmp76 = ((panda$core$Bit) { e73 != NULL }).value;
    if (!$tmp76) goto $l77;
    ITable* $tmp78 = ((panda$core$Equatable*) e73->key)->$class->itable;
    while ($tmp78->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp78 = $tmp78->next;
    }
    $fn80 $tmp79 = $tmp78->methods[1];
    panda$core$Bit $tmp81 = $tmp79(((panda$core$Equatable*) e73->key), ((panda$core$Object*) p_key));
    $tmp76 = $tmp81.value;
    $l77:;
    panda$core$Bit $tmp82 = { $tmp76 };
    if (!$tmp82.value) goto $l75;
    {
        e73 = e73->next;
    }
    goto $l74;
    $l75:;
    if (((panda$core$Bit) { e73 != NULL }).value) {
    {
        return e73->value;
    }
    }
    else {
    {
        return NULL;
    }
    }
}
panda$core$Bit panda$collections$HashMap$contains$panda$collections$HashMap$K$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index83;
    panda$collections$HashMap$Entry* e85;
    panda$core$Int64 $tmp84 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index83 = $tmp84;
    e85 = self->contents[index83.value];
    $l86:;
    bool $tmp88 = ((panda$core$Bit) { e85 != NULL }).value;
    if (!$tmp88) goto $l89;
    ITable* $tmp90 = ((panda$core$Equatable*) e85->key)->$class->itable;
    while ($tmp90->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp90 = $tmp90->next;
    }
    $fn92 $tmp91 = $tmp90->methods[1];
    panda$core$Bit $tmp93 = $tmp91(((panda$core$Equatable*) e85->key), ((panda$core$Object*) p_key));
    $tmp88 = $tmp93.value;
    $l89:;
    panda$core$Bit $tmp94 = { $tmp88 };
    if (!$tmp94.value) goto $l87;
    {
        e85 = e85->next;
    }
    goto $l86;
    $l87:;
    return ((panda$core$Bit) { e85 != NULL });
}
void panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(panda$collections$HashMap* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    panda$core$Int64 index96;
    panda$collections$HashMap$Entry* e98;
    panda$collections$HashMap$Entry* old108;
    panda$core$Int64 $tmp95 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp95;
    panda$core$Int64 $tmp97 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index96 = $tmp97;
    e98 = self->contents[index96.value];
    $l99:;
    bool $tmp101 = ((panda$core$Bit) { e98 != NULL }).value;
    if (!$tmp101) goto $l102;
    ITable* $tmp103 = ((panda$core$Equatable*) e98->key)->$class->itable;
    while ($tmp103->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp103 = $tmp103->next;
    }
    $fn105 $tmp104 = $tmp103->methods[1];
    panda$core$Bit $tmp106 = $tmp104(((panda$core$Equatable*) e98->key), ((panda$core$Object*) p_key));
    $tmp101 = $tmp106.value;
    $l102:;
    panda$core$Bit $tmp107 = { $tmp101 };
    if (!$tmp107.value) goto $l100;
    {
        e98 = e98->next;
    }
    goto $l99;
    $l100:;
    if (((panda$core$Bit) { e98 == NULL }).value) {
    {
        old108 = self->contents[index96.value];
        panda$collections$HashMap$Entry* $tmp109 = (panda$collections$HashMap$Entry*) malloc(40);
        $tmp109->$class = (panda$core$Class*) &panda$collections$HashMap$Entry$class;
        $tmp109->refCount.value = 1;
        panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V($tmp109, p_key, p_value);
        e98 = $tmp109;
        e98->next = old108;
        self->contents[index96.value] = e98;
        panda$collections$HashMap$incrementCount(self);
    }
    }
    else {
    {
        e98->value = p_value;
    }
    }
}
void panda$collections$HashMap$remove$panda$collections$HashMap$K(panda$collections$HashMap* self, panda$collections$Key* p_key) {
    panda$core$Int64 index112;
    panda$collections$HashMap$Entry* e114;
    panda$collections$HashMap$Entry* next122;
    panda$collections$HashMap$Entry* next127;
    panda$core$Int64 $tmp111 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp111;
    panda$core$Int64 $tmp113 = panda$collections$HashMap$indexFor$panda$collections$HashMap$K$R$panda$core$Int64(self, p_key);
    index112 = $tmp113;
    e114 = self->contents[index112.value];
    if (((panda$core$Bit) { e114 == NULL }).value) {
    {
        return;
    }
    }
    ITable* $tmp115 = ((panda$core$Equatable*) e114->key)->$class->itable;
    while ($tmp115->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp115 = $tmp115->next;
    }
    $fn117 $tmp116 = $tmp115->methods[0];
    panda$core$Bit $tmp118 = $tmp116(((panda$core$Equatable*) e114->key), ((panda$core$Object*) p_key));
    if ($tmp118.value) {
    {
        self->contents[index112.value] = e114->next;
        panda$core$Int64 $tmp119 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
        self->_count = $tmp119;
        return;
    }
    }
    $l120:;
    while (true) {
    {
        next122 = e114->next;
        if (((panda$core$Bit) { next122 == NULL }).value) {
        {
            return;
        }
        }
        ITable* $tmp123 = ((panda$core$Equatable*) next122->key)->$class->itable;
        while ($tmp123->$class != (panda$core$Class*) &panda$core$Equatable$class) {
            $tmp123 = $tmp123->next;
        }
        $fn125 $tmp124 = $tmp123->methods[0];
        panda$core$Bit $tmp126 = $tmp124(((panda$core$Equatable*) next122->key), ((panda$core$Object*) p_key));
        if ($tmp126.value) {
        {
            goto $l121;
        }
        }
        e114 = next122;
    }
    }
    $l121:;
    next127 = e114->next;
    e114->next = next127->next;
    panda$core$Int64 $tmp128 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp128;
}
void panda$collections$HashMap$clear(panda$collections$HashMap* self) {
    panda$core$Range $tmp130;
    panda$core$Int64 $tmp129 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->changeCount, ((panda$core$Int64) { 1 }));
    self->changeCount = $tmp129;
    self->_count = ((panda$core$Int64) { 0 });
    free(self->contents);
    self->bucketCount = ((panda$core$Int64) { 16 });
    self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp130, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(self->bucketCount)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp132 = ((panda$core$Int64$wrapper*) $tmp130.start)->value.value;
    panda$core$Int64 i131 = { $tmp132 };
    int64_t $tmp134 = ((panda$core$Int64$wrapper*) $tmp130.end)->value.value;
    int64_t $tmp135 = $tmp130.step.value;
    bool $tmp136 = $tmp130.inclusive.value;
    bool $tmp143 = $tmp135 > 0;
    if ($tmp143) goto $l141; else goto $l142;
    $l141:;
    if ($tmp136) goto $l144; else goto $l145;
    $l144:;
    if ($tmp132 <= $tmp134) goto $l137; else goto $l139;
    $l145:;
    if ($tmp132 < $tmp134) goto $l137; else goto $l139;
    $l142:;
    if ($tmp136) goto $l146; else goto $l147;
    $l146:;
    if ($tmp132 >= $tmp134) goto $l137; else goto $l139;
    $l147:;
    if ($tmp132 > $tmp134) goto $l137; else goto $l139;
    $l137:;
    {
        self->contents[i131.value] = NULL;
    }
    $l140:;
    if ($tmp143) goto $l150; else goto $l151;
    $l150:;
    int64_t $tmp152 = $tmp134 - i131.value;
    if ($tmp136) goto $l153; else goto $l154;
    $l153:;
    if ($tmp152 >= $tmp135) goto $l149; else goto $l139;
    $l154:;
    if ($tmp152 > $tmp135) goto $l149; else goto $l139;
    $l151:;
    int64_t $tmp156 = i131.value - $tmp134;
    if ($tmp136) goto $l157; else goto $l158;
    $l157:;
    if ($tmp156 >= -$tmp135) goto $l149; else goto $l139;
    $l158:;
    if ($tmp156 > -$tmp135) goto $l149; else goto $l139;
    $l149:;
    i131.value += $tmp135;
    goto $l137;
    $l139:;
    panda$core$Int64 $tmp160 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 3 }));
    panda$core$Int64 $tmp161 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64($tmp160, ((panda$core$Int64) { 4 }));
    self->threshold = $tmp161;
}
void panda$collections$HashMap$incrementCount(panda$collections$HashMap* self) {
    panda$collections$HashMap$Entry** oldContents164;
    panda$core$Int64 oldBucketCount165;
    panda$core$Range $tmp167;
    panda$core$Range $tmp198;
    panda$collections$HashMap$Entry* e217;
    panda$core$Int64 $tmp162 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_count, ((panda$core$Int64) { 1 }));
    self->_count = $tmp162;
    panda$core$Bit $tmp163 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->_count, self->threshold);
    if ($tmp163.value) {
    {
        oldContents164 = self->contents;
        oldBucketCount165 = self->bucketCount;
        panda$core$Int64 $tmp166 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->bucketCount, ((panda$core$Int64) { 2 }));
        self->bucketCount = $tmp166;
        self->contents = ((panda$collections$HashMap$Entry**) malloc(self->bucketCount.value * 40));
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp167, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(self->bucketCount)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp169 = ((panda$core$Int64$wrapper*) $tmp167.start)->value.value;
        panda$core$Int64 i168 = { $tmp169 };
        int64_t $tmp171 = ((panda$core$Int64$wrapper*) $tmp167.end)->value.value;
        int64_t $tmp172 = $tmp167.step.value;
        bool $tmp173 = $tmp167.inclusive.value;
        bool $tmp180 = $tmp172 > 0;
        if ($tmp180) goto $l178; else goto $l179;
        $l178:;
        if ($tmp173) goto $l181; else goto $l182;
        $l181:;
        if ($tmp169 <= $tmp171) goto $l174; else goto $l176;
        $l182:;
        if ($tmp169 < $tmp171) goto $l174; else goto $l176;
        $l179:;
        if ($tmp173) goto $l183; else goto $l184;
        $l183:;
        if ($tmp169 >= $tmp171) goto $l174; else goto $l176;
        $l184:;
        if ($tmp169 > $tmp171) goto $l174; else goto $l176;
        $l174:;
        {
            self->contents[i168.value] = NULL;
        }
        $l177:;
        if ($tmp180) goto $l187; else goto $l188;
        $l187:;
        int64_t $tmp189 = $tmp171 - i168.value;
        if ($tmp173) goto $l190; else goto $l191;
        $l190:;
        if ($tmp189 >= $tmp172) goto $l186; else goto $l176;
        $l191:;
        if ($tmp189 > $tmp172) goto $l186; else goto $l176;
        $l188:;
        int64_t $tmp193 = i168.value - $tmp171;
        if ($tmp173) goto $l194; else goto $l195;
        $l194:;
        if ($tmp193 >= -$tmp172) goto $l186; else goto $l176;
        $l195:;
        if ($tmp193 > -$tmp172) goto $l186; else goto $l176;
        $l186:;
        i168.value += $tmp172;
        goto $l174;
        $l176:;
        panda$core$Int64 $tmp197 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->threshold, ((panda$core$Int64) { 2 }));
        self->threshold = $tmp197;
        self->_count = ((panda$core$Int64) { 0 });
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp198, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(oldBucketCount165)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp200 = ((panda$core$Int64$wrapper*) $tmp198.start)->value.value;
        panda$core$Int64 i199 = { $tmp200 };
        int64_t $tmp202 = ((panda$core$Int64$wrapper*) $tmp198.end)->value.value;
        int64_t $tmp203 = $tmp198.step.value;
        bool $tmp204 = $tmp198.inclusive.value;
        bool $tmp211 = $tmp203 > 0;
        if ($tmp211) goto $l209; else goto $l210;
        $l209:;
        if ($tmp204) goto $l212; else goto $l213;
        $l212:;
        if ($tmp200 <= $tmp202) goto $l205; else goto $l207;
        $l213:;
        if ($tmp200 < $tmp202) goto $l205; else goto $l207;
        $l210:;
        if ($tmp204) goto $l214; else goto $l215;
        $l214:;
        if ($tmp200 >= $tmp202) goto $l205; else goto $l207;
        $l215:;
        if ($tmp200 > $tmp202) goto $l205; else goto $l207;
        $l205:;
        {
            e217 = oldContents164[i199.value];
            $l218:;
            if (!((panda$core$Bit) { e217 != NULL }).value) goto $l219;
            {
                (($fn220) self->$class->vtable[5])(self, ((panda$core$Object*) e217->key), e217->value);
                e217 = e217->next;
            }
            goto $l218;
            $l219:;
        }
        $l208:;
        if ($tmp211) goto $l222; else goto $l223;
        $l222:;
        int64_t $tmp224 = $tmp202 - i199.value;
        if ($tmp204) goto $l225; else goto $l226;
        $l225:;
        if ($tmp224 >= $tmp203) goto $l221; else goto $l207;
        $l226:;
        if ($tmp224 > $tmp203) goto $l221; else goto $l207;
        $l223:;
        int64_t $tmp228 = i199.value - $tmp202;
        if ($tmp204) goto $l229; else goto $l230;
        $l229:;
        if ($tmp228 >= -$tmp203) goto $l221; else goto $l207;
        $l230:;
        if ($tmp228 > -$tmp203) goto $l221; else goto $l207;
        $l221:;
        i199.value += $tmp203;
        goto $l205;
        $l207:;
    }
    }
}
panda$collections$Iterator* panda$collections$HashMap$keys$R$panda$collections$Iterator$LTpanda$collections$HashMap$K$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$KeyIterator* $tmp232 = (panda$collections$HashMap$KeyIterator*) malloc(24);
    $tmp232->$class = (panda$core$Class*) &panda$collections$HashMap$KeyIterator$class;
    $tmp232->refCount.value = 1;
    panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT($tmp232, self);
    return ((panda$collections$Iterator*) $tmp232);
}
panda$collections$Iterator* panda$collections$HashMap$values$R$panda$collections$Iterator$LTpanda$collections$HashMap$V$GT(panda$collections$HashMap* self) {
    panda$collections$HashMap$ValueIterator* $tmp234 = (panda$collections$HashMap$ValueIterator*) malloc(24);
    $tmp234->$class = (panda$core$Class*) &panda$collections$HashMap$ValueIterator$class;
    $tmp234->refCount.value = 1;
    panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT($tmp234, self);
    return ((panda$collections$Iterator*) $tmp234);
}
panda$core$Int64 panda$collections$HashMap$get_count$R$panda$core$Int64(panda$collections$HashMap* self) {
    return self->_count;
}
panda$core$Bit panda$collections$HashMap$$EQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Map* p_other) {
}
panda$core$Bit panda$collections$HashMap$$NEQ$panda$collections$Map$LTpanda$collections$HashMap$K$Cpanda$collections$HashMap$V$GT$R$panda$core$Bit(panda$collections$HashMap* self, panda$collections$Map* p_other) {
}
panda$core$String* panda$collections$HashMap$convert$R$panda$core$String(panda$collections$HashMap* self) {
    panda$core$MutableString* result236;
    panda$core$String* separator241;
    panda$core$Range $tmp243;
    panda$collections$HashMap$Entry* entry262;
    panda$core$MutableString* $tmp237 = (panda$core$MutableString*) malloc(40);
    $tmp237->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp237->refCount.value = 1;
    panda$core$MutableString$init($tmp237);
    result236 = $tmp237;
    (($fn240) result236->$class->vtable[3])(result236, &$s239);
    separator241 = &$s242;
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp243, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64(self->bucketCount)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp245 = ((panda$core$Int64$wrapper*) $tmp243.start)->value.value;
    panda$core$Int64 i244 = { $tmp245 };
    int64_t $tmp247 = ((panda$core$Int64$wrapper*) $tmp243.end)->value.value;
    int64_t $tmp248 = $tmp243.step.value;
    bool $tmp249 = $tmp243.inclusive.value;
    bool $tmp256 = $tmp248 > 0;
    if ($tmp256) goto $l254; else goto $l255;
    $l254:;
    if ($tmp249) goto $l257; else goto $l258;
    $l257:;
    if ($tmp245 <= $tmp247) goto $l250; else goto $l252;
    $l258:;
    if ($tmp245 < $tmp247) goto $l250; else goto $l252;
    $l255:;
    if ($tmp249) goto $l259; else goto $l260;
    $l259:;
    if ($tmp245 >= $tmp247) goto $l250; else goto $l252;
    $l260:;
    if ($tmp245 > $tmp247) goto $l250; else goto $l252;
    $l250:;
    {
        entry262 = self->contents[i244.value];
        $l263:;
        if (!((panda$core$Bit) { entry262 != NULL }).value) goto $l264;
        {
            (($fn265) result236->$class->vtable[3])(result236, separator241);
            if (((panda$core$Bit) { entry262->key != NULL }).value) {
            {
                (($fn266) result236->$class->vtable[5])(result236, ((panda$core$Object*) entry262->key));
            }
            }
            else {
            {
                (($fn268) result236->$class->vtable[3])(result236, &$s267);
            }
            }
            (($fn270) result236->$class->vtable[3])(result236, &$s269);
            if (((panda$core$Bit) { entry262->value != NULL }).value) {
            {
                (($fn271) result236->$class->vtable[5])(result236, entry262->value);
            }
            }
            else {
            {
                (($fn273) result236->$class->vtable[3])(result236, &$s272);
            }
            }
            entry262 = entry262->next;
            separator241 = &$s274;
        }
        goto $l263;
        $l264:;
    }
    $l253:;
    if ($tmp256) goto $l276; else goto $l277;
    $l276:;
    int64_t $tmp278 = $tmp247 - i244.value;
    if ($tmp249) goto $l279; else goto $l280;
    $l279:;
    if ($tmp278 >= $tmp248) goto $l275; else goto $l252;
    $l280:;
    if ($tmp278 > $tmp248) goto $l275; else goto $l252;
    $l277:;
    int64_t $tmp282 = i244.value - $tmp247;
    if ($tmp249) goto $l283; else goto $l284;
    $l283:;
    if ($tmp282 >= -$tmp248) goto $l275; else goto $l252;
    $l284:;
    if ($tmp282 > -$tmp248) goto $l275; else goto $l252;
    $l275:;
    i244.value += $tmp248;
    goto $l250;
    $l252:;
    (($fn287) result236->$class->vtable[3])(result236, &$s286);
    panda$core$String* $tmp289 = (($fn288) result236->$class->vtable[0])(result236);
    return $tmp289;
}
void panda$collections$HashMap$Entry$init$panda$collections$HashMap$Entry$K$panda$collections$HashMap$Entry$V(panda$collections$HashMap$Entry* self, panda$collections$Key* p_key, panda$core$Object* p_value) {
    self->key = p_key;
    self->value = p_value;
}
void panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self, panda$collections$HashMap* p_map) {
    self->bucket = ((panda$core$Int64) { 0 });
    self->entry = NULL;
    self->map = p_map;
    $l290:;
    panda$core$Bit $tmp293 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    bool $tmp292 = $tmp293.value;
    if (!$tmp292) goto $l294;
    $tmp292 = ((panda$core$Bit) { p_map->contents[self->bucket.value] == NULL }).value;
    $l294:;
    panda$core$Bit $tmp295 = { $tmp292 };
    if (!$tmp295.value) goto $l291;
    {
        panda$core$Int64 $tmp296 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, ((panda$core$Int64) { 1 }));
        self->bucket = $tmp296;
    }
    goto $l290;
    $l291:;
    panda$core$Bit $tmp297 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    if ($tmp297.value) {
    {
        self->entry = p_map->contents[self->bucket.value];
    }
    }
}
panda$core$Bit panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$EntryIterator* self) {
    panda$core$Bit $tmp299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
    bool $tmp298 = $tmp299.value;
    if (!$tmp298) goto $l300;
    $tmp298 = ((panda$core$Bit) { self->entry == NULL }).value;
    $l300:;
    panda$core$Bit $tmp301 = { $tmp298 };
    return $tmp301;
}
panda$collections$HashMap$Entry* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self) {
    panda$collections$HashMap$Entry* result302;
    result302 = self->entry;
    self->entry = self->entry->next;
    $l303:;
    if (!((panda$core$Bit) { self->entry == NULL }).value) goto $l304;
    {
        panda$core$Int64 $tmp305 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, ((panda$core$Int64) { 1 }));
        self->bucket = $tmp305;
        panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
        if ($tmp306.value) {
        {
            goto $l304;
        }
        }
        self->entry = self->map->contents[self->bucket.value];
    }
    goto $l303;
    $l304:;
    return result302;
}
void panda$collections$HashMap$KeyIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$KeyIterator$K$Cpanda$collections$HashMap$KeyIterator$V$GT(panda$collections$HashMap$KeyIterator* self, panda$collections$HashMap* p_map) {
    panda$collections$HashMap$EntryIterator* $tmp307 = (panda$collections$HashMap$EntryIterator*) malloc(40);
    $tmp307->$class = (panda$core$Class*) &panda$collections$HashMap$EntryIterator$class;
    $tmp307->refCount.value = 1;
    panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT($tmp307, p_map);
    self->base = $tmp307;
}
panda$core$Bit panda$collections$HashMap$KeyIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$KeyIterator* self) {
    panda$core$Bit $tmp310 = (($fn309) self->base->$class->vtable[2])(self->base);
    return $tmp310;
}
panda$collections$Key* panda$collections$HashMap$KeyIterator$next$R$panda$collections$HashMap$KeyIterator$K(panda$collections$HashMap$KeyIterator* self) {
    panda$core$Object* $tmp312 = (($fn311) self->base->$class->vtable[3])(self->base);
    return ((panda$collections$HashMap$Entry*) $tmp312)->key;
}
void panda$collections$HashMap$ValueIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$ValueIterator$K$Cpanda$collections$HashMap$ValueIterator$V$GT(panda$collections$HashMap$ValueIterator* self, panda$collections$HashMap* p_map) {
    panda$collections$HashMap$EntryIterator* $tmp313 = (panda$collections$HashMap$EntryIterator*) malloc(40);
    $tmp313->$class = (panda$core$Class*) &panda$collections$HashMap$EntryIterator$class;
    $tmp313->refCount.value = 1;
    panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT($tmp313, p_map);
    self->base = $tmp313;
}
panda$core$Bit panda$collections$HashMap$ValueIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Bit $tmp316 = (($fn315) self->base->$class->vtable[2])(self->base);
    return $tmp316;
}
panda$core$Object* panda$collections$HashMap$ValueIterator$next$R$panda$collections$HashMap$ValueIterator$V(panda$collections$HashMap$ValueIterator* self) {
    panda$core$Object* $tmp318 = (($fn317) self->base->$class->vtable[3])(self->base);
    return ((panda$collections$HashMap$Entry*) $tmp318)->value;
}

