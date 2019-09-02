#include "org/frostlang/frost/UIntList.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/UInt.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt.Cfrost/core/UInt.GT.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frost$UIntList$$IDX$frost$core$Int$R$frost$core$UInt$shim(org$frostlang$frost$UIntList* p0, frost$core$Int p1) {
    frost$core$UInt result = org$frostlang$frost$UIntList$$IDX$frost$core$Int$R$frost$core$UInt(p0, p1);

    frost$core$UInt$wrapper* $tmp2;
    $tmp2 = (frost$core$UInt$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt$wrapperclass);
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

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } org$frostlang$frost$UIntList$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { org$frostlang$frost$UIntList$$IDX$frost$core$Int$R$frost$core$UInt$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frost$UIntList$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frost$UIntList$_frost$collections$ListView, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frost$UIntList$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &org$frostlang$frost$UIntList$_frost$collections$Iterable, { org$frostlang$frost$UIntList$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frost$UIntList$class_type org$frostlang$frost$UIntList$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frost$UIntList$_frost$collections$CollectionView, { org$frostlang$frost$UIntList$get_asString$R$frost$core$String, org$frostlang$frost$UIntList$cleanup, org$frostlang$frost$UIntList$get_count$R$frost$core$Int, org$frostlang$frost$UIntList$$IDX$frost$core$Int$R$frost$core$UInt$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn7)(frost$collections$CollectionView*, frost$core$String*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x4c\x69\x73\x74", 28, 4105761893276500773, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 14, -8961356375471036831, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x2e\x55\x49\x6e\x74\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 103, -8521689527917949632, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frost$UIntList$init$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT(org$frostlang$frost$UIntList* param0, frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT param1) {

frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT* _1;
frost$core$Int _4;
frost$core$Int* _5;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:16
_1 = &param0->range;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:17
_4 = org$frostlang$frost$UIntList$computeCount$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$R$frost$core$Int(param1);
_5 = &param0->_count;
*_5 = _4;
return;

}
frost$core$Int org$frostlang$frost$UIntList$computeCount$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$R$frost$core$Int(frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT param0) {

frost$core$Int64 local0;
frost$core$UInt local1;
frost$core$Int64 local2;
frost$core$Bit _1;
bool _2;
frost$core$UInt _5;
frost$core$UInt _6;
uint64_t _7;
uint64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
frost$core$UInt _14;
frost$core$UInt _15;
uint64_t _16;
uint64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _23;
frost$core$UInt _27;
frost$core$UInt _28;
uint64_t _29;
uint64_t _30;
bool _31;
frost$core$Bit _32;
bool _33;
frost$core$Int _36;
frost$core$UInt _40;
frost$core$UInt _41;
uint64_t _42;
uint64_t _43;
uint64_t _44;
frost$core$UInt _45;
frost$core$UInt _46;
uint64_t _47;
uint64_t _48;
uint64_t _49;
frost$core$UInt _50;
frost$core$Int _51;
uint64_t _54;
int64_t _55;
int64_t _56;
int64_t _57;
bool _58;
frost$core$Bit _59;
bool _60;
uint64_t _63;
int64_t _64;
frost$core$Int64 _65;
int64_t _69;
int64_t _70;
frost$core$Int64 _71;
frost$core$Int64 _74;
frost$core$Int64 _75;
int64_t _76;
int64_t _77;
int64_t _78;
frost$core$Int64 _79;
int64_t _82;
int64_t _83;
frost$core$Int _84;
frost$core$UInt _90;
frost$core$UInt _93;
frost$core$UInt _94;
uint64_t _95;
uint64_t _96;
uint64_t _97;
frost$core$UInt _98;
frost$core$UInt _99;
uint64_t _100;
uint64_t _101;
uint64_t _102;
frost$core$UInt _103;
frost$core$UInt _104;
uint64_t _105;
uint64_t _106;
uint64_t _107;
frost$core$UInt _108;
frost$core$Int _109;
uint64_t _112;
int64_t _113;
int64_t _114;
int64_t _115;
bool _116;
frost$core$Bit _117;
bool _118;
uint64_t _121;
int64_t _122;
frost$core$Int64 _123;
int64_t _127;
int64_t _128;
frost$core$Int64 _129;
frost$core$Int64 _132;
frost$core$Int64 _133;
int64_t _134;
int64_t _135;
int64_t _136;
frost$core$Int64 _137;
int64_t _140;
int64_t _141;
frost$core$Int _142;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:22
_1 = param0.inclusive;
_2 = _1.value;
if (_2) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:23
_5 = param0.step;
_6 = (frost$core$UInt) {0u};
_7 = _5.value;
_8 = _6.value;
_9 = _7 > _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:24
_14 = param0.end;
_15 = param0.start;
_16 = _14.value;
_17 = _15.value;
_18 = _16 < _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:25
_23 = (frost$core$Int) {0u};
return _23;
block8:;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:27
_27 = param0.end;
_28 = param0.start;
_29 = _27.value;
_30 = _28.value;
_31 = _29 > _30;
_32 = (frost$core$Bit) {_31};
_33 = _32.value;
if (_33) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:28
_36 = (frost$core$Int) {0u};
return _36;
block10:;
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:30
_40 = param0.end;
_41 = param0.start;
_42 = _40.value;
_43 = _41.value;
_44 = _42 - _43;
_45 = (frost$core$UInt) {_44};
_46 = param0.step;
_47 = _45.value;
_48 = _46.value;
_49 = _47 / _48;
_50 = (frost$core$UInt) {_49};
_51 = (frost$core$Int) {0u};
// begin inline call to function frost.core.UInt.max(other:frost.core.Int):frost.core.Int64 from UIntList.frost:30:66
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt.stub:687
_54 = _50.value;
_55 = ((int64_t) _54);
_56 = _51.value;
_57 = ((int64_t) _56);
_58 = _55 > _57;
_59 = (frost$core$Bit) {_58};
_60 = _59.value;
if (_60) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt.stub:688
_63 = _50.value;
_64 = ((int64_t) _63);
_65 = (frost$core$Int64) {_64};
*(&local0) = _65;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt.stub:690
_69 = _51.value;
_70 = ((int64_t) _69);
_71 = (frost$core$Int64) {_70};
*(&local0) = _71;
goto block11;
block11:;
_74 = *(&local0);
_75 = (frost$core$Int64) {1u};
_76 = _74.value;
_77 = _75.value;
_78 = _76 + _77;
_79 = (frost$core$Int64) {_78};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UIntList.frost:30:74
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_82 = _79.value;
_83 = ((int64_t) _82);
_84 = (frost$core$Int) {_83};
return _84;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:33
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:34
_90 = (frost$core$UInt) {1u};
*(&local1) = _90;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:35
_93 = param0.end;
_94 = param0.start;
_95 = _93.value;
_96 = _94.value;
_97 = _95 - _96;
_98 = (frost$core$UInt) {_97};
_99 = *(&local1);
_100 = _98.value;
_101 = _99.value;
_102 = _100 + _101;
_103 = (frost$core$UInt) {_102};
_104 = param0.step;
_105 = _103.value;
_106 = _104.value;
_107 = _105 / _106;
_108 = (frost$core$UInt) {_107};
_109 = (frost$core$Int) {0u};
// begin inline call to function frost.core.UInt.max(other:frost.core.Int):frost.core.Int64 from UIntList.frost:35:75
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt.stub:687
_112 = _108.value;
_113 = ((int64_t) _112);
_114 = _109.value;
_115 = ((int64_t) _114);
_116 = _113 > _115;
_117 = (frost$core$Bit) {_116};
_118 = _117.value;
if (_118) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt.stub:688
_121 = _108.value;
_122 = ((int64_t) _121);
_123 = (frost$core$Int64) {_122};
*(&local2) = _123;
goto block15;
block17:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/UInt.stub:690
_127 = _109.value;
_128 = ((int64_t) _127);
_129 = (frost$core$Int64) {_128};
*(&local2) = _129;
goto block15;
block15:;
_132 = *(&local2);
_133 = (frost$core$Int64) {1u};
_134 = _132.value;
_135 = _133.value;
_136 = _134 + _135;
_137 = (frost$core$Int64) {_136};
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from UIntList.frost:35:83
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_140 = _137.value;
_141 = ((int64_t) _140);
_142 = (frost$core$Int) {_141};
return _142;
block2:;
goto block19;
block19:;

}
frost$core$Int org$frostlang$frost$UIntList$get_count$R$frost$core$Int(org$frostlang$frost$UIntList* param0) {

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:41
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$core$UInt org$frostlang$frost$UIntList$$IDX$frost$core$Int$R$frost$core$UInt(org$frostlang$frost$UIntList* param0, frost$core$Int param1) {

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
frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT* _20;
frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT _21;
frost$core$UInt _22;
frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT* _23;
frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT _24;
frost$core$UInt _25;
int64_t _28;
uint64_t _29;
frost$core$UInt _30;
uint64_t _32;
uint64_t _33;
uint64_t _34;
frost$core$UInt _35;
uint64_t _36;
uint64_t _37;
uint64_t _38;
frost$core$UInt _39;
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
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:46
_20 = &param0->range;
_21 = *_20;
_22 = _21.start;
_23 = &param0->range;
_24 = *_23;
_25 = _24.step;
// begin inline call to function frost.core.Int.get_asUInt():frost.core.UInt from UIntList.frost:46:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:985
_28 = param1.value;
_29 = ((uint64_t) _28);
_30 = (frost$core$UInt) {_29};
_32 = _25.value;
_33 = _30.value;
_34 = _32 * _33;
_35 = (frost$core$UInt) {_34};
_36 = _22.value;
_37 = _35.value;
_38 = _36 + _37;
_39 = (frost$core$UInt) {_38};
return _39;

}
frost$core$String* org$frostlang$frost$UIntList$get_asString$R$frost$core$String(org$frostlang$frost$UIntList* param0) {

frost$collections$CollectionView* _1;
$fn7 _2;
frost$core$String* _3;
frost$core$String* _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:51
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
void org$frostlang$frost$UIntList$cleanup(org$frostlang$frost$UIntList* param0) {

frost$core$Object* _1;
// /Users/ethannicholas/Dropbox/Frost/src/org/frostlang/frost/UIntList.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
return;

}

