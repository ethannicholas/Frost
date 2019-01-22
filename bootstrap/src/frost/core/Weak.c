#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Int32.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$core$Weak$class_type frost$core$Weak$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Weak$get_asString$R$frost$core$String, frost$core$Weak$cleanup, frost$core$Weak$get$R$frost$core$Weak$T} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, 3802845516308077121, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 19668416133, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$core$Weak$init$frost$core$Weak$T(frost$core$Weak* param0, frost$core$Object* param1) {

// line 15
frost$core$Object** $tmp2 = &param0->value;
*$tmp2 = param1;
return;

}
frost$core$Object* frost$core$Weak$get$R$frost$core$Weak$T(frost$core$Weak* param0) {

// line 27
frost$core$Int32* $tmp3 = &((frost$core$Object*) param0)->refCount;
frost$core$Int32 $tmp4 = *$tmp3;
frost$core$Int32 $tmp5 = (frost$core$Int32) {0};
int32_t $tmp6 = $tmp4.value;
int32_t $tmp7 = $tmp5.value;
bool $tmp8 = $tmp6 > $tmp7;
frost$core$Bit $tmp9 = (frost$core$Bit) {$tmp8};
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp11 = (frost$core$Int64) {27};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s12, $tmp11);
abort(); // unreachable
block1:;
// line 28
frost$core$Object** $tmp13 = &param0->value;
frost$core$Object* $tmp14 = *$tmp13;
frost$core$Frost$ref$frost$core$Object$Q($tmp14);
return $tmp14;

}
frost$core$String* frost$core$Weak$get_asString$R$frost$core$String(frost$core$Weak* param0) {

// line 33
frost$core$Object** $tmp15 = &param0->value;
frost$core$Object* $tmp16 = *$tmp15;
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s18, $tmp16);
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s20);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
return $tmp19;

}
void frost$core$Weak$cleanup(frost$core$Weak* param0) {

return;

}






