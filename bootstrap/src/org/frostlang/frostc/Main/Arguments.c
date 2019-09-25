#include "org/frostlang/frostc/Main/Arguments.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/io/Console.h"
#include "frost/core/System.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Main$Arguments$class_type org$frostlang$frostc$Main$Arguments$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Main$Arguments$cleanup, org$frostlang$frostc$Main$Arguments$get_done$R$frost$core$Bit, org$frostlang$frostc$Main$Arguments$next$R$frost$core$String, org$frostlang$frostc$Main$Arguments$next$frost$core$String$R$frost$core$String} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Object* (*$fn5)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Bit (*$fn6)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Bit (*$fn9)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn11)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$String* (*$fn12)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$Bit (*$fn13)(org$frostlang$frostc$Main$Arguments*);
typedef frost$core$String* (*$fn22)(org$frostlang$frostc$Main$Arguments*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 35, -5863096401175606509, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, -8700646567802724069, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x20\x61\x66\x74\x65\x72\x20\x27", 8, 7119383721715381526, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

void org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$Main$Arguments* param0 = (org$frostlang$frostc$Main$Arguments*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$collections$ListView** _7;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$collections$ListView** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:33
_1 = (frost$core$Int) {1u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:38
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->args;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->args;
*_11 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$Main$Arguments$get_done$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$Main$Arguments* param0 = (org$frostlang$frostc$Main$Arguments*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$collections$ListView** _3;
frost$collections$ListView* _4;
frost$collections$CollectionView* _5;
$fn2 _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:42
_1 = &param0->index;
_2 = *_1;
_3 = &param0->args;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp3 = _5->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_6 = $tmp3->methods[0];
_7 = _6(_5);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:42:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _2.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
return _13;

}
frost$core$String* org$frostlang$frostc$Main$Arguments$next$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$Main$Arguments* param0 = (org$frostlang$frostc$Main$Arguments*) rawSelf;

$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$Int* _22;
frost$collections$ListView** _25;
frost$collections$ListView* _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Int _29;
int64_t _30;
int64_t _31;
int64_t _32;
frost$core$Int _33;
$fn5 _34;
frost$core$Object* _35;
frost$core$String* _36;
frost$core$Object* _37;
frost$core$Object* _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:46
_1 = ($fn6) param0->$class->vtable[2];
_2 = _1(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:46:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block2; else goto block3;
block3:;
_11 = (frost$core$Int) {46u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _11);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:47
_15 = &param0->index;
_16 = *_15;
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 + _19;
_21 = (frost$core$Int) {_20};
_22 = &param0->index;
*_22 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:48
_25 = &param0->args;
_26 = *_25;
_27 = &param0->index;
_28 = *_27;
_29 = (frost$core$Int) {1u};
_30 = _28.value;
_31 = _29.value;
_32 = _30 - _31;
_33 = (frost$core$Int) {_32};
ITable* $tmp8 = _26->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
_34 = $tmp8->methods[0];
_35 = _34(_26, _33);
_36 = ((frost$core$String*) _35);
_37 = ((frost$core$Object*) _36);
frost$core$Frost$ref$frost$core$Object$Q(_37);
_39 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_39);
return _36;

}
frost$core$String* org$frostlang$frostc$Main$Arguments$next$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* param1) {
org$frostlang$frostc$Main$Arguments* param0 = (org$frostlang$frostc$Main$Arguments*) rawSelf;

$fn9 _1;
frost$core$Bit _2;
bool _3;
frost$core$String* _6;
frost$core$String* _7;
frost$collections$ListView** _8;
frost$collections$ListView* _9;
frost$collections$ListView** _10;
frost$collections$ListView* _11;
frost$collections$CollectionView* _12;
$fn10 _13;
frost$core$Int _14;
frost$core$Int _15;
int64_t _16;
int64_t _17;
int64_t _18;
frost$core$Int _19;
$fn11 _20;
frost$core$Object* _21;
frost$core$String* _22;
frost$core$String* _23;
frost$core$String* _24;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Int _45;
frost$core$Int _47;
$fn12 _51;
frost$core$String* _52;
frost$core$Object* _53;
frost$core$Object* _55;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:52
_1 = ($fn13) param0->$class->vtable[2];
_2 = _1(param0);
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:53
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, param1);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_6, &$s15);
_8 = &param0->args;
_9 = *_8;
_10 = &param0->args;
_11 = *_10;
_12 = ((frost$collections$CollectionView*) _11);
ITable* $tmp16 = _12->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_13 = $tmp16->methods[0];
_14 = _13(_12);
_15 = (frost$core$Int) {1u};
_16 = _14.value;
_17 = _15.value;
_18 = _16 - _17;
_19 = (frost$core$Int) {_18};
ITable* $tmp17 = _9->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp17 = $tmp17->next;
}
_20 = $tmp17->methods[0];
_21 = _20(_9, _19);
_22 = ((frost$core$String*) _21);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, _22);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, &$s18);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:53:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s19);
_34 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_38);
_40 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_42);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:54
_45 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_45);
_47 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _47, &$s21);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:56
_51 = ($fn22) param0->$class->vtable[3];
_52 = _51(param0);
_53 = ((frost$core$Object*) _52);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_55);
return _52;

}
void org$frostlang$frostc$Main$Arguments$cleanup(void* rawSelf) {
org$frostlang$frostc$Main$Arguments* param0 = (org$frostlang$frostc$Main$Arguments*) rawSelf;

frost$core$Object* _1;
frost$collections$ListView** _3;
frost$collections$ListView* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:28
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->args;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

