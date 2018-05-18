#include "panda/collections/Array/ArrayIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Array.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T$shim(panda$collections$Array$ArrayIterator* self) {
    panda$core$Object* result = panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$Array$ArrayIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Array$ArrayIterator$get_done$R$panda$core$Bit, panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T$shim} };

static panda$core$String $s1;
panda$collections$Array$ArrayIterator$class_type panda$collections$Array$ArrayIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Array$ArrayIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Array$ArrayIterator$cleanup, panda$collections$Array$ArrayIterator$get_done$R$panda$core$Bit, panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 37, 1904766195354471882, NULL };

void panda$collections$Array$ArrayIterator$init$panda$collections$Array$LTpanda$collections$Array$ArrayIterator$T$GT(panda$collections$Array$ArrayIterator* self, panda$collections$Array* p_array) {
    panda$collections$Array* $tmp2;
    panda$collections$Array* $tmp3;
    self->array = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        $tmp2 = self->array;
        $tmp3 = p_array;
        self->array = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$Bit panda$collections$Array$ArrayIterator$get_done$R$panda$core$Bit(panda$collections$Array$ArrayIterator* self) {
    panda$core$Bit $returnValue4;
    panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->index, self->array->count);
    $returnValue4 = $tmp5;
    return $returnValue4;
}
panda$core$Object* panda$collections$Array$ArrayIterator$next$R$panda$collections$Array$ArrayIterator$T(panda$collections$Array$ArrayIterator* self) {
    panda$core$Object* $returnValue8;
    panda$core$Object* $tmp9;
    panda$core$Object* $tmp10;
    panda$core$Int64 $tmp7 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp7;
    panda$core$Int64 $tmp11 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp12 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->array, $tmp11);
    $tmp10 = $tmp12;
    $tmp9 = $tmp10;
    $returnValue8 = $tmp9;
    panda$core$Panda$ref$panda$core$Object($tmp9);
    panda$core$Panda$unref$panda$core$Object($tmp10);
    return $returnValue8;
}
void panda$collections$Array$ArrayIterator$cleanup(panda$collections$Array$ArrayIterator* self) {
    int $tmp16;
    {
    }
    $tmp16 = -1;
    goto $l14;
    $l14:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp16) {
        case -1: goto $l17;
    }
    $l17:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->array));
}






