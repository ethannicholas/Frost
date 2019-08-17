#include "org/frostlang/frostc/expression/Tuple/_Closure4.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/ASTNode.h"


static frost$core$String $s1;
org$frostlang$frostc$expression$Tuple$_Closure4$class_type org$frostlang$frostc$expression$Tuple$_Closure4$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$expression$Tuple$_Closure4$cleanup, org$frostlang$frostc$expression$Tuple$_Closure4$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x54\x75\x70\x6c\x65\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x34", 47, -8535675428921471858, NULL };

void org$frostlang$frostc$expression$Tuple$_Closure4$init$org$frostlang$frostc$Compiler(org$frostlang$frostc$expression$Tuple$_Closure4* param0, org$frostlang$frostc$Compiler* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$Compiler** $tmp2 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
org$frostlang$frostc$Compiler** $tmp4 = &param0->compiler;
*$tmp4 = param1;
return;

}
void org$frostlang$frostc$expression$Tuple$_Closure4$cleanup(org$frostlang$frostc$expression$Tuple$_Closure4* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$Compiler** $tmp5 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$_Closure4$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$expression$Tuple$_Closure4* param0, org$frostlang$frostc$ASTNode* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
org$frostlang$frostc$Compiler** $tmp7 = &param0->compiler;
org$frostlang$frostc$Compiler* $tmp8 = *$tmp7;
org$frostlang$frostc$Type** $tmp9 = &$tmp8->ANY_TYPE;
org$frostlang$frostc$Type* $tmp10 = *$tmp9;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
return $tmp10;

}

