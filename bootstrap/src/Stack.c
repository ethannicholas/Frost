#include "panda/collections/Stack.h"
#include "panda/collections/Array.h"
#include "panda/core/Int64.h"
#include "panda/collections/Iterator.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Bit.h"
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim(panda$collections$Stack* self) {
    panda$collections$Iterator* result = panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(self);
    return result;
}
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim(panda$collections$Stack$StackIterator* self) {
    panda$core$Object* result = panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Stack$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim} };

panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$peek$R$panda$collections$Stack$T, panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };

typedef panda$core$Int64 (*$fn15)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn19)(panda$collections$Stack*, panda$core$Int64);
struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$collections$Stack$StackIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim} };

panda$collections$Stack$StackIterator$class_type panda$collections$Stack$StackIterator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$StackIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit, panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T$shim} };



void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v) {
    panda$collections$Array$add$panda$collections$Array$T(self->contents, p_v);
}
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Object* result1;
    panda$core$Int64 $tmp2 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp3 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp2);
    result1 = $tmp3;
    panda$core$Int64 $tmp4 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$removeIndex$panda$core$Int64(self->contents, $tmp4);
    return result1;
}
panda$core$Object* panda$collections$Stack$peek$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Int64 $tmp5 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp5);
    return $tmp6;
}
panda$core$Object* panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp7 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp8 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp7, p_depth);
    panda$core$Object* $tmp9 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp8);
    return $tmp9;
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Stack$StackIterator* $tmp10 = (panda$collections$Stack$StackIterator*) malloc(32);
    $tmp10->$class = (panda$core$Class*) &panda$collections$Stack$StackIterator$class;
    $tmp10->refCount.value = 1;
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp10, self);
    return ((panda$collections$Iterator*) $tmp10);
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    return self->contents->count;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $tmp12 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    return $tmp12;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp13 = (panda$collections$Array*) malloc(40);
    $tmp13->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp13->refCount.value = 1;
    panda$collections$Array$init($tmp13);
    self->contents = $tmp13;
}
void panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT(panda$collections$Stack$StackIterator* self, panda$collections$Stack* p_stack) {
    self->index = ((panda$core$Int64) { 0 });
    self->stack = p_stack;
}
panda$core$Bit panda$collections$Stack$StackIterator$get_done$R$panda$core$Bit(panda$collections$Stack$StackIterator* self) {
    panda$core$Int64 $tmp16 = (($fn15) self->stack->$class->vtable[7])(self->stack);
    panda$core$Bit $tmp17 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->index, $tmp16);
    return $tmp17;
}
panda$core$Object* panda$collections$Stack$StackIterator$next$R$panda$collections$Stack$StackIterator$T(panda$collections$Stack$StackIterator* self) {
    panda$core$Object* result18;
    panda$core$Object* $tmp20 = (($fn19) self->stack->$class->vtable[5])(self->stack, self->index);
    result18 = $tmp20;
    panda$core$Int64 $tmp21 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->index, ((panda$core$Int64) { 1 }));
    self->index = $tmp21;
    return result18;
}

