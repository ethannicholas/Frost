#include "frost/core/RegularExpression.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"

__attribute__((weak)) void frost$core$RegularExpression$cleanup$shim(frost$core$RegularExpression* p0) {
    frost$core$RegularExpression$cleanup(p0);

}

static frost$core$String $s1;
frost$core$RegularExpression$class_type frost$core$RegularExpression$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$RegularExpression$cleanup$shim, frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher, frost$core$RegularExpression$compile$frost$core$String$frost$core$Int, frost$core$RegularExpression$destroy} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 917735413651213978, NULL };

void frost$core$RegularExpression$init$frost$core$String(frost$core$RegularExpression* param0, frost$core$String* param1) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/RegularExpression.frost:15
_1 = (frost$core$Int) {0u};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int(param0, param1, _1);
return;

}
void frost$core$RegularExpression$init$frost$core$String$frost$core$Int(frost$core$RegularExpression* param0, frost$core$String* param1, frost$core$Int param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/RegularExpression.frost:19
frost$core$RegularExpression$compile$frost$core$String$frost$core$Int(param0, param1, param2);
return;

}
void frost$core$RegularExpression$cleanup(frost$core$RegularExpression* param0) {

frost$core$Immutable* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/RegularExpression.frost:27
frost$core$RegularExpression$destroy(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/RegularExpression.frost:26
_3 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_3);
return;

}






