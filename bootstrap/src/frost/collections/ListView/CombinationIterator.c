#include "frost/collections/ListView/CombinationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Array.h"
#include "frost/collections/List.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListWriter.h"
#include "frost/collections/Iterable.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim(frost$collections$ListView$CombinationIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$CombinationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$CombinationIterator$class_type frost$collections$ListView$CombinationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$CombinationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$CombinationIterator$cleanup, frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef void (*$fn3)(frost$collections$CollectionWriter*, frost$core$Object*);
typedef frost$core$Int (*$fn9)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn10)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn11)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn12)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn17)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn19)(frost$collections$CollectionView*);
typedef void (*$fn20)(frost$collections$ListWriter*, frost$core$Int, frost$core$Object*);
typedef frost$core$Int (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn23)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn24)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn25)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn26)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn27)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn28)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Object* (*$fn29)(frost$collections$ListView*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 5127267990547660822, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x6c\x69\x73\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 181, 2754022719883816286, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x43\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 162, -4732234487307000635, NULL };

void frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int(void* rawSelf, frost$collections$ListView* param1, frost$core$Int param2) {
frost$collections$ListView$CombinationIterator* param0 = (frost$collections$ListView$CombinationIterator*) rawSelf;

frost$core$Int local0;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
frost$core$Int* _6;
frost$core$Int _8;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$collections$CollectionView* _15;
$fn2 _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
bool _20;
frost$core$Bit _21;
bool _22;
frost$core$Int _24;
frost$core$Object* _28;
frost$collections$ListView** _30;
frost$collections$ListView* _31;
frost$core$Object* _32;
frost$collections$ListView** _34;
frost$collections$Array* _37;
frost$collections$List* _39;
frost$core$Object* _40;
frost$collections$List** _42;
frost$collections$List* _43;
frost$core$Object* _44;
frost$collections$List** _46;
frost$core$Object* _48;
frost$core$Int _51;
frost$core$Bit _52;
frost$core$Range$LTfrost$core$Int$GT _53;
frost$core$Int _54;
frost$core$Int _56;
frost$core$Bit _57;
bool _58;
frost$core$Int _59;
int64_t _61;
int64_t _62;
bool _63;
frost$core$Bit _64;
bool _65;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$collections$List** _74;
frost$collections$List* _75;
frost$collections$CollectionWriter* _76;
frost$core$Int _77;
frost$core$Object* _78;
$fn3 _79;
frost$core$Object* _81;
frost$core$Int _84;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
int64_t _90;
int64_t _91;
bool _92;
frost$core$Bit _93;
bool _94;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _100;
int64_t _102;
int64_t _103;
int64_t _104;
frost$core$Int _105;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:118
_1 = (frost$core$Int) {0u};
_2 = &param0->r;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:120
_5 = (frost$core$Int) {0u};
_6 = &param0->index;
*_6 = _5;
_8 = (frost$core$Int) {0u};
_9 = param2.value;
_10 = _8.value;
_11 = _9 >= _10;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block3; else goto block2;
block3:;
_15 = ((frost$collections$CollectionView*) param1);
ITable* $tmp4 = _15->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_16 = $tmp4->methods[0];
_17 = _16(_15);
_18 = param2.value;
_19 = _17.value;
_20 = _18 <= _19;
_21 = (frost$core$Bit) {_20};
_22 = _21.value;
if (_22) goto block1; else goto block2;
block2:;
_24 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _24, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:124
_28 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = &param0->list;
_31 = *_30;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = &param0->list;
*_34 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:125
_37 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init$frost$core$Int(_37, param2);
_39 = ((frost$collections$List*) _37);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = &param0->choices;
_43 = *_42;
_44 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = &param0->choices;
*_46 = _39;
_48 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_48);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:126
_51 = (frost$core$Int) {0u};
_52 = (frost$core$Bit) {false};
_53 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_51, param2, _52);
_54 = _53.min;
*(&local0) = _54;
_56 = _53.max;
_57 = _53.inclusive;
_58 = _57.value;
_59 = (frost$core$Int) {1u};
if (_58) goto block7; else goto block8;
block7:;
_61 = _54.value;
_62 = _56.value;
_63 = _61 <= _62;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block4; else goto block5;
block8:;
_67 = _54.value;
_68 = _56.value;
_69 = _67 < _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:127
_74 = &param0->choices;
_75 = *_74;
_76 = ((frost$collections$CollectionWriter*) _75);
_77 = *(&local0);
frost$core$Int$wrapper* $tmp7;
$tmp7 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp7->value = _77;
_78 = ((frost$core$Object*) $tmp7);
ITable* $tmp8 = _76->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp8 = $tmp8->next;
}
_79 = $tmp8->methods[1];
_79(_76, _78);
_81 = _78;
frost$core$Frost$unref$frost$core$Object$Q(_81);
_84 = *(&local0);
_85 = _56.value;
_86 = _84.value;
_87 = _85 - _86;
_88 = (frost$core$Int) {_87};
if (_58) goto block10; else goto block11;
block10:;
_90 = _88.value;
_91 = _59.value;
_92 = _90 >= _91;
_93 = (frost$core$Bit) {_92};
_94 = _93.value;
if (_94) goto block9; else goto block5;
block11:;
_96 = _88.value;
_97 = _59.value;
_98 = _96 > _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block9; else goto block5;
block9:;
_102 = _84.value;
_103 = _59.value;
_104 = _102 + _103;
_105 = (frost$core$Int) {_104};
*(&local0) = _105;
goto block4;
block5:;
return;

}
frost$core$Bit frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$ListView$CombinationIterator* param0 = (frost$collections$ListView$CombinationIterator*) rawSelf;

frost$core$Int local0;
frost$core$Int _1;
frost$collections$List** _2;
frost$collections$List* _3;
frost$collections$CollectionView* _4;
$fn9 _5;
frost$core$Int _6;
frost$core$Bit _7;
frost$core$Range$LTfrost$core$Int$GT _8;
frost$core$Int _9;
frost$core$Int _11;
frost$core$Bit _12;
bool _13;
frost$core$Int _14;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
int64_t _22;
int64_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$collections$List** _29;
frost$collections$List* _30;
frost$collections$ListView* _31;
frost$core$Int _32;
$fn10 _33;
frost$core$Object* _34;
frost$core$Int _35;
frost$collections$List** _36;
frost$collections$List* _37;
frost$collections$CollectionView* _38;
$fn11 _39;
frost$core$Int _40;
int64_t _41;
int64_t _42;
int64_t _43;
frost$core$Int _44;
frost$collections$ListView** _45;
frost$collections$ListView* _46;
frost$collections$CollectionView* _47;
$fn12 _48;
frost$core$Int _49;
frost$core$Int _50;
int64_t _51;
int64_t _52;
int64_t _53;
frost$core$Int _54;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _59;
frost$core$Object* _60;
frost$core$Bit _64;
frost$core$Int _67;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int _71;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
frost$core$Bit _92;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:133
_1 = (frost$core$Int) {0u};
_2 = &param0->choices;
_3 = *_2;
_4 = ((frost$collections$CollectionView*) _3);
ITable* $tmp13 = _4->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_5 = $tmp13->methods[0];
_6 = _5(_4);
_7 = (frost$core$Bit) {false};
_8 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1, _6, _7);
_9 = _8.min;
*(&local0) = _9;
_11 = _8.max;
_12 = _8.inclusive;
_13 = _12.value;
_14 = (frost$core$Int) {1u};
if (_13) goto block4; else goto block5;
block4:;
_16 = _9.value;
_17 = _11.value;
_18 = _16 <= _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block5:;
_22 = _9.value;
_23 = _11.value;
_24 = _22 < _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:134
_29 = &param0->choices;
_30 = *_29;
_31 = ((frost$collections$ListView*) _30);
_32 = *(&local0);
ITable* $tmp14 = _31->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
_33 = $tmp14->methods[0];
_34 = _33(_31, _32);
_35 = ((frost$core$Int$wrapper*) _34)->value;
_36 = &param0->choices;
_37 = *_36;
_38 = ((frost$collections$CollectionView*) _37);
ITable* $tmp15 = _38->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_39 = $tmp15->methods[0];
_40 = _39(_38);
_41 = _35.value;
_42 = _40.value;
_43 = _41 + _42;
_44 = (frost$core$Int) {_43};
_45 = &param0->list;
_46 = *_45;
_47 = ((frost$collections$CollectionView*) _46);
ITable* $tmp16 = _47->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_48 = $tmp16->methods[0];
_49 = _48(_47);
_50 = *(&local0);
_51 = _49.value;
_52 = _50.value;
_53 = _51 - _52;
_54 = (frost$core$Int) {_53};
_55 = _44.value;
_56 = _54.value;
_57 = _55 < _56;
_58 = (frost$core$Bit) {_57};
_59 = _58.value;
_60 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_60);
if (_59) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:135
_64 = (frost$core$Bit) {false};
return _64;
block7:;
_67 = *(&local0);
_68 = _11.value;
_69 = _67.value;
_70 = _68 - _69;
_71 = (frost$core$Int) {_70};
if (_13) goto block9; else goto block10;
block9:;
_73 = _71.value;
_74 = _14.value;
_75 = _73 >= _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block8; else goto block2;
block10:;
_79 = _71.value;
_80 = _14.value;
_81 = _79 > _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block8; else goto block2;
block8:;
_85 = _67.value;
_86 = _14.value;
_87 = _85 + _86;
_88 = (frost$core$Int) {_87};
*(&local0) = _88;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:138
_92 = (frost$core$Bit) {true};
return _92;

}
frost$collections$ListView* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(void* rawSelf) {
frost$collections$ListView$CombinationIterator* param0 = (frost$collections$ListView$CombinationIterator*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$core$Int local1;
frost$collections$Iterator* _0;
$fn17 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Int* _17;
frost$core$Int _18;
frost$collections$ListView** _19;
frost$collections$ListView* _20;
frost$collections$CollectionView* _21;
$fn18 _22;
frost$core$Int _23;
frost$core$Int* _24;
frost$core$Int _25;
int64_t _26;
int64_t _27;
int64_t _28;
frost$core$Int _29;
frost$collections$List** _30;
frost$collections$List* _31;
frost$collections$CollectionView* _32;
$fn19 _33;
frost$core$Int _34;
int64_t _35;
int64_t _36;
int64_t _37;
frost$core$Int _38;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$collections$List** _46;
frost$collections$List* _47;
frost$collections$ListWriter* _48;
frost$core$Int* _49;
frost$core$Int _50;
frost$core$Int* _51;
frost$core$Int _52;
frost$core$Object* _53;
$fn20 _54;
frost$core$Object* _56;
frost$core$Int* _59;
frost$core$Int _60;
frost$collections$List** _61;
frost$collections$List* _62;
frost$collections$CollectionView* _63;
$fn21 _64;
frost$core$Int _65;
frost$core$Int _66;
int64_t _67;
int64_t _68;
int64_t _69;
frost$core$Int _70;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _78;
frost$core$Int* _81;
frost$core$Int _82;
frost$core$Int _83;
int64_t _84;
int64_t _85;
int64_t _86;
frost$core$Int _87;
frost$core$Int* _88;
frost$collections$Array* _91;
frost$collections$List** _92;
frost$collections$List* _93;
frost$collections$CollectionView* _94;
$fn22 _95;
frost$core$Int _96;
frost$core$Object* _99;
frost$collections$Array* _101;
frost$core$Object* _102;
frost$core$Object* _105;
frost$collections$List** _108;
frost$collections$List* _109;
frost$collections$Iterable* _110;
$fn23 _111;
frost$collections$Iterator* _112;
$fn24 _114;
frost$core$Bit _115;
bool _116;
$fn25 _118;
frost$core$Object* _119;
frost$core$Int _120;
frost$collections$Array* _123;
frost$collections$ListView** _124;
frost$collections$ListView* _125;
frost$core$Int _126;
$fn26 _127;
frost$core$Object* _128;
frost$core$Object* _129;
frost$core$Object* _130;
frost$core$Object* _132;
frost$core$Object* _134;
frost$core$Object* _137;
frost$collections$Array* _140;
frost$collections$ListView* _141;
frost$core$Object* _142;
frost$collections$Array* _144;
frost$core$Object* _145;
frost$collections$List** _151;
frost$collections$List* _152;
frost$collections$ListView* _153;
frost$core$Int* _154;
frost$core$Int _155;
$fn27 _156;
frost$core$Object* _157;
frost$core$Int _158;
frost$core$Int _159;
int64_t _160;
int64_t _161;
int64_t _162;
frost$core$Int _163;
frost$core$Int* _164;
frost$core$Object* _166;
frost$core$Int* _169;
frost$core$Int _170;
frost$core$Int _171;
int64_t _172;
int64_t _173;
int64_t _174;
frost$core$Int _175;
frost$core$Int* _176;
frost$core$Int* _182;
frost$core$Int _183;
frost$core$Int _184;
int64_t _185;
int64_t _186;
int64_t _187;
frost$core$Int _188;
frost$core$Int* _189;
frost$core$Int* _192;
frost$core$Int _193;
frost$core$Int _194;
int64_t _195;
int64_t _196;
bool _197;
frost$core$Bit _198;
bool _199;
frost$collections$List** _202;
frost$collections$List* _203;
frost$collections$ListView* _204;
frost$core$Int* _205;
frost$core$Int _206;
$fn28 _207;
frost$core$Object* _208;
frost$core$Int _209;
frost$core$Int _210;
int64_t _211;
int64_t _212;
int64_t _213;
frost$core$Int _214;
frost$core$Int* _215;
frost$core$Object* _217;
frost$collections$List** _222;
frost$collections$List* _223;
frost$collections$ListView* _224;
frost$core$Int _225;
$fn29 _226;
frost$core$Object* _227;
frost$core$Int _228;
frost$core$Int _229;
int64_t _230;
int64_t _231;
int64_t _232;
frost$core$Int _233;
frost$core$Int* _234;
frost$core$Object* _236;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp30 = _0->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp30 = $tmp30->next;
}
_1 = $tmp30->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {142u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _11, &$s32);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:143
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:144
_17 = &param0->index;
_18 = *_17;
_19 = &param0->list;
_20 = *_19;
_21 = ((frost$collections$CollectionView*) _20);
ITable* $tmp33 = _21->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
_22 = $tmp33->methods[0];
_23 = _22(_21);
_24 = &param0->r;
_25 = *_24;
_26 = _23.value;
_27 = _25.value;
_28 = _26 + _27;
_29 = (frost$core$Int) {_28};
_30 = &param0->choices;
_31 = *_30;
_32 = ((frost$collections$CollectionView*) _31);
ITable* $tmp34 = _32->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
_33 = $tmp34->methods[0];
_34 = _33(_32);
_35 = _29.value;
_36 = _34.value;
_37 = _35 - _36;
_38 = (frost$core$Int) {_37};
_39 = _18.value;
_40 = _38.value;
_41 = _39 <= _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:145
_46 = &param0->choices;
_47 = *_46;
_48 = ((frost$collections$ListWriter*) _47);
_49 = &param0->r;
_50 = *_49;
_51 = &param0->index;
_52 = *_51;
frost$core$Int$wrapper* $tmp35;
$tmp35 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp35->value = _52;
_53 = ((frost$core$Object*) $tmp35);
ITable* $tmp36 = _48->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp36 = $tmp36->next;
}
_54 = $tmp36->methods[0];
_54(_48, _50, _53);
_56 = _53;
frost$core$Frost$unref$frost$core$Object$Q(_56);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:146
_59 = &param0->r;
_60 = *_59;
_61 = &param0->choices;
_62 = *_61;
_63 = ((frost$collections$CollectionView*) _62);
ITable* $tmp37 = _63->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
_64 = $tmp37->methods[0];
_65 = _64(_63);
_66 = (frost$core$Int) {1u};
_67 = _65.value;
_68 = _66.value;
_69 = _67 - _68;
_70 = (frost$core$Int) {_69};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:146:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_73 = _60.value;
_74 = _70.value;
_75 = _73 == _74;
_76 = (frost$core$Bit) {_75};
_78 = _76.value;
if (_78) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:147
_81 = &param0->index;
_82 = *_81;
_83 = (frost$core$Int) {1u};
_84 = _82.value;
_85 = _83.value;
_86 = _84 + _85;
_87 = (frost$core$Int) {_86};
_88 = &param0->index;
*_88 = _87;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:148
_91 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_92 = &param0->choices;
_93 = *_92;
_94 = ((frost$collections$CollectionView*) _93);
ITable* $tmp38 = _94->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp38 = $tmp38->next;
}
_95 = $tmp38->methods[0];
_96 = _95(_94);
frost$collections$Array$init$frost$core$Int(_91, _96);
*(&local0) = ((frost$collections$Array*) NULL);
_99 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_99);
_101 = *(&local0);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local0) = _91;
_105 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_105);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:149
_108 = &param0->choices;
_109 = *_108;
_110 = ((frost$collections$Iterable*) _109);
ITable* $tmp39 = _110->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp39 = $tmp39->next;
}
_111 = $tmp39->methods[0];
_112 = _111(_110);
goto block13;
block13:;
ITable* $tmp40 = _112->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp40 = $tmp40->next;
}
_114 = $tmp40->methods[0];
_115 = _114(_112);
_116 = _115.value;
if (_116) goto block15; else goto block14;
block14:;
ITable* $tmp41 = _112->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp41 = $tmp41->next;
}
_118 = $tmp41->methods[1];
_119 = _118(_112);
_120 = ((frost$core$Int$wrapper*) _119)->value;
*(&local1) = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:150
_123 = *(&local0);
_124 = &param0->list;
_125 = *_124;
_126 = *(&local1);
ITable* $tmp42 = _125->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp42 = $tmp42->next;
}
_127 = $tmp42->methods[0];
_128 = _127(_125, _126);
_129 = _128;
_130 = _129;
frost$collections$Array$add$frost$collections$Array$T(_123, _130);
_132 = _128;
frost$core$Frost$unref$frost$core$Object$Q(_132);
_134 = _119;
frost$core$Frost$unref$frost$core$Object$Q(_134);
goto block13;
block15:;
_137 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_137);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:152
_140 = *(&local0);
_141 = ((frost$collections$ListView*) _140);
_142 = ((frost$core$Object*) _141);
frost$core$Frost$ref$frost$core$Object$Q(_142);
_144 = *(&local0);
_145 = ((frost$core$Object*) _144);
frost$core$Frost$unref$frost$core$Object$Q(_145);
*(&local0) = ((frost$collections$Array*) NULL);
return _141;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:155
_151 = &param0->choices;
_152 = *_151;
_153 = ((frost$collections$ListView*) _152);
_154 = &param0->r;
_155 = *_154;
ITable* $tmp43 = _153->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp43 = $tmp43->next;
}
_156 = $tmp43->methods[0];
_157 = _156(_153, _155);
_158 = ((frost$core$Int$wrapper*) _157)->value;
_159 = (frost$core$Int) {1u};
_160 = _158.value;
_161 = _159.value;
_162 = _160 + _161;
_163 = (frost$core$Int) {_162};
_164 = &param0->index;
*_164 = _163;
_166 = _157;
frost$core$Frost$unref$frost$core$Object$Q(_166);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:156
_169 = &param0->r;
_170 = *_169;
_171 = (frost$core$Int) {1u};
_172 = _170.value;
_173 = _171.value;
_174 = _172 + _173;
_175 = (frost$core$Int) {_174};
_176 = &param0->r;
*_176 = _175;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:160
_182 = &param0->r;
_183 = *_182;
_184 = (frost$core$Int) {1u};
_185 = _183.value;
_186 = _184.value;
_187 = _185 - _186;
_188 = (frost$core$Int) {_187};
_189 = &param0->r;
*_189 = _188;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:161
_192 = &param0->r;
_193 = *_192;
_194 = (frost$core$Int) {0u};
_195 = _193.value;
_196 = _194.value;
_197 = _195 > _196;
_198 = (frost$core$Bit) {_197};
_199 = _198.value;
if (_199) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:162
_202 = &param0->choices;
_203 = *_202;
_204 = ((frost$collections$ListView*) _203);
_205 = &param0->r;
_206 = *_205;
ITable* $tmp44 = _204->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp44 = $tmp44->next;
}
_207 = $tmp44->methods[0];
_208 = _207(_204, _206);
_209 = ((frost$core$Int$wrapper*) _208)->value;
_210 = (frost$core$Int) {1u};
_211 = _209.value;
_212 = _210.value;
_213 = _211 + _212;
_214 = (frost$core$Int) {_213};
_215 = &param0->index;
*_215 = _214;
_217 = _208;
frost$core$Frost$unref$frost$core$Object$Q(_217);
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:165
_222 = &param0->choices;
_223 = *_222;
_224 = ((frost$collections$ListView*) _223);
_225 = (frost$core$Int) {0u};
ITable* $tmp45 = _224->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp45 = $tmp45->next;
}
_226 = $tmp45->methods[0];
_227 = _226(_224, _225);
_228 = ((frost$core$Int$wrapper*) _227)->value;
_229 = (frost$core$Int) {1u};
_230 = _228.value;
_231 = _229.value;
_232 = _230 + _231;
_233 = (frost$core$Int) {_232};
_234 = &param0->index;
*_234 = _233;
_236 = _227;
frost$core$Frost$unref$frost$core$Object$Q(_236);
goto block17;
block17:;
goto block7;
block7:;
goto block4;
block5:;
goto block19;
block19:;

}
void frost$collections$ListView$CombinationIterator$cleanup(void* rawSelf) {
frost$collections$ListView$CombinationIterator* param0 = (frost$collections$ListView$CombinationIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$ListView** _3;
frost$collections$ListView* _4;
frost$core$Object* _5;
frost$collections$List** _7;
frost$collections$List* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:113
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->list;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->choices;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

