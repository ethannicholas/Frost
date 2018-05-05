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
panda$core$Object* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim(panda$collections$HashMap$EntryIterator* self) {
    panda$collections$HashMap$Entry* result = panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(self);
    return ((panda$core$Object*) result);
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$HashMap$EntryIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim} };

static panda$core$String $s1;
panda$collections$HashMap$EntryIterator$class_type panda$collections$HashMap$EntryIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$EntryIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$HashMap$EntryIterator$cleanup, panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 39, -8022287705701263072, NULL };

void panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self, panda$collections$HashMap* p_map) {
    self->map = NULL;
    self->entry = NULL;
    self->bucket = ((panda$core$Int64) { 0 });
    panda$collections$HashMap$Entry* $tmp2 = NULL;
    self->entry = $tmp2;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2));
    {
        panda$collections$HashMap* $tmp3 = self->map;
        panda$collections$HashMap* $tmp4 = p_map;
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
            panda$collections$HashMap$Entry* $tmp14 = self->entry;
            panda$collections$HashMap$Entry* $tmp15 = p_map->contents[self->bucket.value];
            self->entry = $tmp15;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp14));
        }
    }
    }
}
panda$core$Bit panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$EntryIterator* self) {
    panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
    bool $tmp17 = $tmp18.value;
    if (!$tmp17) goto $l19;
    $tmp17 = ((panda$core$Bit) { self->entry == NULL }).value;
    $l19:;
    panda$core$Bit $tmp20 = { $tmp17 };
    panda$core$Bit $tmp16 = $tmp20;
    return $tmp16;
}
panda$collections$HashMap$Entry* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self) {
    panda$collections$HashMap$Entry* result22;
    panda$collections$HashMap$Entry* tmp633;
    PANDA_ASSERT(((panda$core$Bit) { self->entry != NULL }).value);
    panda$core$Bit $tmp21 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
    PANDA_ASSERT($tmp21.value);
    panda$collections$HashMap$Entry* $tmp23 = self->entry;
    result22 = $tmp23;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
    {
        panda$collections$HashMap$Entry* $tmp24 = self->entry;
        panda$collections$HashMap$Entry* $tmp25 = self->entry->next;
        self->entry = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
    }
    $l26:;
    bool $tmp28 = ((panda$core$Bit) { self->entry == NULL }).value;
    if (!$tmp28) goto $l27;
    {
        panda$core$Int64 $tmp29 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, ((panda$core$Int64) { 1 }));
        self->bucket = $tmp29;
        panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
        if ($tmp30.value) {
        {
            goto $l27;
        }
        }
        {
            panda$collections$HashMap$Entry* $tmp31 = self->entry;
            panda$collections$HashMap$Entry* $tmp32 = self->map->contents[self->bucket.value];
            self->entry = $tmp32;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp31));
        }
    }
    goto $l26;
    $l27:;
    {
        panda$collections$HashMap$Entry* $tmp34 = result22;
        tmp633 = $tmp34;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result22));
        panda$collections$HashMap$Entry* $tmp35 = tmp633;
        return $tmp35;
    }
}
void panda$collections$HashMap$EntryIterator$cleanup(panda$collections$HashMap$EntryIterator* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->map));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->entry));
}

