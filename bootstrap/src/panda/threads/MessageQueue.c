#include "panda/threads/MessageQueue.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/threads/ScopedLock.h"
#include "panda/threads/Lock.h"
#include "panda/core/Panda.h"
#include "panda/threads/MessageQueue/Message.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/threads/Notifier.h"

__attribute__((weak)) void panda$threads$MessageQueue$cleanup$shim(panda$threads$MessageQueue* p0) {
    panda$threads$MessageQueue$cleanup(p0);

}

static panda$core$String $s1;
panda$threads$MessageQueue$class_type panda$threads$MessageQueue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$threads$MessageQueue$cleanup$shim, panda$threads$MessageQueue$post$panda$threads$MessageQueue$T, panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64, panda$threads$MessageQueue$hasMessage$R$panda$core$Bit, panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T, panda$threads$MessageQueue$clear} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 26, -1815112700899824502, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 18, 1403033073527415641, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 18, 1403033073527415641, NULL };

void panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(panda$threads$MessageQueue* param0, panda$core$Immutable* param1) {

panda$threads$ScopedLock* local0 = NULL;
// line 52
panda$threads$ScopedLock* $tmp2 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
panda$threads$Lock** $tmp3 = &param0->lock;
panda$threads$Lock* $tmp4 = *$tmp3;
panda$threads$ScopedLock$init$panda$threads$Lock($tmp2, $tmp4);
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
panda$threads$ScopedLock* $tmp5 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
*(&local0) = $tmp2;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.threads.ScopedLock)
// line 53
panda$threads$MessageQueue$Message** $tmp6 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 54
panda$threads$MessageQueue$Message** $tmp10 = &param0->head;
panda$threads$MessageQueue$Message* $tmp11 = *$tmp10;
panda$core$Bit $tmp12 = panda$core$Bit$init$builtin_bit($tmp11 != NULL);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {54};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s15, $tmp14);
abort(); // unreachable
block4:;
// line 55
panda$threads$MessageQueue$Message** $tmp16 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp17 = *$tmp16;
panda$threads$MessageQueue$Message* $tmp18 = (panda$threads$MessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp18, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$threads$MessageQueue$Message** $tmp19 = &$tmp17->next;
panda$threads$MessageQueue$Message* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$threads$MessageQueue$Message** $tmp21 = &$tmp17->next;
*$tmp21 = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($40:panda.threads.MessageQueue.Message<panda.threads.MessageQueue.T>)
// line 56
panda$threads$MessageQueue$Message** $tmp22 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp23 = *$tmp22;
panda$threads$MessageQueue$Message** $tmp24 = &$tmp23->next;
panda$threads$MessageQueue$Message* $tmp25 = *$tmp24;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$threads$MessageQueue$Message** $tmp26 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$threads$MessageQueue$Message** $tmp28 = &param0->tail;
*$tmp28 = $tmp25;
goto block2;
block3:;
// line 1
// line 59
panda$core$Int64* $tmp29 = &param0->count;
panda$core$Int64 $tmp30 = *$tmp29;
panda$core$Int64 $tmp31 = (panda$core$Int64) {0};
panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp30, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp34 = (panda$core$Int64) {59};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s35, $tmp34);
abort(); // unreachable
block6:;
// line 60
panda$threads$MessageQueue$Message* $tmp36 = (panda$threads$MessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp36, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$threads$MessageQueue$Message** $tmp37 = &param0->head;
panda$threads$MessageQueue$Message* $tmp38 = *$tmp37;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
panda$threads$MessageQueue$Message** $tmp39 = &param0->head;
*$tmp39 = $tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($89:panda.threads.MessageQueue.Message<panda.threads.MessageQueue.T>)
// line 61
panda$threads$MessageQueue$Message** $tmp40 = &param0->head;
panda$threads$MessageQueue$Message* $tmp41 = *$tmp40;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$threads$MessageQueue$Message** $tmp42 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$threads$MessageQueue$Message** $tmp44 = &param0->tail;
*$tmp44 = $tmp41;
goto block2;
block2:;
// line 63
panda$core$Int64* $tmp45 = &param0->count;
panda$core$Int64 $tmp46 = *$tmp45;
panda$core$Int64 $tmp47 = (panda$core$Int64) {1};
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 + $tmp49;
panda$core$Int64 $tmp51 = (panda$core$Int64) {$tmp50};
panda$core$Int64* $tmp52 = &param0->count;
*$tmp52 = $tmp51;
// line 64
panda$threads$Notifier** $tmp53 = &param0->notifier;
panda$threads$Notifier* $tmp54 = *$tmp53;
panda$threads$Notifier$notify($tmp54);
panda$threads$ScopedLock* $tmp55 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
return;

}
panda$core$Int64 panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(panda$threads$MessageQueue* param0) {

panda$threads$ScopedLock* local0 = NULL;
// line 76
panda$threads$ScopedLock* $tmp56 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
panda$threads$Lock** $tmp57 = &param0->lock;
panda$threads$Lock* $tmp58 = *$tmp57;
panda$threads$ScopedLock$init$panda$threads$Lock($tmp56, $tmp58);
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
panda$threads$ScopedLock* $tmp59 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
*(&local0) = $tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($1:panda.threads.ScopedLock)
// line 77
panda$core$Int64* $tmp60 = &param0->count;
panda$core$Int64 $tmp61 = *$tmp60;
panda$threads$ScopedLock* $tmp62 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
return $tmp61;

}
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* param0) {

// line 89
panda$core$Int64 $tmp63 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(param0);
panda$core$Int64 $tmp64 = (panda$core$Int64) {0};
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 > $tmp66;
panda$core$Bit $tmp68 = (panda$core$Bit) {$tmp67};
return $tmp68;

}
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* param0) {

panda$threads$ScopedLock* local0 = NULL;
panda$core$Immutable* local1 = NULL;
// line 99
panda$threads$ScopedLock* $tmp69 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
panda$threads$Lock** $tmp70 = &param0->lock;
panda$threads$Lock* $tmp71 = *$tmp70;
panda$threads$ScopedLock$init$panda$threads$Lock($tmp69, $tmp71);
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$threads$ScopedLock* $tmp72 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
*(&local0) = $tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($1:panda.threads.ScopedLock)
// line 100
goto block1;
block1:;
panda$threads$MessageQueue$Message** $tmp73 = &param0->head;
panda$threads$MessageQueue$Message* $tmp74 = *$tmp73;
panda$core$Bit $tmp75 = panda$core$Bit$init$builtin_bit($tmp74 == NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block2; else goto block3;
block2:;
// line 101
panda$threads$Notifier** $tmp77 = &param0->notifier;
panda$threads$Notifier* $tmp78 = *$tmp77;
panda$threads$Notifier$wait($tmp78);
goto block1;
block3:;
// line 103
panda$threads$MessageQueue$Message** $tmp79 = &param0->head;
panda$threads$MessageQueue$Message* $tmp80 = *$tmp79;
panda$core$Immutable** $tmp81 = &$tmp80->payload;
panda$core$Immutable* $tmp82 = *$tmp81;
*(&local1) = ((panda$core$Immutable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
panda$core$Immutable* $tmp83 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
*(&local1) = $tmp82;
// line 104
panda$threads$MessageQueue$Message** $tmp84 = &param0->head;
panda$threads$MessageQueue$Message* $tmp85 = *$tmp84;
panda$threads$MessageQueue$Message** $tmp86 = &$tmp85->next;
panda$threads$MessageQueue$Message* $tmp87 = *$tmp86;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$threads$MessageQueue$Message** $tmp88 = &param0->head;
panda$threads$MessageQueue$Message* $tmp89 = *$tmp88;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$threads$MessageQueue$Message** $tmp90 = &param0->head;
*$tmp90 = $tmp87;
// line 105
panda$threads$MessageQueue$Message** $tmp91 = &param0->head;
panda$threads$MessageQueue$Message* $tmp92 = *$tmp91;
panda$core$Bit $tmp93 = panda$core$Bit$init$builtin_bit($tmp92 == NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block4; else goto block5;
block4:;
// line 106
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$threads$MessageQueue$Message*) NULL)));
panda$threads$MessageQueue$Message** $tmp95 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp96 = *$tmp95;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
panda$threads$MessageQueue$Message** $tmp97 = &param0->tail;
*$tmp97 = ((panda$threads$MessageQueue$Message*) NULL);
goto block5;
block5:;
// line 108
panda$core$Int64* $tmp98 = &param0->count;
panda$core$Int64 $tmp99 = *$tmp98;
panda$core$Int64 $tmp100 = (panda$core$Int64) {1};
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101 - $tmp102;
panda$core$Int64 $tmp104 = (panda$core$Int64) {$tmp103};
panda$core$Int64* $tmp105 = &param0->count;
*$tmp105 = $tmp104;
// line 109
panda$core$Immutable* $tmp106 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp106));
panda$core$Immutable* $tmp107 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
// unreffing result
*(&local1) = ((panda$core$Immutable*) NULL);
panda$threads$ScopedLock* $tmp108 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
return $tmp106;

}
void panda$threads$MessageQueue$clear(panda$threads$MessageQueue* param0) {

// line 116
goto block1;
block1:;
panda$core$Bit $tmp109 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(param0);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block2; else goto block3;
block2:;
// line 117
panda$core$Immutable* $tmp111 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(param0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp111));
// unreffing REF($8:panda.threads.MessageQueue.T)
goto block1;
block3:;
return;

}
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* param0) {

// line 32
panda$threads$Lock* $tmp112 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
panda$threads$Lock$init($tmp112);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$threads$Lock** $tmp113 = &param0->lock;
panda$threads$Lock* $tmp114 = *$tmp113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
panda$threads$Lock** $tmp115 = &param0->lock;
*$tmp115 = $tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($2:panda.threads.Lock)
// line 35
panda$threads$Notifier* $tmp116 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
panda$threads$Lock** $tmp117 = &param0->lock;
panda$threads$Lock* $tmp118 = *$tmp117;
panda$threads$Notifier$init$panda$threads$Lock($tmp116, $tmp118);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$threads$Notifier** $tmp119 = &param0->notifier;
panda$threads$Notifier* $tmp120 = *$tmp119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$threads$Notifier** $tmp121 = &param0->notifier;
*$tmp121 = $tmp116;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($17:panda.threads.Notifier)
// line 38
panda$core$Int64 $tmp122 = (panda$core$Int64) {0};
panda$core$Int64* $tmp123 = &param0->count;
*$tmp123 = $tmp122;
return;

}
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* param0) {

// line 11
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$threads$Lock** $tmp124 = &param0->lock;
panda$threads$Lock* $tmp125 = *$tmp124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$threads$Notifier** $tmp126 = &param0->notifier;
panda$threads$Notifier* $tmp127 = *$tmp126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$threads$MessageQueue$Message** $tmp128 = &param0->head;
panda$threads$MessageQueue$Message* $tmp129 = *$tmp128;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
panda$threads$MessageQueue$Message** $tmp130 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp131 = *$tmp130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
return;

}

