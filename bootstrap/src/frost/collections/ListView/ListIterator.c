#include "frost/collections/ListView/ListIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T$shim(frost$collections$ListView$ListIterator* p0) {
    frost$core$Object* result = frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$ListIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$ListIterator$get_done$R$frost$core$Bit, frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$ListIterator$class_type frost$collections$ListView$ListIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$ListIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$ListIterator$cleanup, frost$collections$ListView$ListIterator$get_done$R$frost$core$Bit, frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$ListView*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 39, 1118807312422195775, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -625725483312209580, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, -4626430657070765822, NULL };

void frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$collections$ListView$ListIterator* param0 = (frost$collections$ListView$ListIterator*) rawSelf;

frost$collections$ListView$ListIterator* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$collections$ListView$ListIterator* _6;
frost$core$Object* _7;
frost$collections$ListView** _9;
frost$collections$ListView* _10;
frost$core$Object* _11;
frost$collections$ListView** _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:50
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->index;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:53
_6 = param0;
_7 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &_6->list;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = &_6->list;
*_13 = param1;
return;

}
frost$core$Bit frost$collections$ListView$ListIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$ListView$ListIterator* param0 = (frost$collections$ListView$ListIterator*) rawSelf;

frost$collections$ListView$ListIterator* _1;
frost$core$Int* _2;
frost$core$Int _3;
frost$collections$ListView$ListIterator* _4;
frost$collections$ListView** _5;
frost$collections$ListView* _6;
frost$collections$CollectionView* _7;
$fn2 _8;
frost$core$Int _9;
int64_t _12;
int64_t _13;
bool _14;
frost$core$Bit _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:58
_1 = param0;
_2 = &_1->index;
_3 = *_2;
_4 = param0;
_5 = &_4->list;
_6 = *_5;
_7 = ((frost$collections$CollectionView*) _6);
ITable* $tmp3 = _7->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp3 = $tmp3->next;
}
_8 = $tmp3->methods[0];
_9 = _8(_7);
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from ListView.frost:58:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_12 = _3.value;
_13 = _9.value;
_14 = _12 == _13;
_15 = (frost$core$Bit) {_14};
return _15;

}
frost$core$Object* frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T(void* rawSelf) {
frost$collections$ListView$ListIterator* param0 = (frost$collections$ListView$ListIterator*) rawSelf;

frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$ListView$ListIterator* _15;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Int _18;
int64_t _19;
int64_t _20;
int64_t _21;
frost$core$Int _22;
frost$core$Int* _23;
frost$collections$ListView$ListIterator* _26;
frost$collections$ListView** _27;
frost$collections$ListView* _28;
frost$collections$ListView* _29;
frost$collections$ListView$ListIterator* _30;
frost$core$Int* _31;
frost$core$Int _32;
frost$core$Int _33;
int64_t _34;
int64_t _35;
int64_t _36;
frost$core$Int _37;
$fn5 _38;
frost$core$Object* _39;
frost$core$Object* _40;
frost$core$Object* _41;
frost$core$Object* _43;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp6 = _0->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_1 = $tmp6->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _11, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:63
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:64
_26 = param0;
_27 = &_26->list;
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
ITable* $tmp9 = _29->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp9 = $tmp9->next;
}
_38 = $tmp9->methods[0];
_39 = _38(_29, _37);
_40 = _39;
_41 = _40;
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = _39;
frost$core$Frost$unref$frost$core$Object$Q(_43);
return _40;

}
void frost$collections$ListView$ListIterator$cleanup(void* rawSelf) {
frost$collections$ListView$ListIterator* param0 = (frost$collections$ListView$ListIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$ListView$ListIterator* _3;
frost$collections$ListView** _4;
frost$collections$ListView* _5;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:47
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->list;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}

