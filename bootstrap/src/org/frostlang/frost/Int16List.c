#include "org/frostlang/frost/Int16List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Int16.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int16.Cfrost/core/Int16.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Int32.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int16List$$IDX$frost$core$Int$R$frost$core$Int16$shim(org$frostlang$frost$Int16List* p0, frost$core$Int p1) {
    frost$core$Int16 result = org$frostlang$frost$Int16List$$IDX$frost$core$Int$R$frost$core$Int16(p0, p1);

    frost$core$Int16$wrapper* $tmp2;
    $tmp2 = (frost$core$Int16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$Int16$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int16List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } org$frostlang$frost$Int16List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$Iterable, { org$frostlang$frost$Int16List$$IDX$frost$core$Int$R$frost$core$Int16$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$Int16List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$ListView, { org$frostlang$frost$Int16List$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$Int16List$class_type org$frostlang$frost$Int16List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int16List$_frost$collections$CollectionView, { org$frostlang$frost$Int16List$get_asString$R$frost$core$String, org$frostlang$frost$Int16List$cleanup, org$frostlang$frost$Int16List$get_count$R$frost$core$Int, org$frostlang$frost$Int16List$$IDX$frost$core$Int$R$frost$core$Int16$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn7)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 29, -8125969837753268091, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, -2603187009645706831, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 105, 7670401111158032656, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT(org$frostlang$frost$Int16List* param0, frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param1) {

frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* _1;
frost$core$Int _4;
frost$core$Int* _5;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:16
_1 = &param0->range;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:17
_4 = org$frostlang$frost$Int16List$computeCount$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$core$Int(param1);
_5 = &param0->_count;
*_5 = _4;
return;

}
frost$core$Int org$frostlang$frost$Int16List$computeCount$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param0) {

frost$core$Int local0;
frost$core$Int16 local1;
frost$core$Int local2;
frost$core$Bit _1;
bool _2;
frost$core$Int16 _5;
frost$core$Int16 _6;
int16_t _7;
int16_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int16 _14;
frost$core$Int16 _15;
int16_t _16;
int16_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _23;
frost$core$Int16 _27;
frost$core$Int16 _28;
int16_t _29;
int16_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _36;
frost$core$Int16 _40;
frost$core$Int32 _41;
frost$core$Int16 _42;
frost$core$Int32 _43;
int32_t _44;
int32_t _45;
int32_t _46;
frost$core$Int32 _47;
frost$core$Int16 _48;
frost$core$Int32 _49;
int32_t _50;
int32_t _51;
int32_t _52;
frost$core$Int32 _53;
frost$core$Int _54;
int32_t _57;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
int32_t _65;
int64_t _66;
frost$core$Int _67;
int64_t _71;
frost$core$Int _72;
frost$core$Int _75;
frost$core$Int _76;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
frost$core$Int16 _85;
frost$core$Int16 _86;
int16_t _87;
int16_t _88;
bool _89;
frost$core$Bit _90;
bool _91;
frost$core$Int16 _94;
frost$core$Int16 _95;
int16_t _96;
int16_t _97;
bool _98;
frost$core$Bit _99;
bool _100;
frost$core$Int _103;
frost$core$Int16 _106;
frost$core$Int16 _111;
frost$core$Int16 _112;
int16_t _113;
int16_t _114;
bool _115;
frost$core$Bit _116;
bool _117;
frost$core$Int _120;
frost$core$Int16 _123;
frost$core$Int16 _127;
frost$core$Int32 _128;
frost$core$Int16 _129;
frost$core$Int32 _130;
int32_t _131;
int32_t _132;
int32_t _133;
frost$core$Int32 _134;
frost$core$Int16 _135;
frost$core$Int32 _136;
int32_t _137;
int32_t _138;
int32_t _139;
frost$core$Int32 _140;
frost$core$Int16 _141;
frost$core$Int32 _142;
int32_t _143;
int32_t _144;
int32_t _145;
frost$core$Int32 _146;
frost$core$Int _147;
int32_t _150;
int64_t _151;
int64_t _152;
bool _153;
frost$core$Bit _154;
bool _155;
int32_t _158;
int64_t _159;
frost$core$Int _160;
int64_t _164;
frost$core$Int _165;
frost$core$Int _168;
frost$core$Int _169;
int64_t _170;
int64_t _171;
int64_t _172;
frost$core$Int _173;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:22
_1 = param0.inclusive;
_2 = _1.value;
if (_2) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:23
_5 = param0.step;
_6 = (frost$core$Int16) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:24
_14 = param0.end;
_15 = param0.start;
_16 = _14.value;
_17 = _15.value;
_18 = _16 < _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:25
_23 = (frost$core$Int) {0u};
return _23;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:27
_27 = param0.end;
_28 = param0.start;
_29 = _27.value;
_30 = _28.value;
_31 = _29 > _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:28
_36 = (frost$core$Int) {0u};
return _36;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:30
_40 = param0.end;
_41 = frost$core$Int32$init$frost$core$Int16(_40);
_42 = param0.start;
_43 = frost$core$Int32$init$frost$core$Int16(_42);
_44 = _41.value;
_45 = _43.value;
_46 = _44 - _45;
_47 = (frost$core$Int32) {_46};
_48 = param0.step;
_49 = frost$core$Int32$init$frost$core$Int16(_48);
_50 = _47.value;
_51 = _49.value;
_52 = _50 / _51;
_53 = (frost$core$Int32) {_52};
_54 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int32.max(other:frost.core.Int):frost.core.Int from Int16List.frost:30:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:857
_57 = _53.value;
_58 = ((int64_t) _57);
_59 = _54.value;
_60 = _58 > _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:858
_65 = _53.value;
_66 = ((int64_t) _65);
_67 = (frost$core$Int) {_66};
*(&local0) = _67;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:860
_71 = _54.value;
_72 = (frost$core$Int) {_71};
*(&local0) = _72;
goto block11;
block11:;
_75 = *(&local0);
_76 = (frost$core$Int) {1u};
_77 = _75.value;
_78 = _76.value;
_79 = _77 + _78;
_80 = (frost$core$Int) {_79};
return _80;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:34
_85 = param0.step;
_86 = (frost$core$Int16) {0u};
_87 = _85.value;
_88 = _86.value;
_89 = _87 > _88;
_90 = (frost$core$Bit) {_89};
_91 = _90.value;
if (_91) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:35
_94 = param0.end;
_95 = param0.start;
_96 = _94.value;
_97 = _95.value;
_98 = _96 <= _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:36
_103 = (frost$core$Int) {0u};
return _103;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:38
_106 = (frost$core$Int16) {18446744073709551615u};
*(&local1) = _106;
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:40
_111 = param0.end;
_112 = param0.start;
_113 = _111.value;
_114 = _112.value;
_115 = _113 >= _114;
_116 = (frost$core$Bit) {_115};
_117 = _116.value;
if (_117) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:41
_120 = (frost$core$Int) {0u};
return _120;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:43
_123 = (frost$core$Int16) {1u};
*(&local1) = _123;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:45
_127 = param0.end;
_128 = frost$core$Int32$init$frost$core$Int16(_127);
_129 = param0.start;
_130 = frost$core$Int32$init$frost$core$Int16(_129);
_131 = _128.value;
_132 = _130.value;
_133 = _131 - _132;
_134 = (frost$core$Int32) {_133};
_135 = *(&local1);
_136 = frost$core$Int32$init$frost$core$Int16(_135);
_137 = _134.value;
_138 = _136.value;
_139 = _137 + _138;
_140 = (frost$core$Int32) {_139};
_141 = param0.step;
_142 = frost$core$Int32$init$frost$core$Int16(_141);
_143 = _140.value;
_144 = _142.value;
_145 = _143 / _144;
_146 = (frost$core$Int32) {_145};
_147 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int32.max(other:frost.core.Int):frost.core.Int from Int16List.frost:45:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:857
_150 = _146.value;
_151 = ((int64_t) _150);
_152 = _147.value;
_153 = _151 > _152;
_154 = (frost$core$Bit) {_153};
_155 = _154.value;
if (_155) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:858
_158 = _146.value;
_159 = ((int64_t) _158);
_160 = (frost$core$Int) {_159};
*(&local2) = _160;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:860
_164 = _147.value;
_165 = (frost$core$Int) {_164};
*(&local2) = _165;
goto block21;
block21:;
_168 = *(&local2);
_169 = (frost$core$Int) {1u};
_170 = _168.value;
_171 = _169.value;
_172 = _170 + _171;
_173 = (frost$core$Int) {_172};
return _173;
block2:;
goto block24;
block24:;

}
frost$core$Int org$frostlang$frost$Int16List$get_count$R$frost$core$Int(org$frostlang$frost$Int16List* param0) {

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:51
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$core$Int16 org$frostlang$frost$Int16List$$IDX$frost$core$Int$R$frost$core$Int16(org$frostlang$frost$Int16List* param0, frost$core$Int param1) {

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn3 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* _20;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT _21;
frost$core$Int16 _22;
frost$core$Int32 _23;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT* _24;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT _25;
frost$core$Int16 _26;
frost$core$Int32 _27;
int64_t _30;
int16_t _31;
frost$core$Int16 _32;
frost$core$Int32 _34;
int32_t _35;
int32_t _36;
int32_t _37;
frost$core$Int32 _38;
int32_t _39;
int32_t _40;
int32_t _41;
frost$core$Int32 _42;
int32_t _45;
int16_t _46;
frost$core$Int16 _47;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp4 = _7->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_8 = $tmp4->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {55u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _16, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:56
_20 = &param0->range;
_21 = *_20;
_22 = _21.start;
_23 = frost$core$Int32$init$frost$core$Int16(_22);
_24 = &param0->range;
_25 = *_24;
_26 = _25.step;
_27 = frost$core$Int32$init$frost$core$Int16(_26);
// begin inline call to function frost.core.Int.get_asInt16():frost.core.Int16 from Int16List.frost:56:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:967
_30 = param1.value;
_31 = ((int16_t) _30);
_32 = (frost$core$Int16) {_31};
_34 = frost$core$Int32$init$frost$core$Int16(_32);
_35 = _27.value;
_36 = _34.value;
_37 = _35 * _36;
_38 = (frost$core$Int32) {_37};
_39 = _23.value;
_40 = _38.value;
_41 = _39 + _40;
_42 = (frost$core$Int32) {_41};
// begin inline call to function frost.core.Int32.get_asInt16():frost.core.Int16 from Int16List.frost:56:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:972
_45 = _42.value;
_46 = ((int16_t) _45);
_47 = (frost$core$Int16) {_46};
return _47;

}
frost$core$String* org$frostlang$frost$Int16List$get_asString$R$frost$core$String(org$frostlang$frost$Int16List* param0) {

frost$collections$CollectionView* _1;
$fn7 _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:61
_1 = ((frost$collections$CollectionView*) param0);
ITable* $tmp8 = _1->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
_2 = $tmp8->methods[3];
_3 = _2(_1, &$s9);
_4 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s10, _3);
_5 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_4, &$s11);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
_10 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_12);
return _5;

}
void org$frostlang$frost$Int16List$cleanup(org$frostlang$frost$Int16List* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int16List.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

