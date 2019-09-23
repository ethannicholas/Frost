#include "frost/collections/HashSet.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/HashKey.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/MutableMethod.h"
#include "frost/collections/Collection.h"
#include "frost/collections/HashMap.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/core/Int.h"
#include "frost/collections/MapView.h"
#include "frost/collections/HashSet/_Closure2.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$collections$Iterator* frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT$shim(frost$collections$HashSet* p0) {
    frost$collections$Iterator* result = frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$HashSet$add$frost$collections$HashSet$T$shim(frost$collections$HashSet* p0, frost$core$Object* p1) {
    frost$collections$HashSet$add$frost$collections$HashSet$T(p0, ((frost$collections$HashKey*) p1));

}
__attribute__((weak)) void frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT$shim(frost$collections$HashSet* p0, frost$collections$CollectionView* p1) {
    frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(p0, p1);

}
__attribute__((weak)) void frost$collections$HashSet$filterInPlace$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim(frost$collections$HashSet* p0, frost$core$MutableMethod* p1) {
    frost$collections$HashSet$filterInPlace$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$HashSet$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$HashSet$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$HashSet$_frost$collections$Iterable, { frost$collections$HashSet$get_count$R$frost$core$Int, frost$collections$HashSet$add$frost$collections$HashSet$T$shim, frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT$shim, frost$collections$HashSet$clear, frost$collections$HashSet$filterInPlace$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$HashSet$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$HashSet$_frost$collections$CollectionWriter, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$HashSet$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$HashSet$_frost$collections$Collection, { frost$collections$HashSet$get_count$R$frost$core$Int, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$collections$HashSet$class_type frost$collections$HashSet$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$HashSet$_frost$collections$CollectionView, { frost$collections$HashSet$get_asString$R$frost$core$String, frost$collections$HashSet$cleanup, frost$collections$HashSet$add$frost$collections$HashSet$T$shim, frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT$shim, frost$collections$HashSet$remove$frost$collections$HashSet$T, frost$collections$HashSet$get_count$R$frost$core$Int, frost$collections$HashSet$clear, frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT$shim, frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit, frost$collections$HashSet$filterInPlace$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP$shim} };

typedef frost$collections$Iterator* (*$fn2)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn8)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn9)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn10)(frost$collections$Iterator*);
typedef frost$core$Int (*$fn14)(frost$collections$MapView*);
typedef frost$core$Int (*$fn16)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn20)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn22)(frost$collections$MapView*);
typedef frost$core$Bit (*$fn23)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn24)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn25)(frost$core$Object*);
typedef frost$core$String* (*$fn32)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74", 25, -8527029289151777740, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x48\x61\x73\x68\x53\x65\x74\x2e\x66\x72\x6f\x73\x74", 13, 5558776029566660167, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x6f\x73\x74\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x53\x65\x74\x2e\x63\x6c\x65\x61\x72\x28\x29", 66, -5552792129989019487, NULL };
static frost$core$String $s26 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, -5808493101479473382, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, -3750763034362895579, NULL };
static frost$core$String $s33 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, -6229636012469849280, NULL };
static frost$core$String $s34 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s35 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s36 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, -5808499698549242648, NULL };

void frost$collections$HashSet$init(void* rawSelf) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashMap* _1;
frost$core$Object* _3;
frost$collections$HashMap** _5;
frost$collections$HashMap* _6;
frost$core$Object* _7;
frost$collections$HashMap** _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:8
_1 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->contents;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->contents;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return;

}
void frost$collections$HashSet$init$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(void* rawSelf, frost$collections$CollectionView* param1) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashKey* local0 = NULL;
frost$collections$HashMap* _1;
frost$core$Object* _3;
frost$collections$HashMap** _5;
frost$collections$HashMap* _6;
frost$core$Object* _7;
frost$collections$HashMap** _9;
frost$core$Object* _11;
frost$collections$Iterable* _16;
$fn2 _17;
frost$collections$Iterator* _18;
$fn3 _20;
frost$core$Bit _21;
bool _22;
$fn4 _25;
frost$core$Object* _26;
frost$collections$HashKey* _27;
frost$core$Object* _28;
frost$collections$HashKey* _30;
frost$core$Object* _31;
frost$collections$HashKey* _35;
frost$collections$HashMap** _38;
frost$collections$HashMap* _39;
frost$collections$HashKey* _40;
frost$core$Object* _41;
frost$core$Object* _44;
frost$collections$HashKey* _46;
frost$core$Object* _47;
frost$core$Object* _51;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:8
_1 = (frost$collections$HashMap*) frostObjectAlloc(sizeof(frost$collections$HashMap), (frost$core$Class*) &frost$collections$HashMap$class);
frost$collections$HashMap$init(_1);
_3 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_3);
_5 = &param0->contents;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
_9 = &param0->contents;
*_9 = _1;
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:14
// begin inline call to method frost.collections.HashSet.addAll(c:frost.collections.CollectionView<frost.collections.HashSet.T>) from HashSet.frost:14:15
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:24
_16 = ((frost$collections$Iterable*) param1);
ITable* $tmp5 = _16->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp5 = $tmp5->next;
}
_17 = $tmp5->methods[0];
_18 = _17(_16);
goto block2;
block2:;
ITable* $tmp6 = _18->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_20 = $tmp6->methods[0];
_21 = _20(_18);
_22 = _21.value;
if (_22) goto block4; else goto block3;
block3:;
*(&local0) = ((frost$collections$HashKey*) NULL);
ITable* $tmp7 = _18->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp7 = $tmp7->next;
}
_25 = $tmp7->methods[1];
_26 = _25(_18);
_27 = ((frost$collections$HashKey*) _26);
_28 = ((frost$core$Object*) _27);
frost$core$Frost$ref$frost$core$Object$Q(_28);
_30 = *(&local0);
_31 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local0) = _27;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:25
_35 = *(&local0);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HashSet.frost:25:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
_38 = &param0->contents;
_39 = *_38;
_40 = _35;
_41 = ((frost$core$Object*) _35);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_39, _40, _41);
_44 = _26;
frost$core$Frost$unref$frost$core$Object$Q(_44);
_46 = *(&local0);
_47 = ((frost$core$Object*) _46);
frost$core$Frost$unref$frost$core$Object$Q(_47);
*(&local0) = ((frost$collections$HashKey*) NULL);
goto block2;
block4:;
_51 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_51);
return;

}
void frost$collections$HashSet$add$frost$collections$HashSet$T(void* rawSelf, frost$collections$HashKey* param1) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashKey* _3;
frost$core$Object* _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
_1 = &param0->contents;
_2 = *_1;
_3 = param1;
_4 = ((frost$core$Object*) param1);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_2, _3, _4);
return;

}
void frost$collections$HashSet$addAll$frost$collections$CollectionView$LTfrost$collections$HashSet$T$GT(void* rawSelf, frost$collections$CollectionView* param1) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashKey* local0 = NULL;
frost$collections$Iterable* _1;
$fn8 _2;
frost$collections$Iterator* _3;
$fn9 _5;
frost$core$Bit _6;
bool _7;
$fn10 _10;
frost$core$Object* _11;
frost$collections$HashKey* _12;
frost$core$Object* _13;
frost$collections$HashKey* _15;
frost$core$Object* _16;
frost$collections$HashKey* _20;
frost$collections$HashMap** _23;
frost$collections$HashMap* _24;
frost$collections$HashKey* _25;
frost$core$Object* _26;
frost$core$Object* _29;
frost$collections$HashKey* _31;
frost$core$Object* _32;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:24
_1 = ((frost$collections$Iterable*) param1);
ITable* $tmp11 = _1->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp11 = $tmp11->next;
}
_2 = $tmp11->methods[0];
_3 = _2(_1);
goto block1;
block1:;
ITable* $tmp12 = _3->$class->itable;
while ($tmp12->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp12 = $tmp12->next;
}
_5 = $tmp12->methods[0];
_6 = _5(_3);
_7 = _6.value;
if (_7) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$collections$HashKey*) NULL);
ITable* $tmp13 = _3->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp13 = $tmp13->next;
}
_10 = $tmp13->methods[1];
_11 = _10(_3);
_12 = ((frost$collections$HashKey*) _11);
_13 = ((frost$core$Object*) _12);
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:25
_20 = *(&local0);
// begin inline call to method frost.collections.HashSet.add(value:frost.collections.HashSet.T) from HashSet.frost:25:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:19
_23 = &param0->contents;
_24 = *_23;
_25 = _20;
_26 = ((frost$core$Object*) _20);
frost$collections$HashMap$$IDXEQ$frost$collections$HashMap$K$frost$collections$HashMap$V(_24, _25, _26);
_29 = _11;
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = *(&local0);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_32);
*(&local0) = ((frost$collections$HashKey*) NULL);
goto block1;
block3:;
_36 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return;

}
void frost$collections$HashSet$remove$frost$collections$HashSet$T(void* rawSelf, frost$collections$HashKey* param1) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashKey* _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:30
_1 = &param0->contents;
_2 = *_1;
_3 = param1;
frost$collections$HashMap$remove$frost$collections$HashMap$K(_2, _3);
return;

}
frost$core$Int frost$collections$HashSet$get_count$R$frost$core$Int(void* rawSelf) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$MapView* _3;
$fn14 _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:35
_1 = &param0->contents;
_2 = *_1;
_3 = ((frost$collections$MapView*) _2);
ITable* $tmp15 = _3->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp15 = $tmp15->next;
}
_4 = $tmp15->methods[0];
_5 = _4(_3);
return _5;

}
void frost$collections$HashSet$clear(void* rawSelf) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashMap** _18;
frost$collections$HashMap* _19;
frost$collections$CollectionView* _0;
$fn16 _1;
frost$core$Int _2;
frost$core$Int _3;
int64_t _6;
int64_t _7;
bool _8;
frost$core$Bit _9;
bool _14;
frost$core$Int _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:40
_18 = &param0->contents;
_19 = *_18;
frost$collections$HashMap$clear(_19);
_0 = ((frost$collections$CollectionView*) param0);
ITable* $tmp17 = _0->$class->itable;
while ($tmp17->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp17 = $tmp17->next;
}
_1 = $tmp17->methods[0];
_2 = _1(_0);
_3 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from CollectionWriter.frost:37:17
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_6 = _2.value;
_7 = _3.value;
_8 = _6 == _7;
_9 = (frost$core$Bit) {_8};
_14 = _9.value;
if (_14) goto block3; else goto block4;
block3:;
return;
block4:;
_11 = (frost$core$Int) {39u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _11, &$s19);
abort(); // unreachable

}
frost$collections$Iterator* frost$collections$HashSet$get_iterator$R$frost$collections$Iterator$LTfrost$collections$HashSet$T$GT(void* rawSelf) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$MapView* _3;
$fn20 _4;
frost$collections$Iterator* _5;
frost$core$Object* _6;
frost$core$Object* _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:45
_1 = &param0->contents;
_2 = *_1;
_3 = ((frost$collections$MapView*) _2);
ITable* $tmp21 = _3->$class->itable;
while ($tmp21->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp21 = $tmp21->next;
}
_4 = $tmp21->methods[4];
_5 = _4(_3);
_6 = ((frost$core$Object*) _5);
frost$core$Frost$ref$frost$core$Object$Q(_6);
_8 = ((frost$core$Object*) _5);
frost$core$Frost$unref$frost$core$Object$Q(_8);
return _5;

}
frost$core$Bit frost$collections$HashSet$contains$frost$collections$HashSet$T$R$frost$core$Bit(void* rawSelf, frost$collections$HashKey* param1) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashKey* _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:49
_1 = &param0->contents;
_2 = *_1;
_3 = param1;
_4 = frost$collections$HashMap$contains$frost$collections$HashMap$K$R$frost$core$Bit(_2, _3);
return _4;

}
void frost$collections$HashSet$filterInPlace$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* param1) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$collections$HashMap** _1;
frost$collections$HashMap* _2;
frost$collections$HashSet$_Closure2* _3;
frost$core$Int8* _5;
frost$core$MutableMethod* _6;
frost$core$Object* _7;
frost$core$Int8** _10;
frost$core$Object** _14;
frost$core$Object* _15;
frost$core$Object** _17;
frost$core$MutableMethod* _20;
frost$core$MutableMethod* _21;
frost$core$Object* _23;
frost$core$Object* _25;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:54
_1 = &param0->contents;
_2 = *_1;
_3 = (frost$collections$HashSet$_Closure2*) frostObjectAlloc(sizeof(frost$collections$HashSet$_Closure2), (frost$core$Class*) &frost$collections$HashSet$_Closure2$class);
frost$collections$HashSet$_Closure2$init$$LPfrost$collections$HashSet$T$RP$EQ$GT$LPfrost$core$Bit$RP(_3, param1);
_5 = ((frost$core$Int8*) frost$collections$HashSet$_Closure2$$anonymous1$frost$collections$HashSet$T$frost$collections$HashSet$T$R$frost$core$Bit);
_6 = (frost$core$MutableMethod*) frostObjectAlloc(sizeof(frost$core$MutableMethod), (frost$core$Class*) &frost$core$MutableMethod$class);
_7 = ((frost$core$Object*) _3);
// begin inline call to frost.core.MutableMethod.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Object?) from HashSet.frost:54:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:32
_10 = &_6->pointer;
*_10 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableMethod.frost:33
frost$core$Frost$ref$frost$core$Object$Q(_7);
_14 = &_6->target;
_15 = *_14;
frost$core$Frost$unref$frost$core$Object$Q(_15);
_17 = &_6->target;
*_17 = _7;
_20 = _6;
_21 = _20;
frost$collections$HashMap$filterInPlace$$LPfrost$collections$HashMap$K$Cfrost$collections$HashMap$V$RP$EQ$GT$LPfrost$core$Bit$RP(_2, _21);
_23 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_25);
return;

}
frost$core$String* frost$collections$HashSet$get_asString$R$frost$core$String(void* rawSelf) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$collections$HashKey* local2 = NULL;
frost$core$MutableString* _1;
frost$core$Object* _4;
frost$core$MutableString* _6;
frost$core$Object* _7;
frost$core$Object* _10;
frost$core$Object* _14;
frost$core$String* _16;
frost$core$Object* _17;
frost$collections$HashMap** _21;
frost$collections$HashMap* _22;
frost$collections$MapView* _23;
$fn22 _24;
frost$collections$Iterator* _25;
$fn23 _27;
frost$core$Bit _28;
bool _29;
$fn24 _32;
frost$core$Object* _33;
frost$collections$HashKey* _34;
frost$core$Object* _35;
frost$collections$HashKey* _37;
frost$core$Object* _38;
frost$core$MutableString* _42;
frost$core$String* _43;
frost$collections$HashKey* _46;
frost$core$Object* _47;
bool _48;
frost$core$Bit _49;
bool _50;
frost$core$MutableString* _53;
frost$collections$HashKey* _54;
frost$core$Object* _55;
$fn25 _58;
frost$core$String* _59;
frost$core$Object* _61;
frost$core$MutableString* _67;
frost$core$Object* _71;
frost$core$String* _73;
frost$core$Object* _74;
frost$core$Object* _77;
frost$collections$HashKey* _79;
frost$core$Object* _80;
frost$core$Object* _84;
frost$core$MutableString* _87;
frost$core$MutableString* _90;
frost$core$String* _91;
frost$core$Object* _92;
frost$core$Object* _94;
frost$core$String* _96;
frost$core$Object* _97;
frost$core$MutableString* _100;
frost$core$Object* _101;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:59
_1 = (frost$core$MutableString*) frostObjectAlloc(sizeof(frost$core$MutableString), (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String(_1, &$s26);
*(&local0) = ((frost$core$MutableString*) NULL);
_4 = ((frost$core$Object*) _1);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = *(&local0);
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
*(&local0) = _1;
_10 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_10);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:60
*(&local1) = ((frost$core$String*) NULL);
_14 = ((frost$core$Object*) &$s27);
frost$core$Frost$ref$frost$core$Object$Q(_14);
_16 = *(&local1);
_17 = ((frost$core$Object*) _16);
frost$core$Frost$unref$frost$core$Object$Q(_17);
*(&local1) = &$s28;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:61
_21 = &param0->contents;
_22 = *_21;
_23 = ((frost$collections$MapView*) _22);
ITable* $tmp29 = _23->$class->itable;
while ($tmp29->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp29 = $tmp29->next;
}
_24 = $tmp29->methods[4];
_25 = _24(_23);
goto block1;
block1:;
ITable* $tmp30 = _25->$class->itable;
while ($tmp30->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp30 = $tmp30->next;
}
_27 = $tmp30->methods[0];
_28 = _27(_25);
_29 = _28.value;
if (_29) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$collections$HashKey*) NULL);
ITable* $tmp31 = _25->$class->itable;
while ($tmp31->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp31 = $tmp31->next;
}
_32 = $tmp31->methods[1];
_33 = _32(_25);
_34 = ((frost$collections$HashKey*) _33);
_35 = ((frost$core$Object*) _34);
frost$core$Frost$ref$frost$core$Object$Q(_35);
_37 = *(&local2);
_38 = ((frost$core$Object*) _37);
frost$core$Frost$unref$frost$core$Object$Q(_38);
*(&local2) = _34;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:62
_42 = *(&local0);
_43 = *(&local1);
frost$core$MutableString$append$frost$core$String(_42, _43);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:64
_46 = *(&local2);
_47 = ((frost$core$Object*) _46);
_48 = _47 != NULL;
_49 = (frost$core$Bit) {_48};
_50 = _49.value;
if (_50) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:65
_53 = *(&local0);
_54 = *(&local2);
_55 = ((frost$core$Object*) _54);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from HashSet.frost:65:30
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/MutableString.frost:150
_58 = ($fn32) _55->$class->vtable[0];
_59 = _58(_55);
frost$core$MutableString$append$frost$core$String(_53, _59);
_61 = ((frost$core$Object*) _59);
frost$core$Frost$unref$frost$core$Object$Q(_61);
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:68
_67 = *(&local0);
frost$core$MutableString$append$frost$core$String(_67, &$s33);
goto block5;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:70
_71 = ((frost$core$Object*) &$s34);
frost$core$Frost$ref$frost$core$Object$Q(_71);
_73 = *(&local1);
_74 = ((frost$core$Object*) _73);
frost$core$Frost$unref$frost$core$Object$Q(_74);
*(&local1) = &$s35;
_77 = _33;
frost$core$Frost$unref$frost$core$Object$Q(_77);
_79 = *(&local2);
_80 = ((frost$core$Object*) _79);
frost$core$Frost$unref$frost$core$Object$Q(_80);
*(&local2) = ((frost$collections$HashKey*) NULL);
goto block1;
block3:;
_84 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_84);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:72
_87 = *(&local0);
frost$core$MutableString$append$frost$core$String(_87, &$s36);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:73
_90 = *(&local0);
_91 = frost$core$MutableString$finish$R$frost$core$String(_90);
_92 = ((frost$core$Object*) _91);
frost$core$Frost$ref$frost$core$Object$Q(_92);
_94 = ((frost$core$Object*) _91);
frost$core$Frost$unref$frost$core$Object$Q(_94);
_96 = *(&local1);
_97 = ((frost$core$Object*) _96);
frost$core$Frost$unref$frost$core$Object$Q(_97);
*(&local1) = ((frost$core$String*) NULL);
_100 = *(&local0);
_101 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_101);
*(&local0) = ((frost$core$MutableString*) NULL);
return _91;

}
void frost$collections$HashSet$cleanup(void* rawSelf) {
frost$collections$HashSet* param0 = (frost$collections$HashSet*) rawSelf;

frost$core$Object* _1;
frost$collections$HashMap** _3;
frost$collections$HashMap* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/HashSet.frost:6
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->contents;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
return;

}

