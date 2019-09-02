#include "frost/io/InputStream/LineIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/io/InputStream.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"

__attribute__((weak)) frost$core$Object* frost$io$InputStream$LineIterator$next$R$frost$core$String$shim(frost$io$InputStream$LineIterator* p0) {
    frost$core$String* result = frost$io$InputStream$LineIterator$next$R$frost$core$String(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$io$InputStream$LineIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit, frost$io$InputStream$LineIterator$next$R$frost$core$String$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$io$InputStream$LineIterator$class_type frost$io$InputStream$LineIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$io$InputStream$LineIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$io$InputStream$LineIterator$cleanup, frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit, frost$io$InputStream$LineIterator$next$R$frost$core$String$shim, frost$io$InputStream$LineIterator$readNext} };

typedef void (*$fn2)(frost$io$InputStream$LineIterator*);
typedef void (*$fn3)(frost$io$InputStream$LineIterator*);
typedef frost$core$Bit (*$fn4)(frost$collections$Iterator*);
typedef void (*$fn5)(frost$io$InputStream$LineIterator*);
typedef void (*$fn10)(frost$io$InputStream$LineIterator*);
typedef frost$core$String* (*$fn13)(frost$io$InputStream*);
typedef frost$core$String* (*$fn14)(frost$io$InputStream*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 33, 3084010469533370979, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x69\x6f\x2e\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x4c\x69\x6e\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 90, -6433029774062338755, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x70\x75\x74\x53\x74\x72\x65\x61\x6d\x2e\x66\x72\x6f\x73\x74", 17, -3551496725332018301, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };

void frost$io$InputStream$LineIterator$init$frost$io$InputStream(frost$io$InputStream$LineIterator* param0, frost$io$InputStream* param1) {

frost$core$Object* _1;
frost$io$InputStream** _3;
frost$io$InputStream* _4;
frost$core$Object* _5;
frost$io$InputStream** _7;
$fn2 _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:22
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->input;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->input;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:23
_10 = ($fn3) param0->$class->vtable[4];
_10(param0);
return;

}
frost$core$Bit frost$io$InputStream$LineIterator$get_done$R$frost$core$Bit(frost$io$InputStream$LineIterator* param0) {

frost$core$String** _1;
frost$core$String* _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:28
_1 = &param0->_next;
_2 = *_1;
_3 = _2 == NULL;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$String* frost$io$InputStream$LineIterator$next$R$frost$core$String(frost$io$InputStream$LineIterator* param0) {

frost$core$String* local0 = NULL;
frost$collections$Iterator* _0;
$fn4 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$String** _15;
frost$core$String* _16;
bool _17;
frost$core$Bit _18;
bool _19;
frost$core$Int _21;
frost$core$String** _25;
frost$core$String* _26;
frost$core$Object* _28;
frost$core$String* _30;
frost$core$Object* _31;
$fn5 _35;
frost$core$String* _38;
bool _39;
frost$core$Bit _40;
bool _41;
frost$core$Int _43;
frost$core$String* _46;
frost$core$Object* _47;
frost$core$String* _49;
frost$core$Object* _50;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp6 = _0->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_1 = $tmp6->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.stub:47:6
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {32u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _11, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:33
_15 = &param0->_next;
_16 = *_15;
_17 = _16 != NULL;
_18 = (frost$core$Bit) {_17};
_19 = _18.value;
if (_19) goto block4; else goto block5;
block5:;
_21 = (frost$core$Int) {33u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int(&$s9, _21);
abort(); // unreachable
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:34
_25 = &param0->_next;
_26 = *_25;
*(&local0) = ((frost$core$String*) NULL);
_28 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = *(&local0);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local0) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:35
_35 = ($fn10) param0->$class->vtable[4];
_35(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:36
_38 = *(&local0);
_39 = _38 != NULL;
_40 = (frost$core$Bit) {_39};
_41 = _40.value;
if (_41) goto block6; else goto block7;
block7:;
_43 = (frost$core$Int) {36u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _43, &$s12);
abort(); // unreachable
block6:;
_46 = _38;
_47 = ((frost$core$Object*) _46);
frost$core$Frost$ref$frost$core$Object$Q(_47);
_49 = *(&local0);
_50 = ((frost$core$Object*) _49);
frost$core$Frost$unref$frost$core$Object$Q(_50);
*(&local0) = ((frost$core$String*) NULL);
return _46;

}
void frost$io$InputStream$LineIterator$readNext(frost$io$InputStream$LineIterator* param0) {

frost$io$InputStream** _1;
frost$io$InputStream* _2;
$fn13 _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$String** _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:40
_1 = &param0->input;
_2 = *_1;
_3 = ($fn14) _2->$class->vtable[16];
_4 = _3(_2);
_5 = ((frost$core$Object*) _4);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->_next;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->_next;
*_11 = _4;
_13 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}
void frost$io$InputStream$LineIterator$cleanup(frost$io$InputStream$LineIterator* param0) {

frost$core$Object* _1;
frost$io$InputStream** _3;
frost$io$InputStream* _4;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/io/InputStream.frost:17
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->input;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->_next;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
return;

}






