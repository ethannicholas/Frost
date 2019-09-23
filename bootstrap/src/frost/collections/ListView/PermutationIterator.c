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
#include "frost/unsafe/NewPointer.h"
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
frost$unsafe$NewPointer* _25;
frost$unsafe$NewPointer _26;
int64_t _27;
frost$core$Int64 _28;
int64_t _29;
frost$core$Object* _30;
frost$core$Object* _31;
frost$core$Int _34;
frost$core$Int _35;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
frost$core$Object* _43;
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
_27 = _26.value;
_28 = frost$core$Int64$init$frost$core$Int(_3);
_29 = _28.value;
_30 = ((frost$core$Object**)_27)[_29];
_31 = _30;
frost$core$Frost$ref$frost$core$Object$Q(_31);
_34 = ((frost$core$Int$wrapper*) _30)->value;
_35 = (frost$core$Int) {18446744073709551615u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:86:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_38 = _34.value;
_39 = _35.value;
_40 = _38 == _39;
_41 = (frost$core$Bit) {_40};
_43 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_43);
return _41;

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
frost$unsafe$NewPointer* _86;
frost$unsafe$NewPointer _87;
int64_t _88;
frost$core$Int64 _89;
int64_t _90;
frost$core$Object* _91;
frost$core$Object* _92;
frost$core$Object* _95;
frost$core$Object* _96;
frost$core$Object* _98;
frost$collections$Array* _101;
frost$core$Int _102;
frost$core$Object* _103;
frost$core$Object* _104;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$Object* _110;
frost$core$Int _113;
frost$core$Int _117;
frost$collections$Array** _118;
frost$collections$Array* _119;
frost$collections$CollectionView* _120;
$fn18 _121;
frost$core$Int _122;
int64_t _123;
int64_t _124;
bool _125;
frost$core$Bit _126;
bool _127;
frost$collections$Array** _129;
frost$collections$Array* _130;
frost$core$Int _131;
frost$core$Int _133;
int64_t _134;
int64_t _135;
bool _136;
frost$core$Bit _137;
bool _138;
frost$collections$CollectionView* _140;
$fn19 _141;
frost$core$Int _142;
int64_t _143;
int64_t _144;
bool _145;
frost$core$Bit _146;
bool _147;
frost$core$Int _149;
frost$unsafe$NewPointer* _153;
frost$unsafe$NewPointer _154;
int64_t _155;
frost$core$Int64 _156;
int64_t _157;
frost$core$Object* _158;
frost$core$Object* _159;
frost$core$Int _162;
frost$collections$ListView** _163;
frost$collections$ListView* _164;
frost$collections$CollectionView* _165;
$fn20 _166;
frost$core$Int _167;
frost$core$Int _168;
int64_t _169;
int64_t _170;
int64_t _171;
frost$core$Int _172;
frost$core$Int _173;
int64_t _174;
int64_t _175;
int64_t _176;
frost$core$Int _177;
int64_t _180;
int64_t _181;
bool _182;
frost$core$Bit _183;
bool _185;
frost$core$Object* _186;
frost$collections$Array** _190;
frost$collections$Array* _191;
frost$core$Int _192;
frost$core$Int _193;
frost$core$Object* _194;
frost$core$Int _196;
int64_t _197;
int64_t _198;
bool _199;
frost$core$Bit _200;
bool _201;
frost$collections$CollectionView* _203;
$fn21 _204;
frost$core$Int _205;
int64_t _206;
int64_t _207;
bool _208;
frost$core$Bit _209;
bool _210;
frost$core$Int _212;
frost$unsafe$NewPointer* _216;
frost$unsafe$NewPointer _217;
int64_t _218;
frost$core$Int64 _219;
int64_t _220;
frost$core$Object* _221;
frost$core$Object* _223;
frost$core$Object* _224;
frost$core$Object* _228;
frost$core$Int _231;
frost$core$Int _232;
int64_t _233;
int64_t _234;
int64_t _235;
frost$core$Int _236;
frost$core$Int _240;
frost$collections$Array** _241;
frost$collections$Array* _242;
frost$collections$CollectionView* _243;
$fn22 _244;
frost$core$Int _245;
int64_t _248;
int64_t _249;
bool _250;
frost$core$Bit _251;
bool _253;
frost$collections$Array** _256;
frost$collections$Array* _257;
frost$core$Int _258;
frost$core$Int _259;
frost$core$Object* _260;
frost$core$Int _262;
int64_t _263;
int64_t _264;
bool _265;
frost$core$Bit _266;
bool _267;
frost$collections$CollectionView* _269;
$fn23 _270;
frost$core$Int _271;
int64_t _272;
int64_t _273;
bool _274;
frost$core$Bit _275;
bool _276;
frost$core$Int _278;
frost$unsafe$NewPointer* _282;
frost$unsafe$NewPointer _283;
int64_t _284;
frost$core$Int64 _285;
int64_t _286;
frost$core$Object* _287;
frost$core$Object* _289;
frost$core$Object* _290;
frost$core$Object* _294;
frost$collections$Array** _299;
frost$collections$Array* _300;
frost$core$Int _301;
frost$core$Int _303;
int64_t _304;
int64_t _305;
bool _306;
frost$core$Bit _307;
bool _308;
frost$collections$CollectionView* _310;
$fn24 _311;
frost$core$Int _312;
int64_t _313;
int64_t _314;
bool _315;
frost$core$Bit _316;
bool _317;
frost$core$Int _319;
frost$unsafe$NewPointer* _323;
frost$unsafe$NewPointer _324;
int64_t _325;
frost$core$Int64 _326;
int64_t _327;
frost$core$Object* _328;
frost$core$Object* _329;
frost$core$Int _332;
frost$core$Int _333;
int64_t _334;
int64_t _335;
int64_t _336;
frost$core$Int _337;
frost$core$Object* _338;
frost$core$Int _340;
int64_t _341;
int64_t _342;
bool _343;
frost$core$Bit _344;
bool _345;
frost$collections$CollectionView* _347;
$fn25 _348;
frost$core$Int _349;
int64_t _350;
int64_t _351;
bool _352;
frost$core$Bit _353;
bool _354;
frost$core$Int _356;
frost$unsafe$NewPointer* _360;
frost$unsafe$NewPointer _361;
int64_t _362;
frost$core$Int64 _363;
int64_t _364;
frost$core$Object* _365;
frost$core$Object* _367;
frost$core$Object* _368;
frost$core$Object* _372;
frost$core$Object* _374;
frost$collections$Array* _378;
frost$collections$ListView* _379;
frost$core$Object* _380;
frost$collections$Array* _382;
frost$core$Object* _383;
frost$collections$Array* _386;
frost$core$Object* _387;
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
_88 = _87.value;
_89 = frost$core$Int64$init$frost$core$Int(_64);
_90 = _89.value;
_91 = ((frost$core$Object**)_88)[_90];
_92 = _91;
frost$core$Frost$ref$frost$core$Object$Q(_92);
_95 = _91;
_96 = _95;
frost$collections$Array$add$frost$collections$Array$T(_62, _96);
_98 = _91;
frost$core$Frost$unref$frost$core$Object$Q(_98);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:95
_101 = *(&local1);
_102 = *(&local2);
_103 = frost$collections$Array$removeIndex$frost$core$Int$R$frost$collections$Array$T(_101, _102);
_104 = _103;
_105 = _103;
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_107);
goto block4;
block6:;
_110 = ((frost$core$Object*) _51);
frost$core$Frost$unref$frost$core$Object$Q(_110);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:97
_113 = (frost$core$Int) {0u};
*(&local3) = _113;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:98
goto block11;
block11:;
_117 = *(&local3);
_118 = &param0->choices;
_119 = *_118;
_120 = ((frost$collections$CollectionView*) _119);
ITable* $tmp36 = _120->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp36 = $tmp36->next;
}
_121 = $tmp36->methods[0];
_122 = _121(_120);
_123 = _117.value;
_124 = _122.value;
_125 = _123 < _124;
_126 = (frost$core$Bit) {_125};
_127 = _126.value;
if (_127) goto block14; else goto block13;
block14:;
_129 = &param0->choices;
_130 = *_129;
_131 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:98:46
_133 = (frost$core$Int) {0u};
_134 = _131.value;
_135 = _133.value;
_136 = _134 >= _135;
_137 = (frost$core$Bit) {_136};
_138 = _137.value;
if (_138) goto block18; else goto block17;
block18:;
_140 = ((frost$collections$CollectionView*) _130);
ITable* $tmp37 = _140->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp37 = $tmp37->next;
}
_141 = $tmp37->methods[0];
_142 = _141(_140);
_143 = _131.value;
_144 = _142.value;
_145 = _143 < _144;
_146 = (frost$core$Bit) {_145};
_147 = _146.value;
if (_147) goto block16; else goto block17;
block17:;
_149 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s38, _149, &$s39);
abort(); // unreachable
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_153 = &_130->data;
_154 = *_153;
_155 = _154.value;
_156 = frost$core$Int64$init$frost$core$Int(_131);
_157 = _156.value;
_158 = ((frost$core$Object**)_155)[_157];
_159 = _158;
frost$core$Frost$ref$frost$core$Object$Q(_159);
_162 = ((frost$core$Int$wrapper*) _158)->value;
_163 = &param0->list;
_164 = *_163;
_165 = ((frost$collections$CollectionView*) _164);
ITable* $tmp40 = _165->$class->itable;
while ($tmp40->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp40 = $tmp40->next;
}
_166 = $tmp40->methods[0];
_167 = _166(_165);
_168 = *(&local3);
_169 = _167.value;
_170 = _168.value;
_171 = _169 - _170;
_172 = (frost$core$Int) {_171};
_173 = (frost$core$Int) {1u};
_174 = _172.value;
_175 = _173.value;
_176 = _174 - _175;
_177 = (frost$core$Int) {_176};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:98:50
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_180 = _162.value;
_181 = _177.value;
_182 = _180 == _181;
_183 = (frost$core$Bit) {_182};
_185 = _183.value;
_186 = _158;
frost$core$Frost$unref$frost$core$Object$Q(_186);
if (_185) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:99
_190 = &param0->choices;
_191 = *_190;
_192 = *(&local3);
_193 = (frost$core$Int) {0u};
frost$core$Int$wrapper* $tmp41;
$tmp41 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp41->value = _193;
_194 = ((frost$core$Object*) $tmp41);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:99:24
_196 = (frost$core$Int) {0u};
_197 = _192.value;
_198 = _196.value;
_199 = _197 >= _198;
_200 = (frost$core$Bit) {_199};
_201 = _200.value;
if (_201) goto block23; else goto block22;
block23:;
_203 = ((frost$collections$CollectionView*) _191);
ITable* $tmp42 = _203->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp42 = $tmp42->next;
}
_204 = $tmp42->methods[0];
_205 = _204(_203);
_206 = _192.value;
_207 = _205.value;
_208 = _206 < _207;
_209 = (frost$core$Bit) {_208};
_210 = _209.value;
if (_210) goto block21; else goto block22;
block22:;
_212 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s43, _212, &$s44);
abort(); // unreachable
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_216 = &_191->data;
_217 = *_216;
_218 = _217.value;
_219 = frost$core$Int64$init$frost$core$Int(_192);
_220 = _219.value;
_221 = _194;
frost$core$Frost$ref$frost$core$Object$Q(_221);
_223 = ((frost$core$Object**)_218)[_220];
_224 = _223;
frost$core$Frost$unref$frost$core$Object$Q(_224);
((frost$core$Object**)_218)[_220] = _194;
_228 = _194;
frost$core$Frost$unref$frost$core$Object$Q(_228);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:100
_231 = *(&local3);
_232 = (frost$core$Int) {1u};
_233 = _231.value;
_234 = _232.value;
_235 = _233 + _234;
_236 = (frost$core$Int) {_235};
*(&local3) = _236;
goto block11;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:102
_240 = *(&local3);
_241 = &param0->choices;
_242 = *_241;
_243 = ((frost$collections$CollectionView*) _242);
ITable* $tmp45 = _243->$class->itable;
while ($tmp45->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp45 = $tmp45->next;
}
_244 = $tmp45->methods[0];
_245 = _244(_243);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:102:18
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_248 = _240.value;
_249 = _245.value;
_250 = _248 == _249;
_251 = (frost$core$Bit) {_250};
_253 = _251.value;
if (_253) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:103
_256 = &param0->choices;
_257 = *_256;
_258 = (frost$core$Int) {0u};
_259 = (frost$core$Int) {18446744073709551615u};
frost$core$Int$wrapper* $tmp46;
$tmp46 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp46->value = _259;
_260 = ((frost$core$Object*) $tmp46);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:103:24
_262 = (frost$core$Int) {0u};
_263 = _258.value;
_264 = _262.value;
_265 = _263 >= _264;
_266 = (frost$core$Bit) {_265};
_267 = _266.value;
if (_267) goto block31; else goto block30;
block31:;
_269 = ((frost$collections$CollectionView*) _257);
ITable* $tmp47 = _269->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp47 = $tmp47->next;
}
_270 = $tmp47->methods[0];
_271 = _270(_269);
_272 = _258.value;
_273 = _271.value;
_274 = _272 < _273;
_275 = (frost$core$Bit) {_274};
_276 = _275.value;
if (_276) goto block29; else goto block30;
block30:;
_278 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s48, _278, &$s49);
abort(); // unreachable
block29:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_282 = &_257->data;
_283 = *_282;
_284 = _283.value;
_285 = frost$core$Int64$init$frost$core$Int(_258);
_286 = _285.value;
_287 = _260;
frost$core$Frost$ref$frost$core$Object$Q(_287);
_289 = ((frost$core$Object**)_284)[_286];
_290 = _289;
frost$core$Frost$unref$frost$core$Object$Q(_290);
((frost$core$Object**)_284)[_286] = _260;
_294 = _260;
frost$core$Frost$unref$frost$core$Object$Q(_294);
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:106
_299 = &param0->choices;
_300 = *_299;
_301 = *(&local3);
// begin inline call to function frost.collections.Array.[](index:frost.core.Int):frost.collections.Array.T from ListView.frost:106:24
_303 = (frost$core$Int) {0u};
_304 = _301.value;
_305 = _303.value;
_306 = _304 >= _305;
_307 = (frost$core$Bit) {_306};
_308 = _307.value;
if (_308) goto block35; else goto block34;
block35:;
_310 = ((frost$collections$CollectionView*) _300);
ITable* $tmp50 = _310->$class->itable;
while ($tmp50->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp50 = $tmp50->next;
}
_311 = $tmp50->methods[0];
_312 = _311(_310);
_313 = _301.value;
_314 = _312.value;
_315 = _313 < _314;
_316 = (frost$core$Bit) {_315};
_317 = _316.value;
if (_317) goto block33; else goto block34;
block34:;
_319 = (frost$core$Int) {74u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s51, _319, &$s52);
abort(); // unreachable
block33:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:75
_323 = &_300->data;
_324 = *_323;
_325 = _324.value;
_326 = frost$core$Int64$init$frost$core$Int(_301);
_327 = _326.value;
_328 = ((frost$core$Object**)_325)[_327];
_329 = _328;
frost$core$Frost$ref$frost$core$Object$Q(_329);
_332 = ((frost$core$Int$wrapper*) _328)->value;
_333 = (frost$core$Int) {1u};
_334 = _332.value;
_335 = _333.value;
_336 = _334 + _335;
_337 = (frost$core$Int) {_336};
frost$core$Int$wrapper* $tmp53;
$tmp53 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp53->value = _337;
_338 = ((frost$core$Object*) $tmp53);
// begin inline call to method frost.collections.Array.[]:=(index:frost.core.Int, value:frost.collections.Array.T) from ListView.frost:106:24
_340 = (frost$core$Int) {0u};
_341 = _301.value;
_342 = _340.value;
_343 = _341 >= _342;
_344 = (frost$core$Bit) {_343};
_345 = _344.value;
if (_345) goto block39; else goto block38;
block39:;
_347 = ((frost$collections$CollectionView*) _300);
ITable* $tmp54 = _347->$class->itable;
while ($tmp54->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp54 = $tmp54->next;
}
_348 = $tmp54->methods[0];
_349 = _348(_347);
_350 = _301.value;
_351 = _349.value;
_352 = _350 < _351;
_353 = (frost$core$Bit) {_352};
_354 = _353.value;
if (_354) goto block37; else goto block38;
block38:;
_356 = (frost$core$Int) {79u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s55, _356, &$s56);
abort(); // unreachable
block37:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Array.frost:80
_360 = &_300->data;
_361 = *_360;
_362 = _361.value;
_363 = frost$core$Int64$init$frost$core$Int(_301);
_364 = _363.value;
_365 = _338;
frost$core$Frost$ref$frost$core$Object$Q(_365);
_367 = ((frost$core$Object**)_362)[_364];
_368 = _367;
frost$core$Frost$unref$frost$core$Object$Q(_368);
((frost$core$Object**)_362)[_364] = _338;
_372 = _338;
frost$core$Frost$unref$frost$core$Object$Q(_372);
_374 = _328;
frost$core$Frost$unref$frost$core$Object$Q(_374);
goto block25;
block25:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:108
_378 = *(&local0);
_379 = ((frost$collections$ListView*) _378);
_380 = ((frost$core$Object*) _379);
frost$core$Frost$ref$frost$core$Object$Q(_380);
_382 = *(&local1);
_383 = ((frost$core$Object*) _382);
frost$core$Frost$unref$frost$core$Object$Q(_383);
*(&local1) = ((frost$collections$Array*) NULL);
_386 = *(&local0);
_387 = ((frost$core$Object*) _386);
frost$core$Frost$unref$frost$core$Object$Q(_387);
*(&local0) = ((frost$collections$Array*) NULL);
return _379;

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

