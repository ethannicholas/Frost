#include "frost/collections/Iterator/EnumerationIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Tuple2.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim(frost$collections$Iterator$EnumerationIterator* p0) {
    frost$core$Tuple2* result = frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$EnumerationIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$EnumerationIterator$class_type frost$collections$Iterator$EnumerationIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$EnumerationIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$EnumerationIterator$cleanup, frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP$shim} };

typedef frost$core$Bit (*$fn2)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn5)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72", 46, -4993360700336273267, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x28\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x45\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x29", 152, -7078141578672242078, NULL };

void frost$collections$Iterator$EnumerationIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$EnumerationIterator$T$GT(frost$collections$Iterator$EnumerationIterator* param0, frost$collections$Iterator* param1) {

frost$collections$Iterator$EnumerationIterator* _1;
frost$core$Int _2;
frost$core$Int* _3;
frost$collections$Iterator$EnumerationIterator* _6;
frost$core$Object* _7;
frost$collections$Iterator** _9;
frost$collections$Iterator* _10;
frost$core$Object* _11;
frost$collections$Iterator** _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:139
_1 = param0;
_2 = (frost$core$Int) {18446744073709551615u};
_3 = &_1->index;
*_3 = _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:142
_6 = param0;
_7 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_7);
_9 = &_6->base;
_10 = *_9;
_11 = ((frost$core$Object*) _10);
frost$core$Frost$unref$frost$core$Object$Q(_11);
_13 = &_6->base;
*_13 = param1;
return;

}
frost$core$Bit frost$collections$Iterator$EnumerationIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$EnumerationIterator* param0) {

frost$collections$Iterator$EnumerationIterator* _1;
frost$collections$Iterator** _2;
frost$collections$Iterator* _3;
frost$collections$Iterator* _4;
$fn2 _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:147
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
frost$core$Tuple2* frost$collections$Iterator$EnumerationIterator$next$R$$LPfrost$core$Int$Cfrost$collections$Iterator$EnumerationIterator$T$RP(frost$collections$Iterator$EnumerationIterator* param0) {

frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$collections$Iterator$EnumerationIterator* _15;
frost$core$Int* _16;
frost$core$Int _17;
frost$core$Int _18;
int64_t _19;
int64_t _20;
int64_t _21;
frost$core$Int _22;
frost$core$Int* _23;
frost$core$Tuple2* _26;
frost$core$Tuple2* _27;
frost$collections$Iterator$EnumerationIterator* _28;
frost$core$Int* _29;
frost$core$Int _30;
frost$core$Object* _31;
frost$collections$Iterator$EnumerationIterator* _32;
frost$collections$Iterator** _33;
frost$collections$Iterator* _34;
frost$collections$Iterator* _35;
$fn5 _36;
frost$core$Object* _37;
frost$core$Object* _38;
frost$core$Object* _39;
frost$core$Tuple2* _41;
frost$core$Object* _42;
frost$core$Object* _44;
frost$core$Object* _46;
frost$core$Object* _48;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp6 = _0->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_1 = $tmp6->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {151u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _11, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:152
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:153
FROST_ASSERT(32 == sizeof(frost$core$Tuple2));
_26 = (frost$core$Tuple2*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$Tuple2$class);
_27 = _26;
_28 = param0;
_29 = &_28->index;
_30 = *_29;
frost$core$Int$wrapper* $tmp9;
$tmp9 = (frost$core$Int$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp9->value = _30;
_31 = ((frost$core$Object*) $tmp9);
_32 = param0;
_33 = &_32->base;
_34 = *_33;
_35 = _34;
ITable* $tmp10 = _35->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp10 = $tmp10->next;
}
_36 = $tmp10->methods[1];
_37 = _36(_35);
_38 = _37;
_39 = _38;
frost$core$Tuple2$init$frost$core$Tuple2$T0$frost$core$Tuple2$T1(_27, _31, _39);
_41 = _26;
_42 = ((frost$core$Object*) _41);
frost$core$Frost$ref$frost$core$Object$Q(_42);
_44 = _37;
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = _31;
frost$core$Frost$unref$frost$core$Object$Q(_46);
_48 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_48);
return _41;

}
void frost$collections$Iterator$EnumerationIterator$cleanup(frost$collections$Iterator$EnumerationIterator* param0) {

frost$core$Object* _1;
frost$collections$Iterator$EnumerationIterator* _3;
frost$collections$Iterator** _4;
frost$collections$Iterator* _5;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:136
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = param0;
_4 = &_3->base;
_5 = *_4;
_6 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return;

}






