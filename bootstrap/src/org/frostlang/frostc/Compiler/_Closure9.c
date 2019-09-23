#include "org/frostlang/frostc/Compiler/_Closure9.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Compiler/Target.h"


static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure9$class_type org$frostlang$frostc$Compiler$_Closure9$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure9$cleanup, org$frostlang$frostc$Compiler$_Closure9$$anonymous8$org$frostlang$frostc$Compiler$Target} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 39, 8885084369321289246, NULL };

void org$frostlang$frostc$Compiler$_Closure9$init$org$frostlang$frostc$Compiler(void* rawSelf, org$frostlang$frostc$Compiler* param1) {
org$frostlang$frostc$Compiler$_Closure9* param0 = (org$frostlang$frostc$Compiler$_Closure9*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
org$frostlang$frostc$Compiler** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5245
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$dummy445;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$dummy445;
*_7 = param1;
return;

}
void org$frostlang$frostc$Compiler$_Closure9$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$_Closure9* param0 = (org$frostlang$frostc$Compiler$_Closure9*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Compiler** _3;
org$frostlang$frostc$Compiler* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5245
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$dummy445;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
void org$frostlang$frostc$Compiler$_Closure9$$anonymous8$org$frostlang$frostc$Compiler$Target(void* rawSelf, org$frostlang$frostc$Compiler$Target* param1) {
org$frostlang$frostc$Compiler$_Closure9* param0 = (org$frostlang$frostc$Compiler$_Closure9*) rawSelf;

org$frostlang$frostc$Compiler** _1;
org$frostlang$frostc$Compiler* _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5245
_1 = &param0->$dummy445;
_2 = *_1;
org$frostlang$frostc$Compiler$createScopes$org$frostlang$frostc$Compiler$Target(_2, param1);
return;

}

