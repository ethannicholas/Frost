#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -7496503432914368729, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x65\x6e\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 238, -2269912078841639166, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, 972743335700786433, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };

void frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(void* rawSelf, frost$collections$Iterator* param1, frost$core$Int$nullable param2, frost$core$Int$nullable param3, frost$core$Bit param4, frost$core$Int param5) {
frost$collections$Iterator$RangeIterator* param0 = (frost$collections$Iterator$RangeIterator*) rawSelf;

frost$core$Int local0;
frost$core$Bit _1;
frost$core$Bit* _2;
frost$core$Int _4;
int64_t _5;
int64_t _6;
bool _7;
frost$core$Bit _8;
bool _9;
frost$core$Int _11;
frost$core$Object* _15;
frost$collections$Iterator** _17;
frost$collections$Iterator* _18;
frost$core$Object* _19;
frost$collections$Iterator** _21;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Int _29;
bool _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _34;
frost$core$Int _37;
frost$core$Bit _38;
frost$core$Range$LTfrost$core$Int$GT _39;
frost$core$Int _40;
frost$core$Int _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _45;
int64_t _47;
int64_t _48;
bool _49;
frost$core$Bit _50;
bool _51;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
$fn2 _60;
frost$core$Bit _61;
bool _64;
bool _65;
frost$core$Bit _66;
bool _68;
$fn3 _71;
frost$core$Object* _72;
frost$core$Object* _73;
frost$core$Object* _74;
frost$core$Int _78;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int _82;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
int64_t _96;
int64_t _97;
int64_t _98;
frost$core$Int _99;
bool _103;
frost$core$Bit _104;
bool _105;
frost$core$Int _107;
frost$core$Int _110;
frost$core$Int* _111;
frost$core$Int _116;
frost$core$Int* _117;
bool _121;
frost$core$Bit _122;
bool _123;
bool _126;
bool _129;
frost$core$Bit _130;
bool _131;
frost$core$Int _133;
frost$core$Int _136;
frost$core$Int _137;
int64_t _138;
int64_t _139;
int64_t _140;
frost$core$Int _141;
frost$core$Int$nullable _142;
frost$core$Int$nullable* _143;
frost$core$Int$nullable* _148;
frost$core$Int* _153;
$fn4 _156;
frost$core$Bit _157;
bool _160;
bool _161;
frost$core$Bit _162;
bool _164;
$fn5 _167;
frost$core$Object* _168;
frost$core$Object* _169;
frost$core$Object* _170;
frost$core$Object* _171;
frost$core$Object** _173;
frost$core$Object* _174;
frost$core$Object* _175;
frost$core$Object** _177;
frost$core$Object* _179;
frost$core$Bit _184;
frost$core$Bit* _185;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:59
_1 = (frost$core$Bit) {false};
_2 = &param0->_done;
*_2 = _1;
_4 = (frost$core$Int) {0u};
_5 = param5.value;
_6 = _4.value;
_7 = _5 > _6;
_8 = (frost$core$Bit) {_7};
_9 = _8.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _11, &$s7);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:63
_15 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = &param0->base;
_18 = *_17;
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
_21 = &param0->base;
*_21 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:64
_24 = param2.nonnull;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:65
_29 = (frost$core$Int) {0u};
_30 = param2.nonnull;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block6; else goto block7;
block7:;
_34 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _34, &$s9);
abort(); // unreachable
block6:;
_37 = ((frost$core$Int) param2.value);
_38 = (frost$core$Bit) {false};
_39 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_29, _37, _38);
_40 = _39.min;
*(&local0) = _40;
_42 = _39.max;
_43 = _39.inclusive;
_44 = _43.value;
_45 = (frost$core$Int) {1u};
if (_44) goto block11; else goto block12;
block11:;
_47 = _40.value;
_48 = _42.value;
_49 = _47 <= _48;
_50 = (frost$core$Bit) {_49};
_51 = _50.value;
if (_51) goto block8; else goto block9;
block12:;
_53 = _40.value;
_54 = _42.value;
_55 = _53 < _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:66
ITable* $tmp10 = param1->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
_60 = $tmp10->methods[0];
_61 = _60(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:66:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_64 = _61.value;
_65 = !_64;
_66 = (frost$core$Bit) {_65};
_68 = _66.value;
if (_68) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:67
ITable* $tmp11 = param1->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_71 = $tmp11->methods[1];
_72 = _71(param1);
_73 = _72;
_74 = _72;
frost$core$Frost$unref$frost$core$Object$Q(_74);
goto block14;
block14:;
_78 = *(&local0);
_79 = _42.value;
_80 = _78.value;
_81 = _79 - _80;
_82 = (frost$core$Int) {_81};
if (_44) goto block17; else goto block18;
block17:;
_84 = _82.value;
_85 = _45.value;
_86 = _84 >= _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block16; else goto block9;
block18:;
_90 = _82.value;
_91 = _45.value;
_92 = _90 > _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block16; else goto block9;
block16:;
_96 = _78.value;
_97 = _45.value;
_98 = _96 + _97;
_99 = (frost$core$Int) {_98};
*(&local0) = _99;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:70
_103 = param2.nonnull;
_104 = (frost$core$Bit) {_103};
_105 = _104.value;
if (_105) goto block19; else goto block20;
block20:;
_107 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _107, &$s13);
abort(); // unreachable
block19:;
_110 = ((frost$core$Int) param2.value);
_111 = &param0->current;
*_111 = _110;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:73
_116 = (frost$core$Int) {0u};
_117 = &param0->current;
*_117 = _116;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:75
_121 = param3.nonnull;
_122 = (frost$core$Bit) {_121};
_123 = _122.value;
if (_123) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:76
_126 = param4.value;
if (_126) goto block23; else goto block25;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:77
_129 = param3.nonnull;
_130 = (frost$core$Bit) {_129};
_131 = _130.value;
if (_131) goto block26; else goto block27;
block27:;
_133 = (frost$core$Int) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _133, &$s15);
abort(); // unreachable
block26:;
_136 = ((frost$core$Int) param3.value);
_137 = (frost$core$Int) {1u};
_138 = _136.value;
_139 = _137.value;
_140 = _138 + _139;
_141 = (frost$core$Int) {_140};
_142 = ((frost$core$Int$nullable) { _141, true });
_143 = &param0->end;
*_143 = _142;
goto block24;
block25:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:80
_148 = &param0->end;
*_148 = param3;
goto block24;
block24:;
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:83
_153 = &param0->step;
*_153 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:84
ITable* $tmp16 = param1->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
_156 = $tmp16->methods[0];
_157 = _156(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:84:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_160 = _157.value;
_161 = !_160;
_162 = (frost$core$Bit) {_161};
_164 = _162.value;
if (_164) goto block28; else goto block30;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:85
ITable* $tmp17 = param1->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp17 = $tmp17->next;
}
_167 = $tmp17->methods[1];
_168 = _167(param1);
_169 = _168;
_170 = _169;
_171 = _170;
frost$core$Frost$ref$frost$core$Object$Q(_171);
_173 = &param0->pending;
_174 = *_173;
_175 = _174;
frost$core$Frost$unref$frost$core$Object$Q(_175);
_177 = &param0->pending;
*_177 = _170;
_179 = _168;
frost$core$Frost$unref$frost$core$Object$Q(_179);
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:88
_184 = (frost$core$Bit) {true};
_185 = &param0->_done;
*_185 = _184;
goto block29;
block29:;
return;

}
frost$core$Bit frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$Iterator$RangeIterator* param0 = (frost$collections$Iterator$RangeIterator*) rawSelf;

frost$core$Bit* _1;
frost$core$Bit _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:94
_1 = &param0->_done;
_2 = *_1;
return _2;

}
frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(void* rawSelf) {
frost$collections$Iterator$RangeIterator* param0 = (frost$collections$Iterator$RangeIterator*) rawSelf;

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
frost$core$Object** _15;
frost$core$Object* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _22;
frost$core$Int _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Bit _29;
frost$core$Range$LTfrost$core$Int$GT _30;
frost$core$Int _31;
frost$core$Int _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _36;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Int* _51;
frost$core$Int _52;
frost$core$Int _53;
int64_t _54;
int64_t _55;
int64_t _56;
frost$core$Int _57;
frost$core$Int* _58;
frost$core$Int$nullable* _61;
frost$core$Int$nullable _62;
bool _63;
frost$core$Bit _64;
bool _65;
frost$core$Int* _67;
frost$core$Int _68;
frost$core$Int$nullable* _69;
frost$core$Int$nullable _70;
bool _71;
frost$core$Bit _72;
bool _73;
frost$core$Int _75;
frost$core$Int _78;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
frost$core$Bit _87;
bool _88;
frost$collections$Iterator** _92;
frost$collections$Iterator* _93;
$fn19 _94;
frost$core$Bit _95;
frost$core$Bit _98;
frost$core$Bit* _99;
frost$core$Bit* _102;
frost$core$Bit _103;
bool _104;
frost$core$Object* _107;
frost$core$Object** _109;
frost$core$Object* _110;
frost$core$Object* _111;
frost$core$Object** _113;
frost$collections$Iterator** _118;
frost$collections$Iterator* _119;
$fn20 _120;
frost$core$Object* _121;
frost$core$Object* _122;
frost$core$Object* _123;
frost$core$Object* _124;
frost$core$Object** _126;
frost$core$Object* _127;
frost$core$Object* _128;
frost$core$Object** _130;
frost$core$Object* _132;
frost$core$Int _135;
int64_t _136;
int64_t _137;
int64_t _138;
frost$core$Int _139;
int64_t _141;
int64_t _142;
bool _143;
frost$core$Bit _144;
bool _145;
int64_t _147;
int64_t _148;
bool _149;
frost$core$Bit _150;
bool _151;
int64_t _153;
int64_t _154;
int64_t _155;
frost$core$Int _156;
frost$core$Object* _160;
frost$core$Object* _161;
frost$core$Object* _163;
frost$core$Object* _164;
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
_15 = &param0->pending;
_16 = *_15;
_17 = _16;
*(&local0) = ((frost$core$Object*) NULL);
_19 = _17;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:100
_26 = (frost$core$Int) {0u};
_27 = &param0->step;
_28 = *_27;
_29 = (frost$core$Bit) {false};
_30 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_26, _28, _29);
_31 = _30.min;
*(&local1) = _31;
_33 = _30.max;
_34 = _30.inclusive;
_35 = _34.value;
_36 = (frost$core$Int) {1u};
if (_35) goto block7; else goto block8;
block7:;
_38 = _31.value;
_39 = _33.value;
_40 = _38 <= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block4; else goto block5;
block8:;
_44 = _31.value;
_45 = _33.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:101
_51 = &param0->current;
_52 = *_51;
_53 = (frost$core$Int) {1u};
_54 = _52.value;
_55 = _53.value;
_56 = _54 + _55;
_57 = (frost$core$Int) {_56};
_58 = &param0->current;
*_58 = _57;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:102
_61 = &param0->end;
_62 = *_61;
_63 = _62.nonnull;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block9; else goto block10;
block9:;
_67 = &param0->current;
_68 = *_67;
_69 = &param0->end;
_70 = *_69;
_71 = _70.nonnull;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block12; else goto block13;
block13:;
_75 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _75, &$s25);
abort(); // unreachable
block12:;
_78 = ((frost$core$Int) _70.value);
_79 = _68.value;
_80 = _78.value;
_81 = _79 >= _80;
_82 = (frost$core$Bit) {_81};
*(&local3) = _82;
goto block11;
block10:;
*(&local3) = _64;
goto block11;
block11:;
_87 = *(&local3);
_88 = _87.value;
if (_88) goto block14; else goto block15;
block14:;
*(&local2) = _87;
goto block16;
block15:;
_92 = &param0->base;
_93 = *_92;
ITable* $tmp26 = _93->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_94 = $tmp26->methods[0];
_95 = _94(_93);
*(&local2) = _95;
goto block16;
block16:;
_98 = *(&local2);
_99 = &param0->_done;
*_99 = _98;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:103
_102 = &param0->_done;
_103 = *_102;
_104 = _103.value;
if (_104) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:104
_107 = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = &param0->pending;
_110 = *_109;
_111 = _110;
frost$core$Frost$unref$frost$core$Object$Q(_111);
_113 = &param0->pending;
*_113 = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:105
goto block5;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:107
_118 = &param0->base;
_119 = *_118;
ITable* $tmp27 = _119->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp27 = $tmp27->next;
}
_120 = $tmp27->methods[1];
_121 = _120(_119);
_122 = _121;
_123 = _122;
_124 = _123;
frost$core$Frost$ref$frost$core$Object$Q(_124);
_126 = &param0->pending;
_127 = *_126;
_128 = _127;
frost$core$Frost$unref$frost$core$Object$Q(_128);
_130 = &param0->pending;
*_130 = _123;
_132 = _121;
frost$core$Frost$unref$frost$core$Object$Q(_132);
_135 = *(&local1);
_136 = _33.value;
_137 = _135.value;
_138 = _136 - _137;
_139 = (frost$core$Int) {_138};
if (_35) goto block20; else goto block21;
block20:;
_141 = _139.value;
_142 = _36.value;
_143 = _141 >= _142;
_144 = (frost$core$Bit) {_143};
_145 = _144.value;
if (_145) goto block19; else goto block5;
block21:;
_147 = _139.value;
_148 = _36.value;
_149 = _147 > _148;
_150 = (frost$core$Bit) {_149};
_151 = _150.value;
if (_151) goto block19; else goto block5;
block19:;
_153 = _135.value;
_154 = _36.value;
_155 = _153 + _154;
_156 = (frost$core$Int) {_155};
*(&local1) = _156;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:109
_160 = *(&local0);
_161 = _160;
frost$core$Frost$ref$frost$core$Object$Q(_161);
_163 = *(&local0);
_164 = _163;
frost$core$Frost$unref$frost$core$Object$Q(_164);
*(&local0) = ((frost$core$Object*) NULL);
return _160;

}
void frost$collections$Iterator$RangeIterator$cleanup(void* rawSelf) {
frost$collections$Iterator$RangeIterator* param0 = (frost$collections$Iterator$RangeIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$Iterator** _3;
frost$collections$Iterator* _4;
frost$core$Object* _5;
frost$core$Object** _7;
frost$core$Object* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:48
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->base;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->pending;
_8 = *_7;
_9 = _8;
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

