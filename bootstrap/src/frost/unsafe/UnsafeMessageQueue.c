#include "frost/unsafe/UnsafeMessageQueue.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/threads/ScopedLock.h"
#include "frost/threads/Lock.h"
#include "frost/unsafe/UnsafeMessageQueue/Message.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/threads/Notifier.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void frost$unsafe$UnsafeMessageQueue$cleanup$shim(frost$unsafe$UnsafeMessageQueue* p0) {
    frost$unsafe$UnsafeMessageQueue$cleanup(p0);

}

static frost$core$String $s1;
frost$unsafe$UnsafeMessageQueue$class_type frost$unsafe$UnsafeMessageQueue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$unsafe$UnsafeMessageQueue$cleanup$shim, frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T, frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int, frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit, frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T, frost$unsafe$UnsafeMessageQueue$clear} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 31, 6963980427423725683, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e", 187, -2780297555075747941, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e", 187, -2780297555075747941, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 152, -5742533655593336495, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 24, 22806725603529557, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x75\x6e\x73\x61\x66\x65\x2e\x55\x6e\x73\x61\x66\x65\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 152, -5742533655593336495, NULL };

void frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T(void* rawSelf, frost$core$Object* param1) {
frost$unsafe$UnsafeMessageQueue* param0 = (frost$unsafe$UnsafeMessageQueue*) rawSelf;

frost$threads$ScopedLock* local0 = NULL;
frost$threads$ScopedLock* _1;
frost$threads$Lock** _2;
frost$threads$Lock* _3;
frost$core$Object* _6;
frost$threads$ScopedLock* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$unsafe$UnsafeMessageQueue$Message** _15;
frost$unsafe$UnsafeMessageQueue$Message* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$unsafe$UnsafeMessageQueue$Message** _22;
frost$unsafe$UnsafeMessageQueue$Message* _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _28;
frost$unsafe$UnsafeMessageQueue$Message** _32;
frost$unsafe$UnsafeMessageQueue$Message* _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _38;
frost$unsafe$UnsafeMessageQueue$Message* _41;
frost$unsafe$UnsafeMessageQueue$Message* _42;
frost$core$Object* _43;
frost$unsafe$UnsafeMessageQueue$Message* _45;
frost$unsafe$UnsafeMessageQueue$Message* _46;
frost$core$Object* _47;
frost$unsafe$UnsafeMessageQueue$Message** _49;
frost$unsafe$UnsafeMessageQueue$Message* _50;
frost$core$Object* _51;
frost$unsafe$UnsafeMessageQueue$Message** _53;
frost$core$Object* _55;
frost$unsafe$UnsafeMessageQueue$Message** _58;
frost$unsafe$UnsafeMessageQueue$Message* _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _64;
frost$unsafe$UnsafeMessageQueue$Message* _67;
frost$unsafe$UnsafeMessageQueue$Message** _68;
frost$unsafe$UnsafeMessageQueue$Message* _69;
frost$unsafe$UnsafeMessageQueue$Message* _70;
frost$core$Object* _71;
frost$unsafe$UnsafeMessageQueue$Message** _73;
frost$unsafe$UnsafeMessageQueue$Message* _74;
frost$core$Object* _75;
frost$unsafe$UnsafeMessageQueue$Message** _77;
frost$core$Int* _82;
frost$core$Int _83;
frost$core$Int _84;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _92;
frost$core$Int _94;
frost$unsafe$UnsafeMessageQueue$Message* _98;
frost$core$Object* _99;
frost$unsafe$UnsafeMessageQueue$Message* _101;
frost$core$Object* _102;
frost$unsafe$UnsafeMessageQueue$Message** _104;
frost$unsafe$UnsafeMessageQueue$Message* _105;
frost$core$Object* _106;
frost$unsafe$UnsafeMessageQueue$Message** _108;
frost$core$Object* _110;
frost$unsafe$UnsafeMessageQueue$Message** _113;
frost$unsafe$UnsafeMessageQueue$Message* _114;
frost$core$Object* _115;
frost$unsafe$UnsafeMessageQueue$Message** _117;
frost$unsafe$UnsafeMessageQueue$Message* _118;
frost$core$Object* _119;
frost$unsafe$UnsafeMessageQueue$Message** _121;
frost$core$Int* _125;
frost$core$Int _126;
frost$core$Int _127;
int64_t _128;
int64_t _129;
int64_t _130;
frost$core$Int _131;
frost$core$Int* _132;
frost$threads$Notifier** _135;
frost$threads$Notifier* _136;
frost$threads$ScopedLock* _138;
frost$core$Object* _139;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:46
_1 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_2 = &param0->lock;
_3 = *_2;
frost$threads$ScopedLock$init$frost$threads$Lock(_1, _3);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:47
_15 = &param0->tail;
_16 = *_15;
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:48
_22 = &param0->head;
_23 = *_22;
_24 = _23 != NULL;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block4; else goto block5;
block5:;
_28 = (frost$core$Int) {48u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _28);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:49
_32 = &param0->tail;
_33 = *_32;
_34 = _33 != NULL;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block6; else goto block7;
block7:;
_38 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _38, &$s4);
abort(); // unreachable
block6:;
_41 = _33;
_42 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(sizeof(frost$unsafe$UnsafeMessageQueue$Message), (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
_43 = param1;
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T(_42, _43);
_45 = _42;
_46 = _45;
_47 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = &_41->next;
_50 = *_49;
_51 = ((frost$core$Object*) _50);
frost$core$Frost$unref$frost$core$Object$Q(_51);
_53 = &_41->next;
*_53 = _46;
_55 = ((frost$core$Object*) _42);
frost$core$Frost$unref$frost$core$Object$Q(_55);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:50
_58 = &param0->tail;
_59 = *_58;
_60 = _59 != NULL;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block8; else goto block9;
block9:;
_64 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _64, &$s6);
abort(); // unreachable
block8:;
_67 = _59;
_68 = &_67->next;
_69 = *_68;
_70 = _69;
_71 = ((frost$core$Object*) _70);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = &param0->tail;
_74 = *_73;
_75 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_75);
_77 = &param0->tail;
*_77 = _70;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:53
_82 = &param0->count;
_83 = *_82;
_84 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from UnsafeMessageQueue.frost:53:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_87 = _83.value;
_88 = _84.value;
_89 = _87 == _88;
_90 = (frost$core$Bit) {_89};
_92 = _90.value;
if (_92) goto block11; else goto block12;
block12:;
_94 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _94);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:54
_98 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(sizeof(frost$unsafe$UnsafeMessageQueue$Message), (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
_99 = param1;
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T(_98, _99);
_101 = _98;
_102 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_102);
_104 = &param0->head;
_105 = *_104;
_106 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_106);
_108 = &param0->head;
*_108 = _101;
_110 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_110);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:55
_113 = &param0->head;
_114 = *_113;
_115 = ((frost$core$Object*) _114);
frost$core$Frost$ref$frost$core$Object$Q(_115);
_117 = &param0->tail;
_118 = *_117;
_119 = ((frost$core$Object*) _118);
frost$core$Frost$unref$frost$core$Object$Q(_119);
_121 = &param0->tail;
*_121 = _114;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:57
_125 = &param0->count;
_126 = *_125;
_127 = (frost$core$Int) {1u};
_128 = _126.value;
_129 = _127.value;
_130 = _128 + _129;
_131 = (frost$core$Int) {_130};
_132 = &param0->count;
*_132 = _131;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:58
_135 = &param0->notifier;
_136 = *_135;
frost$threads$Notifier$notify(_136);
_138 = *(&local0);
_139 = ((frost$core$Object*) _138);
frost$core$Frost$unref$frost$core$Object$Q(_139);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int(void* rawSelf) {
frost$unsafe$UnsafeMessageQueue* param0 = (frost$unsafe$UnsafeMessageQueue*) rawSelf;

frost$threads$ScopedLock* local0 = NULL;
frost$threads$ScopedLock* _1;
frost$threads$Lock** _2;
frost$threads$Lock* _3;
frost$core$Object* _6;
frost$threads$ScopedLock* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$core$Int* _15;
frost$core$Int _16;
frost$threads$ScopedLock* _17;
frost$core$Object* _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
_1 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_2 = &param0->lock;
_3 = *_2;
frost$threads$ScopedLock$init$frost$threads$Lock(_1, _3);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
_15 = &param0->count;
_16 = *_15;
_17 = *(&local0);
_18 = ((frost$core$Object*) _17);
frost$core$Frost$unref$frost$core$Object$Q(_18);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return _16;

}
frost$core$Bit frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(void* rawSelf) {
frost$unsafe$UnsafeMessageQueue* param0 = (frost$unsafe$UnsafeMessageQueue*) rawSelf;

frost$threads$ScopedLock* local0 = NULL;
frost$threads$ScopedLock* _3;
frost$threads$Lock** _4;
frost$threads$Lock* _5;
frost$core$Object* _8;
frost$threads$ScopedLock* _10;
frost$core$Object* _11;
frost$core$Object* _14;
frost$core$Int* _17;
frost$core$Int _18;
frost$threads$ScopedLock* _19;
frost$core$Object* _20;
frost$core$Int _24;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:83
// begin inline call to method frost.unsafe.UnsafeMessageQueue.pendingMessages():frost.core.Int from UnsafeMessageQueue.frost:83:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
_3 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_4 = &param0->lock;
_5 = *_4;
frost$threads$ScopedLock$init$frost$threads$Lock(_3, _5);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_8 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_8);
_10 = *(&local0);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
*(&local0) = _3;
_14 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_14);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
_17 = &param0->count;
_18 = *_17;
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_24 = (frost$core$Int) {0u};
_25 = _18.value;
_26 = _24.value;
_27 = _25 > _26;
_28 = (frost$core$Bit) {_27};
return _28;

}
frost$core$Object* frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(void* rawSelf) {
frost$unsafe$UnsafeMessageQueue* param0 = (frost$unsafe$UnsafeMessageQueue*) rawSelf;

frost$threads$ScopedLock* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$threads$ScopedLock* _1;
frost$threads$Lock** _2;
frost$threads$Lock* _3;
frost$core$Object* _6;
frost$threads$ScopedLock* _8;
frost$core$Object* _9;
frost$core$Object* _12;
frost$unsafe$UnsafeMessageQueue$Message** _16;
frost$unsafe$UnsafeMessageQueue$Message* _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$threads$Notifier** _23;
frost$threads$Notifier* _24;
frost$unsafe$UnsafeMessageQueue$Message** _28;
frost$unsafe$UnsafeMessageQueue$Message* _29;
bool _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _34;
frost$unsafe$UnsafeMessageQueue$Message* _37;
frost$core$Object** _38;
frost$core$Object* _39;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _45;
frost$unsafe$UnsafeMessageQueue$Message** _49;
frost$unsafe$UnsafeMessageQueue$Message* _50;
bool _51;
frost$core$Bit _52;
bool _53;
frost$core$Int _55;
frost$unsafe$UnsafeMessageQueue$Message* _58;
frost$unsafe$UnsafeMessageQueue$Message** _59;
frost$unsafe$UnsafeMessageQueue$Message* _60;
frost$unsafe$UnsafeMessageQueue$Message* _61;
frost$core$Object* _62;
frost$unsafe$UnsafeMessageQueue$Message** _64;
frost$unsafe$UnsafeMessageQueue$Message* _65;
frost$core$Object* _66;
frost$unsafe$UnsafeMessageQueue$Message** _68;
frost$unsafe$UnsafeMessageQueue$Message** _71;
frost$unsafe$UnsafeMessageQueue$Message* _72;
bool _73;
frost$core$Bit _74;
bool _75;
frost$core$Object* _78;
frost$unsafe$UnsafeMessageQueue$Message** _80;
frost$unsafe$UnsafeMessageQueue$Message* _81;
frost$core$Object* _82;
frost$unsafe$UnsafeMessageQueue$Message** _84;
frost$core$Int* _88;
frost$core$Int _89;
frost$core$Int _90;
int64_t _91;
int64_t _92;
int64_t _93;
frost$core$Int _94;
frost$core$Int* _95;
frost$core$Object* _98;
frost$core$Object* _99;
frost$core$Object* _101;
frost$core$Object* _102;
frost$threads$ScopedLock* _105;
frost$core$Object* _106;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:93
_1 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_2 = &param0->lock;
_3 = *_2;
frost$threads$ScopedLock$init$frost$threads$Lock(_1, _3);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = *(&local0);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
*(&local0) = _1;
_12 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:94
goto block1;
block1:;
_16 = &param0->head;
_17 = *_16;
_18 = _17 == NULL;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:95
_23 = &param0->notifier;
_24 = *_23;
frost$threads$Notifier$wait(_24);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:97
_28 = &param0->head;
_29 = *_28;
_30 = _29 != NULL;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block4; else goto block5;
block5:;
_34 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _34, &$s9);
abort(); // unreachable
block4:;
_37 = _29;
_38 = &_37->payload;
_39 = *_38;
_40 = _39;
*(&local1) = ((frost$core$Object*) NULL);
_42 = _40;
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = *(&local1);
_45 = _44;
frost$core$Frost$unref$frost$core$Object$Q(_45);
*(&local1) = _40;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:98
_49 = &param0->head;
_50 = *_49;
_51 = _50 != NULL;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block6; else goto block7;
block7:;
_55 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _55, &$s11);
abort(); // unreachable
block6:;
_58 = _50;
_59 = &_58->next;
_60 = *_59;
_61 = _60;
_62 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_62);
_64 = &param0->head;
_65 = *_64;
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
_68 = &param0->head;
*_68 = _61;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:99
_71 = &param0->head;
_72 = *_71;
_73 = _72 == NULL;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:100
_78 = ((frost$core$Object*) ((frost$unsafe$UnsafeMessageQueue$Message*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = &param0->tail;
_81 = *_80;
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = &param0->tail;
*_84 = ((frost$unsafe$UnsafeMessageQueue$Message*) NULL);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:102
_88 = &param0->count;
_89 = *_88;
_90 = (frost$core$Int) {1u};
_91 = _89.value;
_92 = _90.value;
_93 = _91 - _92;
_94 = (frost$core$Int) {_93};
_95 = &param0->count;
*_95 = _94;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:103
_98 = *(&local1);
_99 = _98;
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local1);
_102 = _101;
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local1) = ((frost$core$Object*) NULL);
_105 = *(&local0);
_106 = ((frost$core$Object*) _105);
frost$core$Frost$unref$frost$core$Object$Q(_106);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return _98;

}
void frost$unsafe$UnsafeMessageQueue$clear(void* rawSelf) {
frost$unsafe$UnsafeMessageQueue* param0 = (frost$unsafe$UnsafeMessageQueue*) rawSelf;

frost$threads$ScopedLock* local0 = NULL;
frost$threads$ScopedLock* _6;
frost$threads$Lock** _7;
frost$threads$Lock* _8;
frost$core$Object* _11;
frost$threads$ScopedLock* _13;
frost$core$Object* _14;
frost$core$Object* _17;
frost$core$Int* _20;
frost$core$Int _21;
frost$threads$ScopedLock* _22;
frost$core$Object* _23;
frost$core$Int _27;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _33;
frost$core$Object* _36;
frost$core$Object* _37;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:110
goto block1;
block1:;
// begin inline call to method frost.unsafe.UnsafeMessageQueue.hasMessage():frost.core.Bit from UnsafeMessageQueue.frost:110:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:83
// begin inline call to method frost.unsafe.UnsafeMessageQueue.pendingMessages():frost.core.Int from UnsafeMessageQueue.frost:83:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
_6 = (frost$threads$ScopedLock*) frostObjectAlloc(sizeof(frost$threads$ScopedLock), (frost$core$Class*) &frost$threads$ScopedLock$class);
_7 = &param0->lock;
_8 = *_7;
frost$threads$ScopedLock$init$frost$threads$Lock(_6, _8);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_11 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = *(&local0);
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
*(&local0) = _6;
_17 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_17);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
_20 = &param0->count;
_21 = *_20;
_22 = *(&local0);
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_27 = (frost$core$Int) {0u};
_28 = _21.value;
_29 = _27.value;
_30 = _28 > _29;
_31 = (frost$core$Bit) {_30};
_33 = _31.value;
if (_33) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:111
_36 = frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(param0);
_37 = _36;
frost$core$Frost$unref$frost$core$Object$Q(_37);
goto block1;
block3:;
return;

}
void frost$unsafe$UnsafeMessageQueue$init(void* rawSelf) {
frost$unsafe$UnsafeMessageQueue* param0 = (frost$unsafe$UnsafeMessageQueue*) rawSelf;

frost$threads$Lock* _1;
frost$core$Object* _3;
frost$threads$Lock** _5;
frost$threads$Lock* _6;
frost$core$Object* _7;
frost$threads$Lock** _9;
frost$core$Object* _11;
frost$threads$Notifier* _14;
frost$threads$Lock** _15;
frost$threads$Lock* _16;
frost$core$Object* _18;
frost$threads$Notifier** _20;
frost$threads$Notifier* _21;
frost$core$Object* _22;
frost$threads$Notifier** _24;
frost$core$Object* _26;
frost$core$Int _29;
frost$core$Int* _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:26
_1 = (frost$threads$Lock*) frostObjectAlloc(sizeof(frost$threads$Lock), (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->lock;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->lock;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:29
_14 = (frost$threads$Notifier*) frostObjectAlloc(sizeof(frost$threads$Notifier), (frost$core$Class*) &frost$threads$Notifier$class);
_15 = &param0->lock;
_16 = *_15;
frost$threads$Notifier$init$frost$threads$Lock(_14, _16);
_18 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = &param0->notifier;
_21 = *_20;
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
_24 = &param0->notifier;
*_24 = _14;
_26 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_26);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:32
_29 = (frost$core$Int) {0u};
_30 = &param0->count;
*_30 = _29;
return;

}
void frost$unsafe$UnsafeMessageQueue$cleanup(void* rawSelf) {
frost$unsafe$UnsafeMessageQueue* param0 = (frost$unsafe$UnsafeMessageQueue*) rawSelf;

frost$core$Immutable* _1;
frost$threads$Lock** _3;
frost$threads$Lock* _4;
frost$core$Object* _5;
frost$threads$Notifier** _7;
frost$threads$Notifier* _8;
frost$core$Object* _9;
frost$unsafe$UnsafeMessageQueue$Message** _11;
frost$unsafe$UnsafeMessageQueue$Message* _12;
frost$core$Object* _13;
frost$unsafe$UnsafeMessageQueue$Message** _15;
frost$unsafe$UnsafeMessageQueue$Message* _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:5
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = &param0->lock;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->notifier;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->head;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
_15 = &param0->tail;
_16 = *_15;
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return;

}

