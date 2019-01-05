#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$String* panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String(((panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$cleanup$shim(panda$core$Object* p0) {
    panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$cleanup(((panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapper*) p0)->value);

}

static panda$core$String $s1;
panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$class_type panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$shim, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$cleanup$shim} };

static panda$core$String $s2;
panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapperclass_type panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String$shim, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 60, 2154438304645515337, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 60, 2154438304645515337, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };

panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Int64$panda$core$Bit(panda$core$Int64$nullable param0, panda$core$Int64$nullable param1, panda$core$Int64 param2, panda$core$Bit param3) {

panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT local0;
// line 43
panda$core$Int64$nullable* $tmp3 = &(&local0)->start;
*$tmp3 = param0;
// line 44
panda$core$Int64$nullable* $tmp4 = &(&local0)->end;
*$tmp4 = param1;
// line 45
panda$core$Int64* $tmp5 = &(&local0)->step;
*$tmp5 = param2;
// line 46
panda$core$Bit* $tmp6 = &(&local0)->inclusive;
*$tmp6 = param3;
panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT $tmp7 = *(&local0);
return $tmp7;

}
panda$core$String* panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$convert$R$panda$core$String(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param0) {

panda$core$MutableString* local0 = NULL;
// line 51
panda$core$MutableString* $tmp8 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp8);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp9 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
*(&local0) = $tmp8;
// line 52
panda$core$Int64$nullable $tmp10 = param0.start;
panda$core$Bit $tmp11 = panda$core$Bit$init$builtin_bit($tmp10.nonnull);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block1:;
// line 53
panda$core$MutableString* $tmp13 = *(&local0);
panda$core$Int64$nullable $tmp14 = param0.start;
panda$core$Object* $tmp15;
if ($tmp14.nonnull) {
    panda$core$Int64$wrapper* $tmp16;
    $tmp16 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp16->value = ((panda$core$Int64) $tmp14.value);
    $tmp15 = ((panda$core$Object*) $tmp16);
}
else {
    $tmp15 = NULL;
}
panda$core$MutableString$append$panda$core$Object($tmp13, $tmp15);
panda$core$Panda$unref$panda$core$Object$Q($tmp15);
// unreffing REF($19:panda.core.Object)
goto block2;
block2:;
// line 55
panda$core$Bit $tmp17 = param0.inclusive;
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block5;
block3:;
// line 56
panda$core$MutableString* $tmp19 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp19, &$s20);
goto block4;
block5:;
// line 1
// line 59
panda$core$MutableString* $tmp21 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp21, &$s22);
goto block4;
block4:;
// line 61
panda$core$Int64$nullable $tmp23 = param0.end;
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit($tmp23.nonnull);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block6; else goto block7;
block6:;
// line 62
panda$core$MutableString* $tmp26 = *(&local0);
panda$core$Int64$nullable $tmp27 = param0.end;
panda$core$Object* $tmp28;
if ($tmp27.nonnull) {
    panda$core$Int64$wrapper* $tmp29;
    $tmp29 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp29->value = ((panda$core$Int64) $tmp27.value);
    $tmp28 = ((panda$core$Object*) $tmp29);
}
else {
    $tmp28 = NULL;
}
panda$core$MutableString$append$panda$core$Object($tmp26, $tmp28);
panda$core$Panda$unref$panda$core$Object$Q($tmp28);
// unreffing REF($47:panda.core.Object)
goto block7;
block7:;
// line 64
panda$core$MutableString* $tmp30 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp30, &$s31);
// line 65
panda$core$MutableString* $tmp32 = *(&local0);
panda$core$Int64 $tmp33 = param0.step;
panda$core$Int64$wrapper* $tmp34;
$tmp34 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp34->value = $tmp33;
panda$core$MutableString$append$panda$core$Object($tmp32, ((panda$core$Object*) $tmp34));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// unreffing REF($59:panda.core.Object)
// line 66
panda$core$MutableString* $tmp35 = *(&local0);
panda$core$String* $tmp36 = panda$core$MutableString$finish$R$panda$core$String($tmp35);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($66:panda.core.String)
panda$core$MutableString* $tmp37 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
// unreffing REF($1:panda.core.MutableString)
return $tmp36;

}
void panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$cleanup(panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param0) {

return;

}

