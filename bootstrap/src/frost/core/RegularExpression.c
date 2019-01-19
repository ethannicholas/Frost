#include "frost/core/RegularExpression.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"

__attribute__((weak)) void frost$core$RegularExpression$cleanup$shim(frost$core$RegularExpression* p0) {
    frost$core$RegularExpression$cleanup(p0);

}

static frost$core$String $s1;
frost$core$RegularExpression$class_type frost$core$RegularExpression$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$RegularExpression$cleanup$shim, frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher, frost$core$RegularExpression$compile$frost$core$String$frost$core$Int64, frost$core$RegularExpression$destroy} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e", 28, 5545501573009681362, NULL };

void frost$core$RegularExpression$init$frost$core$String(frost$core$RegularExpression* param0, frost$core$String* param1) {

// line 15
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$RegularExpression$init$frost$core$String$frost$core$Int64(param0, param1, $tmp2);
return;

}
void frost$core$RegularExpression$init$frost$core$String$frost$core$Int64(frost$core$RegularExpression* param0, frost$core$String* param1, frost$core$Int64 param2) {

// line 19
frost$core$RegularExpression$compile$frost$core$String$frost$core$Int64(param0, param1, param2);
return;

}
void frost$core$RegularExpression$cleanup(frost$core$RegularExpression* param0) {

// line 27
frost$core$RegularExpression$destroy(param0);
// line 26
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}






