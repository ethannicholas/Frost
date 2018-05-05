#include "panda/io/MemoryInputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Bit.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
panda$io$MemoryInputStream$class_type panda$io$MemoryInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$MemoryInputStream$cleanup, panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$Int64 (*$fn14)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn21)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn28)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn35)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn44)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn51)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, -2754778238192978458, NULL };

void panda$io$MemoryInputStream$init$panda$collections$ImmutableArray$LTpanda$core$UInt8$GT(panda$io$MemoryInputStream* self, panda$collections$ImmutableArray* p_source) {
    self->data = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp2 = self->data;
        panda$collections$ListView* $tmp3 = ((panda$collections$ListView*) p_source);
        self->data = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source) {
    panda$collections$ListView* utf84;
    panda$collections$Array* array8;
    panda$collections$Iterator* Iter$26$916;
    panda$core$Char8 c31;
    self->data = NULL;
    self->index = ((panda$core$Int64) { 0 });
    panda$collections$ListView* $tmp7 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
    panda$collections$ListView* $tmp6 = $tmp7;
    panda$collections$ListView* $tmp5 = $tmp6;
    utf84 = $tmp5;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    panda$collections$Array* $tmp11 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    ITable* $tmp12 = ((panda$collections$CollectionView*) utf84)->$class->itable;
    while ($tmp12->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp12 = $tmp12->next;
    }
    $fn14 $tmp13 = $tmp12->methods[0];
    panda$core$Int64 $tmp15 = $tmp13(((panda$collections$CollectionView*) utf84));
    panda$collections$Array$init$panda$core$Int64($tmp11, $tmp15);
    panda$collections$Array* $tmp10 = $tmp11;
    panda$collections$Array* $tmp9 = $tmp10;
    array8 = $tmp9;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    {
        ITable* $tmp19 = ((panda$collections$Iterable*) utf84)->$class->itable;
        while ($tmp19->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp19 = $tmp19->next;
        }
        $fn21 $tmp20 = $tmp19->methods[0];
        panda$collections$Iterator* $tmp22 = $tmp20(((panda$collections$Iterable*) utf84));
        panda$collections$Iterator* $tmp18 = $tmp22;
        panda$collections$Iterator* $tmp17 = $tmp18;
        Iter$26$916 = $tmp17;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp17));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp18));
        $l23:;
        ITable* $tmp26 = Iter$26$916->$class->itable;
        while ($tmp26->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp26 = $tmp26->next;
        }
        $fn28 $tmp27 = $tmp26->methods[0];
        panda$core$Bit $tmp29 = $tmp27(Iter$26$916);
        panda$core$Bit $tmp30 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp29);
        bool $tmp25 = $tmp30.value;
        if (!$tmp25) goto $l24;
        {
            ITable* $tmp33 = Iter$26$916->$class->itable;
            while ($tmp33->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp33 = $tmp33->next;
            }
            $fn35 $tmp34 = $tmp33->methods[1];
            panda$core$Object* $tmp36 = $tmp34(Iter$26$916);
            panda$core$Object* $tmp32 = $tmp36;
            c31 = ((panda$core$Char8$wrapper*) $tmp32)->value;
            panda$core$Panda$unref$panda$core$Object($tmp32);
            panda$core$UInt8 $tmp38 = panda$core$Char8$convert$R$panda$core$UInt8(c31);
            panda$core$UInt8$wrapper* $tmp39;
            $tmp39 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
            $tmp39->value = $tmp38;
            panda$core$Object* $tmp37 = ((panda$core$Object*) $tmp39);
            panda$collections$Array$add$panda$collections$Array$T(array8, $tmp37);
            panda$core$Panda$unref$panda$core$Object($tmp37);
        }
        goto $l23;
        $l24:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$26$916));
    }
    {
        panda$collections$ListView* $tmp40 = self->data;
        panda$collections$ListView* $tmp41 = ((panda$collections$ListView*) array8);
        self->data = $tmp41;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
    }
    {
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) utf84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) array8));
    }
}
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self) {
    panda$core$UInt8 result47;
    ITable* $tmp42 = ((panda$collections$CollectionView*) self->data)->$class->itable;
    while ($tmp42->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp42 = $tmp42->next;
    }
    $fn44 $tmp43 = $tmp42->methods[0];
    panda$core$Int64 $tmp45 = $tmp43(((panda$collections$CollectionView*) self->data));
    panda$core$Bit $tmp46 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, $tmp45);
    if ($tmp46.value) {
    {
        ITable* $tmp49 = self->data->$class->itable;
        while ($tmp49->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp49 = $tmp49->next;
        }
        $fn51 $tmp50 = $tmp49->methods[0];
        panda$core$Object* $tmp52 = $tmp50(self->data, self->index);
        panda$core$Object* $tmp48 = $tmp52;
        result47 = ((panda$core$UInt8$wrapper*) $tmp48)->value;
        panda$core$Panda$unref$panda$core$Object($tmp48);
        panda$core$Int64 $tmp53 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp53;
        panda$core$UInt8$nullable $tmp54 = ((panda$core$UInt8$nullable) { result47, true });
        return $tmp54;
    }
    }
    panda$core$UInt8$nullable $tmp55 = ((panda$core$UInt8$nullable) { .nonnull = false });
    return $tmp55;
}
void panda$io$MemoryInputStream$cleanup(panda$io$MemoryInputStream* self) {
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->data));
}

