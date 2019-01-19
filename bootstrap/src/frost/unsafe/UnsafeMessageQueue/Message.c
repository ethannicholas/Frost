#include "frost/unsafe/UnsafeMessageQueue/Message.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"


static frost$core$String $s1;
frost$unsafe$UnsafeMessageQueue$Message$class_type frost$unsafe$UnsafeMessageQueue$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$unsafe$UnsafeMessageQueue$Message$get_asString$R$frost$core$String, frost$unsafe$UnsafeMessageQueue$Message$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 39, -7525823870105925712, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 138, 5899324047948949671, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T(frost$unsafe$UnsafeMessageQueue$Message* param0, frost$core$Object* param1) {

// line 13
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->payload;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->payload;
*$tmp4 = param1;
return;

}
frost$core$String* frost$unsafe$UnsafeMessageQueue$Message$get_asString$R$frost$core$String(frost$unsafe$UnsafeMessageQueue$Message* param0) {

// line 18
frost$unsafe$UnsafeMessageQueue$Message** $tmp5 = &param0->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit($tmp6 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// line 19
frost$core$Object** $tmp9 = &param0->payload;
frost$core$Object* $tmp10 = *$tmp9;
frost$core$String* $tmp11 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s12, $tmp10);
frost$core$String* $tmp13 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp11, &$s14);
frost$unsafe$UnsafeMessageQueue$Message** $tmp15 = &param0->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp16 = *$tmp15;
frost$core$Bit $tmp17 = frost$core$Bit$init$builtin_bit($tmp16 != NULL);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block3; else goto block4;
block4:;
frost$core$Int64 $tmp19 = (frost$core$Int64) {19};
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
// line 21
frost$core$Object** $tmp25 = &param0->payload;
frost$core$Object* $tmp26 = *$tmp25;
frost$core$String* $tmp27 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s28, $tmp26);
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp27, &$s30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
// unreffing REF($49:frost.core.String)
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
// unreffing REF($48:frost.core.String)
return $tmp29;

}
void frost$unsafe$UnsafeMessageQueue$Message$cleanup(frost$unsafe$UnsafeMessageQueue$Message* param0) {

// line 7
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp31 = &param0->payload;
frost$core$Object* $tmp32 = *$tmp31;
frost$core$Frost$unref$frost$core$Object$Q($tmp32);
frost$unsafe$UnsafeMessageQueue$Message** $tmp33 = &param0->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp34 = *$tmp33;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp34));
return;

}






