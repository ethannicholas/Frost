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

void frost$collections$ListView$PowerSetIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* param0, frost$collections$ListView* param1) {

frost$collections$ListView$PowerSetIterator* _1;
frost$core$UInt64 _2;
frost$core$UInt64* _3;
frost$collections$ListView$PowerSetIterator* _6;
frost$core$Object* _7;
frost$collections$ListView** _9;
frost$collections$ListView* _10;
frost$core$Object* _11;
frost$collections$ListView** _13;
frost$collections$ListView$PowerSetIterator* _16;
frost$core$Int _17;
frost$collections$CollectionView* _18;
$fn2 _19;
frost$core$Int _20;
int64_t _23;
int64_t _24;
int64_t _25;
frost$core$Int _26;
int64_t _30;
uint64_t _31;
frost$core$UInt64 _32;
frost$core$UInt64* _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:176
_1 = param0;
_2 = (frost$core$UInt64) {0u};
_3 = &_1->bits;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:181
_6 = param0;
_7 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &_6->list;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = &_6->list;
*_13 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:182
_16 = param0;
_17 = (frost$core$Int) {1u};
_18 = ((frost$collections$CollectionView*) param1);
ITable* $tmp3 = _18->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_19 = $tmp3->methods[0];
_20 = _19(_18);
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from ListView.frost:182:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_23 = _17.value;
_24 = _20.value;
_25 = _23 << _24;
_26 = (frost$core$Int) {_25};
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from ListView.frost:182:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_30 = _26.value;
_31 = ((uint64_t) _30);
_32 = (frost$core$UInt64) {_31};
_34 = &_16->stop;
*_34 = _32;
return;

}
frost$core$Bit frost$collections$ListView$PowerSetIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PowerSetIterator* param0) {

frost$collections$ListView$PowerSetIterator* _1;
frost$core$UInt64* _2;
frost$core$UInt64 _3;
frost$collections$ListView$PowerSetIterator* _4;
frost$core$UInt64* _5;
frost$core$UInt64 _6;
uint64_t _9;
uint64_t _10;
bool _11;
frost$core$Bit _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:187
_1 = param0;
_2 = &_1->bits;
_3 = *_2;
_4 = param0;
_5 = &_4->stop;
_6 = *_5;
// begin inline call to function frost.core.UInt64.=(other:frost.core.UInt64):frost.core.Bit from ListView.frost:187:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
_9 = _3.value;
_10 = _6.value;
_11 = _9 == _10;
_12 = (frost$core$Bit) {_11};
return _12;

}
frost$collections$ListView* frost$collections$ListView$PowerSetIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PowerSetIterator$T$GT(frost$collections$ListView$PowerSetIterator* param0) {

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
frost$collections$Array* _16;
frost$core$Object* _19;
frost$collections$Array* _21;
frost$core$Object* _22;
frost$core$Object* _25;
frost$core$Int _28;
frost$collections$ListView$PowerSetIterator* _29;
frost$collections$ListView** _30;
frost$collections$ListView* _31;
frost$collections$CollectionView* _32;
$fn5 _33;
frost$core$Int _34;
frost$core$Bit _35;
frost$core$Range$LTfrost$core$Int$GT _36;
frost$core$Int _37;
frost$core$Int _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _54;
frost$collections$ListView$PowerSetIterator* _57;
frost$core$UInt64* _58;
frost$core$UInt64 _59;
frost$core$Int _60;
frost$core$Int _62;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$collections$CollectionView* _69;
$fn6 _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Object* _77;
frost$core$Int _80;
frost$core$Int _84;
int64_t _87;
int64_t _88;
int64_t _89;
frost$core$Int _90;
frost$core$Int64 _92;
uint64_t _95;
int64_t _96;
int64_t _97;
int64_t _98;
frost$core$Int64 _99;
frost$core$Int64 _101;
int64_t _102;
int64_t _103;
bool _104;
frost$core$Bit _105;
bool _107;
frost$collections$Array* _110;
frost$collections$Array* _111;
frost$collections$ListView$PowerSetIterator* _112;
frost$collections$ListView** _113;
frost$collections$ListView* _114;
frost$collections$ListView* _115;
frost$core$Int _116;
$fn7 _117;
frost$core$Object* _118;
frost$core$Object* _119;
frost$core$Object* _120;
frost$core$Object* _122;
frost$core$Int _126;
int64_t _127;
int64_t _128;
int64_t _129;
frost$core$Int _130;
int64_t _132;
int64_t _133;
bool _134;
frost$core$Bit _135;
bool _136;
int64_t _138;
int64_t _139;
bool _140;
frost$core$Bit _141;
bool _142;
int64_t _144;
int64_t _145;
int64_t _146;
frost$core$Int _147;
frost$collections$ListView$PowerSetIterator* _151;
frost$core$UInt64* _152;
frost$core$UInt64 _153;
frost$core$UInt64 _154;
uint64_t _155;
uint64_t _156;
uint64_t _157;
frost$core$UInt64 _158;
frost$core$UInt64* _159;
frost$collections$Array* _162;
frost$collections$ListView* _163;
frost$core$Object* _164;
frost$collections$Array* _166;
frost$core$Object* _167;
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
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_15 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_16 = _15;
frost$collections$Array$init(_16);
*(&local0) = ((frost$collections$Array*) NULL);
_19 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = _15;
_25 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_25);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:193
_28 = (frost$core$Int) {0u};
_29 = param0;
_30 = &_29->list;
_31 = *_30;
_32 = ((frost$collections$CollectionView*) _31);
ITable* $tmp11 = _32->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
_33 = $tmp11->methods[0];
_34 = _33(_32);
_35 = (frost$core$Bit) {false};
_36 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_28, _34, _35);
_37 = _36.min;
*(&local1) = _37;
_39 = _36.max;
_40 = _36.inclusive;
_41 = _40.value;
_42 = (frost$core$Int) {1u};
if (_41) goto block7; else goto block8;
block7:;
_44 = _37.value;
_45 = _39.value;
_46 = _44 <= _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block4; else goto block5;
block8:;
_50 = _37.value;
_51 = _39.value;
_52 = _50 < _51;
_53 = (frost$core$Bit) {_52};
_54 = _53.value;
if (_54) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:194
_57 = param0;
_58 = &_57->bits;
_59 = *_58;
_60 = *(&local1);
// begin inline call to function frost.core.UInt64.[](index:frost.core.Int):frost.core.Bit from ListView.frost:194:24
_62 = (frost$core$Int) {0u};
_63 = _60.value;
_64 = _62.value;
_65 = _63 >= _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block14; else goto block13;
block14:;
frost$core$UInt64$wrapper* $tmp12;
$tmp12 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp12->value = _59;
_69 = ((frost$collections$CollectionView*) $tmp12);
ITable* $tmp13 = _69->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_70 = $tmp13->methods[0];
_71 = _70(_69);
_72 = _60.value;
_73 = _71.value;
_74 = _72 < _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
_77 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_77);
if (_76) goto block12; else goto block13;
block13:;
_80 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _80, &$s15);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:506
_84 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt64.frost:506:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_87 = _84.value;
_88 = _60.value;
_89 = _87 << _88;
_90 = (frost$core$Int) {_89};
_92 = frost$core$Int64$init$frost$core$Int(_90);
// begin inline call to function frost.core.UInt64.&&(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:506:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:160
_95 = _59.value;
_96 = ((int64_t) _95);
_97 = _92.value;
_98 = _96 & _97;
_99 = (frost$core$Int64) {_98};
_101 = (frost$core$Int64) {0u};
_102 = _99.value;
_103 = _101.value;
_104 = _102 != _103;
_105 = (frost$core$Bit) {_104};
_107 = _105.value;
if (_107) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:195
_110 = *(&local0);
_111 = _110;
_112 = param0;
_113 = &_112->list;
_114 = *_113;
_115 = _114;
_116 = *(&local1);
ITable* $tmp16 = _115->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp16 = $tmp16->next;
}
_117 = $tmp16->methods[0];
_118 = _117(_115, _116);
_119 = _118;
_120 = _119;
frost$collections$Array$add$frost$collections$Array$T(_111, _120);
_122 = _118;
frost$core$Frost$unref$frost$core$Object$Q(_122);
goto block10;
block10:;
_126 = *(&local1);
_127 = _39.value;
_128 = _126.value;
_129 = _127 - _128;
_130 = (frost$core$Int) {_129};
if (_41) goto block18; else goto block19;
block18:;
_132 = _130.value;
_133 = _42.value;
_134 = _132 >= _133;
_135 = (frost$core$Bit) {_134};
_136 = _135.value;
if (_136) goto block17; else goto block5;
block19:;
_138 = _130.value;
_139 = _42.value;
_140 = _138 > _139;
_141 = (frost$core$Bit) {_140};
_142 = _141.value;
if (_142) goto block17; else goto block5;
block17:;
_144 = _126.value;
_145 = _42.value;
_146 = _144 + _145;
_147 = (frost$core$Int) {_146};
*(&local1) = _147;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:198
_151 = param0;
_152 = &_151->bits;
_153 = *_152;
_154 = (frost$core$UInt64) {1u};
_155 = _153.value;
_156 = _154.value;
_157 = _155 + _156;
_158 = (frost$core$UInt64) {_157};
_159 = &_151->bits;
*_159 = _158;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:199
_162 = *(&local0);
_163 = ((frost$collections$ListView*) _162);
_164 = ((frost$core$Object*) _163);
frost$core$Frost$ref$frost$core$Object$Q(_164);
_166 = *(&local0);
_167 = ((frost$core$Object*) _166);
frost$core$Frost$unref$frost$core$Object$Q(_167);
*(&local0) = ((frost$collections$Array*) NULL);
return _163;

}
void frost$collections$ListView$PowerSetIterator$cleanup(frost$collections$ListView$PowerSetIterator* param0) {

frost$core$Object* _1;
frost$collections$ListView$PowerSetIterator* _3;
frost$collections$ListView** _4;
frost$collections$ListView* _5;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:173
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->list;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}






