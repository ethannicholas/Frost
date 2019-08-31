#include "frost/threads/MessageQueue/Message.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$String* frost$threads$MessageQueue$Message$get_asString$R$frost$core$String$shim(frost$threads$MessageQueue$Message* p0) {
    frost$core$String* result = frost$threads$MessageQueue$Message$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$threads$MessageQueue$Message$cleanup$shim(frost$threads$MessageQueue$Message* p0) {
    frost$threads$MessageQueue$Message$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$MessageQueue$Message$class_type frost$threads$MessageQueue$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$threads$MessageQueue$Message$get_asString$R$frost$core$String$shim, frost$threads$MessageQueue$Message$cleanup$shim} };

typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn26)(frost$core$Object*);
typedef frost$core$String* (*$fn34)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 34, 6916227539925042667, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, -4760708205025170492, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 128, -7997358956511783565, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, -4760708205025170492, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T(frost$threads$MessageQueue$Message* param0, frost$core$Immutable* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:19
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$core$Immutable** $tmp2 = &param0->payload;
frost$core$Immutable* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$core$Immutable** $tmp4 = &param0->payload;
*$tmp4 = param1;
return;

}
frost$core$String* frost$threads$MessageQueue$Message$get_asString$R$frost$core$String(frost$threads$MessageQueue$Message* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:24
frost$threads$MessageQueue$Message** $tmp5 = &param0->next;
frost$threads$MessageQueue$Message* $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = (frost$core$Bit) {$tmp6 != NULL};
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:25
frost$core$Immutable** $tmp9 = &param0->payload;
frost$core$Immutable* $tmp10 = *$tmp9;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MessageQueue.frost:25:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn12 $tmp11 = ($fn12) ((frost$core$Object*) $tmp10)->$class->vtable[0];
frost$core$String* $tmp13 = $tmp11(((frost$core$Object*) $tmp10));
frost$core$String* $tmp14 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s15, $tmp13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$String* $tmp16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp14, &$s17);
frost$threads$MessageQueue$Message** $tmp18 = &param0->next;
frost$threads$MessageQueue$Message* $tmp19 = *$tmp18;
frost$core$Bit $tmp20 = (frost$core$Bit) {$tmp19 != NULL};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block4; else goto block5;
block5:;
frost$core$Int $tmp22 = (frost$core$Int) {25u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block4:;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MessageQueue.frost:25:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn26 $tmp25 = ($fn26) ((frost$core$Object*) $tmp19)->$class->vtable[0];
frost$core$String* $tmp27 = $tmp25(((frost$core$Object*) $tmp19));
frost$core$String* $tmp28 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp16, $tmp27);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$core$String* $tmp29 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp28, &$s30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp29));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp28));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
return $tmp29;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:27
frost$core$Immutable** $tmp31 = &param0->payload;
frost$core$Immutable* $tmp32 = *$tmp31;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from MessageQueue.frost:27:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn34 $tmp33 = ($fn34) ((frost$core$Object*) $tmp32)->$class->vtable[0];
frost$core$String* $tmp35 = $tmp33(((frost$core$Object*) $tmp32));
frost$core$String* $tmp36 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s37, $tmp35);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$core$String* $tmp38 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp36, &$s39);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
return $tmp38;

}
void frost$threads$MessageQueue$Message$cleanup(frost$threads$MessageQueue$Message* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:13
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$Immutable** $tmp40 = &param0->payload;
frost$core$Immutable* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$threads$MessageQueue$Message** $tmp42 = &param0->next;
frost$threads$MessageQueue$Message* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
return;

}






