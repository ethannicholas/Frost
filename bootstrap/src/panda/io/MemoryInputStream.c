#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Panda.h"


static panda$core$String $s1;
panda$io$MemoryInputStream$class_type panda$io$MemoryInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$MemoryInputStream$cleanup, panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$Int64 (*$fn9)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn14)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn20)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn26)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn32)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn38)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, -2754778238192978458, NULL };

void panda$io$MemoryInputStream$init$panda$collections$ImmutableArray$LTpanda$core$UInt8$GT(panda$io$MemoryInputStream* self, panda$collections$ImmutableArray* p_source) {
    self->data = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        self->data = ((panda$collections$ListView*) p_source);
    }
}
void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source) {
    panda$collections$ListView* utf82;
    panda$collections$Array* array4;
    panda$collections$Iterator* c$Iter11;
    panda$core$Char8 c23;
    self->data = NULL;
    self->index = ((panda$core$Int64) { 0 });
    panda$collections$ListView* $tmp3 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
    utf82 = $tmp3;
    panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaZAlloc(40);
    $tmp5->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5->refCount.value = 1;
    ITable* $tmp7 = ((panda$collections$CollectionView*) utf82)->$class->itable;
    while ($tmp7->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp7 = $tmp7->next;
    }
    $fn9 $tmp8 = $tmp7->methods[0];
    panda$core$Int64 $tmp10 = $tmp8(((panda$collections$CollectionView*) utf82));
    panda$collections$Array$init$panda$core$Int64($tmp5, $tmp10);
    array4 = $tmp5;
    {
        ITable* $tmp12 = ((panda$collections$Iterable*) utf82)->$class->itable;
        while ($tmp12->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp12 = $tmp12->next;
        }
        $fn14 $tmp13 = $tmp12->methods[0];
        panda$collections$Iterator* $tmp15 = $tmp13(((panda$collections$Iterable*) utf82));
        c$Iter11 = $tmp15;
        $l16:;
        ITable* $tmp18 = c$Iter11->$class->itable;
        while ($tmp18->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp18 = $tmp18->next;
        }
        $fn20 $tmp19 = $tmp18->methods[0];
        panda$core$Bit $tmp21 = $tmp19(c$Iter11);
        panda$core$Bit $tmp22 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp21);
        if (!$tmp22.value) goto $l17;
        {
            ITable* $tmp24 = c$Iter11->$class->itable;
            while ($tmp24->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp24 = $tmp24->next;
            }
            $fn26 $tmp25 = $tmp24->methods[1];
            panda$core$Object* $tmp27 = $tmp25(c$Iter11);
            c23 = ((panda$core$Char8$wrapper*) $tmp27)->value;
            panda$core$UInt8 $tmp28 = panda$core$Char8$convert$R$panda$core$UInt8(c23);
            panda$core$UInt8$wrapper* $tmp29;
            $tmp29 = (panda$core$UInt8$wrapper*) pandaZAlloc(13);
            $tmp29->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp29->refCount = 1;
            $tmp29->value = $tmp28;
            panda$collections$Array$add$panda$collections$Array$T(array4, ((panda$core$Object*) $tmp29));
        }
        goto $l16;
        $l17:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
    }
    {
        self->data = ((panda$collections$ListView*) array4);
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) utf82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) array4));
    }
}
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self) {
    panda$core$UInt8 result35;
    ITable* $tmp30 = ((panda$collections$CollectionView*) self->data)->$class->itable;
    while ($tmp30->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp30 = $tmp30->next;
    }
    $fn32 $tmp31 = $tmp30->methods[0];
    panda$core$Int64 $tmp33 = $tmp31(((panda$collections$CollectionView*) self->data));
    panda$core$Bit $tmp34 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, $tmp33);
    if ($tmp34.value) {
    {
        ITable* $tmp36 = self->data->$class->itable;
        while ($tmp36->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp36 = $tmp36->next;
        }
        $fn38 $tmp37 = $tmp36->methods[0];
        panda$core$Object* $tmp39 = $tmp37(self->data, self->index);
        result35 = ((panda$core$UInt8$wrapper*) $tmp39)->value;
        panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp40;
        return ((panda$core$UInt8$nullable) { result35, true });
    }
    }
    return ((panda$core$UInt8$nullable) { .nonnull = false });
}
void panda$io$MemoryInputStream$cleanup(panda$io$MemoryInputStream* self) {
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->data));
}

