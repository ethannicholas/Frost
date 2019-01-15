#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/UInt64.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$convert$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$convert$R$frost$core$String(((frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$cleanup$shim(frost$core$Object* p0) {
    frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$cleanup(((frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$wrapper*) p0)->value);

}

static frost$core$String $s1;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$class_type frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$convert$R$frost$core$String$shim, frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$cleanup$shim} };

static frost$core$String $s2;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$wrapperclass_type frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$convert$R$frost$core$String$shim, frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$cleanup$shim} };
static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 61, 68090063667451402, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 61, 68090063667451402, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };

frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$init$frost$core$UInt64$frost$core$UInt64$frost$core$UInt64$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1, frost$core$UInt64 param2, frost$core$Bit param3) {

frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT local0;
// line 43
frost$core$UInt64* $tmp3 = &(&local0)->start;
*$tmp3 = param0;
// line 44
frost$core$UInt64* $tmp4 = &(&local0)->end;
*$tmp4 = param1;
// line 45
frost$core$UInt64* $tmp5 = &(&local0)->step;
*$tmp5 = param2;
// line 46
frost$core$Bit* $tmp6 = &(&local0)->inclusive;
*$tmp6 = param3;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT $tmp7 = *(&local0);
return $tmp7;

}
frost$core$String* frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$convert$R$frost$core$String(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$MutableString* local0 = NULL;
// line 51
frost$core$MutableString* $tmp8 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp8);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$MutableString* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// unreffing REF($1:frost.core.MutableString)
// line 52
frost$core$UInt64 $tmp10 = param0.start;
frost$core$Bit $tmp11 = frost$core$Bit$init$builtin_bit(true);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block1:;
// line 53
frost$core$MutableString* $tmp13 = *(&local0);
frost$core$UInt64 $tmp14 = param0.start;
frost$core$UInt64$wrapper* $tmp15;
$tmp15 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp15->value = $tmp14;
frost$core$MutableString$append$frost$core$Object($tmp13, ((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($21:frost.core.Object)
goto block2;
block2:;
// line 55
frost$core$Bit $tmp16 = param0.inclusive;
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block5;
block3:;
// line 56
frost$core$MutableString* $tmp18 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp18, &$s19);
goto block4;
block5:;
// line 1
// line 59
frost$core$MutableString* $tmp20 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp20, &$s21);
goto block4;
block4:;
// line 61
frost$core$UInt64 $tmp22 = param0.end;
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(true);
bool $tmp24 = $tmp23.value;
if ($tmp24) goto block6; else goto block7;
block6:;
// line 62
frost$core$MutableString* $tmp25 = *(&local0);
frost$core$UInt64 $tmp26 = param0.end;
frost$core$UInt64$wrapper* $tmp27;
$tmp27 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp27->value = $tmp26;
frost$core$MutableString$append$frost$core$Object($tmp25, ((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($48:frost.core.Object)
goto block7;
block7:;
// line 64
frost$core$MutableString* $tmp28 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp28, &$s29);
// line 65
frost$core$MutableString* $tmp30 = *(&local0);
frost$core$UInt64 $tmp31 = param0.step;
frost$core$UInt64$wrapper* $tmp32;
$tmp32 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp32->value = $tmp31;
frost$core$MutableString$append$frost$core$Object($tmp30, ((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
// unreffing REF($60:frost.core.Object)
// line 66
frost$core$MutableString* $tmp33 = *(&local0);
frost$core$String* $tmp34 = frost$core$MutableString$finish$R$frost$core$String($tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
// unreffing REF($67:frost.core.String)
frost$core$MutableString* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp34;

}
void frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$cleanup(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

return;

}






