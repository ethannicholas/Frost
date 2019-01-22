#include "frost/threads/MessageQueue/Message.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$String* frost$threads$MessageQueue$Message$get_asString$R$frost$core$String$shim(frost$threads$MessageQueue$Message* p0) {
    frost$core$String* result = frost$threads$MessageQueue$Message$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$threads$MessageQueue$Message$cleanup$shim(frost$threads$MessageQueue$Message* p0) {
    frost$threads$MessageQueue$Message$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$MessageQueue$Message$class_type frost$threads$MessageQueue$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$threads$MessageQueue$Message$get_asString$R$frost$core$String$shim, frost$threads$MessageQueue$Message$cleanup$shim} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 34, -6193463782500875381, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x29", 1, 142, NULL };

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
frost$core$String* frost$threads$MessageQueue$Message$get_asString$R$frost$core$String(frost$threads$MessageQueue$Message* param0) {

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
frost$core$String* $tmp17 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String($tmp13, ((frost$core$Object*) $tmp16));
frost$core$String* $tmp18 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp17, &$s19);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp17));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp11));
return $tmp18;
block2:;
// line 27
frost$core$Immutable** $tmp20 = &param0->payload;
frost$core$Immutable* $tmp21 = *$tmp20;
frost$core$String* $tmp22 = frost$core$String$$ADD$frost$core$Object$R$frost$core$String(&$s23, ((frost$core$Object*) $tmp21));
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp22, &$s25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
return $tmp24;

}
void frost$threads$MessageQueue$Message$cleanup(frost$threads$MessageQueue$Message* param0) {

// line 13
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$Immutable** $tmp26 = &param0->payload;
frost$core$Immutable* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$threads$MessageQueue$Message** $tmp28 = &param0->next;
frost$threads$MessageQueue$Message* $tmp29 = *$tmp28;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
return;

}






