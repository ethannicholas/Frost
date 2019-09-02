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

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->compiler;
*_7 = param1;
return;

}
void org$frostlang$frostc$expression$Tuple$_Closure4$cleanup(org$frostlang$frostc$expression$Tuple$_Closure4* param0) {

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->compiler;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
org$frostlang$frostc$Type* org$frostlang$frostc$expression$Tuple$_Closure4$$anonymous3$org$frostlang$frostc$ASTNode$R$org$frostlang$frostc$Type(org$frostlang$frostc$expression$Tuple$_Closure4* param0, org$frostlang$frostc$ASTNode* param1) {

org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/expression/Tuple.frost:76
_1 = &param0->compiler;
_2 = *_1;
_3 = &_2->ANY_TYPE;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
return _4;

}

