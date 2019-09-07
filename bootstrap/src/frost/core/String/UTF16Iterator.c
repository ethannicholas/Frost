#include "frost/core/String/UTF16Iterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Char16.h"
#include "frost/core/Int.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/UInt16.h"

__attribute__((weak)) frost$core$Object* frost$core$String$UTF16Iterator$next$R$frost$core$Char16$shim(frost$core$String$UTF16Iterator* p0) {
    frost$core$Char16 result = frost$core$String$UTF16Iterator$next$R$frost$core$Char16(p0);

    frost$core$Char16$wrapper* $tmp2;
    $tmp2 = (frost$core$Char16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$Char16$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$core$String$UTF16Iterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$core$String$UTF16Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF16Iterator$next$R$frost$core$Char16$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF16Iterator$class_type frost$core$String$UTF16Iterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF16Iterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF16Iterator$cleanup, frost$core$String$UTF16Iterator$get_done$R$frost$core$Bit, frost$core$String$UTF16Iterator$next$R$frost$core$Char16$shim} };

typedef frost$core$Bit (*$fn5)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72", 31, -3176081949004126273, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64", 13, -4816082924115863014, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x31\x36\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 88, -8803366739589295613, NULL };

void frost$core$String$UTF16Iterator$init$frost$core$String(frost$core$String$UTF16Iterator* param0, frost$core$String* param1) {

frost$core$Int _1;
frost$core$Int* _2;
frost$core$Object* _5;
frost$core$String** _7;
frost$core$String* _8;
frost$core$Object* _9;
frost$core$String** _11;
frost$core$Int _14;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:131
_1 = (frost$core$Int) {0u};
_2 = &param0->index;
*_2 = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:136
_5 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_5);
_7 = &param0->str;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->str;
*_11 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:137
_14 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _14, &$s4);
abort(); // unreachable

}
frost$core$Bit frost$core$String$UTF16Iterator$get_done$R$frost$core$Bit(frost$core$String$UTF16Iterator* param0) {

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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:142
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
frost$core$Char16 frost$core$String$UTF16Iterator$next$R$frost$core$Char16(frost$core$String$UTF16Iterator* param0) {

frost$collections$Iterator* _0;
$fn5 _1;
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
frost$core$UInt16 _25;
frost$core$Char16 _26;
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
_11 = (frost$core$Int) {146u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _11, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:147
_15 = &param0->index;
_16 = *_15;
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 + _19;
_21 = (frost$core$Int) {_20};
_22 = &param0->index;
*_22 = _21;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:148
_25 = (frost$core$UInt16) {1u};
_26 = frost$core$Char16$init$frost$core$UInt16(_25);
return _26;

}
void frost$core$String$UTF16Iterator$cleanup(frost$core$String$UTF16Iterator* param0) {

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:130
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->str;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

