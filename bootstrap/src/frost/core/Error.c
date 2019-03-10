#include "frost/core/Error.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$String* frost$core$Error$get_asString$R$frost$core$String$shim(frost$core$Error* p0) {
    frost$core$String* result = frost$core$Error$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$Error$cleanup$shim(frost$core$Error* p0) {
    frost$core$Error$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Error$class_type frost$core$Error$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Error$get_asString$R$frost$core$String$shim, frost$core$Error$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x72\x72\x6f\x72", 16, -2245513124245986350, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };

void frost$core$Error$init$frost$core$String(frost$core$Error* param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Error.frost:16
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$String** $tmp2 = &param0->message;
frost$core$String* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$String** $tmp4 = &param0->message;
*$tmp4 = param1;
return;

}
frost$core$String* frost$core$Error$get_asString$R$frost$core$String(frost$core$Error* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Error.frost:21
frost$core$String** $tmp5 = &param0->message;
frost$core$String* $tmp6 = *$tmp5;
// begin inline call to function frost.core.String.get_asString():frost.core.String from Error.frost:21:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/String.frost:390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
frost$core$String* $tmp7 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp6, &$s8);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp6));
return $tmp7;

}
void frost$core$Error$cleanup(frost$core$Error* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Error.frost:6
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp9 = &param0->message;
frost$core$String* $tmp10 = *$tmp9;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp10));
return;

}






