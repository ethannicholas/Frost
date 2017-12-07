#include "panda/collections/Stack.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Array.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/collections/Stack/StackIterator.h"
#include "panda/core/String.h"
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim(panda$collections$Stack* self) {
    panda$collections$Iterator* result = panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Stack$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim} };

panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$core$Object$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$peek$R$panda$collections$Stack$T, panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };



void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v) {
    panda$collections$Array$add$panda$collections$Array$T(self->contents, p_v);
}
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Object* result3;
    panda$core$Int64 $tmp1 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp2 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp2.value);
    panda$core$Int64 $tmp4 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp4);
    result3 = $tmp5;
    panda$core$Int64 $tmp6 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$removeIndex$panda$core$Int64(self->contents, $tmp6);
    return result3;
}
panda$core$Object* panda$collections$Stack$peek$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Int64 $tmp7 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp8 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp7, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp8.value);
    panda$core$Int64 $tmp9 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp10 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp9);
    return $tmp10;
}
panda$core$Object* panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp11 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp12 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp11, p_depth);
    PANDA_ASSERT($tmp12.value);
    panda$core$Int64 $tmp13 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp14 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp13, p_depth);
    panda$core$Object* $tmp15 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp14);
    return $tmp15;
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Stack$StackIterator* $tmp16 = (panda$collections$Stack$StackIterator*) malloc(32);
    $tmp16->$class = (panda$core$Class*) &panda$collections$Stack$StackIterator$class;
    $tmp16->refCount.value = 1;
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp16, self);
    return ((panda$collections$Iterator*) $tmp16);
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    return self->contents->count;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $tmp18 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    return $tmp18;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp19 = (panda$collections$Array*) malloc(40);
    $tmp19->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp19->refCount.value = 1;
    panda$collections$Array$init($tmp19);
    self->contents = $tmp19;
}

