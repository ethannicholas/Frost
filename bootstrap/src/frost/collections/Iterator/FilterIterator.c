#include "frost/collections/Iterator/FilterIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T$shim(frost$collections$Iterator$FilterIterator* p0) {
    frost$core$Object* result = frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$FilterIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$FilterIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$FilterIterator$class_type frost$collections$Iterator$FilterIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$FilterIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$FilterIterator$cleanup, frost$collections$Iterator$FilterIterator$getNext, frost$collections$Iterator$FilterIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T$shim} };

typedef void (*$fn2)(frost$collections$Iterator$FilterIterator*);
typedef void (*$fn3)(frost$collections$Iterator$FilterIterator*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn8)(frost$core$Object*);
typedef frost$core$Bit (*$fn9)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn10)(frost$collections$Iterator*);
typedef void (*$fn11)(frost$collections$Iterator$FilterIterator*);
typedef void (*$fn15)(frost$collections$Iterator$FilterIterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72", 41, 7745582472907368992, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 124, -4977101908855608081, NULL };

void frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$collections$Iterator* param1, frost$core$MutableMethod* param2) {
frost$collections$Iterator$FilterIterator* param0 = (frost$collections$Iterator$FilterIterator*) rawSelf;

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
$fn2 _19;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:18
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->base;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->base;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:19
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->filter;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->filter;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:20
_19 = ($fn3) param0->$class->vtable[2];
_19(param0);
return;

}
void frost$collections$Iterator$FilterIterator$getNext(void* rawSelf) {
frost$collections$Iterator$FilterIterator* param0 = (frost$collections$Iterator$FilterIterator*) rawSelf;

frost$core$Bit local0;
frost$collections$Iterator** _3;
frost$collections$Iterator* _4;
$fn4 _5;
frost$core$Bit _6;
bool _7;
frost$core$Bit _10;
frost$core$Bit* _11;
frost$collections$Iterator** _16;
frost$collections$Iterator* _17;
$fn5 _18;
frost$core$Object* _19;
frost$core$Object* _20;
frost$core$Object* _21;
frost$core$Object* _22;
frost$core$Object** _24;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object** _28;
frost$core$Object* _30;
frost$core$MutableMethod** _33;
frost$core$MutableMethod* _34;
frost$core$Object** _35;
frost$core$Object* _36;
frost$core$Object* _37;
frost$core$MutableMethod* _38;
int64_t* _39;
int64_t _40;
frost$core$Object** _41;
frost$core$Object* _42;
bool _43;
frost$unsafe$Pointer _45;
frost$core$Bit _46;
frost$unsafe$Pointer _49;
frost$core$Bit _50;
frost$core$Bit _53;
bool _56;
bool _57;
frost$core$Bit _58;
bool _60;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:24
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:25
_3 = &param0->base;
_4 = *_3;
ITable* $tmp6 = _4->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_5 = $tmp6->methods[0];
_6 = _5(_4);
_7 = _6.value;
if (_7) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:26
_10 = (frost$core$Bit) {true};
_11 = &param0->_done;
*_11 = _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:27
return;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:29
_16 = &param0->base;
_17 = *_16;
ITable* $tmp7 = _17->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp7 = $tmp7->next;
}
_18 = $tmp7->methods[1];
_19 = _18(_17);
_20 = _19;
_21 = _20;
_22 = _21;
frost$core$Frost$ref$frost$core$Object$Q(_22);
_24 = &param0->nextValue;
_25 = *_24;
_26 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = &param0->nextValue;
*_28 = _21;
_30 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_30);
_33 = &param0->filter;
_34 = *_33;
_35 = &param0->nextValue;
_36 = *_35;
_37 = _36;
_38 = _34;
_39 = &_38->pointer;
_40 = *_39;
_41 = &_38->target;
_42 = *_41;
_43 = _42 != ((frost$core$Object*) NULL);
if (_43) goto block6; else goto block7;
block7:;
_45 = (frost$unsafe$Pointer) {_40};
_46 = (($fn8) _45.value)(_37);
*(&local0) = _46;
goto block8;
block6:;
_49 = (frost$unsafe$Pointer) {_40};
_50 = (($fn9) _49.value)(_42, _37);
*(&local0) = _50;
goto block8;
block8:;
_53 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:31:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_56 = _53.value;
_57 = !_56;
_58 = (frost$core$Bit) {_57};
_60 = _58.value;
if (_60) goto block1; else goto block3;
block3:;
return;

}
frost$core$Bit frost$collections$Iterator$FilterIterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$collections$Iterator$FilterIterator* param0 = (frost$collections$Iterator$FilterIterator*) rawSelf;

frost$core$Bit* _1;
frost$core$Bit _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:36
_1 = &param0->_done;
_2 = *_1;
return _2;

}
frost$core$Object* frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T(void* rawSelf) {
frost$collections$Iterator$FilterIterator* param0 = (frost$collections$Iterator$FilterIterator*) rawSelf;

frost$core$Object* local0 = NULL;
frost$collections$Iterator* _0;
$fn10 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Object** _15;
frost$core$Object* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _21;
frost$core$Object* _22;
$fn11 _26;
frost$core$Object* _29;
frost$core$Object* _30;
frost$core$Object* _32;
frost$core$Object* _33;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp12 = _0->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
_1 = $tmp12->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _11, &$s14);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:41
_15 = &param0->nextValue;
_16 = *_15;
_17 = _16;
*(&local0) = ((frost$core$Object*) NULL);
_19 = _17;
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = *(&local0);
_22 = _21;
frost$core$Frost$unref$frost$core$Object$Q(_22);
*(&local0) = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:42
_26 = ($fn15) param0->$class->vtable[2];
_26(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:43
_29 = *(&local0);
_30 = _29;
frost$core$Frost$ref$frost$core$Object$Q(_30);
_32 = *(&local0);
_33 = _32;
frost$core$Frost$unref$frost$core$Object$Q(_33);
*(&local0) = ((frost$core$Object*) NULL);
return _29;

}
void frost$collections$Iterator$FilterIterator$cleanup(void* rawSelf) {
frost$collections$Iterator$FilterIterator* param0 = (frost$collections$Iterator$FilterIterator*) rawSelf;

frost$core$Object* _1;
frost$collections$Iterator** _3;
frost$collections$Iterator* _4;
frost$core$Object* _5;
frost$core$MutableMethod** _7;
frost$core$MutableMethod* _8;
frost$core$Object* _9;
frost$core$Object** _11;
frost$core$Object* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->base;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->filter;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->nextValue;
_12 = *_11;
_13 = _12;
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

