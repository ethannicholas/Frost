#include "panda/collections/HashMap/EntryIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
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

panda$collections$HashMap$EntryIterator$class_type panda$collections$HashMap$EntryIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$HashMap$EntryIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit, panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT$shim} };



void panda$collections$HashMap$EntryIterator$init$panda$collections$HashMap$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self, panda$collections$HashMap* p_map) {
    self->entry = NULL;
    self->bucket = ((panda$core$Int64) { 0 });
    self->entry = NULL;
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_map));
        self->map = ((panda$collections$HashMap*) $tmp1);
    }
    $l2:;
    panda$core$Bit $tmp5 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    bool $tmp4 = $tmp5.value;
    if (!$tmp4) goto $l6;
    $tmp4 = ((panda$core$Bit) { p_map->contents[self->bucket.value] == NULL }).value;
    $l6:;
    panda$core$Bit $tmp7 = { $tmp4 };
    if (!$tmp7.value) goto $l3;
    {
        panda$core$Int64 $tmp8 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, ((panda$core$Int64) { 1 }));
        self->bucket = $tmp8;
    }
    goto $l2;
    $l3:;
    panda$core$Bit $tmp9 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, p_map->bucketCount);
    if ($tmp9.value) {
    {
        {
            panda$core$Object* $tmp10 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) p_map->contents[self->bucket.value]));
            self->entry = ((panda$collections$HashMap$Entry*) $tmp10);
        }
    }
    }
}
panda$core$Bit panda$collections$HashMap$EntryIterator$get_done$R$panda$core$Bit(panda$collections$HashMap$EntryIterator* self) {
    panda$core$Bit $tmp12 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
    bool $tmp11 = $tmp12.value;
    if (!$tmp11) goto $l13;
    $tmp11 = ((panda$core$Bit) { self->entry == NULL }).value;
    $l13:;
    panda$core$Bit $tmp14 = { $tmp11 };
    return $tmp14;
}
panda$collections$HashMap$Entry* panda$collections$HashMap$EntryIterator$next$R$panda$collections$HashMap$Entry$LTpanda$collections$HashMap$EntryIterator$K$Cpanda$collections$HashMap$EntryIterator$V$GT(panda$collections$HashMap$EntryIterator* self) {
    panda$collections$HashMap$Entry* result16;
    PANDA_ASSERT(((panda$core$Bit) { self->entry != NULL }).value);
    panda$core$Bit $tmp15 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
    PANDA_ASSERT($tmp15.value);
    panda$core$Object* $tmp17 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->entry));
    result16 = ((panda$collections$HashMap$Entry*) $tmp17);
    {
        panda$core$Object* $tmp18 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->entry->next));
        self->entry = ((panda$collections$HashMap$Entry*) $tmp18);
    }
    $l19:;
    if (!((panda$core$Bit) { self->entry == NULL }).value) goto $l20;
    {
        panda$core$Int64 $tmp21 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->bucket, ((panda$core$Int64) { 1 }));
        self->bucket = $tmp21;
        panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->bucket, self->map->bucketCount);
        if ($tmp22.value) {
        {
            goto $l20;
        }
        }
        {
            panda$core$Object* $tmp23 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) self->map->contents[self->bucket.value]));
            self->entry = ((panda$collections$HashMap$Entry*) $tmp23);
        }
    }
    goto $l19;
    $l20:;
    return result16;
}

