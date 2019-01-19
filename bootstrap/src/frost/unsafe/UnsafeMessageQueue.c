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
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 152, -178343294099574487, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 152, -178343294099574487, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };
static frost$core$String $s94 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 152, -178343294099574487, NULL };
static frost$core$String $s104 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, -3268556064045328107, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 152, -178343294099574487, NULL };

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
// unreffing REF($1:frost.threads.ScopedLock)
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
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17 != NULL);
bool $tmp19 = $tmp18.value;
if ($tmp19) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp20 = (frost$core$Int64) {49};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s21, $tmp20, &$s22);
abort(); // unreachable
block6:;
frost$unsafe$UnsafeMessageQueue$Message* $tmp23 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T($tmp23, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
frost$unsafe$UnsafeMessageQueue$Message** $tmp24 = &$tmp17->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp25 = *$tmp24;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp25));
frost$unsafe$UnsafeMessageQueue$Message** $tmp26 = &$tmp17->next;
*$tmp26 = $tmp23;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp23));
// unreffing REF($47:frost.unsafe.UnsafeMessageQueue.Message<frost.unsafe.UnsafeMessageQueue.T>)
// line 50
frost$unsafe$UnsafeMessageQueue$Message** $tmp27 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp28 = *$tmp27;
frost$core$Bit $tmp29 = frost$core$Bit$init$builtin_bit($tmp28 != NULL);
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp31 = (frost$core$Int64) {50};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s32, $tmp31, &$s33);
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
// line 1
// line 53
frost$core$Int64* $tmp39 = &param0->count;
frost$core$Int64 $tmp40 = *$tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {0};
frost$core$Bit $tmp42 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp40, $tmp41);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block10; else goto block11;
block11:;
frost$core$Int64 $tmp44 = (frost$core$Int64) {53};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s45, $tmp44);
abort(); // unreachable
block10:;
// line 54
frost$unsafe$UnsafeMessageQueue$Message* $tmp46 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T($tmp46, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
frost$unsafe$UnsafeMessageQueue$Message** $tmp47 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp48 = *$tmp47;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp48));
frost$unsafe$UnsafeMessageQueue$Message** $tmp49 = &param0->head;
*$tmp49 = $tmp46;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp46));
// unreffing REF($103:frost.unsafe.UnsafeMessageQueue.Message<frost.unsafe.UnsafeMessageQueue.T>)
// line 55
frost$unsafe$UnsafeMessageQueue$Message** $tmp50 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp51 = *$tmp50;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
frost$unsafe$UnsafeMessageQueue$Message** $tmp52 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp53 = *$tmp52;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp53));
frost$unsafe$UnsafeMessageQueue$Message** $tmp54 = &param0->tail;
*$tmp54 = $tmp51;
goto block2;
block2:;
// line 57
frost$core$Int64* $tmp55 = &param0->count;
frost$core$Int64 $tmp56 = *$tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {1};
int64_t $tmp58 = $tmp56.value;
int64_t $tmp59 = $tmp57.value;
int64_t $tmp60 = $tmp58 + $tmp59;
frost$core$Int64 $tmp61 = (frost$core$Int64) {$tmp60};
frost$core$Int64* $tmp62 = &param0->count;
*$tmp62 = $tmp61;
// line 58
frost$threads$Notifier** $tmp63 = &param0->notifier;
frost$threads$Notifier* $tmp64 = *$tmp63;
frost$threads$Notifier$notify($tmp64);
frost$threads$ScopedLock* $tmp65 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp65));
// unreffing scope
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int64 frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int64(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
// line 70
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
// unreffing REF($1:frost.threads.ScopedLock)
// line 71
frost$core$Int64* $tmp70 = &param0->count;
frost$core$Int64 $tmp71 = *$tmp70;
frost$threads$ScopedLock* $tmp72 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp72));
// unreffing scope
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp71;

}
frost$core$Bit frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(frost$unsafe$UnsafeMessageQueue* param0) {

// line 83
frost$core$Int64 $tmp73 = frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int64(param0);
frost$core$Int64 $tmp74 = (frost$core$Int64) {0};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 > $tmp76;
frost$core$Bit $tmp78 = (frost$core$Bit) {$tmp77};
return $tmp78;

}
frost$core$Object* frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Object* local1 = NULL;
// line 93
frost$threads$ScopedLock* $tmp79 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
frost$threads$Lock** $tmp80 = &param0->lock;
frost$threads$Lock* $tmp81 = *$tmp80;
frost$threads$ScopedLock$init$frost$threads$Lock($tmp79, $tmp81);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$threads$ScopedLock* $tmp82 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp82));
*(&local0) = $tmp79;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
// unreffing REF($1:frost.threads.ScopedLock)
// line 94
goto block1;
block1:;
frost$unsafe$UnsafeMessageQueue$Message** $tmp83 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp84 = *$tmp83;
frost$core$Bit $tmp85 = frost$core$Bit$init$builtin_bit($tmp84 == NULL);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block2; else goto block3;
block2:;
// line 95
frost$threads$Notifier** $tmp87 = &param0->notifier;
frost$threads$Notifier* $tmp88 = *$tmp87;
frost$threads$Notifier$wait($tmp88);
goto block1;
block3:;
// line 97
frost$unsafe$UnsafeMessageQueue$Message** $tmp89 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp90 = *$tmp89;
frost$core$Bit $tmp91 = frost$core$Bit$init$builtin_bit($tmp90 != NULL);
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp93 = (frost$core$Int64) {97};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s94, $tmp93, &$s95);
abort(); // unreachable
block4:;
frost$core$Object** $tmp96 = &$tmp90->payload;
frost$core$Object* $tmp97 = *$tmp96;
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp97);
frost$core$Object* $tmp98 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp98);
*(&local1) = $tmp97;
// line 98
frost$unsafe$UnsafeMessageQueue$Message** $tmp99 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp100 = *$tmp99;
frost$core$Bit $tmp101 = frost$core$Bit$init$builtin_bit($tmp100 != NULL);
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp103 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s104, $tmp103, &$s105);
abort(); // unreachable
block6:;
frost$unsafe$UnsafeMessageQueue$Message** $tmp106 = &$tmp100->next;
frost$unsafe$UnsafeMessageQueue$Message* $tmp107 = *$tmp106;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
frost$unsafe$UnsafeMessageQueue$Message** $tmp108 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp109 = *$tmp108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp109));
frost$unsafe$UnsafeMessageQueue$Message** $tmp110 = &param0->head;
*$tmp110 = $tmp107;
// line 99
frost$unsafe$UnsafeMessageQueue$Message** $tmp111 = &param0->head;
frost$unsafe$UnsafeMessageQueue$Message* $tmp112 = *$tmp111;
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit($tmp112 == NULL);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block8; else goto block9;
block8:;
// line 100
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$unsafe$UnsafeMessageQueue$Message*) NULL)));
frost$unsafe$UnsafeMessageQueue$Message** $tmp115 = &param0->tail;
frost$unsafe$UnsafeMessageQueue$Message* $tmp116 = *$tmp115;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp116));
frost$unsafe$UnsafeMessageQueue$Message** $tmp117 = &param0->tail;
*$tmp117 = ((frost$unsafe$UnsafeMessageQueue$Message*) NULL);
goto block9;
block9:;
// line 102
frost$core$Int64* $tmp118 = &param0->count;
frost$core$Int64 $tmp119 = *$tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {1};
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120.value;
int64_t $tmp123 = $tmp121 - $tmp122;
frost$core$Int64 $tmp124 = (frost$core$Int64) {$tmp123};
frost$core$Int64* $tmp125 = &param0->count;
*$tmp125 = $tmp124;
// line 103
frost$core$Object* $tmp126 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp126);
frost$core$Object* $tmp127 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp127);
// unreffing result
*(&local1) = ((frost$core$Object*) NULL);
frost$threads$ScopedLock* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp128));
// unreffing scope
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return $tmp126;

}
void frost$unsafe$UnsafeMessageQueue$clear(frost$unsafe$UnsafeMessageQueue* param0) {

// line 110
goto block1;
block1:;
frost$core$Bit $tmp129 = frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(param0);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block2; else goto block3;
block2:;
// line 111
frost$core$Object* $tmp131 = frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(param0);
frost$core$Frost$unref$frost$core$Object$Q($tmp131);
// unreffing REF($8:frost.unsafe.UnsafeMessageQueue.T)
goto block1;
block3:;
return;

}
void frost$unsafe$UnsafeMessageQueue$init(frost$unsafe$UnsafeMessageQueue* param0) {

// line 26
frost$threads$Lock* $tmp132 = (frost$threads$Lock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init($tmp132);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
frost$threads$Lock** $tmp133 = &param0->lock;
frost$threads$Lock* $tmp134 = *$tmp133;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp134));
frost$threads$Lock** $tmp135 = &param0->lock;
*$tmp135 = $tmp132;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp132));
// unreffing REF($2:frost.threads.Lock)
// line 29
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
// unreffing REF($17:frost.threads.Notifier)
// line 32
frost$core$Int64 $tmp142 = (frost$core$Int64) {0};
frost$core$Int64* $tmp143 = &param0->count;
*$tmp143 = $tmp142;
return;

}
void frost$unsafe$UnsafeMessageQueue$cleanup(frost$unsafe$UnsafeMessageQueue* param0) {

// line 5
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

