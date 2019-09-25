#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR/Value.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Compiler$InlineReturn$class_type org$frostlang$frostc$Compiler$InlineReturn$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$InlineReturn$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x49\x6e\x6c\x69\x6e\x65\x52\x65\x74\x75\x72\x6e", 42, -3521398498578902354, NULL };

void org$frostlang$frostc$Compiler$InlineReturn$init$org$frostlang$frostc$Variable$Q(void* rawSelf, org$frostlang$frostc$Variable* param1) {
org$frostlang$frostc$Compiler$InlineReturn* param0 = (org$frostlang$frostc$Compiler$InlineReturn*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Variable** _3;
org$frostlang$frostc$Variable* _4;
frost$core$Object* _5;
org$frostlang$frostc$Variable** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:110
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->variable;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->variable;
*_7 = param1;
return;

}
void org$frostlang$frostc$Compiler$InlineReturn$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$InlineReturn* param0 = (org$frostlang$frostc$Compiler$InlineReturn*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Variable** _3;
org$frostlang$frostc$Variable* _4;
frost$core$Object* _5;
org$frostlang$frostc$IR$Value** _7;
org$frostlang$frostc$IR$Value* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:103
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->variable;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->value;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

