#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$String* frost$core$Method$get_asString$R$frost$core$String$shim(frost$core$Method* p0) {
    frost$core$String* result = frost$core$Method$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$Method$cleanup$shim(frost$core$Method* p0) {
    frost$core$Method$cleanup(p0);

}

static frost$core$String $s1;
frost$core$Method$class_type frost$core$Method$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Method$get_asString$R$frost$core$String$shim, frost$core$Method$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x65\x74\x68\x6f\x64", 17, 1146821009278619293, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, 190024286257870, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x3c", 7, 190024286257870, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3e", 1, 163, NULL };

void frost$core$Method$init$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Immutable$Q(frost$core$Method* param0, frost$core$Int8* param1, frost$core$Immutable* param2) {

// line 37
frost$core$Int8** $tmp2 = &param0->pointer;
*$tmp2 = param1;
// line 38
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param2));
frost$core$Immutable** $tmp3 = &param0->target;
frost$core$Immutable* $tmp4 = *$tmp3;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$core$Immutable** $tmp5 = &param0->target;
*$tmp5 = param2;
return;

}
frost$core$String* frost$core$Method$get_asString$R$frost$core$String(frost$core$Method* param0) {

// line 43
frost$core$Immutable** $tmp6 = &param0->target;
frost$core$Immutable* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block1:;
// line 44
frost$core$Int8** $tmp10 = &param0->pointer;
frost$core$Int8* $tmp11 = *$tmp10;
frost$core$String* $tmp12 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp11));
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s14, $tmp12);
frost$core$String* $tmp15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp13, &$s16);
frost$core$Immutable** $tmp17 = &param0->target;
frost$core$Immutable* $tmp18 = *$tmp17;
frost$core$String* $tmp19 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp15, ((frost$core$Object*) $tmp18));
frost$core$String* $tmp20 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp19, &$s21);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp19));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp15));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp12));
return $tmp20;
block2:;
// line 46
frost$core$Int8** $tmp22 = &param0->pointer;
frost$core$Int8* $tmp23 = *$tmp22;
frost$core$String* $tmp24 = frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(((frost$core$Object**) $tmp23));
frost$core$String* $tmp25 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s26, $tmp24);
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp25, &$s28);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
return $tmp27;

}
void frost$core$Method$cleanup(frost$core$Method* param0) {

// line 7
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$Immutable** $tmp29 = &param0->target;
frost$core$Immutable* $tmp30 = *$tmp29;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
return;

}






