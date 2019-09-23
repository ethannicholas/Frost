#include "org/frostlang/frostc/Interpreter/_Closure21.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Interpreter.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "org/frostlang/frostc/Interpreter/Context.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int.h"
#include "org/frostlang/frostc/IR/Value.h"


static frost$core$String $s1;
org$frostlang$frostc$Interpreter$_Closure21$class_type org$frostlang$frostc$Interpreter$_Closure21$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Interpreter$_Closure21$cleanup, org$frostlang$frostc$Interpreter$_Closure21$$anonymous20$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64} };

typedef frost$core$Int64 (*$fn2)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn3)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);
typedef frost$core$Int64 (*$fn4)(org$frostlang$frostc$Interpreter$Context*, org$frostlang$frostc$IR$Value*);
typedef void (*$fn5)(org$frostlang$frostc$Interpreter*, frost$core$UInt8*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32\x31", 43, 7903771283318789291, NULL };

void org$frostlang$frostc$Interpreter$_Closure21$init$org$frostlang$frostc$Interpreter(void* rawSelf, org$frostlang$frostc$Interpreter* param1) {
org$frostlang$frostc$Interpreter$_Closure21* param0 = (org$frostlang$frostc$Interpreter$_Closure21*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Interpreter** _3;
org$frostlang$frostc$Interpreter* _4;
frost$core$Object* _5;
org$frostlang$frostc$Interpreter** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:306
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
return;

}
void org$frostlang$frostc$Interpreter$_Closure21$cleanup(void* rawSelf) {
org$frostlang$frostc$Interpreter$_Closure21* param0 = (org$frostlang$frostc$Interpreter$_Closure21*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Interpreter** _3;
org$frostlang$frostc$Interpreter* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:306
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$Int64 org$frostlang$frostc$Interpreter$_Closure21$$anonymous20$org$frostlang$frostc$Interpreter$Context$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$IR$Value$GT$R$frost$core$Int64(void* rawSelf, org$frostlang$frostc$Interpreter$Context* param1, org$frostlang$frostc$FixedArray* param2) {
org$frostlang$frostc$Interpreter$_Closure21* param0 = (org$frostlang$frostc$Interpreter$_Closure21*) rawSelf;

org$frostlang$frostc$Interpreter** _1;
org$frostlang$frostc$Interpreter* _2;
frost$core$Int _3;
frost$core$Object* _4;
org$frostlang$frostc$IR$Value* _5;
$fn2 _6;
frost$core$Int64 _7;
int64_t _10;
int64_t _11;
frost$core$Int _12;
int64_t _14;
frost$core$UInt8* _15;
$fn3 _16;
frost$core$Object* _18;
frost$core$Int64 _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:307
_1 = &param0->$self;
_2 = *_1;
_3 = (frost$core$Int) {0u};
_4 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(param2, _3);
_5 = ((org$frostlang$frostc$IR$Value*) _4);
_6 = ($fn4) param1->$class->vtable[2];
_7 = _6(param1, _5);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:307:78
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_10 = _7.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int) {_11};
_14 = _12.value;
_15 = ((frost$core$UInt8*) _14);
_16 = ($fn5) _2->$class->vtable[13];
_16(_2, _15);
_18 = _4;
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:308
_21 = (frost$core$Int64) {18446744073709551615u};
return _21;

}

