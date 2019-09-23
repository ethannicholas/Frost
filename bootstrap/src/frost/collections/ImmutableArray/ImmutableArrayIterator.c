#include "frost/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Immutable.h"
#include "frost/collections/ImmutableArray.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Object* frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T$shim(frost$collections$ImmutableArray$ImmutableArrayIterator* p0) {
    frost$core$Immutable* result = frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ImmutableArray$ImmutableArrayIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit, frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ImmutableArray$ImmutableArrayIterator$class_type frost$collections$ImmutableArray$ImmutableArrayIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ImmutableArray$ImmutableArrayIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ImmutableArray$ImmutableArrayIterator$cleanup, frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit, frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 55, 589824127316804026, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -9038773420437697548, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 154, -7055647265229292788, NULL };

void frost$collections$ImmutableArray$ImmutableArrayIterator$init$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$ImmutableArrayIterator$T$GT(void* rawSelf, frost$collections$ImmutableArray* param1) {
frost$collections$ImmutableArray$ImmutableArrayIterator* param0 = (frost$collections$ImmutableArray$ImmutableArrayIterator*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$collections$ImmutableArray** _7;
frost$collections$ImmutableArray* _8;
frost$core$Object* _9;
frost$collections$ImmutableArray** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:11
_1 = (frost$core$Int) {0u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:14
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->array;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->array;
*_11 = param1;
return;

}
frost$core$Bit frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$ImmutableArray$ImmutableArrayIterator* param0 = (frost$collections$ImmutableArray$ImmutableArrayIterator*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$collections$ImmutableArray** _3;
frost$collections$ImmutableArray* _4;
frost$collections$CollectionView* _5;
$fn2 _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:19
_1 = &param0->index;
_2 = *_1;
_3 = &param0->array;
_4 = *_3;
_5 = ((frost$collections$CollectionView*) _4);
ITable* $tmp3 = _5->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_6 = $tmp3->methods[0];
_7 = _6(_5);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ImmutableArray.frost:19:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _2.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
return _13;

}
frost$core$Immutable* frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T(void* rawSelf) {
frost$collections$ImmutableArray$ImmutableArrayIterator* param0 = (frost$collections$ImmutableArray$ImmutableArrayIterator*) rawSelf;

frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$Int* _22;
frost$collections$ImmutableArray** _25;
frost$collections$ImmutableArray* _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Int _29;
int64_t _30;
int64_t _31;
int64_t _32;
frost$core$Int _33;
frost$core$Immutable* _34;
frost$core$Immutable* _35;
frost$core$Object* _36;
frost$core$Object* _38;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp5 = _0->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5 = $tmp5->next;
}
_1 = $tmp5->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {23u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _11, &$s7);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:24
_15 = &param0->index;
_16 = *_15;
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 + _19;
_21 = (frost$core$Int) {_20};
_22 = &param0->index;
*_22 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:25
_25 = &param0->array;
_26 = *_25;
_27 = &param0->index;
_28 = *_27;
_29 = (frost$core$Int) {1u};
_30 = _28.value;
_31 = _29.value;
_32 = _30 - _31;
_33 = (frost$core$Int) {_32};
_34 = frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T(_26, _33);
_35 = _34;
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = ((frost$core$Object*) _34);
frost$core$Frost$unref$frost$core$Object$Q(_38);
return _35;

}
void frost$collections$ImmutableArray$ImmutableArrayIterator$cleanup(void* rawSelf) {
frost$collections$ImmutableArray$ImmutableArrayIterator* param0 = (frost$collections$ImmutableArray$ImmutableArrayIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$ImmutableArray** _3;
frost$collections$ImmutableArray* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->array;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}






