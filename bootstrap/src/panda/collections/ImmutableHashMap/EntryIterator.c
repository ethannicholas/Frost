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

typedef panda$core$Bit (*$fn25)(panda$collections$ImmutableHashMap$EntryIterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 48, 3455448759193744996, NULL };
static panda$core$String $s30 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4b\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x56\x3e", 232, 2109840765342763520, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s62 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

void panda$collections$ImmutableHashMap$EntryIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self, panda$collections$ImmutableHashMap* p_map) {
    panda$core$Int64 $tmp2;
    panda$collections$ImmutableHashMap$Entry* $tmp3;
    panda$collections$ImmutableHashMap* $tmp4;
    panda$collections$ImmutableHashMap* $tmp5;
    panda$collections$ImmutableHashMap$EntryIterator* $tmp13;
    panda$core$Int64 $tmp14;
    panda$collections$ImmutableHashMap$Entry* $tmp17;
    panda$collections$ImmutableHashMap$Entry* $tmp18;
    self->map = NULL;
    self->entry = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->bucket = $tmp2;
    $tmp3 = NULL;
    self->entry = $tmp3;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp3));
    {
        $tmp4 = self->map;
        $tmp5 = p_map;
        self->map = $tmp5;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
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
        $tmp13 = self;
        panda$core$Int64$init$builtin_int64(&$tmp14, 1);
        panda$core$Int64 $tmp15 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp13->bucket, $tmp14);
        $tmp13->bucket = $tmp15;
    }
    goto $l6;
    $l7:;
    panda$core$Bit $tmp16 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    if ($tmp16.value) {
    {
        {
            $tmp17 = self->entry;
            $tmp18 = p_map->contents[self->bucket.value];
            self->entry = $tmp18;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
        }
    }
    }
}
panda$core$Bit panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$EntryIterator* self) {
    panda$core$Bit $returnValue19;
    panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
    bool $tmp20 = $tmp21.value;
    if (!$tmp20) goto $l22;
    $tmp20 = ((panda$core$Bit) { self->entry == NULL }).value;
    $l22:;
    panda$core$Bit $tmp23 = { $tmp20 };
    $returnValue19 = $tmp23;
    return $returnValue19;
}
panda$collections$ImmutableHashMap$Entry* panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self) {
    panda$collections$ImmutableHashMap$Entry* result42 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp43;
    panda$collections$ImmutableHashMap$Entry* $tmp44;
    panda$collections$ImmutableHashMap$Entry* $tmp45;
    panda$collections$ImmutableHashMap$EntryIterator* $tmp49;
    panda$core$Int64 $tmp50;
    panda$collections$ImmutableHashMap$Entry* $tmp53;
    panda$collections$ImmutableHashMap$Entry* $tmp54;
    panda$collections$ImmutableHashMap$Entry* $returnValue55;
    panda$collections$ImmutableHashMap$Entry* $tmp56;
    panda$core$Bit $tmp26 = (($fn25) self->$class->vtable[2])(self);
    panda$core$Bit $tmp27 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp26);
    if ($tmp27.value) goto $l28; else goto $l29;
    $l29:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s30, (panda$core$Int64) { 54 }, &$s31);
    abort();
    $l28:;
    int $tmp34;
    {
        if (((panda$core$Bit) { self->entry != NULL }).value) goto $l35; else goto $l36;
        $l36:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s37, (panda$core$Int64) { 55 });
        abort();
        $l35:;
        panda$core$Bit $tmp38 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
        if ($tmp38.value) goto $l39; else goto $l40;
        $l40:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s41, (panda$core$Int64) { 56 });
        abort();
        $l39:;
        $tmp43 = self->entry;
        result42 = $tmp43;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
        {
            $tmp44 = self->entry;
            $tmp45 = self->entry->next;
            self->entry = $tmp45;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
        }
        $l46:;
        bool $tmp48 = ((panda$core$Bit) { self->entry == NULL }).value;
        if (!$tmp48) goto $l47;
        {
            $tmp49 = self;
            panda$core$Int64$init$builtin_int64(&$tmp50, 1);
            panda$core$Int64 $tmp51 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp49->bucket, $tmp50);
            $tmp49->bucket = $tmp51;
            panda$core$Bit $tmp52 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
            if ($tmp52.value) {
            {
                goto $l47;
            }
            }
            {
                $tmp53 = self->entry;
                $tmp54 = self->map->contents[self->bucket.value];
                self->entry = $tmp54;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
            }
        }
        goto $l46;
        $l47:;
        $tmp56 = result42;
        $returnValue55 = $tmp56;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
        $tmp34 = 0;
        goto $l32;
        $l57:;
        return $returnValue55;
    }
    $l32:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result42));
    result42 = NULL;
    switch ($tmp34) {
        case 0: goto $l57;
    }
    $l59:;
    if (false) goto $l60; else goto $l61;
    $l61:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s62, (panda$core$Int64) { 54 }, &$s63);
    abort();
    $l60:;
    abort();
}
void panda$collections$ImmutableHashMap$EntryIterator$cleanup(panda$collections$ImmutableHashMap$EntryIterator* self) {
    int $tmp66;
    {
    }
    $tmp66 = -1;
    goto $l64;
    $l64:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp66) {
        case -1: goto $l67;
    }
    $l67:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->map));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->entry));
}

