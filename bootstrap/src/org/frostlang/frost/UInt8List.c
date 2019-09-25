#include "org/frostlang/frost/UInt8List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/UInt8.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt8.Cfrost/core/UInt8.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt32.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$UInt8List$$IDX$frost$core$Int$R$frost$core$UInt8$shim(org$frostlang$frost$UInt8List* p0, frost$core$Int p1) {
    frost$core$UInt8 result = org$frostlang$frost$UInt8List$$IDX$frost$core$Int$R$frost$core$UInt8(p0, p1);

    frost$core$UInt8$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$UInt8List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frost$UInt8List$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$UInt8List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$UInt8List$_frost$collections$CollectionView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } org$frostlang$frost$UInt8List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$UInt8List$_frost$collections$Iterable, { org$frostlang$frost$UInt8List$$IDX$frost$core$Int$R$frost$core$UInt8$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlang$frost$UInt8List$class_type org$frostlang$frost$UInt8List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$UInt8List$_frost$collections$ListView, { org$frostlang$frost$UInt8List$get_asString$R$frost$core$String, org$frostlang$frost$UInt8List$cleanup, org$frostlang$frost$UInt8List$get_count$R$frost$core$Int, org$frostlang$frost$UInt8List$$IDX$frost$core$Int$R$frost$core$UInt8$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn7)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x38\x4c\x69\x73\x74", 29, 7447758346237404123, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 15, -8829775325418589869, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 105, -3105399920753693204, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT(void* rawSelf, frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT param1) {
org$frostlang$frost$UInt8List* param0 = (org$frostlang$frost$UInt8List*) rawSelf;

frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT* _1;
frost$core$Int _4;
frost$core$Int* _5;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:16
_1 = &param0->range;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:17
_4 = org$frostlang$frost$UInt8List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$core$Int(param1);
_5 = &param0->_count;
*_5 = _4;
return;

}
frost$core$Int org$frostlang$frost$UInt8List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT param0) {

frost$core$Int64 local0;
frost$core$UInt8 local1;
frost$core$Int64 local2;
frost$core$Bit _1;
bool _2;
frost$core$UInt8 _5;
frost$core$UInt8 _6;
uint8_t _7;
uint8_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$UInt8 _14;
frost$core$UInt8 _15;
uint8_t _16;
uint8_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _23;
frost$core$UInt8 _27;
frost$core$UInt8 _28;
uint8_t _29;
uint8_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _36;
frost$core$UInt8 _40;
frost$core$UInt32 _41;
frost$core$UInt8 _42;
frost$core$UInt32 _43;
uint32_t _44;
uint32_t _45;
uint32_t _46;
frost$core$UInt32 _47;
frost$core$UInt8 _48;
frost$core$UInt32 _49;
uint32_t _50;
uint32_t _51;
uint32_t _52;
frost$core$UInt32 _53;
frost$core$Int _54;
uint32_t _57;
int64_t _58;
int64_t _59;
int64_t _60;
bool _61;
frost$core$Bit _62;
bool _63;
uint32_t _66;
int64_t _67;
frost$core$Int64 _68;
int64_t _72;
int64_t _73;
frost$core$Int64 _74;
frost$core$Int64 _77;
frost$core$Int64 _78;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int64 _82;
int64_t _85;
int64_t _86;
frost$core$Int _87;
frost$core$UInt8 _93;
frost$core$UInt8 _96;
frost$core$UInt32 _97;
frost$core$UInt8 _98;
frost$core$UInt32 _99;
uint32_t _100;
uint32_t _101;
uint32_t _102;
frost$core$UInt32 _103;
frost$core$UInt8 _104;
frost$core$UInt32 _105;
uint32_t _106;
uint32_t _107;
uint32_t _108;
frost$core$UInt32 _109;
frost$core$UInt8 _110;
frost$core$UInt32 _111;
uint32_t _112;
uint32_t _113;
uint32_t _114;
frost$core$UInt32 _115;
frost$core$Int _116;
uint32_t _119;
int64_t _120;
int64_t _121;
int64_t _122;
bool _123;
frost$core$Bit _124;
bool _125;
uint32_t _128;
int64_t _129;
frost$core$Int64 _130;
int64_t _134;
int64_t _135;
frost$core$Int64 _136;
frost$core$Int64 _139;
frost$core$Int64 _140;
int64_t _141;
int64_t _142;
int64_t _143;
frost$core$Int64 _144;
int64_t _147;
int64_t _148;
frost$core$Int _149;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:22
_1 = param0.inclusive;
_2 = _1.value;
if (_2) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:23
_5 = param0.step;
_6 = (frost$core$UInt8) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:24
_14 = param0.end;
_15 = param0.start;
_16 = _14.value;
_17 = _15.value;
_18 = _16 < _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:25
_23 = (frost$core$Int) {0u};
return _23;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:27
_27 = param0.end;
_28 = param0.start;
_29 = _27.value;
_30 = _28.value;
_31 = _29 > _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:28
_36 = (frost$core$Int) {0u};
return _36;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:30
_40 = param0.end;
_41 = frost$core$UInt32$init$frost$core$UInt8(_40);
_42 = param0.start;
_43 = frost$core$UInt32$init$frost$core$UInt8(_42);
_44 = _41.value;
_45 = _43.value;
_46 = _44 - _45;
_47 = (frost$core$UInt32) {_46};
_48 = param0.step;
_49 = frost$core$UInt32$init$frost$core$UInt8(_48);
_50 = _47.value;
_51 = _49.value;
_52 = _50 / _51;
_53 = (frost$core$UInt32) {_52};
_54 = (frost$core$Int) {0u};
// begin inline call to function frost.core.UInt32.max(other:frost.core.Int):frost.core.Int64 from UInt8List.frost:30:66
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:828
_57 = _53.value;
_58 = ((int64_t) _57);
_59 = _54.value;
_60 = ((int64_t) _59);
_61 = _58 > _60;
_62 = (frost$core$Bit) {_61};
_63 = _62.value;
if (_63) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:829
_66 = _53.value;
_67 = ((int64_t) _66);
_68 = (frost$core$Int64) {_67};
*(&local0) = _68;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:831
_72 = _54.value;
_73 = ((int64_t) _72);
_74 = (frost$core$Int64) {_73};
*(&local0) = _74;
goto block11;
block11:;
_77 = *(&local0);
_78 = (frost$core$Int64) {1u};
_79 = _77.value;
_80 = _78.value;
_81 = _79 + _80;
_82 = (frost$core$Int64) {_81};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UInt8List.frost:30:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_85 = _82.value;
_86 = ((int64_t) _85);
_87 = (frost$core$Int) {_86};
return _87;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:34
_93 = (frost$core$UInt8) {1u};
*(&local1) = _93;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:35
_96 = param0.end;
_97 = frost$core$UInt32$init$frost$core$UInt8(_96);
_98 = param0.start;
_99 = frost$core$UInt32$init$frost$core$UInt8(_98);
_100 = _97.value;
_101 = _99.value;
_102 = _100 - _101;
_103 = (frost$core$UInt32) {_102};
_104 = *(&local1);
_105 = frost$core$UInt32$init$frost$core$UInt8(_104);
_106 = _103.value;
_107 = _105.value;
_108 = _106 + _107;
_109 = (frost$core$UInt32) {_108};
_110 = param0.step;
_111 = frost$core$UInt32$init$frost$core$UInt8(_110);
_112 = _109.value;
_113 = _111.value;
_114 = _112 / _113;
_115 = (frost$core$UInt32) {_114};
_116 = (frost$core$Int) {0u};
// begin inline call to function frost.core.UInt32.max(other:frost.core.Int):frost.core.Int64 from UInt8List.frost:35:75
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:828
_119 = _115.value;
_120 = ((int64_t) _119);
_121 = _116.value;
_122 = ((int64_t) _121);
_123 = _120 > _122;
_124 = (frost$core$Bit) {_123};
_125 = _124.value;
if (_125) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:829
_128 = _115.value;
_129 = ((int64_t) _128);
_130 = (frost$core$Int64) {_129};
*(&local2) = _130;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:831
_134 = _116.value;
_135 = ((int64_t) _134);
_136 = (frost$core$Int64) {_135};
*(&local2) = _136;
goto block15;
block15:;
_139 = *(&local2);
_140 = (frost$core$Int64) {1u};
_141 = _139.value;
_142 = _140.value;
_143 = _141 + _142;
_144 = (frost$core$Int64) {_143};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UInt8List.frost:35:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_147 = _144.value;
_148 = ((int64_t) _147);
_149 = (frost$core$Int) {_148};
return _149;
block2:;
goto block19;
block19:;

}
frost$core$Int org$frostlang$frost$UInt8List$get_count$R$frost$core$Int(void* rawSelf) {
org$frostlang$frost$UInt8List* param0 = (org$frostlang$frost$UInt8List*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:41
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$core$UInt8 org$frostlang$frost$UInt8List$$IDX$frost$core$Int$R$frost$core$UInt8(void* rawSelf, frost$core$Int param1) {
org$frostlang$frost$UInt8List* param0 = (org$frostlang$frost$UInt8List*) rawSelf;

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
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT* _20;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT _21;
frost$core$UInt8 _22;
frost$core$UInt32 _23;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT* _24;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT _25;
frost$core$UInt8 _26;
frost$core$UInt32 _27;
int64_t _30;
uint8_t _31;
frost$core$UInt8 _32;
frost$core$UInt32 _34;
uint32_t _35;
uint32_t _36;
uint32_t _37;
frost$core$UInt32 _38;
uint32_t _39;
uint32_t _40;
uint32_t _41;
frost$core$UInt32 _42;
uint32_t _45;
uint8_t _46;
frost$core$UInt8 _47;
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
_16 = (frost$core$Int) {45u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _16, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:46
_20 = &param0->range;
_21 = *_20;
_22 = _21.start;
_23 = frost$core$UInt32$init$frost$core$UInt8(_22);
_24 = &param0->range;
_25 = *_24;
_26 = _25.step;
_27 = frost$core$UInt32$init$frost$core$UInt8(_26);
// begin inline call to function frost.core.Int.get_asUInt8():frost.core.UInt8 from UInt8List.frost:46:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:991
_30 = param1.value;
_31 = ((uint8_t) _30);
_32 = (frost$core$UInt8) {_31};
_34 = frost$core$UInt32$init$frost$core$UInt8(_32);
_35 = _27.value;
_36 = _34.value;
_37 = _35 * _36;
_38 = (frost$core$UInt32) {_37};
_39 = _23.value;
_40 = _38.value;
_41 = _39 + _40;
_42 = (frost$core$UInt32) {_41};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8List.frost:46:58
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_45 = _42.value;
_46 = ((uint8_t) _45);
_47 = (frost$core$UInt8) {_46};
return _47;

}
frost$core$String* org$frostlang$frost$UInt8List$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frost$UInt8List* param0 = (org$frostlang$frost$UInt8List*) rawSelf;

frost$collections$CollectionView* _1;
$fn7 _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:51
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
void org$frostlang$frost$UInt8List$cleanup(void* rawSelf) {
org$frostlang$frost$UInt8List* param0 = (org$frostlang$frost$UInt8List*) rawSelf;

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt8List.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

