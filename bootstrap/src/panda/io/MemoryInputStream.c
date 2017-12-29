#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/ListView.h"
#include "panda/core/String.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


panda$io$MemoryInputStream$class_type panda$io$MemoryInputStream$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$Int64 (*$fn10)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn16)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn22)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn35)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn41)(panda$collections$ListView*, panda$core$Int64);


void panda$io$MemoryInputStream$init$panda$collections$ImmutableArray$LTpanda$core$UInt8$GT(panda$io$MemoryInputStream* self, panda$collections$ImmutableArray* p_source) {
    self->data = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        panda$core$Object* $tmp1 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) p_source)));
        self->data = ((panda$collections$ListView*) $tmp1);
    }
}
void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source) {
    panda$collections$ListView* utf82;
    panda$collections$Array* array5;
    panda$collections$Iterator* c$Iter13;
    panda$core$Char8 c25;
    self->data = NULL;
    self->index = ((panda$core$Int64) { 0 });
    panda$collections$ListView* $tmp3 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
    panda$core$Object* $tmp4 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp3));
    utf82 = ((panda$collections$ListView*) $tmp4);
    panda$collections$Array* $tmp6 = (panda$collections$Array*) pandaAlloc(41);
    $tmp6->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6->refCount.value = 1;
    ITable* $tmp8 = ((panda$collections$CollectionView*) utf82)->$class->itable;
    while ($tmp8->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp8 = $tmp8->next;
    }
    $fn10 $tmp9 = $tmp8->methods[0];
    panda$core$Int64 $tmp11 = $tmp9(((panda$collections$CollectionView*) utf82));
    panda$collections$Array$init$panda$core$Int64($tmp6, $tmp11);
    panda$core$Object* $tmp12 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp6));
    array5 = ((panda$collections$Array*) $tmp12);
    {
        ITable* $tmp14 = ((panda$collections$Iterable*) utf82)->$class->itable;
        while ($tmp14->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp14 = $tmp14->next;
        }
        $fn16 $tmp15 = $tmp14->methods[0];
        panda$collections$Iterator* $tmp17 = $tmp15(((panda$collections$Iterable*) utf82));
        c$Iter13 = $tmp17;
        $l18:;
        ITable* $tmp20 = c$Iter13->$class->itable;
        while ($tmp20->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp20 = $tmp20->next;
        }
        $fn22 $tmp21 = $tmp20->methods[0];
        panda$core$Bit $tmp23 = $tmp21(c$Iter13);
        panda$core$Bit $tmp24 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp23);
        if (!$tmp24.value) goto $l19;
        {
            ITable* $tmp26 = c$Iter13->$class->itable;
            while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp26 = $tmp26->next;
            }
            $fn28 $tmp27 = $tmp26->methods[1];
            panda$core$Object* $tmp29 = $tmp27(c$Iter13);
            c25 = ((panda$core$Char8$wrapper*) $tmp29)->value;
            panda$core$UInt8 $tmp30 = panda$core$Char8$convert$R$panda$core$UInt8(c25);
            panda$core$UInt8$wrapper* $tmp31;
            $tmp31 = (panda$core$UInt8$wrapper*) pandaAlloc(13);
            $tmp31->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp31->refCount = 1;
            $tmp31->value = $tmp30;
            panda$collections$Array$add$panda$collections$Array$T(array5, ((panda$core$Object*) $tmp31));
        }
        goto $l18;
        $l19:;
    }
    {
        panda$core$Object* $tmp32 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) ((panda$collections$ListView*) array5)));
        self->data = ((panda$collections$ListView*) $tmp32);
    }
}
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self) {
    panda$core$UInt8 result38;
    ITable* $tmp33 = ((panda$collections$CollectionView*) self->data)->$class->itable;
    while ($tmp33->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp33 = $tmp33->next;
    }
    $fn35 $tmp34 = $tmp33->methods[0];
    panda$core$Int64 $tmp36 = $tmp34(((panda$collections$CollectionView*) self->data));
    panda$core$Bit $tmp37 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, $tmp36);
    if ($tmp37.value) {
    {
        ITable* $tmp39 = self->data->$class->itable;
        while ($tmp39->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp39 = $tmp39->next;
        }
        $fn41 $tmp40 = $tmp39->methods[0];
        panda$core$Object* $tmp42 = $tmp40(self->data, self->index);
        result38 = ((panda$core$UInt8$wrapper*) $tmp42)->value;
        panda$core$Int64 $tmp43 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp43;
        return ((panda$core$UInt8$nullable) { result38, true });
    }
    }
    return ((panda$core$UInt8$nullable) { .nonnull = false });
}

