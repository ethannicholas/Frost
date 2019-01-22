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
#include "frost/core/Int64.h"
#include "frost/threads/Notifier.h"

__attribute__((weak)) void frost$unsafe$UnsafeMessageQueue$cleanup$shim(frost$unsafe$UnsafeMessageQueue* p0) {
    frost$unsafe$UnsafeMessageQueue$cleanup(p0);

}

static frost$core$String $s1;
frost$unsafe$UnsafeMessageQueue$class_type frost$unsafe$UnsafeMessageQueue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$unsafe$UnsafeMessageQueue$cleanup$shim, frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T, frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int64, frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit, frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T, frost$unsafe$UnsafeMessageQueue$clear} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 31, 8925915866225365425, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };

void frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0, frost$core$Object* param1) {

frost$threads$ScopedLock* local0 = NULL;
// line 46
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
// line 47
frost$unsafe$UnsafeMessageQueue$Message** $tmp6 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 48
frost$unsafe$UnsafeMessageQueue$Message** $tmp10 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp11 = *$tmp10;
frost$core$Bit $tmp12 = frost$core$Bit$init$builtin_bit($tmp11 != NULL);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {48};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s15, $tmp14);
abort(); // unreachable
block4:;
// line 49
frost$unsafe$UnsafeMessageQueue$Message** $tmp16 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp17 = *$tmp16;
frost$unsafe$UnsafeMessageQueue$Message* $tmp18 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T($tmp18, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
frost$unsafe$UnsafeMessageQueue$Message** $tmp19 = &$tmp17->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp20 = *$tmp19;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp20));
frost$unsafe$UnsafeMessageQueue$Message** $tmp21 = &$tmp17->next;
*$tmp21 = $tmp18;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// line 50
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
// line 1
// line 53
frost$core$Int64* $tmp29 = &param0->count;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp30, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s35, $tmp34);
abort(); // unreachable
block6:;
// line 54
frost$unsafe$UnsafeMessageQueue$Message* $tmp36 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T($tmp36, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$unsafe$UnsafeMessageQueue$Message** $tmp37 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$unsafe$UnsafeMessageQueue$Message** $tmp39 = &param0->head;
*$tmp39 = $tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// line 55
frost$unsafe$UnsafeMessageQueue$Message** $tmp40 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$unsafe$UnsafeMessageQueue$Message** $tmp42 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$unsafe$UnsafeMessageQueue$Message** $tmp44 = &param0->tail;
*$tmp44 = $tmp41;
goto block2;
block2:;
// line 57
frost$core$Int64* $tmp45 = &param0->count;
frost$core$Int64 $tmp46 = *$tmp45;
frost$core$Int64 $tmp47 = (frost$core$Int64) {1};
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 + $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
frost$core$Int64* $tmp52 = &param0->count;
*$tmp52 = $tmp51;
// line 58
frost$threads$Notifier** $tmp53 = &param0->notifier;
frost$threads$Notifier* $tmp54 = *$tmp53;
frost$threads$Notifier$notify($tmp54);
frost$threads$ScopedLock* $tmp55 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int64 frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int64(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// line 70
frost$threads$ScopedLock* $tmp56 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp57 = &param0->lock;
frost$threads$Lock* $tmp58 = *$tmp57;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp56, $tmp58);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
frost$threads$ScopedLock* $tmp59 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp59));
*(&local0) = $tmp56;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp56));
// line 71
frost$core$Int64* $tmp60 = &param0->count;
frost$core$Int64 $tmp61 = *$tmp60;
frost$threads$ScopedLock* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp61;

}
frost$core$Bit frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(frost$unsafe$UnsafeMessageQueue* param0) {

// line 83
frost$core$Int64 $tmp63 = frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int64(param0);
frost$core$Int64 $tmp64 = (frost$core$Int64) {0};
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 > $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
return $tmp68;

}
frost$core$Object* frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 93
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
// line 94
goto block1;
block1:;
frost$unsafe$UnsafeMessageQueue$Message** $tmp73 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp74 = *$tmp73;
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit($tmp74 == NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block2; else goto block3;
block2:;
// line 95
frost$threads$Notifier** $tmp77 = &param0->notifier;
frost$threads$Notifier* $tmp78 = *$tmp77;
frost$threads$Notifier$wait($tmp78);
goto block1;
block3:;
// line 97
frost$unsafe$UnsafeMessageQueue$Message** $tmp79 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp80 = *$tmp79;
frost$core$Object** $tmp81 = &$tmp80->payload;
frost$core$Object* $tmp82 = *$tmp81;
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp82);
frost$core$Object* $tmp83 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
*(&local1) = $tmp82;
// line 98
frost$unsafe$UnsafeMessageQueue$Message** $tmp84 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp85 = *$tmp84;
frost$unsafe$UnsafeMessageQueue$Message** $tmp86 = &$tmp85->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp87 = *$tmp86;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$unsafe$UnsafeMessageQueue$Message** $tmp88 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp89 = *$tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$unsafe$UnsafeMessageQueue$Message** $tmp90 = &param0->head;
*$tmp90 = $tmp87;
// line 99
frost$unsafe$UnsafeMessageQueue$Message** $tmp91 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp92 = *$tmp91;
frost$core$Bit $tmp93 = frost$core$Bit$init$builtin_bit($tmp92 == NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block4; else goto block5;
block4:;
// line 100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$unsafe$UnsafeMessageQueue$Message*) NULL)));
frost$unsafe$UnsafeMessageQueue$Message** $tmp95 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp96 = *$tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$unsafe$UnsafeMessageQueue$Message** $tmp97 = &param0->tail;
*$tmp97 = ((frost$unsafe$UnsafeMessageQueue$Message*) NULL);
goto block5;
block5:;
// line 102
frost$core$Int64* $tmp98 = &param0->count;
frost$core$Int64 $tmp99 = *$tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {1};
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101 - $tmp102;
frost$core$Int64 $tmp104 = (frost$core$Int64) {$tmp103};
frost$core$Int64* $tmp105 = &param0->count;
*$tmp105 = $tmp104;
// line 103
frost$core$Object* $tmp106 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp106);
frost$core$Object* $tmp107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp107);
*(&local1) = ((frost$core$Object*) NULL);
frost$threads$ScopedLock* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp106;

}
void frost$unsafe$UnsafeMessageQueue$clear(frost$unsafe$UnsafeMessageQueue* param0) {

// line 110
goto block1;
block1:;
frost$core$Bit $tmp109 = frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(param0);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block2; else goto block3;
block2:;
// line 111
frost$core$Object* $tmp111 = frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp111);
goto block1;
block3:;
return;

}
void frost$unsafe$UnsafeMessageQueue$init(frost$unsafe$UnsafeMessageQueue* param0) {

// line 26
frost$threads$Lock* $tmp112 = (frost$threads$Lock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init($tmp112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$threads$Lock** $tmp113 = &param0->lock;
frost$threads$Lock* $tmp114 = *$tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$threads$Lock** $tmp115 = &param0->lock;
*$tmp115 = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// line 29
frost$threads$Notifier* $tmp116 = (frost$threads$Notifier*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$Notifier$class);
frost$threads$Lock** $tmp117 = &param0->lock;
frost$threads$Lock* $tmp118 = *$tmp117;
frost$threads$Notifier$init$frost$threads$Lock($tmp116, $tmp118);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$threads$Notifier** $tmp119 = &param0->notifier;
frost$threads$Notifier* $tmp120 = *$tmp119;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$threads$Notifier** $tmp121 = &param0->notifier;
*$tmp121 = $tmp116;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
// line 32
frost$core$Int64 $tmp122 = (frost$core$Int64) {0};
frost$core$Int64* $tmp123 = &param0->count;
*$tmp123 = $tmp122;
return;

}
void frost$unsafe$UnsafeMessageQueue$cleanup(frost$unsafe$UnsafeMessageQueue* param0) {

// line 5
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$threads$Lock** $tmp124 = &param0->lock;
frost$threads$Lock* $tmp125 = *$tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$threads$Notifier** $tmp126 = &param0->notifier;
frost$threads$Notifier* $tmp127 = *$tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$unsafe$UnsafeMessageQueue$Message** $tmp128 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp129 = *$tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$unsafe$UnsafeMessageQueue$Message** $tmp130 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp131 = *$tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
return;

}

