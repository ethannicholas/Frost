#include "org/frostlang/frostc/Interpreter/_Closure3.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Interpreter.h"
#include "frost/core/Frost.h"
#include "frost/core/Int.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
org$frostlang$frostc$Interpreter$_Closure3$class_type org$frostlang$frostc$Interpreter$_Closure3$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Interpreter$_Closure3$cleanup, org$frostlang$frostc$Interpreter$_Closure3$$anonymous2} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x49\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x33", 42, -1381934479290648885, NULL };

void org$frostlang$frostc$Interpreter$_Closure3$init$org$frostlang$frostc$Interpreter(void* rawSelf, org$frostlang$frostc$Interpreter* param1) {
org$frostlang$frostc$Interpreter$_Closure3* param0 = (org$frostlang$frostc$Interpreter$_Closure3*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Interpreter** _3;
org$frostlang$frostc$Interpreter* _4;
frost$core$Object* _5;
org$frostlang$frostc$Interpreter** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:63
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
void org$frostlang$frostc$Interpreter$_Closure3$cleanup(void* rawSelf) {
org$frostlang$frostc$Interpreter$_Closure3* param0 = (org$frostlang$frostc$Interpreter$_Closure3*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Interpreter** _3;
org$frostlang$frostc$Interpreter* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:63
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
void org$frostlang$frostc$Interpreter$_Closure3$$anonymous2(void* rawSelf) {
org$frostlang$frostc$Interpreter$_Closure3* param0 = (org$frostlang$frostc$Interpreter$_Closure3*) rawSelf;

frost$core$Int local0;
org$frostlang$frostc$Interpreter** _1;
org$frostlang$frostc$Interpreter* _2;
frost$collections$Stack** _3;
frost$collections$Stack* _4;
frost$collections$Stack* _5;
frost$core$Object* _6;
frost$core$Int64 _7;
int64_t _10;
int64_t _11;
frost$core$Int _12;
frost$core$Object* _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Interpreter.frost:64
_1 = &param0->$self;
_2 = *_1;
_3 = &_2->stack;
_4 = *_3;
_5 = _4;
_6 = frost$collections$Stack$pop$R$frost$collections$Stack$T(_5);
_7 = ((frost$core$Int64$wrapper*) _6)->value;
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Interpreter.frost:64:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_10 = _7.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int) {_11};
*(&local0) = _12;
_15 = _6;
frost$core$Frost$unref$frost$core$Object$Q(_15);
return;

}






