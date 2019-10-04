#include "org/frostlang/frostc/StubBackend/_Closure4.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/StubBackend.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
org$frostlang$frostc$StubBackend$_Closure4$class_type org$frostlang$frostc$StubBackend$_Closure4$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubBackend$_Closure4$cleanup, org$frostlang$frostc$StubBackend$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x42\x61\x63\x6b\x65\x6e\x64\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x34", 42, -7811511878954039168, NULL };

void org$frostlang$frostc$StubBackend$_Closure4$init$org$frostlang$frostc$StubBackend(void* rawSelf, org$frostlang$frostc$StubBackend* param1) {
org$frostlang$frostc$StubBackend$_Closure4* param0 = (org$frostlang$frostc$StubBackend$_Closure4*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$StubBackend** _3;
org$frostlang$frostc$StubBackend* _4;
frost$core$Object* _5;
org$frostlang$frostc$StubBackend** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubBackend.frost:35
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
void org$frostlang$frostc$StubBackend$_Closure4$cleanup(void* rawSelf) {
org$frostlang$frostc$StubBackend$_Closure4* param0 = (org$frostlang$frostc$StubBackend$_Closure4*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$StubBackend** _3;
org$frostlang$frostc$StubBackend* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubBackend.frost:35
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$StubBackend$_Closure4$$anonymous3$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$StubBackend$_Closure4* param0 = (org$frostlang$frostc$StubBackend$_Closure4*) rawSelf;

org$frostlang$frostc$StubBackend** _1;
org$frostlang$frostc$StubBackend* _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubBackend.frost:35
_1 = &param0->$self;
_2 = *_1;
_3 = org$frostlang$frostc$StubBackend$type$org$frostlang$frostc$Type$R$frost$core$String(_2, param1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}

