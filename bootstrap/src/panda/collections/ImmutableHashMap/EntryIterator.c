#include "panda/collections/ImmutableHashMap/EntryIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ImmutableHashMap/Entry.h"
#include "panda/collections/ImmutableHashMap.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
__attribute__((weak)) panda$core$Object* panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT$shim(panda$collections$ImmutableHashMap$EntryIterator* p0) {
    panda$collections$ImmutableHashMap$Entry* result = panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$ImmutableHashMap$EntryIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$ImmutableHashMap$EntryIterator$class_type panda$collections$ImmutableHashMap$EntryIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableHashMap$EntryIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$ImmutableHashMap$EntryIterator$cleanup, panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT$shim} };

typedef panda$core$Bit (*$fn24)(panda$collections$ImmutableHashMap$EntryIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 48, 3455448759193744996, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 232, 2109840765342763520, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };

void panda$collections$ImmutableHashMap$EntryIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self, panda$collections$ImmutableHashMap* p_map) {
    panda$core$Int64 $tmp2;
    panda$collections$ImmutableHashMap$Entry* $tmp3;
    panda$collections$ImmutableHashMap* $tmp4;
    panda$collections$ImmutableHashMap* $tmp5;
    panda$core$Int64 $tmp13;
    panda$collections$ImmutableHashMap$Entry* $tmp16;
    panda$collections$ImmutableHashMap$Entry* $tmp17;
    self->map = NULL;
    self->entry = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->bucket = $tmp2;
    $tmp3 = NULL;
    self->entry = $tmp3;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
    {
        $tmp4 = self->map;
        $tmp5 = p_map;
        self->map = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    $l6:;
    panda$core$Bit $tmp10 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    bool $tmp9 = $tmp10.value;
    if (!$tmp9) goto $l11;
    $tmp9 = ((panda$core$Bit) { p_map->contents[self->bucket.value] == NULL }).value;
    $l11:;
    panda$core$Bit $tmp12 = { $tmp9 };
    bool $tmp8 = $tmp12.value;
    if (!$tmp8) goto $l7;
    {
        panda$core$Int64$init$builtin_int64(&$tmp13, 1);
        panda$core$Int64 $tmp14 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, $tmp13);
        self->bucket = $tmp14;
    }
    goto $l6;
    $l7:;
    panda$core$Bit $tmp15 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    if ($tmp15.value) {
    {
        {
            $tmp16 = self->entry;
            $tmp17 = p_map->contents[self->bucket.value];
            self->entry = $tmp17;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
        }
    }
    }
}
panda$core$Bit panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$EntryIterator* self) {
    panda$core$Bit $returnValue18;
    panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
    bool $tmp19 = $tmp20.value;
    if (!$tmp19) goto $l21;
    $tmp19 = ((panda$core$Bit) { self->entry == NULL }).value;
    $l21:;
    panda$core$Bit $tmp22 = { $tmp19 };
    $returnValue18 = $tmp22;
    return $returnValue18;
}
panda$collections$ImmutableHashMap$Entry* panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self) {
    panda$collections$ImmutableHashMap$Entry* result41 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp42;
    panda$collections$ImmutableHashMap$Entry* $tmp43;
    panda$collections$ImmutableHashMap$Entry* $tmp44;
    panda$core$Int64 $tmp48;
    panda$collections$ImmutableHashMap$Entry* $tmp51;
    panda$collections$ImmutableHashMap$Entry* $tmp52;
    panda$collections$ImmutableHashMap$Entry* $returnValue53;
    panda$collections$ImmutableHashMap$Entry* $tmp54;
    panda$core$Bit $tmp25 = (($fn24) self->$class->vtable[2])(self);
    panda$core$Bit $tmp26 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp25);
    if ($tmp26.value) goto $l27; else goto $l28;
    $l28:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s29, (panda$core$Int64) { 54 }, &$s30);
    abort();
    $l27:;
    int $tmp33;
    {
        if (((panda$core$Bit) { self->entry != NULL }).value) goto $l34; else goto $l35;
        $l35:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s36, (panda$core$Int64) { 55 });
        abort();
        $l34:;
        panda$core$Bit $tmp37 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
        if ($tmp37.value) goto $l38; else goto $l39;
        $l39:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s40, (panda$core$Int64) { 56 });
        abort();
        $l38:;
        $tmp42 = self->entry;
        result41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        {
            $tmp43 = self->entry;
            $tmp44 = self->entry->next;
            self->entry = $tmp44;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        }
        $l45:;
        bool $tmp47 = ((panda$core$Bit) { self->entry == NULL }).value;
        if (!$tmp47) goto $l46;
        {
            panda$core$Int64$init$builtin_int64(&$tmp48, 1);
            panda$core$Int64 $tmp49 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, $tmp48);
            self->bucket = $tmp49;
            panda$core$Bit $tmp50 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
            if ($tmp50.value) {
            {
                goto $l46;
            }
            }
            {
                $tmp51 = self->entry;
                $tmp52 = self->map->contents[self->bucket.value];
                self->entry = $tmp52;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
            }
        }
        goto $l45;
        $l46:;
        $tmp54 = result41;
        $returnValue53 = $tmp54;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
        $tmp33 = 0;
        goto $l31;
        $l55:;
        return $returnValue53;
    }
    $l31:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result41));
    result41 = NULL;
    switch ($tmp33) {
        case 0: goto $l55;
    }
    $l57:;
    abort();
}
void panda$collections$ImmutableHashMap$EntryIterator$cleanup(panda$collections$ImmutableHashMap$EntryIterator* self) {
    int $tmp60;
    {
    }
    $tmp60 = -1;
    goto $l58;
    $l58:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp60) {
        case -1: goto $l61;
    }
    $l61:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->map));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->entry));
}

