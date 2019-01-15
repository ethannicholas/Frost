#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$Range$LTfrost$core$Int64$Q$GT$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Range$LTfrost$core$Int64$Q$GT$convert$R$frost$core$String(((frost$core$Range$LTfrost$core$Int64$Q$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Range$LTfrost$core$Int64$Q$GT$cleanup$shim(frost$core$Object* p0) {
    frost$core$Range$LTfrost$core$Int64$Q$GT$cleanup(((frost$core$Range$LTfrost$core$Int64$Q$GT$wrapper*) p0)->value);

}

static frost$core$String $s1;
frost$core$Range$LTfrost$core$Int64$Q$GT$class_type frost$core$Range$LTfrost$core$Int64$Q$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Range$LTfrost$core$Int64$Q$GT$convert$R$frost$core$String$shim, frost$core$Range$LTfrost$core$Int64$Q$GT$cleanup$shim} };

static frost$core$String $s2;
frost$core$Range$LTfrost$core$Int64$Q$GT$wrapperclass_type frost$core$Range$LTfrost$core$Int64$Q$GT$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Range$LTfrost$core$Int64$Q$GT$convert$R$frost$core$String$shim, frost$core$Range$LTfrost$core$Int64$Q$GT$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e", 35, 6209060535781738018, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x3e", 35, 6209060535781738018, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };

frost$core$Range$LTfrost$core$Int64$Q$GT frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(frost$core$Int64$nullable param0, frost$core$Int64$nullable param1, frost$core$Bit param2) {

frost$core$Range$LTfrost$core$Int64$Q$GT local0;
// line 30
frost$core$Int64$nullable* $tmp3 = &(&local0)->min;
*$tmp3 = param0;
// line 31
frost$core$Int64$nullable* $tmp4 = &(&local0)->max;
*$tmp4 = param1;
// line 32
frost$core$Bit* $tmp5 = &(&local0)->inclusive;
*$tmp5 = param2;
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp6 = *(&local0);
return $tmp6;

}
frost$core$String* frost$core$Range$LTfrost$core$Int64$Q$GT$convert$R$frost$core$String(frost$core$Range$LTfrost$core$Int64$Q$GT param0) {

frost$core$MutableString* local0 = NULL;
// line 37
frost$core$MutableString* $tmp7 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp7);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$MutableString* $tmp8 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
*(&local0) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($1:frost.core.MutableString)
// line 38
frost$core$Int64$nullable $tmp9 = param0.min;
frost$core$Bit $tmp10 = frost$core$Bit$init$builtin_bit($tmp9.nonnull);
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// line 39
frost$core$MutableString* $tmp12 = *(&local0);
frost$core$Int64$nullable $tmp13 = param0.min;
frost$core$Object* $tmp14;
if ($tmp13.nonnull) {
    frost$core$Int64$wrapper* $tmp15;
    $tmp15 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp15->value = ((frost$core$Int64) $tmp13.value);
    $tmp14 = ((frost$core$Object*) $tmp15);
}
else {
    $tmp14 = NULL;
}
frost$core$MutableString$append$frost$core$Object($tmp12, $tmp14);
frost$core$Frost$unref$frost$core$Object$Q($tmp14);
// unreffing REF($22:frost.core.Object)
goto block2;
block2:;
// line 41
frost$core$Bit $tmp16 = param0.inclusive;
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block5;
block3:;
// line 42
frost$core$MutableString* $tmp18 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp18, &$s19);
goto block4;
block5:;
// line 1
// line 45
frost$core$MutableString* $tmp20 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp20, &$s21);
goto block4;
block4:;
// line 47
frost$core$Int64$nullable $tmp22 = param0.max;
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit($tmp22.nonnull);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block6; else goto block7;
block6:;
// line 48
frost$core$MutableString* $tmp25 = *(&local0);
frost$core$Int64$nullable $tmp26 = param0.max;
frost$core$Object* $tmp27;
if ($tmp26.nonnull) {
    frost$core$Int64$wrapper* $tmp28;
    $tmp28 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp28->value = ((frost$core$Int64) $tmp26.value);
    $tmp27 = ((frost$core$Object*) $tmp28);
}
else {
    $tmp27 = NULL;
}
frost$core$MutableString$append$frost$core$Object($tmp25, $tmp27);
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
// unreffing REF($50:frost.core.Object)
goto block7;
block7:;
// line 50
frost$core$MutableString* $tmp29 = *(&local0);
frost$core$String* $tmp30 = frost$core$MutableString$finish$R$frost$core$String($tmp29);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
// unreffing REF($58:frost.core.String)
frost$core$MutableString* $tmp31 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp30;

}
void frost$core$Range$LTfrost$core$Int64$Q$GT$cleanup(frost$core$Range$LTfrost$core$Int64$Q$GT param0) {

return;

}

