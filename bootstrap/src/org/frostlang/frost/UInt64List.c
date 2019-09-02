#include "org/frostlang/frost/UInt64List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/UInt64.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frost$UInt64List$$IDX$frost$core$Int$R$frost$core$UInt64$shim(org$frostlang$frost$UInt64List* p0, frost$core$Int p1) {
    frost$core$UInt64 result = org$frostlang$frost$UInt64List$$IDX$frost$core$Int$R$frost$core$UInt64(p0, p1);

    frost$core$UInt64$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$UInt64List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frost$UInt64List$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } org$frostlang$frost$UInt64List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frost$UInt64List$_frost$collections$CollectionView, { org$frostlang$frost$UInt64List$$IDX$frost$core$Int$R$frost$core$UInt64$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$UInt64List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$UInt64List$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

static frost$core$String $s1;
org$frostlang$frost$UInt64List$class_type org$frostlang$frost$UInt64List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$UInt64List$_frost$collections$Iterable, { org$frostlang$frost$UInt64List$get_asString$R$frost$core$String, org$frostlang$frost$UInt64List$cleanup, org$frostlang$frost$UInt64List$get_count$R$frost$core$Int, org$frostlang$frost$UInt64List$$IDX$frost$core$Int$R$frost$core$UInt64$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn7)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 30, 311478962839702771, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -1590601688145268021, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 107, -9166622798809800096, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT(org$frostlang$frost$UInt64List* param0, frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param1) {

frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT* _1;
frost$core$Int _4;
frost$core$Int* _5;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:16
_1 = &param0->range;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:17
_4 = org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int(param1);
_5 = &param0->_count;
*_5 = _4;
return;

}
frost$core$Int org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$Int64 local0;
frost$core$UInt64 local1;
frost$core$Int64 local2;
frost$core$Bit _1;
bool _2;
frost$core$UInt64 _5;
frost$core$UInt64 _6;
uint64_t _7;
uint64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$UInt64 _14;
frost$core$UInt64 _15;
uint64_t _16;
uint64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _23;
frost$core$UInt64 _27;
frost$core$UInt64 _28;
uint64_t _29;
uint64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _36;
frost$core$UInt64 _40;
frost$core$UInt64 _41;
uint64_t _42;
uint64_t _43;
uint64_t _44;
frost$core$UInt64 _45;
frost$core$UInt64 _46;
uint64_t _47;
uint64_t _48;
uint64_t _49;
frost$core$UInt64 _50;
uint64_t _53;
int64_t _54;
frost$core$Int64 _55;
frost$core$Int64 _57;
int64_t _60;
int64_t _61;
bool _62;
frost$core$Bit _63;
bool _64;
int64_t _67;
frost$core$Int64 _68;
int64_t _72;
frost$core$Int64 _73;
frost$core$Int64 _76;
frost$core$Int64 _77;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int64 _81;
int64_t _84;
int64_t _85;
frost$core$Int _86;
frost$core$UInt64 _92;
frost$core$UInt64 _95;
frost$core$UInt64 _96;
uint64_t _97;
uint64_t _98;
uint64_t _99;
frost$core$UInt64 _100;
frost$core$UInt64 _101;
uint64_t _102;
uint64_t _103;
uint64_t _104;
frost$core$UInt64 _105;
frost$core$UInt64 _106;
uint64_t _107;
uint64_t _108;
uint64_t _109;
frost$core$UInt64 _110;
uint64_t _113;
int64_t _114;
frost$core$Int64 _115;
frost$core$Int64 _117;
int64_t _120;
int64_t _121;
bool _122;
frost$core$Bit _123;
bool _124;
int64_t _127;
frost$core$Int64 _128;
int64_t _132;
frost$core$Int64 _133;
frost$core$Int64 _136;
frost$core$Int64 _137;
int64_t _138;
int64_t _139;
int64_t _140;
frost$core$Int64 _141;
int64_t _144;
int64_t _145;
frost$core$Int _146;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:22
_1 = param0.inclusive;
_2 = _1.value;
if (_2) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:23
_5 = param0.step;
_6 = (frost$core$UInt64) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:24
_14 = param0.end;
_15 = param0.start;
_16 = _14.value;
_17 = _15.value;
_18 = _16 < _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:25
_23 = (frost$core$Int) {0u};
return _23;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:27
_27 = param0.end;
_28 = param0.start;
_29 = _27.value;
_30 = _28.value;
_31 = _29 > _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:28
_36 = (frost$core$Int) {0u};
return _36;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:30
_40 = param0.end;
_41 = param0.start;
_42 = _40.value;
_43 = _41.value;
_44 = _42 - _43;
_45 = (frost$core$UInt64) {_44};
_46 = param0.step;
_47 = _45.value;
_48 = _46.value;
_49 = _47 / _48;
_50 = (frost$core$UInt64) {_49};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from UInt64List.frost:30:62
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:455
_53 = _50.value;
_54 = ((int64_t) _53);
_55 = (frost$core$Int64) {_54};
_57 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from UInt64List.frost:30:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:498
_60 = _55.value;
_61 = _57.value;
_62 = _60 > _61;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:499
_67 = _55.value;
_68 = (frost$core$Int64) {_67};
*(&local0) = _68;
goto block12;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:501
_72 = _57.value;
_73 = (frost$core$Int64) {_72};
*(&local0) = _73;
goto block12;
block12:;
_76 = *(&local0);
_77 = (frost$core$Int64) {1u};
_78 = _76.value;
_79 = _77.value;
_80 = _78 + _79;
_81 = (frost$core$Int64) {_80};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UInt64List.frost:30:82
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_84 = _81.value;
_85 = ((int64_t) _84);
_86 = (frost$core$Int) {_85};
return _86;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:34
_92 = (frost$core$UInt64) {1u};
*(&local1) = _92;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:35
_95 = param0.end;
_96 = param0.start;
_97 = _95.value;
_98 = _96.value;
_99 = _97 - _98;
_100 = (frost$core$UInt64) {_99};
_101 = *(&local1);
_102 = _100.value;
_103 = _101.value;
_104 = _102 + _103;
_105 = (frost$core$UInt64) {_104};
_106 = param0.step;
_107 = _105.value;
_108 = _106.value;
_109 = _107 / _108;
_110 = (frost$core$UInt64) {_109};
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from UInt64List.frost:35:71
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt64.stub:455
_113 = _110.value;
_114 = ((int64_t) _113);
_115 = (frost$core$Int64) {_114};
_117 = (frost$core$Int64) {0u};
// begin inline call to function frost.core.Int64.max(other:frost.core.Int64):frost.core.Int64 from UInt64List.frost:35:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:498
_120 = _115.value;
_121 = _117.value;
_122 = _120 > _121;
_123 = (frost$core$Bit) {_122};
_124 = _123.value;
if (_124) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:499
_127 = _115.value;
_128 = (frost$core$Int64) {_127};
*(&local2) = _128;
goto block17;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:501
_132 = _117.value;
_133 = (frost$core$Int64) {_132};
*(&local2) = _133;
goto block17;
block17:;
_136 = *(&local2);
_137 = (frost$core$Int64) {1u};
_138 = _136.value;
_139 = _137.value;
_140 = _138 + _139;
_141 = (frost$core$Int64) {_140};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UInt64List.frost:35:91
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_144 = _141.value;
_145 = ((int64_t) _144);
_146 = (frost$core$Int) {_145};
return _146;
block2:;
goto block21;
block21:;

}
frost$core$Int org$frostlang$frost$UInt64List$get_count$R$frost$core$Int(org$frostlang$frost$UInt64List* param0) {

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:41
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$core$UInt64 org$frostlang$frost$UInt64List$$IDX$frost$core$Int$R$frost$core$UInt64(org$frostlang$frost$UInt64List* param0, frost$core$Int param1) {

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
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT* _20;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT _21;
frost$core$UInt64 _22;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT* _23;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT _24;
frost$core$UInt64 _25;
int64_t _28;
uint64_t _29;
frost$core$UInt64 _30;
uint64_t _32;
uint64_t _33;
uint64_t _34;
frost$core$UInt64 _35;
uint64_t _36;
uint64_t _37;
uint64_t _38;
frost$core$UInt64 _39;
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
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:46
_20 = &param0->range;
_21 = *_20;
_22 = _21.start;
_23 = &param0->range;
_24 = *_23;
_25 = _24.step;
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from UInt64List.frost:46:49
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:816
_28 = param1.value;
_29 = ((uint64_t) _28);
_30 = (frost$core$UInt64) {_29};
_32 = _25.value;
_33 = _30.value;
_34 = _32 * _33;
_35 = (frost$core$UInt64) {_34};
_36 = _22.value;
_37 = _35.value;
_38 = _36 + _37;
_39 = (frost$core$UInt64) {_38};
return _39;

}
frost$core$String* org$frostlang$frost$UInt64List$get_asString$R$frost$core$String(org$frostlang$frost$UInt64List* param0) {

frost$collections$CollectionView* _1;
$fn7 _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:51
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
void org$frostlang$frost$UInt64List$cleanup(org$frostlang$frost$UInt64List* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UInt64List.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

