#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/UInt32.h"
#include "frost/core/Bit.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
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
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapperclass_type frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$get_asString$R$frost$core$String$shim, frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$cleanup$shim} };typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn5)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x3e", 61, -782986671369247414, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x3e", 61, -782986671369247414, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e\x2e", 3, -587370003925626343, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2e\x2e", 2, 565793323585912621, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x62\x79\x20", 4, -229567638518546866, NULL };

frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$init$frost$core$UInt32$frost$core$UInt32$frost$core$UInt32$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1, frost$core$UInt32 param2, frost$core$Bit param3) {

frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT local0;
frost$core$UInt32* _1;
frost$core$UInt32* _4;
frost$core$UInt32* _7;
frost$core$Bit* _10;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:43
_1 = &(&local0)->start;
*_1 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:44
_4 = &(&local0)->end;
*_4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:45
_7 = &(&local0)->step;
*_7 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:46
_10 = &(&local0)->inclusive;
*_10 = param3;
_12 = *(&local0);
return _12;

}
frost$core$String* frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$get_asString$R$frost$core$String(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

frost$core$MutableString* local0 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$UInt32 _13;
frost$core$Bit _14;
bool _15;
frost$core$MutableString* _18;
frost$core$UInt32 _19;
frost$core$Object* _20;
$fn3 _23;
frost$core$String* _24;
frost$core$Object* _26;
frost$core$Object* _29;
frost$core$Bit _33;
bool _34;
frost$core$MutableString* _37;
frost$core$MutableString* _42;
frost$core$UInt32 _46;
frost$core$Bit _47;
bool _48;
frost$core$MutableString* _51;
frost$core$UInt32 _52;
frost$core$Object* _53;
$fn4 _56;
frost$core$String* _57;
frost$core$Object* _59;
frost$core$Object* _62;
frost$core$MutableString* _66;
frost$core$MutableString* _69;
frost$core$UInt32 _70;
frost$core$Object* _71;
$fn5 _74;
frost$core$String* _75;
frost$core$Object* _77;
frost$core$Object* _80;
frost$core$MutableString* _83;
frost$core$String* _84;
frost$core$Object* _85;
frost$core$Object* _87;
frost$core$MutableString* _89;
frost$core$Object* _90;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:51
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:52
_13 = param0.start;
_14 = (frost$core$Bit) {true};
_15 = _14.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:53
_18 = *(&local0);
_19 = param0.start;
frost$core$UInt32$wrapper* $tmp6;
$tmp6 = (frost$core$UInt32$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt32$wrapper), (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp6->value = _19;
_20 = ((frost$core$Object*) $tmp6);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SteppedRange.frost:53:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_23 = ($fn7) _20->$class->vtable[0];
_24 = _23(_20);
frost$core$MutableString$append$frost$core$String(_18, _24);
_26 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_29 = _20;
frost$core$Frost$unref$frost$core$Object$Q(_29);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:55
_33 = param0.inclusive;
_34 = _33.value;
if (_34) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:56
_37 = *(&local0);
frost$core$MutableString$append$frost$core$String(_37, &$s8);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:59
_42 = *(&local0);
frost$core$MutableString$append$frost$core$String(_42, &$s9);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:61
_46 = param0.end;
_47 = (frost$core$Bit) {true};
_48 = _47.value;
if (_48) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:62
_51 = *(&local0);
_52 = param0.end;
frost$core$UInt32$wrapper* $tmp10;
$tmp10 = (frost$core$UInt32$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt32$wrapper), (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp10->value = _52;
_53 = ((frost$core$Object*) $tmp10);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SteppedRange.frost:62:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_56 = ($fn11) _53->$class->vtable[0];
_57 = _56(_53);
frost$core$MutableString$append$frost$core$String(_51, _57);
_59 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_62 = _53;
frost$core$Frost$unref$frost$core$Object$Q(_62);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:64
_66 = *(&local0);
frost$core$MutableString$append$frost$core$String(_66, &$s12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:65
_69 = *(&local0);
_70 = param0.step;
frost$core$UInt32$wrapper* $tmp13;
$tmp13 = (frost$core$UInt32$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt32$wrapper), (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp13->value = _70;
_71 = ((frost$core$Object*) $tmp13);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from SteppedRange.frost:65:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_74 = ($fn14) _71->$class->vtable[0];
_75 = _74(_71);
frost$core$MutableString$append$frost$core$String(_69, _75);
_77 = ((frost$core$Object*) _75);
frost$core$Frost$unref$frost$core$Object$Q(_77);
_80 = _71;
frost$core$Frost$unref$frost$core$Object$Q(_80);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/SteppedRange.frost:66
_83 = *(&local0);
_84 = frost$core$MutableString$finish$R$frost$core$String(_83);
_85 = ((frost$core$Object*) _84);
frost$core$Frost$ref$frost$core$Object$Q(_85);
_87 = ((frost$core$Object*) _84);
frost$core$Frost$unref$frost$core$Object$Q(_87);
_89 = *(&local0);
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
*(&local0) = ((frost$core$MutableString*) NULL);
return _84;

}
void frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$cleanup(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




