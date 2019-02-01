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


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6c\x61\x73\x73", 16, -3824106976663505050, NULL };

void frost$core$Class$init(frost$core$Class* param0) {

return;

}
void frost$core$Class$cleanup(frost$core$Class* param0) {

// line 4
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp2 = &param0->name;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Class** $tmp4 = &param0->superclass;
frost$core$Class* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
return;

}






