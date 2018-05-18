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
panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$collections$Stack$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$pop$panda$collections$Stack$T, panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };

void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v) {
    panda$collections$Array$add$panda$collections$Array$T(self->contents, p_v);
}
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Object* result9 = NULL;
    panda$core$Object* $tmp10;
    panda$core$Object* $tmp11;
    panda$core$Object* $returnValue15;
    panda$core$Object* $tmp16;
    panda$core$Int64 $tmp2 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp3 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3.value);
    int $tmp6;
    {
        panda$core$Int64 $tmp7 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
        panda$core$Bit $tmp8 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp7, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp8.value);
        panda$core$Int64 $tmp12 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp13 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp12);
        $tmp11 = $tmp13;
        $tmp10 = $tmp11;
        result9 = $tmp10;
        panda$core$Panda$ref$panda$core$Object($tmp10);
        panda$core$Panda$unref$panda$core$Object($tmp11);
        panda$core$Int64 $tmp14 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(self->contents, $tmp14);
        $tmp16 = result9;
        $returnValue15 = $tmp16;
        panda$core$Panda$ref$panda$core$Object($tmp16);
        $tmp6 = 0;
        goto $l4;
        $l17:;
        return $returnValue15;
    }
    $l4:;
    panda$core$Panda$unref$panda$core$Object(result9);
    result9 = NULL;
    switch ($tmp6) {
        case 0: goto $l17;
    }
    $l19:;
}
void panda$collections$Stack$pop$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_expected) {
    panda$core$Object* $tmp20;
    panda$core$Object* $tmp22;
    panda$core$Object* $tmp21 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self, ((panda$core$Int64) { 0 }));
    $tmp20 = $tmp21;
    PANDA_ASSERT(((panda$core$Bit) { $tmp20 == p_expected }).value);
    panda$core$Panda$unref$panda$core$Object($tmp20);
    panda$core$Object* $tmp23 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self);
    $tmp22 = $tmp23;
    panda$core$Panda$unref$panda$core$Object($tmp22);
}
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Object* $returnValue32;
    panda$core$Object* $tmp33;
    panda$core$Object* $tmp34;
    panda$core$Bit $tmp25 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_depth, ((panda$core$Int64) { 0 }));
    bool $tmp24 = $tmp25.value;
    if (!$tmp24) goto $l26;
    panda$core$Int64 $tmp27 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp28 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp27);
    $tmp24 = $tmp28.value;
    $l26:;
    panda$core$Bit $tmp29 = { $tmp24 };
    PANDA_ASSERT($tmp29.value);
    panda$core$Int64 $tmp30 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp31 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp30, p_depth);
    PANDA_ASSERT($tmp31.value);
    panda$core$Int64 $tmp35 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp36 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp35, p_depth);
    panda$core$Object* $tmp37 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp36);
    $tmp34 = $tmp37;
    $tmp33 = $tmp34;
    $returnValue32 = $tmp33;
    panda$core$Panda$ref$panda$core$Object($tmp33);
    panda$core$Panda$unref$panda$core$Object($tmp34);
    return $returnValue32;
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Iterator* $returnValue39;
    panda$collections$Iterator* $tmp40;
    panda$collections$Stack$StackIterator* $tmp41;
    panda$collections$Stack$StackIterator* $tmp42 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp42, self);
    $tmp41 = $tmp42;
    $tmp40 = ((panda$collections$Iterator*) $tmp41);
    $returnValue39 = $tmp40;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    return $returnValue39;
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    panda$core$Int64 $returnValue44;
    $returnValue44 = self->contents->count;
    return $returnValue44;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $returnValue46;
    panda$core$String* $tmp47;
    panda$core$String* $tmp48;
    panda$core$String* $tmp49 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    $tmp48 = $tmp49;
    $tmp47 = $tmp48;
    $returnValue46 = $tmp47;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    return $returnValue46;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp51;
    panda$collections$Array* $tmp52;
    self->contents = NULL;
    panda$collections$Array* $tmp53 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp53);
    $tmp52 = $tmp53;
    $tmp51 = $tmp52;
    self->contents = $tmp51;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
}
void panda$collections$Stack$cleanup(panda$collections$Stack* self) {
    int $tmp56;
    {
    }
    $tmp56 = -1;
    goto $l54;
    $l54:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp56) {
        case -1: goto $l57;
    }
    $l57:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

