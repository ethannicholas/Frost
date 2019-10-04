#include "org/frostlang/frostc/CodeGenerator/_Closure9.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/CodeGenerator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Code/PrimitiveType.h"
#include "org/frostlang/frostc/Type.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$CodeGenerator$_Closure9$class_type org$frostlang$frostc$CodeGenerator$_Closure9$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$CodeGenerator$_Closure9$cleanup, org$frostlang$frostc$CodeGenerator$_Closure9$$anonymous8$org$frostlang$frostc$Type$R$org$frostlang$frostc$Code$PrimitiveType} };

typedef org$frostlang$frostc$Code$PrimitiveType* (*$fn2)(org$frostlang$frostc$CodeGenerator*, org$frostlang$frostc$Type*);
typedef org$frostlang$frostc$Code$PrimitiveType* (*$fn3)(org$frostlang$frostc$CodeGenerator*, org$frostlang$frostc$Type*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x39", 44, -8754964650607411371, NULL };

void org$frostlang$frostc$CodeGenerator$_Closure9$init$org$frostlang$frostc$CodeGenerator(void* rawSelf, org$frostlang$frostc$CodeGenerator* param1) {
org$frostlang$frostc$CodeGenerator$_Closure9* param0 = (org$frostlang$frostc$CodeGenerator$_Closure9*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CodeGenerator** _3;
org$frostlang$frostc$CodeGenerator* _4;
frost$core$Object* _5;
org$frostlang$frostc$CodeGenerator** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:427
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$dummy32;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$dummy32;
*_7 = param1;
return;

}
void org$frostlang$frostc$CodeGenerator$_Closure9$cleanup(void* rawSelf) {
org$frostlang$frostc$CodeGenerator$_Closure9* param0 = (org$frostlang$frostc$CodeGenerator$_Closure9*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$CodeGenerator** _3;
org$frostlang$frostc$CodeGenerator* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:427
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$dummy32;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
org$frostlang$frostc$Code$PrimitiveType* org$frostlang$frostc$CodeGenerator$_Closure9$$anonymous8$org$frostlang$frostc$Type$R$org$frostlang$frostc$Code$PrimitiveType(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$CodeGenerator$_Closure9* param0 = (org$frostlang$frostc$CodeGenerator$_Closure9*) rawSelf;

org$frostlang$frostc$CodeGenerator** _1;
org$frostlang$frostc$CodeGenerator* _2;
$fn2 _3;
org$frostlang$frostc$Code$PrimitiveType* _4;
frost$core$Object* _5;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/CodeGenerator.frost:427
_1 = &param0->$dummy32;
_2 = *_1;
_3 = ($fn3) _2->$class->vtable[15];
_4 = _3(_2, param1);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return _4;

}

