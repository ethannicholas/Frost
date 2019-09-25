#include "org/frostlang/frostc/Compiler/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Type.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/MethodDecl/Parameter.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure2$class_type org$frostlang$frostc$Compiler$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure2$cleanup, org$frostlang$frostc$Compiler$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$Parameter$R$org$frostlang$frostc$MethodDecl$Parameter} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 39, 8885074473716635347, NULL };

void org$frostlang$frostc$Compiler$_Closure2$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$Type* param2) {
org$frostlang$frostc$Compiler$_Closure2* param0 = (org$frostlang$frostc$Compiler$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
frost$core$Object* _10;
org$frostlang$frostc$Type** _12;
org$frostlang$frostc$Type* _13;
frost$core$Object* _14;
org$frostlang$frostc$Type** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:1675
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:1675
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->type;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->type;
*_16 = param2;
return;

}
void org$frostlang$frostc$Compiler$_Closure2$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$_Closure2* param0 = (org$frostlang$frostc$Compiler$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Type** _7;
org$frostlang$frostc$Type* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:1675
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->type;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}
org$frostlang$frostc$MethodDecl$Parameter* org$frostlang$frostc$Compiler$_Closure2$$anonymous1$org$frostlang$frostc$MethodDecl$Parameter$R$org$frostlang$frostc$MethodDecl$Parameter(void* rawSelf, org$frostlang$frostc$MethodDecl$Parameter* param1) {
org$frostlang$frostc$Compiler$_Closure2* param0 = (org$frostlang$frostc$Compiler$_Closure2*) rawSelf;

org$frostlang$frostc$MethodDecl$Parameter* _1;
frost$core$String** _2;
frost$core$String* _3;
org$frostlang$frostc$Compiler** _4;
org$frostlang$frostc$Compiler* _5;
org$frostlang$frostc$Type** _6;
org$frostlang$frostc$Type* _7;
org$frostlang$frostc$Type** _8;
org$frostlang$frostc$Type* _9;
org$frostlang$frostc$Type* _10;
frost$core$Object* _12;
frost$core$Object* _14;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:1675
_1 = (org$frostlang$frostc$MethodDecl$Parameter*) frostObjectAlloc(sizeof(org$frostlang$frostc$MethodDecl$Parameter), (frost$core$Class*) &org$frostlang$frostc$MethodDecl$Parameter$class);
_2 = &param1->name;
_3 = *_2;
_4 = &param0->$self;
_5 = *_4;
_6 = &param0->type;
_7 = *_6;
_8 = &param1->type;
_9 = *_8;
_10 = org$frostlang$frostc$Compiler$remapType$org$frostlang$frostc$Type$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(_5, _7, _9);
org$frostlang$frostc$MethodDecl$Parameter$init$frost$core$String$org$frostlang$frostc$Type(_1, _3, _10);
_12 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_16);
return _1;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




