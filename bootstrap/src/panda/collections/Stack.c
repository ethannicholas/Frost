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
panda$collections$Stack$class_type panda$collections$Stack$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Stack$_panda$collections$Iterable, { panda$collections$Stack$convert$R$panda$core$String, panda$collections$Stack$cleanup, panda$collections$Stack$push$panda$collections$Stack$T, panda$collections$Stack$pop$R$panda$collections$Stack$T, panda$collections$Stack$pop$panda$collections$Stack$T, panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T, panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT$shim, panda$collections$Stack$get_count$R$panda$core$Int64} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, 4189143067940765470, NULL };
static panda$core$String $s7 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, -3717553610229014045, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s36 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s37 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x65\x78\x70\x65\x63\x74\x65\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54\x29", 95, -2894691554432978803, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, 5685017306878640050, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x70\x61\x6e\x64\x61", 11, -4463479324022222579, NULL };

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
    panda$core$Int64 $tmp24;
    panda$core$Object* $returnValue26;
    panda$core$Object* $tmp27;
    panda$core$Int64 $tmp2 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Int64$init$builtin_int64(&$tmp3, 0);
    panda$core$Bit $tmp4 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2, $tmp3);
    if ($tmp4.value) goto $l5; else goto $l6;
    $l6:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s7, (panda$core$Int64) { 47 }, &$s8);
    abort();
    $l5:;
    int $tmp11;
    {
        panda$core$Int64 $tmp12 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
        panda$core$Int64$init$builtin_int64(&$tmp13, 0);
        panda$core$Bit $tmp14 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp12, $tmp13);
        if ($tmp14.value) goto $l15; else goto $l16;
        $l16:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s17, (panda$core$Int64) { 48 });
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
        panda$core$Int64$init$builtin_int64(&$tmp24, 1);
        panda$core$Int64 $tmp25 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, $tmp24);
        panda$collections$Array$removeIndex$panda$core$Int64(self->contents, $tmp25);
        $tmp27 = result18;
        $returnValue26 = $tmp27;
        panda$core$Panda$ref$panda$core$Object($tmp27);
        $tmp11 = 0;
        goto $l9;
        $l28:;
        return $returnValue26;
    }
    $l9:;
    panda$core$Panda$unref$panda$core$Object(result18);
    result18 = NULL;
    switch ($tmp11) {
        case 0: goto $l28;
    }
    $l30:;
    abort();
}
void panda$collections$Stack$pop$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Object* p_expected) {
    panda$core$Object* $tmp31;
    panda$core$Int64 $tmp32;
    panda$core$Object* $tmp38;
    panda$core$Int64$init$builtin_int64(&$tmp32, 0);
    panda$core$Object* $tmp33 = panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(self, $tmp32);
    $tmp31 = $tmp33;
    panda$core$Panda$unref$panda$core$Object($tmp31);
    if (((panda$core$Bit) { $tmp31 == p_expected }).value) goto $l34; else goto $l35;
    $l35:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s36, (panda$core$Int64) { 66 }, &$s37);
    abort();
    $l34:;
    panda$core$Object* $tmp39 = panda$collections$Stack$pop$R$panda$collections$Stack$T(self);
    $tmp38 = $tmp39;
    panda$core$Panda$unref$panda$core$Object($tmp38);
}
panda$core$Object* panda$collections$Stack$$IDX$panda$core$Int64$R$panda$collections$Stack$T(panda$collections$Stack* self, panda$core$Int64 p_depth) {
    panda$core$Int64 $tmp41;
    panda$core$Object* $returnValue56;
    panda$core$Object* $tmp57;
    panda$core$Object* $tmp58;
    panda$core$Int64 $tmp59;
    panda$core$Int64$init$builtin_int64(&$tmp41, 0);
    panda$core$Bit $tmp42 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp41);
    bool $tmp40 = $tmp42.value;
    if (!$tmp40) goto $l43;
    panda$core$Int64 $tmp44 = panda$collections$Stack$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp45 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_depth, $tmp44);
    $tmp40 = $tmp45.value;
    $l43:;
    panda$core$Bit $tmp46 = { $tmp40 };
    if ($tmp46.value) goto $l47; else goto $l48;
    $l48:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s49, (panda$core$Int64) { 75 }, &$s50);
    abort();
    $l47:;
    panda$core$Int64 $tmp51 = panda$collections$Array$get_count$R$panda$core$Int64(self->contents);
    panda$core$Bit $tmp52 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp51, p_depth);
    if ($tmp52.value) goto $l53; else goto $l54;
    $l54:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s55, (panda$core$Int64) { 76 });
    abort();
    $l53:;
    panda$core$Int64$init$builtin_int64(&$tmp59, 1);
    panda$core$Int64 $tmp60 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->contents->count, $tmp59);
    panda$core$Int64 $tmp61 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp60, p_depth);
    panda$core$Object* $tmp62 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->contents, $tmp61);
    $tmp58 = $tmp62;
    $tmp57 = $tmp58;
    $returnValue56 = $tmp57;
    panda$core$Panda$ref$panda$core$Object($tmp57);
    panda$core$Panda$unref$panda$core$Object($tmp58);
    return $returnValue56;
}
panda$collections$Iterator* panda$collections$Stack$iterator$R$panda$collections$Iterator$LTpanda$collections$Stack$T$GT(panda$collections$Stack* self) {
    panda$collections$Iterator* $returnValue64;
    panda$collections$Iterator* $tmp65;
    panda$collections$Stack$StackIterator* $tmp66;
    panda$collections$Stack$StackIterator* $tmp67 = (panda$collections$Stack$StackIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$Stack$StackIterator$class);
    panda$collections$Stack$StackIterator$init$panda$collections$Stack$LTpanda$collections$Stack$StackIterator$T$GT($tmp67, self);
    $tmp66 = $tmp67;
    $tmp65 = ((panda$collections$Iterator*) $tmp66);
    $returnValue64 = $tmp65;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    return $returnValue64;
}
panda$core$Int64 panda$collections$Stack$get_count$R$panda$core$Int64(panda$collections$Stack* self) {
    panda$core$Int64 $returnValue69;
    $returnValue69 = self->contents->count;
    return $returnValue69;
}
panda$core$String* panda$collections$Stack$convert$R$panda$core$String(panda$collections$Stack* self) {
    panda$core$String* $returnValue71;
    panda$core$String* $tmp72;
    panda$core$String* $tmp73;
    panda$core$String* $tmp74 = panda$collections$Array$convert$R$panda$core$String(self->contents);
    $tmp73 = $tmp74;
    $tmp72 = $tmp73;
    $returnValue71 = $tmp72;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp73));
    return $returnValue71;
}
void panda$collections$Stack$init(panda$collections$Stack* self) {
    panda$collections$Array* $tmp76;
    panda$collections$Array* $tmp77;
    self->contents = NULL;
    panda$collections$Array* $tmp78 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
    panda$collections$Array$init($tmp78);
    $tmp77 = $tmp78;
    $tmp76 = $tmp77;
    self->contents = $tmp76;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp76));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp77));
}
void panda$collections$Stack$cleanup(panda$collections$Stack* self) {
    int $tmp81;
    {
    }
    $tmp81 = -1;
    goto $l79;
    $l79:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp81) {
        case -1: goto $l82;
    }
    $l82:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->contents));
}

