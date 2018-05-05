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


struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$Stack$StackIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim} };

static panda$core$String $s1;
panda$collections$Stack$StackIterator$class_type panda$collections$Stack$StackIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$StackIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Stack$StackIterator$cleanup, panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72", 37, 4888538230325112768, NULL };

void panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT(panda$collections$Stack$StackIterator* self, panda$collections$Stack* p_stack) {
    self->stack = NULL;
    self->index = ((panda$core$Int64) { 0 });
    {
        panda$collections$Stack* $tmp2 = self->stack;
        panda$collections$Stack* $tmp3 = p_stack;
        self->stack = $tmp3;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
    }
}
panda$core$Bit panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit(panda$collections$Stack$StackIterator* self) {
    panda$core$Int64 $tmp5 = panda$collections$Stack$get_count$R$panda$core$Int64(self->stack);
    panda$core$Bit $tmp6 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, $tmp5);
    panda$core$Bit $tmp4 = $tmp6;
    return $tmp4;
}
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(panda$collections$Stack$StackIterator* self) {
    panda$core$Object* result7;
    panda$core$Object* tmp512;
    panda$core$Object* $tmp10 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->stack, self->index);
    panda$core$Object* $tmp9 = $tmp10;
    panda$core$Object* $tmp8 = $tmp9;
    result7 = $tmp8;
    panda$core$Panda$ref$panda$core$Object($tmp8);
    panda$core$Panda$unref$panda$core$Object($tmp9);
    panda$core$Int64 $tmp11 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp11;
    {
        panda$core$Object* $tmp13 = result7;
        tmp512 = $tmp13;
        panda$core$Panda$ref$panda$core$Object($tmp13);
        panda$core$Panda$unref$panda$core$Object(result7);
        panda$core$Object* $tmp14 = tmp512;
        return $tmp14;
    }
}
void panda$collections$Stack$StackIterator$cleanup(panda$collections$Stack$StackIterator* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->stack));
}

