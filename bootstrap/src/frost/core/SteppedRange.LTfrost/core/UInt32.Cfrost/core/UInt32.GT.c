#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/UInt32.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$get_asString$R$frost$core$String(((frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$cleanup$shim(frost$core$Object* p0) {
    frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$cleanup(((frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapper*) p0)->value);

}

static frost$core$String $s1;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$class_type frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$get_asString$R$frost$core$String$shim, frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$cleanup$shim} };

static frost$core$String $s2;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapperclass_type frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$get_asString$R$frost$core$String$shim, frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$cleanup$shim} };typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);
typedef frost$core$String* (*$fn40)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x3e", 61, -782986671369247414, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x3e", 61, -782986671369247414, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2e", 3, -587370003925626343, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x62\x79\x20", 4, -229567638518546866, NULL };

frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$init$frost$core$UInt32$frost$core$UInt32$frost$core$UInt32$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1, frost$core$UInt32 param2, frost$core$Bit param3) {

frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:43
frost$core$UInt32* $tmp3 = &(&local0)->start;
*$tmp3 = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:44
frost$core$UInt32* $tmp4 = &(&local0)->end;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:45
frost$core$UInt32* $tmp5 = &(&local0)->step;
*$tmp5 = param2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:46
frost$core$Bit* $tmp6 = &(&local0)->inclusive;
*$tmp6 = param3;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT $tmp7 = *(&local0);
return $tmp7;

}
frost$core$String* frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$get_asString$R$frost$core$String(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

frost$core$MutableString* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:51
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp8 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp8);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
frost$core$MutableString* $tmp9 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
*(&local0) = $tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:52
frost$core$UInt32 $tmp10 = param0.start;
frost$core$Bit $tmp11 = (frost$core$Bit) {true};
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:53
frost$core$MutableString* $tmp13 = *(&local0);
frost$core$UInt32 $tmp14 = param0.start;
frost$core$UInt32$wrapper* $tmp15;
$tmp15 = (frost$core$UInt32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp15->value = $tmp14;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SteppedRange.frost:53:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn17 $tmp16 = ($fn17) ((frost$core$Object*) $tmp15)->$class->vtable[0];
frost$core$String* $tmp18 = $tmp16(((frost$core$Object*) $tmp15));
frost$core$MutableString$append$frost$core$String($tmp13, $tmp18);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:55
frost$core$Bit $tmp19 = param0.inclusive;
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:56
frost$core$MutableString* $tmp21 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp21, &$s22);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:59
frost$core$MutableString* $tmp23 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp23, &$s24);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:61
frost$core$UInt32 $tmp25 = param0.end;
frost$core$Bit $tmp26 = (frost$core$Bit) {true};
bool $tmp27 = $tmp26.value;
if ($tmp27) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:62
frost$core$MutableString* $tmp28 = *(&local0);
frost$core$UInt32 $tmp29 = param0.end;
frost$core$UInt32$wrapper* $tmp30;
$tmp30 = (frost$core$UInt32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp30->value = $tmp29;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SteppedRange.frost:62:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn32 $tmp31 = ($fn32) ((frost$core$Object*) $tmp30)->$class->vtable[0];
frost$core$String* $tmp33 = $tmp31(((frost$core$Object*) $tmp30));
frost$core$MutableString$append$frost$core$String($tmp28, $tmp33);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:64
frost$core$MutableString* $tmp34 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp34, &$s35);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:65
frost$core$MutableString* $tmp36 = *(&local0);
frost$core$UInt32 $tmp37 = param0.step;
frost$core$UInt32$wrapper* $tmp38;
$tmp38 = (frost$core$UInt32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp38->value = $tmp37;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SteppedRange.frost:65:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/MutableString.frost:150
$fn40 $tmp39 = ($fn40) ((frost$core$Object*) $tmp38)->$class->vtable[0];
frost$core$String* $tmp41 = $tmp39(((frost$core$Object*) $tmp38));
frost$core$MutableString$append$frost$core$String($tmp36, $tmp41);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/SteppedRange.frost:66
frost$core$MutableString* $tmp42 = *(&local0);
frost$core$String* $tmp43 = frost$core$MutableString$finish$R$frost$core$String($tmp42);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$core$MutableString* $tmp44 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp43;

}
void frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$cleanup(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

return;

}






