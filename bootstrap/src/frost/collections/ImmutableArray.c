#include "frost/collections/ImmutableArray.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Bit.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Frost.h"
#include "frost/collections/Array.h"
#include "frost/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Int64 frost$collections$ImmutableArray$get_count$R$frost$core$Int64$shim(frost$collections$ImmutableArray* p0) {
    frost$core$Int64 result = frost$collections$ImmutableArray$get_count$R$frost$core$Int64(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim(frost$collections$ImmutableArray* p0) {
    frost$collections$Iterator* result = frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T$shim(frost$collections$ImmutableArray* p0, frost$core$Int64 p1) {
    frost$core$Immutable* result = frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T(p0, p1);

    return ((frost$core$Object*) result);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$collections$ImmutableArray$get_asString$R$frost$core$String$shim(frost$collections$ImmutableArray* p0) {
    frost$core$String* result = frost$collections$ImmutableArray$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$collections$ImmutableArray$cleanup$shim(frost$collections$ImmutableArray* p0) {
    frost$collections$ImmutableArray$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$ImmutableArray$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$collections$ImmutableArray$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$ImmutableArray$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$CollectionView, { frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$collections$ImmutableArray$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$Iterable, { frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

static frost$core$String $s1;
frost$collections$ImmutableArray$class_type frost$collections$ImmutableArray$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$collections$ImmutableArray$_frost$collections$ListView, { frost$collections$ImmutableArray$get_asString$R$frost$core$String$shim, frost$collections$ImmutableArray$cleanup$shim, frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T$shim, frost$collections$ImmutableArray$get_count$R$frost$core$Int64$shim, frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT$shim} };

typedef frost$core$Int64 (*$fn10)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn21)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn48)(frost$collections$ListView*, frost$core$Int64);
typedef frost$core$Int64 (*$fn96)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn153)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn171)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn197)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn201)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn206)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn220)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79", 32, 3644790808526678741, NULL };
static frost$core$String $s161 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -475546343703461448, NULL };
static frost$core$String $s162 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x54", 128, -109635805114273339, NULL };
static frost$core$String $s180 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -475546343703461448, NULL };
static frost$core$String $s191 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s194 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s211 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s223 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s226 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void frost$collections$ImmutableArray$init(frost$collections$ImmutableArray* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:39
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->_count;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:40
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
int64_t $tmp5 = $tmp4.value;
frost$core$Immutable** $tmp6 = ((frost$core$Immutable**) frostAlloc($tmp5 * 8));
frost$core$Immutable*** $tmp7 = &param0->data;
*$tmp7 = $tmp6;
return;

}
void frost$collections$ImmutableArray$init$frost$collections$ListView$LTfrost$collections$ImmutableArray$T$GT(frost$collections$ImmutableArray* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:44
ITable* $tmp8 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[0];
frost$core$Int64 $tmp11 = $tmp9(((frost$collections$CollectionView*) param1));
frost$core$Int64* $tmp12 = &param0->_count;
*$tmp12 = $tmp11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:45
frost$core$Int64* $tmp13 = &param0->_count;
frost$core$Int64 $tmp14 = *$tmp13;
int64_t $tmp15 = $tmp14.value;
frost$core$Immutable** $tmp16 = ((frost$core$Immutable**) frostAlloc($tmp15 * 8));
frost$core$Immutable*** $tmp17 = &param0->data;
*$tmp17 = $tmp16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:46
frost$core$Int64 $tmp18 = (frost$core$Int64) {0};
ITable* $tmp19 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$core$Int64 $tmp22 = $tmp20(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp23 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp24 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp18, $tmp22, $tmp23);
frost$core$Int64 $tmp25 = $tmp24.min;
*(&local0) = $tmp25;
frost$core$Int64 $tmp26 = $tmp24.max;
frost$core$Bit $tmp27 = $tmp24.inclusive;
bool $tmp28 = $tmp27.value;
frost$core$Int64 $tmp29 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp30 = $tmp29.value;
frost$core$UInt64 $tmp31 = (frost$core$UInt64) {((uint64_t) $tmp30)};
if ($tmp28) goto block5; else goto block6;
block5:;
int64_t $tmp32 = $tmp25.value;
int64_t $tmp33 = $tmp26.value;
bool $tmp34 = $tmp32 <= $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block2; else goto block3;
block6:;
int64_t $tmp37 = $tmp25.value;
int64_t $tmp38 = $tmp26.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:47
frost$core$Immutable*** $tmp42 = &param0->data;
frost$core$Immutable** $tmp43 = *$tmp42;
frost$core$Int64 $tmp44 = *(&local0);
frost$core$Int64 $tmp45 = *(&local0);
ITable* $tmp46 = param1->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[0];
frost$core$Object* $tmp49 = $tmp47(param1, $tmp45);
int64_t $tmp50 = $tmp44.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) $tmp49)));
frost$core$Immutable* $tmp51 = $tmp43[$tmp50];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp51));
$tmp43[$tmp50] = ((frost$core$Immutable*) $tmp49);
frost$core$Frost$unref$frost$core$Object$Q($tmp49);
frost$core$Int64 $tmp52 = *(&local0);
int64_t $tmp53 = $tmp26.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp57 = $tmp56.value;
frost$core$UInt64 $tmp58 = (frost$core$UInt64) {((uint64_t) $tmp57)};
if ($tmp28) goto block9; else goto block10;
block9:;
uint64_t $tmp59 = $tmp58.value;
uint64_t $tmp60 = $tmp31.value;
bool $tmp61 = $tmp59 >= $tmp60;
frost$core$Bit $tmp62 = (frost$core$Bit) {$tmp61};
bool $tmp63 = $tmp62.value;
if ($tmp63) goto block7; else goto block3;
block10:;
uint64_t $tmp64 = $tmp58.value;
uint64_t $tmp65 = $tmp31.value;
bool $tmp66 = $tmp64 > $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block7; else goto block3;
block7:;
int64_t $tmp69 = $tmp52.value;
int64_t $tmp70 = $tmp29.value;
int64_t $tmp71 = $tmp69 + $tmp70;
frost$core$Int64 $tmp72 = (frost$core$Int64) {$tmp71};
*(&local0) = $tmp72;
goto block2;
block3:;
return;

}
void frost$collections$ImmutableArray$init$frost$unsafe$Pointer$LTfrost$collections$ImmutableArray$T$GT$frost$core$Int64(frost$collections$ImmutableArray* param0, frost$core$Immutable** param1, frost$core$Int64 param2) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:53
frost$core$Immutable*** $tmp73 = &param0->data;
*$tmp73 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:54
frost$core$Int64* $tmp74 = &param0->_count;
*$tmp74 = param2;
return;

}
frost$collections$ImmutableArray* frost$collections$ImmutableArray$from$frost$collections$Array$LTfrost$collections$ImmutableArray$T$GT$R$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$T$GT(frost$collections$Array* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:67
frost$core$Object*** $tmp75 = &param0->data;
frost$core$Object** $tmp76 = *$tmp75;
frost$core$Int64* $tmp77 = &param0->capacity;
frost$core$Int64 $tmp78 = *$tmp77;
frost$core$Int64* $tmp79 = &param0->_count;
frost$core$Int64 $tmp80 = *$tmp79;
int64_t $tmp81 = $tmp78.value;
int64_t $tmp82 = $tmp80.value;
frost$core$Immutable** $tmp83 = (frost$core$Immutable**) frostRealloc(((frost$core$Immutable**) $tmp76), $tmp81 * 8, $tmp82 * 8);
frost$core$Object*** $tmp84 = &param0->data;
*$tmp84 = ((frost$core$Object**) $tmp83);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:68
FROST_ASSERT(40 == sizeof(frost$collections$ImmutableArray));
frost$collections$ImmutableArray* $tmp85 = (frost$collections$ImmutableArray*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$ImmutableArray$class);
frost$collections$ImmutableArray$init($tmp85);
frost$core$Class** $tmp86 = &((frost$core$Object*) $tmp85)->$class;
frost$core$Class* $tmp87 = *$tmp86;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp87));
frost$core$Class** $tmp88 = &((frost$core$Object*) param0)->$class;
frost$core$Class* $tmp89 = *$tmp88;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp89));
frost$core$Class** $tmp90 = &((frost$core$Object*) param0)->$class;
*$tmp90 = $tmp87;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp85));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:69
frost$core$Int64 $tmp91 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64* $tmp92 = &param0->capacity;
*$tmp92 = $tmp91;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:70
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ImmutableArray*) ((frost$core$Object*) param0))));
return ((frost$collections$ImmutableArray*) ((frost$core$Object*) param0));

}
void frost$collections$ImmutableArray$cleanup(frost$collections$ImmutableArray* param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:75
frost$core$Int64 $tmp93 = (frost$core$Int64) {0};
ITable* $tmp94 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[0];
frost$core$Int64 $tmp97 = $tmp95(((frost$collections$CollectionView*) param0));
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp99 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp93, $tmp97, $tmp98);
frost$core$Int64 $tmp100 = $tmp99.min;
*(&local0) = $tmp100;
frost$core$Int64 $tmp101 = $tmp99.max;
frost$core$Bit $tmp102 = $tmp99.inclusive;
bool $tmp103 = $tmp102.value;
frost$core$Int64 $tmp104 = (frost$core$Int64) {1};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp105 = $tmp104.value;
frost$core$UInt64 $tmp106 = (frost$core$UInt64) {((uint64_t) $tmp105)};
if ($tmp103) goto block5; else goto block6;
block5:;
int64_t $tmp107 = $tmp100.value;
int64_t $tmp108 = $tmp101.value;
bool $tmp109 = $tmp107 <= $tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block2; else goto block3;
block6:;
int64_t $tmp112 = $tmp100.value;
int64_t $tmp113 = $tmp101.value;
bool $tmp114 = $tmp112 < $tmp113;
frost$core$Bit $tmp115 = (frost$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:76
frost$core$Immutable*** $tmp117 = &param0->data;
frost$core$Immutable** $tmp118 = *$tmp117;
frost$core$Int64 $tmp119 = *(&local0);
int64_t $tmp120 = $tmp119.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) NULL)));
frost$core$Immutable* $tmp121 = $tmp118[$tmp120];
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp121));
$tmp118[$tmp120] = ((frost$core$Immutable*) NULL);
frost$core$Int64 $tmp122 = *(&local0);
int64_t $tmp123 = $tmp101.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 - $tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {$tmp125};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp127 = $tmp126.value;
frost$core$UInt64 $tmp128 = (frost$core$UInt64) {((uint64_t) $tmp127)};
if ($tmp103) goto block9; else goto block10;
block9:;
uint64_t $tmp129 = $tmp128.value;
uint64_t $tmp130 = $tmp106.value;
bool $tmp131 = $tmp129 >= $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block7; else goto block3;
block10:;
uint64_t $tmp134 = $tmp128.value;
uint64_t $tmp135 = $tmp106.value;
bool $tmp136 = $tmp134 > $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block7; else goto block3;
block7:;
int64_t $tmp139 = $tmp122.value;
int64_t $tmp140 = $tmp104.value;
int64_t $tmp141 = $tmp139 + $tmp140;
frost$core$Int64 $tmp142 = (frost$core$Int64) {$tmp141};
*(&local0) = $tmp142;
goto block2;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:78
frost$core$Immutable*** $tmp143 = &param0->data;
frost$core$Immutable** $tmp144 = *$tmp143;
frostFree($tmp144);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:74
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
return;

}
frost$core$Immutable* frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T(frost$collections$ImmutableArray* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp145 = (frost$core$Int64) {0};
int64_t $tmp146 = param1.value;
int64_t $tmp147 = $tmp145.value;
bool $tmp148 = $tmp146 >= $tmp147;
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block3; else goto block2;
block3:;
ITable* $tmp151 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp151->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
frost$core$Int64 $tmp154 = $tmp152(((frost$collections$CollectionView*) param0));
int64_t $tmp155 = param1.value;
int64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 < $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp160 = (frost$core$Int64) {82};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s161, $tmp160, &$s162);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:83
frost$core$Int64 $tmp163 = (frost$core$Int64) {0};
int64_t $tmp164 = param1.value;
int64_t $tmp165 = $tmp163.value;
bool $tmp166 = $tmp164 >= $tmp165;
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
bool $tmp168 = $tmp167.value;
if ($tmp168) goto block4; else goto block5;
block4:;
ITable* $tmp169 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp169->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[0];
frost$core$Int64 $tmp172 = $tmp170(((frost$collections$CollectionView*) param0));
int64_t $tmp173 = param1.value;
int64_t $tmp174 = $tmp172.value;
bool $tmp175 = $tmp173 < $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
*(&local0) = $tmp176;
goto block6;
block5:;
*(&local0) = $tmp167;
goto block6;
block6:;
frost$core$Bit $tmp177 = *(&local0);
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block7; else goto block8;
block8:;
frost$core$Int64 $tmp179 = (frost$core$Int64) {83};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s180, $tmp179);
abort(); // unreachable
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:84
frost$core$Immutable*** $tmp181 = &param0->data;
frost$core$Immutable** $tmp182 = *$tmp181;
int64_t $tmp183 = param1.value;
frost$core$Immutable* $tmp184 = $tmp182[$tmp183];
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp184));
return $tmp184;

}
frost$core$Int64 frost$collections$ImmutableArray$get_count$R$frost$core$Int64(frost$collections$ImmutableArray* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:89
frost$core$Int64* $tmp185 = &param0->_count;
frost$core$Int64 $tmp186 = *$tmp185;
return $tmp186;

}
frost$collections$Iterator* frost$collections$ImmutableArray$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ImmutableArray$T$GT(frost$collections$ImmutableArray* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:94
FROST_ASSERT(32 == sizeof(frost$collections$ImmutableArray$ImmutableArrayIterator));
frost$collections$ImmutableArray$ImmutableArrayIterator* $tmp187 = (frost$collections$ImmutableArray$ImmutableArrayIterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$collections$ImmutableArray$ImmutableArrayIterator$class);
frost$collections$ImmutableArray$ImmutableArrayIterator$init$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$ImmutableArrayIterator$T$GT($tmp187, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp187)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp187));
return ((frost$collections$Iterator*) $tmp187);

}
frost$core$String* frost$collections$ImmutableArray$get_asString$R$frost$core$String(frost$collections$ImmutableArray* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Immutable* local2 = NULL;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:99
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp188 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp188);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
frost$core$MutableString* $tmp189 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp189));
*(&local0) = $tmp188;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp188));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:100
frost$core$MutableString* $tmp190 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp190, &$s191);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:101
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s192));
frost$core$String* $tmp193 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp193));
*(&local1) = &$s194;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:102
ITable* $tmp195 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp195->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[0];
frost$collections$Iterator* $tmp198 = $tmp196(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp199 = $tmp198->$class->itable;
while ($tmp199->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp199 = $tmp199->next;
}
$fn201 $tmp200 = $tmp199->methods[0];
frost$core$Bit $tmp202 = $tmp200($tmp198);
bool $tmp203 = $tmp202.value;
if ($tmp203) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Immutable*) NULL);
ITable* $tmp204 = $tmp198->$class->itable;
while ($tmp204->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp204 = $tmp204->next;
}
$fn206 $tmp205 = $tmp204->methods[1];
frost$core$Object* $tmp207 = $tmp205($tmp198);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Immutable*) $tmp207)));
frost$core$Immutable* $tmp208 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp208));
*(&local2) = ((frost$core$Immutable*) $tmp207);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:103
frost$core$MutableString* $tmp209 = *(&local0);
frost$core$String* $tmp210 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp209, $tmp210);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s211));
frost$core$String* $tmp212 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local1) = &$s213;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:105
frost$core$Immutable* $tmp214 = *(&local2);
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit(true);
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:106
frost$core$MutableString* $tmp217 = *(&local0);
frost$core$Immutable* $tmp218 = *(&local2);
// begin inline call to method frost.core.MutableString.append(o:frost.core.Object) from ImmutableArray.frost:106:30
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/MutableString.stub:46
$fn220 $tmp219 = ($fn220) ((frost$core$Object*) $tmp218)->$class->vtable[0];
frost$core$String* $tmp221 = $tmp219(((frost$core$Object*) $tmp218));
frost$core$MutableString$append$frost$core$String($tmp217, $tmp221);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
goto block5;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:109
frost$core$MutableString* $tmp222 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp222, &$s223);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
frost$core$Immutable* $tmp224 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp224));
*(&local2) = ((frost$core$Immutable*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp198));
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:112
frost$core$MutableString* $tmp225 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp225, &$s226);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:113
frost$core$MutableString* $tmp227 = *(&local0);
frost$core$String* $tmp228 = frost$core$MutableString$finish$R$frost$core$String($tmp227);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp228));
frost$core$String* $tmp229 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp229));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp230 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp228;

}

