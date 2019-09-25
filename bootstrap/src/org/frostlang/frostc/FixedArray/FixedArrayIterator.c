#include "org/frostlang/frostc/FixedArray/FixedArrayIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim(org$frostlang$frostc$FixedArray$FixedArrayIterator* p0) {
    frost$core$Object* result = org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } org$frostlang$frostc$FixedArray$FixedArrayIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frostc$FixedArray$FixedArrayIterator$class_type org$frostlang$frostc$FixedArray$FixedArrayIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$FixedArray$FixedArrayIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup, org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 50, 1445351229460240962, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -6247431822907188018, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 144, -6275393650980415678, NULL };

void org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT(void* rawSelf, org$frostlang$frostc$FixedArray* param1) {
org$frostlang$frostc$FixedArray$FixedArrayIterator* param0 = (org$frostlang$frostc$FixedArray$FixedArrayIterator*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
org$frostlang$frostc$FixedArray** _7;
org$frostlang$frostc$FixedArray* _8;
frost$core$Object* _9;
org$frostlang$frostc$FixedArray** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:11
_1 = (frost$core$Int) {0u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:14
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
frost$core$Bit org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit(void* rawSelf) {
org$frostlang$frostc$FixedArray$FixedArrayIterator* param0 = (org$frostlang$frostc$FixedArray$FixedArrayIterator*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
org$frostlang$frostc$FixedArray** _3;
org$frostlang$frostc$FixedArray* _4;
frost$collections$CollectionView* _5;
$fn2 _6;
frost$core$Int _7;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:19
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
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FixedArray.frost:19:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_10 = _2.value;
_11 = _7.value;
_12 = _10 == _11;
_13 = (frost$core$Bit) {_12};
return _13;

}
frost$core$Object* org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T(void* rawSelf) {
org$frostlang$frostc$FixedArray$FixedArrayIterator* param0 = (org$frostlang$frostc$FixedArray$FixedArrayIterator*) rawSelf;

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
org$frostlang$frostc$FixedArray** _25;
org$frostlang$frostc$FixedArray* _26;
frost$core$Int* _27;
frost$core$Int _28;
frost$core$Int _29;
int64_t _30;
int64_t _31;
int64_t _32;
frost$core$Int _33;
frost$core$Object* _34;
frost$core$Object* _35;
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
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:24
_15 = &param0->index;
_16 = *_15;
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 + _19;
_21 = (frost$core$Int) {_20};
_22 = &param0->index;
*_22 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:25
_25 = &param0->array;
_26 = *_25;
_27 = &param0->index;
_28 = *_27;
_29 = (frost$core$Int) {1u};
_30 = _28.value;
_31 = _29.value;
_32 = _30 - _31;
_33 = (frost$core$Int) {_32};
_34 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_26, _33);
_35 = _34;
_36 = _35;
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_38);
return _35;

}
void org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup(void* rawSelf) {
org$frostlang$frostc$FixedArray$FixedArrayIterator* param0 = (org$frostlang$frostc$FixedArray$FixedArrayIterator*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$FixedArray** _3;
org$frostlang$frostc$FixedArray* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->array;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




