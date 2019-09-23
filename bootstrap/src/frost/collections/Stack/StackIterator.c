#include "frost/collections/Stack/StackIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Stack.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/unsafe/NewPointer.h"
#include "frost/core/Int64.h"

__attribute__((weak)) frost$core$Object* frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim(frost$collections$Stack$StackIterator* p0) {
    frost$core$Object* result = frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Stack$StackIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit, frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Stack$StackIterator$class_type frost$collections$Stack$StackIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Stack$StackIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Stack$StackIterator$cleanup, frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit, frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn7)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72", 37, 8349981871227951908, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x53\x74\x61\x63\x6b\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 116, -588509276229923081, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };

void frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT(void* rawSelf, frost$collections$Stack* param1) {
frost$collections$Stack$StackIterator* param0 = (frost$collections$Stack$StackIterator*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$collections$Stack** _7;
frost$collections$Stack* _8;
frost$core$Object* _9;
frost$collections$Stack** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:14
_1 = (frost$core$Int) {0u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:17
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->stack;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->stack;
*_11 = param1;
return;

}
frost$core$Bit frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$Stack$StackIterator* param0 = (frost$collections$Stack$StackIterator*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$collections$Stack** _3;
frost$collections$Stack* _4;
frost$collections$Array** _7;
frost$collections$Array* _8;
frost$collections$CollectionView* _9;
$fn2 _10;
frost$core$Int _11;
int64_t _13;
int64_t _14;
bool _15;
frost$core$Bit _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:22
_1 = &param0->index;
_2 = *_1;
_3 = &param0->stack;
_4 = *_3;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_7 = &_4->contents;
_8 = *_7;
_9 = ((frost$collections$CollectionView*) _8);
ITable* $tmp3 = _9->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_10 = $tmp3->methods[0];
_11 = _10(_9);
_13 = _2.value;
_14 = _11.value;
_15 = _13 >= _14;
_16 = (frost$core$Bit) {_15};
return _16;

}
frost$core$Object* frost$collections$Stack$StackIterator$next$R$frost$collections$Stack$StackIterator$T(void* rawSelf) {
frost$collections$Stack$StackIterator* param0 = (frost$collections$Stack$StackIterator*) rawSelf;

frost$core$Object* local0 = NULL;
frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Stack** _15;
frost$collections$Stack* _16;
frost$core$Int* _17;
frost$core$Int _18;
frost$core$Int _20;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$collections$Array** _29;
frost$collections$Array* _30;
frost$collections$CollectionView* _31;
$fn5 _32;
frost$core$Int _33;
int64_t _35;
int64_t _36;
bool _37;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
frost$collections$Array** _45;
frost$collections$Array* _46;
frost$collections$CollectionView* _47;
$fn6 _48;
frost$core$Int _49;
int64_t _50;
int64_t _51;
bool _52;
frost$core$Bit _53;
bool _54;
frost$core$Int _56;
frost$collections$Array** _60;
frost$collections$Array* _61;
frost$collections$Array** _62;
frost$collections$Array* _63;
frost$collections$CollectionView* _64;
$fn7 _65;
frost$core$Int _66;
frost$core$Int _67;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
int64_t _74;
frost$core$Int _75;
frost$core$Int _77;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
frost$collections$CollectionView* _84;
$fn8 _85;
frost$core$Int _86;
int64_t _87;
int64_t _88;
bool _89;
frost$core$Bit _90;
bool _91;
frost$core$Int _93;
frost$unsafe$NewPointer* _97;
frost$unsafe$NewPointer _98;
int64_t _99;
frost$core$Int64 _100;
int64_t _101;
frost$core$Object* _102;
frost$core$Object* _103;
frost$core$Object* _106;
frost$core$Object* _107;
frost$core$Object* _109;
frost$core$Object* _112;
frost$core$Object* _114;
frost$core$Object* _116;
frost$core$Object* _117;
frost$core$Object* _120;
frost$core$Int* _123;
frost$core$Int _124;
frost$core$Int _125;
int64_t _126;
int64_t _127;
int64_t _128;
frost$core$Int _129;
frost$core$Int* _130;
frost$core$Object* _133;
frost$core$Object* _134;
frost$core$Object* _136;
frost$core$Object* _137;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp9 = _0->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
_1 = $tmp9->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {26u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _11, &$s11);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:27
_15 = &param0->stack;
_16 = *_15;
_17 = &param0->index;
_18 = *_17;
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Stack.frost:27:32
_20 = (frost$core$Int) {0u};
_21 = _18.value;
_22 = _20.value;
_23 = _21 >= _22;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block7; else goto block6;
block7:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_29 = &_16->contents;
_30 = *_29;
_31 = ((frost$collections$CollectionView*) _30);
ITable* $tmp12 = _31->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_32 = $tmp12->methods[0];
_33 = _32(_31);
_35 = _18.value;
_36 = _33.value;
_37 = _35 < _36;
_38 = (frost$core$Bit) {_37};
_39 = _38.value;
if (_39) goto block5; else goto block6;
block6:;
_41 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _41, &$s14);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_45 = &_16->contents;
_46 = *_45;
_47 = ((frost$collections$CollectionView*) _46);
ITable* $tmp15 = _47->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_48 = $tmp15->methods[0];
_49 = _48(_47);
_50 = _49.value;
_51 = _18.value;
_52 = _50 > _51;
_53 = (frost$core$Bit) {_52};
_54 = _53.value;
if (_54) goto block9; else goto block10;
block10:;
_56 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s16, _56);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_60 = &_16->contents;
_61 = *_60;
_62 = &_16->contents;
_63 = *_62;
_64 = ((frost$collections$CollectionView*) _63);
ITable* $tmp17 = _64->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
_65 = $tmp17->methods[0];
_66 = _65(_64);
_67 = (frost$core$Int) {1u};
_68 = _66.value;
_69 = _67.value;
_70 = _68 - _69;
_71 = (frost$core$Int) {_70};
_72 = _71.value;
_73 = _18.value;
_74 = _72 - _73;
_75 = (frost$core$Int) {_74};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_77 = (frost$core$Int) {0u};
_78 = _75.value;
_79 = _77.value;
_80 = _78 >= _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block14; else goto block13;
block14:;
_84 = ((frost$collections$CollectionView*) _61);
ITable* $tmp18 = _84->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_85 = $tmp18->methods[0];
_86 = _85(_84);
_87 = _75.value;
_88 = _86.value;
_89 = _87 < _88;
_90 = (frost$core$Bit) {_89};
_91 = _90.value;
if (_91) goto block12; else goto block13;
block13:;
_93 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _93, &$s20);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_97 = &_61->data;
_98 = *_97;
_99 = _98.value;
_100 = frost$core$Int64$init$frost$core$Int(_75);
_101 = _100.value;
_102 = ((frost$core$Object**)_99)[_101];
_103 = _102;
frost$core$Frost$ref$frost$core$Object$Q(_103);
_106 = _102;
_107 = _106;
frost$core$Frost$ref$frost$core$Object$Q(_107);
_109 = _102;
frost$core$Frost$unref$frost$core$Object$Q(_109);
_112 = _106;
*(&local0) = ((frost$core$Object*) NULL);
_114 = _112;
frost$core$Frost$ref$frost$core$Object$Q(_114);
_116 = *(&local0);
_117 = _116;
frost$core$Frost$unref$frost$core$Object$Q(_117);
*(&local0) = _112;
_120 = _106;
frost$core$Frost$unref$frost$core$Object$Q(_120);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:28
_123 = &param0->index;
_124 = *_123;
_125 = (frost$core$Int) {1u};
_126 = _124.value;
_127 = _125.value;
_128 = _126 + _127;
_129 = (frost$core$Int) {_128};
_130 = &param0->index;
*_130 = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:29
_133 = *(&local0);
_134 = _133;
frost$core$Frost$ref$frost$core$Object$Q(_134);
_136 = *(&local0);
_137 = _136;
frost$core$Frost$unref$frost$core$Object$Q(_137);
*(&local0) = ((frost$core$Object*) NULL);
return _133;

}
void frost$collections$Stack$StackIterator$cleanup(void* rawSelf) {
frost$collections$Stack$StackIterator* param0 = (frost$collections$Stack$StackIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$Stack** _3;
frost$collections$Stack* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:11
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->stack;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






