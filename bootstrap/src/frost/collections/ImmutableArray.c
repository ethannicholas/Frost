#include "frost/collections/ImmutableArray.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/unsafe/NewPointer.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "frost/core/Int64.h"
#include "frost/collections/Array.h"
#include "frost/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Int frost$collections$ImmutableArray$get_count$R$frost$core$Int$shim(frost$collections$ImmutableArray* p0) {
    frost$core$Int result = frost$collections$ImmutableArray$get_count$R$frost$core$Int(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T$shim(frost$collections$ImmutableArray* p0, frost$core$Int p1) {
    frost$core$Immutable* result = frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T(p0, p1);

    return ((frost$core$Object*) result);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim(frost$collections$ImmutableArray* p0) {
    frost$collections$Iterator* result = frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$collections$ImmutableArray$get_asString$R$frost$core$String$shim(frost$collections$ImmutableArray* p0) {
    frost$core$String* result = frost$collections$ImmutableArray$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$collections$ImmutableArray$cleanup$shim(frost$collections$ImmutableArray* p0) {
    frost$collections$ImmutableArray$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$ImmutableArray$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$collections$ImmutableArray$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$collections$ImmutableArray$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$CollectionView, { frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ImmutableArray$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$ListView, { frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim} };

static frost$core$String $s1;
frost$collections$ImmutableArray$class_type frost$collections$ImmutableArray$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$Iterable, { frost$collections$ImmutableArray$get_asString$R$frost$core$String$shim, frost$collections$ImmutableArray$cleanup$shim, frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T$shim, frost$collections$ImmutableArray$get_count$R$frost$core$Int$shim, frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim} };

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

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 7816932152053439325, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -9038773420437697548, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x54", 126, 1506574532104415367, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -9038773420437697548, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$ImmutableArray$init(void* rawSelf) {
frost$collections$ImmutableArray* param0 = (frost$collections$ImmutableArray*) rawSelf;

frost$unsafe$NewPointer local0;
frost$unsafe$NewPointer local1;
frost$core$Int _1;
frost$core$Int* _2;
frost$core$Int _5;
int64_t _8;
int64_t _9;
int64_t _10;
int64_t* _13;
frost$unsafe$NewPointer _15;
frost$unsafe$NewPointer _18;
frost$unsafe$NewPointer* _20;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:39
_1 = (frost$core$Int) {0u};
_2 = &param0->_count;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:40
_5 = (frost$core$Int) {0u};
// begin inline call to method frost.unsafe.NewPointer.alloc(count:frost.core.Int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from ImmutableArray.frost:40:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:49
_8 = _5.value;
_9 = _8 * 16u;
_10 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_9);
// begin inline call to frost.unsafe.NewPointer.init(value:builtin_int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from NewPointer.frost:49:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_13 = &(&local1)->value;
*_13 = _10;
_15 = *(&local1);
*(&local0) = _15;
_18 = *(&local0);
_20 = &param0->data;
*_20 = _18;
return;

}
void frost$collections$ImmutableArray$init$frost$collections$ListView$LTfrost$collections$ImmutableArray$T$GT(void* rawSelf, frost$collections$ListView* param1) {
frost$collections$ImmutableArray* param0 = (frost$collections$ImmutableArray*) rawSelf;

frost$unsafe$NewPointer local0;
frost$unsafe$NewPointer local1;
frost$core$Int local2;
frost$collections$CollectionView* _1;
$fn2 _2;
frost$core$Int _3;
frost$core$Int* _4;
frost$core$Int* _7;
frost$core$Int _8;
int64_t _11;
int64_t _12;
int64_t _13;
int64_t* _16;
frost$unsafe$NewPointer _18;
frost$unsafe$NewPointer _21;
frost$unsafe$NewPointer* _23;
frost$core$Int _26;
frost$collections$CollectionView* _27;
$fn3 _28;
frost$core$Int _29;
frost$core$Bit _30;
frost$core$Range$LTfrost$core$Int$GT _31;
frost$core$Int _32;
frost$core$Int _34;
frost$core$Bit _35;
bool _36;
frost$core$Int _37;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
bool _43;
int64_t _45;
int64_t _46;
bool _47;
frost$core$Bit _48;
bool _49;
frost$unsafe$NewPointer* _52;
frost$unsafe$NewPointer _53;
int64_t _54;
frost$core$Int _55;
frost$core$Int64 _56;
frost$core$Int _57;
$fn4 _58;
frost$core$Object* _59;
frost$core$Immutable* _60;
frost$core$Immutable* _61;
int64_t _62;
frost$core$Object* _63;
frost$core$Immutable* _65;
frost$core$Object* _66;
frost$core$Object* _69;
frost$core$Int _72;
int64_t _73;
int64_t _74;
int64_t _75;
frost$core$Int _76;
int64_t _78;
int64_t _79;
bool _80;
frost$core$Bit _81;
bool _82;
int64_t _84;
int64_t _85;
bool _86;
frost$core$Bit _87;
bool _88;
int64_t _90;
int64_t _91;
int64_t _92;
frost$core$Int _93;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:44
_1 = ((frost$collections$CollectionView*) param1);
ITable* $tmp5 = _1->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp5 = $tmp5->next;
}
_2 = $tmp5->methods[0];
_3 = _2(_1);
_4 = &param0->_count;
*_4 = _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:45
_7 = &param0->_count;
_8 = *_7;
// begin inline call to method frost.unsafe.NewPointer.alloc(count:frost.core.Int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from ImmutableArray.frost:45:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:49
_11 = _8.value;
_12 = _11 * 16u;
_13 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_12);
// begin inline call to frost.unsafe.NewPointer.init(value:builtin_int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from NewPointer.frost:49:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_16 = &(&local1)->value;
*_16 = _13;
_18 = *(&local1);
*(&local0) = _18;
_21 = *(&local0);
_23 = &param0->data;
*_23 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:46
_26 = (frost$core$Int) {0u};
_27 = ((frost$collections$CollectionView*) param0);
ITable* $tmp6 = _27->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_28 = $tmp6->methods[0];
_29 = _28(_27);
_30 = (frost$core$Bit) {false};
_31 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_26, _29, _30);
_32 = _31.min;
*(&local2) = _32;
_34 = _31.max;
_35 = _31.inclusive;
_36 = _35.value;
_37 = (frost$core$Int) {1u};
if (_36) goto block6; else goto block7;
block6:;
_39 = _32.value;
_40 = _34.value;
_41 = _39 <= _40;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block3; else goto block4;
block7:;
_45 = _32.value;
_46 = _34.value;
_47 = _45 < _46;
_48 = (frost$core$Bit) {_47};
_49 = _48.value;
if (_49) goto block3; else goto block4;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:47
_52 = &param0->data;
_53 = *_52;
_54 = _53.value;
_55 = *(&local2);
_56 = frost$core$Int64$init$frost$core$Int(_55);
_57 = *(&local2);
ITable* $tmp7 = param1->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp7 = $tmp7->next;
}
_58 = $tmp7->methods[0];
_59 = _58(param1, _57);
_60 = ((frost$core$Immutable*) _59);
_61 = _60;
_62 = _56.value;
_63 = ((frost$core$Object*) _61);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = ((frost$core$Immutable**)_54)[_62];
_66 = ((frost$core$Object*) _65);
frost$core$Frost$unref$frost$core$Object$Q(_66);
((frost$core$Immutable**)_54)[_62] = _61;
_69 = _59;
frost$core$Frost$unref$frost$core$Object$Q(_69);
_72 = *(&local2);
_73 = _34.value;
_74 = _72.value;
_75 = _73 - _74;
_76 = (frost$core$Int) {_75};
if (_36) goto block9; else goto block10;
block9:;
_78 = _76.value;
_79 = _37.value;
_80 = _78 >= _79;
_81 = (frost$core$Bit) {_80};
_82 = _81.value;
if (_82) goto block8; else goto block4;
block10:;
_84 = _76.value;
_85 = _37.value;
_86 = _84 > _85;
_87 = (frost$core$Bit) {_86};
_88 = _87.value;
if (_88) goto block8; else goto block4;
block8:;
_90 = _72.value;
_91 = _37.value;
_92 = _90 + _91;
_93 = (frost$core$Int) {_92};
*(&local2) = _93;
goto block3;
block4:;
return;

}
void frost$collections$ImmutableArray$init$frost$unsafe$NewPointer$LTfrost$collections$ImmutableArray$T$GT$frost$core$Int(void* rawSelf, frost$unsafe$NewPointer param1, frost$core$Int param2) {
frost$collections$ImmutableArray* param0 = (frost$collections$ImmutableArray*) rawSelf;

frost$unsafe$NewPointer* _1;
frost$core$Int* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:53
_1 = &param0->data;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:54
_4 = &param0->_count;
*_4 = param2;
return;

}
frost$collections$ImmutableArray* frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(frost$collections$Array* param0) {

frost$unsafe$NewPointer local0;
frost$unsafe$NewPointer local1;
frost$unsafe$NewPointer* _1;
frost$unsafe$NewPointer _2;
frost$core$Int* _3;
frost$core$Int _4;
frost$core$Int* _5;
frost$core$Int _6;
int64_t _9;
int64_t _10;
int64_t _11;
int64_t _12;
int64_t _13;
int64_t _14;
int64_t* _17;
frost$unsafe$NewPointer _19;
frost$unsafe$NewPointer _22;
frost$unsafe$NewPointer* _24;
frost$core$Object* _27;
frost$collections$ImmutableArray* _28;
frost$core$Object* _30;
frost$core$Class** _31;
frost$core$Class* _32;
frost$core$Object* _33;
frost$core$Class** _35;
frost$core$Class* _36;
frost$core$Object* _37;
frost$core$Class** _39;
frost$core$Object* _41;
frost$core$Int _44;
frost$core$Int* _45;
frost$core$Object* _48;
frost$collections$ImmutableArray* _49;
frost$core$Object* _50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:67
_1 = &param0->data;
_2 = *_1;
_3 = &param0->capacity;
_4 = *_3;
_5 = &param0->_count;
_6 = *_5;
// begin inline call to method frost.unsafe.NewPointer.realloc(oldCount:frost.core.Int, newCount:frost.core.Int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from ImmutableArray.frost:67:33
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:93
_9 = _2.value;
_10 = _4.value;
_11 = _10 * 16u;
_12 = _6.value;
_13 = _12 * 16u;
_14 = frost$core$Frost$realloc$builtin_int$builtin_int$builtin_int$R$builtin_int(_9, _11, _13);
// begin inline call to frost.unsafe.NewPointer.init(value:builtin_int):frost.unsafe.NewPointer<frost.unsafe.NewPointer.T> from NewPointer.frost:93:29
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:31
_17 = &(&local1)->value;
*_17 = _14;
_19 = *(&local1);
*(&local0) = _19;
_22 = *(&local0);
_24 = &param0->data;
*_24 = _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:68
_27 = ((frost$core$Object*) param0);
_28 = (frost$collections$ImmutableArray*) frostObjectAlloc(sizeof(frost$collections$ImmutableArray), (frost$core$Class*) &frost$collections$ImmutableArray$class);
frost$collections$ImmutableArray$init(_28);
_30 = ((frost$core$Object*) _28);
_31 = &_30->$class;
_32 = *_31;
_33 = ((frost$core$Object*) _32);
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = &_27->$class;
_36 = *_35;
_37 = ((frost$core$Object*) _36);
frost$core$Frost$unref$frost$core$Object$Q(_37);
_39 = &_27->$class;
*_39 = _32;
_41 = ((frost$core$Object*) _28);
frost$core$Frost$unref$frost$core$Object$Q(_41);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:69
_44 = (frost$core$Int) {18446744073709551615u};
_45 = &param0->capacity;
*_45 = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:70
_48 = ((frost$core$Object*) param0);
_49 = ((frost$collections$ImmutableArray*) _48);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$ref$frost$core$Object$Q(_50);
return _49;

}
void frost$collections$ImmutableArray$cleanup(void* rawSelf) {
frost$collections$ImmutableArray* param0 = (frost$collections$ImmutableArray*) rawSelf;

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
frost$unsafe$NewPointer* _27;
frost$unsafe$NewPointer _28;
int64_t _29;
frost$core$Int _30;
frost$core$Int64 _31;
int64_t _32;
frost$core$Object* _33;
frost$core$Immutable* _35;
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
frost$unsafe$NewPointer* _65;
frost$unsafe$NewPointer _66;
int64_t _69;
frost$core$Immutable* _73;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:75
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:76
_27 = &param0->data;
_28 = *_27;
_29 = _28.value;
_30 = *(&local0);
_31 = frost$core$Int64$init$frost$core$Int(_30);
_32 = _31.value;
_33 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_33);
_35 = ((frost$core$Immutable**)_29)[_32];
_36 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_36);
((frost$core$Immutable**)_29)[_32] = ((frost$core$Immutable*) NULL);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:78
_65 = &param0->data;
_66 = *_65;
// begin inline call to method frost.unsafe.NewPointer.destroy() from ImmutableArray.frost:78:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/NewPointer.frost:119
_69 = _66.value;
frost$core$Frost$destroy$builtin_int(_69);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:74
_73 = ((frost$core$Immutable*) param0);
frost$core$Immutable$cleanup(_73);
return;

}
frost$core$Immutable* frost$collections$ImmutableArray$$IDX$frost$core$Int$R$frost$collections$ImmutableArray$T(void* rawSelf, frost$core$Int param1) {
frost$collections$ImmutableArray* param0 = (frost$collections$ImmutableArray*) rawSelf;

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
frost$unsafe$NewPointer* _45;
frost$unsafe$NewPointer _46;
int64_t _47;
frost$core$Int64 _48;
int64_t _49;
frost$core$Immutable* _50;
frost$core$Immutable* _51;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:83
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:84
_45 = &param0->data;
_46 = *_45;
_47 = _46.value;
_48 = frost$core$Int64$init$frost$core$Int(param1);
_49 = _48.value;
_50 = ((frost$core$Immutable**)_47)[_49];
_51 = _50;
_52 = ((frost$core$Object*) _51);
frost$core$Frost$ref$frost$core$Object$Q(_52);
return _51;

}
frost$core$Int frost$collections$ImmutableArray$get_count$R$frost$core$Int(void* rawSelf) {
frost$collections$ImmutableArray* param0 = (frost$collections$ImmutableArray*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:89
_1 = &param0->_count;
_2 = *_1;
return _2;

}
frost$collections$Iterator* frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT(void* rawSelf) {
frost$collections$ImmutableArray* param0 = (frost$collections$ImmutableArray*) rawSelf;

frost$collections$ImmutableArray$ImmutableArrayIterator* _1;
frost$collections$Iterator* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:94
_1 = (frost$collections$ImmutableArray$ImmutableArrayIterator*) frostObjectAlloc(sizeof(frost$collections$ImmutableArray$ImmutableArrayIterator), (frost$core$Class*) &frost$collections$ImmutableArray$ImmutableArrayIterator$class);
frost$collections$ImmutableArray$ImmutableArrayIterator$init$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$ImmutableArrayIterator$T$GT(_1, param0);
_3 = ((frost$collections$Iterator*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$String* frost$collections$ImmutableArray$get_asString$R$frost$core$String(void* rawSelf) {
frost$collections$ImmutableArray* param0 = (frost$collections$ImmutableArray*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Immutable* local2 = NULL;
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
frost$core$Immutable* _35;
frost$core$Object* _36;
frost$core$Immutable* _38;
frost$core$Object* _39;
frost$core$MutableString* _43;
frost$core$String* _44;
frost$core$Object* _47;
frost$core$String* _49;
frost$core$Object* _50;
frost$core$Immutable* _54;
frost$core$Object* _55;
bool _56;
frost$core$Bit _57;
bool _58;
frost$core$MutableString* _61;
frost$core$Immutable* _62;
frost$core$Object* _63;
$fn20 _66;
frost$core$String* _67;
frost$core$Object* _69;
frost$core$MutableString* _75;
frost$core$Object* _78;
frost$core$Immutable* _80;
frost$core$Object* _81;
frost$core$Object* _85;
frost$core$MutableString* _88;
frost$core$MutableString* _91;
frost$core$String* _92;
frost$core$Object* _93;
frost$core$Object* _95;
frost$core$String* _97;
frost$core$Object* _98;
frost$core$MutableString* _101;
frost$core$Object* _102;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:99
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:100
_13 = *(&local0);
frost$core$MutableString$append$frost$core$String(_13, &$s21);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:101
*(&local1) = ((frost$core$String*) NULL);
_17 = ((frost$core$Object*) &$s22);
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local1);
_20 = ((frost$core$Object*) _19);
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local1) = &$s23;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:102
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
*(&local2) = ((frost$core$Immutable*) NULL);
ITable* $tmp26 = _26->$class->itable;
while ($tmp26->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp26 = $tmp26->next;
}
_33 = $tmp26->methods[1];
_34 = _33(_26);
_35 = ((frost$core$Immutable*) _34);
_36 = ((frost$core$Object*) _35);
frost$core$Frost$ref$frost$core$Object$Q(_36);
_38 = *(&local2);
_39 = ((frost$core$Object*) _38);
frost$core$Frost$unref$frost$core$Object$Q(_39);
*(&local2) = _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:103
_43 = *(&local0);
_44 = *(&local1);
frost$core$MutableString$append$frost$core$String(_43, _44);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:104
_47 = ((frost$core$Object*) &$s27);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = *(&local1);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local1) = &$s28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:106
_54 = *(&local2);
_55 = ((frost$core$Object*) _54);
_56 = _55 != NULL;
_57 = (frost$core$Bit) {_56};
_58 = _57.value;
if (_58) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:107
_61 = *(&local0);
_62 = *(&local2);
_63 = ((frost$core$Object*) _62);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ImmutableArray.frost:107:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_66 = ($fn29) _63->$class->vtable[0];
_67 = _66(_63);
frost$core$MutableString$append$frost$core$String(_61, _67);
_69 = ((frost$core$Object*) _67);
frost$core$Frost$unref$frost$core$Object$Q(_69);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:110
_75 = *(&local0);
frost$core$MutableString$append$frost$core$String(_75, &$s30);
goto block5;
block5:;
_78 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_78);
_80 = *(&local2);
_81 = ((frost$core$Object*) _80);
frost$core$Frost$unref$frost$core$Object$Q(_81);
*(&local2) = ((frost$core$Immutable*) NULL);
goto block1;
block3:;
_85 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_85);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:113
_88 = *(&local0);
frost$core$MutableString$append$frost$core$String(_88, &$s31);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:114
_91 = *(&local0);
_92 = frost$core$MutableString$finish$R$frost$core$String(_91);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$ref$frost$core$Object$Q(_93);
_95 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_95);
_97 = *(&local1);
_98 = ((frost$core$Object*) _97);
frost$core$Frost$unref$frost$core$Object$Q(_98);
*(&local1) = ((frost$core$String*) NULL);
_101 = *(&local0);
_102 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_102);
*(&local0) = ((frost$core$MutableString*) NULL);
return _92;

}

