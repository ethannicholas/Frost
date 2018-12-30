#include "panda/core/Range.LTpanda/core/String/Index.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$String* panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String(((panda$core$Range$LTpanda$core$String$Index$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Range$LTpanda$core$String$Index$GT$cleanup$shim(panda$core$Object* p0) {
    panda$core$Range$LTpanda$core$String$Index$GT$cleanup(((panda$core$Range$LTpanda$core$String$Index$GT$wrapper*) p0)->value);

}

static panda$core$String $s1;
panda$core$Range$LTpanda$core$String$Index$GT$class_type panda$core$Range$LTpanda$core$String$Index$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String$shim, panda$core$Range$LTpanda$core$String$Index$GT$cleanup$shim} };

static panda$core$String $s2;
panda$core$Range$LTpanda$core$String$Index$GT$wrapperclass_type panda$core$Range$LTpanda$core$String$Index$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String$shim, panda$core$Range$LTpanda$core$String$Index$GT$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 41, -850392632308956241, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 41, -850392632308956241, NULL };
static panda$core$String $s18 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s20 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

panda$core$Range$LTpanda$core$String$Index$GT panda$core$Range$LTpanda$core$String$Index$GT$init$panda$core$String$Index$panda$core$String$Index$panda$core$Bit(panda$core$String$Index param0, panda$core$String$Index param1, panda$core$Bit param2) {

panda$core$Range$LTpanda$core$String$Index$GT local0;
// line 30
panda$core$String$Index* $tmp3 = &(&local0)->min;
*$tmp3 = param0;
// line 31
panda$core$String$Index* $tmp4 = &(&local0)->max;
*$tmp4 = param1;
// line 32
panda$core$Bit* $tmp5 = &(&local0)->inclusive;
*$tmp5 = param2;
panda$core$Range$LTpanda$core$String$Index$GT $tmp6 = *(&local0);
return $tmp6;

}
panda$core$String* panda$core$Range$LTpanda$core$String$Index$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$String$Index$GT param0) {

panda$core$MutableString* local0 = NULL;
// line 37
panda$core$MutableString* $tmp7 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp7);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp8 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
*(&local0) = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// line 38
panda$core$String$Index $tmp9 = param0.min;
panda$core$Bit $tmp10 = panda$core$Bit$init$builtin_bit(true);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// line 39
panda$core$MutableString* $tmp12 = *(&local0);
panda$core$String$Index $tmp13 = param0.min;
panda$core$String$Index$wrapper* $tmp14;
$tmp14 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp14->value = $tmp13;
panda$core$MutableString$append$panda$core$Object($tmp12, ((panda$core$Object*) $tmp14));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
goto block2;
block2:;
// line 41
panda$core$Bit $tmp15 = param0.inclusive;
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block5;
block3:;
// line 42
panda$core$MutableString* $tmp17 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp17, &$s18);
goto block4;
block5:;
// line 1
// line 45
panda$core$MutableString* $tmp19 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp19, &$s20);
goto block4;
block4:;
// line 47
panda$core$String$Index $tmp21 = param0.max;
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(true);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block6; else goto block7;
block6:;
// line 48
panda$core$MutableString* $tmp24 = *(&local0);
panda$core$String$Index $tmp25 = param0.max;
panda$core$String$Index$wrapper* $tmp26;
$tmp26 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
$tmp26->value = $tmp25;
panda$core$MutableString$append$panda$core$Object($tmp24, ((panda$core$Object*) $tmp26));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
goto block7;
block7:;
// line 50
panda$core$MutableString* $tmp27 = *(&local0);
panda$core$String* $tmp28 = panda$core$MutableString$finish$R$panda$core$String($tmp27);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$MutableString* $tmp29 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp28;

}
void panda$core$Range$LTpanda$core$String$Index$GT$cleanup(panda$core$Range$LTpanda$core$String$Index$GT param0) {

return;

}

