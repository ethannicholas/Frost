#include "org/frostlang/frost/Int32List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Int32.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int32List$$IDX$frost$core$Int$R$frost$core$Int32$shim(org$frostlang$frost$Int32List* p0, frost$core$Int p1) {
    frost$core$Int32 result = org$frostlang$frost$Int32List$$IDX$frost$core$Int$R$frost$core$Int32(p0, p1);

    frost$core$Int32$wrapper* $tmp2;
    $tmp2 = (frost$core$Int32$wrapper*) frostObjectAlloc(sizeof(frost$core$Int32$wrapper), (frost$core$Class*) &frost$core$Int32$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int32List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } org$frostlang$frost$Int32List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int32List$_frost$collections$Iterable, { org$frostlang$frost$Int32List$$IDX$frost$core$Int$R$frost$core$Int32$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$Int32List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$Int32List$_frost$collections$ListView, { org$frostlang$frost$Int32List$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$Int32List$class_type org$frostlang$frost$Int32List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int32List$_frost$collections$CollectionView, { org$frostlang$frost$Int32List$get_asString$R$frost$core$String, org$frostlang$frost$Int32List$cleanup, org$frostlang$frost$Int32List$get_count$R$frost$core$Int, org$frostlang$frost$Int32List$$IDX$frost$core$Int$R$frost$core$Int32$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn7)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74", 29, -6742631875000102705, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, -4673381245330759657, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 105, 4460306156631282492, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT param1) {
org$frostlang$frost$Int32List* param0 = (org$frostlang$frost$Int32List*) rawSelf;

frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT* _1;
frost$core$Int _4;
frost$core$Int* _5;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:16
_1 = &param0->range;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:17
_4 = org$frostlang$frost$Int32List$computeCount$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$core$Int(param1);
_5 = &param0->_count;
*_5 = _4;
return;

}
frost$core$Int org$frostlang$frost$Int32List$computeCount$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT param0) {

frost$core$Int local0;
frost$core$Int32 local1;
frost$core$Int local2;
frost$core$Bit _1;
bool _2;
frost$core$Int32 _5;
frost$core$Int32 _6;
int32_t _7;
int32_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int32 _14;
frost$core$Int32 _15;
int32_t _16;
int32_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _23;
frost$core$Int32 _27;
frost$core$Int32 _28;
int32_t _29;
int32_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _36;
frost$core$Int32 _40;
frost$core$Int32 _41;
int32_t _42;
int32_t _43;
int32_t _44;
frost$core$Int32 _45;
frost$core$Int32 _46;
int32_t _47;
int32_t _48;
int32_t _49;
frost$core$Int32 _50;
frost$core$Int _51;
int32_t _54;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
int32_t _62;
int64_t _63;
frost$core$Int _64;
int64_t _68;
frost$core$Int _69;
frost$core$Int _72;
frost$core$Int _73;
int64_t _74;
int64_t _75;
int64_t _76;
frost$core$Int _77;
frost$core$Int32 _82;
frost$core$Int32 _83;
int32_t _84;
int32_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
frost$core$Int32 _91;
frost$core$Int32 _92;
int32_t _93;
int32_t _94;
bool _95;
frost$core$Bit _96;
bool _97;
frost$core$Int _100;
frost$core$Int32 _103;
frost$core$Int32 _108;
frost$core$Int32 _109;
int32_t _110;
int32_t _111;
bool _112;
frost$core$Bit _113;
bool _114;
frost$core$Int _117;
frost$core$Int32 _120;
frost$core$Int32 _124;
frost$core$Int32 _125;
int32_t _126;
int32_t _127;
int32_t _128;
frost$core$Int32 _129;
frost$core$Int32 _130;
int32_t _131;
int32_t _132;
int32_t _133;
frost$core$Int32 _134;
frost$core$Int32 _135;
int32_t _136;
int32_t _137;
int32_t _138;
frost$core$Int32 _139;
frost$core$Int _140;
int32_t _143;
int64_t _144;
int64_t _145;
bool _146;
frost$core$Bit _147;
bool _148;
int32_t _151;
int64_t _152;
frost$core$Int _153;
int64_t _157;
frost$core$Int _158;
frost$core$Int _161;
frost$core$Int _162;
int64_t _163;
int64_t _164;
int64_t _165;
frost$core$Int _166;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:22
_1 = param0.inclusive;
_2 = _1.value;
if (_2) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:23
_5 = param0.step;
_6 = (frost$core$Int32) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:24
_14 = param0.end;
_15 = param0.start;
_16 = _14.value;
_17 = _15.value;
_18 = _16 < _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:25
_23 = (frost$core$Int) {0u};
return _23;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:27
_27 = param0.end;
_28 = param0.start;
_29 = _27.value;
_30 = _28.value;
_31 = _29 > _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:28
_36 = (frost$core$Int) {0u};
return _36;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:30
_40 = param0.end;
_41 = param0.start;
_42 = _40.value;
_43 = _41.value;
_44 = _42 - _43;
_45 = (frost$core$Int32) {_44};
_46 = param0.step;
_47 = _45.value;
_48 = _46.value;
_49 = _47 / _48;
_50 = (frost$core$Int32) {_49};
_51 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int32.max(other:frost.core.Int):frost.core.Int from Int32List.frost:30:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:857
_54 = _50.value;
_55 = ((int64_t) _54);
_56 = _51.value;
_57 = _55 > _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
if (_59) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:858
_62 = _50.value;
_63 = ((int64_t) _62);
_64 = (frost$core$Int) {_63};
*(&local0) = _64;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:860
_68 = _51.value;
_69 = (frost$core$Int) {_68};
*(&local0) = _69;
goto block11;
block11:;
_72 = *(&local0);
_73 = (frost$core$Int) {1u};
_74 = _72.value;
_75 = _73.value;
_76 = _74 + _75;
_77 = (frost$core$Int) {_76};
return _77;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:34
_82 = param0.step;
_83 = (frost$core$Int32) {0u};
_84 = _82.value;
_85 = _83.value;
_86 = _84 > _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:35
_91 = param0.end;
_92 = param0.start;
_93 = _91.value;
_94 = _92.value;
_95 = _93 <= _94;
_96 = (frost$core$Bit) {_95};
_97 = _96.value;
if (_97) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:36
_100 = (frost$core$Int) {0u};
return _100;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:38
_103 = (frost$core$Int32) {18446744073709551615u};
*(&local1) = _103;
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:40
_108 = param0.end;
_109 = param0.start;
_110 = _108.value;
_111 = _109.value;
_112 = _110 >= _111;
_113 = (frost$core$Bit) {_112};
_114 = _113.value;
if (_114) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:41
_117 = (frost$core$Int) {0u};
return _117;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:43
_120 = (frost$core$Int32) {1u};
*(&local1) = _120;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:45
_124 = param0.end;
_125 = param0.start;
_126 = _124.value;
_127 = _125.value;
_128 = _126 - _127;
_129 = (frost$core$Int32) {_128};
_130 = *(&local1);
_131 = _129.value;
_132 = _130.value;
_133 = _131 + _132;
_134 = (frost$core$Int32) {_133};
_135 = param0.step;
_136 = _134.value;
_137 = _135.value;
_138 = _136 / _137;
_139 = (frost$core$Int32) {_138};
_140 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int32.max(other:frost.core.Int):frost.core.Int from Int32List.frost:45:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:857
_143 = _139.value;
_144 = ((int64_t) _143);
_145 = _140.value;
_146 = _144 > _145;
_147 = (frost$core$Bit) {_146};
_148 = _147.value;
if (_148) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:858
_151 = _139.value;
_152 = ((int64_t) _151);
_153 = (frost$core$Int) {_152};
*(&local2) = _153;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:860
_157 = _140.value;
_158 = (frost$core$Int) {_157};
*(&local2) = _158;
goto block21;
block21:;
_161 = *(&local2);
_162 = (frost$core$Int) {1u};
_163 = _161.value;
_164 = _162.value;
_165 = _163 + _164;
_166 = (frost$core$Int) {_165};
return _166;
block2:;
goto block24;
block24:;

}
frost$core$Int org$frostlang$frost$Int32List$get_count$R$frost$core$Int(void* rawSelf) {
org$frostlang$frost$Int32List* param0 = (org$frostlang$frost$Int32List*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:51
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$core$Int32 org$frostlang$frost$Int32List$$IDX$frost$core$Int$R$frost$core$Int32(void* rawSelf, frost$core$Int param1) {
org$frostlang$frost$Int32List* param0 = (org$frostlang$frost$Int32List*) rawSelf;

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
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT* _20;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT _21;
frost$core$Int32 _22;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT* _23;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT _24;
frost$core$Int32 _25;
int64_t _28;
int32_t _29;
frost$core$Int32 _30;
int32_t _32;
int32_t _33;
int32_t _34;
frost$core$Int32 _35;
int32_t _36;
int32_t _37;
int32_t _38;
frost$core$Int32 _39;
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
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:56
_20 = &param0->range;
_21 = *_20;
_22 = _21.start;
_23 = &param0->range;
_24 = *_23;
_25 = _24.step;
// begin inline call to function frost.core.Int.get_asInt32():frost.core.Int32 from Int32List.frost:56:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:973
_28 = param1.value;
_29 = ((int32_t) _28);
_30 = (frost$core$Int32) {_29};
_32 = _25.value;
_33 = _30.value;
_34 = _32 * _33;
_35 = (frost$core$Int32) {_34};
_36 = _22.value;
_37 = _35.value;
_38 = _36 + _37;
_39 = (frost$core$Int32) {_38};
return _39;

}
frost$core$String* org$frostlang$frost$Int32List$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frost$Int32List* param0 = (org$frostlang$frost$Int32List*) rawSelf;

frost$collections$CollectionView* _1;
$fn7 _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:61
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
void org$frostlang$frost$Int32List$cleanup(void* rawSelf) {
org$frostlang$frost$Int32List* param0 = (org$frostlang$frost$Int32List*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int32List.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

