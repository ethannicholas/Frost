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
panda$io$MemoryInputStream$class_type panda$io$MemoryInputStream$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$io$InputStream$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$io$MemoryInputStream$cleanup, panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$UInt8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Int8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$read$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$R$panda$core$Int64, panda$io$InputStream$readFully$R$panda$core$String, panda$io$InputStream$read$R$panda$core$Int16$Q, panda$io$InputStream$read$R$panda$core$Int32$Q, panda$io$InputStream$read$R$panda$core$Int64$Q, panda$io$InputStream$read$R$panda$core$Char8$Q, panda$io$InputStream$readLine$R$panda$core$String$Q, panda$io$InputStream$sendTo$panda$io$OutputStream$R$panda$core$Int64, panda$io$InputStream$lines$R$panda$collections$Iterator$LTpanda$core$String$GT} };

typedef panda$core$Int64 (*$fn19)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn29)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn36)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn43)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn54)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn61)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x4d\x65\x6d\x6f\x72\x79\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d", 26, -2754778238192978458, NULL };

void panda$io$MemoryInputStream$init$panda$collections$ImmutableArray$LTpanda$core$UInt8$GT(panda$io$MemoryInputStream* self, panda$collections$ImmutableArray* p_source) {
    panda$core$Int64 $tmp2;
    panda$collections$ListView* $tmp3;
    panda$collections$ListView* $tmp4;
    self->data = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->index = $tmp2;
    {
        $tmp3 = self->data;
        $tmp4 = ((panda$collections$ListView*) p_source);
        self->data = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
void panda$io$MemoryInputStream$init$panda$core$String(panda$io$MemoryInputStream* self, panda$core$String* p_source) {
    panda$core$Int64 $tmp5;
    panda$collections$ListView* utf89 = NULL;
    panda$collections$ListView* $tmp10;
    panda$collections$ListView* $tmp11;
    panda$collections$Array* array13 = NULL;
    panda$collections$Array* $tmp14;
    panda$collections$Array* $tmp15;
    panda$collections$Iterator* Iter$26$924 = NULL;
    panda$collections$Iterator* $tmp25;
    panda$collections$Iterator* $tmp26;
    panda$core$Char8 c39;
    panda$core$Object* $tmp40;
    panda$core$Object* $tmp45;
    panda$collections$ListView* $tmp49;
    panda$collections$ListView* $tmp50;
    self->data = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp5, 0);
    self->index = $tmp5;
    int $tmp8;
    {
        panda$collections$ListView* $tmp12 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_source);
        $tmp11 = $tmp12;
        $tmp10 = $tmp11;
        utf89 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$collections$Array* $tmp16 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
        ITable* $tmp17 = ((panda$collections$CollectionView*) utf89)->$class->itable;
        while ($tmp17->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp17 = $tmp17->next;
        }
        $fn19 $tmp18 = $tmp17->methods[0];
        panda$core$Int64 $tmp20 = $tmp18(((panda$collections$CollectionView*) utf89));
        panda$collections$Array$init$panda$core$Int64($tmp16, $tmp20);
        $tmp15 = $tmp16;
        $tmp14 = $tmp15;
        array13 = $tmp14;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp14));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
        {
            int $tmp23;
            {
                ITable* $tmp27 = ((panda$collections$Iterable*) utf89)->$class->itable;
                while ($tmp27->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp27 = $tmp27->next;
                }
                $fn29 $tmp28 = $tmp27->methods[0];
                panda$collections$Iterator* $tmp30 = $tmp28(((panda$collections$Iterable*) utf89));
                $tmp26 = $tmp30;
                $tmp25 = $tmp26;
                Iter$26$924 = $tmp25;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
                $l31:;
                ITable* $tmp34 = Iter$26$924->$class->itable;
                while ($tmp34->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp34 = $tmp34->next;
                }
                $fn36 $tmp35 = $tmp34->methods[0];
                panda$core$Bit $tmp37 = $tmp35(Iter$26$924);
                panda$core$Bit $tmp38 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp37);
                bool $tmp33 = $tmp38.value;
                if (!$tmp33) goto $l32;
                {
                    ITable* $tmp41 = Iter$26$924->$class->itable;
                    while ($tmp41->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp41 = $tmp41->next;
                    }
                    $fn43 $tmp42 = $tmp41->methods[1];
                    panda$core$Object* $tmp44 = $tmp42(Iter$26$924);
                    $tmp40 = $tmp44;
                    c39 = ((panda$core$Char8$wrapper*) $tmp40)->value;
                    panda$core$Panda$unref$panda$core$Object($tmp40);
                    panda$core$UInt8 $tmp46 = panda$core$Char8$convert$R$panda$core$UInt8(c39);
                    panda$core$UInt8$wrapper* $tmp47;
                    $tmp47 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
                    $tmp47->value = $tmp46;
                    $tmp45 = ((panda$core$Object*) $tmp47);
                    panda$collections$Array$add$panda$collections$Array$T(array13, $tmp45);
                    panda$core$Panda$unref$panda$core$Object($tmp45);
                }
                goto $l31;
                $l32:;
            }
            $tmp23 = -1;
            goto $l21;
            $l21:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$26$924));
            Iter$26$924 = NULL;
            switch ($tmp23) {
                case -1: goto $l48;
            }
            $l48:;
        }
        {
            $tmp49 = self->data;
            $tmp50 = ((panda$collections$ListView*) array13);
            self->data = $tmp50;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp50));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp49));
        }
    }
    $tmp8 = -1;
    goto $l6;
    $l6:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) array13));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) utf89));
    utf89 = NULL;
    array13 = NULL;
    switch ($tmp8) {
        case -1: goto $l51;
    }
    $l51:;
}
panda$core$UInt8$nullable panda$io$MemoryInputStream$read$R$panda$core$UInt8$Q(panda$io$MemoryInputStream* self) {
    panda$core$UInt8 result57;
    panda$core$Object* $tmp58;
    panda$core$Int64 $tmp63;
    panda$core$UInt8$nullable $returnValue65;
    ITable* $tmp52 = ((panda$collections$CollectionView*) self->data)->$class->itable;
    while ($tmp52->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp52 = $tmp52->next;
    }
    $fn54 $tmp53 = $tmp52->methods[0];
    panda$core$Int64 $tmp55 = $tmp53(((panda$collections$CollectionView*) self->data));
    panda$core$Bit $tmp56 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->index, $tmp55);
    if ($tmp56.value) {
    {
        ITable* $tmp59 = self->data->$class->itable;
        while ($tmp59->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp59 = $tmp59->next;
        }
        $fn61 $tmp60 = $tmp59->methods[0];
        panda$core$Object* $tmp62 = $tmp60(self->data, self->index);
        $tmp58 = $tmp62;
        result57 = ((panda$core$UInt8$wrapper*) $tmp58)->value;
        panda$core$Panda$unref$panda$core$Object($tmp58);
        panda$core$Int64$init$builtin_int64(&$tmp63, 1);
        panda$core$Int64 $tmp64 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp63);
        self->index = $tmp64;
        $returnValue65 = ((panda$core$UInt8$nullable) { result57, true });
        return $returnValue65;
    }
    }
    $returnValue65 = ((panda$core$UInt8$nullable) { .nonnull = false });
    return $returnValue65;
}
void panda$io$MemoryInputStream$cleanup(panda$io$MemoryInputStream* self) {
    int $tmp70;
    {
    }
    $tmp70 = -1;
    goto $l68;
    $l68:;
    panda$io$InputStream$cleanup(((panda$io$InputStream*) self));
    switch ($tmp70) {
        case -1: goto $l71;
    }
    $l71:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->data));
}

