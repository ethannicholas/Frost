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
frost$threads$MessageQueue$class_type frost$threads$MessageQueue$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$MessageQueue$cleanup$shim, frost$threads$MessageQueue$post$frost$threads$MessageQueue$T, frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64, frost$threads$MessageQueue$hasMessage$R$frost$core$Bit, frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T, frost$threads$MessageQueue$clear} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 26, 1745448959757792748, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };

void frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(frost$threads$MessageQueue* param0, frost$core$Immutable* param1) {

frost$threads$ScopedLock* local0 = NULL;
// line 52
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
// line 53
frost$threads$MessageQueue$Message** $tmp6 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp7 = *$tmp6;
frost$core$Bit $tmp8 = frost$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 54
frost$threads$MessageQueue$Message** $tmp10 = &param0->head;
frost$threads$MessageQueue$Message* $tmp11 = *$tmp10;
frost$core$Bit $tmp12 = frost$core$Bit$init$builtin_bit($tmp11 != NULL);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp14 = (frost$core$Int64) {54};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s15, $tmp14);
abort(); // unreachable
block4:;
// line 55
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
// line 56
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
// line 1
// line 59
frost$core$Int64* $tmp29 = &param0->count;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
frost$core$Bit $tmp32 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp30, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp34 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s35, $tmp34);
abort(); // unreachable
block6:;
// line 60
FROST_ASSERT(32 == sizeof(frost$threads$MessageQueue$Message));
frost$threads$MessageQueue$Message* $tmp36 = (frost$threads$MessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$MessageQueue$Message$class);
frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T($tmp36, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
frost$threads$MessageQueue$Message** $tmp37 = &param0->head;
frost$threads$MessageQueue$Message* $tmp38 = *$tmp37;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp38));
frost$threads$MessageQueue$Message** $tmp39 = &param0->head;
*$tmp39 = $tmp36;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp36));
// line 61
frost$threads$MessageQueue$Message** $tmp40 = &param0->head;
frost$threads$MessageQueue$Message* $tmp41 = *$tmp40;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp41));
frost$threads$MessageQueue$Message** $tmp42 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp43 = *$tmp42;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp43));
frost$threads$MessageQueue$Message** $tmp44 = &param0->tail;
*$tmp44 = $tmp41;
goto block2;
block2:;
// line 63
frost$core$Int64* $tmp45 = &param0->count;
frost$core$Int64 $tmp46 = *$tmp45;
frost$core$Int64 $tmp47 = (frost$core$Int64) {1};
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 + $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
frost$core$Int64* $tmp52 = &param0->count;
*$tmp52 = $tmp51;
// line 64
frost$threads$Notifier** $tmp53 = &param0->notifier;
frost$threads$Notifier* $tmp54 = *$tmp53;
frost$threads$Notifier$notify($tmp54);
frost$threads$ScopedLock* $tmp55 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp55));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int64 frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// line 76
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
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
// line 77
frost$core$Int64* $tmp60 = &param0->count;
frost$core$Int64 $tmp61 = *$tmp60;
frost$threads$ScopedLock* $tmp62 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp62));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp61;

}
frost$core$Bit frost$threads$MessageQueue$hasMessage$R$frost$core$Bit(frost$threads$MessageQueue* param0) {

// line 89
frost$core$Int64 $tmp63 = frost$threads$MessageQueue$pendingMessages$R$frost$core$Int64(param0);
frost$core$Int64 $tmp64 = (frost$core$Int64) {0};
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 > $tmp66;
frost$core$Bit $tmp68 = (frost$core$Bit) {$tmp67};
return $tmp68;

}
frost$core$Immutable* frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Immutable* local1 = NULL;
// line 99
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
// line 100
goto block1;
block1:;
frost$threads$MessageQueue$Message** $tmp73 = &param0->head;
frost$threads$MessageQueue$Message* $tmp74 = *$tmp73;
frost$core$Bit $tmp75 = frost$core$Bit$init$builtin_bit($tmp74 == NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block2; else goto block3;
block2:;
// line 101
frost$threads$Notifier** $tmp77 = &param0->notifier;
frost$threads$Notifier* $tmp78 = *$tmp77;
frost$threads$Notifier$wait($tmp78);
goto block1;
block3:;
// line 103
frost$threads$MessageQueue$Message** $tmp79 = &param0->head;
frost$threads$MessageQueue$Message* $tmp80 = *$tmp79;
frost$core$Immutable** $tmp81 = &$tmp80->payload;
frost$core$Immutable* $tmp82 = *$tmp81;
*(&local1) = ((frost$core$Immutable*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
frost$core$Immutable* $tmp83 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
*(&local1) = $tmp82;
// line 104
frost$threads$MessageQueue$Message** $tmp84 = &param0->head;
frost$threads$MessageQueue$Message* $tmp85 = *$tmp84;
frost$threads$MessageQueue$Message** $tmp86 = &$tmp85->next;
frost$threads$MessageQueue$Message* $tmp87 = *$tmp86;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$threads$MessageQueue$Message** $tmp88 = &param0->head;
frost$threads$MessageQueue$Message* $tmp89 = *$tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$threads$MessageQueue$Message** $tmp90 = &param0->head;
*$tmp90 = $tmp87;
// line 105
frost$threads$MessageQueue$Message** $tmp91 = &param0->head;
frost$threads$MessageQueue$Message* $tmp92 = *$tmp91;
frost$core$Bit $tmp93 = frost$core$Bit$init$builtin_bit($tmp92 == NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block4; else goto block5;
block4:;
// line 106
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$threads$MessageQueue$Message*) NULL)));
frost$threads$MessageQueue$Message** $tmp95 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp96 = *$tmp95;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp96));
frost$threads$MessageQueue$Message** $tmp97 = &param0->tail;
*$tmp97 = ((frost$threads$MessageQueue$Message*) NULL);
goto block5;
block5:;
// line 108
frost$core$Int64* $tmp98 = &param0->count;
frost$core$Int64 $tmp99 = *$tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {1};
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101 - $tmp102;
frost$core$Int64 $tmp104 = (frost$core$Int64) {$tmp103};
frost$core$Int64* $tmp105 = &param0->count;
*$tmp105 = $tmp104;
// line 109
frost$core$Immutable* $tmp106 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp106));
frost$core$Immutable* $tmp107 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
*(&local1) = ((frost$core$Immutable*) NULL);
frost$threads$ScopedLock* $tmp108 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp108));
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp106;

}
void frost$threads$MessageQueue$clear(frost$threads$MessageQueue* param0) {

// line 116
goto block1;
block1:;
frost$core$Bit $tmp109 = frost$threads$MessageQueue$hasMessage$R$frost$core$Bit(param0);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block2; else goto block3;
block2:;
// line 117
frost$core$Immutable* $tmp111 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(param0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp111));
goto block1;
block3:;
return;

}
void frost$threads$MessageQueue$init(frost$threads$MessageQueue* param0) {

// line 32
FROST_ASSERT(24 == sizeof(frost$threads$Lock));
frost$threads$Lock* $tmp112 = (frost$threads$Lock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init($tmp112);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
frost$threads$Lock** $tmp113 = &param0->lock;
frost$threads$Lock* $tmp114 = *$tmp113;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
frost$threads$Lock** $tmp115 = &param0->lock;
*$tmp115 = $tmp112;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp112));
// line 35
FROST_ASSERT(32 == sizeof(frost$threads$Notifier));
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
// line 38
frost$core$Int64 $tmp122 = (frost$core$Int64) {0};
frost$core$Int64* $tmp123 = &param0->count;
*$tmp123 = $tmp122;
return;

}
void frost$threads$MessageQueue$cleanup(frost$threads$MessageQueue* param0) {

// line 11
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$threads$Lock** $tmp124 = &param0->lock;
frost$threads$Lock* $tmp125 = *$tmp124;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp125));
frost$threads$Notifier** $tmp126 = &param0->notifier;
frost$threads$Notifier* $tmp127 = *$tmp126;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp127));
frost$threads$MessageQueue$Message** $tmp128 = &param0->head;
frost$threads$MessageQueue$Message* $tmp129 = *$tmp128;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
frost$threads$MessageQueue$Message** $tmp130 = &param0->tail;
frost$threads$MessageQueue$Message* $tmp131 = *$tmp130;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp131));
return;

}

