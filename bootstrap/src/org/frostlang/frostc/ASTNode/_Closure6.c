#include "org/frostlang/frostc/ASTNode/_Closure6.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$ASTNode$_Closure6$class_type org$frostlang$frostc$ASTNode$_Closure6$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$ASTNode$_Closure6$cleanup, org$frostlang$frostc$ASTNode$_Closure6$$anonymous5$frost$core$Object} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x36", 38, 6073947464071665670, NULL };

void org$frostlang$frostc$ASTNode$_Closure6$init$frost$core$MutableString(org$frostlang$frostc$ASTNode$_Closure6* param0, frost$core$MutableString* param1) {

// line 590
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$MutableString** $tmp2 = &param0->$dummy4;
frost$core$MutableString* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$MutableString** $tmp4 = &param0->$dummy4;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$ASTNode$_Closure6$cleanup(org$frostlang$frostc$ASTNode$_Closure6* param0) {

// line 590
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$MutableString** $tmp5 = &param0->$dummy4;
frost$core$MutableString* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
void org$frostlang$frostc$ASTNode$_Closure6$$anonymous5$frost$core$Object(org$frostlang$frostc$ASTNode$_Closure6* param0, frost$core$Object* param1) {

// line 590
frost$core$MutableString** $tmp7 = &param0->$dummy4;
frost$core$MutableString* $tmp8 = *$tmp7;
frost$core$MutableString$append$frost$core$Object($tmp8, param1);
return;

}

