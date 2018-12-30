#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/core/String/Index.h"
#include "panda/core/Bit.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$String* panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(((panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup$shim(panda$core$Object* p0) {
    panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup(((panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapper*) p0)->value);

}

static panda$core$String $s1;
panda$core$Range$LTpanda$core$String$Index$Q$GT$class_type panda$core$Range$LTpanda$core$String$Index$Q$GT$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$shim, panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup$shim} };

static panda$core$String $s2;
panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass_type panda$core$Range$LTpanda$core$String$Index$Q$GT$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, NULL, { panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String$shim, panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup$shim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x3e", 42, 6344064505343177902, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3f\x3e", 42, 6344064505343177902, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

panda$core$Range$LTpanda$core$String$Index$Q$GT panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(panda$core$String$Index$nullable param0, panda$core$String$Index$nullable param1, panda$core$Bit param2) {

panda$core$Range$LTpanda$core$String$Index$Q$GT local0;
// line 30
panda$core$String$Index$nullable* $tmp3 = &(&local0)->min;
*$tmp3 = param0;
// line 31
panda$core$String$Index$nullable* $tmp4 = &(&local0)->max;
*$tmp4 = param1;
// line 32
panda$core$Bit* $tmp5 = &(&local0)->inclusive;
*$tmp5 = param2;
panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp6 = *(&local0);
return $tmp6;

}
panda$core$String* panda$core$Range$LTpanda$core$String$Index$Q$GT$convert$R$panda$core$String(panda$core$Range$LTpanda$core$String$Index$Q$GT param0) {

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
panda$core$String$Index$nullable $tmp9 = param0.min;
panda$core$Bit $tmp10 = panda$core$Bit$init$builtin_bit($tmp9.nonnull);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// line 39
panda$core$MutableString* $tmp12 = *(&local0);
panda$core$String$Index$nullable $tmp13 = param0.min;
panda$core$Object* $tmp14;
if ($tmp13.nonnull) {
    panda$core$String$Index$wrapper* $tmp15;
    $tmp15 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp15->value = ((panda$core$String$Index) $tmp13.value);
    $tmp14 = ((panda$core$Object*) $tmp15);
}
else {
    $tmp14 = NULL;
}
panda$core$MutableString$append$panda$core$Object($tmp12, $tmp14);
panda$core$Panda$unref$panda$core$Object$Q($tmp14);
goto block2;
block2:;
// line 41
panda$core$Bit $tmp16 = param0.inclusive;
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block5;
block3:;
// line 42
panda$core$MutableString* $tmp18 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp18, &$s19);
goto block4;
block5:;
// line 1
// line 45
panda$core$MutableString* $tmp20 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp20, &$s21);
goto block4;
block4:;
// line 47
panda$core$String$Index$nullable $tmp22 = param0.max;
panda$core$Bit $tmp23 = panda$core$Bit$init$builtin_bit($tmp22.nonnull);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block6; else goto block7;
block6:;
// line 48
panda$core$MutableString* $tmp25 = *(&local0);
panda$core$String$Index$nullable $tmp26 = param0.max;
panda$core$Object* $tmp27;
if ($tmp26.nonnull) {
    panda$core$String$Index$wrapper* $tmp28;
    $tmp28 = (panda$core$String$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$String$Index$wrapperclass);
    $tmp28->value = ((panda$core$String$Index) $tmp26.value);
    $tmp27 = ((panda$core$Object*) $tmp28);
}
else {
    $tmp27 = NULL;
}
panda$core$MutableString$append$panda$core$Object($tmp25, $tmp27);
panda$core$Panda$unref$panda$core$Object$Q($tmp27);
goto block7;
block7:;
// line 50
panda$core$MutableString* $tmp29 = *(&local0);
panda$core$String* $tmp30 = panda$core$MutableString$finish$R$panda$core$String($tmp29);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$MutableString* $tmp31 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp30;

}
void panda$core$Range$LTpanda$core$String$Index$Q$GT$cleanup(panda$core$Range$LTpanda$core$String$Index$Q$GT param0) {

return;

}

