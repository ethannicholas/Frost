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
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, 3802845516308077121, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b\x2e\x54\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 73, 4667898839273678970, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 19668416133, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {33};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block1:;
frost$core$String* $tmp22 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s23, $tmp16);
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp22, &$s25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($12:frost.core.String)
return $tmp24;

}
void frost$core$Weak$cleanup(frost$core$Weak* param0) {

return;

}






