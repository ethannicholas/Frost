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
frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass_type frost$core$Range$LTfrost$core$MutableString$Index$GT$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s2, (frost$core$Class*) &frost$core$Value$class, NULL, { frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String$shim, frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup$shim} };typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn6)(frost$core$Object*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 48, -8606074301662007337, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e", 48, -8606074301662007337, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e\x2e", 3, -587370003925626343, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2e\x2e", 2, 565793323585912621, NULL };

frost$core$Range$LTfrost$core$MutableString$Index$GT frost$core$Range$LTfrost$core$MutableString$Index$GT$init$frost$core$MutableString$Index$frost$core$MutableString$Index$frost$core$Bit(frost$core$MutableString$Index param0, frost$core$MutableString$Index param1, frost$core$Bit param2) {

frost$core$Range$LTfrost$core$MutableString$Index$GT local0;
frost$core$MutableString$Index* _1;
frost$core$MutableString$Index* _4;
frost$core$Bit* _7;
frost$core$Range$LTfrost$core$MutableString$Index$GT _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:30
_1 = &(&local0)->min;
*_1 = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:31
_4 = &(&local0)->max;
*_4 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:32
_7 = &(&local0)->inclusive;
*_7 = param2;
_9 = *(&local0);
return _9;

}
frost$core$String* frost$core$Range$LTfrost$core$MutableString$Index$GT$get_asString$R$frost$core$String(frost$core$Range$LTfrost$core$MutableString$Index$GT param0) {

frost$core$MutableString* local0 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$MutableString$Index _13;
frost$core$Bit _14;
bool _15;
frost$core$MutableString* _18;
frost$core$MutableString$Index _19;
frost$core$Object* _20;
$fn3 _23;
frost$core$String* _24;
frost$core$Object* _26;
frost$core$Object* _29;
frost$core$Bit _33;
bool _34;
frost$core$MutableString* _37;
frost$core$MutableString* _42;
frost$core$MutableString$Index _46;
frost$core$Bit _47;
bool _48;
frost$core$MutableString* _51;
frost$core$MutableString$Index _52;
frost$core$Object* _53;
$fn4 _56;
frost$core$String* _57;
frost$core$Object* _59;
frost$core$Object* _62;
frost$core$MutableString* _66;
frost$core$String* _67;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$MutableString* _72;
frost$core$Object* _73;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:37
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:38
_13 = param0.min;
_14 = (frost$core$Bit) {true};
_15 = _14.value;
if (_15) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:39
_18 = *(&local0);
_19 = param0.min;
frost$core$MutableString$Index$wrapper* $tmp5;
$tmp5 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$MutableString$Index$wrapper), (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp5->value = _19;
_20 = ((frost$core$Object*) $tmp5);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Range.frost:39:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_23 = ($fn6) _20->$class->vtable[0];
_24 = _23(_20);
frost$core$MutableString$append$frost$core$String(_18, _24);
_26 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_29 = _20;
frost$core$Frost$unref$frost$core$Object$Q(_29);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:41
_33 = param0.inclusive;
_34 = _33.value;
if (_34) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:42
_37 = *(&local0);
frost$core$MutableString$append$frost$core$String(_37, &$s7);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:45
_42 = *(&local0);
frost$core$MutableString$append$frost$core$String(_42, &$s8);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:47
_46 = param0.max;
_47 = (frost$core$Bit) {true};
_48 = _47.value;
if (_48) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:48
_51 = *(&local0);
_52 = param0.max;
frost$core$MutableString$Index$wrapper* $tmp9;
$tmp9 = (frost$core$MutableString$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$MutableString$Index$wrapper), (frost$core$Class*) &frost$core$MutableString$Index$wrapperclass);
$tmp9->value = _52;
_53 = ((frost$core$Object*) $tmp9);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from Range.frost:48:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_56 = ($fn10) _53->$class->vtable[0];
_57 = _56(_53);
frost$core$MutableString$append$frost$core$String(_51, _57);
_59 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_62 = _53;
frost$core$Frost$unref$frost$core$Object$Q(_62);
goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Range.frost:50
_66 = *(&local0);
_67 = frost$core$MutableString$finish$R$frost$core$String(_66);
_68 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = *(&local0);
_73 = ((frost$core$Object*) _72);
frost$core$Frost$unref$frost$core$Object$Q(_73);
*(&local0) = ((frost$core$MutableString*) NULL);
return _67;

}
void frost$core$Range$LTfrost$core$MutableString$Index$GT$cleanup(frost$core$Range$LTfrost$core$MutableString$Index$GT param0) {

return;

}

