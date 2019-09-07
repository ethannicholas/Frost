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

void frost$collections$ListView$CombinationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT$frost$core$Int(frost$collections$ListView$CombinationIterator* param0, frost$collections$ListView* param1, frost$core$Int param2) {

frost$core$Int local0;
frost$collections$ListView$CombinationIterator* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$collections$ListView$CombinationIterator* _6;
frost$core$Int _7;
frost$core$Int* _8;
frost$core$Int _10;
int64_t _11;
int64_t _12;
bool _13;
frost$core$Bit _14;
bool _15;
frost$collections$CollectionView* _17;
$fn2 _18;
frost$core$Int _19;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$Int _26;
frost$collections$ListView$CombinationIterator* _30;
frost$core$Object* _31;
frost$collections$ListView** _33;
frost$collections$ListView* _34;
frost$core$Object* _35;
frost$collections$ListView** _37;
frost$collections$ListView$CombinationIterator* _40;
frost$collections$Array* _41;
frost$collections$Array* _42;
frost$collections$List* _44;
frost$core$Object* _45;
frost$collections$List** _47;
frost$collections$List* _48;
frost$core$Object* _49;
frost$collections$List** _51;
frost$core$Object* _53;
frost$core$Int _56;
frost$core$Bit _57;
frost$core$Range$LTfrost$core$Int$GT _58;
frost$core$Int _59;
frost$core$Int _61;
frost$core$Bit _62;
bool _63;
frost$core$Int _64;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _70;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$collections$ListView$CombinationIterator* _79;
frost$collections$List** _80;
frost$collections$List* _81;
frost$collections$CollectionWriter* _82;
frost$core$Int _83;
frost$core$Object* _84;
$fn3 _85;
frost$core$Object* _87;
frost$core$Int _90;
int64_t _91;
int64_t _92;
int64_t _93;
frost$core$Int _94;
int64_t _96;
int64_t _97;
bool _98;
frost$core$Bit _99;
bool _100;
int64_t _102;
int64_t _103;
bool _104;
frost$core$Bit _105;
bool _106;
int64_t _108;
int64_t _109;
int64_t _110;
frost$core$Int _111;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:113
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->r;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:115
_6 = param0;
_7 = (frost$core$Int) {0u};
_8 = &_6->index;
*_8 = _7;
_10 = (frost$core$Int) {0u};
_11 = param2.value;
_12 = _10.value;
_13 = _11 >= _12;
_14 = (frost$core$Bit) {_13};
_15 = _14.value;
if (_15) goto block3; else goto block2;
block3:;
_17 = ((frost$collections$CollectionView*) param1);
ITable* $tmp4 = _17->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_18 = $tmp4->methods[0];
_19 = _18(_17);
_20 = param2.value;
_21 = _19.value;
_22 = _20 <= _21;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block1; else goto block2;
block2:;
_26 = (frost$core$Int) {118u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _26, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:119
_30 = param0;
_31 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_31);
_33 = &_30->list;
_34 = *_33;
_35 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_35);
_37 = &_30->list;
*_37 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:120
_40 = param0;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_41 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_42 = _41;
frost$collections$Array$init$frost$core$Int(_42, param2);
_44 = ((frost$collections$List*) _41);
_45 = ((frost$core$Object*) _44);
frost$core$Frost$ref$frost$core$Object$Q(_45);
_47 = &_40->choices;
_48 = *_47;
_49 = ((frost$core$Object*) _48);
frost$core$Frost$unref$frost$core$Object$Q(_49);
_51 = &_40->choices;
*_51 = _44;
_53 = ((frost$core$Object*) _41);
frost$core$Frost$unref$frost$core$Object$Q(_53);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:121
_56 = (frost$core$Int) {0u};
_57 = (frost$core$Bit) {false};
_58 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_56, param2, _57);
_59 = _58.min;
*(&local0) = _59;
_61 = _58.max;
_62 = _58.inclusive;
_63 = _62.value;
_64 = (frost$core$Int) {1u};
if (_63) goto block7; else goto block8;
block7:;
_66 = _59.value;
_67 = _61.value;
_68 = _66 <= _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block4; else goto block5;
block8:;
_72 = _59.value;
_73 = _61.value;
_74 = _72 < _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:122
_79 = param0;
_80 = &_79->choices;
_81 = *_80;
_82 = ((frost$collections$CollectionWriter*) _81);
_83 = *(&local0);
frost$core$Int$wrapper* $tmp7;
$tmp7 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp7->value = _83;
_84 = ((frost$core$Object*) $tmp7);
ITable* $tmp8 = _82->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp8 = $tmp8->next;
}
_85 = $tmp8->methods[1];
_85(_82, _84);
_87 = _84;
frost$core$Frost$unref$frost$core$Object$Q(_87);
_90 = *(&local0);
_91 = _61.value;
_92 = _90.value;
_93 = _91 - _92;
_94 = (frost$core$Int) {_93};
if (_63) goto block10; else goto block11;
block10:;
_96 = _94.value;
_97 = _64.value;
_98 = _96 >= _97;
_99 = (frost$core$Bit) {_98};
_100 = _99.value;
if (_100) goto block9; else goto block5;
block11:;
_102 = _94.value;
_103 = _64.value;
_104 = _102 > _103;
_105 = (frost$core$Bit) {_104};
_106 = _105.value;
if (_106) goto block9; else goto block5;
block9:;
_108 = _90.value;
_109 = _64.value;
_110 = _108 + _109;
_111 = (frost$core$Int) {_110};
*(&local0) = _111;
goto block4;
block5:;
return;

}
frost$core$Bit frost$collections$ListView$CombinationIterator$get_done$R$frost$core$Bit(frost$collections$ListView$CombinationIterator* param0) {

frost$core$Int local0;
frost$core$Int _1;
frost$collections$ListView$CombinationIterator* _2;
frost$collections$List** _3;
frost$collections$List* _4;
frost$collections$CollectionView* _5;
$fn9 _6;
frost$core$Int _7;
frost$core$Bit _8;
frost$core$Range$LTfrost$core$Int$GT _9;
frost$core$Int _10;
frost$core$Int _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _15;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _21;
int64_t _23;
int64_t _24;
bool _25;
frost$core$Bit _26;
bool _27;
frost$collections$ListView$CombinationIterator* _30;
frost$collections$List** _31;
frost$collections$List* _32;
frost$collections$ListView* _33;
frost$collections$ListView* _34;
frost$core$Int _35;
$fn10 _36;
frost$core$Object* _37;
frost$core$Int _38;
frost$collections$ListView$CombinationIterator* _39;
frost$collections$List** _40;
frost$collections$List* _41;
frost$collections$CollectionView* _42;
$fn11 _43;
frost$core$Int _44;
int64_t _45;
int64_t _46;
int64_t _47;
frost$core$Int _48;
frost$collections$ListView$CombinationIterator* _49;
frost$collections$ListView** _50;
frost$collections$ListView* _51;
frost$collections$CollectionView* _52;
$fn12 _53;
frost$core$Int _54;
frost$core$Int _55;
int64_t _56;
int64_t _57;
int64_t _58;
frost$core$Int _59;
int64_t _60;
int64_t _61;
bool _62;
frost$core$Bit _63;
bool _64;
frost$core$Object* _65;
frost$core$Bit _69;
frost$core$Int _72;
int64_t _73;
int64_t _74;
int64_t _75;
frost$core$Int _76;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
int64_t _90;
int64_t _91;
int64_t _92;
frost$core$Int _93;
frost$core$Bit _97;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:128
_1 = (frost$core$Int) {0u};
_2 = param0;
_3 = &_2->choices;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp13 = _5->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_6 = $tmp13->methods[0];
_7 = _6(_5);
_8 = (frost$core$Bit) {false};
_9 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1, _7, _8);
_10 = _9.min;
*(&local0) = _10;
_12 = _9.max;
_13 = _9.inclusive;
_14 = _13.value;
_15 = (frost$core$Int) {1u};
if (_14) goto block4; else goto block5;
block4:;
_17 = _10.value;
_18 = _12.value;
_19 = _17 <= _18;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block1; else goto block2;
block5:;
_23 = _10.value;
_24 = _12.value;
_25 = _23 < _24;
_26 = (frost$core$Bit) {_25};
_27 = _26.value;
if (_27) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:129
_30 = param0;
_31 = &_30->choices;
_32 = *_31;
_33 = ((frost$collections$ListView*) _32);
_34 = _33;
_35 = *(&local0);
ITable* $tmp14 = _34->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp14 = $tmp14->next;
}
_36 = $tmp14->methods[0];
_37 = _36(_34, _35);
_38 = ((frost$core$Int$wrapper*) _37)->value;
_39 = param0;
_40 = &_39->choices;
_41 = *_40;
_42 = ((frost$collections$CollectionView*) _41);
ITable* $tmp15 = _42->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_43 = $tmp15->methods[0];
_44 = _43(_42);
_45 = _38.value;
_46 = _44.value;
_47 = _45 + _46;
_48 = (frost$core$Int) {_47};
_49 = param0;
_50 = &_49->list;
_51 = *_50;
_52 = ((frost$collections$CollectionView*) _51);
ITable* $tmp16 = _52->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_53 = $tmp16->methods[0];
_54 = _53(_52);
_55 = *(&local0);
_56 = _54.value;
_57 = _55.value;
_58 = _56 - _57;
_59 = (frost$core$Int) {_58};
_60 = _48.value;
_61 = _59.value;
_62 = _60 < _61;
_63 = (frost$core$Bit) {_62};
_64 = _63.value;
_65 = _37;
frost$core$Frost$unref$frost$core$Object$Q(_65);
if (_64) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:130
_69 = (frost$core$Bit) {false};
return _69;
block7:;
_72 = *(&local0);
_73 = _12.value;
_74 = _72.value;
_75 = _73 - _74;
_76 = (frost$core$Int) {_75};
if (_14) goto block9; else goto block10;
block9:;
_78 = _76.value;
_79 = _15.value;
_80 = _78 >= _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block8; else goto block2;
block10:;
_84 = _76.value;
_85 = _15.value;
_86 = _84 > _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block8; else goto block2;
block8:;
_90 = _72.value;
_91 = _15.value;
_92 = _90 + _91;
_93 = (frost$core$Int) {_92};
*(&local0) = _93;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:133
_97 = (frost$core$Bit) {true};
return _97;

}
frost$collections$ListView* frost$collections$ListView$CombinationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$CombinationIterator$T$GT(frost$collections$ListView$CombinationIterator* param0) {

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
frost$collections$ListView$CombinationIterator* _17;
frost$core$Int* _18;
frost$core$Int _19;
frost$collections$ListView$CombinationIterator* _20;
frost$collections$ListView** _21;
frost$collections$ListView* _22;
frost$collections$CollectionView* _23;
$fn18 _24;
frost$core$Int _25;
frost$collections$ListView$CombinationIterator* _26;
frost$core$Int* _27;
frost$core$Int _28;
int64_t _29;
int64_t _30;
int64_t _31;
frost$core$Int _32;
frost$collections$ListView$CombinationIterator* _33;
frost$collections$List** _34;
frost$collections$List* _35;
frost$collections$CollectionView* _36;
$fn19 _37;
frost$core$Int _38;
int64_t _39;
int64_t _40;
int64_t _41;
frost$core$Int _42;
int64_t _43;
int64_t _44;
bool _45;
frost$core$Bit _46;
bool _47;
frost$collections$ListView$CombinationIterator* _50;
frost$collections$List** _51;
frost$collections$List* _52;
frost$collections$ListWriter* _53;
frost$collections$ListView$CombinationIterator* _54;
frost$core$Int* _55;
frost$core$Int _56;
frost$collections$ListView$CombinationIterator* _57;
frost$core$Int* _58;
frost$core$Int _59;
frost$core$Object* _60;
$fn20 _61;
frost$core$Object* _63;
frost$collections$ListView$CombinationIterator* _66;
frost$core$Int* _67;
frost$core$Int _68;
frost$collections$ListView$CombinationIterator* _69;
frost$collections$List** _70;
frost$collections$List* _71;
frost$collections$CollectionView* _72;
$fn21 _73;
frost$core$Int _74;
frost$core$Int _75;
int64_t _76;
int64_t _77;
int64_t _78;
frost$core$Int _79;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _87;
frost$collections$ListView$CombinationIterator* _90;
frost$core$Int* _91;
frost$core$Int _92;
frost$core$Int _93;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
frost$core$Int* _98;
frost$collections$Array* _101;
frost$collections$Array* _102;
frost$collections$ListView$CombinationIterator* _103;
frost$collections$List** _104;
frost$collections$List* _105;
frost$collections$CollectionView* _106;
$fn22 _107;
frost$core$Int _108;
frost$core$Object* _111;
frost$collections$Array* _113;
frost$core$Object* _114;
frost$core$Object* _117;
frost$collections$ListView$CombinationIterator* _120;
frost$collections$List** _121;
frost$collections$List* _122;
frost$collections$Iterable* _123;
frost$collections$Iterable* _124;
$fn23 _125;
frost$collections$Iterator* _126;
frost$collections$Iterator* _127;
frost$collections$Iterator* _129;
$fn24 _130;
frost$core$Bit _131;
bool _132;
frost$collections$Iterator* _134;
$fn25 _135;
frost$core$Object* _136;
frost$core$Int _137;
frost$collections$Array* _140;
frost$collections$Array* _141;
frost$collections$ListView$CombinationIterator* _142;
frost$collections$ListView** _143;
frost$collections$ListView* _144;
frost$collections$ListView* _145;
frost$core$Int _146;
$fn26 _147;
frost$core$Object* _148;
frost$core$Object* _149;
frost$core$Object* _150;
frost$core$Object* _152;
frost$core$Object* _154;
frost$core$Object* _157;
frost$collections$Array* _160;
frost$collections$ListView* _161;
frost$core$Object* _162;
frost$collections$Array* _164;
frost$core$Object* _165;
frost$collections$ListView$CombinationIterator* _171;
frost$collections$ListView$CombinationIterator* _172;
frost$collections$List** _173;
frost$collections$List* _174;
frost$collections$ListView* _175;
frost$collections$ListView* _176;
frost$collections$ListView$CombinationIterator* _177;
frost$core$Int* _178;
frost$core$Int _179;
$fn27 _180;
frost$core$Object* _181;
frost$core$Int _182;
frost$core$Int _183;
int64_t _184;
int64_t _185;
int64_t _186;
frost$core$Int _187;
frost$core$Int* _188;
frost$core$Object* _190;
frost$collections$ListView$CombinationIterator* _193;
frost$core$Int* _194;
frost$core$Int _195;
frost$core$Int _196;
int64_t _197;
int64_t _198;
int64_t _199;
frost$core$Int _200;
frost$core$Int* _201;
frost$collections$ListView$CombinationIterator* _207;
frost$core$Int* _208;
frost$core$Int _209;
frost$core$Int _210;
int64_t _211;
int64_t _212;
int64_t _213;
frost$core$Int _214;
frost$core$Int* _215;
frost$collections$ListView$CombinationIterator* _218;
frost$core$Int* _219;
frost$core$Int _220;
frost$core$Int _221;
int64_t _222;
int64_t _223;
bool _224;
frost$core$Bit _225;
bool _226;
frost$collections$ListView$CombinationIterator* _229;
frost$collections$ListView$CombinationIterator* _230;
frost$collections$List** _231;
frost$collections$List* _232;
frost$collections$ListView* _233;
frost$collections$ListView* _234;
frost$collections$ListView$CombinationIterator* _235;
frost$core$Int* _236;
frost$core$Int _237;
$fn28 _238;
frost$core$Object* _239;
frost$core$Int _240;
frost$core$Int _241;
int64_t _242;
int64_t _243;
int64_t _244;
frost$core$Int _245;
frost$core$Int* _246;
frost$core$Object* _248;
frost$collections$ListView$CombinationIterator* _253;
frost$collections$ListView$CombinationIterator* _254;
frost$collections$List** _255;
frost$collections$List* _256;
frost$collections$ListView* _257;
frost$collections$ListView* _258;
frost$core$Int _259;
$fn29 _260;
frost$core$Object* _261;
frost$core$Int _262;
frost$core$Int _263;
int64_t _264;
int64_t _265;
int64_t _266;
frost$core$Int _267;
frost$core$Int* _268;
frost$core$Object* _270;
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
_11 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _11, &$s32);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:138
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:139
_17 = param0;
_18 = &_17->index;
_19 = *_18;
_20 = param0;
_21 = &_20->list;
_22 = *_21;
_23 = ((frost$collections$CollectionView*) _22);
ITable* $tmp33 = _23->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
_24 = $tmp33->methods[0];
_25 = _24(_23);
_26 = param0;
_27 = &_26->r;
_28 = *_27;
_29 = _25.value;
_30 = _28.value;
_31 = _29 + _30;
_32 = (frost$core$Int) {_31};
_33 = param0;
_34 = &_33->choices;
_35 = *_34;
_36 = ((frost$collections$CollectionView*) _35);
ITable* $tmp34 = _36->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
_37 = $tmp34->methods[0];
_38 = _37(_36);
_39 = _32.value;
_40 = _38.value;
_41 = _39 - _40;
_42 = (frost$core$Int) {_41};
_43 = _19.value;
_44 = _42.value;
_45 = _43 <= _44;
_46 = (frost$core$Bit) {_45};
_47 = _46.value;
if (_47) goto block6; else goto block8;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:140
_50 = param0;
_51 = &_50->choices;
_52 = *_51;
_53 = ((frost$collections$ListWriter*) _52);
_54 = param0;
_55 = &_54->r;
_56 = *_55;
_57 = param0;
_58 = &_57->index;
_59 = *_58;
frost$core$Int$wrapper* $tmp35;
$tmp35 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp35->value = _59;
_60 = ((frost$core$Object*) $tmp35);
ITable* $tmp36 = _53->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp36 = $tmp36->next;
}
_61 = $tmp36->methods[0];
_61(_53, _56, _60);
_63 = _60;
frost$core$Frost$unref$frost$core$Object$Q(_63);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:141
_66 = param0;
_67 = &_66->r;
_68 = *_67;
_69 = param0;
_70 = &_69->choices;
_71 = *_70;
_72 = ((frost$collections$CollectionView*) _71);
ITable* $tmp37 = _72->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
_73 = $tmp37->methods[0];
_74 = _73(_72);
_75 = (frost$core$Int) {1u};
_76 = _74.value;
_77 = _75.value;
_78 = _76 - _77;
_79 = (frost$core$Int) {_78};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:141:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_82 = _68.value;
_83 = _79.value;
_84 = _82 == _83;
_85 = (frost$core$Bit) {_84};
_87 = _85.value;
if (_87) goto block9; else goto block11;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:142
_90 = param0;
_91 = &_90->index;
_92 = *_91;
_93 = (frost$core$Int) {1u};
_94 = _92.value;
_95 = _93.value;
_96 = _94 + _95;
_97 = (frost$core$Int) {_96};
_98 = &_90->index;
*_98 = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:143
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_101 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_102 = _101;
_103 = param0;
_104 = &_103->choices;
_105 = *_104;
_106 = ((frost$collections$CollectionView*) _105);
ITable* $tmp38 = _106->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp38 = $tmp38->next;
}
_107 = $tmp38->methods[0];
_108 = _107(_106);
frost$collections$Array$init$frost$core$Int(_102, _108);
*(&local0) = ((frost$collections$Array*) NULL);
_111 = ((frost$core$Object*) _101);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = *(&local0);
_114 = ((frost$core$Object*) _113);
frost$core$Frost$unref$frost$core$Object$Q(_114);
*(&local0) = _101;
_117 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_117);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:144
_120 = param0;
_121 = &_120->choices;
_122 = *_121;
_123 = ((frost$collections$Iterable*) _122);
_124 = _123;
ITable* $tmp39 = _124->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp39 = $tmp39->next;
}
_125 = $tmp39->methods[0];
_126 = _125(_124);
_127 = _126;
goto block13;
block13:;
_129 = _127;
ITable* $tmp40 = _129->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp40 = $tmp40->next;
}
_130 = $tmp40->methods[0];
_131 = _130(_129);
_132 = _131.value;
if (_132) goto block15; else goto block14;
block14:;
_134 = _127;
ITable* $tmp41 = _134->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp41 = $tmp41->next;
}
_135 = $tmp41->methods[1];
_136 = _135(_134);
_137 = ((frost$core$Int$wrapper*) _136)->value;
*(&local1) = _137;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:145
_140 = *(&local0);
_141 = _140;
_142 = param0;
_143 = &_142->list;
_144 = *_143;
_145 = _144;
_146 = *(&local1);
ITable* $tmp42 = _145->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp42 = $tmp42->next;
}
_147 = $tmp42->methods[0];
_148 = _147(_145, _146);
_149 = _148;
_150 = _149;
frost$collections$Array$add$frost$collections$Array$T(_141, _150);
_152 = _148;
frost$core$Frost$unref$frost$core$Object$Q(_152);
_154 = _136;
frost$core$Frost$unref$frost$core$Object$Q(_154);
goto block13;
block15:;
_157 = ((frost$core$Object*) _126);
frost$core$Frost$unref$frost$core$Object$Q(_157);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:147
_160 = *(&local0);
_161 = ((frost$collections$ListView*) _160);
_162 = ((frost$core$Object*) _161);
frost$core$Frost$ref$frost$core$Object$Q(_162);
_164 = *(&local0);
_165 = ((frost$core$Object*) _164);
frost$core$Frost$unref$frost$core$Object$Q(_165);
*(&local0) = ((frost$collections$Array*) NULL);
return _161;
block11:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:150
_171 = param0;
_172 = param0;
_173 = &_172->choices;
_174 = *_173;
_175 = ((frost$collections$ListView*) _174);
_176 = _175;
_177 = param0;
_178 = &_177->r;
_179 = *_178;
ITable* $tmp43 = _176->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp43 = $tmp43->next;
}
_180 = $tmp43->methods[0];
_181 = _180(_176, _179);
_182 = ((frost$core$Int$wrapper*) _181)->value;
_183 = (frost$core$Int) {1u};
_184 = _182.value;
_185 = _183.value;
_186 = _184 + _185;
_187 = (frost$core$Int) {_186};
_188 = &_171->index;
*_188 = _187;
_190 = _181;
frost$core$Frost$unref$frost$core$Object$Q(_190);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:151
_193 = param0;
_194 = &_193->r;
_195 = *_194;
_196 = (frost$core$Int) {1u};
_197 = _195.value;
_198 = _196.value;
_199 = _197 + _198;
_200 = (frost$core$Int) {_199};
_201 = &_193->r;
*_201 = _200;
goto block7;
block8:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:155
_207 = param0;
_208 = &_207->r;
_209 = *_208;
_210 = (frost$core$Int) {1u};
_211 = _209.value;
_212 = _210.value;
_213 = _211 - _212;
_214 = (frost$core$Int) {_213};
_215 = &_207->r;
*_215 = _214;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:156
_218 = param0;
_219 = &_218->r;
_220 = *_219;
_221 = (frost$core$Int) {0u};
_222 = _220.value;
_223 = _221.value;
_224 = _222 > _223;
_225 = (frost$core$Bit) {_224};
_226 = _225.value;
if (_226) goto block16; else goto block18;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:157
_229 = param0;
_230 = param0;
_231 = &_230->choices;
_232 = *_231;
_233 = ((frost$collections$ListView*) _232);
_234 = _233;
_235 = param0;
_236 = &_235->r;
_237 = *_236;
ITable* $tmp44 = _234->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp44 = $tmp44->next;
}
_238 = $tmp44->methods[0];
_239 = _238(_234, _237);
_240 = ((frost$core$Int$wrapper*) _239)->value;
_241 = (frost$core$Int) {1u};
_242 = _240.value;
_243 = _241.value;
_244 = _242 + _243;
_245 = (frost$core$Int) {_244};
_246 = &_229->index;
*_246 = _245;
_248 = _239;
frost$core$Frost$unref$frost$core$Object$Q(_248);
goto block17;
block18:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:160
_253 = param0;
_254 = param0;
_255 = &_254->choices;
_256 = *_255;
_257 = ((frost$collections$ListView*) _256);
_258 = _257;
_259 = (frost$core$Int) {0u};
ITable* $tmp45 = _258->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp45 = $tmp45->next;
}
_260 = $tmp45->methods[0];
_261 = _260(_258, _259);
_262 = ((frost$core$Int$wrapper*) _261)->value;
_263 = (frost$core$Int) {1u};
_264 = _262.value;
_265 = _263.value;
_266 = _264 + _265;
_267 = (frost$core$Int) {_266};
_268 = &_253->index;
*_268 = _267;
_270 = _261;
frost$core$Frost$unref$frost$core$Object$Q(_270);
goto block17;
block17:;
goto block7;
block7:;
goto block4;
block5:;
goto block19;
block19:;

}
void frost$collections$ListView$CombinationIterator$cleanup(frost$collections$ListView$CombinationIterator* param0) {

frost$core$Object* _1;
frost$collections$ListView$CombinationIterator* _3;
frost$collections$ListView** _4;
frost$collections$ListView* _5;
frost$core$Object* _6;
frost$collections$ListView$CombinationIterator* _8;
frost$collections$List** _9;
frost$collections$List* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:108
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->list;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->choices;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}

