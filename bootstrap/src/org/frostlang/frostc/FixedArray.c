#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "org/frostlang/frostc/FixedArray/FixedArrayIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim(org$frostlang$frostc$FixedArray* p0) {
    frost$collections$Iterator* result = org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T$shim(org$frostlang$frostc$FixedArray* p0, frost$core$Int p1) {
    frost$core$Object* result = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } org$frostlang$frostc$FixedArray$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } org$frostlang$frostc$FixedArray$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$CollectionView, { org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } org$frostlang$frostc$FixedArray$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$Iterable, { org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
org$frostlang$frostc$FixedArray$class_type org$frostlang$frostc$FixedArray$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$FixedArray$_frost$collections$ListView, { org$frostlang$frostc$FixedArray$get_asString$R$frost$core$String, org$frostlang$frostc$FixedArray$cleanup, org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T$shim, org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int, org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT$shim} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn4)(frost$collections$ListView*, frost$core$Int);
typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Int (*$fn11)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn17)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn18)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn19)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef frost$core$String* (*$fn29)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79", 31, -9121689662595246717, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -6247431822907188018, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x54", 124, -687733006522056811, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -6247431822907188018, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void org$frostlang$frostc$FixedArray$init(void* rawSelf) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

org$frostlang$frostc$FixedArray* _1;
frost$core$Int _2;
frost$core$Int* _3;
org$frostlang$frostc$FixedArray* _6;
frost$core$Int64 _7;
int64_t _8;
frost$core$Object** _9;
frost$core$Object*** _10;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:39
_1 = param0;
_2 = (frost$core$Int) {0u};
_3 = &_1->_count;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:40
_6 = param0;
_7 = (frost$core$Int64) {0u};
_8 = _7.value;
_9 = ((frost$core$Object**) frostAlloc(_8 * sizeof(frost$core$Object*)));
_10 = &_6->data;
*_10 = _9;
return;

}
void org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

frost$core$Int local0;
org$frostlang$frostc$FixedArray* _1;
frost$collections$CollectionView* _2;
$fn2 _3;
frost$core$Int _4;
frost$core$Int* _5;
org$frostlang$frostc$FixedArray* _8;
org$frostlang$frostc$FixedArray* _9;
frost$core$Int* _10;
frost$core$Int _11;
frost$core$Int64 _12;
int64_t _13;
frost$core$Object** _14;
frost$core$Object*** _15;
frost$core$Int _18;
frost$collections$CollectionView* _19;
$fn3 _20;
frost$core$Int _21;
frost$core$Bit _22;
frost$core$Range$LTfrost$core$Int$GT _23;
frost$core$Int _24;
frost$core$Int _26;
frost$core$Bit _27;
bool _28;
frost$core$Int _29;
int64_t _31;
int64_t _32;
bool _33;
frost$core$Bit _34;
bool _35;
int64_t _37;
int64_t _38;
bool _39;
frost$core$Bit _40;
bool _41;
org$frostlang$frostc$FixedArray* _44;
frost$core$Object*** _45;
frost$core$Object** _46;
frost$core$Int _47;
frost$core$Int64 _48;
frost$collections$ListView* _49;
frost$core$Int _50;
$fn4 _51;
frost$core$Object* _52;
frost$core$Object* _53;
frost$core$Object* _54;
int64_t _55;
frost$core$Object* _56;
frost$core$Object* _58;
frost$core$Object* _59;
frost$core$Object* _62;
frost$core$Int _65;
int64_t _66;
int64_t _67;
int64_t _68;
frost$core$Int _69;
int64_t _71;
int64_t _72;
bool _73;
frost$core$Bit _74;
bool _75;
int64_t _77;
int64_t _78;
bool _79;
frost$core$Bit _80;
bool _81;
int64_t _83;
int64_t _84;
int64_t _85;
frost$core$Int _86;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:44
_1 = param0;
_2 = ((frost$collections$CollectionView*) param1);
ITable* $tmp5 = _2->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_3 = $tmp5->methods[0];
_4 = _3(_2);
_5 = &_1->_count;
*_5 = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:45
_8 = param0;
_9 = param0;
_10 = &_9->_count;
_11 = *_10;
_12 = frost$core$Int64$init$frost$core$Int(_11);
_13 = _12.value;
_14 = ((frost$core$Object**) frostAlloc(_13 * sizeof(frost$core$Object*)));
_15 = &_8->data;
*_15 = _14;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:46
_18 = (frost$core$Int) {0u};
_19 = ((frost$collections$CollectionView*) param0);
ITable* $tmp6 = _19->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_20 = $tmp6->methods[0];
_21 = _20(_19);
_22 = (frost$core$Bit) {false};
_23 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_18, _21, _22);
_24 = _23.min;
*(&local0) = _24;
_26 = _23.max;
_27 = _23.inclusive;
_28 = _27.value;
_29 = (frost$core$Int) {1u};
if (_28) goto block4; else goto block5;
block4:;
_31 = _24.value;
_32 = _26.value;
_33 = _31 <= _32;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block1; else goto block2;
block5:;
_37 = _24.value;
_38 = _26.value;
_39 = _37 < _38;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:47
_44 = param0;
_45 = &_44->data;
_46 = *_45;
_47 = *(&local0);
_48 = frost$core$Int64$init$frost$core$Int(_47);
_49 = param1;
_50 = *(&local0);
ITable* $tmp7 = _49->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp7 = $tmp7->next;
}
_51 = $tmp7->methods[0];
_52 = _51(_49, _50);
_53 = _52;
_54 = _53;
_55 = _48.value;
_56 = _54;
frost$core$Frost$ref$frost$core$Object$Q(_56);
_58 = _46[_55];
_59 = _58;
frost$core$Frost$unref$frost$core$Object$Q(_59);
_46[_55] = _54;
_62 = _52;
frost$core$Frost$unref$frost$core$Object$Q(_62);
_65 = *(&local0);
_66 = _26.value;
_67 = _65.value;
_68 = _66 - _67;
_69 = (frost$core$Int) {_68};
if (_28) goto block7; else goto block8;
block7:;
_71 = _69.value;
_72 = _29.value;
_73 = _71 >= _72;
_74 = (frost$core$Bit) {_73};
_75 = _74.value;
if (_75) goto block6; else goto block2;
block8:;
_77 = _69.value;
_78 = _29.value;
_79 = _77 > _78;
_80 = (frost$core$Bit) {_79};
_81 = _80.value;
if (_81) goto block6; else goto block2;
block6:;
_83 = _65.value;
_84 = _29.value;
_85 = _83 + _84;
_86 = (frost$core$Int) {_85};
*(&local0) = _86;
goto block1;
block2:;
return;

}
void org$frostlang$frostc$FixedArray$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$FixedArray$T$GT$frost$core$Int(void* rawSelf, frost$core$Object** param1, frost$core$Int param2) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

org$frostlang$frostc$FixedArray* _1;
frost$core$Object** _2;
frost$core$Object*** _3;
org$frostlang$frostc$FixedArray* _6;
frost$core$Int* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:53
_1 = param0;
_2 = ((frost$core$Object**) param1);
_3 = &_1->data;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:54
_6 = param0;
_7 = &_6->_count;
*_7 = param2;
return;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(frost$collections$Array* param0) {

frost$collections$Array* _1;
frost$collections$Array* _2;
frost$core$Object*** _3;
frost$core$Object** _4;
frost$core$Object** _5;
frost$collections$Array* _6;
frost$core$Int* _7;
frost$core$Int _8;
frost$core$Int64 _9;
frost$collections$Array* _10;
frost$core$Int* _11;
frost$core$Int _12;
frost$core$Int64 _13;
int64_t _14;
int64_t _15;
frost$core$Object** _16;
frost$core$Object** _17;
frost$core$Object*** _18;
frost$core$Object* _21;
org$frostlang$frostc$FixedArray* _22;
org$frostlang$frostc$FixedArray* _23;
frost$core$Object* _25;
frost$core$Class** _26;
frost$core$Class* _27;
frost$core$Object* _28;
frost$core$Class** _30;
frost$core$Class* _31;
frost$core$Object* _32;
frost$core$Class** _34;
frost$core$Object* _36;
frost$collections$Array* _39;
frost$core$Int _40;
frost$core$Int* _41;
frost$core$Object* _44;
org$frostlang$frostc$FixedArray* _45;
frost$core$Object* _46;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:67
_1 = param0;
_2 = param0;
_3 = &_2->data;
_4 = *_3;
_5 = ((frost$core$Object**) _4);
_6 = param0;
_7 = &_6->capacity;
_8 = *_7;
_9 = frost$core$Int64$init$frost$core$Int(_8);
_10 = param0;
_11 = &_10->_count;
_12 = *_11;
_13 = frost$core$Int64$init$frost$core$Int(_12);
_14 = _9.value;
_15 = _13.value;
_16 = (frost$core$Object**) frostRealloc(_5, _14 * sizeof(frost$core$Object*), _15 * sizeof(frost$core$Object*));
_17 = ((frost$core$Object**) _16);
_18 = &_1->data;
*_18 = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:68
_21 = ((frost$core$Object*) param0);
_22 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
_23 = _22;
org$frostlang$frostc$FixedArray$init(_23);
_25 = ((frost$core$Object*) _22);
_26 = &_25->$class;
_27 = *_26;
_28 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = &_21->$class;
_31 = *_30;
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = &_21->$class;
*_34 = _27;
_36 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_36);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:69
_39 = param0;
_40 = (frost$core$Int) {18446744073709551615u};
_41 = &_39->capacity;
*_41 = _40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:70
_44 = ((frost$core$Object*) param0);
_45 = ((org$frostlang$frostc$FixedArray*) _44);
_46 = ((frost$core$Object*) _45);
frost$core$Frost$ref$frost$core$Object$Q(_46);
return _45;

}
void org$frostlang$frostc$FixedArray$cleanup(void* rawSelf) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

frost$core$Int local0;
frost$core$Int _1;
frost$collections$CollectionView* _2;
$fn8 _3;
frost$core$Int _4;
frost$core$Bit _5;
frost$core$Range$LTfrost$core$Int$GT _6;
frost$core$Int _7;
frost$core$Int _9;
frost$core$Bit _10;
bool _11;
frost$core$Int _12;
int64_t _14;
int64_t _15;
bool _16;
frost$core$Bit _17;
bool _18;
int64_t _20;
int64_t _21;
bool _22;
frost$core$Bit _23;
bool _24;
org$frostlang$frostc$FixedArray* _27;
frost$core$Object*** _28;
frost$core$Object** _29;
frost$core$Int _30;
frost$core$Int64 _31;
int64_t _32;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$Object* _36;
frost$core$Int _40;
int64_t _41;
int64_t _42;
int64_t _43;
frost$core$Int _44;
int64_t _46;
int64_t _47;
bool _48;
frost$core$Bit _49;
bool _50;
int64_t _52;
int64_t _53;
bool _54;
frost$core$Bit _55;
bool _56;
int64_t _58;
int64_t _59;
int64_t _60;
frost$core$Int _61;
org$frostlang$frostc$FixedArray* _65;
frost$core$Object*** _66;
frost$core$Object** _67;
frost$core$Object* _70;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:75
_1 = (frost$core$Int) {0u};
_2 = ((frost$collections$CollectionView*) param0);
ITable* $tmp9 = _2->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
_3 = $tmp9->methods[0];
_4 = _3(_2);
_5 = (frost$core$Bit) {false};
_6 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_1, _4, _5);
_7 = _6.min;
*(&local0) = _7;
_9 = _6.max;
_10 = _6.inclusive;
_11 = _10.value;
_12 = (frost$core$Int) {1u};
if (_11) goto block4; else goto block5;
block4:;
_14 = _7.value;
_15 = _9.value;
_16 = _14 <= _15;
_17 = (frost$core$Bit) {_16};
_18 = _17.value;
if (_18) goto block1; else goto block2;
block5:;
_20 = _7.value;
_21 = _9.value;
_22 = _20 < _21;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:76
_27 = param0;
_28 = &_27->data;
_29 = *_28;
_30 = *(&local0);
_31 = frost$core$Int64$init$frost$core$Int(_30);
_32 = _31.value;
_33 = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = _29[_32];
_36 = _35;
frost$core$Frost$unref$frost$core$Object$Q(_36);
_29[_32] = ((frost$core$Object*) NULL);
_40 = *(&local0);
_41 = _9.value;
_42 = _40.value;
_43 = _41 - _42;
_44 = (frost$core$Int) {_43};
if (_11) goto block7; else goto block8;
block7:;
_46 = _44.value;
_47 = _12.value;
_48 = _46 >= _47;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block6; else goto block2;
block8:;
_52 = _44.value;
_53 = _12.value;
_54 = _52 > _53;
_55 = (frost$core$Bit) {_54};
_56 = _55.value;
if (_56) goto block6; else goto block2;
block6:;
_58 = _40.value;
_59 = _12.value;
_60 = _58 + _59;
_61 = (frost$core$Int) {_60};
*(&local0) = _61;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:78
_65 = param0;
_66 = &_65->data;
_67 = *_66;
frostFree(_67);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:74
_70 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_70);
return;

}
frost$core$Object* org$frostlang$frostc$FixedArray$$IDX$frost$core$Int$R$org$frostlang$frostc$FixedArray$T(void* rawSelf, frost$core$Int param1) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

frost$core$Bit local0;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn10 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$core$Int _20;
int64_t _21;
int64_t _22;
bool _23;
frost$core$Bit _24;
bool _25;
frost$collections$CollectionView* _27;
$fn11 _28;
frost$core$Int _29;
int64_t _30;
int64_t _31;
bool _32;
frost$core$Bit _33;
frost$core$Bit _38;
bool _39;
frost$core$Int _41;
org$frostlang$frostc$FixedArray* _45;
frost$core$Object*** _46;
frost$core$Object** _47;
frost$core$Int64 _48;
int64_t _49;
frost$core$Object* _50;
frost$core$Object* _51;
frost$core$Object* _52;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp12 = _7->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp12 = $tmp12->next;
}
_8 = $tmp12->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {82u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _16, &$s14);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:83
_20 = (frost$core$Int) {0u};
_21 = param1.value;
_22 = _20.value;
_23 = _21 >= _22;
_24 = (frost$core$Bit) {_23};
_25 = _24.value;
if (_25) goto block4; else goto block5;
block4:;
_27 = ((frost$collections$CollectionView*) param0);
ITable* $tmp15 = _27->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp15 = $tmp15->next;
}
_28 = $tmp15->methods[0];
_29 = _28(_27);
_30 = param1.value;
_31 = _29.value;
_32 = _30 < _31;
_33 = (frost$core$Bit) {_32};
*(&local0) = _33;
goto block6;
block5:;
*(&local0) = _24;
goto block6;
block6:;
_38 = *(&local0);
_39 = _38.value;
if (_39) goto block7; else goto block8;
block8:;
_41 = (frost$core$Int) {83u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s16, _41);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:84
_45 = param0;
_46 = &_45->data;
_47 = *_46;
_48 = frost$core$Int64$init$frost$core$Int(param1);
_49 = _48.value;
_50 = _47[_49];
_51 = _50;
_52 = _51;
frost$core$Frost$ref$frost$core$Object$Q(_52);
return _51;

}
frost$core$Int org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

org$frostlang$frostc$FixedArray* _1;
frost$core$Int* _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:89
_1 = param0;
_2 = &_1->_count;
_3 = *_2;
return _3;

}
frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(void* rawSelf) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

org$frostlang$frostc$FixedArray$FixedArrayIterator* _1;
org$frostlang$frostc$FixedArray$FixedArrayIterator* _2;
org$frostlang$frostc$FixedArray* _3;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:94
_1 = (org$frostlang$frostc$FixedArray$FixedArrayIterator*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray$FixedArrayIterator), (frost$core$Class*) &org$frostlang$frostc$FixedArray$FixedArrayIterator$class);
_2 = _1;
_3 = param0;
org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT(_2, _3);
_5 = ((frost$collections$Iterator*) _1);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$core$String* org$frostlang$frostc$FixedArray$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$MutableString* _13;
frost$core$Object* _17;
frost$core$String* _19;
frost$core$Object* _20;
frost$collections$Iterable* _24;
frost$collections$Iterable* _25;
$fn17 _26;
frost$collections$Iterator* _27;
frost$collections$Iterator* _28;
frost$collections$Iterator* _30;
$fn18 _31;
frost$core$Bit _32;
bool _33;
frost$collections$Iterator* _36;
$fn19 _37;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$Object* _40;
frost$core$Object* _42;
frost$core$Object* _43;
frost$core$MutableString* _47;
frost$core$String* _48;
frost$core$Object* _51;
frost$core$String* _53;
frost$core$Object* _54;
frost$core$Object* _58;
frost$core$Bit _59;
bool _60;
frost$core$MutableString* _63;
frost$core$Object* _64;
frost$core$Object* _65;
$fn20 _68;
frost$core$String* _69;
frost$core$Object* _71;
frost$core$MutableString* _77;
frost$core$Object* _80;
frost$core$Object* _82;
frost$core$Object* _83;
frost$core$Object* _87;
frost$core$MutableString* _90;
frost$core$MutableString* _93;
frost$core$String* _94;
frost$core$Object* _95;
frost$core$Object* _97;
frost$core$String* _99;
frost$core$Object* _100;
frost$core$MutableString* _103;
frost$core$Object* _104;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:99
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init(_1);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:100
_13 = *(&local0);
frost$core$MutableString$append$frost$core$String(_13, &$s21);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:101
*(&local1) = ((frost$core$String*) NULL);
_17 = ((frost$core$Object*) &$s22);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = &$s23;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:102
_24 = ((frost$collections$Iterable*) param0);
_25 = _24;
ITable* $tmp24 = _25->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp24 = $tmp24->next;
}
_26 = $tmp24->methods[0];
_27 = _26(_25);
_28 = _27;
goto block1;
block1:;
_30 = _28;
ITable* $tmp25 = _30->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
_31 = $tmp25->methods[0];
_32 = _31(_30);
_33 = _32.value;
if (_33) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
_36 = _28;
ITable* $tmp26 = _36->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_37 = $tmp26->methods[1];
_38 = _37(_36);
_39 = _38;
_40 = _39;
frost$core$Frost$ref$frost$core$Object$Q(_40);
_42 = *(&local2);
_43 = _42;
frost$core$Frost$unref$frost$core$Object$Q(_43);
*(&local2) = _39;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:103
_47 = *(&local0);
_48 = *(&local1);
frost$core$MutableString$append$frost$core$String(_47, _48);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:104
_51 = ((frost$core$Object*) &$s27);
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = *(&local1);
_54 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_54);
*(&local1) = &$s28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:105
_58 = *(&local2);
_59 = (frost$core$Bit) {true};
_60 = _59.value;
if (_60) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:106
_63 = *(&local0);
_64 = *(&local2);
_65 = _64;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from FixedArray.frost:106:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_68 = ($fn29) _65->$class->vtable[0];
_69 = _68(_65);
frost$core$MutableString$append$frost$core$String(_63, _69);
_71 = ((frost$core$Object*) _69);
frost$core$Frost$unref$frost$core$Object$Q(_71);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:109
_77 = *(&local0);
frost$core$MutableString$append$frost$core$String(_77, &$s30);
goto block5;
block5:;
_80 = _38;
frost$core$Frost$unref$frost$core$Object$Q(_80);
_82 = *(&local2);
_83 = _82;
frost$core$Frost$unref$frost$core$Object$Q(_83);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_87 = ((frost$core$Object*) _27);
frost$core$Frost$unref$frost$core$Object$Q(_87);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:112
_90 = *(&local0);
frost$core$MutableString$append$frost$core$String(_90, &$s31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:113
_93 = *(&local0);
_94 = frost$core$MutableString$finish$R$frost$core$String(_93);
_95 = ((frost$core$Object*) _94);
frost$core$Frost$ref$frost$core$Object$Q(_95);
_97 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_97);
_99 = *(&local1);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local1) = ((frost$core$String*) NULL);
_103 = *(&local0);
_104 = ((frost$core$Object*) _103);
frost$core$Frost$unref$frost$core$Object$Q(_104);
*(&local0) = ((frost$core$MutableString*) NULL);
return _94;

}

