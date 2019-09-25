#include "frost/core/MutableMethod.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/core/Formattable.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$core$MutableMethod$class_type frost$core$MutableMethod$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableMethod$get_asString$R$frost$core$String, frost$core$MutableMethod$cleanup} };

typedef frost$core$String* (*$fn2)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$String* (*$fn4)(frost$core$Formattable*, frost$core$String*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, 8745080146002162051, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 5153437177152415358, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x2e\x66\x72\x6f\x73\x74", 19, 1050316987813451828, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, -5360016314918414915, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3e", 1, -5808601953130666271, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x78", 1, -5808529385363204345, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 5153437177152415358, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3e", 1, -5808601953130666271, NULL };

void frost$core$MutableMethod$init$builtin_int$frost$core$Object$Q(void* rawSelf, int64_t param1, frost$core$Object* param2) {
frost$core$MutableMethod* param0 = (frost$core$MutableMethod*) rawSelf;

int64_t* _1;
frost$core$Object** _5;
frost$core$Object* _6;
frost$core$Object** _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:30
_1 = &param0->pointer;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:31
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
int64_t* _8;
int64_t _9;
frost$core$Int _10;
frost$core$Formattable* _11;
$fn2 _12;
frost$core$String* _13;
frost$core$String* _14;
frost$core$String* _15;
frost$core$Object** _16;
frost$core$Object* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _22;
frost$core$Object* _25;
$fn3 _28;
frost$core$String* _29;
frost$core$String* _30;
frost$core$Object* _31;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$String* _38;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _49;
frost$core$Object* _51;
int64_t* _55;
int64_t _56;
frost$core$Int _57;
frost$core$Formattable* _58;
$fn4 _59;
frost$core$String* _60;
frost$core$String* _61;
frost$core$String* _62;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:36
_1 = &param0->target;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:37
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
_22 = (frost$core$Int) {37u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _22, &$s11);
abort(); // unreachable
block3:;
_25 = _17;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MutableMethod.frost:37:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_28 = ($fn12) _25->$class->vtable[0];
_29 = _28(_25);
_30 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, _29);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_30, &$s13);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$ref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_51);
return _38;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:39
_55 = &param0->pointer;
_56 = *_55;
_57 = (frost$core$Int) {_56};
frost$core$Int$wrapper* $tmp14;
$tmp14 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp14->value = _57;
_58 = ((frost$core$Formattable*) $tmp14);
ITable* $tmp15 = _58->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$core$Formattable$class) {
    $tmp15 = $tmp15->next;
}
_59 = $tmp15->methods[0];
_60 = _59(_58, &$s16);
_61 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s17, _60);
_62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_61, &$s18);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _61);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _60);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_71);
return _62;

}
void frost$core$MutableMethod$cleanup(void* rawSelf) {
frost$core$MutableMethod* param0 = (frost$core$MutableMethod*) rawSelf;

frost$core$Object* _1;
frost$core$Object** _3;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:21
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->target;
_4 = *_3;
frost$core$Frost$unref$frost$core$Object$Q(_4);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




