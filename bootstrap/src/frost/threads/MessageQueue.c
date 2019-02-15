#include "frost/threads/MessageQueue.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/threads/ScopedLock.h"
#include "frost/threads/Lock.h"
#include "frost/core/Frost.h"
#include "frost/threads/MessageQueue/Message.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/threads/Notifier.h"

__attribute__((weak)) void frost$threads$MessageQueue$cleanup$shim(frost$threads$MessageQueue* p0) {
    frost$threads$MessageQueue$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$MessageQueue$class_type frost$threads$MessageQueue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$MessageQueue$cleanup$shim, frost$threads$MessageQueue$post$frost$threads$MessageQueue$T, frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64, frost$threads$MessageQueue$hasMessage$R$frost$core$Bit, frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T, frost$threads$MessageQueue$clear} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 26, -1322360647885131030, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };

void frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(frost$threads$MessageQueue* param0, frost$core$Immutable* param1) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:52
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:53
frost$threads$MessageQueue$Message** $tmp6 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:54
frost$threads$MessageQueue$Message** $tmp10 = &param0->head;
frost$threads$MessageQueue$Message* $tmp11 = *$tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11 != NULL};
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s15, $tmp14);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:55
frost$threads$MessageQueue$Message** $tmp16 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp17 = *$tmp16;
FROST_ASSERT(32 == sizeof(frost$threads$MessageQueue$Message));
frost$threads$MessageQueue$Message* $tmp18 = (frost$threads$MessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$MessageQueue$Message$class);
frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T($tmp18, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$threads$MessageQueue$Message** $tmp19 = &$tmp17->next;
frost$threads$MessageQueue$Message* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$threads$MessageQueue$Message** $tmp21 = &$tmp17->next;
*$tmp21 = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:56
frost$threads$MessageQueue$Message** $tmp22 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp23 = *$tmp22;
frost$threads$MessageQueue$Message** $tmp24 = &$tmp23->next;
frost$threads$MessageQueue$Message* $tmp25 = *$tmp24;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$threads$MessageQueue$Message** $tmp26 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp27 = *$tmp26;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp27));
frost$threads$MessageQueue$Message** $tmp28 = &param0->tail;
*$tmp28 = $tmp25;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:59
frost$core$Int64* $tmp29 = &param0->count;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Int64 $tmp31 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from MessageQueue.frost:59:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp32 = $tmp30.value;
int64_t $tmp33 = $tmp31.value;
bool $tmp34 = $tmp32 == $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp37 = (frost$core$Int64) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s38, $tmp37);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:60
FROST_ASSERT(32 == sizeof(frost$threads$MessageQueue$Message));
frost$threads$MessageQueue$Message* $tmp39 = (frost$threads$MessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$MessageQueue$Message$class);
frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T($tmp39, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
frost$threads$MessageQueue$Message** $tmp40 = &param0->head;
frost$threads$MessageQueue$Message* $tmp41 = *$tmp40;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$threads$MessageQueue$Message** $tmp42 = &param0->head;
*$tmp42 = $tmp39;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp39));
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:61
frost$threads$MessageQueue$Message** $tmp43 = &param0->head;
frost$threads$MessageQueue$Message* $tmp44 = *$tmp43;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
frost$threads$MessageQueue$Message** $tmp45 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp46 = *$tmp45;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$threads$MessageQueue$Message** $tmp47 = &param0->tail;
*$tmp47 = $tmp44;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:63
frost$core$Int64* $tmp48 = &param0->count;
frost$core$Int64 $tmp49 = *$tmp48;
frost$core$Int64 $tmp50 = (frost$core$Int64) {1u};
int64_t $tmp51 = $tmp49.value;
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51 + $tmp52;
frost$core$Int64 $tmp54 = (frost$core$Int64) {$tmp53};
frost$core$Int64* $tmp55 = &param0->count;
*$tmp55 = $tmp54;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:64
frost$threads$Notifier** $tmp56 = &param0->notifier;
frost$threads$Notifier* $tmp57 = *$tmp56;
frost$threads$Notifier$notify($tmp57);
frost$threads$ScopedLock* $tmp58 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp58));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int64 frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int64* $tmp63 = &param0->count;
frost$core$Int64 $tmp64 = *$tmp63;
frost$threads$ScopedLock* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp64;

}
frost$core$Bit frost$threads$MessageQueue$hasMessage$R$frost$core$Bit(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int64* $tmp70 = &param0->count;
frost$core$Int64 $tmp71 = *$tmp70;
frost$threads$ScopedLock* $tmp72 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp73 = (frost$core$Int64) {0u};
int64_t $tmp74 = $tmp71.value;
int64_t $tmp75 = $tmp73.value;
bool $tmp76 = $tmp74 > $tmp75;
frost$core$Bit $tmp77 = (frost$core$Bit) {$tmp76};
return $tmp77;

}
frost$core$Immutable* frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Immutable* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:99
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:100
goto block1;
block1:;
frost$threads$MessageQueue$Message** $tmp82 = &param0->head;
frost$threads$MessageQueue$Message* $tmp83 = *$tmp82;
frost$core$Bit $tmp84 = (frost$core$Bit) {$tmp83 == NULL};
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:101
frost$threads$Notifier** $tmp86 = &param0->notifier;
frost$threads$Notifier* $tmp87 = *$tmp86;
frost$threads$Notifier$wait($tmp87);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:103
frost$threads$MessageQueue$Message** $tmp88 = &param0->head;
frost$threads$MessageQueue$Message* $tmp89 = *$tmp88;
frost$core$Immutable** $tmp90 = &$tmp89->payload;
frost$core$Immutable* $tmp91 = *$tmp90;
*(&local1) = ((frost$core$Immutable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
frost$core$Immutable* $tmp92 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp92));
*(&local1) = $tmp91;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:104
frost$threads$MessageQueue$Message** $tmp93 = &param0->head;
frost$threads$MessageQueue$Message* $tmp94 = *$tmp93;
frost$threads$MessageQueue$Message** $tmp95 = &$tmp94->next;
frost$threads$MessageQueue$Message* $tmp96 = *$tmp95;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$threads$MessageQueue$Message** $tmp97 = &param0->head;
frost$threads$MessageQueue$Message* $tmp98 = *$tmp97;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp98));
frost$threads$MessageQueue$Message** $tmp99 = &param0->head;
*$tmp99 = $tmp96;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:105
frost$threads$MessageQueue$Message** $tmp100 = &param0->head;
frost$threads$MessageQueue$Message* $tmp101 = *$tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101 == NULL};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:106
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$threads$MessageQueue$Message*) NULL)));
frost$threads$MessageQueue$Message** $tmp104 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp105 = *$tmp104;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
frost$threads$MessageQueue$Message** $tmp106 = &param0->tail;
*$tmp106 = ((frost$threads$MessageQueue$Message*) NULL);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:108
frost$core$Int64* $tmp107 = &param0->count;
frost$core$Int64 $tmp108 = *$tmp107;
frost$core$Int64 $tmp109 = (frost$core$Int64) {1u};
int64_t $tmp110 = $tmp108.value;
int64_t $tmp111 = $tmp109.value;
int64_t $tmp112 = $tmp110 - $tmp111;
frost$core$Int64 $tmp113 = (frost$core$Int64) {$tmp112};
frost$core$Int64* $tmp114 = &param0->count;
*$tmp114 = $tmp113;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:109
frost$core$Immutable* $tmp115 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$core$Immutable* $tmp116 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
*(&local1) = ((frost$core$Immutable*) NULL);
frost$threads$ScopedLock* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp117));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp115;

}
void frost$threads$MessageQueue$clear(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block1;
block1:;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int64 from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
frost$core$Int64* $tmp122 = &param0->count;
frost$core$Int64 $tmp123 = *$tmp122;
frost$threads$ScopedLock* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp124));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int64 $tmp125 = (frost$core$Int64) {0u};
int64_t $tmp126 = $tmp123.value;
int64_t $tmp127 = $tmp125.value;
bool $tmp128 = $tmp126 > $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
frost$core$Immutable* $tmp131 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
goto block1;
block3:;
return;

}
void frost$threads$MessageQueue$init(frost$threads$MessageQueue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:32
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:35
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:38
frost$core$Int64 $tmp142 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp143 = &param0->count;
*$tmp143 = $tmp142;
return;

}
void frost$threads$MessageQueue$cleanup(frost$threads$MessageQueue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:11
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$threads$Lock** $tmp144 = &param0->lock;
frost$threads$Lock* $tmp145 = *$tmp144;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
frost$threads$Notifier** $tmp146 = &param0->notifier;
frost$threads$Notifier* $tmp147 = *$tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
frost$threads$MessageQueue$Message** $tmp148 = &param0->head;
frost$threads$MessageQueue$Message* $tmp149 = *$tmp148;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp149));
frost$threads$MessageQueue$Message** $tmp150 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp151 = *$tmp150;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp151));
return;

}

