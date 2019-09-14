#include "frost/collections/Stack.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/collections/Stack/StackIterator.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim(frost$collections$Stack* p0) {
    frost$collections$Iterator* result = frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Stack$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim} };

static frost$core$String $s1;
frost$collections$Stack$class_type frost$collections$Stack$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Stack$_frost$collections$Iterable, { frost$collections$Stack$get_asString$R$frost$core$String, frost$collections$Stack$cleanup, frost$collections$Stack$push$frost$collections$Stack$T, frost$collections$Stack$pop$R$frost$collections$Stack$T, frost$collections$Stack$insert$frost$core$Int$frost$collections$Stack$T, frost$collections$Stack$removeIndex$frost$core$Int$R$frost$collections$Stack$T, frost$collections$Stack$$IDX$frost$core$Int$R$frost$collections$Stack$T, frost$collections$Stack$clear, frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT$shim, frost$collections$Stack$get_count$R$frost$core$Int} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn6)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn23)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn24)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn34)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn38)(frost$collections$CollectionView*);
typedef frost$core$String* (*$fn40)(frost$core$Object*);
typedef frost$core$String* (*$fn41)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b", 23, -307227456241795868, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x70\x6f\x70\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 87, 3682859426721205233, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 108, 1355402247663454874, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x66\x72\x6f\x73\x74", 11, 638186012983189615, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s37 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x63\x6c\x65\x61\x72\x28\x29", 64, -2314003985062190716, NULL };

void frost$collections$Stack$push$frost$collections$Stack$T(void* rawSelf, frost$core$Object* param1) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Stack* _1;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_1 = param0;
_2 = &_1->contents;
_3 = *_2;
_4 = _3;
_5 = param1;
frost$collections$Array$add$frost$collections$Array$T(_4, _5);
return;

}
frost$core$Object* frost$collections$Stack$pop$R$frost$collections$Stack$T(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$core$Object* local0 = NULL;
frost$collections$Stack* _0;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$collections$CollectionView* _5;
$fn2 _6;
frost$core$Int _7;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$collections$Stack* _20;
frost$collections$Array** _21;
frost$collections$Array* _22;
frost$collections$CollectionView* _23;
$fn3 _24;
frost$core$Int _25;
frost$core$Int _26;
int64_t _27;
int64_t _28;
bool _29;
frost$core$Bit _30;
bool _31;
frost$core$Int _33;
frost$collections$Stack* _37;
frost$collections$Array** _38;
frost$collections$Array* _39;
frost$collections$Array* _40;
frost$collections$Stack* _41;
frost$collections$Array** _42;
frost$collections$Array* _43;
frost$collections$CollectionView* _44;
$fn4 _45;
frost$core$Int _46;
frost$core$Int _47;
int64_t _48;
int64_t _49;
int64_t _50;
frost$core$Int _51;
frost$core$Int _53;
int64_t _54;
int64_t _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$collections$CollectionView* _60;
$fn5 _61;
frost$core$Int _62;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$core$Int _69;
frost$core$Object*** _73;
frost$core$Object** _74;
frost$core$Int64 _75;
int64_t _76;
frost$core$Object* _77;
frost$core$Object* _78;
frost$core$Object* _81;
frost$core$Object* _83;
frost$core$Object* _85;
frost$core$Object* _86;
frost$core$Object* _89;
frost$collections$Stack* _92;
frost$collections$Array** _93;
frost$collections$Array* _94;
frost$collections$Array* _95;
frost$collections$Stack* _96;
frost$collections$Array** _97;
frost$collections$Array* _98;
frost$collections$CollectionView* _99;
$fn6 _100;
frost$core$Int _101;
frost$core$Int _102;
int64_t _103;
int64_t _104;
int64_t _105;
frost$core$Int _106;
frost$core$Object* _107;
frost$core$Object* _108;
frost$core$Object* _109;
frost$core$Object* _112;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Object* _116;
_0 = param0;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:50:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_3 = &_0->contents;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp7 = _5->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_6 = $tmp7->methods[0];
_7 = _6(_5);
_9 = (frost$core$Int) {0u};
_10 = _7.value;
_11 = _9.value;
_12 = _10 > _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _16, &$s9);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:52
_20 = param0;
_21 = &_20->contents;
_22 = *_21;
_23 = ((frost$collections$CollectionView*) _22);
ITable* $tmp10 = _23->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_24 = $tmp10->methods[0];
_25 = _24(_23);
_26 = (frost$core$Int) {0u};
_27 = _25.value;
_28 = _26.value;
_29 = _27 > _28;
_30 = (frost$core$Bit) {_29};
_31 = _30.value;
if (_31) goto block4; else goto block5;
block5:;
_33 = (frost$core$Int) {52u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, _33);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:53
_37 = param0;
_38 = &_37->contents;
_39 = *_38;
_40 = _39;
_41 = param0;
_42 = &_41->contents;
_43 = *_42;
_44 = ((frost$collections$CollectionView*) _43);
ITable* $tmp12 = _44->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_45 = $tmp12->methods[0];
_46 = _45(_44);
_47 = (frost$core$Int) {1u};
_48 = _46.value;
_49 = _47.value;
_50 = _48 - _49;
_51 = (frost$core$Int) {_50};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:53:31
_53 = (frost$core$Int) {0u};
_54 = _51.value;
_55 = _53.value;
_56 = _54 >= _55;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block9; else goto block8;
block9:;
_60 = ((frost$collections$CollectionView*) _40);
ITable* $tmp13 = _60->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_61 = $tmp13->methods[0];
_62 = _61(_60);
_63 = _51.value;
_64 = _62.value;
_65 = _63 < _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block7; else goto block8;
block8:;
_69 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _69, &$s15);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_73 = &_40->data;
_74 = *_73;
_75 = frost$core$Int64$init$frost$core$Int(_51);
_76 = _75.value;
_77 = _74[_76];
_78 = _77;
frost$core$Frost$ref$frost$core$Object$Q(_78);
_81 = _77;
*(&local0) = ((frost$core$Object*) NULL);
_83 = _81;
frost$core$Frost$ref$frost$core$Object$Q(_83);
_85 = *(&local0);
_86 = _85;
frost$core$Frost$unref$frost$core$Object$Q(_86);
*(&local0) = _81;
_89 = _77;
frost$core$Frost$unref$frost$core$Object$Q(_89);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:54
_92 = param0;
_93 = &_92->contents;
_94 = *_93;
_95 = _94;
_96 = param0;
_97 = &_96->contents;
_98 = *_97;
_99 = ((frost$collections$CollectionView*) _98);
ITable* $tmp16 = _99->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_100 = $tmp16->methods[0];
_101 = _100(_99);
_102 = (frost$core$Int) {1u};
_103 = _101.value;
_104 = _102.value;
_105 = _103 - _104;
_106 = (frost$core$Int) {_105};
_107 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_95, _106);
_108 = _107;
_109 = _107;
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:55
_112 = *(&local0);
_113 = _112;
frost$core$Frost$ref$frost$core$Object$Q(_113);
_115 = *(&local0);
_116 = _115;
frost$core$Frost$unref$frost$core$Object$Q(_116);
*(&local0) = ((frost$core$Object*) NULL);
return _112;

}
void frost$collections$Stack$insert$frost$core$Int$frost$collections$Stack$T(void* rawSelf, frost$core$Int param1, frost$core$Object* param2) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Stack* _1;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$collections$Stack* _5;
frost$collections$Array** _6;
frost$collections$Array* _7;
frost$collections$CollectionView* _8;
$fn17 _9;
frost$core$Int _10;
frost$core$Int _11;
int64_t _12;
int64_t _13;
int64_t _14;
frost$core$Int _15;
int64_t _16;
int64_t _17;
int64_t _18;
frost$core$Int _19;
frost$core$Object* _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:59
_1 = param0;
_2 = &_1->contents;
_3 = *_2;
_4 = _3;
_5 = param0;
_6 = &_5->contents;
_7 = *_6;
_8 = ((frost$collections$CollectionView*) _7);
ITable* $tmp18 = _8->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_9 = $tmp18->methods[0];
_10 = _9(_8);
_11 = (frost$core$Int) {1u};
_12 = _10.value;
_13 = _11.value;
_14 = _12 - _13;
_15 = (frost$core$Int) {_14};
_16 = _15.value;
_17 = param1.value;
_18 = _16 - _17;
_19 = (frost$core$Int) {_18};
_20 = param2;
frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(_4, _19, _20);
return;

}
frost$core$Object* frost$collections$Stack$removeIndex$frost$core$Int$R$frost$collections$Stack$T(void* rawSelf, frost$core$Int param1) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Stack* _1;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$collections$Stack* _5;
frost$collections$Array** _6;
frost$collections$Array* _7;
frost$collections$CollectionView* _8;
$fn19 _9;
frost$core$Int _10;
frost$core$Int _11;
int64_t _12;
int64_t _13;
int64_t _14;
frost$core$Int _15;
int64_t _16;
int64_t _17;
int64_t _18;
frost$core$Int _19;
frost$core$Object* _20;
frost$core$Object* _21;
frost$core$Object* _22;
frost$core$Object* _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:63
_1 = param0;
_2 = &_1->contents;
_3 = *_2;
_4 = _3;
_5 = param0;
_6 = &_5->contents;
_7 = *_6;
_8 = ((frost$collections$CollectionView*) _7);
ITable* $tmp20 = _8->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_9 = $tmp20->methods[0];
_10 = _9(_8);
_11 = (frost$core$Int) {1u};
_12 = _10.value;
_13 = _11.value;
_14 = _12 - _13;
_15 = (frost$core$Int) {_14};
_16 = _15.value;
_17 = param1.value;
_18 = _16 - _17;
_19 = (frost$core$Int) {_18};
_20 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_4, _19);
_21 = _20;
_22 = _21;
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = _20;
frost$core$Frost$unref$frost$core$Object$Q(_24);
return _21;

}
frost$core$Object* frost$collections$Stack$$IDX$frost$core$Int$R$frost$collections$Stack$T(void* rawSelf, frost$core$Int param1) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$Stack* _7;
frost$collections$Array** _10;
frost$collections$Array* _11;
frost$collections$CollectionView* _12;
$fn21 _13;
frost$core$Int _14;
int64_t _16;
int64_t _17;
bool _18;
frost$core$Bit _19;
bool _20;
frost$core$Int _22;
frost$collections$Stack* _26;
frost$collections$Array** _27;
frost$collections$Array* _28;
frost$collections$CollectionView* _29;
$fn22 _30;
frost$core$Int _31;
int64_t _32;
int64_t _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _38;
frost$collections$Stack* _42;
frost$collections$Array** _43;
frost$collections$Array* _44;
frost$collections$Array* _45;
frost$collections$Stack* _46;
frost$collections$Array** _47;
frost$collections$Array* _48;
frost$collections$CollectionView* _49;
$fn23 _50;
frost$core$Int _51;
frost$core$Int _52;
int64_t _53;
int64_t _54;
int64_t _55;
frost$core$Int _56;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
frost$core$Int _62;
int64_t _63;
int64_t _64;
bool _65;
frost$core$Bit _66;
bool _67;
frost$collections$CollectionView* _69;
$fn24 _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
frost$core$Int _78;
frost$core$Object*** _82;
frost$core$Object** _83;
frost$core$Int64 _84;
int64_t _85;
frost$core$Object* _86;
frost$core$Object* _87;
frost$core$Object* _90;
frost$core$Object* _91;
frost$core$Object* _93;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = param0;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_10 = &_7->contents;
_11 = *_10;
_12 = ((frost$collections$CollectionView*) _11);
ITable* $tmp25 = _12->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
_13 = $tmp25->methods[0];
_14 = _13(_12);
_16 = param1.value;
_17 = _14.value;
_18 = _16 < _17;
_19 = (frost$core$Bit) {_18};
_20 = _19.value;
if (_20) goto block1; else goto block2;
block2:;
_22 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _22, &$s27);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_26 = param0;
_27 = &_26->contents;
_28 = *_27;
_29 = ((frost$collections$CollectionView*) _28);
ITable* $tmp28 = _29->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_30 = $tmp28->methods[0];
_31 = _30(_29);
_32 = _31.value;
_33 = param1.value;
_34 = _32 > _33;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block5; else goto block6;
block6:;
_38 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s29, _38);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_42 = param0;
_43 = &_42->contents;
_44 = *_43;
_45 = _44;
_46 = param0;
_47 = &_46->contents;
_48 = *_47;
_49 = ((frost$collections$CollectionView*) _48);
ITable* $tmp30 = _49->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_50 = $tmp30->methods[0];
_51 = _50(_49);
_52 = (frost$core$Int) {1u};
_53 = _51.value;
_54 = _52.value;
_55 = _53 - _54;
_56 = (frost$core$Int) {_55};
_57 = _56.value;
_58 = param1.value;
_59 = _57 - _58;
_60 = (frost$core$Int) {_59};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_62 = (frost$core$Int) {0u};
_63 = _60.value;
_64 = _62.value;
_65 = _63 >= _64;
_66 = (frost$core$Bit) {_65};
_67 = _66.value;
if (_67) goto block10; else goto block9;
block10:;
_69 = ((frost$collections$CollectionView*) _45);
ITable* $tmp31 = _69->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
_70 = $tmp31->methods[0];
_71 = _70(_69);
_72 = _60.value;
_73 = _71.value;
_74 = _72 < _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block8; else goto block9;
block9:;
_78 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _78, &$s33);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_82 = &_45->data;
_83 = *_82;
_84 = frost$core$Int64$init$frost$core$Int(_60);
_85 = _84.value;
_86 = _83[_85];
_87 = _86;
frost$core$Frost$ref$frost$core$Object$Q(_87);
_90 = _86;
_91 = _90;
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = _86;
frost$core$Frost$unref$frost$core$Object$Q(_93);
return _90;

}
void frost$collections$Stack$clear(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$core$Int local0;
frost$collections$Stack* _1;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$core$Int _24;
frost$core$Int* _25;
frost$core$Int _28;
frost$core$Int* _29;
frost$core$Int _30;
frost$core$Bit _31;
frost$core$Range$LTfrost$core$Int$GT _32;
frost$core$Int _33;
frost$core$Int _35;
frost$core$Bit _36;
bool _37;
frost$core$Int _38;
int64_t _40;
int64_t _41;
bool _42;
frost$core$Bit _43;
bool _44;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$Object*** _53;
frost$core$Object** _54;
frost$core$Int _55;
frost$core$Int64 _56;
int64_t _57;
frost$core$Object* _58;
frost$core$Object* _59;
frost$core$Int _63;
int64_t _64;
int64_t _65;
int64_t _66;
frost$core$Int _67;
int64_t _69;
int64_t _70;
bool _71;
frost$core$Bit _72;
bool _73;
int64_t _75;
int64_t _76;
bool _77;
frost$core$Bit _78;
bool _79;
int64_t _81;
int64_t _82;
int64_t _83;
frost$core$Int _84;
frost$collections$CollectionView* _6;
$fn34 _7;
frost$core$Int _8;
frost$core$Int _9;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
bool _20;
frost$core$Int _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:80
_1 = param0;
_2 = &_1->contents;
_3 = *_2;
_4 = _3;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_24 = (frost$core$Int) {0u};
_25 = &_4->_count;
*_25 = _24;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_28 = (frost$core$Int) {0u};
_29 = &_4->capacity;
_30 = *_29;
_31 = (frost$core$Bit) {false};
_32 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_28, _30, _31);
_33 = _32.min;
*(&local0) = _33;
_35 = _32.max;
_36 = _32.inclusive;
_37 = _36.value;
_38 = (frost$core$Int) {1u};
if (_37) goto block9; else goto block10;
block9:;
_40 = _33.value;
_41 = _35.value;
_42 = _40 <= _41;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block6; else goto block7;
block10:;
_46 = _33.value;
_47 = _35.value;
_48 = _46 < _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_53 = &_4->data;
_54 = *_53;
_55 = *(&local0);
_56 = frost$core$Int64$init$frost$core$Int(_55);
_57 = _56.value;
_58 = _54[_57];
_59 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_59);
_54[_57] = ((frost$core$Object*) NULL);
_63 = *(&local0);
_64 = _35.value;
_65 = _63.value;
_66 = _64 - _65;
_67 = (frost$core$Int) {_66};
if (_37) goto block12; else goto block13;
block12:;
_69 = _67.value;
_70 = _38.value;
_71 = _69 >= _70;
_72 = (frost$core$Bit) {_71};
_73 = _72.value;
if (_73) goto block11; else goto block7;
block13:;
_75 = _67.value;
_76 = _38.value;
_77 = _75 > _76;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block11; else goto block7;
block11:;
_81 = _63.value;
_82 = _38.value;
_83 = _81 + _82;
_84 = (frost$core$Int) {_83};
*(&local0) = _84;
goto block6;
block7:;
_6 = ((frost$collections$CollectionView*) _4);
ITable* $tmp35 = _6->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp35 = $tmp35->next;
}
_7 = $tmp35->methods[0];
_8 = _7(_6);
_9 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_12 = _8.value;
_13 = _9.value;
_14 = _12 == _13;
_15 = (frost$core$Bit) {_14};
_20 = _15.value;
if (_20) goto block4; else goto block5;
block4:;
return;
block5:;
_17 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _17, &$s37);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Stack$StackIterator* _1;
frost$collections$Stack$StackIterator* _2;
frost$collections$Stack* _3;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:89
_1 = (frost$collections$Stack$StackIterator*) frostObjectAlloc(sizeof(frost$collections$Stack$StackIterator), (frost$core$Class*) &frost$collections$Stack$StackIterator$class);
_2 = _1;
_3 = param0;
frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT(_2, _3);
_5 = ((frost$collections$Iterator*) _1);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$core$Int frost$collections$Stack$get_count$R$frost$core$Int(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Stack* _1;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$collections$CollectionView* _4;
$fn38 _5;
frost$core$Int _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_1 = param0;
_2 = &_1->contents;
_3 = *_2;
_4 = ((frost$collections$CollectionView*) _3);
ITable* $tmp39 = _4->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
_5 = $tmp39->methods[0];
_6 = _5(_4);
return _6;

}
frost$core$String* frost$collections$Stack$get_asString$R$frost$core$String(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Stack* _1;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$core$Object* _4;
$fn40 _5;
frost$core$String* _6;
frost$core$Object* _7;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:98
_1 = param0;
_2 = &_1->contents;
_3 = *_2;
_4 = ((frost$core$Object*) _3);
_5 = ($fn41) _4->$class->vtable[0];
_6 = _5(_4);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return _6;

}
void frost$collections$Stack$init(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Stack* _1;
frost$collections$Array* _2;
frost$collections$Array* _3;
frost$core$Object* _5;
frost$collections$Array** _7;
frost$collections$Array* _8;
frost$core$Object* _9;
frost$collections$Array** _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:34
_1 = param0;
_2 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_3 = _2;
frost$collections$Array$init(_3);
_5 = ((frost$core$Object*) _2);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &_1->contents;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &_1->contents;
*_11 = _2;
_13 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}
void frost$collections$Stack$cleanup(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$core$Object* _1;
frost$collections$Stack* _3;
frost$collections$Array** _4;
frost$collections$Array* _5;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->contents;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}

