#include "org/frostlang/frostc/ASTNode/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/MutableString.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
org$frostlang$frostc$ASTNode$_Closure2$class_type org$frostlang$frostc$ASTNode$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$ASTNode$_Closure2$cleanup, org$frostlang$frostc$ASTNode$_Closure2$$anonymous1$frost$core$Object} };

typedef frost$core$String* (*$fn2)(frost$core$Object*);
typedef frost$core$String* (*$fn3)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 38, 7134155981402944006, NULL };

void org$frostlang$frostc$ASTNode$_Closure2$init$frost$core$MutableString(org$frostlang$frostc$ASTNode$_Closure2* param0, frost$core$MutableString* param1) {

frost$core$Object* _1;
frost$core$MutableString** _3;
frost$core$MutableString* _4;
frost$core$Object* _5;
frost$core$MutableString** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:586
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$dummy2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$dummy2;
*_7 = param1;
return;

}
void org$frostlang$frostc$ASTNode$_Closure2$cleanup(org$frostlang$frostc$ASTNode$_Closure2* param0) {

frost$core$Object* _1;
frost$core$MutableString** _3;
frost$core$MutableString* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:586
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$dummy2;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
void org$frostlang$frostc$ASTNode$_Closure2$$anonymous1$frost$core$Object(org$frostlang$frostc$ASTNode$_Closure2* param0, frost$core$Object* param1) {

frost$core$MutableString** _1;
frost$core$MutableString* _2;
$fn2 _5;
frost$core$String* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/ASTNode.frost:586
_1 = &param0->$dummy2;
_2 = *_1;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ASTNode.frost:586:35
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_5 = ($fn3) param1->$class->vtable[0];
_6 = _5(param1);
frost$core$MutableString$append$frost$core$String(_2, _6);
_8 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return;

}






