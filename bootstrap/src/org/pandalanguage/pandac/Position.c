#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Int64 org$pandalanguage$pandac$Position$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = org$pandalanguage$pandac$Position$get_hash$R$panda$core$Int64(((org$pandalanguage$pandac$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(((org$pandalanguage$pandac$Position$wrapper*) p0)->value, ((org$pandalanguage$pandac$Position$wrapper*) p1)->value);

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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$pandac$Position$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Position$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } org$pandalanguage$pandac$Position$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Position$_panda$collections$Key, { org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s1;
org$pandalanguage$pandac$Position$class_type org$pandalanguage$pandac$Position$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Position$_panda$core$Equatable, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, org$pandalanguage$pandac$Position$get_hash$R$panda$core$Int64$shim, org$pandalanguage$pandac$Position$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } org$pandalanguage$pandac$Position$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { org$pandalanguage$pandac$Position$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } org$pandalanguage$pandac$Position$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &org$pandalanguage$pandac$Position$wrapper_panda$collections$Key, { org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit$shim, panda$core$Equatable$$NEQ$panda$core$Equatable$T$R$panda$core$Bit} };

static panda$core$String $s2;
org$pandalanguage$pandac$Position$wrapperclass_type org$pandalanguage$pandac$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &org$pandalanguage$pandac$Position$wrapper_panda$core$Equatable, { org$pandalanguage$pandac$Position$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, -8054512512476460073, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 33, -8054512512476460073, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x70\x61\x6e\x64\x61", 14, -2904814050009372044, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s50 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
int64_t $tmp9 = param0.value;
int64_t $tmp10 = $tmp8.value;
bool $tmp11 = $tmp9 != $tmp10;
panda$core$Bit $tmp12 = (panda$core$Bit) {$tmp11};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {0};
int64_t $tmp15 = param1.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 != $tmp16;
panda$core$Bit $tmp18 = (panda$core$Bit) {$tmp17};
*(&local1) = $tmp18;
goto block3;
block2:;
*(&local1) = $tmp12;
goto block3;
block3:;
panda$core$Bit $tmp19 = *(&local1);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {15};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s22, $tmp21);
abort(); // unreachable
block4:;
// line 16
panda$core$Int64* $tmp23 = &(&local0)->line;
*$tmp23 = param0;
// line 17
panda$core$Int64* $tmp24 = &(&local0)->column;
*$tmp24 = param1;
org$pandalanguage$pandac$Position $tmp25 = *(&local0);
return $tmp25;

}
panda$core$Bit org$pandalanguage$pandac$Position$$EQ$org$pandalanguage$pandac$Position$R$panda$core$Bit(org$pandalanguage$pandac$Position param0, org$pandalanguage$pandac$Position param1) {

panda$core$Bit local0;
// line 22
panda$core$Int64 $tmp26 = param0.line;
panda$core$Int64 $tmp27 = param1.line;
panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp26, $tmp27);
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp30 = param0.column;
panda$core$Int64 $tmp31 = param1.column;
panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp30, $tmp31);
*(&local0) = $tmp32;
goto block3;
block2:;
*(&local0) = $tmp28;
goto block3;
block3:;
panda$core$Bit $tmp33 = *(&local0);
return $tmp33;

}
panda$core$Int64 org$pandalanguage$pandac$Position$get_hash$R$panda$core$Int64(org$pandalanguage$pandac$Position param0) {

// line 27
panda$core$Int64 $tmp34 = param0.line;
panda$core$Int64 $tmp35 = (panda$core$Int64) {16};
panda$core$Int64 $tmp36 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp34, $tmp35);
panda$core$Int64 $tmp37 = param0.column;
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 + $tmp39;
panda$core$Int64 $tmp41 = (panda$core$Int64) {$tmp40};
return $tmp41;

}
panda$core$String* org$pandalanguage$pandac$Position$convert$R$panda$core$String(org$pandalanguage$pandac$Position param0) {

// line 32
panda$core$Int64 $tmp42 = param0.line;
panda$core$String* $tmp43 = panda$core$Int64$convert$R$panda$core$String($tmp42);
panda$core$String* $tmp44 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp43, &$s45);
panda$core$Int64 $tmp46 = param0.column;
panda$core$Int64$wrapper* $tmp47;
$tmp47 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp47->value = $tmp46;
panda$core$String* $tmp48 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp44, ((panda$core$Object*) $tmp47));
panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp48, &$s50);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($7:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($5:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
// unreffing REF($3:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// unreffing REF($2:panda.core.String)
return $tmp49;

}
void org$pandalanguage$pandac$Position$cleanup(org$pandalanguage$pandac$Position param0) {

return;

}






