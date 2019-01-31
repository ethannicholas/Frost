#include "org/frostlang/frostc/Compiler/_Closure10.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/Target.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure10$class_type org$frostlang$frostc$Compiler$_Closure10$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure10$cleanup, org$frostlang$frostc$Compiler$_Closure10$$anonymous9$org$frostlang$frostc$Compiler$Target} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x30", 40, 745567289659194778, NULL };

void org$frostlang$frostc$Compiler$_Closure10$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$Compiler$_Closure10* param0, org$frostlang$frostc$Compiler* param1) {

// line 5101
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->$dummy8;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->$dummy8;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$Compiler$_Closure10$cleanup(org$frostlang$frostc$Compiler$_Closure10* param0) {

// line 5101
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp5 = &param0->$dummy8;
org$frostlang$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
void org$frostlang$frostc$Compiler$_Closure10$$anonymous9$org$frostlang$frostc$Compiler$Target(org$frostlang$frostc$Compiler$_Closure10* param0, org$frostlang$frostc$Compiler$Target* param1) {

// line 5101
org$frostlang$frostc$Compiler** $tmp7 = &param0->$dummy8;
org$frostlang$frostc$Compiler* $tmp8 = *$tmp7;
org$frostlang$frostc$Compiler$initializeTarget$org$frostlang$frostc$Compiler$Target($tmp8, param1);
return;

}

