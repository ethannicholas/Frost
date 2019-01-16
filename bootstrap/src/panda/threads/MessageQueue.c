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
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static panda$core$String $s21 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x27", 137, 5950948215724798278, NULL };
static panda$core$String $s32 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x27", 137, 5950948215724798278, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static panda$core$String $s95 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x27", 137, 5950948215724798278, NULL };
static panda$core$String $s104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 1403033072504338483, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x27", 137, 5950948215724798278, NULL };

void panda$threads$MessageQueue$post$panda$threads$MessageQueue$T(panda$threads$MessageQueue* param0, panda$core$Immutable* param1) {

panda$threads$ScopedLock* local0 = NULL;
// line 52
panda$threads$ScopedLock* $tmp2 = (panda$threads$ScopedLock*) frostObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
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
panda$core$Bit $tmp18 = panda$core$Bit$init$builtin_bit($tmp17 != NULL);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp20 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block6:;
panda$threads$MessageQueue$Message* $tmp23 = (panda$threads$MessageQueue$Message*) frostObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp23, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
panda$threads$MessageQueue$Message** $tmp24 = &$tmp17->next;
panda$threads$MessageQueue$Message* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$threads$MessageQueue$Message** $tmp26 = &$tmp17->next;
*$tmp26 = $tmp23;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
// unreffing REF($47:panda.threads.MessageQueue.Message<panda.threads.MessageQueue.T>)
// line 56
panda$threads$MessageQueue$Message** $tmp27 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp28 = *$tmp27;
panda$core$Bit $tmp29 = panda$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp31 = (panda$core$Int64) {56};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s32, $tmp31, &$s33);
abort(); // unreachable
block8:;
panda$threads$MessageQueue$Message** $tmp34 = &$tmp28->next;
panda$threads$MessageQueue$Message* $tmp35 = *$tmp34;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
panda$threads$MessageQueue$Message** $tmp36 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
panda$threads$MessageQueue$Message** $tmp38 = &param0->tail;
*$tmp38 = $tmp35;
goto block2;
block3:;
// line 1
// line 59
panda$core$Int64* $tmp39 = &param0->count;
panda$core$Int64 $tmp40 = *$tmp39;
panda$core$Int64 $tmp41 = (panda$core$Int64) {0};
panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp40, $tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp44 = (panda$core$Int64) {59};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s45, $tmp44);
abort(); // unreachable
block10:;
// line 60
panda$threads$MessageQueue$Message* $tmp46 = (panda$threads$MessageQueue$Message*) frostObjectAlloc(32, (panda$core$Class*) &panda$threads$MessageQueue$Message$class);
panda$threads$MessageQueue$Message$init$panda$threads$MessageQueue$Message$T($tmp46, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$threads$MessageQueue$Message** $tmp47 = &param0->head;
panda$threads$MessageQueue$Message* $tmp48 = *$tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$threads$MessageQueue$Message** $tmp49 = &param0->head;
*$tmp49 = $tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($103:panda.threads.MessageQueue.Message<panda.threads.MessageQueue.T>)
// line 61
panda$threads$MessageQueue$Message** $tmp50 = &param0->head;
panda$threads$MessageQueue$Message* $tmp51 = *$tmp50;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$threads$MessageQueue$Message** $tmp52 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp53 = *$tmp52;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp53));
panda$threads$MessageQueue$Message** $tmp54 = &param0->tail;
*$tmp54 = $tmp51;
goto block2;
block2:;
// line 63
panda$core$Int64* $tmp55 = &param0->count;
panda$core$Int64 $tmp56 = *$tmp55;
panda$core$Int64 $tmp57 = (panda$core$Int64) {1};
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 + $tmp59;
panda$core$Int64 $tmp61 = (panda$core$Int64) {$tmp60};
panda$core$Int64* $tmp62 = &param0->count;
*$tmp62 = $tmp61;
// line 64
panda$threads$Notifier** $tmp63 = &param0->notifier;
panda$threads$Notifier* $tmp64 = *$tmp63;
panda$threads$Notifier$notify($tmp64);
panda$threads$ScopedLock* $tmp65 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
return;

}
panda$core$Int64 panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(panda$threads$MessageQueue* param0) {

panda$threads$ScopedLock* local0 = NULL;
// line 76
panda$threads$ScopedLock* $tmp66 = (panda$threads$ScopedLock*) frostObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
panda$threads$Lock** $tmp67 = &param0->lock;
panda$threads$Lock* $tmp68 = *$tmp67;
panda$threads$ScopedLock$init$panda$threads$Lock($tmp66, $tmp68);
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
panda$threads$ScopedLock* $tmp69 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
*(&local0) = $tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
// unreffing REF($1:panda.threads.ScopedLock)
// line 77
panda$core$Int64* $tmp70 = &param0->count;
panda$core$Int64 $tmp71 = *$tmp70;
panda$threads$ScopedLock* $tmp72 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
return $tmp71;

}
panda$core$Bit panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(panda$threads$MessageQueue* param0) {

// line 89
panda$core$Int64 $tmp73 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64(param0);
panda$core$Int64 $tmp74 = (panda$core$Int64) {0};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 > $tmp76;
panda$core$Bit $tmp78 = (panda$core$Bit) {$tmp77};
return $tmp78;

}
panda$core$Immutable* panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(panda$threads$MessageQueue* param0) {

panda$threads$ScopedLock* local0 = NULL;
panda$core$Immutable* local1 = NULL;
// line 99
panda$threads$ScopedLock* $tmp79 = (panda$threads$ScopedLock*) frostObjectAlloc(24, (panda$core$Class*) &panda$threads$ScopedLock$class);
panda$threads$Lock** $tmp80 = &param0->lock;
panda$threads$Lock* $tmp81 = *$tmp80;
panda$threads$ScopedLock$init$panda$threads$Lock($tmp79, $tmp81);
*(&local0) = ((panda$threads$ScopedLock*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
panda$threads$ScopedLock* $tmp82 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
*(&local0) = $tmp79;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp79));
// unreffing REF($1:panda.threads.ScopedLock)
// line 100
goto block1;
block1:;
panda$threads$MessageQueue$Message** $tmp83 = &param0->head;
panda$threads$MessageQueue$Message* $tmp84 = *$tmp83;
panda$core$Bit $tmp85 = panda$core$Bit$init$builtin_bit($tmp84 == NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block2; else goto block3;
block2:;
// line 101
panda$threads$Notifier** $tmp87 = &param0->notifier;
panda$threads$Notifier* $tmp88 = *$tmp87;
panda$threads$Notifier$wait($tmp88);
goto block1;
block3:;
// line 103
panda$threads$MessageQueue$Message** $tmp89 = &param0->head;
panda$threads$MessageQueue$Message* $tmp90 = *$tmp89;
panda$core$Bit $tmp91 = panda$core$Bit$init$builtin_bit($tmp90 != NULL);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp93 = (panda$core$Int64) {103};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block4:;
panda$core$Immutable** $tmp96 = &$tmp90->payload;
panda$core$Immutable* $tmp97 = *$tmp96;
*(&local1) = ((panda$core$Immutable*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp97));
panda$core$Immutable* $tmp98 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
*(&local1) = $tmp97;
// line 104
panda$threads$MessageQueue$Message** $tmp99 = &param0->head;
panda$threads$MessageQueue$Message* $tmp100 = *$tmp99;
panda$core$Bit $tmp101 = panda$core$Bit$init$builtin_bit($tmp100 != NULL);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp103 = (panda$core$Int64) {104};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s104, $tmp103, &$s105);
abort(); // unreachable
block6:;
panda$threads$MessageQueue$Message** $tmp106 = &$tmp100->next;
panda$threads$MessageQueue$Message* $tmp107 = *$tmp106;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
panda$threads$MessageQueue$Message** $tmp108 = &param0->head;
panda$threads$MessageQueue$Message* $tmp109 = *$tmp108;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp109));
panda$threads$MessageQueue$Message** $tmp110 = &param0->head;
*$tmp110 = $tmp107;
// line 105
panda$threads$MessageQueue$Message** $tmp111 = &param0->head;
panda$threads$MessageQueue$Message* $tmp112 = *$tmp111;
panda$core$Bit $tmp113 = panda$core$Bit$init$builtin_bit($tmp112 == NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block8; else goto block9;
block8:;
// line 106
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$threads$MessageQueue$Message*) NULL)));
panda$threads$MessageQueue$Message** $tmp115 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp116 = *$tmp115;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
panda$threads$MessageQueue$Message** $tmp117 = &param0->tail;
*$tmp117 = ((panda$threads$MessageQueue$Message*) NULL);
goto block9;
block9:;
// line 108
panda$core$Int64* $tmp118 = &param0->count;
panda$core$Int64 $tmp119 = *$tmp118;
panda$core$Int64 $tmp120 = (panda$core$Int64) {1};
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120.value;
int64_t $tmp123 = $tmp121 - $tmp122;
panda$core$Int64 $tmp124 = (panda$core$Int64) {$tmp123};
panda$core$Int64* $tmp125 = &param0->count;
*$tmp125 = $tmp124;
// line 109
panda$core$Immutable* $tmp126 = *(&local1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp126));
panda$core$Immutable* $tmp127 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp127));
// unreffing result
*(&local1) = ((panda$core$Immutable*) NULL);
panda$threads$ScopedLock* $tmp128 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing scope
*(&local0) = ((panda$threads$ScopedLock*) NULL);
return $tmp126;

}
void panda$threads$MessageQueue$clear(panda$threads$MessageQueue* param0) {

// line 116
goto block1;
block1:;
panda$core$Bit $tmp129 = panda$threads$MessageQueue$hasMessage$R$panda$core$Bit(param0);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block2; else goto block3;
block2:;
// line 117
panda$core$Immutable* $tmp131 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T(param0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($8:panda.threads.MessageQueue.T)
goto block1;
block3:;
return;

}
void panda$threads$MessageQueue$init(panda$threads$MessageQueue* param0) {

// line 32
panda$threads$Lock* $tmp132 = (panda$threads$Lock*) frostObjectAlloc(24, (panda$core$Class*) &panda$threads$Lock$class);
panda$threads$Lock$init($tmp132);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
panda$threads$Lock** $tmp133 = &param0->lock;
panda$threads$Lock* $tmp134 = *$tmp133;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
panda$threads$Lock** $tmp135 = &param0->lock;
*$tmp135 = $tmp132;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp132));
// unreffing REF($2:panda.threads.Lock)
// line 35
panda$threads$Notifier* $tmp136 = (panda$threads$Notifier*) frostObjectAlloc(32, (panda$core$Class*) &panda$threads$Notifier$class);
panda$threads$Lock** $tmp137 = &param0->lock;
panda$threads$Lock* $tmp138 = *$tmp137;
panda$threads$Notifier$init$panda$threads$Lock($tmp136, $tmp138);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
panda$threads$Notifier** $tmp139 = &param0->notifier;
panda$threads$Notifier* $tmp140 = *$tmp139;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
panda$threads$Notifier** $tmp141 = &param0->notifier;
*$tmp141 = $tmp136;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp136));
// unreffing REF($17:panda.threads.Notifier)
// line 38
panda$core$Int64 $tmp142 = (panda$core$Int64) {0};
panda$core$Int64* $tmp143 = &param0->count;
*$tmp143 = $tmp142;
return;

}
void panda$threads$MessageQueue$cleanup(panda$threads$MessageQueue* param0) {

// line 11
panda$core$Immutable$cleanup(((panda$core$Immutable*) param0));
panda$threads$Lock** $tmp144 = &param0->lock;
panda$threads$Lock* $tmp145 = *$tmp144;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
panda$threads$Notifier** $tmp146 = &param0->notifier;
panda$threads$Notifier* $tmp147 = *$tmp146;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
panda$threads$MessageQueue$Message** $tmp148 = &param0->head;
panda$threads$MessageQueue$Message* $tmp149 = *$tmp148;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
panda$threads$MessageQueue$Message** $tmp150 = &param0->tail;
panda$threads$MessageQueue$Message* $tmp151 = *$tmp150;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp151));
return;

}

