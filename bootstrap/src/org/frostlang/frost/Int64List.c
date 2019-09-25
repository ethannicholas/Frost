#include "org/frostlang/frost/Int64List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64$shim(org$frostlang$frost$Int64List* p0, frost$core$Int p1) {
    frost$core$Int64 result = org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64(p0, p1);

    frost$core$Int64$wrapper* $tmp2;
    $tmp2 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$Int64List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frost$Int64List$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } org$frostlang$frost$Int64List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$CollectionView, { org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$Int64List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frost$Int64List$class_type org$frostlang$frost$Int64List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$Int64List$_frost$collections$Iterable, { org$frostlang$frost$Int64List$get_asString$R$frost$core$String, org$frostlang$frost$Int64List$cleanup, org$frostlang$frost$Int64List$get_count$R$frost$core$Int, org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn7)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 29, 4836837640627173236, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, -1517823672231586076, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 105, 2728701585544647804, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param1) {
org$frostlang$frost$Int64List* param0 = (org$frostlang$frost$Int64List*) rawSelf;

frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* _1;
frost$core$Int _4;
frost$core$Int* _5;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:16
_1 = &param0->range;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:17
_4 = org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int(param1);
_5 = &param0->_count;
*_5 = _4;
return;

}
frost$core$Int org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Bit _1;
bool _2;
frost$core$Int64 _5;
frost$core$Int64 _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int64 _14;
frost$core$Int64 _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _23;
frost$core$Int64 _27;
frost$core$Int64 _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _36;
frost$core$Int64 _40;
frost$core$Int64 _41;
int64_t _42;
int64_t _43;
int64_t _44;
frost$core$Int64 _45;
frost$core$Int64 _46;
int64_t _47;
int64_t _48;
int64_t _49;
frost$core$Int64 _50;
frost$core$Int64 _51;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _58;
int64_t _61;
frost$core$Int64 _62;
int64_t _66;
frost$core$Int64 _67;
frost$core$Int64 _70;
frost$core$Int64 _71;
int64_t _72;
int64_t _73;
int64_t _74;
frost$core$Int64 _75;
int64_t _78;
int64_t _79;
frost$core$Int _80;
frost$core$Int64 _86;
frost$core$Int64 _87;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
frost$core$Int64 _95;
frost$core$Int64 _96;
int64_t _97;
int64_t _98;
bool _99;
frost$core$Bit _100;
bool _101;
frost$core$Int _104;
frost$core$Int64 _107;
frost$core$Int64 _112;
frost$core$Int64 _113;
int64_t _114;
int64_t _115;
bool _116;
frost$core$Bit _117;
bool _118;
frost$core$Int _121;
frost$core$Int64 _124;
frost$core$Int64 _128;
frost$core$Int64 _129;
int64_t _130;
int64_t _131;
int64_t _132;
frost$core$Int64 _133;
frost$core$Int64 _134;
int64_t _135;
int64_t _136;
int64_t _137;
frost$core$Int64 _138;
frost$core$Int64 _139;
int64_t _140;
int64_t _141;
int64_t _142;
frost$core$Int64 _143;
frost$core$Int64 _144;
int64_t _147;
int64_t _148;
bool _149;
frost$core$Bit _150;
bool _151;
int64_t _154;
frost$core$Int64 _155;
int64_t _159;
frost$core$Int64 _160;
frost$core$Int64 _163;
frost$core$Int64 _164;
int64_t _165;
int64_t _166;
int64_t _167;
frost$core$Int64 _168;
int64_t _171;
int64_t _172;
frost$core$Int _173;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:22
_1 = param0.inclusive;
_2 = _1.value;
if (_2) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:23
_5 = param0.step;
_6 = (frost$core$Int64) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:24
_14 = param0.end;
_15 = param0.start;
_16 = _14.value;
_17 = _15.value;
_18 = _16 < _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:25
_23 = (frost$core$Int) {0u};
return _23;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:27
_27 = param0.end;
_28 = param0.start;
_29 = _27.value;
_30 = _28.value;
_31 = _29 > _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:28
_36 = (frost$core$Int) {0u};
return _36;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:30
_40 = param0.end;
_41 = param0.start;
_42 = _40.value;
_43 = _41.value;
_44 = _42 - _43;
_45 = (frost$core$Int64) {_44};
_46 = param0.step;
_47 = _45.value;
_48 = _46.value;
_49 = _47 / _48;
_50 = (frost$core$Int64) {_49};
_51 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from Int64List.frost:30:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:498
_54 = _50.value;
_55 = _51.value;
_56 = _54 > _55;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:499
_61 = _50.value;
_62 = (frost$core$Int64) {_61};
*(&local0) = _62;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:501
_66 = _51.value;
_67 = (frost$core$Int64) {_66};
*(&local0) = _67;
goto block11;
block11:;
_70 = *(&local0);
_71 = (frost$core$Int64) {1u};
_72 = _70.value;
_73 = _71.value;
_74 = _72 + _73;
_75 = (frost$core$Int64) {_74};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int64List.frost:30:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_78 = _75.value;
_79 = ((int64_t) _78);
_80 = (frost$core$Int) {_79};
return _80;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:34
_86 = param0.step;
_87 = (frost$core$Int64) {0u};
_88 = _86.value;
_89 = _87.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block15; else goto block17;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:35
_95 = param0.end;
_96 = param0.start;
_97 = _95.value;
_98 = _96.value;
_99 = _97 <= _98;
_100 = (frost$core$Bit) {_99};
_101 = _100.value;
if (_101) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:36
_104 = (frost$core$Int) {0u};
return _104;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:38
_107 = (frost$core$Int64) {18446744073709551615u};
*(&local1) = _107;
goto block16;
block17:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:40
_112 = param0.end;
_113 = param0.start;
_114 = _112.value;
_115 = _113.value;
_116 = _114 >= _115;
_117 = (frost$core$Bit) {_116};
_118 = _117.value;
if (_118) goto block20; else goto block21;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:41
_121 = (frost$core$Int) {0u};
return _121;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:43
_124 = (frost$core$Int64) {1u};
*(&local1) = _124;
goto block16;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:45
_128 = param0.end;
_129 = param0.start;
_130 = _128.value;
_131 = _129.value;
_132 = _130 - _131;
_133 = (frost$core$Int64) {_132};
_134 = *(&local1);
_135 = _133.value;
_136 = _134.value;
_137 = _135 + _136;
_138 = (frost$core$Int64) {_137};
_139 = param0.step;
_140 = _138.value;
_141 = _139.value;
_142 = _140 / _141;
_143 = (frost$core$Int64) {_142};
_144 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from Int64List.frost:45:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:498
_147 = _143.value;
_148 = _144.value;
_149 = _147 > _148;
_150 = (frost$core$Bit) {_149};
_151 = _150.value;
if (_151) goto block23; else goto block24;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:499
_154 = _143.value;
_155 = (frost$core$Int64) {_154};
*(&local2) = _155;
goto block22;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:501
_159 = _144.value;
_160 = (frost$core$Int64) {_159};
*(&local2) = _160;
goto block22;
block22:;
_163 = *(&local2);
_164 = (frost$core$Int64) {1u};
_165 = _163.value;
_166 = _164.value;
_167 = _165 + _166;
_168 = (frost$core$Int64) {_167};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from Int64List.frost:45:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_171 = _168.value;
_172 = ((int64_t) _171);
_173 = (frost$core$Int) {_172};
return _173;
block2:;
goto block26;
block26:;

}
frost$core$Int org$frostlang$frost$Int64List$get_count$R$frost$core$Int(void* rawSelf) {
org$frostlang$frost$Int64List* param0 = (org$frostlang$frost$Int64List*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:51
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$core$Int64 org$frostlang$frost$Int64List$$IDX$frost$core$Int$R$frost$core$Int64(void* rawSelf, frost$core$Int param1) {
org$frostlang$frost$Int64List* param0 = (org$frostlang$frost$Int64List*) rawSelf;

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
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* _20;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT _21;
frost$core$Int64 _22;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT* _23;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT _24;
frost$core$Int64 _25;
int64_t _28;
int64_t _29;
frost$core$Int64 _30;
int64_t _32;
int64_t _33;
int64_t _34;
frost$core$Int64 _35;
int64_t _36;
int64_t _37;
int64_t _38;
frost$core$Int64 _39;
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
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:56
_20 = &param0->range;
_21 = *_20;
_22 = _21.start;
_23 = &param0->range;
_24 = *_23;
_25 = _24.step;
// begin inline call to function frost.core.Int.get_asInt64():frost.core.Int64 from Int64List.frost:56:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_28 = param1.value;
_29 = ((int64_t) _28);
_30 = (frost$core$Int64) {_29};
_32 = _25.value;
_33 = _30.value;
_34 = _32 * _33;
_35 = (frost$core$Int64) {_34};
_36 = _22.value;
_37 = _35.value;
_38 = _36 + _37;
_39 = (frost$core$Int64) {_38};
return _39;

}
frost$core$String* org$frostlang$frost$Int64List$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frost$Int64List* param0 = (org$frostlang$frost$Int64List*) rawSelf;

frost$collections$CollectionView* _1;
$fn7 _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:61
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
void org$frostlang$frost$Int64List$cleanup(void* rawSelf) {
org$frostlang$frost$Int64List* param0 = (org$frostlang$frost$Int64List*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/Int64List.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

