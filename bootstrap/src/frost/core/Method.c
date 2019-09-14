#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$String* frost$core$Method$get_asString$R$frost$core$String$shim(frost$core$Method* p0) {
    frost$core$String* result = frost$core$Method$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$Method$cleanup$shim(frost$core$Method* p0) {
    frost$core$Method$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Method$class_type frost$core$Method$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Method$get_asString$R$frost$core$String$shim, frost$core$Method$cleanup$shim} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -8906398027139702963, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, -4865483885953839548, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 12, 2855817337293479608, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 79, -6934508872711881313, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, -4865483885953839548, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, -5808601953130666271, NULL };

void frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q(void* rawSelf, frost$core$Int8* param1, frost$core$Immutable* param2) {
frost$core$Method* param0 = (frost$core$Method*) rawSelf;

frost$core$Int8** _1;
frost$core$Object* _4;
frost$core$Immutable** _6;
frost$core$Immutable* _7;
frost$core$Object* _8;
frost$core$Immutable** _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_1 = &param0->pointer;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->target;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->target;
*_10 = param2;
return;

}
frost$core$String* frost$core$Method$get_asString$R$frost$core$String(void* rawSelf) {
frost$core$Method* param0 = (frost$core$Method*) rawSelf;

frost$core$Immutable** _1;
frost$core$Immutable* _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int8** _8;
frost$core$Int8* _9;
frost$core$Object** _10;
frost$core$String* _11;
frost$core$String* _12;
frost$core$String* _13;
frost$core$Immutable** _14;
frost$core$Immutable* _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$core$Int _20;
frost$core$Immutable* _23;
frost$core$Object* _24;
$fn2 _27;
frost$core$String* _28;
frost$core$String* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$String* _37;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Int8** _52;
frost$core$Int8* _53;
frost$core$Object** _54;
frost$core$String* _55;
frost$core$String* _56;
frost$core$String* _57;
frost$core$Object* _58;
frost$core$Object* _60;
frost$core$Object* _62;
frost$core$Object* _64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:43
_1 = &param0->target;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:44
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
_20 = (frost$core$Int) {44u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _20, &$s6);
abort(); // unreachable
block3:;
_23 = _15;
_24 = ((frost$core$Object*) _23);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Method.frost:44:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_27 = ($fn7) _24->$class->vtable[0];
_28 = _27(_24);
_29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_13, _28);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_37 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_29, &$s8);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_48);
return _37;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:46
_52 = &param0->pointer;
_53 = *_52;
_54 = ((frost$core$Object**) _53);
_55 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(_54);
_56 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s9, _55);
_57 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_56, &$s10);
_58 = ((frost$core$Object*) _57);
frost$core$Frost$ref$frost$core$Object$Q(_58);
_60 = ((frost$core$Object*) _57);
frost$core$Frost$unref$frost$core$Object$Q(_60);
_62 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_62);
_64 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_64);
return _57;

}
void frost$core$Method$cleanup(void* rawSelf) {
frost$core$Method* param0 = (frost$core$Method*) rawSelf;

frost$core$Immutable* _1;
frost$core$Immutable** _3;
frost$core$Immutable* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:7
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->target;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






