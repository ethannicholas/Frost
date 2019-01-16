#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
frost$core$Weak$class_type frost$core$Weak$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Weak$convert$R$frost$core$String, frost$core$Weak$cleanup, frost$core$Weak$get$R$frost$core$Weak$T} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, 3802845516308077121, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x2e\x54\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, 4667898839273678970, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 19668416133, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit($tmp6 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp9 = (frost$core$Int64) {32};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s10, $tmp9, &$s11);
abort(); // unreachable
block1:;
frost$core$String* $tmp12 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s13, $tmp6);
frost$core$String* $tmp14 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp12, &$s15);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($12:frost.core.String)
return $tmp14;

}
void frost$core$Weak$cleanup(frost$core$Weak* param0) {

return;

}






