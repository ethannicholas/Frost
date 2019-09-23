#include "frost/collections/ListView/PowerSetIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/UInt64.h"
#include "frost/core/Int.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim(frost$collections$ListView$PowerSetIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$PowerSetIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$PowerSetIterator$class_type frost$collections$ListView$PowerSetIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$PowerSetIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$PowerSetIterator$cleanup, frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn7)(frost$collections$ListView*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 43, 3587913374569870576, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x6f\x77\x65\x72\x53\x65\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 156, 1704081094291221051, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, -4057673255977011726, NULL };

void frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$collections$ListView$PowerSetIterator* param0 = (frost$collections$ListView$PowerSetIterator*) rawSelf;

frost$core$UInt64 _1;
frost$core$UInt64* _2;
frost$core$Object* _5;
frost$collections$ListView** _7;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$collections$ListView** _11;
frost$core$Int _14;
frost$collections$CollectionView* _15;
$fn2 _16;
frost$core$Int _17;
int64_t _20;
int64_t _21;
int64_t _22;
frost$core$Int _23;
int64_t _27;
uint64_t _28;
frost$core$UInt64 _29;
frost$core$UInt64* _31;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:176
_1 = (frost$core$UInt64) {0u};
_2 = &param0->bits;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:181
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->list;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->list;
*_11 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:182
_14 = (frost$core$Int) {1u};
_15 = ((frost$collections$CollectionView*) param1);
ITable* $tmp3 = _15->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_16 = $tmp3->methods[0];
_17 = _16(_15);
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from ListView.frost:182:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_20 = _14.value;
_21 = _17.value;
_22 = _20 << _21;
_23 = (frost$core$Int) {_22};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from ListView.frost:182:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_27 = _23.value;
_28 = ((uint64_t) _27);
_29 = (frost$core$UInt64) {_28};
_31 = &param0->stop;
*_31 = _29;
return;

}
frost$core$Bit frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$ListView$PowerSetIterator* param0 = (frost$collections$ListView$PowerSetIterator*) rawSelf;

frost$core$UInt64* _1;
frost$core$UInt64 _2;
frost$core$UInt64* _3;
frost$core$UInt64 _4;
uint64_t _7;
uint64_t _8;
bool _9;
frost$core$Bit _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:187
_1 = &param0->bits;
_2 = *_1;
_3 = &param0->stop;
_4 = *_3;
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from ListView.frost:187:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
_7 = _2.value;
_8 = _4.value;
_9 = _7 == _8;
_10 = (frost$core$Bit) {_9};
return _10;

}
frost$collections$ListView* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(void* rawSelf) {
frost$collections$ListView$PowerSetIterator* param0 = (frost$collections$ListView$PowerSetIterator*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Array* _15;
frost$core$Object* _18;
frost$collections$Array* _20;
frost$core$Object* _21;
frost$core$Object* _24;
frost$core$Int _27;
frost$collections$ListView** _28;
frost$collections$ListView* _29;
frost$collections$CollectionView* _30;
$fn5 _31;
frost$core$Int _32;
frost$core$Bit _33;
frost$core$Range$LTfrost$core$Int$GT _34;
frost$core$Int _35;
frost$core$Int _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _40;
int64_t _42;
int64_t _43;
bool _44;
frost$core$Bit _45;
bool _46;
int64_t _48;
int64_t _49;
bool _50;
frost$core$Bit _51;
bool _52;
frost$core$UInt64* _55;
frost$core$UInt64 _56;
frost$core$Int _57;
frost$core$Int _59;
int64_t _60;
int64_t _61;
bool _62;
frost$core$Bit _63;
bool _64;
frost$collections$CollectionView* _66;
$fn6 _67;
frost$core$Int _68;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
frost$core$Object* _74;
frost$core$Int _77;
frost$core$Int _81;
int64_t _84;
int64_t _85;
int64_t _86;
frost$core$Int _87;
frost$core$Int64 _89;
uint64_t _92;
int64_t _93;
int64_t _94;
int64_t _95;
frost$core$Int64 _96;
frost$core$Int64 _98;
int64_t _99;
int64_t _100;
bool _101;
frost$core$Bit _102;
bool _104;
frost$collections$Array* _107;
frost$collections$ListView** _108;
frost$collections$ListView* _109;
frost$core$Int _110;
$fn7 _111;
frost$core$Object* _112;
frost$core$Object* _113;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Int _120;
int64_t _121;
int64_t _122;
int64_t _123;
frost$core$Int _124;
int64_t _126;
int64_t _127;
bool _128;
frost$core$Bit _129;
bool _130;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _136;
int64_t _138;
int64_t _139;
int64_t _140;
frost$core$Int _141;
frost$core$UInt64* _145;
frost$core$UInt64 _146;
frost$core$UInt64 _147;
uint64_t _148;
uint64_t _149;
uint64_t _150;
frost$core$UInt64 _151;
frost$core$UInt64* _152;
frost$collections$Array* _155;
frost$collections$ListView* _156;
frost$core$Object* _157;
frost$collections$Array* _159;
frost$core$Object* _160;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp8 = _0->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp8 = $tmp8->next;
}
_1 = $tmp8->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {191u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _11, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:192
_15 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_15);
*(&local0) = ((frost$collections$Array*) NULL);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_18);
_20 = *(&local0);
_21 = ((frost$core$Object*) _20);
frost$core$Frost$unref$frost$core$Object$Q(_21);
*(&local0) = _15;
_24 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_24);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:193
_27 = (frost$core$Int) {0u};
_28 = &param0->list;
_29 = *_28;
_30 = ((frost$collections$CollectionView*) _29);
ITable* $tmp11 = _30->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_31 = $tmp11->methods[0];
_32 = _31(_30);
_33 = (frost$core$Bit) {false};
_34 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_27, _32, _33);
_35 = _34.min;
*(&local1) = _35;
_37 = _34.max;
_38 = _34.inclusive;
_39 = _38.value;
_40 = (frost$core$Int) {1u};
if (_39) goto block7; else goto block8;
block7:;
_42 = _35.value;
_43 = _37.value;
_44 = _42 <= _43;
_45 = (frost$core$Bit) {_44};
_46 = _45.value;
if (_46) goto block4; else goto block5;
block8:;
_48 = _35.value;
_49 = _37.value;
_50 = _48 < _49;
_51 = (frost$core$Bit) {_50};
_52 = _51.value;
if (_52) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:194
_55 = &param0->bits;
_56 = *_55;
_57 = *(&local1);
// begin inline call to function frost.core.UInt64.[](index:frost.core.Int):frost.core.Bit from ListView.frost:194:24
_59 = (frost$core$Int) {0u};
_60 = _57.value;
_61 = _59.value;
_62 = _60 >= _61;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
if (_64) goto block14; else goto block13;
block14:;
frost$core$UInt64$wrapper* $tmp12;
$tmp12 = (frost$core$UInt64$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt64$wrapper), (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp12->value = _56;
_66 = ((frost$collections$CollectionView*) $tmp12);
ITable* $tmp13 = _66->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_67 = $tmp13->methods[0];
_68 = _67(_66);
_69 = _57.value;
_70 = _68.value;
_71 = _69 < _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
_74 = ((frost$core$Object*) _66);
frost$core$Frost$unref$frost$core$Object$Q(_74);
if (_73) goto block12; else goto block13;
block13:;
_77 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _77, &$s15);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:506
_81 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt64.frost:506:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_84 = _81.value;
_85 = _57.value;
_86 = _84 << _85;
_87 = (frost$core$Int) {_86};
_89 = frost$core$Int64$init$frost$core$Int(_87);
// begin inline call to function frost.core.UInt64.&&(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:506:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:160
_92 = _56.value;
_93 = ((int64_t) _92);
_94 = _89.value;
_95 = _93 & _94;
_96 = (frost$core$Int64) {_95};
_98 = (frost$core$Int64) {0u};
_99 = _96.value;
_100 = _98.value;
_101 = _99 != _100;
_102 = (frost$core$Bit) {_101};
_104 = _102.value;
if (_104) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:195
_107 = *(&local0);
_108 = &param0->list;
_109 = *_108;
_110 = *(&local1);
ITable* $tmp16 = _109->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp16 = $tmp16->next;
}
_111 = $tmp16->methods[0];
_112 = _111(_109, _110);
_113 = _112;
_114 = _113;
frost$collections$Array$add$frost$collections$Array$T(_107, _114);
_116 = _112;
frost$core$Frost$unref$frost$core$Object$Q(_116);
goto block10;
block10:;
_120 = *(&local1);
_121 = _37.value;
_122 = _120.value;
_123 = _121 - _122;
_124 = (frost$core$Int) {_123};
if (_39) goto block18; else goto block19;
block18:;
_126 = _124.value;
_127 = _40.value;
_128 = _126 >= _127;
_129 = (frost$core$Bit) {_128};
_130 = _129.value;
if (_130) goto block17; else goto block5;
block19:;
_132 = _124.value;
_133 = _40.value;
_134 = _132 > _133;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block17; else goto block5;
block17:;
_138 = _120.value;
_139 = _40.value;
_140 = _138 + _139;
_141 = (frost$core$Int) {_140};
*(&local1) = _141;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:198
_145 = &param0->bits;
_146 = *_145;
_147 = (frost$core$UInt64) {1u};
_148 = _146.value;
_149 = _147.value;
_150 = _148 + _149;
_151 = (frost$core$UInt64) {_150};
_152 = &param0->bits;
*_152 = _151;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:199
_155 = *(&local0);
_156 = ((frost$collections$ListView*) _155);
_157 = ((frost$core$Object*) _156);
frost$core$Frost$ref$frost$core$Object$Q(_157);
_159 = *(&local0);
_160 = ((frost$core$Object*) _159);
frost$core$Frost$unref$frost$core$Object$Q(_160);
*(&local0) = ((frost$collections$Array*) NULL);
return _156;

}
void frost$collections$ListView$PowerSetIterator$cleanup(void* rawSelf) {
frost$collections$ListView$PowerSetIterator* param0 = (frost$collections$ListView$PowerSetIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$ListView** _3;
frost$collections$ListView* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:173
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->list;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






