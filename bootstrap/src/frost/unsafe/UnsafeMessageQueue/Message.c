#include "frost/unsafe/UnsafeMessageQueue/Message.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"


static frost$core$String $s1;
frost$unsafe$UnsafeMessageQueue$Message$class_type frost$unsafe$UnsafeMessageQueue$Message$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$unsafe$UnsafeMessageQueue$Message$get_asString$R$frost$core$String, frost$unsafe$UnsafeMessageQueue$Message$cleanup} };

typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn21)(frost$core$Object*);
typedef frost$core$String* (*$fn29)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 39, -7525823870105925712, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x28", 8, 19192443532219350, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, 142, NULL };

void frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T(frost$unsafe$UnsafeMessageQueue$Message* param0, frost$core$Object* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:13
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->payload;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->payload;
*$tmp4 = param1;
return;

}
frost$core$String* frost$unsafe$UnsafeMessageQueue$Message$get_asString$R$frost$core$String(frost$unsafe$UnsafeMessageQueue$Message* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:18
frost$unsafe$UnsafeMessageQueue$Message** $tmp5 = &param0->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp6 = *$tmp5;
frost$core$Bit $tmp7 = frost$core$Bit$init$builtin_bit($tmp6 != NULL);
bool $tmp8 = $tmp7.value;
if ($tmp8) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:19
frost$core$Object** $tmp9 = &param0->payload;
frost$core$Object* $tmp10 = *$tmp9;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from UnsafeMessageQueue.frost:19:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn12 $tmp11 = ($fn12) $tmp10->$class->vtable[0];
frost$core$String* $tmp13 = $tmp11($tmp10);
frost$core$String* $tmp14 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s15, $tmp13);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
frost$core$String* $tmp16 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp14, &$s17);
frost$unsafe$UnsafeMessageQueue$Message** $tmp18 = &param0->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp19 = *$tmp18;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from UnsafeMessageQueue.frost:19:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn21 $tmp20 = ($fn21) ((frost$core$Object*) $tmp19)->$class->vtable[0];
frost$core$String* $tmp22 = $tmp20(((frost$core$Object*) $tmp19));
frost$core$String* $tmp23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp16, $tmp22);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp22));
frost$core$String* $tmp24 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp23, &$s25);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp24));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp16));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
return $tmp24;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:21
frost$core$Object** $tmp26 = &param0->payload;
frost$core$Object* $tmp27 = *$tmp26;
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from UnsafeMessageQueue.frost:21:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
$fn29 $tmp28 = ($fn29) $tmp27->$class->vtable[0];
frost$core$String* $tmp30 = $tmp28($tmp27);
frost$core$String* $tmp31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s32, $tmp30);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp30));
frost$core$String* $tmp33 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp31, &$s34);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp33));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp31));
return $tmp33;

}
void frost$unsafe$UnsafeMessageQueue$Message$cleanup(frost$unsafe$UnsafeMessageQueue$Message* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:7
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp35 = &param0->payload;
frost$core$Object* $tmp36 = *$tmp35;
frost$core$Frost$unref$frost$core$Object$Q($tmp36);
frost$unsafe$UnsafeMessageQueue$Message** $tmp37 = &param0->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
return;

}






