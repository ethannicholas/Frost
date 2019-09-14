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

frost$collections$Stack$StackIterator* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$collections$Stack$StackIterator* _6;
frost$core$Object* _7;
frost$collections$Stack** _9;
frost$collections$Stack* _10;
frost$core$Object* _11;
frost$collections$Stack** _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:14
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->index;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:17
_6 = param0;
_7 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &_6->stack;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = &_6->stack;
*_13 = param1;
return;

}
frost$core$Bit frost$collections$Stack$StackIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$Stack$StackIterator* param0 = (frost$collections$Stack$StackIterator*) rawSelf;

frost$collections$Stack$StackIterator* _1;
frost$core$Int* _2;
frost$core$Int _3;
frost$collections$Stack$StackIterator* _4;
frost$collections$Stack** _5;
frost$collections$Stack* _6;
frost$collections$Stack* _7;
frost$collections$Array** _10;
frost$collections$Array* _11;
frost$collections$CollectionView* _12;
$fn2 _13;
frost$core$Int _14;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:22
_1 = param0;
_2 = &_1->index;
_3 = *_2;
_4 = param0;
_5 = &_4->stack;
_6 = *_5;
_7 = _6;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:22:34
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_10 = &_7->contents;
_11 = *_10;
_12 = ((frost$collections$CollectionView*) _11);
ITable* $tmp3 = _12->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_13 = $tmp3->methods[0];
_14 = _13(_12);
_16 = _3.value;
_17 = _14.value;
_18 = _16 >= _17;
_19 = (frost$core$Bit) {_18};
return _19;

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
frost$collections$Stack$StackIterator* _15;
frost$collections$Stack** _16;
frost$collections$Stack* _17;
frost$collections$Stack* _18;
frost$collections$Stack$StackIterator* _19;
frost$core$Int* _20;
frost$core$Int _21;
frost$core$Int _23;
int64_t _24;
int64_t _25;
bool _26;
frost$core$Bit _27;
bool _28;
frost$collections$Array** _32;
frost$collections$Array* _33;
frost$collections$CollectionView* _34;
$fn5 _35;
frost$core$Int _36;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
frost$core$Int _44;
frost$collections$Array** _48;
frost$collections$Array* _49;
frost$collections$CollectionView* _50;
$fn6 _51;
frost$core$Int _52;
int64_t _53;
int64_t _54;
bool _55;
frost$core$Bit _56;
bool _57;
frost$core$Int _59;
frost$collections$Array** _63;
frost$collections$Array* _64;
frost$collections$Array* _65;
frost$collections$Array** _66;
frost$collections$Array* _67;
frost$collections$CollectionView* _68;
$fn7 _69;
frost$core$Int _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
int64_t _74;
frost$core$Int _75;
int64_t _76;
int64_t _77;
int64_t _78;
frost$core$Int _79;
frost$core$Int _81;
int64_t _82;
int64_t _83;
bool _84;
frost$core$Bit _85;
bool _86;
frost$collections$CollectionView* _88;
$fn8 _89;
frost$core$Int _90;
int64_t _91;
int64_t _92;
bool _93;
frost$core$Bit _94;
bool _95;
frost$core$Int _97;
frost$core$Object*** _101;
frost$core$Object** _102;
frost$core$Int64 _103;
int64_t _104;
frost$core$Object* _105;
frost$core$Object* _106;
frost$core$Object* _109;
frost$core$Object* _110;
frost$core$Object* _112;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Object* _120;
frost$core$Object* _123;
frost$collections$Stack$StackIterator* _126;
frost$core$Int* _127;
frost$core$Int _128;
frost$core$Int _129;
int64_t _130;
int64_t _131;
int64_t _132;
frost$core$Int _133;
frost$core$Int* _134;
frost$core$Object* _137;
frost$core$Object* _138;
frost$core$Object* _140;
frost$core$Object* _141;
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
_15 = param0;
_16 = &_15->stack;
_17 = *_16;
_18 = _17;
_19 = param0;
_20 = &_19->index;
_21 = *_20;
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int):frost.collections.Stack.T from Stack.frost:27:32
_23 = (frost$core$Int) {0u};
_24 = _21.value;
_25 = _23.value;
_26 = _24 >= _25;
_27 = (frost$core$Bit) {_26};
_28 = _27.value;
if (_28) goto block7; else goto block6;
block7:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_32 = &_18->contents;
_33 = *_32;
_34 = ((frost$collections$CollectionView*) _33);
ITable* $tmp12 = _34->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_35 = $tmp12->methods[0];
_36 = _35(_34);
_38 = _21.value;
_39 = _36.value;
_40 = _38 < _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block5; else goto block6;
block6:;
_44 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _44, &$s14);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_48 = &_18->contents;
_49 = *_48;
_50 = ((frost$collections$CollectionView*) _49);
ITable* $tmp15 = _50->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_51 = $tmp15->methods[0];
_52 = _51(_50);
_53 = _52.value;
_54 = _21.value;
_55 = _53 > _54;
_56 = (frost$core$Bit) {_55};
_57 = _56.value;
if (_57) goto block9; else goto block10;
block10:;
_59 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s16, _59);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_63 = &_18->contents;
_64 = *_63;
_65 = _64;
_66 = &_18->contents;
_67 = *_66;
_68 = ((frost$collections$CollectionView*) _67);
ITable* $tmp17 = _68->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
_69 = $tmp17->methods[0];
_70 = _69(_68);
_71 = (frost$core$Int) {1u};
_72 = _70.value;
_73 = _71.value;
_74 = _72 - _73;
_75 = (frost$core$Int) {_74};
_76 = _75.value;
_77 = _21.value;
_78 = _76 - _77;
_79 = (frost$core$Int) {_78};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_81 = (frost$core$Int) {0u};
_82 = _79.value;
_83 = _81.value;
_84 = _82 >= _83;
_85 = (frost$core$Bit) {_84};
_86 = _85.value;
if (_86) goto block14; else goto block13;
block14:;
_88 = ((frost$collections$CollectionView*) _65);
ITable* $tmp18 = _88->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_89 = $tmp18->methods[0];
_90 = _89(_88);
_91 = _79.value;
_92 = _90.value;
_93 = _91 < _92;
_94 = (frost$core$Bit) {_93};
_95 = _94.value;
if (_95) goto block12; else goto block13;
block13:;
_97 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _97, &$s20);
abort(); // unreachable
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_101 = &_65->data;
_102 = *_101;
_103 = frost$core$Int64$init$frost$core$Int(_79);
_104 = _103.value;
_105 = _102[_104];
_106 = _105;
frost$core$Frost$ref$frost$core$Object$Q(_106);
_109 = _105;
_110 = _109;
frost$core$Frost$ref$frost$core$Object$Q(_110);
_112 = _105;
frost$core$Frost$unref$frost$core$Object$Q(_112);
_115 = _109;
*(&local0) = ((frost$core$Object*) NULL);
_117 = _115;
frost$core$Frost$ref$frost$core$Object$Q(_117);
_119 = *(&local0);
_120 = _119;
frost$core$Frost$unref$frost$core$Object$Q(_120);
*(&local0) = _115;
_123 = _109;
frost$core$Frost$unref$frost$core$Object$Q(_123);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:28
_126 = param0;
_127 = &_126->index;
_128 = *_127;
_129 = (frost$core$Int) {1u};
_130 = _128.value;
_131 = _129.value;
_132 = _130 + _131;
_133 = (frost$core$Int) {_132};
_134 = &_126->index;
*_134 = _133;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:29
_137 = *(&local0);
_138 = _137;
frost$core$Frost$ref$frost$core$Object$Q(_138);
_140 = *(&local0);
_141 = _140;
frost$core$Frost$unref$frost$core$Object$Q(_141);
*(&local0) = ((frost$core$Object*) NULL);
return _137;

}
void frost$collections$Stack$StackIterator$cleanup(void* rawSelf) {
frost$collections$Stack$StackIterator* param0 = (frost$collections$Stack$StackIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$Stack$StackIterator* _3;
frost$collections$Stack** _4;
frost$collections$Stack* _5;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:11
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->stack;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}






