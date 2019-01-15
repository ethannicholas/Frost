#include "frost/collections/Array.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListWriter.h"
#include "frost/collections/List.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Collection.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/MutableString.h"

__attribute__((weak)) frost$core$Object* frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int64 p1) {
    frost$core$Object* result = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(p0, p1);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) void frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int64 p1, frost$core$Object* p2) {
    frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) void frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int64 p1, frost$core$Object* p2) {
    frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T(p0, p1, p2);

}
__attribute__((weak)) frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Int64 p1) {
    frost$core$Object* result = frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T(p0, p1);

    return result;
}
__attribute__((weak)) void frost$collections$Array$add$frost$collections$Array$T$shim(frost$collections$Array* p0, frost$core$Object* p1) {
    frost$collections$Array$add$frost$collections$Array$T(p0, p1);

}
__attribute__((weak)) void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim(frost$collections$Array* p0, frost$collections$CollectionView* p1) {
    frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(p0, p1);

}

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$Array$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Array$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$Array$_frost$collections$ListView, { frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$Array$_frost$collections$ListWriter, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[7]; } frost$collections$Array$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$Array$_frost$collections$List, { frost$collections$Array$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Array$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionView, { frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionWriter, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$Array$_frost$collections$Iterable, { frost$collections$Array$clear} };

static frost$core$String $s1;
frost$collections$Array$class_type frost$collections$Array$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Array$_frost$collections$Collection, { frost$collections$Array$convert$R$frost$core$String, frost$collections$Array$cleanup, frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$ensureCapacity$frost$core$Int64, frost$collections$Array$get_count$R$frost$core$Int64, frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$Array$clear} };

typedef frost$core$Int64 (*$fn11)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn17)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn21)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn26)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn69)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn86)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn95)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn221)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn229)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn233)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn238)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn315)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn454)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn458)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn463)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s266 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s324 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s325 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -4431412078755008382, NULL };
static frost$core$String $s448 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s449 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s451 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s470 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s480 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

void frost$collections$Array$init(frost$collections$Array* param0) {

// line 31
frost$core$Int64 $tmp2 = (frost$core$Int64) {16};
frost$collections$Array$init$frost$core$Int64(param0, $tmp2);
return;

}
void frost$collections$Array$init$frost$core$Int64(frost$collections$Array* param0, frost$core$Int64 param1) {

// line 19
frost$core$Int64 $tmp3 = (frost$core$Int64) {0};
frost$core$Int64* $tmp4 = &param0->_count;
*$tmp4 = $tmp3;
// line 39
frost$core$Int64* $tmp5 = &param0->capacity;
*$tmp5 = param1;
// line 40
int64_t $tmp6 = param1.value;
frost$core$Object** $tmp7 = ((frost$core$Object**) frostZAlloc($tmp6 * 8));
frost$core$Object*** $tmp8 = &param0->data;
*$tmp8 = $tmp7;
return;

}
void frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// line 47
ITable* $tmp9 = param1->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
frost$core$Int64 $tmp12 = $tmp10(param1);
frost$core$Int64 $tmp13 = (frost$core$Int64) {16};
frost$core$Int64 $tmp14 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp12, $tmp13);
frost$collections$Array$init$frost$core$Int64(param0, $tmp14);
// line 48
ITable* $tmp15 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
frost$collections$Iterator* $tmp18 = $tmp16(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp19 = $tmp18->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$core$Bit $tmp22 = $tmp20($tmp18);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp24 = $tmp18->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[1];
frost$core$Object* $tmp27 = $tmp25($tmp18);
frost$core$Frost$ref$frost$core$Object$Q($tmp27);
frost$core$Object* $tmp28 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp28);
*(&local0) = $tmp27;
// line 49
frost$core$Object* $tmp29 = *(&local0);
frost$collections$Array$add$frost$collections$Array$T(param0, $tmp29);
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
// unreffing REF($23:frost.collections.Iterator.T)
frost$core$Object* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
// unreffing v
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
// unreffing REF($12:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int64(frost$collections$Array* param0, frost$core$Object** param1, frost$core$Int64 param2) {

// line 19
frost$core$Int64 $tmp31 = (frost$core$Int64) {0};
frost$core$Int64* $tmp32 = &param0->_count;
*$tmp32 = $tmp31;
// line 55
frost$core$Object*** $tmp33 = &param0->data;
*$tmp33 = param1;
// line 56
frost$core$Int64* $tmp34 = &param0->_count;
*$tmp34 = param2;
// line 57
frost$core$Int64* $tmp35 = &param0->capacity;
*$tmp35 = param2;
return;

}
void frost$collections$Array$cleanup(frost$collections$Array* param0) {

// line 62
frost$collections$Array$clear(param0);
// line 63
frost$core$Object*** $tmp36 = &param0->data;
frost$core$Object** $tmp37 = *$tmp36;
frostFree($tmp37);
// line 61
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Object* frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
int64_t $tmp39 = param1.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 >= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block1:;
ITable* $tmp44 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[0];
frost$core$Int64 $tmp47 = $tmp45(((frost$collections$CollectionView*) param0));
int64_t $tmp48 = param1.value;
int64_t $tmp49 = $tmp47.value;
bool $tmp50 = $tmp48 < $tmp49;
frost$core$Bit $tmp51 = (frost$core$Bit) {$tmp50};
*(&local0) = $tmp51;
goto block3;
block2:;
*(&local0) = $tmp42;
goto block3;
block3:;
frost$core$Bit $tmp52 = *(&local0);
bool $tmp53 = $tmp52.value;
if ($tmp53) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp54 = (frost$core$Int64) {67};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s55, $tmp54, &$s56);
abort(); // unreachable
block4:;
// line 68
frost$core$Object*** $tmp57 = &param0->data;
frost$core$Object** $tmp58 = *$tmp57;
int64_t $tmp59 = param1.value;
frost$core$Object* $tmp60 = $tmp58[$tmp59];
frost$core$Frost$ref$frost$core$Object$Q($tmp60);
return $tmp60;

}
void frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Bit local0;
frost$core$Int64 $tmp61 = (frost$core$Int64) {0};
int64_t $tmp62 = param1.value;
int64_t $tmp63 = $tmp61.value;
bool $tmp64 = $tmp62 >= $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block1; else goto block2;
block1:;
ITable* $tmp67 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp67->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp67 = $tmp67->next;
}
$fn69 $tmp68 = $tmp67->methods[0];
frost$core$Int64 $tmp70 = $tmp68(((frost$collections$CollectionView*) param0));
int64_t $tmp71 = param1.value;
int64_t $tmp72 = $tmp70.value;
bool $tmp73 = $tmp71 < $tmp72;
frost$core$Bit $tmp74 = (frost$core$Bit) {$tmp73};
*(&local0) = $tmp74;
goto block3;
block2:;
*(&local0) = $tmp65;
goto block3;
block3:;
frost$core$Bit $tmp75 = *(&local0);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block4:;
// line 73
frost$core$Object*** $tmp80 = &param0->data;
frost$core$Object** $tmp81 = *$tmp80;
int64_t $tmp82 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp83 = $tmp81[$tmp82];
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
$tmp81[$tmp82] = param2;
return;

}
void frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 local0;
// line 78
ITable* $tmp84 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp84->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp84 = $tmp84->next;
}
$fn86 $tmp85 = $tmp84->methods[0];
frost$core$Int64 $tmp87 = $tmp85(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp88 = (frost$core$Int64) {1};
int64_t $tmp89 = $tmp87.value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 + $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp92);
// line 79
ITable* $tmp93 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[0];
frost$core$Int64 $tmp96 = $tmp94(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp97 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp98 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp99 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp96, param1, $tmp97, $tmp98);
frost$core$Int64 $tmp100 = $tmp99.start;
*(&local0) = $tmp100;
frost$core$Int64 $tmp101 = $tmp99.end;
frost$core$Int64 $tmp102 = $tmp99.step;
frost$core$UInt64 $tmp103 = frost$core$Int64$convert$R$frost$core$UInt64($tmp102);
frost$core$Int64 $tmp104 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp102);
frost$core$UInt64 $tmp105 = frost$core$Int64$convert$R$frost$core$UInt64($tmp104);
frost$core$Bit $tmp106 = $tmp99.inclusive;
bool $tmp107 = $tmp106.value;
frost$core$Int64 $tmp108 = (frost$core$Int64) {0};
int64_t $tmp109 = $tmp102.value;
int64_t $tmp110 = $tmp108.value;
bool $tmp111 = $tmp109 >= $tmp110;
frost$core$Bit $tmp112 = (frost$core$Bit) {$tmp111};
bool $tmp113 = $tmp112.value;
if ($tmp113) goto block4; else goto block5;
block4:;
if ($tmp107) goto block6; else goto block7;
block6:;
int64_t $tmp114 = $tmp100.value;
int64_t $tmp115 = $tmp101.value;
bool $tmp116 = $tmp114 <= $tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block1; else goto block2;
block7:;
int64_t $tmp119 = $tmp100.value;
int64_t $tmp120 = $tmp101.value;
bool $tmp121 = $tmp119 < $tmp120;
frost$core$Bit $tmp122 = (frost$core$Bit) {$tmp121};
bool $tmp123 = $tmp122.value;
if ($tmp123) goto block1; else goto block2;
block5:;
if ($tmp107) goto block8; else goto block9;
block8:;
int64_t $tmp124 = $tmp100.value;
int64_t $tmp125 = $tmp101.value;
bool $tmp126 = $tmp124 >= $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block1; else goto block2;
block9:;
int64_t $tmp129 = $tmp100.value;
int64_t $tmp130 = $tmp101.value;
bool $tmp131 = $tmp129 > $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block1; else goto block2;
block1:;
// line 80
frost$core$Object*** $tmp134 = &param0->data;
frost$core$Object** $tmp135 = *$tmp134;
frost$core$Int64 $tmp136 = *(&local0);
frost$core$Object*** $tmp137 = &param0->data;
frost$core$Object** $tmp138 = *$tmp137;
frost$core$Int64 $tmp139 = *(&local0);
frost$core$Int64 $tmp140 = (frost$core$Int64) {1};
int64_t $tmp141 = $tmp139.value;
int64_t $tmp142 = $tmp140.value;
int64_t $tmp143 = $tmp141 - $tmp142;
frost$core$Int64 $tmp144 = (frost$core$Int64) {$tmp143};
int64_t $tmp145 = $tmp144.value;
frost$core$Object* $tmp146 = $tmp138[$tmp145];
int64_t $tmp147 = $tmp136.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp146);
frost$core$Object* $tmp148 = $tmp135[$tmp147];
frost$core$Frost$unref$frost$core$Object$Q($tmp148);
$tmp135[$tmp147] = $tmp146;
goto block3;
block3:;
frost$core$Int64 $tmp149 = *(&local0);
if ($tmp113) goto block11; else goto block12;
block11:;
int64_t $tmp150 = $tmp101.value;
int64_t $tmp151 = $tmp149.value;
int64_t $tmp152 = $tmp150 - $tmp151;
frost$core$Int64 $tmp153 = (frost$core$Int64) {$tmp152};
frost$core$UInt64 $tmp154 = frost$core$Int64$convert$R$frost$core$UInt64($tmp153);
if ($tmp107) goto block13; else goto block14;
block13:;
uint64_t $tmp155 = $tmp154.value;
uint64_t $tmp156 = $tmp103.value;
bool $tmp157 = $tmp155 >= $tmp156;
frost$core$Bit $tmp158 = (frost$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block10; else goto block2;
block14:;
uint64_t $tmp160 = $tmp154.value;
uint64_t $tmp161 = $tmp103.value;
bool $tmp162 = $tmp160 > $tmp161;
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block10; else goto block2;
block12:;
int64_t $tmp165 = $tmp149.value;
int64_t $tmp166 = $tmp101.value;
int64_t $tmp167 = $tmp165 - $tmp166;
frost$core$Int64 $tmp168 = (frost$core$Int64) {$tmp167};
frost$core$UInt64 $tmp169 = frost$core$Int64$convert$R$frost$core$UInt64($tmp168);
if ($tmp107) goto block15; else goto block16;
block15:;
uint64_t $tmp170 = $tmp169.value;
uint64_t $tmp171 = $tmp105.value;
bool $tmp172 = $tmp170 >= $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block10; else goto block2;
block16:;
uint64_t $tmp175 = $tmp169.value;
uint64_t $tmp176 = $tmp105.value;
bool $tmp177 = $tmp175 > $tmp176;
frost$core$Bit $tmp178 = (frost$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block10; else goto block2;
block10:;
int64_t $tmp180 = $tmp149.value;
int64_t $tmp181 = $tmp102.value;
int64_t $tmp182 = $tmp180 + $tmp181;
frost$core$Int64 $tmp183 = (frost$core$Int64) {$tmp182};
*(&local0) = $tmp183;
goto block1;
block2:;
// line 82
frost$core$Int64* $tmp184 = &param0->_count;
frost$core$Int64 $tmp185 = *$tmp184;
frost$core$Int64 $tmp186 = (frost$core$Int64) {1};
int64_t $tmp187 = $tmp185.value;
int64_t $tmp188 = $tmp186.value;
int64_t $tmp189 = $tmp187 + $tmp188;
frost$core$Int64 $tmp190 = (frost$core$Int64) {$tmp189};
frost$core$Int64* $tmp191 = &param0->_count;
*$tmp191 = $tmp190;
// line 83
frost$core$Object*** $tmp192 = &param0->data;
frost$core$Object** $tmp193 = *$tmp192;
int64_t $tmp194 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp195 = $tmp193[$tmp194];
frost$core$Frost$unref$frost$core$Object$Q($tmp195);
$tmp193[$tmp194] = param2;
return;

}
void frost$collections$Array$add$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Object* param1) {

// line 88
frost$core$Int64* $tmp196 = &param0->_count;
frost$core$Int64 $tmp197 = *$tmp196;
frost$core$Int64 $tmp198 = (frost$core$Int64) {1};
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199 + $tmp200;
frost$core$Int64 $tmp202 = (frost$core$Int64) {$tmp201};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp202);
// line 89
frost$core$Object*** $tmp203 = &param0->data;
frost$core$Object** $tmp204 = *$tmp203;
frost$core$Int64* $tmp205 = &param0->_count;
frost$core$Int64 $tmp206 = *$tmp205;
int64_t $tmp207 = $tmp206.value;
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object* $tmp208 = $tmp204[$tmp207];
frost$core$Frost$unref$frost$core$Object$Q($tmp208);
$tmp204[$tmp207] = param1;
// line 90
frost$core$Int64* $tmp209 = &param0->_count;
frost$core$Int64 $tmp210 = *$tmp209;
frost$core$Int64 $tmp211 = (frost$core$Int64) {1};
int64_t $tmp212 = $tmp210.value;
int64_t $tmp213 = $tmp211.value;
int64_t $tmp214 = $tmp212 + $tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {$tmp214};
frost$core$Int64* $tmp216 = &param0->_count;
*$tmp216 = $tmp215;
return;

}
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// line 95
frost$core$Int64* $tmp217 = &param0->_count;
frost$core$Int64 $tmp218 = *$tmp217;
ITable* $tmp219 = param1->$class->itable;
while ($tmp219->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp219 = $tmp219->next;
}
$fn221 $tmp220 = $tmp219->methods[0];
frost$core$Int64 $tmp222 = $tmp220(param1);
int64_t $tmp223 = $tmp218.value;
int64_t $tmp224 = $tmp222.value;
int64_t $tmp225 = $tmp223 + $tmp224;
frost$core$Int64 $tmp226 = (frost$core$Int64) {$tmp225};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp226);
// line 96
ITable* $tmp227 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp227->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp227 = $tmp227->next;
}
$fn229 $tmp228 = $tmp227->methods[0];
frost$collections$Iterator* $tmp230 = $tmp228(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp231 = $tmp230->$class->itable;
while ($tmp231->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp231 = $tmp231->next;
}
$fn233 $tmp232 = $tmp231->methods[0];
frost$core$Bit $tmp234 = $tmp232($tmp230);
bool $tmp235 = $tmp234.value;
if ($tmp235) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp236 = $tmp230->$class->itable;
while ($tmp236->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp236 = $tmp236->next;
}
$fn238 $tmp237 = $tmp236->methods[1];
frost$core$Object* $tmp239 = $tmp237($tmp230);
frost$core$Frost$ref$frost$core$Object$Q($tmp239);
frost$core$Object* $tmp240 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp240);
*(&local0) = $tmp239;
// line 97
frost$core$Object*** $tmp241 = &param0->data;
frost$core$Object** $tmp242 = *$tmp241;
frost$core$Int64* $tmp243 = &param0->_count;
frost$core$Int64 $tmp244 = *$tmp243;
frost$core$Object* $tmp245 = *(&local0);
int64_t $tmp246 = $tmp244.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp245);
frost$core$Object* $tmp247 = $tmp242[$tmp246];
frost$core$Frost$unref$frost$core$Object$Q($tmp247);
$tmp242[$tmp246] = $tmp245;
// line 98
frost$core$Int64* $tmp248 = &param0->_count;
frost$core$Int64 $tmp249 = *$tmp248;
frost$core$Int64 $tmp250 = (frost$core$Int64) {1};
int64_t $tmp251 = $tmp249.value;
int64_t $tmp252 = $tmp250.value;
int64_t $tmp253 = $tmp251 + $tmp252;
frost$core$Int64 $tmp254 = (frost$core$Int64) {$tmp253};
frost$core$Int64* $tmp255 = &param0->_count;
*$tmp255 = $tmp254;
frost$core$Frost$unref$frost$core$Object$Q($tmp239);
// unreffing REF($28:frost.collections.Iterator.T)
frost$core$Object* $tmp256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
// unreffing v
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp230));
// unreffing REF($17:frost.collections.Iterator<frost.collections.Iterable.T>)
return;

}
void frost$collections$Array$ensureCapacity$frost$core$Int64(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
// line 103
frost$core$Int64* $tmp257 = &param0->capacity;
frost$core$Int64 $tmp258 = *$tmp257;
frost$core$Int64 $tmp259 = (frost$core$Int64) {0};
int64_t $tmp260 = $tmp258.value;
int64_t $tmp261 = $tmp259.value;
bool $tmp262 = $tmp260 >= $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp265 = (frost$core$Int64) {103};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s266, $tmp265);
abort(); // unreachable
block1:;
// line 104
frost$core$Int64* $tmp267 = &param0->capacity;
frost$core$Int64 $tmp268 = *$tmp267;
int64_t $tmp269 = param1.value;
int64_t $tmp270 = $tmp268.value;
bool $tmp271 = $tmp269 <= $tmp270;
frost$core$Bit $tmp272 = (frost$core$Bit) {$tmp271};
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block3; else goto block4;
block3:;
// line 105
return;
block4:;
// line 107
frost$core$Int64* $tmp274 = &param0->capacity;
frost$core$Int64 $tmp275 = *$tmp274;
*(&local0) = $tmp275;
// line 108
frost$core$Int64* $tmp276 = &param0->capacity;
frost$core$Int64 $tmp277 = *$tmp276;
frost$core$Int64 $tmp278 = (frost$core$Int64) {1};
frost$core$Int64 $tmp279 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp277, $tmp278);
frost$core$Int64* $tmp280 = &param0->capacity;
*$tmp280 = $tmp279;
// line 109
goto block5;
block5:;
frost$core$Int64* $tmp281 = &param0->capacity;
frost$core$Int64 $tmp282 = *$tmp281;
int64_t $tmp283 = $tmp282.value;
int64_t $tmp284 = param1.value;
bool $tmp285 = $tmp283 < $tmp284;
frost$core$Bit $tmp286 = (frost$core$Bit) {$tmp285};
bool $tmp287 = $tmp286.value;
if ($tmp287) goto block6; else goto block7;
block6:;
// line 110
frost$core$Int64* $tmp288 = &param0->capacity;
frost$core$Int64 $tmp289 = *$tmp288;
frost$core$Int64 $tmp290 = (frost$core$Int64) {2};
int64_t $tmp291 = $tmp289.value;
int64_t $tmp292 = $tmp290.value;
int64_t $tmp293 = $tmp291 * $tmp292;
frost$core$Int64 $tmp294 = (frost$core$Int64) {$tmp293};
frost$core$Int64* $tmp295 = &param0->capacity;
*$tmp295 = $tmp294;
goto block5;
block7:;
// line 112
frost$core$Object*** $tmp296 = &param0->data;
frost$core$Object** $tmp297 = *$tmp296;
frost$core$Int64 $tmp298 = *(&local0);
frost$core$Int64* $tmp299 = &param0->capacity;
frost$core$Int64 $tmp300 = *$tmp299;
int64_t $tmp301 = $tmp298.value;
int64_t $tmp302 = $tmp300.value;
frost$core$Object** $tmp303 = (frost$core$Object**) frostRealloc($tmp297, $tmp301 * 8, $tmp302 * 8);
frost$core$Object*** $tmp304 = &param0->data;
*$tmp304 = $tmp303;
return;

}
frost$core$Int64 frost$collections$Array$get_count$R$frost$core$Int64(frost$collections$Array* param0) {

// line 117
frost$core$Int64* $tmp305 = &param0->_count;
frost$core$Int64 $tmp306 = *$tmp305;
return $tmp306;

}
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Object* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 $tmp307 = (frost$core$Int64) {0};
int64_t $tmp308 = param1.value;
int64_t $tmp309 = $tmp307.value;
bool $tmp310 = $tmp308 >= $tmp309;
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block1; else goto block2;
block1:;
ITable* $tmp313 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp313->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp313 = $tmp313->next;
}
$fn315 $tmp314 = $tmp313->methods[0];
frost$core$Int64 $tmp316 = $tmp314(((frost$collections$CollectionView*) param0));
int64_t $tmp317 = param1.value;
int64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 < $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
*(&local0) = $tmp320;
goto block3;
block2:;
*(&local0) = $tmp311;
goto block3;
block3:;
frost$core$Bit $tmp321 = *(&local0);
bool $tmp322 = $tmp321.value;
if ($tmp322) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp323 = (frost$core$Int64) {121};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s324, $tmp323, &$s325);
abort(); // unreachable
block4:;
// line 122
frost$core$Object* $tmp326 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(param0, param1);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp326);
frost$core$Object* $tmp327 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp327);
*(&local1) = $tmp326;
frost$core$Frost$unref$frost$core$Object$Q($tmp326);
// unreffing REF($26:frost.collections.Array.T)
// line 123
frost$core$Int64* $tmp328 = &param0->_count;
frost$core$Int64 $tmp329 = *$tmp328;
frost$core$Int64 $tmp330 = (frost$core$Int64) {1};
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330.value;
int64_t $tmp333 = $tmp331 - $tmp332;
frost$core$Int64 $tmp334 = (frost$core$Int64) {$tmp333};
frost$core$Bit $tmp335 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp336 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp334, $tmp335);
frost$core$Int64 $tmp337 = $tmp336.min;
*(&local2) = $tmp337;
frost$core$Int64 $tmp338 = $tmp336.max;
frost$core$Bit $tmp339 = $tmp336.inclusive;
bool $tmp340 = $tmp339.value;
frost$core$Int64 $tmp341 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp342 = frost$core$Int64$convert$R$frost$core$UInt64($tmp341);
if ($tmp340) goto block9; else goto block10;
block9:;
int64_t $tmp343 = $tmp337.value;
int64_t $tmp344 = $tmp338.value;
bool $tmp345 = $tmp343 <= $tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
if ($tmp347) goto block6; else goto block7;
block10:;
int64_t $tmp348 = $tmp337.value;
int64_t $tmp349 = $tmp338.value;
bool $tmp350 = $tmp348 < $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block6; else goto block7;
block6:;
// line 124
frost$core$Int64 $tmp353 = *(&local2);
frost$core$Int64 $tmp354 = *(&local2);
frost$core$Int64 $tmp355 = (frost$core$Int64) {1};
int64_t $tmp356 = $tmp354.value;
int64_t $tmp357 = $tmp355.value;
int64_t $tmp358 = $tmp356 + $tmp357;
frost$core$Int64 $tmp359 = (frost$core$Int64) {$tmp358};
frost$core$Object* $tmp360 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(param0, $tmp359);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(param0, $tmp353, $tmp360);
frost$core$Frost$unref$frost$core$Object$Q($tmp360);
// unreffing REF($78:frost.collections.Array.T)
goto block8;
block8:;
frost$core$Int64 $tmp361 = *(&local2);
int64_t $tmp362 = $tmp338.value;
int64_t $tmp363 = $tmp361.value;
int64_t $tmp364 = $tmp362 - $tmp363;
frost$core$Int64 $tmp365 = (frost$core$Int64) {$tmp364};
frost$core$UInt64 $tmp366 = frost$core$Int64$convert$R$frost$core$UInt64($tmp365);
if ($tmp340) goto block12; else goto block13;
block12:;
uint64_t $tmp367 = $tmp366.value;
uint64_t $tmp368 = $tmp342.value;
bool $tmp369 = $tmp367 >= $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block11; else goto block7;
block13:;
uint64_t $tmp372 = $tmp366.value;
uint64_t $tmp373 = $tmp342.value;
bool $tmp374 = $tmp372 > $tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block11; else goto block7;
block11:;
int64_t $tmp377 = $tmp361.value;
int64_t $tmp378 = $tmp341.value;
int64_t $tmp379 = $tmp377 + $tmp378;
frost$core$Int64 $tmp380 = (frost$core$Int64) {$tmp379};
*(&local2) = $tmp380;
goto block6;
block7:;
// line 126
frost$core$Int64* $tmp381 = &param0->_count;
frost$core$Int64 $tmp382 = *$tmp381;
frost$core$Int64 $tmp383 = (frost$core$Int64) {1};
int64_t $tmp384 = $tmp382.value;
int64_t $tmp385 = $tmp383.value;
int64_t $tmp386 = $tmp384 - $tmp385;
frost$core$Int64 $tmp387 = (frost$core$Int64) {$tmp386};
frost$core$Int64* $tmp388 = &param0->_count;
*$tmp388 = $tmp387;
// line 127
frost$core$Object*** $tmp389 = &param0->data;
frost$core$Object** $tmp390 = *$tmp389;
frost$core$Int64* $tmp391 = &param0->_count;
frost$core$Int64 $tmp392 = *$tmp391;
int64_t $tmp393 = $tmp392.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object* $tmp394 = $tmp390[$tmp393];
frost$core$Frost$unref$frost$core$Object$Q($tmp394);
$tmp390[$tmp393] = ((frost$core$Object*) NULL);
// line 128
frost$core$Object* $tmp395 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp395);
frost$core$Object* $tmp396 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp396);
// unreffing result
*(&local1) = ((frost$core$Object*) NULL);
return $tmp395;

}
void frost$collections$Array$clear(frost$collections$Array* param0) {

frost$core$Int64 local0;
// line 133
frost$core$Int64 $tmp397 = (frost$core$Int64) {0};
frost$core$Int64* $tmp398 = &param0->_count;
*$tmp398 = $tmp397;
// line 134
frost$core$Int64 $tmp399 = (frost$core$Int64) {0};
frost$core$Int64* $tmp400 = &param0->capacity;
frost$core$Int64 $tmp401 = *$tmp400;
frost$core$Bit $tmp402 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp403 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp399, $tmp401, $tmp402);
frost$core$Int64 $tmp404 = $tmp403.min;
*(&local0) = $tmp404;
frost$core$Int64 $tmp405 = $tmp403.max;
frost$core$Bit $tmp406 = $tmp403.inclusive;
bool $tmp407 = $tmp406.value;
frost$core$Int64 $tmp408 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp409 = frost$core$Int64$convert$R$frost$core$UInt64($tmp408);
if ($tmp407) goto block4; else goto block5;
block4:;
int64_t $tmp410 = $tmp404.value;
int64_t $tmp411 = $tmp405.value;
bool $tmp412 = $tmp410 <= $tmp411;
frost$core$Bit $tmp413 = (frost$core$Bit) {$tmp412};
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block1; else goto block2;
block5:;
int64_t $tmp415 = $tmp404.value;
int64_t $tmp416 = $tmp405.value;
bool $tmp417 = $tmp415 < $tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block1; else goto block2;
block1:;
// line 135
frost$core$Object*** $tmp420 = &param0->data;
frost$core$Object** $tmp421 = *$tmp420;
frost$core$Int64 $tmp422 = *(&local0);
int64_t $tmp423 = $tmp422.value;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object* $tmp424 = $tmp421[$tmp423];
frost$core$Frost$unref$frost$core$Object$Q($tmp424);
$tmp421[$tmp423] = ((frost$core$Object*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp425 = *(&local0);
int64_t $tmp426 = $tmp405.value;
int64_t $tmp427 = $tmp425.value;
int64_t $tmp428 = $tmp426 - $tmp427;
frost$core$Int64 $tmp429 = (frost$core$Int64) {$tmp428};
frost$core$UInt64 $tmp430 = frost$core$Int64$convert$R$frost$core$UInt64($tmp429);
if ($tmp407) goto block7; else goto block8;
block7:;
uint64_t $tmp431 = $tmp430.value;
uint64_t $tmp432 = $tmp409.value;
bool $tmp433 = $tmp431 >= $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
bool $tmp435 = $tmp434.value;
if ($tmp435) goto block6; else goto block2;
block8:;
uint64_t $tmp436 = $tmp430.value;
uint64_t $tmp437 = $tmp409.value;
bool $tmp438 = $tmp436 > $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block6; else goto block2;
block6:;
int64_t $tmp441 = $tmp425.value;
int64_t $tmp442 = $tmp408.value;
int64_t $tmp443 = $tmp441 + $tmp442;
frost$core$Int64 $tmp444 = (frost$core$Int64) {$tmp443};
*(&local0) = $tmp444;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$Array$convert$R$frost$core$String(frost$collections$Array* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 141
frost$core$MutableString* $tmp445 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp445);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
frost$core$MutableString* $tmp446 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp446));
*(&local0) = $tmp445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp445));
// unreffing REF($1:frost.core.MutableString)
// line 142
frost$core$MutableString* $tmp447 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp447, &$s448);
// line 143
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s449));
frost$core$String* $tmp450 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
*(&local1) = &$s451;
// line 144
ITable* $tmp452 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp452->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp452 = $tmp452->next;
}
$fn454 $tmp453 = $tmp452->methods[0];
frost$collections$Iterator* $tmp455 = $tmp453(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp456 = $tmp455->$class->itable;
while ($tmp456->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp456 = $tmp456->next;
}
$fn458 $tmp457 = $tmp456->methods[0];
frost$core$Bit $tmp459 = $tmp457($tmp455);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp461 = $tmp455->$class->itable;
while ($tmp461->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp461 = $tmp461->next;
}
$fn463 $tmp462 = $tmp461->methods[1];
frost$core$Object* $tmp464 = $tmp462($tmp455);
frost$core$Frost$ref$frost$core$Object$Q($tmp464);
frost$core$Object* $tmp465 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp465);
*(&local2) = $tmp464;
// line 145
frost$core$MutableString* $tmp466 = *(&local0);
frost$core$String* $tmp467 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp466, $tmp467);
// line 146
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s468));
frost$core$String* $tmp469 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp469));
*(&local1) = &$s470;
// line 147
frost$core$Object* $tmp471 = *(&local2);
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit(true);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block4; else goto block6;
block4:;
// line 148
frost$core$MutableString* $tmp474 = *(&local0);
frost$core$Object* $tmp475 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp474, $tmp475);
goto block5;
block6:;
// line 1
// line 151
frost$core$MutableString* $tmp476 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp476, &$s477);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp464);
// unreffing REF($39:frost.collections.Iterator.T)
frost$core$Object* $tmp478 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp478);
// unreffing v
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
// unreffing REF($28:frost.collections.Iterator<frost.collections.Iterable.T>)
// line 154
frost$core$MutableString* $tmp479 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp479, &$s480);
// line 155
frost$core$MutableString* $tmp481 = *(&local0);
frost$core$String* $tmp482 = frost$core$MutableString$finish$R$frost$core$String($tmp481);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp482));
// unreffing REF($91:frost.core.String)
frost$core$String* $tmp483 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
// unreffing separator
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp484 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp484));
// unreffing result
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp482;

}

