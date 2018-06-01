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
panda$core$Object* panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT$shim(panda$collections$ImmutableHashMap$EntryIterator* p0) {
    panda$collections$ImmutableHashMap$Entry* result = panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$ImmutableHashMap$EntryIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$range$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$ImmutableHashMap$EntryIterator$class_type panda$collections$ImmutableHashMap$EntryIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableHashMap$EntryIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$ImmutableHashMap$EntryIterator$cleanup, panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 48, 3455448759193744996, NULL };
static panda$core$String $s27 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 22, -2445868376336884971, NULL };

void panda$collections$ImmutableHashMap$EntryIterator$init$panda$collections$ImmutableHashMap$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self, panda$collections$ImmutableHashMap* p_map) {
    panda$collections$ImmutableHashMap$Entry* $tmp2;
    panda$collections$ImmutableHashMap* $tmp3;
    panda$collections$ImmutableHashMap* $tmp4;
    panda$collections$ImmutableHashMap$Entry* $tmp14;
    panda$collections$ImmutableHashMap$Entry* $tmp15;
    self->map = NULL;
    self->entry = NULL;
    self->bucket = ((panda$core$Int64) { 0 });
    $tmp2 = NULL;
    self->entry = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    {
        $tmp3 = self->map;
        $tmp4 = p_map;
        self->map = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    $l5:;
    panda$core$Bit $tmp9 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    bool $tmp8 = $tmp9.value;
    if (!$tmp8) goto $l10;
    $tmp8 = ((panda$core$Bit) { p_map->contents[self->bucket.value] == NULL }).value;
    $l10:;
    panda$core$Bit $tmp11 = { $tmp8 };
    bool $tmp7 = $tmp11.value;
    if (!$tmp7) goto $l6;
    {
        panda$core$Int64 $tmp12 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, ((panda$core$Int64) { 1 }));
        self->bucket = $tmp12;
    }
    goto $l5;
    $l6:;
    panda$core$Bit $tmp13 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    if ($tmp13.value) {
    {
        {
            $tmp14 = self->entry;
            $tmp15 = p_map->contents[self->bucket.value];
            self->entry = $tmp15;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
        }
    }
    }
}
panda$core$Bit panda$collections$ImmutableHashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableHashMap$EntryIterator* self) {
    panda$core$Bit $returnValue16;
    panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
    bool $tmp17 = $tmp18.value;
    if (!$tmp17) goto $l19;
    $tmp17 = ((panda$core$Bit) { self->entry == NULL }).value;
    $l19:;
    panda$core$Bit $tmp20 = { $tmp17 };
    $returnValue16 = $tmp20;
    return $returnValue16;
}
panda$collections$ImmutableHashMap$Entry* panda$collections$ImmutableHashMap$EntryIterator$next$R$panda$collections$ImmutableHashMap$Entry$LTpanda$collections$ImmutableHashMap$EntryIterator$K$Cpanda$collections$ImmutableHashMap$EntryIterator$V$GT(panda$collections$ImmutableHashMap$EntryIterator* self) {
    panda$collections$ImmutableHashMap$Entry* result32 = NULL;
    panda$collections$ImmutableHashMap$Entry* $tmp33;
    panda$collections$ImmutableHashMap$Entry* $tmp34;
    panda$collections$ImmutableHashMap$Entry* $tmp35;
    panda$collections$ImmutableHashMap$Entry* $tmp41;
    panda$collections$ImmutableHashMap$Entry* $tmp42;
    panda$collections$ImmutableHashMap$Entry* $returnValue43;
    panda$collections$ImmutableHashMap$Entry* $tmp44;
    int $tmp24;
    {
        if (((panda$core$Bit) { self->entry != NULL }).value) goto $l25; else goto $l26;
        $l26:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s27, (panda$core$Int64) { 55 });
        abort();
        $l25:;
        panda$core$Bit $tmp28 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
        if ($tmp28.value) goto $l29; else goto $l30;
        $l30:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s31, (panda$core$Int64) { 56 });
        abort();
        $l29:;
        $tmp33 = self->entry;
        result32 = $tmp33;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
        {
            $tmp34 = self->entry;
            $tmp35 = self->entry->next;
            self->entry = $tmp35;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
        }
        $l36:;
        bool $tmp38 = ((panda$core$Bit) { self->entry == NULL }).value;
        if (!$tmp38) goto $l37;
        {
            panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, ((panda$core$Int64) { 1 }));
            self->bucket = $tmp39;
            panda$core$Bit $tmp40 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
            if ($tmp40.value) {
            {
                goto $l37;
            }
            }
            {
                $tmp41 = self->entry;
                $tmp42 = self->map->contents[self->bucket.value];
                self->entry = $tmp42;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
            }
        }
        goto $l36;
        $l37:;
        $tmp44 = result32;
        $returnValue43 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        $tmp24 = 0;
        goto $l22;
        $l45:;
        return $returnValue43;
    }
    $l22:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result32));
    result32 = NULL;
    switch ($tmp24) {
        case 0: goto $l45;
    }
    $l47:;
    abort();
}
void panda$collections$ImmutableHashMap$EntryIterator$cleanup(panda$collections$ImmutableHashMap$EntryIterator* self) {
    int $tmp50;
    {
    }
    $tmp50 = -1;
    goto $l48;
    $l48:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp50) {
        case -1: goto $l51;
    }
    $l51:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->map));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->entry));
}

