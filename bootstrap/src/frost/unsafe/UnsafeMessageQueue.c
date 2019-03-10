#include "frost/unsafe/UnsafeMessageQueue.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/threads/ScopedLock.h"
#include "frost/threads/Lock.h"
#include "frost/core/Frost.h"
#include "frost/unsafe/UnsafeMessageQueue/Message.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/threads/Notifier.h"

__attribute__((weak)) void frost$unsafe$UnsafeMessageQueue$cleanup$shim(frost$unsafe$UnsafeMessageQueue* p0) {
    frost$unsafe$UnsafeMessageQueue$cleanup(p0);

}

static frost$core$String $s1;
frost$unsafe$UnsafeMessageQueue$class_type frost$unsafe$UnsafeMessageQueue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$unsafe$UnsafeMessageQueue$cleanup$shim, frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T, frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int, frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit, frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T, frost$unsafe$UnsafeMessageQueue$clear} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 31, 6963980427423725683, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };

void frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0, frost$core$Object* param1) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:46
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp2 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp3 = &param0->lock;
frost$threads$Lock* $tmp4 = *$tmp3;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp2, $tmp4);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
frost$threads$ScopedLock* $tmp5 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:47
frost$unsafe$UnsafeMessageQueue$Message** $tmp6 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:48
frost$unsafe$UnsafeMessageQueue$Message** $tmp10 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp11 = *$tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11 != NULL};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block5;
block5:;
frost$core$Int $tmp14 = (frost$core$Int) {48u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s15, $tmp14);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:49
frost$unsafe$UnsafeMessageQueue$Message** $tmp16 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp17 = *$tmp16;
FROST_ASSERT(32 == sizeof(frost$unsafe$UnsafeMessageQueue$Message));
frost$unsafe$UnsafeMessageQueue$Message* $tmp18 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T($tmp18, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$unsafe$UnsafeMessageQueue$Message** $tmp19 = &$tmp17->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$unsafe$UnsafeMessageQueue$Message** $tmp21 = &$tmp17->next;
*$tmp21 = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:50
frost$unsafe$UnsafeMessageQueue$Message** $tmp22 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp23 = *$tmp22;
frost$unsafe$UnsafeMessageQueue$Message** $tmp24 = &$tmp23->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp25 = *$tmp24;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$unsafe$UnsafeMessageQueue$Message** $tmp26 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$unsafe$UnsafeMessageQueue$Message** $tmp28 = &param0->tail;
*$tmp28 = $tmp25;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:53
frost$core$Int* $tmp29 = &param0->count;
frost$core$Int $tmp30 = *$tmp29;
frost$core$Int $tmp31 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from UnsafeMessageQueue.frost:53:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:426
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 == $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block7; else goto block8;
block8:;
frost$core$Int $tmp37 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s38, $tmp37);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:54
FROST_ASSERT(32 == sizeof(frost$unsafe$UnsafeMessageQueue$Message));
frost$unsafe$UnsafeMessageQueue$Message* $tmp39 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T($tmp39, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$unsafe$UnsafeMessageQueue$Message** $tmp40 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$unsafe$UnsafeMessageQueue$Message** $tmp42 = &param0->head;
*$tmp42 = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:55
frost$unsafe$UnsafeMessageQueue$Message** $tmp43 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp44 = *$tmp43;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$unsafe$UnsafeMessageQueue$Message** $tmp45 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$unsafe$UnsafeMessageQueue$Message** $tmp47 = &param0->tail;
*$tmp47 = $tmp44;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:57
frost$core$Int* $tmp48 = &param0->count;
frost$core$Int $tmp49 = *$tmp48;
frost$core$Int $tmp50 = (frost$core$Int) {1u};
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51 + $tmp52;
frost$core$Int $tmp54 = (frost$core$Int) {$tmp53};
frost$core$Int* $tmp55 = &param0->count;
*$tmp55 = $tmp54;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:58
frost$threads$Notifier** $tmp56 = &param0->notifier;
frost$threads$Notifier* $tmp57 = *$tmp56;
frost$threads$Notifier$notify($tmp57);
frost$threads$ScopedLock* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp59 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp60 = &param0->lock;
frost$threads$Lock* $tmp61 = *$tmp60;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp59, $tmp61);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
frost$threads$ScopedLock* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = $tmp59;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:71
frost$core$Int* $tmp63 = &param0->count;
frost$core$Int $tmp64 = *$tmp63;
frost$threads$ScopedLock* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp64;

}
frost$core$Bit frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:83
// begin inline call to method frost.unsafe.UnsafeMessageQueue.pendingMessages():frost.core.Int from UnsafeMessageQueue.frost:83:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp66 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp67 = &param0->lock;
frost$threads$Lock* $tmp68 = *$tmp67;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp66, $tmp68);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
frost$threads$ScopedLock* $tmp69 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
*(&local0) = $tmp66;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp66));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:71
frost$core$Int* $tmp70 = &param0->count;
frost$core$Int $tmp71 = *$tmp70;
frost$threads$ScopedLock* $tmp72 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp73 = (frost$core$Int) {0u};
int64_t $tmp74 = $tmp71.value;
int64_t $tmp75 = $tmp73.value;
bool $tmp76 = $tmp74 > $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
return $tmp77;

}
frost$core$Object* frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:93
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp78 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp79 = &param0->lock;
frost$threads$Lock* $tmp80 = *$tmp79;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp78, $tmp80);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
frost$threads$ScopedLock* $tmp81 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp81));
*(&local0) = $tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp78));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:94
goto block1;
block1:;
frost$unsafe$UnsafeMessageQueue$Message** $tmp82 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp83 = *$tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83 == NULL};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:95
frost$threads$Notifier** $tmp86 = &param0->notifier;
frost$threads$Notifier* $tmp87 = *$tmp86;
frost$threads$Notifier$wait($tmp87);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:97
frost$unsafe$UnsafeMessageQueue$Message** $tmp88 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp89 = *$tmp88;
frost$core$Object** $tmp90 = &$tmp89->payload;
frost$core$Object* $tmp91 = *$tmp90;
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp91);
frost$core$Object* $tmp92 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
*(&local1) = $tmp91;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:98
frost$unsafe$UnsafeMessageQueue$Message** $tmp93 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp94 = *$tmp93;
frost$unsafe$UnsafeMessageQueue$Message** $tmp95 = &$tmp94->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp96 = *$tmp95;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$unsafe$UnsafeMessageQueue$Message** $tmp97 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp98 = *$tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$unsafe$UnsafeMessageQueue$Message** $tmp99 = &param0->head;
*$tmp99 = $tmp96;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:99
frost$unsafe$UnsafeMessageQueue$Message** $tmp100 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp101 = *$tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101 == NULL};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$unsafe$UnsafeMessageQueue$Message*) NULL)));
frost$unsafe$UnsafeMessageQueue$Message** $tmp104 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp105 = *$tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$unsafe$UnsafeMessageQueue$Message** $tmp106 = &param0->tail;
*$tmp106 = ((frost$unsafe$UnsafeMessageQueue$Message*) NULL);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:102
frost$core$Int* $tmp107 = &param0->count;
frost$core$Int $tmp108 = *$tmp107;
frost$core$Int $tmp109 = (frost$core$Int) {1u};
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110 - $tmp111;
frost$core$Int $tmp113 = (frost$core$Int) {$tmp112};
frost$core$Int* $tmp114 = &param0->count;
*$tmp114 = $tmp113;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:103
frost$core$Object* $tmp115 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp115);
frost$core$Object* $tmp116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp116);
*(&local1) = ((frost$core$Object*) NULL);
frost$threads$ScopedLock* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp115;

}
void frost$unsafe$UnsafeMessageQueue$clear(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:110
goto block1;
block1:;
// begin inline call to method frost.unsafe.UnsafeMessageQueue.hasMessage():frost.core.Bit from UnsafeMessageQueue.frost:110:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:83
// begin inline call to method frost.unsafe.UnsafeMessageQueue.pendingMessages():frost.core.Int from UnsafeMessageQueue.frost:83:31
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp118 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp119 = &param0->lock;
frost$threads$Lock* $tmp120 = *$tmp119;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp118, $tmp120);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
frost$threads$ScopedLock* $tmp121 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
*(&local0) = $tmp118;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp118));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:71
frost$core$Int* $tmp122 = &param0->count;
frost$core$Int $tmp123 = *$tmp122;
frost$threads$ScopedLock* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp125 = (frost$core$Int) {0u};
int64_t $tmp126 = $tmp123.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 > $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:111
frost$core$Object* $tmp131 = frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
goto block1;
block3:;
return;

}
void frost$unsafe$UnsafeMessageQueue$init(frost$unsafe$UnsafeMessageQueue* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:26
FROST_ASSERT(24 == sizeof(frost$threads$Lock));
frost$threads$Lock* $tmp132 = (frost$threads$Lock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init($tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$threads$Lock** $tmp133 = &param0->lock;
frost$threads$Lock* $tmp134 = *$tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$threads$Lock** $tmp135 = &param0->lock;
*$tmp135 = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:29
FROST_ASSERT(32 == sizeof(frost$threads$Notifier));
frost$threads$Notifier* $tmp136 = (frost$threads$Notifier*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$Notifier$class);
frost$threads$Lock** $tmp137 = &param0->lock;
frost$threads$Lock* $tmp138 = *$tmp137;
frost$threads$Notifier$init$frost$threads$Lock($tmp136, $tmp138);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
frost$threads$Notifier** $tmp139 = &param0->notifier;
frost$threads$Notifier* $tmp140 = *$tmp139;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp140));
frost$threads$Notifier** $tmp141 = &param0->notifier;
*$tmp141 = $tmp136;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:32
frost$core$Int $tmp142 = (frost$core$Int) {0u};
frost$core$Int* $tmp143 = &param0->count;
*$tmp143 = $tmp142;
return;

}
void frost$unsafe$UnsafeMessageQueue$cleanup(frost$unsafe$UnsafeMessageQueue* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/unsafe/UnsafeMessageQueue.frost:5
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$threads$Lock** $tmp144 = &param0->lock;
frost$threads$Lock* $tmp145 = *$tmp144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$threads$Notifier** $tmp146 = &param0->notifier;
frost$threads$Notifier* $tmp147 = *$tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$unsafe$UnsafeMessageQueue$Message** $tmp148 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp149 = *$tmp148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$unsafe$UnsafeMessageQueue$Message** $tmp150 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp151 = *$tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
return;

}

