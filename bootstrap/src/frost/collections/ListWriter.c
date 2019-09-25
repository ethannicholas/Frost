#include "frost/collections/ListWriter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$ListWriter$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, NULL, { NULL, NULL, NULL, frost$collections$ListWriter$removeLast} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$ListWriter$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$ListWriter$_frost$collections$ListWriter, { NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, NULL} };

static frost$core$String $s1;
frost$collections$ListWriter$class_type frost$collections$ListWriter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListWriter$_frost$collections$CollectionWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL, frost$collections$ListWriter$removeLast} };

typedef frost$core$Int (*$fn2)(frost$collections$CollectionWriter*);
typedef frost$core$Int (*$fn3)(frost$collections$CollectionWriter*);
typedef frost$core$Object* (*$fn4)(frost$collections$ListWriter*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, 794765962303639091, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 3453561446996316058, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72\x2e\x72\x65\x6d\x6f\x76\x65\x4c\x61\x73\x74\x28\x29", 73, -1113832679694248644, NULL };

void frost$collections$ListWriter$removeLast(void* rawSelf) {
frost$collections$ListWriter* param0 = (frost$collections$ListWriter*) rawSelf;

frost$collections$CollectionWriter* _0;
$fn2 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _4;
int64_t _5;
bool _6;
frost$core$Bit _7;
bool _8;
frost$core$Int _10;
frost$collections$CollectionWriter* _14;
$fn3 _15;
frost$core$Int _16;
frost$core$Int _17;
int64_t _18;
int64_t _19;
int64_t _20;
frost$core$Int _21;
$fn4 _22;
frost$core$Object* _23;
frost$core$Object* _24;
_0 = ((frost$collections$CollectionWriter*) param0);
ITable* $tmp5 = _0->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp5 = $tmp5->next;
}
_1 = $tmp5->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
_4 = _2.value;
_5 = _3.value;
_6 = _4 > _5;
_7 = (frost$core$Bit) {_6};
_8 = _7.value;
if (_8) goto block1; else goto block2;
block2:;
_10 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _10, &$s7);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListWriter.frost:43
_14 = ((frost$collections$CollectionWriter*) param0);
ITable* $tmp8 = _14->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp8 = $tmp8->next;
}
_15 = $tmp8->methods[0];
_16 = _15(_14);
_17 = (frost$core$Int) {1u};
_18 = _16.value;
_19 = _17.value;
_20 = _18 - _19;
_21 = (frost$core$Int) {_20};
ITable* $tmp9 = param0->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp9 = $tmp9->next;
}
_22 = $tmp9->methods[2];
_23 = _22(param0, _21);
_24 = _23;
frost$core$Frost$unref$frost$core$Object$Q(_24);
return;

}


frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




