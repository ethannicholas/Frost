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
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim(panda$collections$Stack* p0) {
    panda$collections$Iterator* result = panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Stack$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim} };

static panda$core$String $s1;
panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$collections$Stack$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$pop$panda$collections$Stack$T, panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s6 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, -3717553610229014045, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x65\x78\x70\x65\x63\x74\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54\x29", 95, -2894691554432978803, NULL };
static panda$core$String $s43 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, 5685017306878640050, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };

void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v) {
    panda$collections$Array$add$panda$collections$Array$T(self->contents, p_v);
}
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Object* result16 = NULL;
    panda$core$Object* $tmp17;
    panda$core$Object* $tmp18;
    panda$core$Object* $returnValue22;
    panda$core$Object* $tmp23;
    panda$core$Int64 $tmp2 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp3 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2, ((panda$core$Int64) { 0 }));
    if ($tmp3.value) goto $l4; else goto $l5;
    $l5:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s6, (panda$core$Int64) { 47 }, &$s7);
    abort();
    $l4:;
    int $tmp10;
    {
        panda$core$Int64 $tmp11 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
        panda$core$Bit $tmp12 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp11, ((panda$core$Int64) { 0 }));
        if ($tmp12.value) goto $l13; else goto $l14;
        $l14:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s15, (panda$core$Int64) { 48 });
        abort();
        $l13:;
        panda$core$Int64 $tmp19 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp20 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp19);
        $tmp18 = $tmp20;
        $tmp17 = $tmp18;
        result16 = $tmp17;
        panda$core$Panda$ref$panda$core$Object($tmp17);
        panda$core$Panda$unref$panda$core$Object($tmp18);
        panda$core$Int64 $tmp21 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
        panda$collections$Array$removeIndex$panda$core$Int64(self->contents, $tmp21);
        $tmp23 = result16;
        $returnValue22 = $tmp23;
        panda$core$Panda$ref$panda$core$Object($tmp23);
        $tmp10 = 0;
        goto $l8;
        $l24:;
        return $returnValue22;
    }
    $l8:;
    panda$core$Panda$unref$panda$core$Object(result16);
    result16 = NULL;
    switch ($tmp10) {
        case 0: goto $l24;
    }
    $l26:;
    abort();
}
void panda$collections$Stack$pop$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_expected) {
    panda$core$Object* $tmp27;
    panda$core$Object* $tmp33;
    panda$core$Object* $tmp28 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self, ((panda$core$Int64) { 0 }));
    $tmp27 = $tmp28;
    panda$core$Panda$unref$panda$core$Object($tmp27);
    if (((panda$core$Bit) { $tmp27 == p_expected }).value) goto $l29; else goto $l30;
    $l30:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s31, (panda$core$Int64) { 66 }, &$s32);
    abort();
    $l29:;
    panda$core$Object* $tmp34 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self);
    $tmp33 = $tmp34;
    panda$core$Panda$unref$panda$core$Object($tmp33);
}
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Object* $returnValue50;
    panda$core$Object* $tmp51;
    panda$core$Object* $tmp52;
    panda$core$Bit $tmp36 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_depth, ((panda$core$Int64) { 0 }));
    bool $tmp35 = $tmp36.value;
    if (!$tmp35) goto $l37;
    panda$core$Int64 $tmp38 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp39 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp38);
    $tmp35 = $tmp39.value;
    $l37:;
    panda$core$Bit $tmp40 = { $tmp35 };
    if ($tmp40.value) goto $l41; else goto $l42;
    $l42:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s43, (panda$core$Int64) { 75 }, &$s44);
    abort();
    $l41:;
    panda$core$Int64 $tmp45 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp46 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp45, p_depth);
    if ($tmp46.value) goto $l47; else goto $l48;
    $l48:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s49, (panda$core$Int64) { 76 });
    abort();
    $l47:;
    panda$core$Int64 $tmp53 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp54 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp53, p_depth);
    panda$core$Object* $tmp55 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp54);
    $tmp52 = $tmp55;
    $tmp51 = $tmp52;
    $returnValue50 = $tmp51;
    panda$core$Panda$ref$panda$core$Object($tmp51);
    panda$core$Panda$unref$panda$core$Object($tmp52);
    return $returnValue50;
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Iterator* $returnValue57;
    panda$collections$Iterator* $tmp58;
    panda$collections$Stack$StackIterator* $tmp59;
    panda$collections$Stack$StackIterator* $tmp60 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp60, self);
    $tmp59 = $tmp60;
    $tmp58 = ((panda$collections$Iterator*) $tmp59);
    $returnValue57 = $tmp58;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
    return $returnValue57;
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    panda$core$Int64 $returnValue62;
    $returnValue62 = self->contents->count;
    return $returnValue62;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $returnValue64;
    panda$core$String* $tmp65;
    panda$core$String* $tmp66;
    panda$core$String* $tmp67 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    $tmp66 = $tmp67;
    $tmp65 = $tmp66;
    $returnValue64 = $tmp65;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    return $returnValue64;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp69;
    panda$collections$Array* $tmp70;
    self->contents = NULL;
    panda$collections$Array* $tmp71 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp71);
    $tmp70 = $tmp71;
    $tmp69 = $tmp70;
    self->contents = $tmp69;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp69));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp70));
}
void panda$collections$Stack$cleanup(panda$collections$Stack* self) {
    int $tmp74;
    {
    }
    $tmp74 = -1;
    goto $l72;
    $l72:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp74) {
        case -1: goto $l75;
    }
    $l75:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

