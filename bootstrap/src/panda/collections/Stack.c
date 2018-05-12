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
    panda$core$Object* result7 = NULL;
    panda$core$Object* $tmp8;
    panda$core$Object* $tmp9;
    panda$core$Object* $finallyReturn12;
    panda$core$Object* $tmp14;
    int $tmp4;
    {
        panda$core$Int64 $tmp5 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
        panda$core$Bit $tmp6 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp6.value);
        panda$core$Int64 $tmp10 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp11 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp10);
        $tmp9 = $tmp11;
        $tmp8 = $tmp9;
        result7 = $tmp8;
        panda$core$Panda$ref$panda$core$Object($tmp8);
        panda$core$Panda$unref$panda$core$Object($tmp9);
        panda$core$Int64 $tmp12 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(self->contents, $tmp12);
        $tmp14 = result7;
        $finallyReturn12 = $tmp14;
        panda$core$Panda$ref$panda$core$Object($tmp14);
        $tmp4 = 0;
        goto $l2;
        $l15:;
        return $finallyReturn12;
    }
    $l2:;
    panda$core$Panda$unref$panda$core$Object(result7);
    result7 = NULL;
    switch ($tmp4) {
        case 0: goto $l15;
    }
    $l17:;
}
panda$core$Object* panda$collections$Stack$peek$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Object* $finallyReturn19;
    panda$core$Object* $tmp21;
    panda$core$Object* $tmp22;
    panda$core$Int64 $tmp18 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp19 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp18, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp19.value);
    panda$core$Int64 $tmp23 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp24 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp23);
    $tmp22 = $tmp24;
    $tmp21 = $tmp22;
    $finallyReturn19 = $tmp21;
    panda$core$Panda$ref$panda$core$Object($tmp21);
    panda$core$Panda$unref$panda$core$Object($tmp22);
    return $finallyReturn19;
}
panda$core$Object* panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Object* $finallyReturn27;
    panda$core$Object* $tmp29;
    panda$core$Object* $tmp30;
    panda$core$Int64 $tmp26 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp27 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp26, p_depth);
    PANDA_ASSERT($tmp27.value);
    panda$core$Int64 $tmp31 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp32 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp31, p_depth);
    panda$core$Object* $tmp33 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp32);
    $tmp30 = $tmp33;
    $tmp29 = $tmp30;
    $finallyReturn27 = $tmp29;
    panda$core$Panda$ref$panda$core$Object($tmp29);
    panda$core$Panda$unref$panda$core$Object($tmp30);
    return $finallyReturn27;
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Iterator* $finallyReturn34;
    panda$collections$Iterator* $tmp36;
    panda$collections$Stack$StackIterator* $tmp37;
    panda$collections$Stack$StackIterator* $tmp38 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp38, self);
    $tmp37 = $tmp38;
    $tmp36 = ((panda$collections$Iterator*) $tmp37);
    $finallyReturn34 = $tmp36;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    return $finallyReturn34;
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    panda$core$Int64 $finallyReturn39;
    $finallyReturn39 = self->contents->count;
    return $finallyReturn39;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $finallyReturn41;
    panda$core$String* $tmp43;
    panda$core$String* $tmp44;
    panda$core$String* $tmp45 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    $tmp44 = $tmp45;
    $tmp43 = $tmp44;
    $finallyReturn41 = $tmp43;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp43));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp44));
    return $finallyReturn41;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp47;
    panda$collections$Array* $tmp48;
    self->contents = NULL;
    panda$collections$Array* $tmp49 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp49);
    $tmp48 = $tmp49;
    $tmp47 = $tmp48;
    self->contents = $tmp47;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
}
void panda$collections$Stack$cleanup(panda$collections$Stack* self) {
    int $tmp52;
    {
    }
    $tmp52 = -1;
    goto $l50;
    $l50:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp52) {
        case -1: goto $l53;
    }
    $l53:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

