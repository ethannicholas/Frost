#include "org/frostlang/frostc/Code/Global.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Code/PrimitiveType.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Code$Global$class_type org$frostlang$frostc$Code$Global$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { org$frostlang$frostc$Code$Global$get_asString$R$frost$core$String, org$frostlang$frostc$Code$Global$cleanup, org$frostlang$frostc$Code$Global$get_isExternal$R$frost$core$Bit, org$frostlang$frostc$Code$Global$get_isPrivate$R$frost$core$Bit, org$frostlang$frostc$Code$Global$get_isUnnamedAddr$R$frost$core$Bit, org$frostlang$frostc$Code$Global$get_isLinkOnce$R$frost$core$Bit} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$Bit (*$fn3)(org$frostlang$frostc$Code$Global*);
typedef frost$core$String* (*$fn4)(frost$core$Object*);
typedef frost$core$String* (*$fn7)(frost$core$Object*);
typedef frost$core$Bit (*$fn9)(org$frostlang$frostc$Code$Global*);
typedef frost$core$String* (*$fn11)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x2e\x47\x6c\x6f\x62\x61\x6c", 32, 686156708319450594, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x47\x6c\x6f\x62\x61\x6c\x28", 7, 7106351203771684786, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$Code$Global$init$frost$core$String$org$frostlang$frostc$Code$PrimitiveType$frost$core$String$Q$frost$core$Int(void* rawSelf, frost$core$String* param1, org$frostlang$frostc$Code$PrimitiveType* param2, frost$core$String* param3, frost$core$Int param4) {
org$frostlang$frostc$Code$Global* param0 = (org$frostlang$frostc$Code$Global*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$Object* _10;
org$frostlang$frostc$Code$PrimitiveType** _12;
org$frostlang$frostc$Code$PrimitiveType* _13;
frost$core$Object* _14;
org$frostlang$frostc$Code$PrimitiveType** _16;
frost$core$Object* _19;
frost$core$String** _21;
frost$core$String* _22;
frost$core$Object* _23;
frost$core$String** _25;
frost$core$Int* _28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:748
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->name;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->name;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:749
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->type;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->type;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:750
_19 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = &param0->comment;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = &param0->comment;
*_25 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:751
_28 = &param0->flags;
*_28 = param4;
return;

}
frost$core$Bit org$frostlang$frostc$Code$Global$get_isExternal$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Code$Global* param0 = (org$frostlang$frostc$Code$Global*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:756
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {2u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Code.frost:756:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Code$Global$get_isPrivate$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Code$Global* param0 = (org$frostlang$frostc$Code$Global*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:761
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Code.frost:761:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Code$Global$get_isUnnamedAddr$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Code$Global* param0 = (org$frostlang$frostc$Code$Global*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:766
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {4u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Code.frost:766:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Bit org$frostlang$frostc$Code$Global$get_isLinkOnce$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Code$Global* param0 = (org$frostlang$frostc$Code$Global*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
int64_t _8;
frost$core$Int _9;
frost$core$Int _11;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:771
_1 = &param0->flags;
_2 = *_1;
_3 = (frost$core$Int) {16u};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Code.frost:771:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_6 = _2.value;
_7 = _3.value;
_8 = _6 & _7;
_9 = (frost$core$Int) {_8};
_11 = (frost$core$Int) {0u};
_12 = _9.value;
_13 = _11.value;
_14 = _12 != _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$String* org$frostlang$frostc$Code$Global$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Code$Global* param0 = (org$frostlang$frostc$Code$Global*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$String* _3;
frost$core$String* _4;
org$frostlang$frostc$Code$PrimitiveType** _5;
org$frostlang$frostc$Code$PrimitiveType* _6;
frost$core$Object* _7;
$fn2 _10;
frost$core$String* _11;
frost$core$String* _12;
frost$core$Object* _13;
frost$core$Object* _15;
frost$core$Object* _17;
frost$core$String* _20;
$fn3 _21;
frost$core$Bit _22;
frost$core$Object* _23;
$fn4 _26;
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
frost$core$Object* _49;
frost$core$Object* _51;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:776
_1 = &param0->name;
_2 = *_1;
_3 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s5, _2);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s6);
_5 = &param0->type;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:776:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_10 = ($fn7) _7->$class->vtable[0];
_11 = _10(_7);
_12 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, _11);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_12, &$s8);
_21 = ($fn9) param0->$class->vtable[2];
_22 = _21(param0);
frost$core$Bit$wrapper* $tmp10;
$tmp10 = (frost$core$Bit$wrapper*) frostObjectAlloc(sizeof(frost$core$Bit$wrapper), (frost$core$Class*) &frost$core$Bit$wrapperclass);
$tmp10->value = _22;
_23 = ((frost$core$Object*) $tmp10);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Code.frost:776:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_26 = ($fn11) _23->$class->vtable[0];
_27 = _26(_23);
_28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_20, _27);
_29 = ((frost$core$Object*) _28);
frost$core$Frost$ref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_28, &$s12);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_45);
_47 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_47);
_49 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_51);
return _36;

}
void org$frostlang$frostc$Code$Global$cleanup(void* rawSelf) {
org$frostlang$frostc$Code$Global* param0 = (org$frostlang$frostc$Code$Global*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
org$frostlang$frostc$Code$PrimitiveType** _7;
org$frostlang$frostc$Code$PrimitiveType* _8;
frost$core$Object* _9;
frost$core$String** _11;
frost$core$String* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Code.frost:731
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->name;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->type;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->comment;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

