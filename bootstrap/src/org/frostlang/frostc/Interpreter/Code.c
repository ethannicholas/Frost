#include "org/frostlang/frostc/Interpreter/Code.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$Interpreter$Code$class_type org$frostlang$frostc$Interpreter$Code$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Interpreter$Code$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x43\x6f\x64\x65", 37, 7690034498590087861, NULL };

void org$frostlang$frostc$Interpreter$Code$init$frost$core$Int$frost$collections$Array$LTfrost$core$Int$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$ID$GT$GT$frost$collections$Array$LTfrost$collections$Array$LTorg$frostlang$frostc$IR$Statement$GT$GT(void* rawSelf, frost$core$Int param1, frost$collections$Array* param2, frost$collections$Array* param3, frost$collections$Array* param4) {
org$frostlang$frostc$Interpreter$Code* param0 = (org$frostlang$frostc$Interpreter$Code*) rawSelf;

frost$core$Int* _1;
frost$core$Object* _4;
frost$collections$Array** _6;
frost$collections$Array* _7;
frost$core$Object* _8;
frost$collections$Array** _10;
frost$core$Object* _13;
frost$collections$Array** _15;
frost$collections$Array* _16;
frost$core$Object* _17;
frost$collections$Array** _19;
frost$core$Object* _22;
frost$collections$Array** _24;
frost$collections$Array* _25;
frost$core$Object* _26;
frost$collections$Array** _28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:23
_1 = &param0->locals;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:24
_4 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &param0->blocks;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &param0->blocks;
*_10 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:25
_13 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = &param0->ids;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
_19 = &param0->ids;
*_19 = param3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:26
_22 = ((frost$core$Object*) param4);
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &param0->ir;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &param0->ir;
*_28 = param4;
return;

}
void org$frostlang$frostc$Interpreter$Code$cleanup(void* rawSelf) {
org$frostlang$frostc$Interpreter$Code* param0 = (org$frostlang$frostc$Interpreter$Code*) rawSelf;

frost$core$Object* _1;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$core$Object* _5;
frost$collections$Array** _7;
frost$collections$Array* _8;
frost$core$Object* _9;
frost$collections$Array** _11;
frost$collections$Array* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:12
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->blocks;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->ids;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->ir;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

