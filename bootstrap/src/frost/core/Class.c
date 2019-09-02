#include "frost/core/Class.h"
#include "frost/core/Immutable.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void frost$core$Class$cleanup$shim(frost$core$Class* p0) {
    frost$core$Class$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Class$class_type frost$core$Class$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Class$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -6222778858933417332, NULL };

void frost$core$Class$init(frost$core$Class* param0) {

return;

}
void frost$core$Class$cleanup(frost$core$Class* param0) {

frost$core$Immutable* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$Class** _7;
frost$core$Class* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Class.frost:4
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->name;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->superclass;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}






