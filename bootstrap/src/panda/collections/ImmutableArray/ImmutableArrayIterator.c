#include "panda/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
__attribute__((weak)) panda$core$Object* panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T$shim(panda$collections$ImmutableArray$ImmutableArrayIterator* p0) {
    panda$core$Object* result = panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[10]; } panda$collections$ImmutableArray$ImmutableArrayIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$List$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T} };

static panda$core$String $s1;
panda$collections$ImmutableArray$ImmutableArrayIterator$class_type panda$collections$ImmutableArray$ImmutableArrayIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ImmutableArray$ImmutableArrayIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$ImmutableArray$ImmutableArrayIterator$cleanup, panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit, panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 55, 5610559027885520166, NULL };

void panda$collections$ImmutableArray$ImmutableArrayIterator$init$panda$collections$ImmutableArray$LTpanda$collections$ImmutableArray$ImmutableArrayIterator$T$GT(panda$collections$ImmutableArray$ImmutableArrayIterator* self, panda$collections$ImmutableArray* p_array) {
    panda$core$Int64 $tmp2;
    panda$collections$ImmutableArray* $tmp3;
    panda$collections$ImmutableArray* $tmp4;
    self->array = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 0);
    self->index = $tmp2;
    {
        $tmp3 = self->array;
        $tmp4 = p_array;
        self->array = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
panda$core$Bit panda$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$panda$core$Bit(panda$collections$ImmutableArray$ImmutableArrayIterator* self) {
    panda$core$Bit $returnValue5;
    panda$core$Bit $tmp6 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, self->array->count);
    $returnValue5 = $tmp6;
    return $returnValue5;
}
panda$core$Object* panda$collections$ImmutableArray$ImmutableArrayIterator$next$R$panda$collections$ImmutableArray$ImmutableArrayIterator$T(panda$collections$ImmutableArray$ImmutableArrayIterator* self) {
    panda$core$Int64 $tmp8;
    panda$core$Object* $returnValue10;
    panda$core$Object* $tmp11;
    panda$core$Object* $tmp12;
    panda$core$Int64 $tmp13;
    panda$core$Int64$init$builtin_int64(&$tmp8, 1);
    panda$core$Int64 $tmp9 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, $tmp8);
    self->index = $tmp9;
    panda$core$Int64$init$builtin_int64(&$tmp13, 1);
    panda$core$Int64 $tmp14 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, $tmp13);
    panda$core$Object* $tmp15 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(self->array, $tmp14);
    $tmp12 = $tmp15;
    $tmp11 = $tmp12;
    $returnValue10 = $tmp11;
    panda$core$Panda$ref$panda$core$Object($tmp11);
    panda$core$Panda$unref$panda$core$Object($tmp12);
    return $returnValue10;
}
void panda$collections$ImmutableArray$ImmutableArrayIterator$cleanup(panda$collections$ImmutableArray$ImmutableArrayIterator* self) {
    int $tmp19;
    {
    }
    $tmp19 = -1;
    goto $l17;
    $l17:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp19) {
        case -1: goto $l20;
    }
    $l20:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->array));
}





