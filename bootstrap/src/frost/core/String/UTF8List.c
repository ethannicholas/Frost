#include "frost/core/String/UTF8List.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/core/Char8.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Int64.h"
#include "frost/core/String/UTF8Iterator.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$core$String$UTF8List$$IDX$frost$core$Int$R$frost$core$Char8$shim(frost$core$String$UTF8List* p0, frost$core$Int p1) {
    frost$core$Char8 result = frost$core$String$UTF8List$$IDX$frost$core$Int$R$frost$core$Char8(p0, p1);

    frost$core$Char8$wrapper* $tmp2;
    $tmp2 = (frost$core$Char8$wrapper*) frostObjectAlloc(sizeof(frost$core$Char8$wrapper), (frost$core$Class*) &frost$core$Char8$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT$shim(frost$core$String$UTF8List* p0) {
    frost$collections$Iterator* result = frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$core$String$UTF8List$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$String$UTF8List$$IDX$frost$core$Int$R$frost$core$Char8$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$UTF8List$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$String$UTF8List$_frost$collections$ListView, { frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$String$UTF8List$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$String$UTF8List$_frost$collections$Iterable, { frost$core$String$UTF8List$get_count$R$frost$core$Int, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$String$UTF8List$class_type frost$core$String$UTF8List$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$String$UTF8List$_frost$collections$CollectionView, { frost$core$Object$get_asString$R$frost$core$String, frost$core$String$UTF8List$cleanup, frost$core$String$UTF8List$$IDX$frost$core$Int$R$frost$core$Char8$shim, frost$core$String$UTF8List$get_count$R$frost$core$Int, frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT$shim} };

typedef frost$core$Int (*$fn3)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74", 26, -3189616693647548254, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x55\x54\x46\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 102, 6538971543095969619, NULL };

void frost$core$String$UTF8List$init$frost$core$String(void* rawSelf, frost$core$String* param1) {
frost$core$String$UTF8List* param0 = (frost$core$String$UTF8List*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
frost$core$String** _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:88
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->str;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->str;
*_7 = param1;
return;

}
frost$core$Char8 frost$core$String$UTF8List$$IDX$frost$core$Int$R$frost$core$Char8(void* rawSelf, frost$core$Int param1) {
frost$core$String$UTF8List* param0 = (frost$core$String$UTF8List*) rawSelf;

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn3 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Int _16;
frost$core$String** _20;
frost$core$String* _21;
frost$unsafe$Pointer* _22;
frost$unsafe$Pointer _23;
int64_t _24;
frost$core$Int64 _25;
int64_t _26;
frost$core$Char8 _27;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = ((frost$collections$CollectionView*) param0);
ITable* $tmp4 = _7->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp4 = $tmp4->next;
}
_8 = $tmp4->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
if (_14) goto block1; else goto block2;
block2:;
_16 = (frost$core$Int) {92u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s5, _16, &$s6);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:93
_20 = &param0->str;
_21 = *_20;
_22 = &_21->data;
_23 = *_22;
_24 = _23.value;
_25 = frost$core$Int64$init$frost$core$Int(param1);
_26 = _25.value;
_27 = ((frost$core$Char8*)_24)[_26];
return _27;

}
frost$core$Int frost$core$String$UTF8List$get_count$R$frost$core$Int(void* rawSelf) {
frost$core$String$UTF8List* param0 = (frost$core$String$UTF8List*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$Int* _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:98
_1 = &param0->str;
_2 = *_1;
_3 = &_2->_length;
_4 = *_3;
return _4;

}
frost$collections$Iterator* frost$core$String$UTF8List$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char8$GT(void* rawSelf) {
frost$core$String$UTF8List* param0 = (frost$core$String$UTF8List*) rawSelf;

frost$core$String$UTF8Iterator* _1;
frost$core$String** _2;
frost$core$String* _3;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:103
_1 = (frost$core$String$UTF8Iterator*) frostObjectAlloc(sizeof(frost$core$String$UTF8Iterator), (frost$core$Class*) &frost$core$String$UTF8Iterator$class);
_2 = &param0->str;
_3 = *_2;
frost$core$String$UTF8Iterator$init$frost$core$String(_1, _3);
_5 = ((frost$collections$Iterator*) _1);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
void frost$core$String$UTF8List$cleanup(void* rawSelf) {
frost$core$String$UTF8List* param0 = (frost$core$String$UTF8List*) rawSelf;

frost$core$Object* _1;
frost$core$String** _3;
frost$core$String* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:84
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->str;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

