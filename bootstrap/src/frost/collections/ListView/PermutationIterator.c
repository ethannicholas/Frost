#include "frost/collections/ListView/PermutationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Array.h"
#include "frost/core/Frost.h"
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
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn12)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn13)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn14)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn15)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn16)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn18)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn19)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn23)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn24)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn25)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, 6841416450038168965, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x50\x65\x72\x6d\x75\x74\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e", 164, -695016372076835840, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s38 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s39 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s43 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s48 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s49 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };
static frost$core$String $s51 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s52 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 108, 4065685528380894665, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -1919842861654168654, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 115, -1630266006860672840, NULL };

void frost$collections$ListView$PermutationIterator$init$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$collections$ListView$PermutationIterator* param0 = (frost$collections$ListView$PermutationIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$ListView** _3;
frost$collections$ListView* _4;
frost$core$Object* _5;
frost$collections$ListView** _7;
frost$collections$CollectionView* _10;
$fn2 _11;
frost$core$Int _12;
frost$core$Int _13;
int64_t _14;
int64_t _15;
bool _16;
frost$core$Bit _17;
bool _18;
frost$collections$Array* _21;
frost$collections$CollectionView* _22;
$fn3 _23;
frost$core$Int _24;
frost$core$Int _25;
frost$core$Object* _26;
frost$core$Object* _28;
frost$collections$Array** _30;
frost$collections$Array* _31;
frost$core$Object* _32;
frost$collections$Array** _34;
frost$core$Object* _36;
frost$core$Object* _38;
frost$collections$Array* _43;
frost$core$Int _44;
frost$core$Int _46;
frost$core$Object* _47;
frost$core$Object* _49;
frost$collections$Array** _51;
frost$collections$Array* _52;
frost$core$Object* _53;
frost$collections$Array** _55;
frost$core$Object* _57;
frost$core$Object* _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:75
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->list;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->list;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:76
_10 = ((frost$collections$CollectionView*) param1);
ITable* $tmp4 = _10->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_11 = $tmp4->methods[0];
_12 = _11(_10);
_13 = (frost$core$Int) {0u};
_14 = _12.value;
_15 = _13.value;
_16 = _14 > _15;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:77
_21 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_22 = ((frost$collections$CollectionView*) param1);
ITable* $tmp5 = _22->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_23 = $tmp5->methods[0];
_24 = _23(_22);
_25 = (frost$core$Int) {0u};
frost$core$Int$wrapper* $tmp6;
$tmp6 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp6->value = _25;
_26 = ((frost$core$Object*) $tmp6);
frost$collections$Array$init$frost$core$Int$frost$collections$Array$T(_21, _24, _26);
_28 = ((frost$core$Object*) _21);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = &param0->choices;
_31 = *_30;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = &param0->choices;
*_34 = _21;
_36 = _26;
frost$core$Frost$unref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_38);
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:80
_43 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_44 = (frost$core$Int) {1u};
frost$collections$Array$init$frost$core$Int(_43, _44);
_46 = (frost$core$Int) {18446744073709551615u};
frost$core$Int$wrapper* $tmp7;
$tmp7 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp7->value = _46;
_47 = ((frost$core$Object*) $tmp7);
frost$collections$Array$add$frost$collections$Array$T(_43, _47);
_49 = ((frost$core$Object*) _43);
frost$core$Frost$ref$frost$core$Object$Q(_49);
_51 = &param0->choices;
_52 = *_51;
_53 = ((frost$core$Object*) _52);
frost$core$Frost$unref$frost$core$Object$Q(_53);
_55 = &param0->choices;
*_55 = _43;
_57 = _47;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _43);
frost$core$Frost$unref$frost$core$Object$Q(_59);
goto block2;
block2:;
return;

}
frost$core$Bit frost$collections$ListView$PermutationIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$ListView$PermutationIterator* param0 = (frost$collections$ListView$PermutationIterator*) rawSelf;

frost$collections$Array** _1;
frost$collections$Array* _2;
frost$core$Int _3;
frost$core$Int _5;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _10;
frost$collections$CollectionView* _12;
$fn8 _13;
frost$core$Int _14;
int64_t _15;
int64_t _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$core$Object*** _25;
frost$core$Object** _26;
frost$core$Int64 _27;
int64_t _28;
frost$core$Object* _29;
frost$core$Object* _30;
frost$core$Int _33;
frost$core$Int _34;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
frost$core$Object* _42;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:86
_1 = &param0->choices;
_2 = *_1;
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:86:27
_5 = (frost$core$Int) {0u};
_6 = _3.value;
_7 = _5.value;
_8 = _6 >= _7;
_9 = (frost$core$Bit) {_8};
_10 = _9.value;
if (_10) goto block4; else goto block3;
block4:;
_12 = ((frost$collections$CollectionView*) _2);
ITable* $tmp9 = _12->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_13 = $tmp9->methods[0];
_14 = _13(_12);
_15 = _3.value;
_16 = _14.value;
_17 = _15 < _16;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block2; else goto block3;
block3:;
_21 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _21, &$s11);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_25 = &_2->data;
_26 = *_25;
_27 = frost$core$Int64$init$frost$core$Int(_3);
_28 = _27.value;
_29 = _26[_28];
_30 = _29;
frost$core$Frost$ref$frost$core$Object$Q(_30);
_33 = ((frost$core$Int$wrapper*) _29)->value;
_34 = (frost$core$Int) {18446744073709551615u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:86:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_37 = _33.value;
_38 = _34.value;
_39 = _37 == _38;
_40 = (frost$core$Bit) {_39};
_42 = _29;
frost$core$Frost$unref$frost$core$Object$Q(_42);
return _40;

}
frost$collections$ListView* frost$collections$ListView$PermutationIterator$next$R$frost$collections$ListView$LTfrost$collections$ListView$PermutationIterator$T$GT(void* rawSelf) {
frost$collections$ListView$PermutationIterator* param0 = (frost$collections$ListView$PermutationIterator*) rawSelf;

frost$collections$Array* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int local2;
frost$core$Int local3;
frost$collections$Iterator* _0;
$fn12 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Array* _15;
frost$collections$ListView** _16;
frost$collections$ListView* _17;
frost$collections$CollectionView* _18;
$fn13 _19;
frost$core$Int _20;
frost$core$Object* _23;
frost$collections$Array* _25;
frost$core$Object* _26;
frost$core$Object* _29;
frost$collections$Array* _32;
frost$collections$ListView** _33;
frost$collections$ListView* _34;
frost$collections$CollectionView* _35;
frost$core$Object* _38;
frost$collections$Array* _40;
frost$core$Object* _41;
frost$core$Object* _44;
frost$collections$Array** _47;
frost$collections$Array* _48;
frost$collections$Iterable* _49;
$fn14 _50;
frost$collections$Iterator* _51;
$fn15 _53;
frost$core$Bit _54;
bool _55;
$fn16 _57;
frost$core$Object* _58;
frost$core$Int _59;
frost$collections$Array* _62;
frost$collections$Array* _63;
frost$core$Int _64;
frost$core$Int _66;
int64_t _67;
int64_t _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$collections$CollectionView* _73;
$fn17 _74;
frost$core$Int _75;
int64_t _76;
int64_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _82;
frost$core$Object*** _86;
frost$core$Object** _87;
frost$core$Int64 _88;
int64_t _89;
frost$core$Object* _90;
frost$core$Object* _91;
frost$core$Object* _94;
frost$core$Object* _95;
frost$core$Object* _97;
frost$collections$Array* _100;
frost$core$Int _101;
frost$core$Object* _102;
frost$core$Object* _103;
frost$core$Object* _104;
frost$core$Object* _106;
frost$core$Object* _109;
frost$core$Int _112;
frost$core$Int _116;
frost$collections$Array** _117;
frost$collections$Array* _118;
frost$collections$CollectionView* _119;
$fn18 _120;
frost$core$Int _121;
int64_t _122;
int64_t _123;
bool _124;
frost$core$Bit _125;
bool _126;
frost$collections$Array** _128;
frost$collections$Array* _129;
frost$core$Int _130;
frost$core$Int _132;
int64_t _133;
int64_t _134;
bool _135;
frost$core$Bit _136;
bool _137;
frost$collections$CollectionView* _139;
$fn19 _140;
frost$core$Int _141;
int64_t _142;
int64_t _143;
bool _144;
frost$core$Bit _145;
bool _146;
frost$core$Int _148;
frost$core$Object*** _152;
frost$core$Object** _153;
frost$core$Int64 _154;
int64_t _155;
frost$core$Object* _156;
frost$core$Object* _157;
frost$core$Int _160;
frost$collections$ListView** _161;
frost$collections$ListView* _162;
frost$collections$CollectionView* _163;
$fn20 _164;
frost$core$Int _165;
frost$core$Int _166;
int64_t _167;
int64_t _168;
int64_t _169;
frost$core$Int _170;
frost$core$Int _171;
int64_t _172;
int64_t _173;
int64_t _174;
frost$core$Int _175;
int64_t _178;
int64_t _179;
bool _180;
frost$core$Bit _181;
bool _183;
frost$core$Object* _184;
frost$collections$Array** _188;
frost$collections$Array* _189;
frost$core$Int _190;
frost$core$Int _191;
frost$core$Object* _192;
frost$core$Int _194;
int64_t _195;
int64_t _196;
bool _197;
frost$core$Bit _198;
bool _199;
frost$collections$CollectionView* _201;
$fn21 _202;
frost$core$Int _203;
int64_t _204;
int64_t _205;
bool _206;
frost$core$Bit _207;
bool _208;
frost$core$Int _210;
frost$core$Object*** _214;
frost$core$Object** _215;
frost$core$Int64 _216;
int64_t _217;
frost$core$Object* _218;
frost$core$Object* _220;
frost$core$Object* _221;
frost$core$Object* _225;
frost$core$Int _228;
frost$core$Int _229;
int64_t _230;
int64_t _231;
int64_t _232;
frost$core$Int _233;
frost$core$Int _237;
frost$collections$Array** _238;
frost$collections$Array* _239;
frost$collections$CollectionView* _240;
$fn22 _241;
frost$core$Int _242;
int64_t _245;
int64_t _246;
bool _247;
frost$core$Bit _248;
bool _250;
frost$collections$Array** _253;
frost$collections$Array* _254;
frost$core$Int _255;
frost$core$Int _256;
frost$core$Object* _257;
frost$core$Int _259;
int64_t _260;
int64_t _261;
bool _262;
frost$core$Bit _263;
bool _264;
frost$collections$CollectionView* _266;
$fn23 _267;
frost$core$Int _268;
int64_t _269;
int64_t _270;
bool _271;
frost$core$Bit _272;
bool _273;
frost$core$Int _275;
frost$core$Object*** _279;
frost$core$Object** _280;
frost$core$Int64 _281;
int64_t _282;
frost$core$Object* _283;
frost$core$Object* _285;
frost$core$Object* _286;
frost$core$Object* _290;
frost$collections$Array** _295;
frost$collections$Array* _296;
frost$core$Int _297;
frost$core$Int _299;
int64_t _300;
int64_t _301;
bool _302;
frost$core$Bit _303;
bool _304;
frost$collections$CollectionView* _306;
$fn24 _307;
frost$core$Int _308;
int64_t _309;
int64_t _310;
bool _311;
frost$core$Bit _312;
bool _313;
frost$core$Int _315;
frost$core$Object*** _319;
frost$core$Object** _320;
frost$core$Int64 _321;
int64_t _322;
frost$core$Object* _323;
frost$core$Object* _324;
frost$core$Int _327;
frost$core$Int _328;
int64_t _329;
int64_t _330;
int64_t _331;
frost$core$Int _332;
frost$core$Object* _333;
frost$core$Int _335;
int64_t _336;
int64_t _337;
bool _338;
frost$core$Bit _339;
bool _340;
frost$collections$CollectionView* _342;
$fn25 _343;
frost$core$Int _344;
int64_t _345;
int64_t _346;
bool _347;
frost$core$Bit _348;
bool _349;
frost$core$Int _351;
frost$core$Object*** _355;
frost$core$Object** _356;
frost$core$Int64 _357;
int64_t _358;
frost$core$Object* _359;
frost$core$Object* _361;
frost$core$Object* _362;
frost$core$Object* _366;
frost$core$Object* _368;
frost$collections$Array* _372;
frost$collections$ListView* _373;
frost$core$Object* _374;
frost$collections$Array* _376;
frost$core$Object* _377;
frost$collections$Array* _380;
frost$core$Object* _381;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp26 = _0->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_1 = $tmp26->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {90u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s27, _11, &$s28);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:91
_15 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_16 = &param0->list;
_17 = *_16;
_18 = ((frost$collections$CollectionView*) _17);
ITable* $tmp29 = _18->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp29 = $tmp29->next;
}
_19 = $tmp29->methods[0];
_20 = _19(_18);
frost$collections$Array$init$frost$core$Int(_15, _20);
*(&local0) = ((frost$collections$Array*) NULL);
_23 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = *(&local0);
_26 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local0) = _15;
_29 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:92
_32 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_33 = &param0->list;
_34 = *_33;
_35 = ((frost$collections$CollectionView*) _34);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_32, _35);
*(&local1) = ((frost$collections$Array*) NULL);
_38 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = *(&local1);
_41 = ((frost$core$Object*) _40);
frost$core$Frost$unref$frost$core$Object$Q(_41);
*(&local1) = _32;
_44 = ((frost$core$Object*) _32);
frost$core$Frost$unref$frost$core$Object$Q(_44);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:93
_47 = &param0->choices;
_48 = *_47;
_49 = ((frost$collections$Iterable*) _48);
ITable* $tmp30 = _49->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp30 = $tmp30->next;
}
_50 = $tmp30->methods[0];
_51 = _50(_49);
goto block4;
block4:;
ITable* $tmp31 = _51->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp31 = $tmp31->next;
}
_53 = $tmp31->methods[0];
_54 = _53(_51);
_55 = _54.value;
if (_55) goto block6; else goto block5;
block5:;
ITable* $tmp32 = _51->$class->itable;
while ($tmp32->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp32 = $tmp32->next;
}
_57 = $tmp32->methods[1];
_58 = _57(_51);
_59 = ((frost$core$Int$wrapper*) _58)->value;
*(&local2) = _59;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:94
_62 = *(&local0);
_63 = *(&local1);
_64 = *(&local2);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:94:32
_66 = (frost$core$Int) {0u};
_67 = _64.value;
_68 = _66.value;
_69 = _67 >= _68;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block10; else goto block9;
block10:;
_73 = ((frost$collections$CollectionView*) _63);
ITable* $tmp33 = _73->$class->itable;
while ($tmp33->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp33 = $tmp33->next;
}
_74 = $tmp33->methods[0];
_75 = _74(_73);
_76 = _64.value;
_77 = _75.value;
_78 = _76 < _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block8; else goto block9;
block9:;
_82 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s34, _82, &$s35);
abort(); // unreachable
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_86 = &_63->data;
_87 = *_86;
_88 = frost$core$Int64$init$frost$core$Int(_64);
_89 = _88.value;
_90 = _87[_89];
_91 = _90;
frost$core$Frost$ref$frost$core$Object$Q(_91);
_94 = _90;
_95 = _94;
frost$collections$Array$add$frost$collections$Array$T(_62, _95);
_97 = _90;
frost$core$Frost$unref$frost$core$Object$Q(_97);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:95
_100 = *(&local1);
_101 = *(&local2);
_102 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_100, _101);
_103 = _102;
_104 = _102;
frost$core$Frost$unref$frost$core$Object$Q(_104);
_106 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_106);
goto block4;
block6:;
_109 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_109);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:97
_112 = (frost$core$Int) {0u};
*(&local3) = _112;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:98
goto block11;
block11:;
_116 = *(&local3);
_117 = &param0->choices;
_118 = *_117;
_119 = ((frost$collections$CollectionView*) _118);
ITable* $tmp36 = _119->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp36 = $tmp36->next;
}
_120 = $tmp36->methods[0];
_121 = _120(_119);
_122 = _116.value;
_123 = _121.value;
_124 = _122 < _123;
_125 = (frost$core$Bit) {_124};
_126 = _125.value;
if (_126) goto block14; else goto block13;
block14:;
_128 = &param0->choices;
_129 = *_128;
_130 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:98:46
_132 = (frost$core$Int) {0u};
_133 = _130.value;
_134 = _132.value;
_135 = _133 >= _134;
_136 = (frost$core$Bit) {_135};
_137 = _136.value;
if (_137) goto block18; else goto block17;
block18:;
_139 = ((frost$collections$CollectionView*) _129);
ITable* $tmp37 = _139->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
_140 = $tmp37->methods[0];
_141 = _140(_139);
_142 = _130.value;
_143 = _141.value;
_144 = _142 < _143;
_145 = (frost$core$Bit) {_144};
_146 = _145.value;
if (_146) goto block16; else goto block17;
block17:;
_148 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _148, &$s39);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_152 = &_129->data;
_153 = *_152;
_154 = frost$core$Int64$init$frost$core$Int(_130);
_155 = _154.value;
_156 = _153[_155];
_157 = _156;
frost$core$Frost$ref$frost$core$Object$Q(_157);
_160 = ((frost$core$Int$wrapper*) _156)->value;
_161 = &param0->list;
_162 = *_161;
_163 = ((frost$collections$CollectionView*) _162);
ITable* $tmp40 = _163->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp40 = $tmp40->next;
}
_164 = $tmp40->methods[0];
_165 = _164(_163);
_166 = *(&local3);
_167 = _165.value;
_168 = _166.value;
_169 = _167 - _168;
_170 = (frost$core$Int) {_169};
_171 = (frost$core$Int) {1u};
_172 = _170.value;
_173 = _171.value;
_174 = _172 - _173;
_175 = (frost$core$Int) {_174};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:98:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_178 = _160.value;
_179 = _175.value;
_180 = _178 == _179;
_181 = (frost$core$Bit) {_180};
_183 = _181.value;
_184 = _156;
frost$core$Frost$unref$frost$core$Object$Q(_184);
if (_183) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:99
_188 = &param0->choices;
_189 = *_188;
_190 = *(&local3);
_191 = (frost$core$Int) {0u};
frost$core$Int$wrapper* $tmp41;
$tmp41 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp41->value = _191;
_192 = ((frost$core$Object*) $tmp41);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:99:24
_194 = (frost$core$Int) {0u};
_195 = _190.value;
_196 = _194.value;
_197 = _195 >= _196;
_198 = (frost$core$Bit) {_197};
_199 = _198.value;
if (_199) goto block23; else goto block22;
block23:;
_201 = ((frost$collections$CollectionView*) _189);
ITable* $tmp42 = _201->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_202 = $tmp42->methods[0];
_203 = _202(_201);
_204 = _190.value;
_205 = _203.value;
_206 = _204 < _205;
_207 = (frost$core$Bit) {_206};
_208 = _207.value;
if (_208) goto block21; else goto block22;
block22:;
_210 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _210, &$s44);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_214 = &_189->data;
_215 = *_214;
_216 = frost$core$Int64$init$frost$core$Int(_190);
_217 = _216.value;
_218 = _192;
frost$core$Frost$ref$frost$core$Object$Q(_218);
_220 = _215[_217];
_221 = _220;
frost$core$Frost$unref$frost$core$Object$Q(_221);
_215[_217] = _192;
_225 = _192;
frost$core$Frost$unref$frost$core$Object$Q(_225);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:100
_228 = *(&local3);
_229 = (frost$core$Int) {1u};
_230 = _228.value;
_231 = _229.value;
_232 = _230 + _231;
_233 = (frost$core$Int) {_232};
*(&local3) = _233;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:102
_237 = *(&local3);
_238 = &param0->choices;
_239 = *_238;
_240 = ((frost$collections$CollectionView*) _239);
ITable* $tmp45 = _240->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_241 = $tmp45->methods[0];
_242 = _241(_240);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:102:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_245 = _237.value;
_246 = _242.value;
_247 = _245 == _246;
_248 = (frost$core$Bit) {_247};
_250 = _248.value;
if (_250) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:103
_253 = &param0->choices;
_254 = *_253;
_255 = (frost$core$Int) {0u};
_256 = (frost$core$Int) {18446744073709551615u};
frost$core$Int$wrapper* $tmp46;
$tmp46 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp46->value = _256;
_257 = ((frost$core$Object*) $tmp46);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:103:24
_259 = (frost$core$Int) {0u};
_260 = _255.value;
_261 = _259.value;
_262 = _260 >= _261;
_263 = (frost$core$Bit) {_262};
_264 = _263.value;
if (_264) goto block31; else goto block30;
block31:;
_266 = ((frost$collections$CollectionView*) _254);
ITable* $tmp47 = _266->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
_267 = $tmp47->methods[0];
_268 = _267(_266);
_269 = _255.value;
_270 = _268.value;
_271 = _269 < _270;
_272 = (frost$core$Bit) {_271};
_273 = _272.value;
if (_273) goto block29; else goto block30;
block30:;
_275 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _275, &$s49);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_279 = &_254->data;
_280 = *_279;
_281 = frost$core$Int64$init$frost$core$Int(_255);
_282 = _281.value;
_283 = _257;
frost$core$Frost$ref$frost$core$Object$Q(_283);
_285 = _280[_282];
_286 = _285;
frost$core$Frost$unref$frost$core$Object$Q(_286);
_280[_282] = _257;
_290 = _257;
frost$core$Frost$unref$frost$core$Object$Q(_290);
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:106
_295 = &param0->choices;
_296 = *_295;
_297 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:106:24
_299 = (frost$core$Int) {0u};
_300 = _297.value;
_301 = _299.value;
_302 = _300 >= _301;
_303 = (frost$core$Bit) {_302};
_304 = _303.value;
if (_304) goto block35; else goto block34;
block35:;
_306 = ((frost$collections$CollectionView*) _296);
ITable* $tmp50 = _306->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp50 = $tmp50->next;
}
_307 = $tmp50->methods[0];
_308 = _307(_306);
_309 = _297.value;
_310 = _308.value;
_311 = _309 < _310;
_312 = (frost$core$Bit) {_311};
_313 = _312.value;
if (_313) goto block33; else goto block34;
block34:;
_315 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _315, &$s52);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_319 = &_296->data;
_320 = *_319;
_321 = frost$core$Int64$init$frost$core$Int(_297);
_322 = _321.value;
_323 = _320[_322];
_324 = _323;
frost$core$Frost$ref$frost$core$Object$Q(_324);
_327 = ((frost$core$Int$wrapper*) _323)->value;
_328 = (frost$core$Int) {1u};
_329 = _327.value;
_330 = _328.value;
_331 = _329 + _330;
_332 = (frost$core$Int) {_331};
frost$core$Int$wrapper* $tmp53;
$tmp53 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp53->value = _332;
_333 = ((frost$core$Object*) $tmp53);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:106:24
_335 = (frost$core$Int) {0u};
_336 = _297.value;
_337 = _335.value;
_338 = _336 >= _337;
_339 = (frost$core$Bit) {_338};
_340 = _339.value;
if (_340) goto block39; else goto block38;
block39:;
_342 = ((frost$collections$CollectionView*) _296);
ITable* $tmp54 = _342->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
_343 = $tmp54->methods[0];
_344 = _343(_342);
_345 = _297.value;
_346 = _344.value;
_347 = _345 < _346;
_348 = (frost$core$Bit) {_347};
_349 = _348.value;
if (_349) goto block37; else goto block38;
block38:;
_351 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, _351, &$s56);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_355 = &_296->data;
_356 = *_355;
_357 = frost$core$Int64$init$frost$core$Int(_297);
_358 = _357.value;
_359 = _333;
frost$core$Frost$ref$frost$core$Object$Q(_359);
_361 = _356[_358];
_362 = _361;
frost$core$Frost$unref$frost$core$Object$Q(_362);
_356[_358] = _333;
_366 = _333;
frost$core$Frost$unref$frost$core$Object$Q(_366);
_368 = _323;
frost$core$Frost$unref$frost$core$Object$Q(_368);
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:108
_372 = *(&local0);
_373 = ((frost$collections$ListView*) _372);
_374 = ((frost$core$Object*) _373);
frost$core$Frost$ref$frost$core$Object$Q(_374);
_376 = *(&local1);
_377 = ((frost$core$Object*) _376);
frost$core$Frost$unref$frost$core$Object$Q(_377);
*(&local1) = ((frost$collections$Array*) NULL);
_380 = *(&local0);
_381 = ((frost$core$Object*) _380);
frost$core$Frost$unref$frost$core$Object$Q(_381);
*(&local0) = ((frost$collections$Array*) NULL);
return _373;

}
void frost$collections$ListView$PermutationIterator$cleanup(void* rawSelf) {
frost$collections$ListView$PermutationIterator* param0 = (frost$collections$ListView$PermutationIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$ListView** _3;
frost$collections$ListView* _4;
frost$core$Object* _5;
frost$collections$Array** _7;
frost$collections$Array* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:69
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

