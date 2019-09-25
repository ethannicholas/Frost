#include "org/frostlang/frostc/Symbol.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Symbol/Kind.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Symbol$class_type org$frostlang$frostc$Symbol$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Symbol$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 27, 4113746207891678444, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x6d\x61\x70\x2e\x55", 30, -8261302534409238908, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x61\x63\x74\x75\x61\x6c\x20\x76\x61\x6c\x75\x65\x3a\x20", 14, 1623585571256273280, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, -7360959199834389899, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x31", 1, -5808609649712063748, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, -7360959199834389899, NULL };

void org$frostlang$frostc$Symbol$init$org$frostlang$frostc$Symbol$Kind$org$frostlang$frostc$Position$frost$core$String(void* rawSelf, org$frostlang$frostc$Symbol$Kind param1, org$frostlang$frostc$Position param2, frost$core$String* param3) {
org$frostlang$frostc$Symbol* param0 = (org$frostlang$frostc$Symbol*) rawSelf;

org$frostlang$frostc$Type$Kind local0;
org$frostlang$frostc$Type$Kind local1;
frost$core$Bit _1;
bool _2;
org$frostlang$frostc$Type* _5;
org$frostlang$frostc$Type$Kind* _6;
org$frostlang$frostc$Type$Kind _7;
frost$core$Equatable* _8;
frost$core$Int _9;
frost$core$Int* _12;
org$frostlang$frostc$Type$Kind _14;
org$frostlang$frostc$Type$Kind _17;
frost$core$Equatable* _18;
$fn2 _19;
frost$core$Bit _20;
bool _21;
frost$core$Int _23;
org$frostlang$frostc$Type* _24;
org$frostlang$frostc$Type$Kind* _25;
org$frostlang$frostc$Type$Kind _26;
frost$core$Int _27;
frost$core$Object* _28;
$fn3 _31;
frost$core$String* _32;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$String* _41;
frost$core$Object* _43;
frost$core$Object* _45;
frost$core$Object* _47;
frost$core$Object* _50;
frost$core$Object* _52;
org$frostlang$frostc$Symbol$Kind* _56;
org$frostlang$frostc$Position* _59;
frost$core$Object* _62;
frost$core$String** _64;
frost$core$String* _65;
frost$core$Object* _66;
frost$core$String** _68;
frost$core$Equatable* _71;
frost$core$Equatable* _72;
$fn4 _73;
frost$core$Bit _74;
bool _75;
frost$core$Int _77;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:24
_1 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param3, &$s5);
_2 = _1.value;
if (_2) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:25
_5 = ((org$frostlang$frostc$Type*) param0);
_6 = &_5->typeKind;
_7 = *_6;
org$frostlang$frostc$Type$Kind$wrapper* $tmp6;
$tmp6 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp6->value = _7;
_8 = ((frost$core$Equatable*) $tmp6);
_9 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Symbol.frost:25:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_12 = &(&local1)->$rawValue;
*_12 = _9;
_14 = *(&local1);
*(&local0) = _14;
_17 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = _17;
_18 = ((frost$core$Equatable*) $tmp7);
ITable* $tmp8 = _8->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
_19 = $tmp8->methods[0];
_20 = _19(_8, _18);
_21 = _20.value;
if (_21) goto block4; else goto block5;
block5:;
_23 = (frost$core$Int) {25u};
_24 = ((org$frostlang$frostc$Type*) param0);
_25 = &_24->typeKind;
_26 = *_25;
_27 = _26.$rawValue;
frost$core$Int$wrapper* $tmp9;
$tmp9 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp9->value = _27;
_28 = ((frost$core$Object*) $tmp9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Symbol.frost:25:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_31 = ($fn10) _28->$class->vtable[0];
_32 = _31(_28);
_33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s11, _32);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_38);
_41 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_33, &$s12);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _23, _41);
_43 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = _28;
frost$core$Frost$unref$frost$core$Object$Q(_47);
abort(); // unreachable
block4:;
_50 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_50);
_52 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_52);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:27
_56 = &param0->kind;
*_56 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:28
_59 = &param0->position;
*_59 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:29
_62 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = &param0->name;
_65 = *_64;
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = &param0->name;
*_68 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:30
_71 = ((frost$core$Equatable*) param3);
_72 = ((frost$core$Equatable*) &$s14);
ITable* $tmp15 = _71->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp15 = $tmp15->next;
}
_73 = $tmp15->methods[1];
_74 = _73(_71, _72);
_75 = _74.value;
if (_75) goto block7; else goto block8;
block8:;
_77 = (frost$core$Int) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s16, _77);
abort(); // unreachable
block7:;
return;

}
frost$core$Bit org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Symbol* param0 = (org$frostlang$frostc$Symbol*) rawSelf;

frost$core$Bit _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:34
_1 = (frost$core$Bit) {true};
return _1;

}
void org$frostlang$frostc$Symbol$cleanup(void* rawSelf) {
org$frostlang$frostc$Symbol* param0 = (org$frostlang$frostc$Symbol*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:3
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->name;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

