#include "frost/core/MutableMethod.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"


static frost$core$String $s1;
frost$core$MutableMethod$class_type frost$core$MutableMethod$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableMethod$get_asString$R$frost$core$String, frost$core$MutableMethod$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, 8745080146002162051, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 5153437177152415358, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 19, 1050316987813451828, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 5153437177152415358, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

void frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q(void* rawSelf, frost$core$Int8* param1, frost$core$Object* param2) {
frost$core$MutableMethod* param0 = (frost$core$MutableMethod*) rawSelf;

frost$core$Int8** _1;
frost$core$Object** _5;
frost$core$Object* _6;
frost$core$Object** _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_1 = &param0->pointer;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(param2);
_5 = &param0->target;
_6 = *_5;
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &param0->target;
*_8 = param2;
return;

}
frost$core$String* frost$core$MutableMethod$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$MutableMethod* param0 = (frost$core$MutableMethod*) rawSelf;

frost$core$Object** _1;
frost$core$Object* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int8** _8;
frost$core$Int8* _9;
frost$core$Object** _10;
frost$core$String* _11;
frost$core$String* _12;
frost$core$String* _13;
frost$core$Object** _14;
frost$core$Object* _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
frost$core$Object* _23;
$fn2 _26;
frost$core$String* _27;
frost$core$String* _28;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$String* _36;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Int8** _51;
frost$core$Int8* _52;
frost$core$Object** _53;
frost$core$String* _54;
frost$core$String* _55;
frost$core$String* _56;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$Object* _61;
frost$core$Object* _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:38
_1 = &param0->target;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:39
_8 = &param0->pointer;
_9 = *_8;
_10 = ((frost$core$Object**) _9);
_11 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(_10);
_12 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s3, _11);
_13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_12, &$s4);
_14 = &param0->target;
_15 = *_14;
_16 = _15 != NULL;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block3; else goto block4;
block4:;
_20 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _20, &$s6);
abort(); // unreachable
block3:;
_23 = _15;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MutableMethod.frost:39:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_26 = ($fn7) _23->$class->vtable[0];
_27 = _26(_23);
_28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, _27);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_28, &$s8);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_47);
return _36;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:41
_51 = &param0->pointer;
_52 = *_51;
_53 = ((frost$core$Object**) _52);
_54 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(_53);
_55 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s9, _54);
_56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_55, &$s10);
_57 = ((frost$core$Object*) _56);
frost$core$Frost$ref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_61 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_61);
_63 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_63);
return _56;

}
void frost$core$MutableMethod$cleanup(void* rawSelf) {
frost$core$MutableMethod* param0 = (frost$core$MutableMethod*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:23
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->target;
_4 = *_3;
frost$core$Frost$unref$frost$core$Object$Q(_4);
return;

}






