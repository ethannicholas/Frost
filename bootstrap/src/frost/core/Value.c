#include "frost/core/Value.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"

__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Value$class_type frost$core$Value$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Value$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x56\x61\x6c\x75\x65", 16, -3824106974697578343, NULL };

void frost$core$Value$cleanup(frost$core$Value* param0) {

// line 44
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
void frost$core$Value$init(frost$core$Value* param0) {

return;

}






