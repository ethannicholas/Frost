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
__attribute__((weak)) panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim(panda$collections$Stack* p0) {
    panda$collections$Iterator* result = panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$Stack$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim} };

static panda$core$String $s1;
panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$collections$Stack$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$pop$panda$collections$Stack$T, panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$clear, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, -3717553610229014045, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x65\x78\x70\x65\x63\x74\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54\x29", 95, -2894691554432978803, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s52 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, 5685017306878640050, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };

void panda$collections$Stack$push$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_v) {
    panda$collections$Array$add$panda$collections$Array$T(self->contents, p_v);
}
panda$core$Object* panda$collections$Stack$pop$R$panda$collections$Stack$T(panda$collections$Stack* self) {
    panda$core$Int64 $tmp3;
    panda$core$Int64 $tmp13;
    panda$core$Object* result18 = NULL;
    panda$core$Object* $tmp19;
    panda$core$Object* $tmp20;
    panda$core$Int64 $tmp21;
    panda$core$Object* $tmp24;
    panda$core$Int64 $tmp25;
    panda$core$Object* $returnValue28;
    panda$core$Object* $tmp29;
    panda$core$Int64 $tmp2 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    panda$core$Bit $tmp4 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2, $tmp3);
    if ($tmp4.value) goto $l5; else goto $l6;
    $l6:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s7, (panda$core$Int64) { 49 }, &$s8);
    abort();
    $l5:;
    int $tmp11;
    {
        panda$core$Int64 $tmp12 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
        panda$core$Int64$init$builtin_int64(&$tmp13, 0);
        panda$core$Bit $tmp14 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp12, $tmp13);
        if ($tmp14.value) goto $l15; else goto $l16;
        $l16:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s17, (panda$core$Int64) { 50 });
        abort();
        $l15:;
        panda$core$Int64$init$builtin_int64(&$tmp21, 1);
        panda$core$Int64 $tmp22 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, $tmp21);
        panda$core$Object* $tmp23 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp22);
        $tmp20 = $tmp23;
        $tmp19 = $tmp20;
        result18 = $tmp19;
        panda$core$Panda$ref$panda$core$Object($tmp19);
        panda$core$Panda$unref$panda$core$Object($tmp20);
        panda$core$Int64$init$builtin_int64(&$tmp25, 1);
        panda$core$Int64 $tmp26 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, $tmp25);
        panda$core$Object* $tmp27 = panda$collections$Array$removeIndex$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp26);
        $tmp24 = $tmp27;
        panda$core$Panda$unref$panda$core$Object($tmp24);
        $tmp29 = result18;
        $returnValue28 = $tmp29;
        panda$core$Panda$ref$panda$core$Object($tmp29);
        $tmp11 = 0;
        goto $l9;
        $l30:;
        return $returnValue28;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(result18);
    result18 = NULL;
    switch ($tmp11) {
        case 0: goto $l30;
    }
    $l32:;
    abort();
}
void panda$collections$Stack$pop$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_expected) {
    panda$core$Object* $tmp33;
    panda$core$Int64 $tmp34;
    panda$core$Object* $tmp40;
    panda$core$Int64$init$builtin_int64(&$tmp34, 0);
    panda$core$Object* $tmp35 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self, $tmp34);
    $tmp33 = $tmp35;
    panda$core$Panda$unref$panda$core$Object($tmp33);
    if (((panda$core$Bit) { $tmp33 == p_expected }).value) goto $l36; else goto $l37;
    $l37:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s38, (panda$core$Int64) { 74 }, &$s39);
    abort();
    $l36:;
    panda$core$Object* $tmp41 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self);
    $tmp40 = $tmp41;
    panda$core$Panda$unref$panda$core$Object($tmp40);
}
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp43;
    panda$core$Object* $returnValue58;
    panda$core$Object* $tmp59;
    panda$core$Object* $tmp60;
    panda$core$Int64 $tmp61;
    panda$core$Int64$init$builtin_int64(&$tmp43, 0);
    panda$core$Bit $tmp44 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp43);
    bool $tmp42 = $tmp44.value;
    if (!$tmp42) goto $l45;
    panda$core$Int64 $tmp46 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp47 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp46);
    $tmp42 = $tmp47.value;
    $l45:;
    panda$core$Bit $tmp48 = { $tmp42 };
    if ($tmp48.value) goto $l49; else goto $l50;
    $l50:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s51, (panda$core$Int64) { 83 }, &$s52);
    abort();
    $l49:;
    panda$core$Int64 $tmp53 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp54 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp53, p_depth);
    if ($tmp54.value) goto $l55; else goto $l56;
    $l56:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s57, (panda$core$Int64) { 84 });
    abort();
    $l55:;
    panda$core$Int64$init$builtin_int64(&$tmp61, 1);
    panda$core$Int64 $tmp62 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, $tmp61);
    panda$core$Int64 $tmp63 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp62, p_depth);
    panda$core$Object* $tmp64 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp63);
    $tmp60 = $tmp64;
    $tmp59 = $tmp60;
    $returnValue58 = $tmp59;
    panda$core$Panda$ref$panda$core$Object($tmp59);
    panda$core$Panda$unref$panda$core$Object($tmp60);
    return $returnValue58;
}
void panda$collections$Stack$clear(panda$collections$Stack* self) {
    panda$collections$Array$clear(self->contents);
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Iterator* $returnValue66;
    panda$collections$Iterator* $tmp67;
    panda$collections$Stack$StackIterator* $tmp68;
    panda$collections$Stack$StackIterator* $tmp69 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp69, self);
    $tmp68 = $tmp69;
    $tmp67 = ((panda$collections$Iterator*) $tmp68);
    $returnValue66 = $tmp67;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
    return $returnValue66;
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    panda$core$Int64 $returnValue71;
    $returnValue71 = self->contents->count;
    return $returnValue71;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $returnValue73;
    panda$core$String* $tmp74;
    panda$core$String* $tmp75;
    panda$core$String* $tmp76 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    $tmp75 = $tmp76;
    $tmp74 = $tmp75;
    $returnValue73 = $tmp74;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    return $returnValue73;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp78;
    panda$collections$Array* $tmp79;
    self->contents = NULL;
    panda$collections$Array* $tmp80 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp80);
    $tmp79 = $tmp80;
    $tmp78 = $tmp79;
    self->contents = $tmp78;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
}
void panda$collections$Stack$cleanup(panda$collections$Stack* self) {
    int $tmp83;
    {
    }
    $tmp83 = -1;
    goto $l81;
    $l81:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp83) {
        case -1: goto $l84;
    }
    $l84:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

