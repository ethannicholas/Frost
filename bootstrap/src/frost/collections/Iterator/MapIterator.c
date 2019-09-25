#include "frost/collections/Iterator/MapIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/unsafe/Pointer.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim(frost$collections$Iterator$MapIterator* p0) {
    frost$core$Object* result = frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$MapIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$MapIterator$class_type frost$collections$Iterator$MapIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$MapIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$MapIterator$cleanup, frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U$shim} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn10)(frost$core$Object*);
typedef frost$core$Object* (*$fn11)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72", 38, 2027583847227295508, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x55", 118, -4698360555464701590, NULL };

void frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP(void* rawSelf, frost$collections$Iterator* param1, frost$core$MutableMethod* param2) {
frost$collections$Iterator$MapIterator* param0 = (frost$collections$Iterator$MapIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$Iterator** _3;
frost$collections$Iterator* _4;
frost$core$Object* _5;
frost$collections$Iterator** _7;
frost$core$Object* _10;
frost$core$MutableMethod** _12;
frost$core$MutableMethod* _13;
frost$core$Object* _14;
frost$core$MutableMethod** _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:120
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->base;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->base;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:121
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->map;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->map;
*_16 = param2;
return;

}
frost$core$Bit frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$Iterator$MapIterator* param0 = (frost$collections$Iterator$MapIterator*) rawSelf;

frost$collections$Iterator** _1;
frost$collections$Iterator* _2;
$fn2 _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:126
_1 = &param0->base;
_2 = *_1;
ITable* $tmp3 = _2->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
_3 = $tmp3->methods[0];
_4 = _3(_2);
return _4;

}
frost$core$Object* frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U(void* rawSelf) {
frost$collections$Iterator$MapIterator* param0 = (frost$collections$Iterator$MapIterator*) rawSelf;

frost$core$Object* local0 = NULL;
frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$MutableMethod** _15;
frost$core$MutableMethod* _16;
frost$collections$Iterator** _17;
frost$collections$Iterator* _18;
$fn5 _19;
frost$core$Object* _20;
frost$core$Object* _21;
frost$core$MutableMethod* _22;
int64_t* _23;
int64_t _24;
frost$core$Object** _25;
frost$core$Object* _26;
bool _27;
frost$unsafe$Pointer _29;
frost$core$Object* _30;
frost$unsafe$Pointer _33;
frost$core$Object* _34;
frost$core$Object* _37;
frost$core$Object* _38;
frost$core$Object* _40;
frost$core$Object* _42;
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
_11 = (frost$core$Int) {130u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _11, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:131
_15 = &param0->map;
_16 = *_15;
_17 = &param0->base;
_18 = *_17;
ITable* $tmp9 = _18->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
_19 = $tmp9->methods[1];
_20 = _19(_18);
_21 = _20;
_22 = _16;
_23 = &_22->pointer;
_24 = *_23;
_25 = &_22->target;
_26 = *_25;
_27 = _26 != ((frost$core$Object*) NULL);
if (_27) goto block4; else goto block5;
block5:;
_29 = (frost$unsafe$Pointer) {_24};
_30 = (($fn10) _29.value)(_21);
*(&local0) = _30;
goto block6;
block4:;
_33 = (frost$unsafe$Pointer) {_24};
_34 = (($fn11) _33.value)(_26, _21);
*(&local0) = _34;
goto block6;
block6:;
_37 = *(&local0);
_38 = _37;
frost$core$Frost$ref$frost$core$Object$Q(_38);
_40 = _37;
frost$core$Frost$unref$frost$core$Object$Q(_40);
_42 = _20;
frost$core$Frost$unref$frost$core$Object$Q(_42);
return _37;

}
void frost$collections$Iterator$MapIterator$cleanup(void* rawSelf) {
frost$collections$Iterator$MapIterator* param0 = (frost$collections$Iterator$MapIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$Iterator** _3;
frost$collections$Iterator* _4;
frost$core$Object* _5;
frost$core$MutableMethod** _7;
frost$core$MutableMethod* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:114
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->base;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->map;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}

