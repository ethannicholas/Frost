#include "frost/collections/Iterator/MapIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

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
typedef frost$core$Object* (*$fn6)(frost$core$Object*);
typedef frost$core$Object* (*$fn7)(frost$core$Object*, frost$core$Object*);
typedef frost$core$Object* (*$fn12)(frost$core$Object*);
typedef frost$core$Object* (*$fn13)(frost$core$Object*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72", 38, 2027583847227295508, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x4d\x61\x70\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x55", 118, -4698360555464701590, NULL };

void frost$collections$Iterator$MapIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$MapIterator$T$GT$$LPfrost$collections$Iterator$MapIterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$MapIterator$U$RP(frost$collections$Iterator$MapIterator* param0, frost$collections$Iterator* param1, frost$core$MutableMethod* param2) {

frost$collections$Iterator$MapIterator* _1;
frost$core$Object* _2;
frost$collections$Iterator** _4;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$collections$Iterator** _8;
frost$collections$Iterator$MapIterator* _11;
frost$core$Object* _12;
frost$core$MutableMethod** _14;
frost$core$MutableMethod* _15;
frost$core$Object* _16;
frost$core$MutableMethod** _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:120
_1 = param0;
_2 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_2);
_4 = &_1->base;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = &_1->base;
*_8 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:121
_11 = param0;
_12 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_11->map;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_11->map;
*_18 = param2;
return;

}
frost$core$Bit frost$collections$Iterator$MapIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$MapIterator* param0) {

frost$collections$Iterator$MapIterator* _1;
frost$collections$Iterator** _2;
frost$collections$Iterator* _3;
frost$collections$Iterator* _4;
$fn2 _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:126
_1 = param0;
_2 = &_1->base;
_3 = *_2;
_4 = _3;
ITable* $tmp3 = _4->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp3 = $tmp3->next;
}
_5 = $tmp3->methods[0];
_6 = _5(_4);
return _6;

}
frost$core$Object* frost$collections$Iterator$MapIterator$next$R$frost$collections$Iterator$MapIterator$U(frost$collections$Iterator$MapIterator* param0) {

frost$core$Object* local0 = NULL;
frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Iterator$MapIterator* _15;
frost$core$MutableMethod** _16;
frost$core$MutableMethod* _17;
frost$collections$Iterator$MapIterator* _18;
frost$collections$Iterator** _19;
frost$collections$Iterator* _20;
frost$collections$Iterator* _21;
$fn5 _22;
frost$core$Object* _23;
frost$core$Object* _24;
frost$core$MutableMethod* _25;
frost$core$Int8** _26;
frost$core$Int8* _27;
frost$core$Object** _28;
frost$core$Object* _29;
bool _30;
$fn6 _32;
frost$core$Object* _33;
$fn7 _36;
frost$core$Object* _37;
frost$core$Object* _40;
frost$core$Object* _41;
frost$core$Object* _43;
frost$core$Object* _45;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp8 = _0->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp8 = $tmp8->next;
}
_1 = $tmp8->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {130u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _11, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:131
_15 = param0;
_16 = &_15->map;
_17 = *_16;
_18 = param0;
_19 = &_18->base;
_20 = *_19;
_21 = _20;
ITable* $tmp11 = _21->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_22 = $tmp11->methods[1];
_23 = _22(_21);
_24 = _23;
_25 = _17;
_26 = &_25->pointer;
_27 = *_26;
_28 = &_25->target;
_29 = *_28;
_30 = _29 != ((frost$core$Object*) NULL);
if (_30) goto block4; else goto block5;
block5:;
_32 = (($fn12) _27);
_33 = _32(_24);
*(&local0) = _33;
goto block6;
block4:;
_36 = (($fn13) _27);
_37 = _36(_29, _24);
*(&local0) = _37;
goto block6;
block6:;
_40 = *(&local0);
_41 = _40;
frost$core$Frost$ref$frost$core$Object$Q(_41);
_43 = _40;
frost$core$Frost$unref$frost$core$Object$Q(_43);
_45 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_45);
return _40;

}
void frost$collections$Iterator$MapIterator$cleanup(frost$collections$Iterator$MapIterator* param0) {

frost$core$Object* _1;
frost$collections$Iterator$MapIterator* _3;
frost$collections$Iterator** _4;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$collections$Iterator$MapIterator* _8;
frost$core$MutableMethod** _9;
frost$core$MutableMethod* _10;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:114
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->base;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
_8 = param0;
_9 = &_8->map;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}

