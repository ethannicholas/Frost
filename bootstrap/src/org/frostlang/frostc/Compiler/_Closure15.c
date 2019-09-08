#include "org/frostlang/frostc/Compiler/_Closure15.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/Annotations.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Position.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure15$class_type org$frostlang$frostc$Compiler$_Closure15$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure15$cleanup, org$frostlang$frostc$Compiler$_Closure15$$anonymous14$frost$core$Int$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x35", 40, 5411931511292540969, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x63\x6c\x61\x73\x73\x65\x73\x20\x6d\x61\x79\x20\x6e\x6f\x74\x20\x62\x65\x20\x61\x6e\x6e\x6f\x74\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x27", 35, 842839837407340505, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x27", 1, -5808629440921371546, NULL };

void org$frostlang$frostc$Compiler$_Closure15$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$ClassDecl(org$frostlang$frostc$Compiler$_Closure15* param0, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$ClassDecl* param2) {

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
frost$core$Object* _10;
org$frostlang$frostc$ClassDecl** _12;
org$frostlang$frostc$ClassDecl* _13;
frost$core$Object* _14;
org$frostlang$frostc$ClassDecl** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5874
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5874
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->cl;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->cl;
*_16 = param2;
return;

}
void org$frostlang$frostc$Compiler$_Closure15$cleanup(org$frostlang$frostc$Compiler$_Closure15* param0) {

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$ClassDecl** _7;
org$frostlang$frostc$ClassDecl* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5874
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->cl;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}
void org$frostlang$frostc$Compiler$_Closure15$$anonymous14$frost$core$Int$frost$core$String(org$frostlang$frostc$Compiler$_Closure15* param0, frost$core$Int param1, frost$core$String* param2) {

org$frostlang$frostc$ClassDecl** _1;
org$frostlang$frostc$ClassDecl* _2;
org$frostlang$frostc$Annotations** _3;
org$frostlang$frostc$Annotations* _4;
frost$core$Int* _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
int64_t _11;
frost$core$Int _12;
frost$core$Int _14;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
org$frostlang$frostc$Compiler** _22;
org$frostlang$frostc$Compiler* _23;
org$frostlang$frostc$ClassDecl** _24;
org$frostlang$frostc$ClassDecl* _25;
org$frostlang$frostc$Position* _26;
org$frostlang$frostc$Position _27;
frost$core$String* _28;
frost$core$String* _29;
frost$core$Object* _31;
frost$core$Object* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5875
_1 = &param0->cl;
_2 = *_1;
_3 = &_2->annotations;
_4 = *_3;
_5 = &_4->flags;
_6 = *_5;
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Compiler.frost:5875:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_9 = _6.value;
_10 = param1.value;
_11 = _9 & _10;
_12 = (frost$core$Int) {_11};
_14 = (frost$core$Int) {0u};
_15 = _12.value;
_16 = _14.value;
_17 = _15 != _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5876
_22 = &param0->$self;
_23 = *_22;
_24 = &param0->cl;
_25 = *_24;
_26 = &_25->position;
_27 = *_26;
_28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s2, param2);
_29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_28, &$s3);
org$frostlang$frostc$Compiler$error$org$frostlang$frostc$Position$frost$core$String(_23, _27, _29);
_31 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_33);
goto block2;
block2:;
return;

}

