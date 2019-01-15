#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$core$Weak$class_type frost$core$Weak$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Weak$convert$R$frost$core$String, frost$core$Weak$cleanup, frost$core$Weak$get$R$frost$core$Weak$T} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 19668416133, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$Weak$init$frost$core$Weak$T(frost$core$Weak* param0, frost$core$Object* param1) {

// line 15
frost$core$Object** $tmp2 = &param0->value;
*$tmp2 = param1;
return;

}
frost$core$Object* frost$core$Weak$get$R$frost$core$Weak$T(frost$core$Weak* param0) {

// line 27
frost$core$Object** $tmp3 = &param0->value;
frost$core$Object* $tmp4 = *$tmp3;
frost$core$Frost$ref$frost$core$Object$Q($tmp4);
return $tmp4;

}
frost$core$String* frost$core$Weak$convert$R$frost$core$String(frost$core$Weak* param0) {

// line 32
frost$core$Object** $tmp5 = &param0->value;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$String* $tmp7 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s8, $tmp6);
frost$core$String* $tmp9 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp7, &$s10);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
// unreffing REF($6:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
// unreffing REF($5:frost.core.String)
return $tmp9;

}
void frost$core$Weak$cleanup(frost$core$Weak* param0) {

return;

}






