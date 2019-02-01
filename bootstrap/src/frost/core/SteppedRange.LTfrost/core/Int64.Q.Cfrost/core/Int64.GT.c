#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$get_asString$R$frost$core$String(((frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$cleanup$shim(frost$core$Object* p0) {
    frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$cleanup(((frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$wrapper*) p0)->value);

}

static frost$core$String $s1;
frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$class_type frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$get_asString$R$frost$core$String$shim, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$cleanup$shim} };

static frost$core$String $s2;
frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$wrapperclass_type frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$get_asString$R$frost$core$String$shim, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 60, -3612829122927963865, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 60, -3612829122927963865, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };

frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Int64$frost$core$Bit(frost$core$Int64$nullable param0, frost$core$Int64$nullable param1, frost$core$Int64 param2, frost$core$Bit param3) {

frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT local0;
// line 43
frost$core$Int64$nullable* $tmp3 = &(&local0)->start;
*$tmp3 = param0;
// line 44
frost$core$Int64$nullable* $tmp4 = &(&local0)->end;
*$tmp4 = param1;
// line 45
frost$core$Int64* $tmp5 = &(&local0)->step;
*$tmp5 = param2;
// line 46
frost$core$Bit* $tmp6 = &(&local0)->inclusive;
*$tmp6 = param3;
frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT $tmp7 = *(&local0);
return $tmp7;

}
frost$core$String* frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$get_asString$R$frost$core$String(frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param0) {

frost$core$MutableString* local0 = NULL;
// line 51
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp8 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp8);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$MutableString* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// line 52
frost$core$Int64$nullable $tmp10 = param0.start;
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit($tmp10.nonnull);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block1:;
// line 53
frost$core$MutableString* $tmp13 = *(&local0);
frost$core$Int64$nullable $tmp14 = param0.start;
frost$core$Object* $tmp15;
if ($tmp14.nonnull) {
    frost$core$Int64$wrapper* $tmp16;
    $tmp16 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp16->value = ((frost$core$Int64) $tmp14.value);
    $tmp15 = ((frost$core$Object*) $tmp16);
}
else {
    $tmp15 = NULL;
}
frost$core$MutableString$append$frost$core$Object($tmp13, $tmp15);
frost$core$Frost$unref$frost$core$Object$Q($tmp15);
goto block2;
block2:;
// line 55
frost$core$Bit $tmp17 = param0.inclusive;
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block5;
block3:;
// line 56
frost$core$MutableString* $tmp19 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp19, &$s20);
goto block4;
block5:;
// line 1
// line 59
frost$core$MutableString* $tmp21 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp21, &$s22);
goto block4;
block4:;
// line 61
frost$core$Int64$nullable $tmp23 = param0.end;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit($tmp23.nonnull);
bool $tmp25 = $tmp24.value;
if ($tmp25) goto block6; else goto block7;
block6:;
// line 62
frost$core$MutableString* $tmp26 = *(&local0);
frost$core$Int64$nullable $tmp27 = param0.end;
frost$core$Object* $tmp28;
if ($tmp27.nonnull) {
    frost$core$Int64$wrapper* $tmp29;
    $tmp29 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp29->value = ((frost$core$Int64) $tmp27.value);
    $tmp28 = ((frost$core$Object*) $tmp29);
}
else {
    $tmp28 = NULL;
}
frost$core$MutableString$append$frost$core$Object($tmp26, $tmp28);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
goto block7;
block7:;
// line 64
frost$core$MutableString* $tmp30 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp30, &$s31);
// line 65
frost$core$MutableString* $tmp32 = *(&local0);
frost$core$Int64 $tmp33 = param0.step;
frost$core$Int64$wrapper* $tmp34;
$tmp34 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp34->value = $tmp33;
frost$core$MutableString$append$frost$core$Object($tmp32, ((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// line 66
frost$core$MutableString* $tmp35 = *(&local0);
frost$core$String* $tmp36 = frost$core$MutableString$finish$R$frost$core$String($tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$MutableString* $tmp37 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp36;

}
void frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$cleanup(frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param0) {

return;

}

