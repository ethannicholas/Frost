#include "org/pandalanguage/json/Position.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$String* org$pandalanguage$json$Position$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = org$pandalanguage$json$Position$convert$R$panda$core$String(((org$pandalanguage$json$Position$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void org$pandalanguage$json$Position$cleanup$shim(panda$core$Object* p0) {
    org$pandalanguage$json$Position$cleanup(((org$pandalanguage$json$Position$wrapper*) p0)->value);

}

static panda$core$String $s1;
org$pandalanguage$json$Position$class_type org$pandalanguage$json$Position$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$json$Position$convert$R$panda$core$String$shim, org$pandalanguage$json$Position$cleanup$shim} };

static panda$core$String $s2;
org$pandalanguage$json$Position$wrapperclass_type org$pandalanguage$json$Position$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { org$pandalanguage$json$Position$convert$R$panda$core$String$shim, org$pandalanguage$json$Position$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 31, -5210778280495041410, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x6a\x73\x6f\x6e\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e", 31, -5210778280495041410, NULL };
static panda$core$String $s16 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2e\x70\x61\x6e\x64\x61", 14, -2904814050009372044, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

org$pandalanguage$json$Position org$pandalanguage$json$Position$init() {

org$pandalanguage$json$Position local0;
// line 10
panda$core$Int64 $tmp3 = (panda$core$Int64) {1};
panda$core$Int64* $tmp4 = &(&local0)->line;
*$tmp4 = $tmp3;
// line 11
panda$core$Int64 $tmp5 = (panda$core$Int64) {1};
panda$core$Int64* $tmp6 = &(&local0)->column;
*$tmp6 = $tmp5;
org$pandalanguage$json$Position $tmp7 = *(&local0);
return $tmp7;

}
org$pandalanguage$json$Position org$pandalanguage$json$Position$init$panda$core$Int64$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

org$pandalanguage$json$Position local0;
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
org$pandalanguage$json$Position $tmp19 = *(&local0);
return $tmp19;

}
panda$core$String* org$pandalanguage$json$Position$convert$R$panda$core$String(org$pandalanguage$json$Position param0) {

// line 22
panda$core$Int64 $tmp20 = param0.line;
panda$core$String* $tmp21 = panda$core$Int64$convert$R$panda$core$String($tmp20);
panda$core$String* $tmp22 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp21, &$s23);
panda$core$Int64 $tmp24 = param0.column;
panda$core$Int64$wrapper* $tmp25;
$tmp25 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp25->value = $tmp24;
panda$core$String* $tmp26 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp22, ((panda$core$Object*) $tmp25));
panda$core$String* $tmp27 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp26, &$s28);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
return $tmp27;

}
void org$pandalanguage$json$Position$cleanup(org$pandalanguage$json$Position param0) {

return;

}






