#include "org/frostlang/frostc/Compiler/InlineReturn.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Variable.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/IR/Value.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$InlineReturn$class_type org$frostlang$frostc$Compiler$InlineReturn$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$InlineReturn$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x49\x6e\x6c\x69\x6e\x65\x52\x65\x74\x75\x72\x6e", 42, -3521398498578902354, NULL };

void org$frostlang$frostc$Compiler$InlineReturn$init$org$frostlang$frostc$Variable$Q(org$frostlang$frostc$Compiler$InlineReturn* param0, org$frostlang$frostc$Variable* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:110
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Variable** $tmp2 = &param0->variable;
org$frostlang$frostc$Variable* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Variable** $tmp4 = &param0->variable;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$Compiler$InlineReturn$cleanup(org$frostlang$frostc$Compiler$InlineReturn* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:103
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Variable** $tmp5 = &param0->variable;
org$frostlang$frostc$Variable* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
org$frostlang$frostc$IR$Value** $tmp7 = &param0->value;
org$frostlang$frostc$IR$Value* $tmp8 = *$tmp7;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp8));
return;

}

