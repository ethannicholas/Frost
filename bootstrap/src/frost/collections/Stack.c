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

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$core$Object* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:42
_1 = &param0->contents;
_2 = *_1;
_3 = param1;
frost$collections$Array$add$frost$collections$Array$T(_2, _3);
return;

}
frost$core$Object* frost$collections$Stack$pop$R$frost$collections$Stack$T(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$core$Object* local0 = NULL;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$collections$CollectionView* _4;
$fn2 _5;
frost$core$Int _6;
frost$core$Int _8;
int64_t _9;
int64_t _10;
bool _11;
frost$core$Bit _12;
bool _13;
frost$core$Int _15;
frost$collections$Array** _19;
frost$collections$Array* _20;
frost$collections$CollectionView* _21;
$fn3 _22;
frost$core$Int _23;
frost$core$Int _24;
int64_t _25;
int64_t _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
frost$collections$Array** _35;
frost$collections$Array* _36;
frost$collections$Array** _37;
frost$collections$Array* _38;
frost$collections$CollectionView* _39;
$fn4 _40;
frost$core$Int _41;
frost$core$Int _42;
int64_t _43;
int64_t _44;
int64_t _45;
frost$core$Int _46;
frost$core$Int _48;
int64_t _49;
int64_t _50;
bool _51;
frost$core$Bit _52;
bool _53;
frost$collections$CollectionView* _55;
$fn5 _56;
frost$core$Int _57;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$core$Int _64;
frost$core$Object*** _68;
frost$core$Object** _69;
frost$core$Int64 _70;
int64_t _71;
frost$core$Object* _72;
frost$core$Object* _73;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _80;
frost$core$Object* _81;
frost$core$Object* _84;
frost$collections$Array** _87;
frost$collections$Array* _88;
frost$collections$Array** _89;
frost$collections$Array* _90;
frost$collections$CollectionView* _91;
$fn6 _92;
frost$core$Int _93;
frost$core$Int _94;
int64_t _95;
int64_t _96;
int64_t _97;
frost$core$Int _98;
frost$core$Object* _99;
frost$core$Object* _100;
frost$core$Object* _101;
frost$core$Object* _104;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _108;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:50:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_2 = &param0->contents;
_3 = *_2;
_4 = ((frost$collections$CollectionView*) _3);
ITable* $tmp7 = _4->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp7 = $tmp7->next;
}
_5 = $tmp7->methods[0];
_6 = _5(_4);
_8 = (frost$core$Int) {0u};
_9 = _6.value;
_10 = _8.value;
_11 = _9 > _10;
_12 = (frost$core$Bit) {_11};
_13 = _12.value;
if (_13) goto block1; else goto block2;
block2:;
_15 = (frost$core$Int) {51u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _15, &$s9);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:52
_19 = &param0->contents;
_20 = *_19;
_21 = ((frost$collections$CollectionView*) _20);
ITable* $tmp10 = _21->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_22 = $tmp10->methods[0];
_23 = _22(_21);
_24 = (frost$core$Int) {0u};
_25 = _23.value;
_26 = _24.value;
_27 = _25 > _26;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block4; else goto block5;
block5:;
_31 = (frost$core$Int) {52u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s11, _31);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:53
_35 = &param0->contents;
_36 = *_35;
_37 = &param0->contents;
_38 = *_37;
_39 = ((frost$collections$CollectionView*) _38);
ITable* $tmp12 = _39->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_40 = $tmp12->methods[0];
_41 = _40(_39);
_42 = (frost$core$Int) {1u};
_43 = _41.value;
_44 = _42.value;
_45 = _43 - _44;
_46 = (frost$core$Int) {_45};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:53:31
_48 = (frost$core$Int) {0u};
_49 = _46.value;
_50 = _48.value;
_51 = _49 >= _50;
_52 = (frost$core$Bit) {_51};
_53 = _52.value;
if (_53) goto block9; else goto block8;
block9:;
_55 = ((frost$collections$CollectionView*) _36);
ITable* $tmp13 = _55->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
_56 = $tmp13->methods[0];
_57 = _56(_55);
_58 = _46.value;
_59 = _57.value;
_60 = _58 < _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block7; else goto block8;
block8:;
_64 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _64, &$s15);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_68 = &_36->data;
_69 = *_68;
_70 = frost$core$Int64$init$frost$core$Int(_46);
_71 = _70.value;
_72 = _69[_71];
_73 = _72;
frost$core$Frost$ref$frost$core$Object$Q(_73);
_76 = _72;
*(&local0) = ((frost$core$Object*) NULL);
_78 = _76;
frost$core$Frost$ref$frost$core$Object$Q(_78);
_80 = *(&local0);
_81 = _80;
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local0) = _76;
_84 = _72;
frost$core$Frost$unref$frost$core$Object$Q(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:54
_87 = &param0->contents;
_88 = *_87;
_89 = &param0->contents;
_90 = *_89;
_91 = ((frost$collections$CollectionView*) _90);
ITable* $tmp16 = _91->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp16 = $tmp16->next;
}
_92 = $tmp16->methods[0];
_93 = _92(_91);
_94 = (frost$core$Int) {1u};
_95 = _93.value;
_96 = _94.value;
_97 = _95 - _96;
_98 = (frost$core$Int) {_97};
_99 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_88, _98);
_100 = _99;
_101 = _99;
frost$core$Frost$unref$frost$core$Object$Q(_101);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:55
_104 = *(&local0);
_105 = _104;
frost$core$Frost$ref$frost$core$Object$Q(_105);
_107 = *(&local0);
_108 = _107;
frost$core$Frost$unref$frost$core$Object$Q(_108);
*(&local0) = ((frost$core$Object*) NULL);
return _104;

}
void frost$collections$Stack$insert$frost$core$Int$frost$collections$Stack$T(void* rawSelf, frost$core$Int param1, frost$core$Object* param2) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$collections$CollectionView* _5;
$fn17 _6;
frost$core$Int _7;
frost$core$Int _8;
int64_t _9;
int64_t _10;
int64_t _11;
frost$core$Int _12;
int64_t _13;
int64_t _14;
int64_t _15;
frost$core$Int _16;
frost$core$Object* _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:59
_1 = &param0->contents;
_2 = *_1;
_3 = &param0->contents;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp18 = _5->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
_6 = $tmp18->methods[0];
_7 = _6(_5);
_8 = (frost$core$Int) {1u};
_9 = _7.value;
_10 = _8.value;
_11 = _9 - _10;
_12 = (frost$core$Int) {_11};
_13 = _12.value;
_14 = param1.value;
_15 = _13 - _14;
_16 = (frost$core$Int) {_15};
_17 = param2;
frost$collections$Array$insert$frost$core$Int$frost$collections$Array$T(_2, _16, _17);
return;

}
frost$core$Object* frost$collections$Stack$removeIndex$frost$core$Int$R$frost$collections$Stack$T(void* rawSelf, frost$core$Int param1) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$collections$CollectionView* _5;
$fn19 _6;
frost$core$Int _7;
frost$core$Int _8;
int64_t _9;
int64_t _10;
int64_t _11;
frost$core$Int _12;
int64_t _13;
int64_t _14;
int64_t _15;
frost$core$Int _16;
frost$core$Object* _17;
frost$core$Object* _18;
frost$core$Object* _19;
frost$core$Object* _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:63
_1 = &param0->contents;
_2 = *_1;
_3 = &param0->contents;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp20 = _5->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
_6 = $tmp20->methods[0];
_7 = _6(_5);
_8 = (frost$core$Int) {1u};
_9 = _7.value;
_10 = _8.value;
_11 = _9 - _10;
_12 = (frost$core$Int) {_11};
_13 = _12.value;
_14 = param1.value;
_15 = _13 - _14;
_16 = (frost$core$Int) {_15};
_17 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_2, _16);
_18 = _17;
_19 = _18;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = _17;
frost$core$Frost$unref$frost$core$Object$Q(_21);
return _18;

}
frost$core$Object* frost$collections$Stack$$IDX$frost$core$Int$R$frost$collections$Stack$T(void* rawSelf, frost$core$Int param1) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$Array** _9;
frost$collections$Array* _10;
frost$collections$CollectionView* _11;
$fn21 _12;
frost$core$Int _13;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$collections$Array** _25;
frost$collections$Array* _26;
frost$collections$CollectionView* _27;
$fn22 _28;
frost$core$Int _29;
int64_t _30;
int64_t _31;
bool _32;
frost$core$Bit _33;
bool _34;
frost$core$Int _36;
frost$collections$Array** _40;
frost$collections$Array* _41;
frost$collections$Array** _42;
frost$collections$Array* _43;
frost$collections$CollectionView* _44;
$fn23 _45;
frost$core$Int _46;
frost$core$Int _47;
int64_t _48;
int64_t _49;
int64_t _50;
frost$core$Int _51;
int64_t _52;
int64_t _53;
int64_t _54;
frost$core$Int _55;
frost$core$Int _57;
int64_t _58;
int64_t _59;
bool _60;
frost$core$Bit _61;
bool _62;
frost$collections$CollectionView* _64;
$fn24 _65;
frost$core$Int _66;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$core$Int _73;
frost$core$Object*** _77;
frost$core$Object** _78;
frost$core$Int64 _79;
int64_t _80;
frost$core$Object* _81;
frost$core$Object* _82;
frost$core$Object* _85;
frost$core$Object* _86;
frost$core$Object* _88;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int from Stack.frost:70:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_9 = &param0->contents;
_10 = *_9;
_11 = ((frost$collections$CollectionView*) _10);
ITable* $tmp25 = _11->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp25 = $tmp25->next;
}
_12 = $tmp25->methods[0];
_13 = _12(_11);
_15 = param1.value;
_16 = _13.value;
_17 = _15 < _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block1; else goto block2;
block2:;
_21 = (frost$core$Int) {71u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s26, _21, &$s27);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:72
_25 = &param0->contents;
_26 = *_25;
_27 = ((frost$collections$CollectionView*) _26);
ITable* $tmp28 = _27->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp28 = $tmp28->next;
}
_28 = $tmp28->methods[0];
_29 = _28(_27);
_30 = _29.value;
_31 = param1.value;
_32 = _30 > _31;
_33 = (frost$core$Bit) {_32};
_34 = _33.value;
if (_34) goto block5; else goto block6;
block6:;
_36 = (frost$core$Int) {72u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s29, _36);
abort(); // unreachable
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:73
_40 = &param0->contents;
_41 = *_40;
_42 = &param0->contents;
_43 = *_42;
_44 = ((frost$collections$CollectionView*) _43);
ITable* $tmp30 = _44->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_45 = $tmp30->methods[0];
_46 = _45(_44);
_47 = (frost$core$Int) {1u};
_48 = _46.value;
_49 = _47.value;
_50 = _48 - _49;
_51 = (frost$core$Int) {_50};
_52 = _51.value;
_53 = param1.value;
_54 = _52 - _53;
_55 = (frost$core$Int) {_54};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from Stack.frost:73:24
_57 = (frost$core$Int) {0u};
_58 = _55.value;
_59 = _57.value;
_60 = _58 >= _59;
_61 = (frost$core$Bit) {_60};
_62 = _61.value;
if (_62) goto block10; else goto block9;
block10:;
_64 = ((frost$collections$CollectionView*) _41);
ITable* $tmp31 = _64->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp31 = $tmp31->next;
}
_65 = $tmp31->methods[0];
_66 = _65(_64);
_67 = _55.value;
_68 = _66.value;
_69 = _67 < _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block8; else goto block9;
block9:;
_73 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s32, _73, &$s33);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_77 = &_41->data;
_78 = *_77;
_79 = frost$core$Int64$init$frost$core$Int(_55);
_80 = _79.value;
_81 = _78[_80];
_82 = _81;
frost$core$Frost$ref$frost$core$Object$Q(_82);
_85 = _81;
_86 = _85;
frost$core$Frost$ref$frost$core$Object$Q(_86);
_88 = _81;
frost$core$Frost$unref$frost$core$Object$Q(_88);
return _85;

}
void frost$collections$Stack$clear(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$core$Int local0;
frost$collections$Array** _1;
frost$collections$Array* _2;
frost$core$Int _22;
frost$core$Int* _23;
frost$core$Int _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Bit _29;
frost$core$Range$LTfrost$core$Int$GT _30;
frost$core$Int _31;
frost$core$Int _33;
frost$core$Bit _34;
bool _35;
frost$core$Int _36;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
bool _42;
int64_t _44;
int64_t _45;
bool _46;
frost$core$Bit _47;
bool _48;
frost$core$Object*** _51;
frost$core$Object** _52;
frost$core$Int _53;
frost$core$Int64 _54;
int64_t _55;
frost$core$Object* _56;
frost$core$Object* _57;
frost$core$Int _61;
int64_t _62;
int64_t _63;
int64_t _64;
frost$core$Int _65;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
int64_t _73;
int64_t _74;
bool _75;
frost$core$Bit _76;
bool _77;
int64_t _79;
int64_t _80;
int64_t _81;
frost$core$Int _82;
frost$collections$CollectionView* _4;
$fn34 _5;
frost$core$Int _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _18;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:80
_1 = &param0->contents;
_2 = *_1;
// begin inline call to method frost.collections.Array.clear() from Stack.frost:80:23
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:139
_22 = (frost$core$Int) {0u};
_23 = &_2->_count;
*_23 = _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:140
_26 = (frost$core$Int) {0u};
_27 = &_2->capacity;
_28 = *_27;
_29 = (frost$core$Bit) {false};
_30 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_26, _28, _29);
_31 = _30.min;
*(&local0) = _31;
_33 = _30.max;
_34 = _30.inclusive;
_35 = _34.value;
_36 = (frost$core$Int) {1u};
if (_35) goto block9; else goto block10;
block9:;
_38 = _31.value;
_39 = _33.value;
_40 = _38 <= _39;
_41 = (frost$core$Bit) {_40};
_42 = _41.value;
if (_42) goto block6; else goto block7;
block10:;
_44 = _31.value;
_45 = _33.value;
_46 = _44 < _45;
_47 = (frost$core$Bit) {_46};
_48 = _47.value;
if (_48) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:141
_51 = &_2->data;
_52 = *_51;
_53 = *(&local0);
_54 = frost$core$Int64$init$frost$core$Int(_53);
_55 = _54.value;
_56 = _52[_55];
_57 = _56;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_52[_55] = ((frost$core$Object*) NULL);
_61 = *(&local0);
_62 = _33.value;
_63 = _61.value;
_64 = _62 - _63;
_65 = (frost$core$Int) {_64};
if (_35) goto block12; else goto block13;
block12:;
_67 = _65.value;
_68 = _36.value;
_69 = _67 >= _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block11; else goto block7;
block13:;
_73 = _65.value;
_74 = _36.value;
_75 = _73 > _74;
_76 = (frost$core$Bit) {_75};
_77 = _76.value;
if (_77) goto block11; else goto block7;
block11:;
_79 = _61.value;
_80 = _36.value;
_81 = _79 + _80;
_82 = (frost$core$Int) {_81};
*(&local0) = _82;
goto block6;
block7:;
_4 = ((frost$collections$CollectionView*) _2);
ITable* $tmp35 = _4->$class->itable;
while ($tmp35->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp35 = $tmp35->next;
}
_5 = $tmp35->methods[0];
_6 = _5(_4);
_7 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _6.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
_18 = _13.value;
if (_18) goto block4; else goto block5;
block4:;
return;
block5:;
_15 = (frost$core$Int) {138u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s36, _15, &$s37);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$Stack$get_iterator$R$frost$collections$Iterator$LTfrost$collections$Stack$T$GT(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Stack$StackIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:89
_1 = (frost$collections$Stack$StackIterator*) frostObjectAlloc(sizeof(frost$collections$Stack$StackIterator), (frost$core$Class*) &frost$collections$Stack$StackIterator$class);
frost$collections$Stack$StackIterator$init$frost$collections$Stack$LTfrost$collections$Stack$StackIterator$T$GT(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Int frost$collections$Stack$get_count$R$frost$core$Int(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$collections$CollectionView* _3;
$fn38 _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:93
_1 = &param0->contents;
_2 = *_1;
_3 = ((frost$collections$CollectionView*) _2);
ITable* $tmp39 = _3->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
_4 = $tmp39->methods[0];
_5 = _4(_3);
return _5;

}
frost$core$String* frost$collections$Stack$get_asString$R$frost$core$String(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$core$Object* _3;
$fn40 _4;
frost$core$String* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:98
_1 = &param0->contents;
_2 = *_1;
_3 = ((frost$core$Object*) _2);
_4 = ($fn41) _3->$class->vtable[0];
_5 = _4(_3);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
void frost$collections$Stack$init(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$collections$Array* _1;
frost$core$Object* _3;
frost$collections$Array** _5;
frost$collections$Array* _6;
frost$core$Object* _7;
frost$collections$Array** _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:34
_1 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->contents;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->contents;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}
void frost$collections$Stack$cleanup(void* rawSelf) {
frost$collections$Stack* param0 = (frost$collections$Stack*) rawSelf;

frost$core$Object* _1;
frost$collections$Array** _3;
frost$collections$Array* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Stack.frost:9
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->contents;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

