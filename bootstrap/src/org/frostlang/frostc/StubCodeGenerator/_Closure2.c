#include "org/frostlang/frostc/StubCodeGenerator/_Closure2.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/StubCodeGenerator.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Type.h"


static frost$core$String $s1;
org$frostlang$frostc$StubCodeGenerator$_Closure2$class_type org$frostlang$frostc$StubCodeGenerator$_Closure2$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$StubCodeGenerator$_Closure2$cleanup, org$frostlang$frostc$StubCodeGenerator$_Closure2$$anonymous1$org$frostlang$frostc$Type$R$frost$core$String} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x53\x74\x75\x62\x43\x6f\x64\x65\x47\x65\x6e\x65\x72\x61\x74\x6f\x72\x2e\x5f\x43\x6c\x6f\x73\x75\x72\x65\x32", 48, -7049758131072162016, NULL };

void org$frostlang$frostc$StubCodeGenerator$_Closure2$init$org$frostlang$frostc$StubCodeGenerator(void* rawSelf, org$frostlang$frostc$StubCodeGenerator* param1) {
org$frostlang$frostc$StubCodeGenerator$_Closure2* param0 = (org$frostlang$frostc$StubCodeGenerator$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$StubCodeGenerator** _3;
org$frostlang$frostc$StubCodeGenerator* _4;
frost$core$Object* _5;
org$frostlang$frostc$StubCodeGenerator** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:20
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
void org$frostlang$frostc$StubCodeGenerator$_Closure2$cleanup(void* rawSelf) {
org$frostlang$frostc$StubCodeGenerator$_Closure2* param0 = (org$frostlang$frostc$StubCodeGenerator$_Closure2*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$StubCodeGenerator** _3;
org$frostlang$frostc$StubCodeGenerator* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:20
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->$self;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}
frost$core$String* org$frostlang$frostc$StubCodeGenerator$_Closure2$$anonymous1$org$frostlang$frostc$Type$R$frost$core$String(void* rawSelf, org$frostlang$frostc$Type* param1) {
org$frostlang$frostc$StubCodeGenerator$_Closure2* param0 = (org$frostlang$frostc$StubCodeGenerator$_Closure2*) rawSelf;

org$frostlang$frostc$StubCodeGenerator** _1;
org$frostlang$frostc$StubCodeGenerator* _2;
frost$core$String* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/StubCodeGenerator.frost:20
_1 = &param0->$self;
_2 = *_1;
_3 = org$frostlang$frostc$StubCodeGenerator$type$org$frostlang$frostc$Type$R$frost$core$String(_2, param1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}






