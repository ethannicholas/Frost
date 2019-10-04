#include "org/frostlang/frostc/Compiler/_Closure13.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$Compiler$_Closure13$class_type org$frostlang$frostc$Compiler$_Closure13$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$Compiler$_Closure13$cleanup, org$frostlang$frostc$Compiler$_Closure13$$anonymous12$org$frostlang$frostc$Symbol} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x33", 40, 5411933710315797391, NULL };

void org$frostlang$frostc$Compiler$_Closure13$init$org$frostlang$frostc$SymbolTable(void* rawSelf, org$frostlang$frostc$SymbolTable* param1) {
org$frostlang$frostc$Compiler$_Closure13* param0 = (org$frostlang$frostc$Compiler$_Closure13*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$SymbolTable** _3;
org$frostlang$frostc$SymbolTable* _4;
frost$core$Object* _5;
org$frostlang$frostc$SymbolTable** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5783
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$dummy450;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$dummy450;
*_7 = param1;
return;

}
void org$frostlang$frostc$Compiler$_Closure13$cleanup(void* rawSelf) {
org$frostlang$frostc$Compiler$_Closure13* param0 = (org$frostlang$frostc$Compiler$_Closure13*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$SymbolTable** _3;
org$frostlang$frostc$SymbolTable* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5783
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$dummy450;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
void org$frostlang$frostc$Compiler$_Closure13$$anonymous12$org$frostlang$frostc$Symbol(void* rawSelf, org$frostlang$frostc$Symbol* param1) {
org$frostlang$frostc$Compiler$_Closure13* param0 = (org$frostlang$frostc$Compiler$_Closure13*) rawSelf;

org$frostlang$frostc$SymbolTable** _1;
org$frostlang$frostc$SymbolTable* _2;
frost$core$String** _5;
frost$core$String* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Compiler.frost:5783
_1 = &param0->$dummy450;
_2 = *_1;
// begin inline call to method org.frostlang.frostc.SymbolTable.add(s:org.frostlang.frostc.Symbol) from Compiler.frost:5783:58
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/SymbolTable.frost:27
_5 = &param1->name;
_6 = *_5;
org$frostlang$frostc$SymbolTable$add$org$frostlang$frostc$Symbol$frost$core$String(_2, param1, _6);
return;

}

