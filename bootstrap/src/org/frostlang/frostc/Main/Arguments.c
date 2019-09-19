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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x4d\x61\x69\x6e\x2e\x41\x72\x67\x75\x6d\x65\x6e\x74\x73", 35, -5863096401175606509, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20", 9, -8700646567802724069, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x20\x61\x66\x74\x65\x72\x20\x27", 8, 7119383721715381526, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x0a", 1, -5808579962898102051, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, 4522419808538736080, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x65\x64\x20\x66\x72\x6f\x6d\x20\x40\x6e\x6f\x52\x65\x74\x75\x72\x6e\x20\x6d\x65\x74\x68\x6f\x64", 30, 1170110763298107664, NULL };

void org$frostlang$frostc$Main$Arguments$init$frost$collections$ListView$LTfrost$core$String$GT(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$Main$Arguments* param0 = (org$frostlang$frostc$Main$Arguments*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$collections$ListView** _7;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$collections$ListView** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:34
_1 = (frost$core$Int) {1u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:39
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:43
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Main.frost:43:26
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
frost$collections$ListView* _27;
frost$core$Int* _28;
frost$core$Int _29;
frost$core$Int _30;
int64_t _31;
int64_t _32;
int64_t _33;
frost$core$Int _34;
$fn5 _35;
frost$core$Object* _36;
frost$core$String* _37;
frost$core$Object* _38;
frost$core$Object* _40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:47
_1 = ($fn6) param0->$class->vtable[2];
_2 = _1(param0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Main.frost:47:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block2; else goto block3;
block3:;
_11 = (frost$core$Int) {47u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _11);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:48
_15 = &param0->index;
_16 = *_15;
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 + _19;
_21 = (frost$core$Int) {_20};
_22 = &param0->index;
*_22 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:49
_25 = &param0->args;
_26 = *_25;
_27 = _26;
_28 = &param0->index;
_29 = *_28;
_30 = (frost$core$Int) {1u};
_31 = _29.value;
_32 = _30.value;
_33 = _31 - _32;
_34 = (frost$core$Int) {_33};
ITable* $tmp8 = _27->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp8 = $tmp8->next;
}
_35 = $tmp8->methods[0];
_36 = _35(_27, _34);
_37 = ((frost$core$String*) _36);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_40);
return _37;

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
frost$collections$ListView* _10;
frost$collections$ListView** _11;
frost$collections$ListView* _12;
frost$collections$CollectionView* _13;
$fn10 _14;
frost$core$Int _15;
frost$core$Int _16;
int64_t _17;
int64_t _18;
int64_t _19;
frost$core$Int _20;
$fn11 _21;
frost$core$Object* _22;
frost$core$String* _23;
frost$core$String* _24;
frost$core$String* _25;
frost$core$Object* _35;
frost$core$Object* _37;
frost$core$Object* _39;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Int _46;
frost$core$Int _48;
$fn12 _52;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _56;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:53
_1 = ($fn13) param0->$class->vtable[2];
_2 = _1(param0);
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:54
_6 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, param1);
_7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_6, &$s15);
_8 = &param0->args;
_9 = *_8;
_10 = _9;
_11 = &param0->args;
_12 = *_11;
_13 = ((frost$collections$CollectionView*) _12);
ITable* $tmp16 = _13->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_14 = $tmp16->methods[0];
_15 = _14(_13);
_16 = (frost$core$Int) {1u};
_17 = _15.value;
_18 = _16.value;
_19 = _17 - _18;
_20 = (frost$core$Int) {_19};
ITable* $tmp17 = _10->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp17 = $tmp17->next;
}
_21 = $tmp17->methods[0];
_22 = _21(_10, _20);
_23 = ((frost$core$String*) _22);
_24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_7, _23);
_25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_24, &$s18);
// begin inline call to method frost.io.Console.printErrorLine(s:frost.core.String) from Main.frost:54:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:85
frost$io$Console$printError$frost$core$String(_25);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:86
// begin inline call to method frost.io.Console.printErrorLine() from Console.frost:86:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/Console.frost:110
frost$io$Console$printError$frost$core$String(&$s19);
_35 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = _22;
frost$core$Frost$unref$frost$core$Object$Q(_39);
_41 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_41);
_43 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_43);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:55
_46 = (frost$core$Int) {1u};
frost$core$System$exit$frost$core$Int(_46);
_48 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s20, _48, &$s21);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:57
_52 = ($fn22) param0->$class->vtable[3];
_53 = _52(param0);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$ref$frost$core$Object$Q(_54);
_56 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_56);
return _53;

}
void org$frostlang$frostc$Main$Arguments$cleanup(void* rawSelf) {
org$frostlang$frostc$Main$Arguments* param0 = (org$frostlang$frostc$Main$Arguments*) rawSelf;

frost$core$Object* _1;
frost$collections$ListView** _3;
frost$collections$ListView* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Main.frost:29
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->args;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






