#include "frost/core/Range.LTfrost/core/MutableString/Index.GT.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/MutableString/Index.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String(((frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup$shim(frost$core$Object* p0) {
    frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup(((frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapper*) p0)->value);

}

static frost$core$String $s1;
frost$core$Range$LTfrost$core$MutableString$Index$GT$class_type frost$core$Range$LTfrost$core$MutableString$Index$GT$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String$shim, frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup$shim} };

static frost$core$String $s2;
frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass_type frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String$shim, frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup$shim} };typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$String* (*$fn31)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 48, -8606074301662007337, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 48, -8606074301662007337, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2e", 3, -587370003925626343, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };

frost$core$Range$LTfrost$core$MutableString$Index$GT frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(frost$core$MutableString$Index param0, frost$core$MutableString$Index param1, frost$core$Bit param2) {

frost$core$Range$LTfrost$core$MutableString$Index$GT local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:30
frost$core$MutableString$Index* $tmp3 = &(&local0)->min;
*$tmp3 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:31
frost$core$MutableString$Index* $tmp4 = &(&local0)->max;
*$tmp4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:32
frost$core$Bit* $tmp5 = &(&local0)->inclusive;
*$tmp5 = param2;
frost$core$Range$LTfrost$core$MutableString$Index$GT $tmp6 = *(&local0);
return $tmp6;

}
frost$core$String* frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String(frost$core$Range$LTfrost$core$MutableString$Index$GT param0) {

frost$core$MutableString* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:37
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp7 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp7);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$MutableString* $tmp8 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
*(&local0) = $tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:38
frost$core$MutableString$Index $tmp9 = param0.min;
frost$core$Bit $tmp10 = (frost$core$Bit) {true};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:39
frost$core$MutableString* $tmp12 = *(&local0);
frost$core$MutableString$Index $tmp13 = param0.min;
frost$core$MutableString$Index$wrapper* $tmp14;
$tmp14 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp14->value = $tmp13;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Range.frost:39:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn16 $tmp15 = ($fn16) ((frost$core$Object*) $tmp14)->$class->vtable[0];
frost$core$String* $tmp17 = $tmp15(((frost$core$Object*) $tmp14));
frost$core$MutableString$append$frost$core$String($tmp12, $tmp17);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:41
frost$core$Bit $tmp18 = param0.inclusive;
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:42
frost$core$MutableString* $tmp20 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp20, &$s21);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:45
frost$core$MutableString* $tmp22 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp22, &$s23);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:47
frost$core$MutableString$Index $tmp24 = param0.max;
frost$core$Bit $tmp25 = (frost$core$Bit) {true};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:48
frost$core$MutableString* $tmp27 = *(&local0);
frost$core$MutableString$Index $tmp28 = param0.max;
frost$core$MutableString$Index$wrapper* $tmp29;
$tmp29 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp29->value = $tmp28;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Range.frost:48:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
$fn31 $tmp30 = ($fn31) ((frost$core$Object*) $tmp29)->$class->vtable[0];
frost$core$String* $tmp32 = $tmp30(((frost$core$Object*) $tmp29));
frost$core$MutableString$append$frost$core$String($tmp27, $tmp32);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:50
frost$core$MutableString* $tmp33 = *(&local0);
frost$core$String* $tmp34 = frost$core$MutableString$finish$R$frost$core$String($tmp33);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
frost$core$MutableString* $tmp35 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp34;

}
void frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup(frost$core$Range$LTfrost$core$MutableString$Index$GT param0) {

return;

}

