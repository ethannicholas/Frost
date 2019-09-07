#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim(frost$collections$Iterator$RangeIterator* p0) {
    frost$core$Object* result = frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$RangeIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$RangeIterator$class_type frost$collections$Iterator$RangeIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$RangeIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$RangeIterator$cleanup, frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn3)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn18)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn19)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn20)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -7496503432914368729, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x65\x6e\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 238, -2269912078841639166, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, 972743335700786433, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };

void frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(frost$collections$Iterator$RangeIterator* param0, frost$collections$Iterator* param1, frost$core$Int$nullable param2, frost$core$Int$nullable param3, frost$core$Bit param4, frost$core$Int param5) {

frost$core$Int local0;
frost$collections$Iterator$RangeIterator* _1;
frost$core$Bit _2;
frost$core$Bit* _3;
frost$core$Int _5;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _10;
frost$core$Int _12;
frost$collections$Iterator$RangeIterator* _16;
frost$core$Object* _17;
frost$collections$Iterator** _19;
frost$collections$Iterator* _20;
frost$core$Object* _21;
frost$collections$Iterator** _23;
bool _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _36;
frost$core$Int _39;
frost$core$Bit _40;
frost$core$Range$LTfrost$core$Int$GT _41;
frost$core$Int _42;
frost$core$Int _44;
frost$core$Bit _45;
bool _46;
frost$core$Int _47;
int64_t _49;
int64_t _50;
bool _51;
frost$core$Bit _52;
bool _53;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$collections$Iterator* _62;
$fn2 _63;
frost$core$Bit _64;
bool _67;
bool _68;
frost$core$Bit _69;
bool _71;
frost$collections$Iterator* _74;
$fn3 _75;
frost$core$Object* _76;
frost$core$Object* _77;
frost$core$Object* _78;
frost$core$Int _82;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
int64_t _94;
int64_t _95;
bool _96;
frost$core$Bit _97;
bool _98;
int64_t _100;
int64_t _101;
int64_t _102;
frost$core$Int _103;
frost$collections$Iterator$RangeIterator* _107;
bool _108;
frost$core$Bit _109;
bool _110;
frost$core$Int _112;
frost$core$Int _115;
frost$core$Int* _116;
frost$collections$Iterator$RangeIterator* _121;
frost$core$Int _122;
frost$core$Int* _123;
bool _127;
frost$core$Bit _128;
bool _129;
bool _132;
frost$collections$Iterator$RangeIterator* _135;
bool _136;
frost$core$Bit _137;
bool _138;
frost$core$Int _140;
frost$core$Int _143;
frost$core$Int _144;
int64_t _145;
int64_t _146;
int64_t _147;
frost$core$Int _148;
frost$core$Int$nullable _149;
frost$core$Int$nullable* _150;
frost$collections$Iterator$RangeIterator* _155;
frost$core$Int$nullable* _156;
frost$collections$Iterator$RangeIterator* _161;
frost$core$Int* _162;
frost$collections$Iterator* _165;
$fn4 _166;
frost$core$Bit _167;
bool _170;
bool _171;
frost$core$Bit _172;
bool _174;
frost$collections$Iterator$RangeIterator* _177;
frost$collections$Iterator* _178;
$fn5 _179;
frost$core$Object* _180;
frost$core$Object* _181;
frost$core$Object* _182;
frost$core$Object* _183;
frost$core$Object** _185;
frost$core$Object* _186;
frost$core$Object* _187;
frost$core$Object** _189;
frost$core$Object* _191;
frost$collections$Iterator$RangeIterator* _196;
frost$core$Bit _197;
frost$core$Bit* _198;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:59
_1 = param0;
_2 = (frost$core$Bit) {false};
_3 = &_1->_done;
*_3 = _2;
_5 = (frost$core$Int) {0u};
_6 = param5.value;
_7 = _5.value;
_8 = _6 > _7;
_9 = (frost$core$Bit) {_8};
_10 = _9.value;
if (_10) goto block1; else goto block2;
block2:;
_12 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _12, &$s7);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:63
_16 = param0;
_17 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = &_16->base;
_20 = *_19;
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
_23 = &_16->base;
*_23 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:64
_26 = param2.nonnull;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:65
_31 = (frost$core$Int) {0u};
_32 = param2.nonnull;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block6; else goto block7;
block7:;
_36 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _36, &$s9);
abort(); // unreachable
block6:;
_39 = ((frost$core$Int) param2.value);
_40 = (frost$core$Bit) {false};
_41 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_31, _39, _40);
_42 = _41.min;
*(&local0) = _42;
_44 = _41.max;
_45 = _41.inclusive;
_46 = _45.value;
_47 = (frost$core$Int) {1u};
if (_46) goto block11; else goto block12;
block11:;
_49 = _42.value;
_50 = _44.value;
_51 = _49 <= _50;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block8; else goto block9;
block12:;
_55 = _42.value;
_56 = _44.value;
_57 = _55 < _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:66
_62 = param1;
ITable* $tmp10 = _62->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
_63 = $tmp10->methods[0];
_64 = _63(_62);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:66:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_67 = _64.value;
_68 = !_67;
_69 = (frost$core$Bit) {_68};
_71 = _69.value;
if (_71) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:67
_74 = param1;
ITable* $tmp11 = _74->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_75 = $tmp11->methods[1];
_76 = _75(_74);
_77 = _76;
_78 = _76;
frost$core$Frost$unref$frost$core$Object$Q(_78);
goto block14;
block14:;
_82 = *(&local0);
_83 = _44.value;
_84 = _82.value;
_85 = _83 - _84;
_86 = (frost$core$Int) {_85};
if (_46) goto block17; else goto block18;
block17:;
_88 = _86.value;
_89 = _47.value;
_90 = _88 >= _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block16; else goto block9;
block18:;
_94 = _86.value;
_95 = _47.value;
_96 = _94 > _95;
_97 = (frost$core$Bit) {_96};
_98 = _97.value;
if (_98) goto block16; else goto block9;
block16:;
_100 = _82.value;
_101 = _47.value;
_102 = _100 + _101;
_103 = (frost$core$Int) {_102};
*(&local0) = _103;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:70
_107 = param0;
_108 = param2.nonnull;
_109 = (frost$core$Bit) {_108};
_110 = _109.value;
if (_110) goto block19; else goto block20;
block20:;
_112 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _112, &$s13);
abort(); // unreachable
block19:;
_115 = ((frost$core$Int) param2.value);
_116 = &_107->current;
*_116 = _115;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:73
_121 = param0;
_122 = (frost$core$Int) {0u};
_123 = &_121->current;
*_123 = _122;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:75
_127 = param3.nonnull;
_128 = (frost$core$Bit) {_127};
_129 = _128.value;
if (_129) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:76
_132 = param4.value;
if (_132) goto block23; else goto block25;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:77
_135 = param0;
_136 = param3.nonnull;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block26; else goto block27;
block27:;
_140 = (frost$core$Int) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _140, &$s15);
abort(); // unreachable
block26:;
_143 = ((frost$core$Int) param3.value);
_144 = (frost$core$Int) {1u};
_145 = _143.value;
_146 = _144.value;
_147 = _145 + _146;
_148 = (frost$core$Int) {_147};
_149 = ((frost$core$Int$nullable) { _148, true });
_150 = &_135->end;
*_150 = _149;
goto block24;
block25:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:80
_155 = param0;
_156 = &_155->end;
*_156 = param3;
goto block24;
block24:;
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:83
_161 = param0;
_162 = &_161->step;
*_162 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:84
_165 = param1;
ITable* $tmp16 = _165->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
_166 = $tmp16->methods[0];
_167 = _166(_165);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:84:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_170 = _167.value;
_171 = !_170;
_172 = (frost$core$Bit) {_171};
_174 = _172.value;
if (_174) goto block28; else goto block30;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:85
_177 = param0;
_178 = param1;
ITable* $tmp17 = _178->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_179 = $tmp17->methods[1];
_180 = _179(_178);
_181 = _180;
_182 = _181;
_183 = _182;
frost$core$Frost$ref$frost$core$Object$Q(_183);
_185 = &_177->pending;
_186 = *_185;
_187 = _186;
frost$core$Frost$unref$frost$core$Object$Q(_187);
_189 = &_177->pending;
*_189 = _182;
_191 = _180;
frost$core$Frost$unref$frost$core$Object$Q(_191);
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:88
_196 = param0;
_197 = (frost$core$Bit) {true};
_198 = &_196->_done;
*_198 = _197;
goto block29;
block29:;
return;

}
frost$core$Bit frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$RangeIterator* param0) {

frost$collections$Iterator$RangeIterator* _1;
frost$core$Bit* _2;
frost$core$Bit _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:94
_1 = param0;
_2 = &_1->_done;
_3 = *_2;
return _3;

}
frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(frost$collections$Iterator$RangeIterator* param0) {

frost$core$Object* local0 = NULL;
frost$core$Int local1;
frost$core$Bit local2;
frost$core$Bit local3;
frost$collections$Iterator* _0;
$fn18 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Iterator$RangeIterator* _15;
frost$core$Object** _16;
frost$core$Object* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _23;
frost$core$Int _27;
frost$collections$Iterator$RangeIterator* _28;
frost$core$Int* _29;
frost$core$Int _30;
frost$core$Bit _31;
frost$core$Range$LTfrost$core$Int$GT _32;
frost$core$Int _33;
frost$core$Int _35;
frost$core$Bit _36;
bool _37;
frost$core$Int _38;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _44;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$collections$Iterator$RangeIterator* _53;
frost$core$Int* _54;
frost$core$Int _55;
frost$core$Int _56;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
frost$core$Int* _61;
frost$collections$Iterator$RangeIterator* _64;
frost$collections$Iterator$RangeIterator* _65;
frost$core$Int$nullable* _66;
frost$core$Int$nullable _67;
bool _68;
frost$core$Bit _69;
bool _70;
frost$collections$Iterator$RangeIterator* _72;
frost$core$Int* _73;
frost$core$Int _74;
frost$collections$Iterator$RangeIterator* _75;
frost$core$Int$nullable* _76;
frost$core$Int$nullable _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _82;
frost$core$Int _85;
int64_t _86;
int64_t _87;
bool _88;
frost$core$Bit _89;
frost$core$Bit _94;
bool _95;
frost$collections$Iterator$RangeIterator* _99;
frost$collections$Iterator** _100;
frost$collections$Iterator* _101;
frost$collections$Iterator* _102;
$fn19 _103;
frost$core$Bit _104;
frost$core$Bit _107;
frost$core$Bit* _108;
frost$collections$Iterator$RangeIterator* _111;
frost$core$Bit* _112;
frost$core$Bit _113;
bool _114;
frost$collections$Iterator$RangeIterator* _117;
frost$core$Object* _118;
frost$core$Object** _120;
frost$core$Object* _121;
frost$core$Object* _122;
frost$core$Object** _124;
frost$collections$Iterator$RangeIterator* _129;
frost$collections$Iterator$RangeIterator* _130;
frost$collections$Iterator** _131;
frost$collections$Iterator* _132;
frost$collections$Iterator* _133;
$fn20 _134;
frost$core$Object* _135;
frost$core$Object* _136;
frost$core$Object* _137;
frost$core$Object* _138;
frost$core$Object** _140;
frost$core$Object* _141;
frost$core$Object* _142;
frost$core$Object** _144;
frost$core$Object* _146;
frost$core$Int _149;
int64_t _150;
int64_t _151;
int64_t _152;
frost$core$Int _153;
int64_t _155;
int64_t _156;
bool _157;
frost$core$Bit _158;
bool _159;
int64_t _161;
int64_t _162;
bool _163;
frost$core$Bit _164;
bool _165;
int64_t _167;
int64_t _168;
int64_t _169;
frost$core$Int _170;
frost$core$Object* _174;
frost$core$Object* _175;
frost$core$Object* _177;
frost$core$Object* _178;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp21 = _0->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp21 = $tmp21->next;
}
_1 = $tmp21->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _11, &$s23);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:99
_15 = param0;
_16 = &_15->pending;
_17 = *_16;
_18 = _17;
*(&local0) = ((frost$core$Object*) NULL);
_20 = _18;
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = _22;
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:100
_27 = (frost$core$Int) {0u};
_28 = param0;
_29 = &_28->step;
_30 = *_29;
_31 = (frost$core$Bit) {false};
_32 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_27, _30, _31);
_33 = _32.min;
*(&local1) = _33;
_35 = _32.max;
_36 = _32.inclusive;
_37 = _36.value;
_38 = (frost$core$Int) {1u};
if (_37) goto block7; else goto block8;
block7:;
_40 = _33.value;
_41 = _35.value;
_42 = _40 <= _41;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block4; else goto block5;
block8:;
_46 = _33.value;
_47 = _35.value;
_48 = _46 < _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:101
_53 = param0;
_54 = &_53->current;
_55 = *_54;
_56 = (frost$core$Int) {1u};
_57 = _55.value;
_58 = _56.value;
_59 = _57 + _58;
_60 = (frost$core$Int) {_59};
_61 = &_53->current;
*_61 = _60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:102
_64 = param0;
_65 = param0;
_66 = &_65->end;
_67 = *_66;
_68 = _67.nonnull;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block9; else goto block10;
block9:;
_72 = param0;
_73 = &_72->current;
_74 = *_73;
_75 = param0;
_76 = &_75->end;
_77 = *_76;
_78 = _77.nonnull;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block12; else goto block13;
block13:;
_82 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _82, &$s25);
abort(); // unreachable
block12:;
_85 = ((frost$core$Int) _77.value);
_86 = _74.value;
_87 = _85.value;
_88 = _86 >= _87;
_89 = (frost$core$Bit) {_88};
*(&local3) = _89;
goto block11;
block10:;
*(&local3) = _69;
goto block11;
block11:;
_94 = *(&local3);
_95 = _94.value;
if (_95) goto block14; else goto block15;
block14:;
*(&local2) = _94;
goto block16;
block15:;
_99 = param0;
_100 = &_99->base;
_101 = *_100;
_102 = _101;
ITable* $tmp26 = _102->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_103 = $tmp26->methods[0];
_104 = _103(_102);
*(&local2) = _104;
goto block16;
block16:;
_107 = *(&local2);
_108 = &_64->_done;
*_108 = _107;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:103
_111 = param0;
_112 = &_111->_done;
_113 = *_112;
_114 = _113.value;
if (_114) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:104
_117 = param0;
_118 = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(_118);
_120 = &_117->pending;
_121 = *_120;
_122 = _121;
frost$core$Frost$unref$frost$core$Object$Q(_122);
_124 = &_117->pending;
*_124 = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:105
goto block5;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:107
_129 = param0;
_130 = param0;
_131 = &_130->base;
_132 = *_131;
_133 = _132;
ITable* $tmp27 = _133->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
_134 = $tmp27->methods[1];
_135 = _134(_133);
_136 = _135;
_137 = _136;
_138 = _137;
frost$core$Frost$ref$frost$core$Object$Q(_138);
_140 = &_129->pending;
_141 = *_140;
_142 = _141;
frost$core$Frost$unref$frost$core$Object$Q(_142);
_144 = &_129->pending;
*_144 = _137;
_146 = _135;
frost$core$Frost$unref$frost$core$Object$Q(_146);
_149 = *(&local1);
_150 = _35.value;
_151 = _149.value;
_152 = _150 - _151;
_153 = (frost$core$Int) {_152};
if (_37) goto block20; else goto block21;
block20:;
_155 = _153.value;
_156 = _38.value;
_157 = _155 >= _156;
_158 = (frost$core$Bit) {_157};
_159 = _158.value;
if (_159) goto block19; else goto block5;
block21:;
_161 = _153.value;
_162 = _38.value;
_163 = _161 > _162;
_164 = (frost$core$Bit) {_163};
_165 = _164.value;
if (_165) goto block19; else goto block5;
block19:;
_167 = _149.value;
_168 = _38.value;
_169 = _167 + _168;
_170 = (frost$core$Int) {_169};
*(&local1) = _170;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:109
_174 = *(&local0);
_175 = _174;
frost$core$Frost$ref$frost$core$Object$Q(_175);
_177 = *(&local0);
_178 = _177;
frost$core$Frost$unref$frost$core$Object$Q(_178);
*(&local0) = ((frost$core$Object*) NULL);
return _174;

}
void frost$collections$Iterator$RangeIterator$cleanup(frost$collections$Iterator$RangeIterator* param0) {

frost$core$Object* _1;
frost$collections$Iterator$RangeIterator* _3;
frost$collections$Iterator** _4;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$collections$Iterator$RangeIterator* _8;
frost$core$Object** _9;
frost$core$Object* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:48
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->base;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->pending;
_10 = *_9;
_11 = _10;
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}

