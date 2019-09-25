#include "frost/core/String/UTF8Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$core$String$UTF8Iterator$next$R$frost$core$Char8$shim(frost$core$String$UTF8Iterator* p0) {
    frost$core$Char8 result = frost$core$String$UTF8Iterator$next$R$frost$core$Char8(p0);

    frost$core$Char8$wrapper* $tmp2;
    $tmp2 = (frost$core$Char8$wrapper*) frostObjectAlloc(sizeof(frost$core$Char8$wrapper), (frost$core$Class*) &frost$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$UTF8Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$UTF8Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF8Iterator$next$R$frost$core$Char8$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF8Iterator$class_type frost$core$String$UTF8Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF8Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF8Iterator$cleanup, frost$core$String$UTF8Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF8Iterator$next$R$frost$core$Char8$shim} };

typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x49\x74\x65\x72\x61\x74\x6f\x72", 30, 7729450816576595532, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 86, -6428833713769341293, NULL };

void frost$core$String$UTF8Iterator$init$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$core$String$UTF8Iterator* param0 = (frost$core$String$UTF8Iterator*) rawSelf;

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$String** _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:109
_1 = (frost$core$Int) {0u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:114
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->str;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->str;
*_11 = param1;
return;

}
frost$core$Bit frost$core$String$UTF8Iterator$get_done$R$frost$core$Bit(void* rawSelf) {
frost$core$String$UTF8Iterator* param0 = (frost$core$String$UTF8Iterator*) rawSelf;

frost$core$Int* _1;
frost$core$Int _2;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Int* _5;
frost$core$Int _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:119
_1 = &param0->index;
_2 = *_1;
_3 = &param0->str;
_4 = *_3;
_5 = &_4->_length;
_6 = *_5;
_7 = _2.value;
_8 = _6.value;
_9 = _7 >= _8;
_10 = (frost$core$Bit) {_9};
return _10;

}
frost$core$Char8 frost$core$String$UTF8Iterator$next$R$frost$core$Char8(void* rawSelf) {
frost$core$String$UTF8Iterator* param0 = (frost$core$String$UTF8Iterator*) rawSelf;

frost$collections$Iterator* _0;
$fn3 _1;
frost$core$Bit _2;
bool _5;
bool _6;
frost$core$Bit _7;
bool _9;
frost$core$Int _11;
frost$core$Int* _15;
frost$core$Int _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
int64_t _20;
frost$core$Int _21;
frost$core$Int* _22;
frost$core$String** _25;
frost$core$String* _26;
frost$unsafe$Pointer* _27;
frost$unsafe$Pointer _28;
int64_t _29;
frost$core$Int* _30;
frost$core$Int _31;
frost$core$Int64 _32;
frost$core$Int64 _33;
int64_t _34;
int64_t _35;
int64_t _36;
frost$core$Int64 _37;
int64_t _38;
frost$core$Char8 _39;
_0 = ((frost$collections$Iterator*) param0);
ITable* $tmp4 = _0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp4 = $tmp4->next;
}
_1 = $tmp4->methods[0];
_2 = _1(_0);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_5 = _2.value;
_6 = !_5;
_7 = (frost$core$Bit) {_6};
_9 = _7.value;
if (_9) goto block1; else goto block2;
block2:;
_11 = (frost$core$Int) {123u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _11, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:124
_15 = &param0->index;
_16 = *_15;
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 + _19;
_21 = (frost$core$Int) {_20};
_22 = &param0->index;
*_22 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:125
_25 = &param0->str;
_26 = *_25;
_27 = &_26->data;
_28 = *_27;
_29 = _28.value;
_30 = &param0->index;
_31 = *_30;
_32 = frost$core$Int64$init$frost$core$Int(_31);
_33 = (frost$core$Int64) {1u};
_34 = _32.value;
_35 = _33.value;
_36 = _34 - _35;
_37 = (frost$core$Int64) {_36};
_38 = _37.value;
_39 = ((frost$core$Char8*)_29)[_38];
return _39;

}
void frost$core$String$UTF8Iterator$cleanup(void* rawSelf) {
frost$core$String$UTF8Iterator* param0 = (frost$core$String$UTF8Iterator*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:108
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->str;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

