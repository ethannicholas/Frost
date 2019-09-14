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


static frost$core$String $s1;
org$frostlang$frostc$Symbol$class_type org$frostlang$frostc$Symbol$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Symbol$cleanup, org$frostlang$frostc$Symbol$get_heritable$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);
typedef frost$core$Bit (*$fn4)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn10)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x79\x6d\x62\x6f\x6c", 27, 4113746207891678444, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x2e\x6d\x61\x70\x2e\x55", 30, -8261302534409238908, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x63\x74\x75\x61\x6c\x20\x76\x61\x6c\x75\x65\x3a\x20", 14, 1623585571256273280, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, -7360959199834389899, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x31", 1, -5808609649712063748, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x79\x6d\x62\x6f\x6c\x2e\x66\x72\x6f\x73\x74", 12, -7360959199834389899, NULL };

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
frost$core$Equatable* _9;
frost$core$Int _10;
frost$core$Int* _13;
org$frostlang$frostc$Type$Kind _15;
org$frostlang$frostc$Type$Kind _18;
frost$core$Equatable* _19;
$fn2 _20;
frost$core$Bit _21;
bool _22;
frost$core$Int _24;
org$frostlang$frostc$Type* _25;
org$frostlang$frostc$Type$Kind* _26;
org$frostlang$frostc$Type$Kind _27;
frost$core$Int _28;
frost$core$Object* _29;
$fn3 _32;
frost$core$String* _33;
frost$core$String* _34;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$String* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _51;
frost$core$Object* _53;
org$frostlang$frostc$Symbol$Kind* _57;
org$frostlang$frostc$Position* _60;
frost$core$Object* _63;
frost$core$String** _65;
frost$core$String* _66;
frost$core$Object* _67;
frost$core$String** _69;
frost$core$Equatable* _72;
frost$core$Equatable* _73;
frost$core$Equatable* _74;
$fn4 _75;
frost$core$Bit _76;
bool _77;
frost$core$Int _79;
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
_9 = _8;
_10 = (frost$core$Int) {13u};
// begin inline call to org.frostlang.frostc.Type.Kind.init(rv:frost.core.Int):org.frostlang.frostc.Type.Kind from Symbol.frost:25:51
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:5
_13 = &(&local1)->$rawValue;
*_13 = _10;
_15 = *(&local1);
*(&local0) = _15;
_18 = *(&local0);
org$frostlang$frostc$Type$Kind$wrapper* $tmp7;
$tmp7 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp7->value = _18;
_19 = ((frost$core$Equatable*) $tmp7);
ITable* $tmp8 = _9->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
_20 = $tmp8->methods[0];
_21 = _20(_9, _19);
_22 = _21.value;
if (_22) goto block4; else goto block5;
block5:;
_24 = (frost$core$Int) {25u};
_25 = ((org$frostlang$frostc$Type*) param0);
_26 = &_25->typeKind;
_27 = *_26;
_28 = _27.$rawValue;
frost$core$Int$wrapper* $tmp9;
$tmp9 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp9->value = _28;
_29 = ((frost$core$Object*) $tmp9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Symbol.frost:25:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_32 = ($fn10) _29->$class->vtable[0];
_33 = _32(_29);
_34 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s11, _33);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_42 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_34, &$s12);
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _24, _42);
_44 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = _29;
frost$core$Frost$unref$frost$core$Object$Q(_48);
abort(); // unreachable
block4:;
_51 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_53);
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:27
_57 = &param0->kind;
*_57 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:28
_60 = &param0->position;
*_60 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:29
_63 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = &param0->name;
_66 = *_65;
_67 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = &param0->name;
*_69 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Symbol.frost:30
_72 = ((frost$core$Equatable*) param3);
_73 = _72;
_74 = ((frost$core$Equatable*) &$s14);
ITable* $tmp15 = _73->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp15 = $tmp15->next;
}
_75 = $tmp15->methods[1];
_76 = _75(_73, _74);
_77 = _76.value;
if (_77) goto block7; else goto block8;
block8:;
_79 = (frost$core$Int) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s16, _79);
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

