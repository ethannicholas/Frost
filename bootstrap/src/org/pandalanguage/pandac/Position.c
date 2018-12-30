#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(((org$pandalanguage$pandac$Position$wrapper*) p0)->value, ((org$pandalanguage$pandac$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(((org$pandalanguage$pandac$Position$wrapper*) p0)->value, ((org$pandalanguage$pandac$Position$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$pandac$Position$convert$R$panda$core$String(((org$pandalanguage$pandac$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) void org$pandalanguage$pandac$Position$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$pandac$Position$cleanup(((org$pandalanguage$pandac$Position$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Position$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim} };

static panda$core$String $s1;
org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Position$_panda$core$Equatable, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$Position$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim} };

static panda$core$String $s2;
org$pandalanguage$pandac$Position$wrapperclass_type org$pandalanguage$pandac$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Position$wrapper_panda$core$Equatable, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, -8054512512476460073, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, -8054512512476460073, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x70\x61\x6e\x64\x61", 14, -2904814050009372044, NULL };
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s44 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$Position$init() {

org$pandalanguage$pandac$Position local0;
// line 10
panda$core$Int64 $tmp3 = (panda$core$Int64) {1};
panda$core$Int64* $tmp4 = &(&local0)->line;
*$tmp4 = $tmp3;
// line 11
panda$core$Int64 $tmp5 = (panda$core$Int64) {1};
panda$core$Int64* $tmp6 = &(&local0)->column;
*$tmp6 = $tmp5;
org$pandalanguage$pandac$Position $tmp7 = *(&local0);
return $tmp7;

}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$Position$init$panda$core$Int64$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

org$pandalanguage$pandac$Position local0;
panda$core$Bit local1;
// line 15
panda$core$Int64 $tmp8 = (panda$core$Int64) {0};
panda$core$Bit $tmp9 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(param0, $tmp8);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp11 = (panda$core$Int64) {0};
panda$core$Bit $tmp12 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(param1, $tmp11);
*(&local1) = $tmp12;
goto block3;
block2:;
*(&local1) = $tmp9;
goto block3;
block3:;
panda$core$Bit $tmp13 = *(&local1);
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp15 = (panda$core$Int64) {15};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s16, $tmp15);
abort(); // unreachable
block4:;
// line 16
panda$core$Int64* $tmp17 = &(&local0)->line;
*$tmp17 = param0;
// line 17
panda$core$Int64* $tmp18 = &(&local0)->column;
*$tmp18 = param1;
org$pandalanguage$pandac$Position $tmp19 = *(&local0);
return $tmp19;

}
panda$core$Bit org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(org$pandalanguage$pandac$Position param0, org$pandalanguage$pandac$Position param1) {

panda$core$Bit local0;
// line 22
panda$core$Int64 $tmp20 = param0.line;
panda$core$Int64 $tmp21 = param1.line;
panda$core$Bit $tmp22 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp20, $tmp21);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp24 = param0.column;
panda$core$Int64 $tmp25 = param1.column;
panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp24, $tmp25);
*(&local0) = $tmp26;
goto block3;
block2:;
*(&local0) = $tmp22;
goto block3;
block3:;
panda$core$Bit $tmp27 = *(&local0);
return $tmp27;

}
panda$core$Bit org$pandalanguage$pandac$Position$$NEQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(org$pandalanguage$pandac$Position param0, org$pandalanguage$pandac$Position param1) {

panda$core$Bit local0;
// line 27
panda$core$Int64 $tmp28 = param0.line;
panda$core$Int64 $tmp29 = param1.line;
panda$core$Bit $tmp30 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp28, $tmp29);
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block1; else goto block2;
block1:;
*(&local0) = $tmp30;
goto block3;
block2:;
panda$core$Int64 $tmp32 = param0.column;
panda$core$Int64 $tmp33 = param1.column;
panda$core$Bit $tmp34 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp32, $tmp33);
*(&local0) = $tmp34;
goto block3;
block3:;
panda$core$Bit $tmp35 = *(&local0);
return $tmp35;

}
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position param0) {

// line 32
panda$core$Int64 $tmp36 = param0.line;
panda$core$String* $tmp37 = panda$core$Int64$convert$R$panda$core$String($tmp36);
panda$core$String* $tmp38 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s39);
panda$core$Int64 $tmp40 = param0.column;
panda$core$Int64$wrapper* $tmp41;
$tmp41 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp41->value = $tmp40;
panda$core$String* $tmp42 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp38, ((panda$core$Object*) $tmp41));
panda$core$String* $tmp43 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp42, &$s44);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
return $tmp43;

}
void org$pandalanguage$pandac$Position$cleanup(org$pandalanguage$pandac$Position param0) {

return;

}






