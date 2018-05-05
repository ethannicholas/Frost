#include "panda/collections/Stack.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Array.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/Stack/StackIterator.h"
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim(panda$collections$Stack* self) {
    panda$collections$Iterator* result = panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(self);
    return result;
}


struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Stack$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim} };

static panda$core$String $s1;
panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$collections$Stack$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$peek$R$panda$collections$Stack$T, panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };

void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v) {
    panda$collections$Array$add$panda$collections$Array$T(self->contents, p_v);
}
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Object* result4;
    panda$core$Object* tmp110;
    panda$core$Int64 $tmp2 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp3 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3.value);
    panda$core$Int64 $tmp7 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp8 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp7);
    panda$core$Object* $tmp6 = $tmp8;
    panda$core$Object* $tmp5 = $tmp6;
    result4 = $tmp5;
    panda$core$Panda$ref$panda$core$Object($tmp5);
    panda$core$Panda$unref$panda$core$Object($tmp6);
    panda$core$Int64 $tmp9 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$collections$Array$removeIndex$panda$core$Int64(self->contents, $tmp9);
    {
        panda$core$Object* $tmp11 = result4;
        tmp110 = $tmp11;
        panda$core$Panda$ref$panda$core$Object($tmp11);
        panda$core$Panda$unref$panda$core$Object(result4);
        panda$core$Object* $tmp12 = tmp110;
        return $tmp12;
    }
}
panda$core$Object* panda$collections$Stack$peek$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Int64 $tmp13 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp14 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp13, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp14.value);
    panda$core$Int64 $tmp18 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp19 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp18);
    panda$core$Object* $tmp17 = $tmp19;
    panda$core$Object* $tmp16 = $tmp17;
    panda$core$Object* $tmp15 = $tmp16;
    panda$core$Panda$ref$panda$core$Object($tmp16);
    panda$core$Panda$unref$panda$core$Object($tmp17);
    return $tmp15;
}
panda$core$Object* panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp20 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp21 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp20, p_depth);
    PANDA_ASSERT($tmp21.value);
    panda$core$Int64 $tmp25 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp26 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp25, p_depth);
    panda$core$Object* $tmp27 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp26);
    panda$core$Object* $tmp24 = $tmp27;
    panda$core$Object* $tmp23 = $tmp24;
    panda$core$Object* $tmp22 = $tmp23;
    panda$core$Panda$ref$panda$core$Object($tmp23);
    panda$core$Panda$unref$panda$core$Object($tmp24);
    return $tmp22;
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Stack$StackIterator* $tmp31 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp31, self);
    panda$collections$Stack$StackIterator* $tmp30 = $tmp31;
    panda$collections$Iterator* $tmp29 = ((panda$collections$Iterator*) $tmp30);
    panda$collections$Iterator* $tmp28 = $tmp29;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp30));
    return $tmp28;
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    panda$core$Int64 $tmp32 = self->contents->count;
    return $tmp32;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $tmp36 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    panda$core$String* $tmp35 = $tmp36;
    panda$core$String* $tmp34 = $tmp35;
    panda$core$String* $tmp33 = $tmp34;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp34));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp35));
    return $tmp33;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    self->contents = NULL;
    panda$collections$Array* $tmp39 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp39);
    panda$collections$Array* $tmp38 = $tmp39;
    panda$collections$Array* $tmp37 = $tmp38;
    self->contents = $tmp37;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
}
void panda$collections$Stack$cleanup(panda$collections$Stack* self) {
    panda$core$Object$cleanup(((panda$core$Object*) self));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

