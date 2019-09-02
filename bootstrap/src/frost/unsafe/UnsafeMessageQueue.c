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

void frost$unsafe$UnsafeMessageQueue$post$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0, frost$core$Object* param1) {

frost$threads$ScopedLock* local0 = NULL;
frost$threads$ScopedLock* _1;
frost$unsafe$UnsafeMessageQueue* _2;
frost$threads$Lock** _3;
frost$threads$Lock* _4;
frost$core$Object* _7;
frost$threads$ScopedLock* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$unsafe$UnsafeMessageQueue* _16;
frost$unsafe$UnsafeMessageQueue$Message** _17;
frost$unsafe$UnsafeMessageQueue$Message* _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$unsafe$UnsafeMessageQueue* _24;
frost$unsafe$UnsafeMessageQueue$Message** _25;
frost$unsafe$UnsafeMessageQueue$Message* _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$unsafe$UnsafeMessageQueue* _35;
frost$unsafe$UnsafeMessageQueue$Message** _36;
frost$unsafe$UnsafeMessageQueue$Message* _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$unsafe$UnsafeMessageQueue$Message* _45;
frost$unsafe$UnsafeMessageQueue$Message* _46;
frost$unsafe$UnsafeMessageQueue$Message* _47;
frost$unsafe$UnsafeMessageQueue$Message* _48;
frost$core$Object* _49;
frost$unsafe$UnsafeMessageQueue$Message* _51;
frost$unsafe$UnsafeMessageQueue$Message* _52;
frost$core$Object* _53;
frost$unsafe$UnsafeMessageQueue$Message** _55;
frost$unsafe$UnsafeMessageQueue$Message* _56;
frost$core$Object* _57;
frost$unsafe$UnsafeMessageQueue$Message** _59;
frost$core$Object* _61;
frost$unsafe$UnsafeMessageQueue* _64;
frost$unsafe$UnsafeMessageQueue* _65;
frost$unsafe$UnsafeMessageQueue$Message** _66;
frost$unsafe$UnsafeMessageQueue$Message* _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$core$Int _72;
frost$unsafe$UnsafeMessageQueue$Message* _75;
frost$unsafe$UnsafeMessageQueue$Message* _76;
frost$unsafe$UnsafeMessageQueue$Message** _77;
frost$unsafe$UnsafeMessageQueue$Message* _78;
frost$unsafe$UnsafeMessageQueue$Message* _79;
frost$core$Object* _80;
frost$unsafe$UnsafeMessageQueue$Message** _82;
frost$unsafe$UnsafeMessageQueue$Message* _83;
frost$core$Object* _84;
frost$unsafe$UnsafeMessageQueue$Message** _86;
frost$unsafe$UnsafeMessageQueue* _91;
frost$core$Int* _92;
frost$core$Int _93;
frost$core$Int _94;
int64_t _97;
int64_t _98;
bool _99;
frost$core$Bit _100;
bool _102;
frost$core$Int _104;
frost$unsafe$UnsafeMessageQueue* _108;
frost$unsafe$UnsafeMessageQueue$Message* _109;
frost$unsafe$UnsafeMessageQueue$Message* _110;
frost$core$Object* _111;
frost$unsafe$UnsafeMessageQueue$Message* _113;
frost$core$Object* _114;
frost$unsafe$UnsafeMessageQueue$Message** _116;
frost$unsafe$UnsafeMessageQueue$Message* _117;
frost$core$Object* _118;
frost$unsafe$UnsafeMessageQueue$Message** _120;
frost$core$Object* _122;
frost$unsafe$UnsafeMessageQueue* _125;
frost$unsafe$UnsafeMessageQueue* _126;
frost$unsafe$UnsafeMessageQueue$Message** _127;
frost$unsafe$UnsafeMessageQueue$Message* _128;
frost$core$Object* _129;
frost$unsafe$UnsafeMessageQueue$Message** _131;
frost$unsafe$UnsafeMessageQueue$Message* _132;
frost$core$Object* _133;
frost$unsafe$UnsafeMessageQueue$Message** _135;
frost$unsafe$UnsafeMessageQueue* _139;
frost$core$Int* _140;
frost$core$Int _141;
frost$core$Int _142;
int64_t _143;
int64_t _144;
int64_t _145;
frost$core$Int _146;
frost$core$Int* _147;
frost$unsafe$UnsafeMessageQueue* _150;
frost$threads$Notifier** _151;
frost$threads$Notifier* _152;
frost$threads$ScopedLock* _154;
frost$core$Object* _155;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:46
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_1 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_2 = param0;
_3 = &_2->lock;
_4 = *_3;
frost$threads$ScopedLock$init$frost$threads$Lock(_1, _4);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:47
_16 = param0;
_17 = &_16->tail;
_18 = *_17;
_19 = _18 != NULL;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:48
_24 = param0;
_25 = &_24->head;
_26 = *_25;
_27 = _26 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block4; else goto block5;
block5:;
_31 = (frost$core$Int) {48u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _31);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:49
_35 = param0;
_36 = &_35->tail;
_37 = *_36;
_38 = _37 != NULL;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block6; else goto block7;
block7:;
_42 = (frost$core$Int) {49u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _42, &$s4);
abort(); // unreachable
block6:;
_45 = _37;
_46 = _45;
FROST_ASSERT(32 == sizeof(frost$unsafe$UnsafeMessageQueue$Message));
_47 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
_48 = _47;
_49 = param1;
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T(_48, _49);
_51 = _47;
_52 = _51;
_53 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_53);
_55 = &_46->next;
_56 = *_55;
_57 = ((frost$core$Object*) _56);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = &_46->next;
*_59 = _52;
_61 = ((frost$core$Object*) _47);
frost$core$Frost$unref$frost$core$Object$Q(_61);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:50
_64 = param0;
_65 = param0;
_66 = &_65->tail;
_67 = *_66;
_68 = _67 != NULL;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block8; else goto block9;
block9:;
_72 = (frost$core$Int) {50u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _72, &$s6);
abort(); // unreachable
block8:;
_75 = _67;
_76 = _75;
_77 = &_76->next;
_78 = *_77;
_79 = _78;
_80 = ((frost$core$Object*) _79);
frost$core$Frost$ref$frost$core$Object$Q(_80);
_82 = &_64->tail;
_83 = *_82;
_84 = ((frost$core$Object*) _83);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = &_64->tail;
*_86 = _79;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:53
_91 = param0;
_92 = &_91->count;
_93 = *_92;
_94 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from UnsafeMessageQueue.frost:53:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_97 = _93.value;
_98 = _94.value;
_99 = _97 == _98;
_100 = (frost$core$Bit) {_99};
_102 = _100.value;
if (_102) goto block11; else goto block12;
block12:;
_104 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _104);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:54
_108 = param0;
FROST_ASSERT(32 == sizeof(frost$unsafe$UnsafeMessageQueue$Message));
_109 = (frost$unsafe$UnsafeMessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$unsafe$UnsafeMessageQueue$Message$class);
_110 = _109;
_111 = param1;
frost$unsafe$UnsafeMessageQueue$Message$init$frost$unsafe$UnsafeMessageQueue$Message$T(_110, _111);
_113 = _109;
_114 = ((frost$core$Object*) _113);
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = &_108->head;
_117 = *_116;
_118 = ((frost$core$Object*) _117);
frost$core$Frost$unref$frost$core$Object$Q(_118);
_120 = &_108->head;
*_120 = _113;
_122 = ((frost$core$Object*) _109);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:55
_125 = param0;
_126 = param0;
_127 = &_126->head;
_128 = *_127;
_129 = ((frost$core$Object*) _128);
frost$core$Frost$ref$frost$core$Object$Q(_129);
_131 = &_125->tail;
_132 = *_131;
_133 = ((frost$core$Object*) _132);
frost$core$Frost$unref$frost$core$Object$Q(_133);
_135 = &_125->tail;
*_135 = _128;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:57
_139 = param0;
_140 = &_139->count;
_141 = *_140;
_142 = (frost$core$Int) {1u};
_143 = _141.value;
_144 = _142.value;
_145 = _143 + _144;
_146 = (frost$core$Int) {_145};
_147 = &_139->count;
*_147 = _146;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:58
_150 = param0;
_151 = &_150->notifier;
_152 = *_151;
frost$threads$Notifier$notify(_152);
_154 = *(&local0);
_155 = ((frost$core$Object*) _154);
frost$core$Frost$unref$frost$core$Object$Q(_155);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int frost$unsafe$UnsafeMessageQueue$pendingMessages$R$frost$core$Int(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$threads$ScopedLock* _1;
frost$unsafe$UnsafeMessageQueue* _2;
frost$threads$Lock** _3;
frost$threads$Lock* _4;
frost$core$Object* _7;
frost$threads$ScopedLock* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$unsafe$UnsafeMessageQueue* _16;
frost$core$Int* _17;
frost$core$Int _18;
frost$threads$ScopedLock* _19;
frost$core$Object* _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_1 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_2 = param0;
_3 = &_2->lock;
_4 = *_3;
frost$threads$ScopedLock$init$frost$threads$Lock(_1, _4);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
_16 = param0;
_17 = &_16->count;
_18 = *_17;
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return _18;

}
frost$core$Bit frost$unsafe$UnsafeMessageQueue$hasMessage$R$frost$core$Bit(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$unsafe$UnsafeMessageQueue* _1;
frost$threads$ScopedLock* _4;
frost$threads$Lock** _5;
frost$threads$Lock* _6;
frost$core$Object* _9;
frost$threads$ScopedLock* _11;
frost$core$Object* _12;
frost$core$Object* _15;
frost$core$Int* _18;
frost$core$Int _19;
frost$threads$ScopedLock* _20;
frost$core$Object* _21;
frost$core$Int _25;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:83
_1 = param0;
// begin inline call to method frost.unsafe.UnsafeMessageQueue.pendingMessages():frost.core.Int from UnsafeMessageQueue.frost:83:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_4 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_5 = &_1->lock;
_6 = *_5;
frost$threads$ScopedLock$init$frost$threads$Lock(_4, _6);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_9 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = *(&local0);
_12 = ((frost$core$Object*) _11);
frost$core$Frost$unref$frost$core$Object$Q(_12);
*(&local0) = _4;
_15 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_15);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
_18 = &_1->count;
_19 = *_18;
_20 = *(&local0);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_25 = (frost$core$Int) {0u};
_26 = _19.value;
_27 = _25.value;
_28 = _26 > _27;
_29 = (frost$core$Bit) {_28};
return _29;

}
frost$core$Object* frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Object* local1 = NULL;
frost$threads$ScopedLock* _1;
frost$unsafe$UnsafeMessageQueue* _2;
frost$threads$Lock** _3;
frost$threads$Lock* _4;
frost$core$Object* _7;
frost$threads$ScopedLock* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$unsafe$UnsafeMessageQueue* _17;
frost$unsafe$UnsafeMessageQueue$Message** _18;
frost$unsafe$UnsafeMessageQueue$Message* _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$unsafe$UnsafeMessageQueue* _25;
frost$threads$Notifier** _26;
frost$threads$Notifier* _27;
frost$unsafe$UnsafeMessageQueue* _31;
frost$unsafe$UnsafeMessageQueue$Message** _32;
frost$unsafe$UnsafeMessageQueue$Message* _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _38;
frost$unsafe$UnsafeMessageQueue$Message* _41;
frost$core$Object** _42;
frost$core$Object* _43;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
frost$core$Object* _49;
frost$unsafe$UnsafeMessageQueue* _53;
frost$unsafe$UnsafeMessageQueue* _54;
frost$unsafe$UnsafeMessageQueue$Message** _55;
frost$unsafe$UnsafeMessageQueue$Message* _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Int _61;
frost$unsafe$UnsafeMessageQueue$Message* _64;
frost$unsafe$UnsafeMessageQueue$Message** _65;
frost$unsafe$UnsafeMessageQueue$Message* _66;
frost$unsafe$UnsafeMessageQueue$Message* _67;
frost$core$Object* _68;
frost$unsafe$UnsafeMessageQueue$Message** _70;
frost$unsafe$UnsafeMessageQueue$Message* _71;
frost$core$Object* _72;
frost$unsafe$UnsafeMessageQueue$Message** _74;
frost$unsafe$UnsafeMessageQueue* _77;
frost$unsafe$UnsafeMessageQueue$Message** _78;
frost$unsafe$UnsafeMessageQueue$Message* _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$unsafe$UnsafeMessageQueue* _85;
frost$core$Object* _86;
frost$unsafe$UnsafeMessageQueue$Message** _88;
frost$unsafe$UnsafeMessageQueue$Message* _89;
frost$core$Object* _90;
frost$unsafe$UnsafeMessageQueue$Message** _92;
frost$unsafe$UnsafeMessageQueue* _96;
frost$core$Int* _97;
frost$core$Int _98;
frost$core$Int _99;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
frost$core$Int* _104;
frost$core$Object* _107;
frost$core$Object* _108;
frost$core$Object* _110;
frost$core$Object* _111;
frost$threads$ScopedLock* _114;
frost$core$Object* _115;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:93
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_1 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_2 = param0;
_3 = &_2->lock;
_4 = *_3;
frost$threads$ScopedLock$init$frost$threads$Lock(_1, _4);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_7 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = *(&local0);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_10);
*(&local0) = _1;
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:94
goto block1;
block1:;
_17 = param0;
_18 = &_17->head;
_19 = *_18;
_20 = _19 == NULL;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:95
_25 = param0;
_26 = &_25->notifier;
_27 = *_26;
frost$threads$Notifier$wait(_27);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:97
_31 = param0;
_32 = &_31->head;
_33 = *_32;
_34 = _33 != NULL;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block4; else goto block5;
block5:;
_38 = (frost$core$Int) {97u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _38, &$s9);
abort(); // unreachable
block4:;
_41 = _33;
_42 = &_41->payload;
_43 = *_42;
_44 = _43;
*(&local1) = ((frost$core$Object*) NULL);
_46 = _44;
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local1);
_49 = _48;
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:98
_53 = param0;
_54 = param0;
_55 = &_54->head;
_56 = *_55;
_57 = _56 != NULL;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block6; else goto block7;
block7:;
_61 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _61, &$s11);
abort(); // unreachable
block6:;
_64 = _56;
_65 = &_64->next;
_66 = *_65;
_67 = _66;
_68 = ((frost$core$Object*) _67);
frost$core$Frost$ref$frost$core$Object$Q(_68);
_70 = &_53->head;
_71 = *_70;
_72 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_72);
_74 = &_53->head;
*_74 = _67;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:99
_77 = param0;
_78 = &_77->head;
_79 = *_78;
_80 = _79 == NULL;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:100
_85 = param0;
_86 = ((frost$core$Object*) ((frost$unsafe$UnsafeMessageQueue$Message*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = &_85->tail;
_89 = *_88;
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = &_85->tail;
*_92 = ((frost$unsafe$UnsafeMessageQueue$Message*) NULL);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:102
_96 = param0;
_97 = &_96->count;
_98 = *_97;
_99 = (frost$core$Int) {1u};
_100 = _98.value;
_101 = _99.value;
_102 = _100 - _101;
_103 = (frost$core$Int) {_102};
_104 = &_96->count;
*_104 = _103;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:103
_107 = *(&local1);
_108 = _107;
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = *(&local1);
_111 = _110;
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local1) = ((frost$core$Object*) NULL);
_114 = *(&local0);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return _107;

}
void frost$unsafe$UnsafeMessageQueue$clear(frost$unsafe$UnsafeMessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$unsafe$UnsafeMessageQueue* _2;
frost$threads$ScopedLock* _7;
frost$threads$Lock** _8;
frost$threads$Lock* _9;
frost$core$Object* _12;
frost$threads$ScopedLock* _14;
frost$core$Object* _15;
frost$core$Object* _18;
frost$core$Int* _21;
frost$core$Int _22;
frost$threads$ScopedLock* _23;
frost$core$Object* _24;
frost$core$Int _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _34;
frost$unsafe$UnsafeMessageQueue* _37;
frost$core$Object* _38;
frost$core$Object* _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:110
goto block1;
block1:;
_2 = param0;
// begin inline call to method frost.unsafe.UnsafeMessageQueue.hasMessage():frost.core.Bit from UnsafeMessageQueue.frost:110:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:83
// begin inline call to method frost.unsafe.UnsafeMessageQueue.pendingMessages():frost.core.Int from UnsafeMessageQueue.frost:83:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:70
FROST_ASSERT(24 == sizeof(frost$threads$ScopedLock));
_7 = (frost$threads$ScopedLock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$ScopedLock$class);
_8 = &_2->lock;
_9 = *_8;
frost$threads$ScopedLock$init$frost$threads$Lock(_7, _9);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_12 = ((frost$core$Object*) _7);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = *(&local0);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_15);
*(&local0) = _7;
_18 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_18);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:71
_21 = &_2->count;
_22 = *_21;
_23 = *(&local0);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
_28 = (frost$core$Int) {0u};
_29 = _22.value;
_30 = _28.value;
_31 = _29 > _30;
_32 = (frost$core$Bit) {_31};
_34 = _32.value;
if (_34) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:111
_37 = param0;
_38 = frost$unsafe$UnsafeMessageQueue$getMessage$R$frost$unsafe$UnsafeMessageQueue$T(_37);
_39 = _38;
frost$core$Frost$unref$frost$core$Object$Q(_39);
goto block1;
block3:;
return;

}
void frost$unsafe$UnsafeMessageQueue$init(frost$unsafe$UnsafeMessageQueue* param0) {

frost$unsafe$UnsafeMessageQueue* _1;
frost$threads$Lock* _2;
frost$core$Object* _4;
frost$threads$Lock** _6;
frost$threads$Lock* _7;
frost$core$Object* _8;
frost$threads$Lock** _10;
frost$core$Object* _12;
frost$unsafe$UnsafeMessageQueue* _15;
frost$threads$Notifier* _16;
frost$unsafe$UnsafeMessageQueue* _17;
frost$threads$Lock** _18;
frost$threads$Lock* _19;
frost$core$Object* _21;
frost$threads$Notifier** _23;
frost$threads$Notifier* _24;
frost$core$Object* _25;
frost$threads$Notifier** _27;
frost$core$Object* _29;
frost$unsafe$UnsafeMessageQueue* _32;
frost$core$Int _33;
frost$core$Int* _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:26
_1 = param0;
FROST_ASSERT(24 == sizeof(frost$threads$Lock));
_2 = (frost$threads$Lock*) frostObjectAlloc(24, (frost$core$Class*) &frost$threads$Lock$class);
frost$threads$Lock$init(_2);
_4 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = &_1->lock;
_7 = *_6;
_8 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = &_1->lock;
*_10 = _2;
_12 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_12);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:29
_15 = param0;
FROST_ASSERT(32 == sizeof(frost$threads$Notifier));
_16 = (frost$threads$Notifier*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$Notifier$class);
_17 = param0;
_18 = &_17->lock;
_19 = *_18;
frost$threads$Notifier$init$frost$threads$Lock(_16, _19);
_21 = ((frost$core$Object*) _16);
frost$core$Frost$ref$frost$core$Object$Q(_21);
_23 = &_15->notifier;
_24 = *_23;
_25 = ((frost$core$Object*) _24);
frost$core$Frost$unref$frost$core$Object$Q(_25);
_27 = &_15->notifier;
*_27 = _16;
_29 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:32
_32 = param0;
_33 = (frost$core$Int) {0u};
_34 = &_32->count;
*_34 = _33;
return;

}
void frost$unsafe$UnsafeMessageQueue$cleanup(frost$unsafe$UnsafeMessageQueue* param0) {

frost$core$Immutable* _1;
frost$unsafe$UnsafeMessageQueue* _3;
frost$threads$Lock** _4;
frost$threads$Lock* _5;
frost$core$Object* _6;
frost$unsafe$UnsafeMessageQueue* _8;
frost$threads$Notifier** _9;
frost$threads$Notifier* _10;
frost$core$Object* _11;
frost$unsafe$UnsafeMessageQueue* _13;
frost$unsafe$UnsafeMessageQueue$Message** _14;
frost$unsafe$UnsafeMessageQueue$Message* _15;
frost$core$Object* _16;
frost$unsafe$UnsafeMessageQueue* _18;
frost$unsafe$UnsafeMessageQueue$Message** _19;
frost$unsafe$UnsafeMessageQueue$Message* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/UnsafeMessageQueue.frost:5
_1 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_1);
_3 = param0;
_4 = &_3->lock;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->notifier;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = param0;
_14 = &_13->head;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = param0;
_19 = &_18->tail;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
return;

}

