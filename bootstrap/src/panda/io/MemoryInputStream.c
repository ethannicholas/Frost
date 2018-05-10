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

typedef panda$core$Int64 (*$fn17)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn27)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn34)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn41)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn52)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn59)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, -2754778238192978458, NULL };

void panda$io$MemoryInputStream$init$panda$collections$ImmutableArray$LTpanda$core$UInt8$GT(panda$io$MemoryInputStream* self, panda$collections$ImmutableArray* p_source) {
    panda$collections$ListView* $tmp2;
    panda$collections$ListView* $tmp3;
    self->data = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        $tmp2 = self->data;
        $tmp3 = ((panda$collections$ListView*) p_source);
        self->data = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source) {
    panda$collections$ListView* utf87;
    panda$collections$ListView* $tmp8;
    panda$collections$ListView* $tmp9;
    panda$collections$Array* array11;
    panda$collections$Array* $tmp12;
    panda$collections$Array* $tmp13;
    panda$collections$Iterator* Iter$26$922;
    panda$collections$Iterator* $tmp23;
    panda$collections$Iterator* $tmp24;
    panda$core$Char8 c37;
    panda$core$Object* $tmp38;
    panda$core$Object* $tmp43;
    panda$collections$ListView* $tmp47;
    panda$collections$ListView* $tmp48;
    self->data = NULL;
    self->index = ((panda$core$Int64) { 0 });
    int $tmp6;
    {
        panda$collections$ListView* $tmp10 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
        $tmp9 = $tmp10;
        $tmp8 = $tmp9;
        utf87 = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$collections$Array* $tmp14 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        ITable* $tmp15 = ((panda$collections$CollectionView*) utf87)->$class->itable;
        while ($tmp15->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp15 = $tmp15->next;
        }
        $fn17 $tmp16 = $tmp15->methods[0];
        panda$core$Int64 $tmp18 = $tmp16(((panda$collections$CollectionView*) utf87));
        panda$collections$Array$init$panda$core$Int64($tmp14, $tmp18);
        $tmp13 = $tmp14;
        $tmp12 = $tmp13;
        array11 = $tmp12;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp12));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp13));
        {
            int $tmp21;
            {
                ITable* $tmp25 = ((panda$collections$Iterable*) utf87)->$class->itable;
                while ($tmp25->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp25 = $tmp25->next;
                }
                $fn27 $tmp26 = $tmp25->methods[0];
                panda$collections$Iterator* $tmp28 = $tmp26(((panda$collections$Iterable*) utf87));
                $tmp24 = $tmp28;
                $tmp23 = $tmp24;
                Iter$26$922 = $tmp23;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp23));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp24));
                $l29:;
                ITable* $tmp32 = Iter$26$922->$class->itable;
                while ($tmp32->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp32 = $tmp32->next;
                }
                $fn34 $tmp33 = $tmp32->methods[0];
                panda$core$Bit $tmp35 = $tmp33(Iter$26$922);
                panda$core$Bit $tmp36 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp35);
                bool $tmp31 = $tmp36.value;
                if (!$tmp31) goto $l30;
                {
                    ITable* $tmp39 = Iter$26$922->$class->itable;
                    while ($tmp39->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp39 = $tmp39->next;
                    }
                    $fn41 $tmp40 = $tmp39->methods[1];
                    panda$core$Object* $tmp42 = $tmp40(Iter$26$922);
                    $tmp38 = $tmp42;
                    c37 = ((panda$core$Char8$wrapper*) $tmp38)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp38);
                    panda$core$UInt8 $tmp44 = panda$core$Char8$convert$R$panda$core$UInt8(c37);
                    panda$core$UInt8$wrapper* $tmp45;
                    $tmp45 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
                    $tmp45->value = $tmp44;
                    $tmp43 = ((panda$core$Object*) $tmp45);
                    panda$collections$Array$add$panda$collections$Array$T(array11, $tmp43);
                    panda$core$Panda$unref$panda$core$Object($tmp43);
                }
                goto $l29;
                $l30:;
            }
            $tmp21 = -1;
            goto $l19;
            $l19:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$26$922));
            switch ($tmp21) {
                case -1: goto $l46;
            }
            $l46:;
        }
        {
            $tmp47 = self->data;
            $tmp48 = ((panda$collections$ListView*) array11);
            self->data = $tmp48;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp48));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        }
    }
    $tmp6 = -1;
    goto $l4;
    $l4:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) utf87));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) array11));
    switch ($tmp6) {
        case -1: goto $l49;
    }
    $l49:;
}
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self) {
    panda$core$UInt8 result55;
    panda$core$Object* $tmp56;
    panda$core$UInt8$nullable $finallyReturn61;
    panda$core$UInt8$nullable $finallyReturn63;
    ITable* $tmp50 = ((panda$collections$CollectionView*) self->data)->$class->itable;
    while ($tmp50->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp50 = $tmp50->next;
    }
    $fn52 $tmp51 = $tmp50->methods[0];
    panda$core$Int64 $tmp53 = $tmp51(((panda$collections$CollectionView*) self->data));
    panda$core$Bit $tmp54 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, $tmp53);
    if ($tmp54.value) {
    {
        ITable* $tmp57 = self->data->$class->itable;
        while ($tmp57->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp57 = $tmp57->next;
        }
        $fn59 $tmp58 = $tmp57->methods[0];
        panda$core$Object* $tmp60 = $tmp58(self->data, self->index);
        $tmp56 = $tmp60;
        result55 = ((panda$core$UInt8$wrapper*) $tmp56)->value;
        panda$core$Panda$unref$panda$core$Object($tmp56);
        panda$core$Int64 $tmp61 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp61;
        $finallyReturn61 = ((panda$core$UInt8$nullable) { result55, true });
        return $finallyReturn61;
    }
    }
    $finallyReturn63 = ((panda$core$UInt8$nullable) { .nonnull = false });
    return $finallyReturn63;
}
void panda$io$MemoryInputStream$cleanup(panda$io$MemoryInputStream* self) {
    int $tmp68;
    {
    }
    $tmp68 = -1;
    goto $l66;
    $l66:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp68) {
        case -1: goto $l69;
    }
    $l69:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->data));
}

