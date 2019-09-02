#include "frost/core/Immutable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"

__attribute__((weak)) void frost$core$Immutable$cleanup$shim(frost$core$Immutable* p0) {
    frost$core$Immutable$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Immutable$class_type frost$core$Immutable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Immutable$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65", 20, -2552342564646005864, NULL };

void frost$core$Immutable$init(frost$core$Immutable* param0) {

return;

}
void frost$core$Immutable$cleanup(frost$core$Immutable* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Immutable.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}






