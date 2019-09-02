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

__attribute__((weak)) frost$core$Object* org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim(org$frostlang$frostc$FixedArray$FixedArrayIterator* p0) {
    frost$core$Object* result = org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } org$frostlang$frostc$FixedArray$FixedArrayIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frostc$FixedArray$FixedArrayIterator$class_type org$frostlang$frostc$FixedArray$FixedArrayIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$FixedArray$FixedArrayIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup, org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 50, 1445351229460240962, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -6247431822907188018, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 144, -6275393650980415678, NULL };

void org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0, org$frostlang$frostc$FixedArray* param1) {

org$frostlang$frostc$FixedArray$FixedArrayIterator* _1;
frost$core$Int _2;
frost$core$Int* _3;
org$frostlang$frostc$FixedArray$FixedArrayIterator* _6;
frost$core$Object* _7;
org$frostlang$frostc$FixedArray** _9;
org$frostlang$frostc$FixedArray* _10;
frost$core$Object* _11;
org$frostlang$frostc$FixedArray** _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:11
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->index;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:14
_6 = param0;
_7 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &_6->array;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = &_6->array;
*_13 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

org$frostlang$frostc$FixedArray$FixedArrayIterator* _1;
frost$core$Int* _2;
frost$core$Int _3;
org$frostlang$frostc$FixedArray$FixedArrayIterator* _4;
org$frostlang$frostc$FixedArray** _5;
org$frostlang$frostc$FixedArray* _6;
frost$collections$CollectionView* _7;
$fn2 _8;
frost$core$Int _9;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:19
_1 = param0;
_2 = &_1->index;
_3 = *_2;
_4 = param0;
_5 = &_4->array;
_6 = *_5;
_7 = ((frost$collections$CollectionView*) _6);
ITable* $tmp3 = _7->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_8 = $tmp3->methods[0];
_9 = _8(_7);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from FixedArray.frost:19:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int.stub:342
_12 = _3.value;
_13 = _9.value;
_14 = _12 == _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Object* org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
org$frostlang$frostc$FixedArray$FixedArrayIterator* _15;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Int _18;
int64_t _19;
int64_t _20;
int64_t _21;
frost$core$Int _22;
frost$core$Int* _23;
org$frostlang$frostc$FixedArray$FixedArrayIterator* _26;
org$frostlang$frostc$FixedArray** _27;
org$frostlang$frostc$FixedArray* _28;
org$frostlang$frostc$FixedArray* _29;
org$frostlang$frostc$FixedArray$FixedArrayIterator* _30;
frost$core$Int* _31;
frost$core$Int _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
int64_t _36;
frost$core$Int _37;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$Object* _40;
frost$core$Object* _42;
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
_15 = param0;
_16 = &_15->index;
_17 = *_16;
_18 = (frost$core$Int) {1u};
_19 = _17.value;
_20 = _18.value;
_21 = _19 + _20;
_22 = (frost$core$Int) {_21};
_23 = &_15->index;
*_23 = _22;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:25
_26 = param0;
_27 = &_26->array;
_28 = *_27;
_29 = _28;
_30 = param0;
_31 = &_30->index;
_32 = *_31;
_33 = (frost$core$Int) {1u};
_34 = _32.value;
_35 = _33.value;
_36 = _34 - _35;
_37 = (frost$core$Int) {_36};
_38 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(_29, _37);
_39 = _38;
_40 = _39;
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = _38;
frost$core$Frost$unref$frost$core$Object$Q(_42);
return _39;

}
void org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

frost$core$Object* _1;
org$frostlang$frostc$FixedArray$FixedArrayIterator* _3;
org$frostlang$frostc$FixedArray** _4;
org$frostlang$frostc$FixedArray* _5;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->array;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}






