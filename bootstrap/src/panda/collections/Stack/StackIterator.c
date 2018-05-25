#include "panda/collections/Stack/StackIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim(panda$collections$Stack$StackIterator* self) {
    panda$core$Object* result = panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[3]; } panda$collections$Stack$StackIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT} };

static panda$core$String $s1;
panda$collections$Stack$StackIterator$class_type panda$collections$Stack$StackIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$StackIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Stack$StackIterator$cleanup, panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72", 37, 4888538230325112768, NULL };

void panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT(panda$collections$Stack$StackIterator* self, panda$collections$Stack* p_stack) {
    panda$collections$Stack* $tmp2;
    panda$collections$Stack* $tmp3;
    self->stack = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        $tmp2 = self->stack;
        $tmp3 = p_stack;
        self->stack = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$Bit panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit(panda$collections$Stack$StackIterator* self) {
    panda$core$Bit $returnValue4;
    panda$core$Int64 $tmp5 = panda$collections$Stack$get_count$R$panda$core$Int64(self->stack);
    panda$core$Bit $tmp6 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, $tmp5);
    $returnValue4 = $tmp6;
    return $returnValue4;
}
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(panda$collections$Stack$StackIterator* self) {
    panda$core$Object* result11 = NULL;
    panda$core$Object* $tmp12;
    panda$core$Object* $tmp13;
    panda$core$Object* $returnValue16;
    panda$core$Object* $tmp17;
    int $tmp10;
    {
        panda$core$Object* $tmp14 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self->stack, self->index);
        $tmp13 = $tmp14;
        $tmp12 = $tmp13;
        result11 = $tmp12;
        panda$core$Panda$ref$panda$core$Object($tmp12);
        panda$core$Panda$unref$panda$core$Object($tmp13);
        panda$core$Int64 $tmp15 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
        self->index = $tmp15;
        $tmp17 = result11;
        $returnValue16 = $tmp17;
        panda$core$Panda$ref$panda$core$Object($tmp17);
        $tmp10 = 0;
        goto $l8;
        $l18:;
        return $returnValue16;
    }
    $l8:;
    panda$core$Panda$unref$panda$core$Object(result11);
    result11 = NULL;
    switch ($tmp10) {
        case 0: goto $l18;
    }
    $l20:;
}
void panda$collections$Stack$StackIterator$cleanup(panda$collections$Stack$StackIterator* self) {
    int $tmp23;
    {
    }
    $tmp23 = -1;
    goto $l21;
    $l21:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp23) {
        case -1: goto $l24;
    }
    $l24:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->stack));
}






