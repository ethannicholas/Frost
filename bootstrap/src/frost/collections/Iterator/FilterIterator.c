#include "frost/collections/Iterator/FilterIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

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
typedef frost$core$Bit (*$fn6)(frost$core$Object*);
typedef frost$core$Bit (*$fn7)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn10)(frost$core$Object*);
typedef frost$core$Bit (*$fn11)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Bit (*$fn12)(frost$collections$Iterator*);
typedef void (*$fn13)(frost$collections$Iterator$FilterIterator*);
typedef void (*$fn17)(frost$collections$Iterator$FilterIterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72", 41, 7745582472907368992, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x46\x69\x6c\x74\x65\x72\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 124, -4977101908855608081, NULL };

void frost$collections$Iterator$FilterIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$FilterIterator$T$GT$$LPfrost$collections$Iterator$FilterIterator$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$Iterator$FilterIterator* param0, frost$collections$Iterator* param1, frost$core$MutableMethod* param2) {

frost$collections$Iterator$FilterIterator* _1;
frost$core$Object* _2;
frost$collections$Iterator** _4;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$collections$Iterator** _8;
frost$collections$Iterator$FilterIterator* _11;
frost$core$Object* _12;
frost$core$MutableMethod** _14;
frost$core$MutableMethod* _15;
frost$core$Object* _16;
frost$core$MutableMethod** _18;
frost$collections$Iterator$FilterIterator* _21;
$fn2 _22;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:18
_1 = param0;
_2 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->base;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->base;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:19
_11 = param0;
_12 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_11->filter;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_11->filter;
*_18 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:20
_21 = param0;
_22 = ($fn3) _21->$class->vtable[2];
_22(_21);
return;

}
void frost$collections$Iterator$FilterIterator$getNext(frost$collections$Iterator$FilterIterator* param0) {

frost$core$Bit local0;
frost$collections$Iterator$FilterIterator* _3;
frost$collections$Iterator** _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _6;
$fn4 _7;
frost$core$Bit _8;
bool _9;
frost$collections$Iterator$FilterIterator* _12;
frost$core$Bit _13;
frost$core$Bit* _14;
frost$collections$Iterator$FilterIterator* _19;
frost$collections$Iterator$FilterIterator* _20;
frost$collections$Iterator** _21;
frost$collections$Iterator* _22;
frost$collections$Iterator* _23;
$fn5 _24;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object* _27;
frost$core$Object* _28;
frost$core$Object** _30;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object** _34;
frost$core$Object* _36;
frost$collections$Iterator$FilterIterator* _39;
frost$core$MutableMethod** _40;
frost$core$MutableMethod* _41;
frost$collections$Iterator$FilterIterator* _42;
frost$core$Object** _43;
frost$core$Object* _44;
frost$core$Object* _45;
frost$core$MutableMethod* _46;
frost$core$Int8** _47;
frost$core$Int8* _48;
frost$core$Object** _49;
frost$core$Object* _50;
bool _51;
$fn6 _53;
frost$core$Bit _54;
$fn7 _57;
frost$core$Bit _58;
frost$core$Bit _61;
bool _64;
bool _65;
frost$core$Bit _66;
bool _68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:24
goto block1;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:25
_3 = param0;
_4 = &_3->base;
_5 = *_4;
_6 = _5;
ITable* $tmp8 = _6->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp8 = $tmp8->next;
}
_7 = $tmp8->methods[0];
_8 = _7(_6);
_9 = _8.value;
if (_9) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:26
_12 = param0;
_13 = (frost$core$Bit) {true};
_14 = &_12->_done;
*_14 = _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:27
return;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:29
_19 = param0;
_20 = param0;
_21 = &_20->base;
_22 = *_21;
_23 = _22;
ITable* $tmp9 = _23->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
_24 = $tmp9->methods[1];
_25 = _24(_23);
_26 = _25;
_27 = _26;
_28 = _27;
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = &_19->nextValue;
_31 = *_30;
_32 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_32);
_34 = &_19->nextValue;
*_34 = _27;
_36 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_36);
_39 = param0;
_40 = &_39->filter;
_41 = *_40;
_42 = param0;
_43 = &_42->nextValue;
_44 = *_43;
_45 = _44;
_46 = _41;
_47 = &_46->pointer;
_48 = *_47;
_49 = &_46->target;
_50 = *_49;
_51 = _50 != ((frost$core$Object*) NULL);
if (_51) goto block6; else goto block7;
block7:;
_53 = (($fn10) _48);
_54 = _53(_45);
*(&local0) = _54;
goto block8;
block6:;
_57 = (($fn11) _48);
_58 = _57(_50, _45);
*(&local0) = _58;
goto block8;
block8:;
_61 = *(&local0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:31:19
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
_64 = _61.value;
_65 = !_64;
_66 = (frost$core$Bit) {_65};
_68 = _66.value;
if (_68) goto block1; else goto block3;
block3:;
return;

}
frost$core$Bit frost$collections$Iterator$FilterIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$FilterIterator* param0) {

frost$collections$Iterator$FilterIterator* _1;
frost$core$Bit* _2;
frost$core$Bit _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:36
_1 = param0;
_2 = &_1->_done;
_3 = *_2;
return _3;

}
frost$core$Object* frost$collections$Iterator$FilterIterator$next$R$frost$collections$Iterator$FilterIterator$T(frost$collections$Iterator$FilterIterator* param0) {

frost$core$Object* local0 = NULL;
frost$collections$Iterator* _0;
$fn12 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Iterator$FilterIterator* _15;
frost$core$Object** _16;
frost$core$Object* _17;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$Object* _22;
frost$core$Object* _23;
frost$collections$Iterator$FilterIterator* _27;
$fn13 _28;
frost$core$Object* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _35;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp14 = _0->$class->itable;
while ($tmp14->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp14 = $tmp14->next;
}
_1 = $tmp14->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {40u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _11, &$s16);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:41
_15 = param0;
_16 = &_15->nextValue;
_17 = *_16;
_18 = _17;
*(&local0) = ((frost$core$Object*) NULL);
_20 = _18;
frost$core$Frost$ref$frost$core$Object$Q(_20);
_22 = *(&local0);
_23 = _22;
frost$core$Frost$unref$frost$core$Object$Q(_23);
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:42
_27 = param0;
_28 = ($fn17) _27->$class->vtable[2];
_28(_27);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:43
_31 = *(&local0);
_32 = _31;
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = *(&local0);
_35 = _34;
frost$core$Frost$unref$frost$core$Object$Q(_35);
*(&local0) = ((frost$core$Object*) NULL);
return _31;

}
void frost$collections$Iterator$FilterIterator$cleanup(frost$collections$Iterator$FilterIterator* param0) {

frost$core$Object* _1;
frost$collections$Iterator$FilterIterator* _3;
frost$collections$Iterator** _4;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$collections$Iterator$FilterIterator* _8;
frost$core$MutableMethod** _9;
frost$core$MutableMethod* _10;
frost$core$Object* _11;
frost$collections$Iterator$FilterIterator* _13;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object* _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:8
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->base;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->filter;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = param0;
_14 = &_13->nextValue;
_15 = *_14;
_16 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_16);
return;

}

