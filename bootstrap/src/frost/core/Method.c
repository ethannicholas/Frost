#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Formattable.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$String* frost$core$Method$get_asString$R$frost$core$String$shim(frost$core$Method* p0) {
    frost$core$String* result = frost$core$Method$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$Method$cleanup$shim(frost$core$Method* p0) {
    frost$core$Method$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Method$class_type frost$core$Method$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Method$get_asString$R$frost$core$String$shim, frost$core$Method$cleanup$shim} };

typedef frost$core$String* (*$fn2)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, -8906398027139702963, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, -4865483885953839548, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 12, 2855817337293479608, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 79, -6934508872711881313, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, -4865483885953839548, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3e", 1, -5808601953130666271, NULL };

void frost$core$Method$init$builtin_int$frost$core$Immutable$Q(void* rawSelf, int64_t param1, frost$core$Immutable* param2) {
frost$core$Method* param0 = (frost$core$Method*) rawSelf;

int64_t* _1;
frost$core$Object* _4;
frost$core$Immutable** _6;
frost$core$Immutable* _7;
frost$core$Object* _8;
frost$core$Immutable** _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:35
_1 = &param0->pointer;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:36
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
int64_t* _8;
int64_t _9;
frost$core$Int _10;
frost$core$Formattable* _11;
$fn2 _12;
frost$core$String* _13;
frost$core$String* _14;
frost$core$String* _15;
frost$core$Immutable** _16;
frost$core$Immutable* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _22;
frost$core$Immutable* _25;
frost$core$Object* _26;
$fn3 _29;
frost$core$String* _30;
frost$core$String* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$String* _39;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _50;
frost$core$Object* _52;
int64_t* _56;
int64_t _57;
frost$core$Int _58;
frost$core$Formattable* _59;
$fn4 _60;
frost$core$String* _61;
frost$core$String* _62;
frost$core$String* _63;
frost$core$Object* _64;
frost$core$Object* _66;
frost$core$Object* _68;
frost$core$Object* _70;
frost$core$Object* _72;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:41
_1 = &param0->target;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:42
_8 = &param0->pointer;
_9 = *_8;
_10 = (frost$core$Int) {_9};
frost$core$Int$wrapper* $tmp5;
$tmp5 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp5->value = _10;
_11 = ((frost$core$Formattable*) $tmp5);
ITable* $tmp6 = _11->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp6 = $tmp6->next;
}
_12 = $tmp6->methods[0];
_13 = _12(_11, &$s7);
_14 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s8, _13);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_14, &$s9);
_16 = &param0->target;
_17 = *_16;
_18 = _17 != NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block3; else goto block4;
block4:;
_22 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _22, &$s11);
abort(); // unreachable
block3:;
_25 = _17;
_26 = ((frost$core$Object*) _25);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Method.frost:42:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_29 = ($fn12) _26->$class->vtable[0];
_30 = _29(_26);
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, _30);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_31, &$s13);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_42);
_44 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_48);
_50 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_52);
return _39;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:44
_56 = &param0->pointer;
_57 = *_56;
_58 = (frost$core$Int) {_57};
frost$core$Int$wrapper* $tmp14;
$tmp14 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp14->value = _58;
_59 = ((frost$core$Formattable*) $tmp14);
ITable* $tmp15 = _59->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp15 = $tmp15->next;
}
_60 = $tmp15->methods[0];
_61 = _60(_59, &$s16);
_62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s17, _61);
_63 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_62, &$s18);
_64 = ((frost$core$Object*) _63);
frost$core$Frost$ref$frost$core$Object$Q(_64);
_66 = ((frost$core$Object*) _63);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_68);
_70 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_70);
_72 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_72);
return _63;

}
void frost$core$Method$cleanup(void* rawSelf) {
frost$core$Method* param0 = (frost$core$Method*) rawSelf;

frost$core$Immutable* _1;
frost$core$Immutable** _3;
frost$core$Immutable* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:5
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->target;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




