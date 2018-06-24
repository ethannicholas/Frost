#include "panda/collections/HashMap/EntryIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/HashMap/Entry.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
__attribute__((weak)) panda$core$Object* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim(panda$collections$HashMap$EntryIterator* p0) {
    panda$collections$HashMap$Entry* result = panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(p0);

    return ((panda$core$Object*) result);
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$HashMap$EntryIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$HashMap$EntryIterator$class_type panda$collections$HashMap$EntryIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$EntryIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$HashMap$EntryIterator$cleanup, panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 39, -8022287705701263072, NULL };
static panda$core$String $s29 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x48\x61\x73\x68\x4d\x61\x70\x2e\x70\x61\x6e\x64\x61", 13, 1817269292024755533, NULL };

void panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self, panda$collections$HashMap* p_map) {
    panda$core$Int64 $tmp2;
    panda$collections$HashMap$Entry* $tmp3;
    panda$collections$HashMap* $tmp4;
    panda$collections$HashMap* $tmp5;
    panda$core$Int64 $tmp13;
    panda$collections$HashMap$Entry* $tmp16;
    panda$collections$HashMap$Entry* $tmp17;
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
panda$core$Bit panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$EntryIterator* self) {
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
panda$collections$HashMap$Entry* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self) {
    panda$collections$HashMap$Entry* result34 = NULL;
    panda$collections$HashMap$Entry* $tmp35;
    panda$collections$HashMap$Entry* $tmp36;
    panda$collections$HashMap$Entry* $tmp37;
    panda$core$Int64 $tmp41;
    panda$collections$HashMap$Entry* $tmp44;
    panda$collections$HashMap$Entry* $tmp45;
    panda$collections$HashMap$Entry* $returnValue46;
    panda$collections$HashMap$Entry* $tmp47;
    int $tmp26;
    {
        if (((panda$core$Bit) { self->entry != NULL }).value) goto $l27; else goto $l28;
        $l28:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s29, (panda$core$Int64) { 63 });
        abort();
        $l27:;
        panda$core$Bit $tmp30 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
        if ($tmp30.value) goto $l31; else goto $l32;
        $l32:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s33, (panda$core$Int64) { 64 });
        abort();
        $l31:;
        $tmp35 = self->entry;
        result34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        {
            $tmp36 = self->entry;
            $tmp37 = self->entry->next;
            self->entry = $tmp37;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp36));
        }
        $l38:;
        bool $tmp40 = ((panda$core$Bit) { self->entry == NULL }).value;
        if (!$tmp40) goto $l39;
        {
            panda$core$Int64$init$builtin_int64(&$tmp41, 1);
            panda$core$Int64 $tmp42 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, $tmp41);
            self->bucket = $tmp42;
            panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
            if ($tmp43.value) {
            {
                goto $l39;
            }
            }
            {
                $tmp44 = self->entry;
                $tmp45 = self->map->contents[self->bucket.value];
                self->entry = $tmp45;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
            }
        }
        goto $l38;
        $l39:;
        $tmp47 = result34;
        $returnValue46 = $tmp47;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
        $tmp26 = 0;
        goto $l24;
        $l48:;
        return $returnValue46;
    }
    $l24:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result34));
    result34 = NULL;
    switch ($tmp26) {
        case 0: goto $l48;
    }
    $l50:;
    abort();
}
void panda$collections$HashMap$EntryIterator$cleanup(panda$collections$HashMap$EntryIterator* self) {
    int $tmp53;
    {
    }
    $tmp53 = -1;
    goto $l51;
    $l51:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp53) {
        case -1: goto $l54;
    }
    $l54:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->map));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->entry));
}

