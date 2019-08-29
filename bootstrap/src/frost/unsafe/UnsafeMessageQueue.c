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
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e", 187, -2780297555075747941, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e", 187, -2780297555075747941, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };

void frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0, frost$core$Object* param1) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:46
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:47
frost$unsafe$UnsafeMessageQueue$Message** $tmp6 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7 != NULL};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:48
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:49
frost$unsafe$UnsafeMessageQueue$Message** $tmp16 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp17 = *$tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17 != NULL};
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block7;
block7:;
frost$core$Int $tmp20 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block6:;
FROST_ASSERT(32 == sizeof(frost$unsafe$UnsafeMessageQueue$Message));
frost$unsafe$UnsafeMessageQueue$Message* $tmp23 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T($tmp23, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$unsafe$UnsafeMessageQueue$Message** $tmp24 = &$tmp17->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$unsafe$UnsafeMessageQueue$Message** $tmp26 = &$tmp17->next;
*$tmp26 = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:50
frost$unsafe$UnsafeMessageQueue$Message** $tmp27 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28 != NULL};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block8; else goto block9;
block9:;
frost$core$Int $tmp31 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, $tmp31, &$s33);
abort(); // unreachable
block8:;
frost$unsafe$UnsafeMessageQueue$Message** $tmp34 = &$tmp28->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp35 = *$tmp34;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp35));
frost$unsafe$UnsafeMessageQueue$Message** $tmp36 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp37 = *$tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp37));
frost$unsafe$UnsafeMessageQueue$Message** $tmp38 = &param0->tail;
*$tmp38 = $tmp35;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:53
frost$core$Int* $tmp39 = &param0->count;
frost$core$Int $tmp40 = *$tmp39;
frost$core$Int $tmp41 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from UnsafeMessageQueue.frost:53:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
int64_t $tmp42 = $tmp40.value;
int64_t $tmp43 = $tmp41.value;
bool $tmp44 = $tmp42 == $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block11; else goto block12;
block12:;
frost$core$Int $tmp47 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s48, $tmp47);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:54
FROST_ASSERT(32 == sizeof(frost$unsafe$UnsafeMessageQueue$Message));
frost$unsafe$UnsafeMessageQueue$Message* $tmp49 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T($tmp49, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
frost$unsafe$UnsafeMessageQueue$Message** $tmp50 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp51 = *$tmp50;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$unsafe$UnsafeMessageQueue$Message** $tmp52 = &param0->head;
*$tmp52 = $tmp49;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:55
frost$unsafe$UnsafeMessageQueue$Message** $tmp53 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp54 = *$tmp53;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp54));
frost$unsafe$UnsafeMessageQueue$Message** $tmp55 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp56 = *$tmp55;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$unsafe$UnsafeMessageQueue$Message** $tmp57 = &param0->tail;
*$tmp57 = $tmp54;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:57
frost$core$Int* $tmp58 = &param0->count;
frost$core$Int $tmp59 = *$tmp58;
frost$core$Int $tmp60 = (frost$core$Int) {1u};
int64_t $tmp61 = $tmp59.value;
int64_t $tmp62 = $tmp60.value;
int64_t $tmp63 = $tmp61 + $tmp62;
frost$core$Int $tmp64 = (frost$core$Int) {$tmp63};
frost$core$Int* $tmp65 = &param0->count;
*$tmp65 = $tmp64;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:58
frost$threads$Notifier** $tmp66 = &param0->notifier;
frost$threads$Notifier* $tmp67 = *$tmp66;
frost$threads$Notifier$notify($tmp67);
frost$threads$ScopedLock* $tmp68 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp68));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp69 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp70 = &param0->lock;
frost$threads$Lock* $tmp71 = *$tmp70;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp69, $tmp71);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
frost$threads$ScopedLock* $tmp72 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
*(&local0) = $tmp69;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp69));
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
frost$core$Int* $tmp73 = &param0->count;
frost$core$Int $tmp74 = *$tmp73;
frost$threads$ScopedLock* $tmp75 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp75));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp74;

}
frost$core$Bit frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:83
// begin inline call to method frost.unsafe.UnsafeMessageQueue.pendingMessages():frost.core.Int from UnsafeMessageQueue.frost:83:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp76 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp77 = &param0->lock;
frost$threads$Lock* $tmp78 = *$tmp77;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp76, $tmp78);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
frost$threads$ScopedLock* $tmp79 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
*(&local0) = $tmp76;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp76));
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
frost$core$Int* $tmp80 = &param0->count;
frost$core$Int $tmp81 = *$tmp80;
frost$threads$ScopedLock* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp83 = (frost$core$Int) {0u};
int64_t $tmp84 = $tmp81.value;
int64_t $tmp85 = $tmp83.value;
bool $tmp86 = $tmp84 > $tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
return $tmp87;

}
frost$core$Object* frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Object* local1 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:93
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp88 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp89 = &param0->lock;
frost$threads$Lock* $tmp90 = *$tmp89;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp88, $tmp90);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
frost$threads$ScopedLock* $tmp91 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp91));
*(&local0) = $tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:94
goto block1;
block1:;
frost$unsafe$UnsafeMessageQueue$Message** $tmp92 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp93 = *$tmp92;
frost$core$Bit $tmp94 = (frost$core$Bit) {$tmp93 == NULL};
bool $tmp95 = $tmp94.value;
if ($tmp95) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:95
frost$threads$Notifier** $tmp96 = &param0->notifier;
frost$threads$Notifier* $tmp97 = *$tmp96;
frost$threads$Notifier$wait($tmp97);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:97
frost$unsafe$UnsafeMessageQueue$Message** $tmp98 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp99 = *$tmp98;
frost$core$Object** $tmp100 = &$tmp99->payload;
frost$core$Object* $tmp101 = *$tmp100;
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp101);
frost$core$Object* $tmp102 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp102);
*(&local1) = $tmp101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:98
frost$unsafe$UnsafeMessageQueue$Message** $tmp103 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp104 = *$tmp103;
frost$unsafe$UnsafeMessageQueue$Message** $tmp105 = &$tmp104->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp106 = *$tmp105;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$unsafe$UnsafeMessageQueue$Message** $tmp107 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp108 = *$tmp107;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
frost$unsafe$UnsafeMessageQueue$Message** $tmp109 = &param0->head;
*$tmp109 = $tmp106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:99
frost$unsafe$UnsafeMessageQueue$Message** $tmp110 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp111 = *$tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111 == NULL};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$unsafe$UnsafeMessageQueue$Message*) NULL)));
frost$unsafe$UnsafeMessageQueue$Message** $tmp114 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp115 = *$tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
frost$unsafe$UnsafeMessageQueue$Message** $tmp116 = &param0->tail;
*$tmp116 = ((frost$unsafe$UnsafeMessageQueue$Message*) NULL);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:102
frost$core$Int* $tmp117 = &param0->count;
frost$core$Int $tmp118 = *$tmp117;
frost$core$Int $tmp119 = (frost$core$Int) {1u};
int64_t $tmp120 = $tmp118.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 - $tmp121;
frost$core$Int $tmp123 = (frost$core$Int) {$tmp122};
frost$core$Int* $tmp124 = &param0->count;
*$tmp124 = $tmp123;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:103
frost$core$Object* $tmp125 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp125);
frost$core$Object* $tmp126 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp126);
*(&local1) = ((frost$core$Object*) NULL);
frost$threads$ScopedLock* $tmp127 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp125;

}
void frost$unsafe$UnsafeMessageQueue$clear(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:110
goto block1;
block1:;
// begin inline call to method frost.unsafe.UnsafeMessageQueue.hasMessage():frost.core.Bit from UnsafeMessageQueue.frost:110:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:83
// begin inline call to method frost.unsafe.UnsafeMessageQueue.pendingMessages():frost.core.Int from UnsafeMessageQueue.frost:83:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
frost$threads$ScopedLock* $tmp128 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp129 = &param0->lock;
frost$threads$Lock* $tmp130 = *$tmp129;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp128, $tmp130);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
frost$threads$ScopedLock* $tmp131 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
*(&local0) = $tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
frost$core$Int* $tmp132 = &param0->count;
frost$core$Int $tmp133 = *$tmp132;
frost$threads$ScopedLock* $tmp134 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Int $tmp135 = (frost$core$Int) {0u};
int64_t $tmp136 = $tmp133.value;
int64_t $tmp137 = $tmp135.value;
bool $tmp138 = $tmp136 > $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:111
frost$core$Object* $tmp141 = frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp141);
goto block1;
block3:;
return;

}
void frost$unsafe$UnsafeMessageQueue$init(frost$unsafe$UnsafeMessageQueue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:26
FROST_ASSERT(24 == sizeof(frost$threads$Lock));
frost$threads$Lock* $tmp142 = (frost$threads$Lock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init($tmp142);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
frost$threads$Lock** $tmp143 = &param0->lock;
frost$threads$Lock* $tmp144 = *$tmp143;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
frost$threads$Lock** $tmp145 = &param0->lock;
*$tmp145 = $tmp142;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp142));
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:29
FROST_ASSERT(32 == sizeof(frost$threads$Notifier));
frost$threads$Notifier* $tmp146 = (frost$threads$Notifier*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$Notifier$class);
frost$threads$Lock** $tmp147 = &param0->lock;
frost$threads$Lock* $tmp148 = *$tmp147;
frost$threads$Notifier$init$frost$threads$Lock($tmp146, $tmp148);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
frost$threads$Notifier** $tmp149 = &param0->notifier;
frost$threads$Notifier* $tmp150 = *$tmp149;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp150));
frost$threads$Notifier** $tmp151 = &param0->notifier;
*$tmp151 = $tmp146;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:32
frost$core$Int $tmp152 = (frost$core$Int) {0u};
frost$core$Int* $tmp153 = &param0->count;
*$tmp153 = $tmp152;
return;

}
void frost$unsafe$UnsafeMessageQueue$cleanup(frost$unsafe$UnsafeMessageQueue* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:5
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$threads$Lock** $tmp154 = &param0->lock;
frost$threads$Lock* $tmp155 = *$tmp154;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$threads$Notifier** $tmp156 = &param0->notifier;
frost$threads$Notifier* $tmp157 = *$tmp156;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
frost$unsafe$UnsafeMessageQueue$Message** $tmp158 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp159 = *$tmp158;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
frost$unsafe$UnsafeMessageQueue$Message** $tmp160 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp161 = *$tmp160;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp161));
return;

}

