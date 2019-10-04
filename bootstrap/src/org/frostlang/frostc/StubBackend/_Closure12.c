#include "org/frostlang/frostc/StubBackend/_Closure12.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/StubBackend.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/ClassDecl/GenericParameter.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$StubBackend$_Closure12$class_type org$frostlang$frostc$StubBackend$_Closure12$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubBackend$_Closure12$cleanup, org$frostlang$frostc$StubBackend$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x42\x61\x63\x6b\x65\x6e\x64\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x31\x32", 43, -106685650703332265, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x3a", 1, -5808597555084153427, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "", 0, -3750763034362895579, NULL };

void org$frostlang$frostc$StubBackend$_Closure12$init$org$frostlang$frostc$StubBackend(void* rawSelf, org$frostlang$frostc$StubBackend* param1) {
org$frostlang$frostc$StubBackend$_Closure12* param0 = (org$frostlang$frostc$StubBackend$_Closure12*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$StubBackend** _3;
org$frostlang$frostc$StubBackend* _4;
frost$core$Object* _5;
org$frostlang$frostc$StubBackend** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubBackend.frost:191
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->$self;
*_7 = param1;
return;

}
void org$frostlang$frostc$StubBackend$_Closure12$cleanup(void* rawSelf) {
org$frostlang$frostc$StubBackend$_Closure12* param0 = (org$frostlang$frostc$StubBackend$_Closure12*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$StubBackend** _3;
org$frostlang$frostc$StubBackend* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubBackend.frost:191
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$StubBackend$_Closure12$$anonymous11$org$frostlang$frostc$ClassDecl$GenericParameter$R$frost$core$String(void* rawSelf, org$frostlang$frostc$ClassDecl$GenericParameter* param1) {
org$frostlang$frostc$StubBackend$_Closure12* param0 = (org$frostlang$frostc$StubBackend$_Closure12*) rawSelf;

org$frostlang$frostc$Symbol* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$core$Object* _6;
frost$core$String* _9;
org$frostlang$frostc$StubBackend** _10;
org$frostlang$frostc$StubBackend* _11;
org$frostlang$frostc$Type** _12;
org$frostlang$frostc$Type* _13;
frost$core$String* _14;
frost$core$String* _15;
frost$core$String* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _27;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubBackend.frost:191
_1 = ((org$frostlang$frostc$Symbol*) param1);
_2 = &_1->name;
_3 = *_2;
// begin inline call to function frost.core.String.get_asString():frost.core.String from StubBackend.frost:191:52
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:390
_6 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_3, &$s2);
_10 = &param0->$self;
_11 = *_10;
_12 = &param1->bound;
_13 = *_12;
_14 = org$frostlang$frostc$StubBackend$type$org$frostlang$frostc$Type$R$frost$core$String(_11, _13);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_9, _14);
_16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, &$s3);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_27);
return _16;

}

