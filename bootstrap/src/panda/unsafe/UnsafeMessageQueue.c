#include "panda/unsafe/UnsafeMessageQueue.h"
#include "panda/core/Immutable.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Object.h"
#include "panda/threads/ScopedLock.h"
#include "panda/threads/Lock.h"
#include "panda/core/Panda.h"
#include "panda/unsafe/UnsafeMessageQueue/Message.h"
#include "panda/core/Bit.h"
#include "panda/core/Int64.h"
#include "panda/threads/Notifier.h"

__attribute__((weak)) void panda$unsafe$UnsafeMessageQueue$cleanup$shim(panda$unsafe$UnsafeMessageQueue* p0) {
    panda$unsafe$UnsafeMessageQueue$cleanup(p0);

}

static panda$core$String $s1;
panda$unsafe$UnsafeMessageQueue$class_type panda$unsafe$UnsafeMessageQueue$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$unsafe$UnsafeMessageQueue$cleanup$shim, panda$unsafe$UnsafeMessageQueue$post$panda$unsafe$UnsafeMessageQueue$T, panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64, panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit, panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T, panda$unsafe$UnsafeMessageQueue$clear} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 31, -8786330723062907737, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 24, -3268556063022250949, NULL };
static panda$core$String $s35 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x70\x61\x6e\x64\x61", 24, -3268556063022250949, NULL };

void panda$unsafe$UnsafeMessageQueue$post$panda$unsafe$UnsafeMessageQueue$T(panda$unsafe$UnsafeMessageQueue* param0, panda$core$Object* param1) {

panda$threads$ScopedLock* local0 = NULL;
// line 46
panda$threads$ScopedLock* $tmp2 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
panda$threads$Lock** $tmp3 = &param0->lock;
panda$threads$Lock* $tmp4 = *$tmp3;
panda$threads$ScopedLock$init$panda$threads$Lock($tmp2, $tmp4);
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$threads$ScopedLock* $tmp5 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
*(&local0) = $tmp2;
// line 47
panda$unsafe$UnsafeMessageQueue$Message** $tmp6 = &param0->tail;
panda$unsafe$UnsafeMessageQueue$Message* $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = panda$core$Bit$init$builtin_bit($tmp7 != NULL);
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 48
panda$unsafe$UnsafeMessageQueue$Message** $tmp10 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp11 = *$tmp10;
panda$core$Bit $tmp12 = panda$core$Bit$init$builtin_bit($tmp11 != NULL);
bool $tmp13 = $tmp12.value;
if ($tmp13) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp14 = (panda$core$Int64) {48};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s15, $tmp14);
abort(); // unreachable
block4:;
// line 49
panda$unsafe$UnsafeMessageQueue$Message** $tmp16 = &param0->tail;
panda$unsafe$UnsafeMessageQueue$Message* $tmp17 = *$tmp16;
panda$unsafe$UnsafeMessageQueue$Message* $tmp18 = (panda$unsafe$UnsafeMessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$unsafe$UnsafeMessageQueue$Message$class);
panda$unsafe$UnsafeMessageQueue$Message$init$panda$unsafe$UnsafeMessageQueue$Message$T($tmp18, param1);
panda$unsafe$UnsafeMessageQueue$Message** $tmp19 = &$tmp17->next;
panda$unsafe$UnsafeMessageQueue$Message* $tmp20 = *$tmp19;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp20));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$unsafe$UnsafeMessageQueue$Message** $tmp21 = &$tmp17->next;
*$tmp21 = $tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
// unreffing REF($37:panda.unsafe.UnsafeMessageQueue.Message<panda.unsafe.UnsafeMessageQueue.T>)
// line 50
panda$unsafe$UnsafeMessageQueue$Message** $tmp22 = &param0->tail;
panda$unsafe$UnsafeMessageQueue$Message* $tmp23 = *$tmp22;
panda$unsafe$UnsafeMessageQueue$Message** $tmp24 = &$tmp23->next;
panda$unsafe$UnsafeMessageQueue$Message* $tmp25 = *$tmp24;
panda$unsafe$UnsafeMessageQueue$Message** $tmp26 = &param0->tail;
panda$unsafe$UnsafeMessageQueue$Message* $tmp27 = *$tmp26;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp27));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$unsafe$UnsafeMessageQueue$Message** $tmp28 = &param0->tail;
*$tmp28 = $tmp25;
goto block2;
block3:;
// line 1
// line 53
panda$core$Int64* $tmp29 = &param0->count;
panda$core$Int64 $tmp30 = *$tmp29;
panda$core$Int64 $tmp31 = (panda$core$Int64) {0};
panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp30, $tmp31);
bool $tmp33 = $tmp32.value;
if ($tmp33) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp34 = (panda$core$Int64) {53};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s35, $tmp34);
abort(); // unreachable
block6:;
// line 54
panda$unsafe$UnsafeMessageQueue$Message* $tmp36 = (panda$unsafe$UnsafeMessageQueue$Message*) pandaObjectAlloc(32, (panda$core$Class*) &panda$unsafe$UnsafeMessageQueue$Message$class);
panda$unsafe$UnsafeMessageQueue$Message$init$panda$unsafe$UnsafeMessageQueue$Message$T($tmp36, param1);
panda$unsafe$UnsafeMessageQueue$Message** $tmp37 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp38 = *$tmp37;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp38));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
panda$unsafe$UnsafeMessageQueue$Message** $tmp39 = &param0->head;
*$tmp39 = $tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp36));
// unreffing REF($86:panda.unsafe.UnsafeMessageQueue.Message<panda.unsafe.UnsafeMessageQueue.T>)
// line 55
panda$unsafe$UnsafeMessageQueue$Message** $tmp40 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp41 = *$tmp40;
panda$unsafe$UnsafeMessageQueue$Message** $tmp42 = &param0->tail;
panda$unsafe$UnsafeMessageQueue$Message* $tmp43 = *$tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$unsafe$UnsafeMessageQueue$Message** $tmp44 = &param0->tail;
*$tmp44 = $tmp41;
goto block2;
block2:;
// line 57
panda$core$Int64* $tmp45 = &param0->count;
panda$core$Int64 $tmp46 = *$tmp45;
panda$core$Int64 $tmp47 = (panda$core$Int64) {1};
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 + $tmp49;
panda$core$Int64 $tmp51 = (panda$core$Int64) {$tmp50};
panda$core$Int64* $tmp52 = &param0->count;
*$tmp52 = $tmp51;
// line 58
panda$threads$Notifier** $tmp53 = &param0->notifier;
panda$threads$Notifier* $tmp54 = *$tmp53;
panda$threads$Notifier$notify($tmp54);
panda$threads$ScopedLock* $tmp55 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
// unreffing REF($1:panda.threads.ScopedLock)
return;

}
panda$core$Int64 panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64(panda$unsafe$UnsafeMessageQueue* param0) {

panda$threads$ScopedLock* local0 = NULL;
// line 70
panda$threads$ScopedLock* $tmp56 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
panda$threads$Lock** $tmp57 = &param0->lock;
panda$threads$Lock* $tmp58 = *$tmp57;
panda$threads$ScopedLock$init$panda$threads$Lock($tmp56, $tmp58);
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$threads$ScopedLock* $tmp59 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp59));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
*(&local0) = $tmp56;
// line 71
panda$core$Int64* $tmp60 = &param0->count;
panda$core$Int64 $tmp61 = *$tmp60;
panda$threads$ScopedLock* $tmp62 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
// unreffing REF($1:panda.threads.ScopedLock)
return $tmp61;

}
panda$core$Bit panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit(panda$unsafe$UnsafeMessageQueue* param0) {

// line 83
panda$core$Int64 $tmp63 = panda$unsafe$UnsafeMessageQueue$pendingMessages$R$panda$core$Int64(param0);
panda$core$Int64 $tmp64 = (panda$core$Int64) {0};
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64.value;
bool $tmp67 = $tmp65 > $tmp66;
panda$core$Bit $tmp68 = (panda$core$Bit) {$tmp67};
return $tmp68;

}
panda$core$Object* panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T(panda$unsafe$UnsafeMessageQueue* param0) {

panda$threads$ScopedLock* local0 = NULL;
panda$core$Object* local1 = NULL;
// line 93
panda$threads$ScopedLock* $tmp69 = (panda$threads$ScopedLock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
panda$threads$Lock** $tmp70 = &param0->lock;
panda$threads$Lock* $tmp71 = *$tmp70;
panda$threads$ScopedLock$init$panda$threads$Lock($tmp69, $tmp71);
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$threads$ScopedLock* $tmp72 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
*(&local0) = $tmp69;
// line 94
goto block1;
block1:;
panda$unsafe$UnsafeMessageQueue$Message** $tmp73 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp74 = *$tmp73;
panda$core$Bit $tmp75 = panda$core$Bit$init$builtin_bit($tmp74 == NULL);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block2; else goto block3;
block2:;
// line 95
panda$threads$Notifier** $tmp77 = &param0->notifier;
panda$threads$Notifier* $tmp78 = *$tmp77;
panda$threads$Notifier$wait($tmp78);
goto block1;
block3:;
// line 97
panda$unsafe$UnsafeMessageQueue$Message** $tmp79 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp80 = *$tmp79;
panda$core$Object** $tmp81 = &$tmp80->payload;
panda$core$Object* $tmp82 = *$tmp81;
*(&local1) = ((panda$core$Object*) NULL);
panda$core$Object* $tmp83 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp83);
panda$core$Panda$ref$panda$core$Object$Q($tmp82);
*(&local1) = $tmp82;
// line 98
panda$unsafe$UnsafeMessageQueue$Message** $tmp84 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp85 = *$tmp84;
panda$unsafe$UnsafeMessageQueue$Message** $tmp86 = &$tmp85->next;
panda$unsafe$UnsafeMessageQueue$Message* $tmp87 = *$tmp86;
panda$unsafe$UnsafeMessageQueue$Message** $tmp88 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp89 = *$tmp88;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp87));
panda$unsafe$UnsafeMessageQueue$Message** $tmp90 = &param0->head;
*$tmp90 = $tmp87;
// line 99
panda$unsafe$UnsafeMessageQueue$Message** $tmp91 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp92 = *$tmp91;
panda$core$Bit $tmp93 = panda$core$Bit$init$builtin_bit($tmp92 == NULL);
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block4; else goto block5;
block4:;
// line 100
panda$unsafe$UnsafeMessageQueue$Message** $tmp95 = &param0->tail;
panda$unsafe$UnsafeMessageQueue$Message* $tmp96 = *$tmp95;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp96));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$unsafe$UnsafeMessageQueue$Message*) NULL)));
panda$unsafe$UnsafeMessageQueue$Message** $tmp97 = &param0->tail;
*$tmp97 = ((panda$unsafe$UnsafeMessageQueue$Message*) NULL);
goto block5;
block5:;
// line 102
panda$core$Int64* $tmp98 = &param0->count;
panda$core$Int64 $tmp99 = *$tmp98;
panda$core$Int64 $tmp100 = (panda$core$Int64) {1};
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100.value;
int64_t $tmp103 = $tmp101 - $tmp102;
panda$core$Int64 $tmp104 = (panda$core$Int64) {$tmp103};
panda$core$Int64* $tmp105 = &param0->count;
*$tmp105 = $tmp104;
// line 103
panda$core$Object* $tmp106 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q($tmp106);
panda$core$Object* $tmp107 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp107);
// unreffing result
*(&local1) = ((panda$core$Object*) NULL);
panda$threads$ScopedLock* $tmp108 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp108));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
// unreffing REF($1:panda.threads.ScopedLock)
return $tmp106;

}
void panda$unsafe$UnsafeMessageQueue$clear(panda$unsafe$UnsafeMessageQueue* param0) {

// line 110
goto block1;
block1:;
panda$core$Bit $tmp109 = panda$unsafe$UnsafeMessageQueue$hasMessage$R$panda$core$Bit(param0);
bool $tmp110 = $tmp109.value;
if ($tmp110) goto block2; else goto block3;
block2:;
// line 111
panda$core$Object* $tmp111 = panda$unsafe$UnsafeMessageQueue$getMessage$R$panda$unsafe$UnsafeMessageQueue$T(param0);
panda$core$Panda$unref$panda$core$Object$Q($tmp111);
// unreffing REF($8:panda.unsafe.UnsafeMessageQueue.T)
goto block1;
block3:;
return;

}
void panda$unsafe$UnsafeMessageQueue$init(panda$unsafe$UnsafeMessageQueue* param0) {

// line 26
panda$threads$Lock* $tmp112 = (panda$threads$Lock*) pandaObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
panda$threads$Lock$init($tmp112);
panda$threads$Lock** $tmp113 = &param0->lock;
panda$threads$Lock* $tmp114 = *$tmp113;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp114));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
panda$threads$Lock** $tmp115 = &param0->lock;
*$tmp115 = $tmp112;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($2:panda.threads.Lock)
// line 29
panda$threads$Notifier* $tmp116 = (panda$threads$Notifier*) pandaObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
panda$threads$Lock** $tmp117 = &param0->lock;
panda$threads$Lock* $tmp118 = *$tmp117;
panda$threads$Notifier$init$panda$threads$Lock($tmp116, $tmp118);
panda$threads$Notifier** $tmp119 = &param0->notifier;
panda$threads$Notifier* $tmp120 = *$tmp119;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp120));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$threads$Notifier** $tmp121 = &param0->notifier;
*$tmp121 = $tmp116;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($17:panda.threads.Notifier)
// line 32
panda$core$Int64 $tmp122 = (panda$core$Int64) {0};
panda$core$Int64* $tmp123 = &param0->count;
*$tmp123 = $tmp122;
return;

}
void panda$unsafe$UnsafeMessageQueue$cleanup(panda$unsafe$UnsafeMessageQueue* param0) {

// line 5
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$threads$Lock** $tmp124 = &param0->lock;
panda$threads$Lock* $tmp125 = *$tmp124;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
panda$threads$Notifier** $tmp126 = &param0->notifier;
panda$threads$Notifier* $tmp127 = *$tmp126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
panda$unsafe$UnsafeMessageQueue$Message** $tmp128 = &param0->head;
panda$unsafe$UnsafeMessageQueue$Message* $tmp129 = *$tmp128;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp129));
panda$unsafe$UnsafeMessageQueue$Message** $tmp130 = &param0->tail;
panda$unsafe$UnsafeMessageQueue$Message* $tmp131 = *$tmp130;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
return;

}

