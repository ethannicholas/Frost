#include "org/frostlang/frost/IntList.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$IntList$$IDX$frost$core$Int$R$frost$core$Int$shim(org$frostlang$frost$IntList* p0, frost$core$Int p1) {
    frost$core$Int result = org$frostlang$frost$IntList$$IDX$frost$core$Int$R$frost$core$Int(p0, p1);

    frost$core$Int$wrapper* $tmp2;
    $tmp2 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } org$frostlang$frost$IntList$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { org$frostlang$frost$IntList$$IDX$frost$core$Int$R$frost$core$Int$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$IntList$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$IntList$_frost$collections$ListView, { org$frostlang$frost$IntList$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$IntList$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$IntList$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frost$IntList$class_type org$frostlang$frost$IntList$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$IntList$_frost$collections$Iterable, { org$frostlang$frost$IntList$get_asString$R$frost$core$String, org$frostlang$frost$IntList$cleanup, org$frostlang$frost$IntList$get_count$R$frost$core$Int, org$frostlang$frost$IntList$$IDX$frost$core$Int$R$frost$core$Int$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn7)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x4c\x69\x73\x74", 27, 2988854115842111026, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 13, -1510174416678479626, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x49\x6e\x74\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 101, -103764632975423840, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$IntList$init$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT(void* rawSelf, frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT param1) {
org$frostlang$frost$IntList* param0 = (org$frostlang$frost$IntList*) rawSelf;

frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT* _1;
frost$core$Int _4;
frost$core$Int* _5;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:16
_1 = &param0->range;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:17
_4 = org$frostlang$frost$IntList$computeCount$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$R$frost$core$Int(param1);
_5 = &param0->_count;
*_5 = _4;
return;

}
frost$core$Int org$frostlang$frost$IntList$computeCount$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT param0) {

frost$core$Int local0;
frost$core$Int local1;
frost$core$Int local2;
frost$core$Bit _1;
bool _2;
frost$core$Int _5;
frost$core$Int _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$Int _14;
frost$core$Int _15;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _23;
frost$core$Int _27;
frost$core$Int _28;
int64_t _29;
int64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _36;
frost$core$Int _40;
frost$core$Int _41;
int64_t _42;
int64_t _43;
int64_t _44;
frost$core$Int _45;
frost$core$Int _46;
int64_t _47;
int64_t _48;
int64_t _49;
frost$core$Int _50;
frost$core$Int _51;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _58;
int64_t _61;
frost$core$Int _62;
int64_t _66;
frost$core$Int _67;
frost$core$Int _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
int64_t _74;
frost$core$Int _75;
frost$core$Int _80;
frost$core$Int _81;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$core$Int _89;
frost$core$Int _90;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$core$Int _98;
frost$core$Int _101;
frost$core$Int _106;
frost$core$Int _107;
int64_t _108;
int64_t _109;
bool _110;
frost$core$Bit _111;
bool _112;
frost$core$Int _115;
frost$core$Int _118;
frost$core$Int _122;
frost$core$Int _123;
int64_t _124;
int64_t _125;
int64_t _126;
frost$core$Int _127;
frost$core$Int _128;
int64_t _129;
int64_t _130;
int64_t _131;
frost$core$Int _132;
frost$core$Int _133;
int64_t _134;
int64_t _135;
int64_t _136;
frost$core$Int _137;
frost$core$Int _138;
int64_t _141;
int64_t _142;
bool _143;
frost$core$Bit _144;
bool _145;
int64_t _148;
frost$core$Int _149;
int64_t _153;
frost$core$Int _154;
frost$core$Int _157;
frost$core$Int _158;
int64_t _159;
int64_t _160;
int64_t _161;
frost$core$Int _162;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:22
_1 = param0.inclusive;
_2 = _1.value;
if (_2) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:23
_5 = param0.step;
_6 = (frost$core$Int) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:24
_14 = param0.end;
_15 = param0.start;
_16 = _14.value;
_17 = _15.value;
_18 = _16 < _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:25
_23 = (frost$core$Int) {0u};
return _23;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:27
_27 = param0.end;
_28 = param0.start;
_29 = _27.value;
_30 = _28.value;
_31 = _29 > _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:28
_36 = (frost$core$Int) {0u};
return _36;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:30
_40 = param0.end;
_41 = param0.start;
_42 = _40.value;
_43 = _41.value;
_44 = _42 - _43;
_45 = (frost$core$Int) {_44};
_46 = param0.step;
_47 = _45.value;
_48 = _46.value;
_49 = _47 / _48;
_50 = (frost$core$Int) {_49};
_51 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from IntList.frost:30:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_54 = _50.value;
_55 = _51.value;
_56 = _54 > _55;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_61 = _50.value;
_62 = (frost$core$Int) {_61};
*(&local0) = _62;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_66 = _51.value;
_67 = (frost$core$Int) {_66};
*(&local0) = _67;
goto block11;
block11:;
_70 = *(&local0);
_71 = (frost$core$Int) {1u};
_72 = _70.value;
_73 = _71.value;
_74 = _72 + _73;
_75 = (frost$core$Int) {_74};
return _75;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:34
_80 = param0.step;
_81 = (frost$core$Int) {0u};
_82 = _80.value;
_83 = _81.value;
_84 = _82 > _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:35
_89 = param0.end;
_90 = param0.start;
_91 = _89.value;
_92 = _90.value;
_93 = _91 <= _92;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:36
_98 = (frost$core$Int) {0u};
return _98;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:38
_101 = (frost$core$Int) {18446744073709551615u};
*(&local1) = _101;
goto block15;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:40
_106 = param0.end;
_107 = param0.start;
_108 = _106.value;
_109 = _107.value;
_110 = _108 >= _109;
_111 = (frost$core$Bit) {_110};
_112 = _111.value;
if (_112) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:41
_115 = (frost$core$Int) {0u};
return _115;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:43
_118 = (frost$core$Int) {1u};
*(&local1) = _118;
goto block15;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:45
_122 = param0.end;
_123 = param0.start;
_124 = _122.value;
_125 = _123.value;
_126 = _124 - _125;
_127 = (frost$core$Int) {_126};
_128 = *(&local1);
_129 = _127.value;
_130 = _128.value;
_131 = _129 + _130;
_132 = (frost$core$Int) {_131};
_133 = param0.step;
_134 = _132.value;
_135 = _133.value;
_136 = _134 / _135;
_137 = (frost$core$Int) {_136};
_138 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.max(other:frost.core.Int):frost.core.Int from IntList.frost:45:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_141 = _137.value;
_142 = _138.value;
_143 = _141 > _142;
_144 = (frost$core$Bit) {_143};
_145 = _144.value;
if (_145) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_148 = _137.value;
_149 = (frost$core$Int) {_148};
*(&local2) = _149;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_153 = _138.value;
_154 = (frost$core$Int) {_153};
*(&local2) = _154;
goto block21;
block21:;
_157 = *(&local2);
_158 = (frost$core$Int) {1u};
_159 = _157.value;
_160 = _158.value;
_161 = _159 + _160;
_162 = (frost$core$Int) {_161};
return _162;
block2:;
goto block24;
block24:;

}
frost$core$Int org$frostlang$frost$IntList$get_count$R$frost$core$Int(void* rawSelf) {
org$frostlang$frost$IntList* param0 = (org$frostlang$frost$IntList*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:51
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$core$Int org$frostlang$frost$IntList$$IDX$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int param1) {
org$frostlang$frost$IntList* param0 = (org$frostlang$frost$IntList*) rawSelf;

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
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT* _20;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _21;
frost$core$Int _22;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT* _23;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _24;
frost$core$Int _25;
int64_t _26;
int64_t _27;
int64_t _28;
frost$core$Int _29;
int64_t _30;
int64_t _31;
int64_t _32;
frost$core$Int _33;
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
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:56
_20 = &param0->range;
_21 = *_20;
_22 = _21.start;
_23 = &param0->range;
_24 = *_23;
_25 = _24.step;
_26 = _25.value;
_27 = param1.value;
_28 = _26 * _27;
_29 = (frost$core$Int) {_28};
_30 = _22.value;
_31 = _29.value;
_32 = _30 + _31;
_33 = (frost$core$Int) {_32};
return _33;

}
frost$core$String* org$frostlang$frost$IntList$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frost$IntList* param0 = (org$frostlang$frost$IntList*) rawSelf;

frost$collections$CollectionView* _1;
$fn7 _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:61
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
void org$frostlang$frost$IntList$cleanup(void* rawSelf) {
org$frostlang$frost$IntList* param0 = (org$frostlang$frost$IntList*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/IntList.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

