#include "frost/threads/MessageQueue.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Object.h"
#include "frost/threads/ScopedLock.h"
#include "frost/threads/Lock.h"
#include "frost/threads/MessageQueue/Message.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/threads/Notifier.h"
#include "frost/core/Frost.h"

__attribute__((weak)) void frost$threads$MessageQueue$cleanup$shim(frost$threads$MessageQueue* p0) {
    frost$threads$MessageQueue$cleanup(p0);

}

static frost$core$String $s1;
frost$threads$MessageQueue$class_type frost$threads$MessageQueue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$threads$MessageQueue$cleanup$shim, frost$threads$MessageQueue$post$frost$threads$MessageQueue$T, frost$threads$MessageQueue$pendingMessages$R$frost$core$Int, frost$threads$MessageQueue$hasMessage$R$frost$core$Bit, frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T, frost$threads$MessageQueue$clear} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65", 26, -1322360647885131030, NULL };
static frost$core$String $s2 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 137, 803317612360616006, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 137, 803317612360616006, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 137, 803317612360616006, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x66\x72\x6f\x73\x74", 18, 2720112594057563771, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x54\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x74\x68\x72\x65\x61\x64\x73\x2e\x4d\x65\x73\x73\x61\x67\x65\x51\x75\x65\x75\x65\x2e\x4d\x65\x73\x73\x61\x67\x65", 137, 803317612360616006, NULL };

void frost$threads$MessageQueue$post$frost$threads$MessageQueue$T(frost$threads$MessageQueue* param0, frost$core$Immutable* param1) {

frost$threads$ScopedLock* local0 = NULL;
frost$threads$ScopedLock* _1;
frost$threads$MessageQueue* _2;
frost$threads$Lock** _3;
frost$threads$Lock* _4;
frost$core$Object* _7;
frost$threads$ScopedLock* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$threads$MessageQueue* _16;
frost$threads$MessageQueue$Message** _17;
frost$threads$MessageQueue$Message* _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$threads$MessageQueue* _24;
frost$threads$MessageQueue$Message** _25;
frost$threads$MessageQueue$Message* _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$threads$MessageQueue* _35;
frost$threads$MessageQueue$Message** _36;
frost$threads$MessageQueue$Message* _37;
bool _38;
frost$core$Bit _39;
bool _40;
frost$core$Int _42;
frost$threads$MessageQueue$Message* _45;
frost$threads$MessageQueue$Message* _46;
frost$threads$MessageQueue$Message* _47;
frost$core$Immutable* _48;
frost$threads$MessageQueue$Message* _50;
frost$threads$MessageQueue$Message* _51;
frost$core$Object* _52;
frost$threads$MessageQueue$Message** _54;
frost$threads$MessageQueue$Message* _55;
frost$core$Object* _56;
frost$threads$MessageQueue$Message** _58;
frost$core$Object* _60;
frost$threads$MessageQueue* _63;
frost$threads$MessageQueue* _64;
frost$threads$MessageQueue$Message** _65;
frost$threads$MessageQueue$Message* _66;
bool _67;
frost$core$Bit _68;
bool _69;
frost$core$Int _71;
frost$threads$MessageQueue$Message* _74;
frost$threads$MessageQueue$Message** _75;
frost$threads$MessageQueue$Message* _76;
frost$threads$MessageQueue$Message* _77;
frost$core$Object* _78;
frost$threads$MessageQueue$Message** _80;
frost$threads$MessageQueue$Message* _81;
frost$core$Object* _82;
frost$threads$MessageQueue$Message** _84;
frost$threads$MessageQueue* _89;
frost$core$Int* _90;
frost$core$Int _91;
frost$core$Int _92;
int64_t _95;
int64_t _96;
bool _97;
frost$core$Bit _98;
bool _100;
frost$core$Int _102;
frost$threads$MessageQueue* _106;
frost$threads$MessageQueue$Message* _107;
frost$threads$MessageQueue$Message* _108;
frost$core$Immutable* _109;
frost$threads$MessageQueue$Message* _111;
frost$core$Object* _112;
frost$threads$MessageQueue$Message** _114;
frost$threads$MessageQueue$Message* _115;
frost$core$Object* _116;
frost$threads$MessageQueue$Message** _118;
frost$core$Object* _120;
frost$threads$MessageQueue* _123;
frost$threads$MessageQueue* _124;
frost$threads$MessageQueue$Message** _125;
frost$threads$MessageQueue$Message* _126;
frost$core$Object* _127;
frost$threads$MessageQueue$Message** _129;
frost$threads$MessageQueue$Message* _130;
frost$core$Object* _131;
frost$threads$MessageQueue$Message** _133;
frost$threads$MessageQueue* _137;
frost$core$Int* _138;
frost$core$Int _139;
frost$core$Int _140;
int64_t _141;
int64_t _142;
int64_t _143;
frost$core$Int _144;
frost$core$Int* _145;
frost$threads$MessageQueue* _148;
frost$threads$Notifier** _149;
frost$threads$Notifier* _150;
frost$threads$ScopedLock* _152;
frost$core$Object* _153;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:52
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:53
_16 = param0;
_17 = &_16->tail;
_18 = *_17;
_19 = _18 != NULL;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:54
_24 = param0;
_25 = &_24->head;
_26 = *_25;
_27 = _26 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block4; else goto block5;
block5:;
_31 = (frost$core$Int) {54u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s2, _31);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:55
_35 = param0;
_36 = &_35->tail;
_37 = *_36;
_38 = _37 != NULL;
_39 = (frost$core$Bit) {_38};
_40 = _39.value;
if (_40) goto block6; else goto block7;
block7:;
_42 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _42, &$s4);
abort(); // unreachable
block6:;
_45 = _37;
FROST_ASSERT(32 == sizeof(frost$threads$MessageQueue$Message));
_46 = (frost$threads$MessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$MessageQueue$Message$class);
_47 = _46;
_48 = param1;
frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T(_47, _48);
_50 = _46;
_51 = _50;
_52 = ((frost$core$Object*) _50);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = &_45->next;
_55 = *_54;
_56 = ((frost$core$Object*) _55);
frost$core$Frost$unref$frost$core$Object$Q(_56);
_58 = &_45->next;
*_58 = _51;
_60 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_60);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:56
_63 = param0;
_64 = param0;
_65 = &_64->tail;
_66 = *_65;
_67 = _66 != NULL;
_68 = (frost$core$Bit) {_67};
_69 = _68.value;
if (_69) goto block8; else goto block9;
block9:;
_71 = (frost$core$Int) {56u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _71, &$s6);
abort(); // unreachable
block8:;
_74 = _66;
_75 = &_74->next;
_76 = *_75;
_77 = _76;
_78 = ((frost$core$Object*) _77);
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = &_63->tail;
_81 = *_80;
_82 = ((frost$core$Object*) _81);
frost$core$Frost$unref$frost$core$Object$Q(_82);
_84 = &_63->tail;
*_84 = _77;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:59
_89 = param0;
_90 = &_89->count;
_91 = *_90;
_92 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from MessageQueue.frost:59:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_95 = _91.value;
_96 = _92.value;
_97 = _95 == _96;
_98 = (frost$core$Bit) {_97};
_100 = _98.value;
if (_100) goto block11; else goto block12;
block12:;
_102 = (frost$core$Int) {59u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s7, _102);
abort(); // unreachable
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:60
_106 = param0;
FROST_ASSERT(32 == sizeof(frost$threads$MessageQueue$Message));
_107 = (frost$threads$MessageQueue$Message*) frostObjectAlloc(32, (frost$core$Class*) &frost$threads$MessageQueue$Message$class);
_108 = _107;
_109 = param1;
frost$threads$MessageQueue$Message$init$frost$threads$MessageQueue$Message$T(_108, _109);
_111 = _107;
_112 = ((frost$core$Object*) _111);
frost$core$Frost$ref$frost$core$Object$Q(_112);
_114 = &_106->head;
_115 = *_114;
_116 = ((frost$core$Object*) _115);
frost$core$Frost$unref$frost$core$Object$Q(_116);
_118 = &_106->head;
*_118 = _111;
_120 = ((frost$core$Object*) _107);
frost$core$Frost$unref$frost$core$Object$Q(_120);
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:61
_123 = param0;
_124 = param0;
_125 = &_124->head;
_126 = *_125;
_127 = ((frost$core$Object*) _126);
frost$core$Frost$ref$frost$core$Object$Q(_127);
_129 = &_123->tail;
_130 = *_129;
_131 = ((frost$core$Object*) _130);
frost$core$Frost$unref$frost$core$Object$Q(_131);
_133 = &_123->tail;
*_133 = _126;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:63
_137 = param0;
_138 = &_137->count;
_139 = *_138;
_140 = (frost$core$Int) {1u};
_141 = _139.value;
_142 = _140.value;
_143 = _141 + _142;
_144 = (frost$core$Int) {_143};
_145 = &_137->count;
*_145 = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:64
_148 = param0;
_149 = &_148->notifier;
_150 = *_149;
frost$threads$Notifier$notify(_150);
_152 = *(&local0);
_153 = ((frost$core$Object*) _152);
frost$core$Frost$unref$frost$core$Object$Q(_153);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return;

}
frost$core$Int frost$threads$MessageQueue$pendingMessages$R$frost$core$Int(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$threads$ScopedLock* _1;
frost$threads$MessageQueue* _2;
frost$threads$Lock** _3;
frost$threads$Lock* _4;
frost$core$Object* _7;
frost$threads$ScopedLock* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$threads$MessageQueue* _16;
frost$core$Int* _17;
frost$core$Int _18;
frost$threads$ScopedLock* _19;
frost$core$Object* _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
_16 = param0;
_17 = &_16->count;
_18 = *_17;
_19 = *(&local0);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return _18;

}
frost$core$Bit frost$threads$MessageQueue$hasMessage$R$frost$core$Bit(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$threads$MessageQueue* _1;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
_1 = param0;
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
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
frost$core$Immutable* frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$core$Immutable* local1 = NULL;
frost$threads$ScopedLock* _1;
frost$threads$MessageQueue* _2;
frost$threads$Lock** _3;
frost$threads$Lock* _4;
frost$core$Object* _7;
frost$threads$ScopedLock* _9;
frost$core$Object* _10;
frost$core$Object* _13;
frost$threads$MessageQueue* _17;
frost$threads$MessageQueue$Message** _18;
frost$threads$MessageQueue$Message* _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$threads$MessageQueue* _25;
frost$threads$Notifier** _26;
frost$threads$Notifier* _27;
frost$threads$MessageQueue* _31;
frost$threads$MessageQueue$Message** _32;
frost$threads$MessageQueue$Message* _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _38;
frost$threads$MessageQueue$Message* _41;
frost$core$Immutable** _42;
frost$core$Immutable* _43;
frost$core$Immutable* _44;
frost$core$Object* _46;
frost$core$Immutable* _48;
frost$core$Object* _49;
frost$threads$MessageQueue* _53;
frost$threads$MessageQueue* _54;
frost$threads$MessageQueue$Message** _55;
frost$threads$MessageQueue$Message* _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Int _61;
frost$threads$MessageQueue$Message* _64;
frost$threads$MessageQueue$Message** _65;
frost$threads$MessageQueue$Message* _66;
frost$threads$MessageQueue$Message* _67;
frost$core$Object* _68;
frost$threads$MessageQueue$Message** _70;
frost$threads$MessageQueue$Message* _71;
frost$core$Object* _72;
frost$threads$MessageQueue$Message** _74;
frost$threads$MessageQueue* _77;
frost$threads$MessageQueue$Message** _78;
frost$threads$MessageQueue$Message* _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$threads$MessageQueue* _85;
frost$core$Object* _86;
frost$threads$MessageQueue$Message** _88;
frost$threads$MessageQueue$Message* _89;
frost$core$Object* _90;
frost$threads$MessageQueue$Message** _92;
frost$threads$MessageQueue* _96;
frost$core$Int* _97;
frost$core$Int _98;
frost$core$Int _99;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
frost$core$Int* _104;
frost$core$Immutable* _107;
frost$core$Object* _108;
frost$core$Immutable* _110;
frost$core$Object* _111;
frost$threads$ScopedLock* _114;
frost$core$Object* _115;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:99
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:100
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:101
_25 = param0;
_26 = &_25->notifier;
_27 = *_26;
frost$threads$Notifier$wait(_27);
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:103
_31 = param0;
_32 = &_31->head;
_33 = *_32;
_34 = _33 != NULL;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block4; else goto block5;
block5:;
_38 = (frost$core$Int) {103u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _38, &$s9);
abort(); // unreachable
block4:;
_41 = _33;
_42 = &_41->payload;
_43 = *_42;
_44 = _43;
*(&local1) = ((frost$core$Immutable*) NULL);
_46 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_46);
_48 = *(&local1);
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
*(&local1) = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:104
_53 = param0;
_54 = param0;
_55 = &_54->head;
_56 = *_55;
_57 = _56 != NULL;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block6; else goto block7;
block7:;
_61 = (frost$core$Int) {104u};
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:105
_77 = param0;
_78 = &_77->head;
_79 = *_78;
_80 = _79 == NULL;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:106
_85 = param0;
_86 = ((frost$core$Object*) ((frost$threads$MessageQueue$Message*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = &_85->tail;
_89 = *_88;
_90 = ((frost$core$Object*) _89);
frost$core$Frost$unref$frost$core$Object$Q(_90);
_92 = &_85->tail;
*_92 = ((frost$threads$MessageQueue$Message*) NULL);
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:108
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:109
_107 = *(&local1);
_108 = ((frost$core$Object*) _107);
frost$core$Frost$ref$frost$core$Object$Q(_108);
_110 = *(&local1);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_111);
*(&local1) = ((frost$core$Immutable*) NULL);
_114 = *(&local0);
_115 = ((frost$core$Object*) _114);
frost$core$Frost$unref$frost$core$Object$Q(_115);
*(&local0) = ((frost$threads$ScopedLock*) NULL);
return _107;

}
void frost$threads$MessageQueue$clear(frost$threads$MessageQueue* param0) {

frost$threads$ScopedLock* local0 = NULL;
frost$threads$MessageQueue* _2;
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
frost$threads$MessageQueue* _37;
frost$core$Immutable* _38;
frost$core$Object* _39;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:116
goto block1;
block1:;
_2 = param0;
// begin inline call to method frost.threads.MessageQueue.hasMessage():frost.core.Bit from MessageQueue.frost:116:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:89
// begin inline call to method frost.threads.MessageQueue.pendingMessages():frost.core.Int from MessageQueue.frost:89:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:76
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:77
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:117
_37 = param0;
_38 = frost$threads$MessageQueue$getMessage$R$frost$threads$MessageQueue$T(_37);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
goto block1;
block3:;
return;

}
void frost$threads$MessageQueue$init(frost$threads$MessageQueue* param0) {

frost$threads$MessageQueue* _1;
frost$threads$Lock* _2;
frost$core$Object* _4;
frost$threads$Lock** _6;
frost$threads$Lock* _7;
frost$core$Object* _8;
frost$threads$Lock** _10;
frost$core$Object* _12;
frost$threads$MessageQueue* _15;
frost$threads$Notifier* _16;
frost$threads$MessageQueue* _17;
frost$threads$Lock** _18;
frost$threads$Lock* _19;
frost$core$Object* _21;
frost$threads$Notifier** _23;
frost$threads$Notifier* _24;
frost$core$Object* _25;
frost$threads$Notifier** _27;
frost$core$Object* _29;
frost$threads$MessageQueue* _32;
frost$core$Int _33;
frost$core$Int* _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:32
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:35
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:38
_32 = param0;
_33 = (frost$core$Int) {0u};
_34 = &_32->count;
*_34 = _33;
return;

}
void frost$threads$MessageQueue$cleanup(frost$threads$MessageQueue* param0) {

frost$core$Immutable* _1;
frost$threads$MessageQueue* _3;
frost$threads$Lock** _4;
frost$threads$Lock* _5;
frost$core$Object* _6;
frost$threads$MessageQueue* _8;
frost$threads$Notifier** _9;
frost$threads$Notifier* _10;
frost$core$Object* _11;
frost$threads$MessageQueue* _13;
frost$threads$MessageQueue$Message** _14;
frost$threads$MessageQueue$Message* _15;
frost$core$Object* _16;
frost$threads$MessageQueue* _18;
frost$threads$MessageQueue$Message** _19;
frost$threads$MessageQueue$Message* _20;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/threads/MessageQueue.frost:11
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

