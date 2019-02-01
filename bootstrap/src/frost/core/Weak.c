#include "frost/core/Weak.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt8.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
frost$core$Weak$class_type frost$core$Weak$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Weak$get_asString$R$frost$core$String, frost$core$Weak$cleanup, frost$core$Weak$get$R$frost$core$Weak$T, frost$core$Weak$get_valid$R$frost$core$Bit} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x57\x65\x61\x6b", 15, -3508042023515554364, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x2e\x66\x72\x6f\x73\x74", 10, 3802845516308077121, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x57\x65\x61\x6b\x28", 5, 19668416133, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

frost$core$Bit frost$core$Weak$checkValid$frost$core$Object$Q$R$frost$core$Bit(frost$core$Object* param0) {

frost$core$Bit local0;
// line 13
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(param0 != NULL);
bool $tmp3 = $tmp2.value;
if ($tmp3) goto block1; else goto block2;
block1:;
frost$core$Bit $tmp4 = frost$core$Weak$get_valid$R$frost$core$Bit(((frost$core$Weak*) param0));
*(&local0) = $tmp4;
goto block3;
block2:;
*(&local0) = $tmp2;
goto block3;
block3:;
frost$core$Bit $tmp5 = *(&local0);
return $tmp5;

}
void frost$core$Weak$init$frost$core$Weak$T$Q(frost$core$Weak* param0, frost$core$Object* param1) {

// line 23
frost$core$Bit $tmp6 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp7 = &param0->_valid;
*$tmp7 = $tmp6;
// line 26
frost$core$Object** $tmp8 = &param0->value;
*$tmp8 = param1;
// line 27
frost$core$Bit $tmp9 = frost$core$Bit$init$builtin_bit(param1 != NULL);
bool $tmp10 = $tmp9.value;
if ($tmp10) goto block1; else goto block2;
block1:;
// line 28
frost$core$UInt8* $tmp11 = &param1->$flags;
frost$core$UInt8 $tmp12 = *$tmp11;
frost$core$UInt8 $tmp13 = (frost$core$UInt8) {1};
frost$core$UInt8 $tmp14 = frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8($tmp12, $tmp13);
frost$core$UInt8* $tmp15 = &param1->$flags;
*$tmp15 = $tmp14;
// line 29
frost$core$Frost$addWeakReference$frost$core$Weak$LTfrost$core$Frost$addWeakReference$T$GT(param0);
goto block2;
block2:;
return;

}
frost$core$Object* frost$core$Weak$get$R$frost$core$Weak$T(frost$core$Weak* param0) {

// line 40
frost$core$Bit $tmp16 = frost$core$Weak$get_valid$R$frost$core$Bit(param0);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp18 = (frost$core$Int64) {40};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s19, $tmp18);
abort(); // unreachable
block1:;
// line 41
frost$core$Object** $tmp20 = &param0->value;
frost$core$Object* $tmp21 = *$tmp20;
frost$core$Frost$ref$frost$core$Object$Q($tmp21);
return $tmp21;

}
frost$core$Bit frost$core$Weak$get_valid$R$frost$core$Bit(frost$core$Weak* param0) {

// line 45
frost$core$Bit* $tmp22 = &param0->_valid;
frost$core$Bit $tmp23 = *$tmp22;
return $tmp23;

}
frost$core$String* frost$core$Weak$get_asString$R$frost$core$String(frost$core$Weak* param0) {

// line 50
frost$core$Object** $tmp24 = &param0->value;
frost$core$Object* $tmp25 = *$tmp24;
frost$core$String* $tmp26 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s27, $tmp25);
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp26, &$s29);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp26));
return $tmp28;

}
void frost$core$Weak$cleanup(frost$core$Weak* param0) {

return;

}






