#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/Object.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Int64.h"
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

typedef panda$core$Int64 (*$fn8)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn13)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn19)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn25)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn31)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn37)(panda$collections$ListView*, panda$core$Int64);


void panda$io$MemoryInputStream$init$panda$collections$ImmutableArray$LTpanda$core$UInt8$GT(panda$io$MemoryInputStream* self, panda$collections$ImmutableArray* p_source) {
    self->index = ((panda$core$Int64) { 0 });
    self->data = ((panda$collections$ListView*) p_source);
}
void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source) {
    panda$collections$ListView* utf81;
    panda$collections$Array* array3;
    panda$collections$Iterator* c$Iter10;
    panda$core$Char8 c22;
    self->index = ((panda$core$Int64) { 0 });
    panda$collections$ListView* $tmp2 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
    utf81 = $tmp2;
    panda$collections$Array* $tmp4 = (panda$collections$Array*) malloc(40);
    $tmp4->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4->refCount.value = 1;
    ITable* $tmp6 = ((panda$collections$CollectionView*) utf81)->$class->itable;
    while ($tmp6->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp6 = $tmp6->next;
    }
    $fn8 $tmp7 = $tmp6->methods[0];
    panda$core$Int64 $tmp9 = $tmp7(((panda$collections$CollectionView*) utf81));
    panda$collections$Array$init$panda$core$Int64($tmp4, $tmp9);
    array3 = $tmp4;
    {
        ITable* $tmp11 = ((panda$collections$Iterable*) utf81)->$class->itable;
        while ($tmp11->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp11 = $tmp11->next;
        }
        $fn13 $tmp12 = $tmp11->methods[0];
        panda$collections$Iterator* $tmp14 = $tmp12(((panda$collections$Iterable*) utf81));
        c$Iter10 = $tmp14;
        $l15:;
        ITable* $tmp17 = c$Iter10->$class->itable;
        while ($tmp17->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp17 = $tmp17->next;
        }
        $fn19 $tmp18 = $tmp17->methods[0];
        panda$core$Bit $tmp20 = $tmp18(c$Iter10);
        panda$core$Bit $tmp21 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp20);
        if (!$tmp21.value) goto $l16;
        {
            ITable* $tmp23 = c$Iter10->$class->itable;
            while ($tmp23->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp23 = $tmp23->next;
            }
            $fn25 $tmp24 = $tmp23->methods[1];
            panda$core$Object* $tmp26 = $tmp24(c$Iter10);
            c22 = ((panda$core$Char8$wrapper*) $tmp26)->value;
            panda$core$UInt8 $tmp27 = panda$core$Char8$convert$R$panda$core$UInt8(c22);
            panda$core$UInt8$wrapper* $tmp28;
            $tmp28 = (panda$core$UInt8$wrapper*) malloc(13);
            $tmp28->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp28->refCount = 1;
            $tmp28->value = $tmp27;
            panda$collections$Array$add$panda$collections$Array$T(array3, ((panda$core$Object*) $tmp28));
        }
        goto $l15;
        $l16:;
    }
    self->data = ((panda$collections$ListView*) array3);
}
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self) {
    panda$core$UInt8 result34;
    ITable* $tmp29 = ((panda$collections$CollectionView*) self->data)->$class->itable;
    while ($tmp29->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp29 = $tmp29->next;
    }
    $fn31 $tmp30 = $tmp29->methods[0];
    panda$core$Int64 $tmp32 = $tmp30(((panda$collections$CollectionView*) self->data));
    panda$core$Bit $tmp33 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, $tmp32);
    if ($tmp33.value) {
    {
        ITable* $tmp35 = self->data->$class->itable;
        while ($tmp35->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp35 = $tmp35->next;
        }
        $fn37 $tmp36 = $tmp35->methods[0];
        panda$core$Object* $tmp38 = $tmp36(self->data, self->index);
        result34 = ((panda$core$UInt8$wrapper*) $tmp38)->value;
        panda$core$Int64 $tmp39 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp39;
        return ((panda$core$UInt8$nullable) { result34, true });
    }
    }
    return ((panda$core$UInt8$nullable) { .nonnull = false });
}

