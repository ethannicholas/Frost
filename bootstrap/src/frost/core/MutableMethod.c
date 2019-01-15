#include "frost/core/MutableMethod.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$core$MutableMethod$class_type frost$core$MutableMethod$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$MutableMethod$convert$R$frost$core$String, frost$core$MutableMethod$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64", 24, -7013691227705711665, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 1863085619830966870, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x4d\x65\x74\x68\x6f\x64\x3c", 16, 1863085619830966870, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3e", 1, 163, NULL };

void frost$core$MutableMethod$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Object$Q(frost$core$MutableMethod* param0, frost$core$Int8* param1, frost$core$Object* param2) {

// line 32
frost$core$Int8** $tmp2 = &param0->pointer;
*$tmp2 = param1;
// line 33
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp3 = &param0->target;
frost$core$Object* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q($tmp4);
frost$core$Object** $tmp5 = &param0->target;
*$tmp5 = param2;
return;

}
frost$core$String* frost$core$MutableMethod$convert$R$frost$core$String(frost$core$MutableMethod* param0) {

// line 38
frost$core$Object** $tmp6 = &param0->target;
frost$core$Object* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 39
frost$core$Int8** $tmp10 = &param0->pointer;
frost$core$Int8* $tmp11 = *$tmp10;
frost$core$String* $tmp12 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp11));
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, $tmp12);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s16);
frost$core$Object** $tmp17 = &param0->target;
frost$core$Object* $tmp18 = *$tmp17;
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp15, $tmp18);
frost$core$String* $tmp20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp19, &$s21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
// unreffing REF($18:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
// unreffing REF($17:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
// unreffing REF($13:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($12:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
// unreffing REF($11:frost.core.String)
return $tmp20;
block2:;
// line 41
frost$core$Int8** $tmp22 = &param0->pointer;
frost$core$Int8* $tmp23 = *$tmp22;
frost$core$String* $tmp24 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp23));
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s26, $tmp24);
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp25, &$s28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($43:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
// unreffing REF($42:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
// unreffing REF($41:frost.core.String)
return $tmp27;

}
void frost$core$MutableMethod$cleanup(frost$core$MutableMethod* param0) {

// line 23
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp29 = &param0->target;
frost$core$Object* $tmp30 = *$tmp29;
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
return;

}






