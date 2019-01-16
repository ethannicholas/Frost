#include "frost/threads/MessageQueue/Message.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$String* frost$threads$MessageQueue$Message$convert$R$frost$core$String$shim(frost$threads$MessageQueue$Message* p0) {
    frost$core$String* result = frost$threads$MessageQueue$Message$convert$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$threads$MessageQueue$Message$cleanup$shim(frost$threads$MessageQueue$Message* p0) {
    frost$threads$MessageQueue$Message$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$MessageQueue$Message$class_type frost$threads$MessageQueue$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$threads$MessageQueue$Message$convert$R$frost$core$String$shim, frost$threads$MessageQueue$Message$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 34, -6193463782500875381, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 128, 8639770751127111053, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T(frost$threads$MessageQueue$Message* param0, frost$core$Immutable* param1) {

// line 19
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Immutable** $tmp2 = &param0->payload;
frost$core$Immutable* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Immutable** $tmp4 = &param0->payload;
*$tmp4 = param1;
return;

}
frost$core$String* frost$threads$MessageQueue$Message$convert$R$frost$core$String(frost$threads$MessageQueue$Message* param0) {

// line 24
frost$threads$MessageQueue$Message** $tmp5 = &param0->next;
frost$threads$MessageQueue$Message* $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit($tmp6 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 25
frost$core$Immutable** $tmp9 = &param0->payload;
frost$core$Immutable* $tmp10 = *$tmp9;
frost$core$String* $tmp11 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s12, ((frost$core$Object*) $tmp10));
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp11, &$s14);
frost$threads$MessageQueue$Message** $tmp15 = &param0->next;
frost$threads$MessageQueue$Message* $tmp16 = *$tmp15;
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {25};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s20, $tmp19, &$s21);
abort(); // unreachable
block3:;
frost$core$String* $tmp22 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp13, ((frost$core$Object*) $tmp16));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp22, &$s24);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($27:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
// unreffing REF($26:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
// unreffing REF($14:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
// unreffing REF($13:frost.core.String)
return $tmp23;
block2:;
// line 27
frost$core$Immutable** $tmp25 = &param0->payload;
frost$core$Immutable* $tmp26 = *$tmp25;
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s28, ((frost$core$Object*) $tmp26));
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($49:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($48:frost.core.String)
return $tmp29;

}
void frost$threads$MessageQueue$Message$cleanup(frost$threads$MessageQueue$Message* param0) {

// line 13
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$Immutable** $tmp31 = &param0->payload;
frost$core$Immutable* $tmp32 = *$tmp31;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp32));
frost$threads$MessageQueue$Message** $tmp33 = &param0->next;
frost$threads$MessageQueue$Message* $tmp34 = *$tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
return;

}






