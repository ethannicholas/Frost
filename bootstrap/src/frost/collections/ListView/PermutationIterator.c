#include "frost/collections/ListView/PermutationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Array.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterable.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim(frost$collections$ListView$PermutationIterator* p0) {
    frost$collections$ListView* result = frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$PermutationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$PermutationIterator$class_type frost$collections$ListView$PermutationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$PermutationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$PermutationIterator$cleanup, frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit, frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn5)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn9)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn11)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn12)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn13)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn14)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn15)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 6841416450038168965, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 164, -695016372076835840, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s32 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s40 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s41 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s45 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s46 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s53 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };

void frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* param0, frost$collections$ListView* param1) {

frost$collections$ListView$PermutationIterator* _1;
frost$core$Object* _2;
frost$collections$ListView** _4;
frost$collections$ListView* _5;
frost$core$Object* _6;
frost$collections$ListView** _8;
frost$collections$ListView$PermutationIterator* _11;
frost$collections$Array* _12;
frost$collections$Array* _13;
frost$collections$CollectionView* _14;
$fn2 _15;
frost$core$Int _16;
frost$core$Int _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$collections$Array** _22;
frost$collections$Array* _23;
frost$core$Object* _24;
frost$collections$Array** _26;
frost$core$Object* _28;
frost$core$Object* _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:74
_1 = param0;
_2 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->list;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->list;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:75
_11 = param0;
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_12 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_13 = _12;
_14 = ((frost$collections$CollectionView*) param1);
ITable* $tmp3 = _14->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_15 = $tmp3->methods[0];
_16 = _15(_14);
_17 = (frost$core$Int) {0u};
frost$core$Int$wrapper* $tmp4;
$tmp4 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp4->value = _17;
_18 = ((frost$core$Object*) $tmp4);
frost$collections$Array$init$frost$core$Int$frost$collections$Array$T(_13, _16, _18);
_20 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = &_11->choices;
_23 = *_22;
_24 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = &_11->choices;
*_26 = _12;
_28 = _18;
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_30);
return;

}
frost$core$Bit frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit(frost$collections$ListView$PermutationIterator* param0) {

frost$collections$ListView$PermutationIterator* _1;
frost$collections$Array** _2;
frost$collections$Array* _3;
frost$collections$Array* _4;
frost$core$Int _5;
frost$core$Int _7;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _12;
frost$collections$CollectionView* _14;
$fn5 _15;
frost$core$Int _16;
int64_t _17;
int64_t _18;
bool _19;
frost$core$Bit _20;
bool _21;
frost$core$Int _23;
frost$core$Object*** _27;
frost$core$Object** _28;
frost$core$Int64 _29;
int64_t _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Int _35;
frost$core$Int _36;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
frost$core$Object* _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:80
_1 = param0;
_2 = &_1->choices;
_3 = *_2;
_4 = _3;
_5 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:80:27
_7 = (frost$core$Int) {0u};
_8 = _5.value;
_9 = _7.value;
_10 = _8 >= _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block4; else goto block3;
block4:;
_14 = ((frost$collections$CollectionView*) _4);
ITable* $tmp6 = _14->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_15 = $tmp6->methods[0];
_16 = _15(_14);
_17 = _5.value;
_18 = _16.value;
_19 = _17 < _18;
_20 = (frost$core$Bit) {_19};
_21 = _20.value;
if (_21) goto block2; else goto block3;
block3:;
_23 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _23, &$s8);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_27 = &_4->data;
_28 = *_27;
_29 = frost$core$Int64$init$frost$core$Int(_5);
_30 = _29.value;
_31 = _28[_30];
_32 = _31;
frost$core$Frost$ref$frost$core$Object$Q(_32);
_35 = ((frost$core$Int$wrapper*) _31)->value;
_36 = (frost$core$Int) {18446744073709551615u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:80:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_39 = _35.value;
_40 = _36.value;
_41 = _39 == _40;
_42 = (frost$core$Bit) {_41};
_44 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_44);
return _42;

}
frost$collections$ListView* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(frost$collections$ListView$PermutationIterator* param0) {

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
frost$core$Int local3;
frost$collections$Iterator* _0;
$fn9 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Array* _15;
frost$collections$Array* _16;
frost$collections$ListView$PermutationIterator* _17;
frost$collections$ListView** _18;
frost$collections$ListView* _19;
frost$collections$CollectionView* _20;
$fn10 _21;
frost$core$Int _22;
frost$core$Object* _25;
frost$collections$Array* _27;
frost$core$Object* _28;
frost$core$Object* _31;
frost$collections$Array* _34;
frost$collections$Array* _35;
frost$collections$ListView$PermutationIterator* _36;
frost$collections$ListView** _37;
frost$collections$ListView* _38;
frost$collections$CollectionView* _39;
frost$collections$CollectionView* _40;
frost$core$Object* _43;
frost$collections$Array* _45;
frost$core$Object* _46;
frost$core$Object* _49;
frost$collections$ListView$PermutationIterator* _52;
frost$collections$Array** _53;
frost$collections$Array* _54;
frost$collections$Iterable* _55;
frost$collections$Iterable* _56;
$fn11 _57;
frost$collections$Iterator* _58;
frost$collections$Iterator* _59;
frost$collections$Iterator* _61;
$fn12 _62;
frost$core$Bit _63;
bool _64;
frost$collections$Iterator* _66;
$fn13 _67;
frost$core$Object* _68;
frost$core$Int _69;
frost$collections$Array* _72;
frost$collections$Array* _73;
frost$collections$Array* _74;
frost$collections$Array* _75;
frost$core$Int _76;
frost$core$Int _78;
int64_t _79;
int64_t _80;
bool _81;
frost$core$Bit _82;
bool _83;
frost$collections$CollectionView* _85;
$fn14 _86;
frost$core$Int _87;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
frost$core$Int _94;
frost$core$Object*** _98;
frost$core$Object** _99;
frost$core$Int64 _100;
int64_t _101;
frost$core$Object* _102;
frost$core$Object* _103;
frost$core$Object* _106;
frost$core$Object* _107;
frost$core$Object* _109;
frost$collections$Array* _112;
frost$collections$Array* _113;
frost$core$Int _114;
frost$core$Object* _115;
frost$core$Object* _116;
frost$core$Object* _117;
frost$core$Object* _119;
frost$core$Object* _122;
frost$core$Int _125;
frost$core$Int _129;
frost$collections$ListView$PermutationIterator* _130;
frost$collections$Array** _131;
frost$collections$Array* _132;
frost$collections$CollectionView* _133;
$fn15 _134;
frost$core$Int _135;
int64_t _136;
int64_t _137;
bool _138;
frost$core$Bit _139;
bool _140;
frost$collections$ListView$PermutationIterator* _142;
frost$collections$Array** _143;
frost$collections$Array* _144;
frost$collections$Array* _145;
frost$core$Int _146;
frost$core$Int _148;
int64_t _149;
int64_t _150;
bool _151;
frost$core$Bit _152;
bool _153;
frost$collections$CollectionView* _155;
$fn16 _156;
frost$core$Int _157;
int64_t _158;
int64_t _159;
bool _160;
frost$core$Bit _161;
bool _162;
frost$core$Int _164;
frost$core$Object*** _168;
frost$core$Object** _169;
frost$core$Int64 _170;
int64_t _171;
frost$core$Object* _172;
frost$core$Object* _173;
frost$core$Int _176;
frost$collections$ListView$PermutationIterator* _177;
frost$collections$ListView** _178;
frost$collections$ListView* _179;
frost$collections$CollectionView* _180;
$fn17 _181;
frost$core$Int _182;
frost$core$Int _183;
int64_t _184;
int64_t _185;
int64_t _186;
frost$core$Int _187;
frost$core$Int _188;
int64_t _189;
int64_t _190;
int64_t _191;
frost$core$Int _192;
int64_t _195;
int64_t _196;
bool _197;
frost$core$Bit _198;
bool _200;
frost$core$Object* _201;
frost$collections$ListView$PermutationIterator* _205;
frost$collections$Array** _206;
frost$collections$Array* _207;
frost$collections$Array* _208;
frost$core$Int _209;
frost$core$Int _210;
frost$core$Object* _211;
frost$core$Int _213;
int64_t _214;
int64_t _215;
bool _216;
frost$core$Bit _217;
bool _218;
frost$collections$CollectionView* _220;
$fn18 _221;
frost$core$Int _222;
int64_t _223;
int64_t _224;
bool _225;
frost$core$Bit _226;
bool _227;
frost$core$Int _229;
frost$core$Object*** _233;
frost$core$Object** _234;
frost$core$Int64 _235;
int64_t _236;
frost$core$Object* _237;
frost$core$Object* _239;
frost$core$Object* _240;
frost$core$Object* _244;
frost$core$Int _247;
frost$core$Int _248;
int64_t _249;
int64_t _250;
int64_t _251;
frost$core$Int _252;
frost$core$Int _256;
frost$collections$ListView$PermutationIterator* _257;
frost$collections$Array** _258;
frost$collections$Array* _259;
frost$collections$CollectionView* _260;
$fn19 _261;
frost$core$Int _262;
int64_t _265;
int64_t _266;
bool _267;
frost$core$Bit _268;
bool _270;
frost$collections$ListView$PermutationIterator* _273;
frost$collections$Array** _274;
frost$collections$Array* _275;
frost$collections$Array* _276;
frost$core$Int _277;
frost$core$Int _278;
frost$core$Object* _279;
frost$core$Int _281;
int64_t _282;
int64_t _283;
bool _284;
frost$core$Bit _285;
bool _286;
frost$collections$CollectionView* _288;
$fn20 _289;
frost$core$Int _290;
int64_t _291;
int64_t _292;
bool _293;
frost$core$Bit _294;
bool _295;
frost$core$Int _297;
frost$core$Object*** _301;
frost$core$Object** _302;
frost$core$Int64 _303;
int64_t _304;
frost$core$Object* _305;
frost$core$Object* _307;
frost$core$Object* _308;
frost$core$Object* _312;
frost$collections$ListView$PermutationIterator* _317;
frost$collections$Array** _318;
frost$collections$Array* _319;
frost$core$Int _320;
frost$collections$Array* _321;
frost$core$Int _323;
int64_t _324;
int64_t _325;
bool _326;
frost$core$Bit _327;
bool _328;
frost$collections$CollectionView* _330;
$fn21 _331;
frost$core$Int _332;
int64_t _333;
int64_t _334;
bool _335;
frost$core$Bit _336;
bool _337;
frost$core$Int _339;
frost$core$Object*** _343;
frost$core$Object** _344;
frost$core$Int64 _345;
int64_t _346;
frost$core$Object* _347;
frost$core$Object* _348;
frost$core$Int _351;
frost$core$Int _352;
int64_t _353;
int64_t _354;
int64_t _355;
frost$core$Int _356;
frost$collections$Array* _357;
frost$core$Object* _358;
frost$core$Int _360;
int64_t _361;
int64_t _362;
bool _363;
frost$core$Bit _364;
bool _365;
frost$collections$CollectionView* _367;
$fn22 _368;
frost$core$Int _369;
int64_t _370;
int64_t _371;
bool _372;
frost$core$Bit _373;
bool _374;
frost$core$Int _376;
frost$core$Object*** _380;
frost$core$Object** _381;
frost$core$Int64 _382;
int64_t _383;
frost$core$Object* _384;
frost$core$Object* _386;
frost$core$Object* _387;
frost$core$Object* _391;
frost$core$Object* _393;
frost$collections$Array* _397;
frost$collections$ListView* _398;
frost$core$Object* _399;
frost$collections$Array* _401;
frost$core$Object* _402;
frost$collections$Array* _405;
frost$core$Object* _406;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp23 = _0->$class->itable;
while ($tmp23->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp23 = $tmp23->next;
}
_1 = $tmp23->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {84u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s24, _11, &$s25);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:85
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_15 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_16 = _15;
_17 = param0;
_18 = &_17->list;
_19 = *_18;
_20 = ((frost$collections$CollectionView*) _19);
ITable* $tmp26 = _20->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp26 = $tmp26->next;
}
_21 = $tmp26->methods[0];
_22 = _21(_20);
frost$collections$Array$init$frost$core$Int(_16, _22);
*(&local0) = ((frost$collections$Array*) NULL);
_25 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_25);
_27 = *(&local0);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_28);
*(&local0) = _15;
_31 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:86
FROST_ASSERT(40 == sizeof(frost$collections$Array));
_34 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
_35 = _34;
_36 = param0;
_37 = &_36->list;
_38 = *_37;
_39 = ((frost$collections$CollectionView*) _38);
_40 = _39;
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_35, _40);
*(&local1) = ((frost$collections$Array*) NULL);
_43 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_43);
_45 = *(&local1);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$unref$frost$core$Object$Q(_46);
*(&local1) = _34;
_49 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_49);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:87
_52 = param0;
_53 = &_52->choices;
_54 = *_53;
_55 = ((frost$collections$Iterable*) _54);
_56 = _55;
ITable* $tmp27 = _56->$class->itable;
while ($tmp27->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp27 = $tmp27->next;
}
_57 = $tmp27->methods[0];
_58 = _57(_56);
_59 = _58;
goto block4;
block4:;
_61 = _59;
ITable* $tmp28 = _61->$class->itable;
while ($tmp28->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp28 = $tmp28->next;
}
_62 = $tmp28->methods[0];
_63 = _62(_61);
_64 = _63.value;
if (_64) goto block6; else goto block5;
block5:;
_66 = _59;
ITable* $tmp29 = _66->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp29 = $tmp29->next;
}
_67 = $tmp29->methods[1];
_68 = _67(_66);
_69 = ((frost$core$Int$wrapper*) _68)->value;
*(&local2) = _69;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:88
_72 = *(&local0);
_73 = _72;
_74 = *(&local1);
_75 = _74;
_76 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:88:32
_78 = (frost$core$Int) {0u};
_79 = _76.value;
_80 = _78.value;
_81 = _79 >= _80;
_82 = (frost$core$Bit) {_81};
_83 = _82.value;
if (_83) goto block10; else goto block9;
block10:;
_85 = ((frost$collections$CollectionView*) _75);
ITable* $tmp30 = _85->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp30 = $tmp30->next;
}
_86 = $tmp30->methods[0];
_87 = _86(_85);
_88 = _76.value;
_89 = _87.value;
_90 = _88 < _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block8; else goto block9;
block9:;
_94 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s31, _94, &$s32);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_98 = &_75->data;
_99 = *_98;
_100 = frost$core$Int64$init$frost$core$Int(_76);
_101 = _100.value;
_102 = _99[_101];
_103 = _102;
frost$core$Frost$ref$frost$core$Object$Q(_103);
_106 = _102;
_107 = _106;
frost$collections$Array$add$frost$collections$Array$T(_73, _107);
_109 = _102;
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:89
_112 = *(&local1);
_113 = _112;
_114 = *(&local2);
_115 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_113, _114);
_116 = _115;
_117 = _115;
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = _68;
frost$core$Frost$unref$frost$core$Object$Q(_119);
goto block4;
block6:;
_122 = ((frost$core$Object*) _58);
frost$core$Frost$unref$frost$core$Object$Q(_122);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:91
_125 = (frost$core$Int) {0u};
*(&local3) = _125;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:92
goto block11;
block11:;
_129 = *(&local3);
_130 = param0;
_131 = &_130->choices;
_132 = *_131;
_133 = ((frost$collections$CollectionView*) _132);
ITable* $tmp33 = _133->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
_134 = $tmp33->methods[0];
_135 = _134(_133);
_136 = _129.value;
_137 = _135.value;
_138 = _136 < _137;
_139 = (frost$core$Bit) {_138};
_140 = _139.value;
if (_140) goto block14; else goto block13;
block14:;
_142 = param0;
_143 = &_142->choices;
_144 = *_143;
_145 = _144;
_146 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:92:46
_148 = (frost$core$Int) {0u};
_149 = _146.value;
_150 = _148.value;
_151 = _149 >= _150;
_152 = (frost$core$Bit) {_151};
_153 = _152.value;
if (_153) goto block18; else goto block17;
block18:;
_155 = ((frost$collections$CollectionView*) _145);
ITable* $tmp34 = _155->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
_156 = $tmp34->methods[0];
_157 = _156(_155);
_158 = _146.value;
_159 = _157.value;
_160 = _158 < _159;
_161 = (frost$core$Bit) {_160};
_162 = _161.value;
if (_162) goto block16; else goto block17;
block17:;
_164 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s35, _164, &$s36);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_168 = &_145->data;
_169 = *_168;
_170 = frost$core$Int64$init$frost$core$Int(_146);
_171 = _170.value;
_172 = _169[_171];
_173 = _172;
frost$core$Frost$ref$frost$core$Object$Q(_173);
_176 = ((frost$core$Int$wrapper*) _172)->value;
_177 = param0;
_178 = &_177->list;
_179 = *_178;
_180 = ((frost$collections$CollectionView*) _179);
ITable* $tmp37 = _180->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
_181 = $tmp37->methods[0];
_182 = _181(_180);
_183 = *(&local3);
_184 = _182.value;
_185 = _183.value;
_186 = _184 - _185;
_187 = (frost$core$Int) {_186};
_188 = (frost$core$Int) {1u};
_189 = _187.value;
_190 = _188.value;
_191 = _189 - _190;
_192 = (frost$core$Int) {_191};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:92:50
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_195 = _176.value;
_196 = _192.value;
_197 = _195 == _196;
_198 = (frost$core$Bit) {_197};
_200 = _198.value;
_201 = _172;
frost$core$Frost$unref$frost$core$Object$Q(_201);
if (_200) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:93
_205 = param0;
_206 = &_205->choices;
_207 = *_206;
_208 = _207;
_209 = *(&local3);
_210 = (frost$core$Int) {0u};
frost$core$Int$wrapper* $tmp38;
$tmp38 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp38->value = _210;
_211 = ((frost$core$Object*) $tmp38);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:93:24
_213 = (frost$core$Int) {0u};
_214 = _209.value;
_215 = _213.value;
_216 = _214 >= _215;
_217 = (frost$core$Bit) {_216};
_218 = _217.value;
if (_218) goto block23; else goto block22;
block23:;
_220 = ((frost$collections$CollectionView*) _208);
ITable* $tmp39 = _220->$class->itable;
while ($tmp39->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp39 = $tmp39->next;
}
_221 = $tmp39->methods[0];
_222 = _221(_220);
_223 = _209.value;
_224 = _222.value;
_225 = _223 < _224;
_226 = (frost$core$Bit) {_225};
_227 = _226.value;
if (_227) goto block21; else goto block22;
block22:;
_229 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s40, _229, &$s41);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_233 = &_208->data;
_234 = *_233;
_235 = frost$core$Int64$init$frost$core$Int(_209);
_236 = _235.value;
_237 = _211;
frost$core$Frost$ref$frost$core$Object$Q(_237);
_239 = _234[_236];
_240 = _239;
frost$core$Frost$unref$frost$core$Object$Q(_240);
_234[_236] = _211;
_244 = _211;
frost$core$Frost$unref$frost$core$Object$Q(_244);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:94
_247 = *(&local3);
_248 = (frost$core$Int) {1u};
_249 = _247.value;
_250 = _248.value;
_251 = _249 + _250;
_252 = (frost$core$Int) {_251};
*(&local3) = _252;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:96
_256 = *(&local3);
_257 = param0;
_258 = &_257->choices;
_259 = *_258;
_260 = ((frost$collections$CollectionView*) _259);
ITable* $tmp42 = _260->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_261 = $tmp42->methods[0];
_262 = _261(_260);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:96:18
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_265 = _256.value;
_266 = _262.value;
_267 = _265 == _266;
_268 = (frost$core$Bit) {_267};
_270 = _268.value;
if (_270) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:97
_273 = param0;
_274 = &_273->choices;
_275 = *_274;
_276 = _275;
_277 = (frost$core$Int) {0u};
_278 = (frost$core$Int) {18446744073709551615u};
frost$core$Int$wrapper* $tmp43;
$tmp43 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp43->value = _278;
_279 = ((frost$core$Object*) $tmp43);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:97:24
_281 = (frost$core$Int) {0u};
_282 = _277.value;
_283 = _281.value;
_284 = _282 >= _283;
_285 = (frost$core$Bit) {_284};
_286 = _285.value;
if (_286) goto block31; else goto block30;
block31:;
_288 = ((frost$collections$CollectionView*) _276);
ITable* $tmp44 = _288->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
_289 = $tmp44->methods[0];
_290 = _289(_288);
_291 = _277.value;
_292 = _290.value;
_293 = _291 < _292;
_294 = (frost$core$Bit) {_293};
_295 = _294.value;
if (_295) goto block29; else goto block30;
block30:;
_297 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s45, _297, &$s46);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_301 = &_276->data;
_302 = *_301;
_303 = frost$core$Int64$init$frost$core$Int(_277);
_304 = _303.value;
_305 = _279;
frost$core$Frost$ref$frost$core$Object$Q(_305);
_307 = _302[_304];
_308 = _307;
frost$core$Frost$unref$frost$core$Object$Q(_308);
_302[_304] = _279;
_312 = _279;
frost$core$Frost$unref$frost$core$Object$Q(_312);
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:100
_317 = param0;
_318 = &_317->choices;
_319 = *_318;
_320 = *(&local3);
_321 = _319;
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:100:24
_323 = (frost$core$Int) {0u};
_324 = _320.value;
_325 = _323.value;
_326 = _324 >= _325;
_327 = (frost$core$Bit) {_326};
_328 = _327.value;
if (_328) goto block35; else goto block34;
block35:;
_330 = ((frost$collections$CollectionView*) _321);
ITable* $tmp47 = _330->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
_331 = $tmp47->methods[0];
_332 = _331(_330);
_333 = _320.value;
_334 = _332.value;
_335 = _333 < _334;
_336 = (frost$core$Bit) {_335};
_337 = _336.value;
if (_337) goto block33; else goto block34;
block34:;
_339 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _339, &$s49);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_343 = &_321->data;
_344 = *_343;
_345 = frost$core$Int64$init$frost$core$Int(_320);
_346 = _345.value;
_347 = _344[_346];
_348 = _347;
frost$core$Frost$ref$frost$core$Object$Q(_348);
_351 = ((frost$core$Int$wrapper*) _347)->value;
_352 = (frost$core$Int) {1u};
_353 = _351.value;
_354 = _352.value;
_355 = _353 + _354;
_356 = (frost$core$Int) {_355};
_357 = _319;
frost$core$Int$wrapper* $tmp50;
$tmp50 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp50->value = _356;
_358 = ((frost$core$Object*) $tmp50);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:100:24
_360 = (frost$core$Int) {0u};
_361 = _320.value;
_362 = _360.value;
_363 = _361 >= _362;
_364 = (frost$core$Bit) {_363};
_365 = _364.value;
if (_365) goto block39; else goto block38;
block39:;
_367 = ((frost$collections$CollectionView*) _357);
ITable* $tmp51 = _367->$class->itable;
while ($tmp51->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp51 = $tmp51->next;
}
_368 = $tmp51->methods[0];
_369 = _368(_367);
_370 = _320.value;
_371 = _369.value;
_372 = _370 < _371;
_373 = (frost$core$Bit) {_372};
_374 = _373.value;
if (_374) goto block37; else goto block38;
block38:;
_376 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s52, _376, &$s53);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_380 = &_357->data;
_381 = *_380;
_382 = frost$core$Int64$init$frost$core$Int(_320);
_383 = _382.value;
_384 = _358;
frost$core$Frost$ref$frost$core$Object$Q(_384);
_386 = _381[_383];
_387 = _386;
frost$core$Frost$unref$frost$core$Object$Q(_387);
_381[_383] = _358;
_391 = _358;
frost$core$Frost$unref$frost$core$Object$Q(_391);
_393 = _347;
frost$core$Frost$unref$frost$core$Object$Q(_393);
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:102
_397 = *(&local0);
_398 = ((frost$collections$ListView*) _397);
_399 = ((frost$core$Object*) _398);
frost$core$Frost$ref$frost$core$Object$Q(_399);
_401 = *(&local1);
_402 = ((frost$core$Object*) _401);
frost$core$Frost$unref$frost$core$Object$Q(_402);
*(&local1) = ((frost$collections$Array*) NULL);
_405 = *(&local0);
_406 = ((frost$core$Object*) _405);
frost$core$Frost$unref$frost$core$Object$Q(_406);
*(&local0) = ((frost$collections$Array*) NULL);
return _398;

}
void frost$collections$ListView$PermutationIterator$cleanup(frost$collections$ListView$PermutationIterator* param0) {

frost$core$Object* _1;
frost$collections$ListView$PermutationIterator* _3;
frost$collections$ListView** _4;
frost$collections$ListView* _5;
frost$core$Object* _6;
frost$collections$ListView$PermutationIterator* _8;
frost$collections$Array** _9;
frost$collections$Array* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:68
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

