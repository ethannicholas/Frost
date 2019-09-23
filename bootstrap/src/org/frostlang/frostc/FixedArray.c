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

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int64 _5;
int64_t _6;
frost$core$Object** _7;
frost$core$Object*** _8;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:39
_1 = (frost$core$Int) {0u};
_2 = &param0->_count;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:40
_5 = (frost$core$Int64) {0u};
_6 = _5.value;
_7 = ((frost$core$Object**) frostAlloc(_6 * sizeof(frost$core$Object*)));
_8 = &param0->data;
*_8 = _7;
return;

}
void org$frostlang$frostc$FixedArray$init$frost$collections$ListView$LTorg$frostlang$frostc$FixedArray$T$GT(void* rawSelf, frost$collections$ListView* param1) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

frost$core$Int local0;
frost$collections$CollectionView* _1;
$fn2 _2;
frost$core$Int _3;
frost$core$Int* _4;
frost$core$Int* _7;
frost$core$Int _8;
frost$core$Int64 _9;
int64_t _10;
frost$core$Object** _11;
frost$core$Object*** _12;
frost$core$Int _15;
frost$collections$CollectionView* _16;
$fn3 _17;
frost$core$Int _18;
frost$core$Bit _19;
frost$core$Range$LTfrost$core$Int$GT _20;
frost$core$Int _21;
frost$core$Int _23;
frost$core$Bit _24;
bool _25;
frost$core$Int _26;
int64_t _28;
int64_t _29;
bool _30;
frost$core$Bit _31;
bool _32;
int64_t _34;
int64_t _35;
bool _36;
frost$core$Bit _37;
bool _38;
frost$core$Object*** _41;
frost$core$Object** _42;
frost$core$Int _43;
frost$core$Int64 _44;
frost$core$Int _45;
$fn4 _46;
frost$core$Object* _47;
frost$core$Object* _48;
frost$core$Object* _49;
int64_t _50;
frost$core$Object* _51;
frost$core$Object* _53;
frost$core$Object* _54;
frost$core$Object* _57;
frost$core$Int _60;
int64_t _61;
int64_t _62;
int64_t _63;
frost$core$Int _64;
int64_t _66;
int64_t _67;
bool _68;
frost$core$Bit _69;
bool _70;
int64_t _72;
int64_t _73;
bool _74;
frost$core$Bit _75;
bool _76;
int64_t _78;
int64_t _79;
int64_t _80;
frost$core$Int _81;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:44
_1 = ((frost$collections$CollectionView*) param1);
ITable* $tmp5 = _1->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_2 = $tmp5->methods[0];
_3 = _2(_1);
_4 = &param0->_count;
*_4 = _3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:45
_7 = &param0->_count;
_8 = *_7;
_9 = frost$core$Int64$init$frost$core$Int(_8);
_10 = _9.value;
_11 = ((frost$core$Object**) frostAlloc(_10 * sizeof(frost$core$Object*)));
_12 = &param0->data;
*_12 = _11;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:46
_15 = (frost$core$Int) {0u};
_16 = ((frost$collections$CollectionView*) param0);
ITable* $tmp6 = _16->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_17 = $tmp6->methods[0];
_18 = _17(_16);
_19 = (frost$core$Bit) {false};
_20 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_15, _18, _19);
_21 = _20.min;
*(&local0) = _21;
_23 = _20.max;
_24 = _20.inclusive;
_25 = _24.value;
_26 = (frost$core$Int) {1u};
if (_25) goto block4; else goto block5;
block4:;
_28 = _21.value;
_29 = _23.value;
_30 = _28 <= _29;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block1; else goto block2;
block5:;
_34 = _21.value;
_35 = _23.value;
_36 = _34 < _35;
_37 = (frost$core$Bit) {_36};
_38 = _37.value;
if (_38) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:47
_41 = &param0->data;
_42 = *_41;
_43 = *(&local0);
_44 = frost$core$Int64$init$frost$core$Int(_43);
_45 = *(&local0);
ITable* $tmp7 = param1->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp7 = $tmp7->next;
}
_46 = $tmp7->methods[0];
_47 = _46(param1, _45);
_48 = _47;
_49 = _48;
_50 = _44.value;
_51 = _49;
frost$core$Frost$ref$frost$core$Object$Q(_51);
_53 = _42[_50];
_54 = _53;
frost$core$Frost$unref$frost$core$Object$Q(_54);
_42[_50] = _49;
_57 = _47;
frost$core$Frost$unref$frost$core$Object$Q(_57);
_60 = *(&local0);
_61 = _23.value;
_62 = _60.value;
_63 = _61 - _62;
_64 = (frost$core$Int) {_63};
if (_25) goto block7; else goto block8;
block7:;
_66 = _64.value;
_67 = _26.value;
_68 = _66 >= _67;
_69 = (frost$core$Bit) {_68};
_70 = _69.value;
if (_70) goto block6; else goto block2;
block8:;
_72 = _64.value;
_73 = _26.value;
_74 = _72 > _73;
_75 = (frost$core$Bit) {_74};
_76 = _75.value;
if (_76) goto block6; else goto block2;
block6:;
_78 = _60.value;
_79 = _26.value;
_80 = _78 + _79;
_81 = (frost$core$Int) {_80};
*(&local0) = _81;
goto block1;
block2:;
return;

}
void org$frostlang$frostc$FixedArray$init$frost$unsafe$Pointer$LTorg$frostlang$frostc$FixedArray$T$GT$frost$core$Int(void* rawSelf, frost$core$Object** param1, frost$core$Int param2) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

frost$core$Object** _1;
frost$core$Object*** _2;
frost$core$Int* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:53
_1 = ((frost$core$Object**) param1);
_2 = &param0->data;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:54
_5 = &param0->_count;
*_5 = param2;
return;

}
org$frostlang$frostc$FixedArray* org$frostlang$frostc$FixedArray$from$frost$collections$Array$LTorg$frostlang$frostc$FixedArray$T$GT$R$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$T$GT(frost$collections$Array* param0) {

frost$core$Object*** _1;
frost$core$Object** _2;
frost$core$Object** _3;
frost$core$Int* _4;
frost$core$Int _5;
frost$core$Int64 _6;
frost$core$Int* _7;
frost$core$Int _8;
frost$core$Int64 _9;
int64_t _10;
int64_t _11;
frost$core$Object** _12;
frost$core$Object** _13;
frost$core$Object*** _14;
frost$core$Object* _17;
org$frostlang$frostc$FixedArray* _18;
frost$core$Object* _20;
frost$core$Class** _21;
frost$core$Class* _22;
frost$core$Object* _23;
frost$core$Class** _25;
frost$core$Class* _26;
frost$core$Object* _27;
frost$core$Class** _29;
frost$core$Object* _31;
frost$core$Int _34;
frost$core$Int* _35;
frost$core$Object* _38;
org$frostlang$frostc$FixedArray* _39;
frost$core$Object* _40;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:67
_1 = &param0->data;
_2 = *_1;
_3 = ((frost$core$Object**) _2);
_4 = &param0->capacity;
_5 = *_4;
_6 = frost$core$Int64$init$frost$core$Int(_5);
_7 = &param0->_count;
_8 = *_7;
_9 = frost$core$Int64$init$frost$core$Int(_8);
_10 = _6.value;
_11 = _9.value;
_12 = (frost$core$Object**) frostRealloc(_3, _10 * sizeof(frost$core$Object*), _11 * sizeof(frost$core$Object*));
_13 = ((frost$core$Object**) _12);
_14 = &param0->data;
*_14 = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:68
_17 = ((frost$core$Object*) param0);
_18 = (org$frostlang$frostc$FixedArray*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray), (frost$core$Class*) &org$frostlang$frostc$FixedArray$class);
org$frostlang$frostc$FixedArray$init(_18);
_20 = ((frost$core$Object*) _18);
_21 = &_20->$class;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$ref$frost$core$Object$Q(_23);
_25 = &_17->$class;
_26 = *_25;
_27 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_27);
_29 = &_17->$class;
*_29 = _22;
_31 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:69
_34 = (frost$core$Int) {18446744073709551615u};
_35 = &param0->capacity;
*_35 = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:70
_38 = ((frost$core$Object*) param0);
_39 = ((org$frostlang$frostc$FixedArray*) _38);
_40 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_40);
return _39;

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
frost$core$Object*** _27;
frost$core$Object** _28;
frost$core$Int _29;
frost$core$Int64 _30;
int64_t _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _35;
frost$core$Int _39;
int64_t _40;
int64_t _41;
int64_t _42;
frost$core$Int _43;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
int64_t _51;
int64_t _52;
bool _53;
frost$core$Bit _54;
bool _55;
int64_t _57;
int64_t _58;
int64_t _59;
frost$core$Int _60;
frost$core$Object*** _64;
frost$core$Object** _65;
frost$core$Object* _68;
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
_27 = &param0->data;
_28 = *_27;
_29 = *(&local0);
_30 = frost$core$Int64$init$frost$core$Int(_29);
_31 = _30.value;
_32 = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = _28[_31];
_35 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_35);
_28[_31] = ((frost$core$Object*) NULL);
_39 = *(&local0);
_40 = _9.value;
_41 = _39.value;
_42 = _40 - _41;
_43 = (frost$core$Int) {_42};
if (_11) goto block7; else goto block8;
block7:;
_45 = _43.value;
_46 = _12.value;
_47 = _45 >= _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block6; else goto block2;
block8:;
_51 = _43.value;
_52 = _12.value;
_53 = _51 > _52;
_54 = (frost$core$Bit) {_53};
_55 = _54.value;
if (_55) goto block6; else goto block2;
block6:;
_57 = _39.value;
_58 = _12.value;
_59 = _57 + _58;
_60 = (frost$core$Int) {_59};
*(&local0) = _60;
goto block1;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:78
_64 = &param0->data;
_65 = *_64;
frostFree(_65);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:74
_68 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_68);
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
frost$core$Object*** _45;
frost$core$Object** _46;
frost$core$Int64 _47;
int64_t _48;
frost$core$Object* _49;
frost$core$Object* _50;
frost$core$Object* _51;
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
_45 = &param0->data;
_46 = *_45;
_47 = frost$core$Int64$init$frost$core$Int(param1);
_48 = _47.value;
_49 = _46[_48];
_50 = _49;
_51 = _50;
frost$core$Frost$ref$frost$core$Object$Q(_51);
return _50;

}
frost$core$Int org$frostlang$frostc$FixedArray$get_count$R$frost$core$Int(void* rawSelf) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:89
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$collections$Iterator* org$frostlang$frostc$FixedArray$get_iterator$R$frost$collections$Iterator$LTorg$frostlang$frostc$FixedArray$T$GT(void* rawSelf) {
org$frostlang$frostc$FixedArray* param0 = (org$frostlang$frostc$FixedArray*) rawSelf;

org$frostlang$frostc$FixedArray$FixedArrayIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:94
_1 = (org$frostlang$frostc$FixedArray$FixedArrayIterator*) frostObjectAlloc(sizeof(org$frostlang$frostc$FixedArray$FixedArrayIterator), (frost$core$Class*) &org$frostlang$frostc$FixedArray$FixedArrayIterator$class);
org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

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
$fn17 _25;
frost$collections$Iterator* _26;
$fn18 _28;
frost$core$Bit _29;
bool _30;
$fn19 _33;
frost$core$Object* _34;
frost$core$Object* _35;
frost$core$Object* _36;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$MutableString* _43;
frost$core$String* _44;
frost$core$Object* _47;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$Object* _54;
frost$core$Bit _55;
bool _56;
frost$core$MutableString* _59;
frost$core$Object* _60;
frost$core$Object* _61;
$fn20 _64;
frost$core$String* _65;
frost$core$Object* _67;
frost$core$MutableString* _73;
frost$core$Object* _76;
frost$core$Object* _78;
frost$core$Object* _79;
frost$core$Object* _83;
frost$core$MutableString* _86;
frost$core$MutableString* _89;
frost$core$String* _90;
frost$core$Object* _91;
frost$core$Object* _93;
frost$core$String* _95;
frost$core$Object* _96;
frost$core$MutableString* _99;
frost$core$Object* _100;
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
ITable* $tmp24 = _24->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp24 = $tmp24->next;
}
_25 = $tmp24->methods[0];
_26 = _25(_24);
goto block1;
block1:;
ITable* $tmp25 = _26->$class->itable;
while ($tmp25->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp25 = $tmp25->next;
}
_28 = $tmp25->methods[0];
_29 = _28(_26);
_30 = _29.value;
if (_30) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp26 = _26->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_33 = $tmp26->methods[1];
_34 = _33(_26);
_35 = _34;
_36 = _35;
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = *(&local2);
_39 = _38;
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local2) = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:103
_43 = *(&local0);
_44 = *(&local1);
frost$core$MutableString$append$frost$core$String(_43, _44);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:104
_47 = ((frost$core$Object*) &$s27);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = *(&local1);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local1) = &$s28;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:105
_54 = *(&local2);
_55 = (frost$core$Bit) {true};
_56 = _55.value;
if (_56) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:106
_59 = *(&local0);
_60 = *(&local2);
_61 = _60;
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from FixedArray.frost:106:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_64 = ($fn29) _61->$class->vtable[0];
_65 = _64(_61);
frost$core$MutableString$append$frost$core$String(_59, _65);
_67 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_67);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:109
_73 = *(&local0);
frost$core$MutableString$append$frost$core$String(_73, &$s30);
goto block5;
block5:;
_76 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_76);
_78 = *(&local2);
_79 = _78;
frost$core$Frost$unref$frost$core$Object$Q(_79);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_83 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_83);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:112
_86 = *(&local0);
frost$core$MutableString$append$frost$core$String(_86, &$s31);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/FixedArray.frost:113
_89 = *(&local0);
_90 = frost$core$MutableString$finish$R$frost$core$String(_89);
_91 = ((frost$core$Object*) _90);
frost$core$Frost$ref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _90);
frost$core$Frost$unref$frost$core$Object$Q(_93);
_95 = *(&local1);
_96 = ((frost$core$Object*) _95);
frost$core$Frost$unref$frost$core$Object$Q(_96);
*(&local1) = ((frost$core$String*) NULL);
_99 = *(&local0);
_100 = ((frost$core$Object*) _99);
frost$core$Frost$unref$frost$core$Object$Q(_100);
*(&local0) = ((frost$core$MutableString*) NULL);
return _90;

}

