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

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$Array$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Array$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$Array$_frost$collections$ListView, { frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$Array$_frost$collections$ListWriter, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$Array$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$Array$_frost$collections$List, { frost$collections$Array$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Array$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionView, { frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionWriter, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$Array$_frost$collections$Iterable, { frost$collections$Array$clear} };

static frost$core$String $s1;
frost$collections$Array$class_type frost$collections$Array$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Array$_frost$collections$Collection, { frost$collections$Array$get_asString$R$frost$core$String, frost$collections$Array$cleanup, frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$ensureCapacity$frost$core$Int64, frost$collections$Array$get_count$R$frost$core$Int64, frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$Array$clear} };

typedef frost$core$Int64 (*$fn11)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn17)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn21)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn26)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn46)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn68)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn90)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn102)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn111)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn237)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn245)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn249)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn254)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn321)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn459)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn463)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn468)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s54 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s77 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s98 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s99 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 119, -5937336087768054814, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -4431412078755008382, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s456 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s473 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s475 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s482 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s485 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

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
frost$core$Object** $tmp7 = ((frost$core$Object**) frostAlloc($tmp6 * 8));
frost$core$Object*** $tmp8 = &param0->data;
*$tmp8 = $tmp7;
return;

}
void frost$collections$Array$init$frost$collections$ListView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$ListView* param1) {

frost$core$Object* local0 = NULL;
// line 47
ITable* $tmp9 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp9 = $tmp9->next;
}
$fn11 $tmp10 = $tmp9->methods[0];
frost$core$Int64 $tmp12 = $tmp10(((frost$collections$CollectionView*) param1));
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
frost$core$Object* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
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

frost$core$Int64 $tmp38 = (frost$core$Int64) {0};
int64_t $tmp39 = param1.value;
int64_t $tmp40 = $tmp38.value;
bool $tmp41 = $tmp39 >= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block3; else goto block2;
block3:;
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
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp53 = (frost$core$Int64) {67};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block1:;
// line 68
frost$core$Object*** $tmp56 = &param0->data;
frost$core$Object** $tmp57 = *$tmp56;
int64_t $tmp58 = param1.value;
frost$core$Object* $tmp59 = $tmp57[$tmp58];
frost$core$Frost$ref$frost$core$Object$Q($tmp59);
return $tmp59;

}
void frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 $tmp60 = (frost$core$Int64) {0};
int64_t $tmp61 = param1.value;
int64_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 >= $tmp62;
frost$core$Bit $tmp64 = (frost$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block3; else goto block2;
block3:;
ITable* $tmp66 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp66->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp66 = $tmp66->next;
}
$fn68 $tmp67 = $tmp66->methods[0];
frost$core$Int64 $tmp69 = $tmp67(((frost$collections$CollectionView*) param0));
int64_t $tmp70 = param1.value;
int64_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 < $tmp71;
frost$core$Bit $tmp73 = (frost$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp75 = (frost$core$Int64) {72};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s76, $tmp75, &$s77);
abort(); // unreachable
block1:;
// line 73
frost$core$Object*** $tmp78 = &param0->data;
frost$core$Object** $tmp79 = *$tmp78;
int64_t $tmp80 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp81 = $tmp79[$tmp80];
frost$core$Frost$unref$frost$core$Object$Q($tmp81);
$tmp79[$tmp80] = param2;
return;

}
void frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$core$Int64 $tmp82 = (frost$core$Int64) {0};
int64_t $tmp83 = param1.value;
int64_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 >= $tmp84;
frost$core$Bit $tmp86 = (frost$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block3; else goto block2;
block3:;
ITable* $tmp88 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp88->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp88 = $tmp88->next;
}
$fn90 $tmp89 = $tmp88->methods[0];
frost$core$Int64 $tmp91 = $tmp89(((frost$collections$CollectionView*) param0));
int64_t $tmp92 = param1.value;
int64_t $tmp93 = $tmp91.value;
bool $tmp94 = $tmp92 <= $tmp93;
frost$core$Bit $tmp95 = (frost$core$Bit) {$tmp94};
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp97 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s98, $tmp97, &$s99);
abort(); // unreachable
block1:;
// line 78
ITable* $tmp100 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Int64 $tmp103 = $tmp101(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp104 = (frost$core$Int64) {1};
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104.value;
int64_t $tmp107 = $tmp105 + $tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {$tmp107};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp108);
// line 79
ITable* $tmp109 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp109->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
frost$core$Int64 $tmp112 = $tmp110(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp113 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp114 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp115 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp112, param1, $tmp113, $tmp114);
frost$core$Int64 $tmp116 = $tmp115.start;
*(&local0) = $tmp116;
frost$core$Int64 $tmp117 = $tmp115.end;
frost$core$Int64 $tmp118 = $tmp115.step;
frost$core$UInt64 $tmp119 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp118);
frost$core$Int64 $tmp120 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp118);
frost$core$UInt64 $tmp121 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp120);
frost$core$Bit $tmp122 = $tmp115.inclusive;
bool $tmp123 = $tmp122.value;
frost$core$Int64 $tmp124 = (frost$core$Int64) {0};
int64_t $tmp125 = $tmp118.value;
int64_t $tmp126 = $tmp124.value;
bool $tmp127 = $tmp125 >= $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
bool $tmp129 = $tmp128.value;
if ($tmp129) goto block7; else goto block8;
block7:;
if ($tmp123) goto block9; else goto block10;
block9:;
int64_t $tmp130 = $tmp116.value;
int64_t $tmp131 = $tmp117.value;
bool $tmp132 = $tmp130 <= $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block4; else goto block5;
block10:;
int64_t $tmp135 = $tmp116.value;
int64_t $tmp136 = $tmp117.value;
bool $tmp137 = $tmp135 < $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block4; else goto block5;
block8:;
if ($tmp123) goto block11; else goto block12;
block11:;
int64_t $tmp140 = $tmp116.value;
int64_t $tmp141 = $tmp117.value;
bool $tmp142 = $tmp140 >= $tmp141;
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
bool $tmp144 = $tmp143.value;
if ($tmp144) goto block4; else goto block5;
block12:;
int64_t $tmp145 = $tmp116.value;
int64_t $tmp146 = $tmp117.value;
bool $tmp147 = $tmp145 > $tmp146;
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block4; else goto block5;
block4:;
// line 80
frost$core$Object*** $tmp150 = &param0->data;
frost$core$Object** $tmp151 = *$tmp150;
frost$core$Int64 $tmp152 = *(&local0);
frost$core$Object*** $tmp153 = &param0->data;
frost$core$Object** $tmp154 = *$tmp153;
frost$core$Int64 $tmp155 = *(&local0);
frost$core$Int64 $tmp156 = (frost$core$Int64) {1};
int64_t $tmp157 = $tmp155.value;
int64_t $tmp158 = $tmp156.value;
int64_t $tmp159 = $tmp157 - $tmp158;
frost$core$Int64 $tmp160 = (frost$core$Int64) {$tmp159};
int64_t $tmp161 = $tmp160.value;
frost$core$Object* $tmp162 = $tmp154[$tmp161];
int64_t $tmp163 = $tmp152.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp162);
frost$core$Object* $tmp164 = $tmp151[$tmp163];
frost$core$Frost$unref$frost$core$Object$Q($tmp164);
$tmp151[$tmp163] = $tmp162;
goto block6;
block6:;
frost$core$Int64 $tmp165 = *(&local0);
if ($tmp129) goto block14; else goto block15;
block14:;
int64_t $tmp166 = $tmp117.value;
int64_t $tmp167 = $tmp165.value;
int64_t $tmp168 = $tmp166 - $tmp167;
frost$core$Int64 $tmp169 = (frost$core$Int64) {$tmp168};
frost$core$UInt64 $tmp170 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp169);
if ($tmp123) goto block16; else goto block17;
block16:;
uint64_t $tmp171 = $tmp170.value;
uint64_t $tmp172 = $tmp119.value;
bool $tmp173 = $tmp171 >= $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block13; else goto block5;
block17:;
uint64_t $tmp176 = $tmp170.value;
uint64_t $tmp177 = $tmp119.value;
bool $tmp178 = $tmp176 > $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block13; else goto block5;
block15:;
int64_t $tmp181 = $tmp165.value;
int64_t $tmp182 = $tmp117.value;
int64_t $tmp183 = $tmp181 - $tmp182;
frost$core$Int64 $tmp184 = (frost$core$Int64) {$tmp183};
frost$core$UInt64 $tmp185 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp184);
if ($tmp123) goto block18; else goto block19;
block18:;
uint64_t $tmp186 = $tmp185.value;
uint64_t $tmp187 = $tmp121.value;
bool $tmp188 = $tmp186 >= $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block13; else goto block5;
block19:;
uint64_t $tmp191 = $tmp185.value;
uint64_t $tmp192 = $tmp121.value;
bool $tmp193 = $tmp191 > $tmp192;
frost$core$Bit $tmp194 = (frost$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block13; else goto block5;
block13:;
int64_t $tmp196 = $tmp165.value;
int64_t $tmp197 = $tmp118.value;
int64_t $tmp198 = $tmp196 + $tmp197;
frost$core$Int64 $tmp199 = (frost$core$Int64) {$tmp198};
*(&local0) = $tmp199;
goto block4;
block5:;
// line 82
frost$core$Int64* $tmp200 = &param0->_count;
frost$core$Int64 $tmp201 = *$tmp200;
frost$core$Int64 $tmp202 = (frost$core$Int64) {1};
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202.value;
int64_t $tmp205 = $tmp203 + $tmp204;
frost$core$Int64 $tmp206 = (frost$core$Int64) {$tmp205};
frost$core$Int64* $tmp207 = &param0->_count;
*$tmp207 = $tmp206;
// line 83
frost$core$Object*** $tmp208 = &param0->data;
frost$core$Object** $tmp209 = *$tmp208;
int64_t $tmp210 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp211 = $tmp209[$tmp210];
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
$tmp209[$tmp210] = param2;
return;

}
void frost$collections$Array$add$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Object* param1) {

// line 88
frost$core$Int64* $tmp212 = &param0->_count;
frost$core$Int64 $tmp213 = *$tmp212;
frost$core$Int64 $tmp214 = (frost$core$Int64) {1};
int64_t $tmp215 = $tmp213.value;
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215 + $tmp216;
frost$core$Int64 $tmp218 = (frost$core$Int64) {$tmp217};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp218);
// line 89
frost$core$Object*** $tmp219 = &param0->data;
frost$core$Object** $tmp220 = *$tmp219;
frost$core$Int64* $tmp221 = &param0->_count;
frost$core$Int64 $tmp222 = *$tmp221;
int64_t $tmp223 = $tmp222.value;
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object* $tmp224 = $tmp220[$tmp223];
frost$core$Frost$unref$frost$core$Object$Q($tmp224);
$tmp220[$tmp223] = param1;
// line 90
frost$core$Int64* $tmp225 = &param0->_count;
frost$core$Int64 $tmp226 = *$tmp225;
frost$core$Int64 $tmp227 = (frost$core$Int64) {1};
int64_t $tmp228 = $tmp226.value;
int64_t $tmp229 = $tmp227.value;
int64_t $tmp230 = $tmp228 + $tmp229;
frost$core$Int64 $tmp231 = (frost$core$Int64) {$tmp230};
frost$core$Int64* $tmp232 = &param0->_count;
*$tmp232 = $tmp231;
return;

}
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// line 95
frost$core$Int64* $tmp233 = &param0->_count;
frost$core$Int64 $tmp234 = *$tmp233;
ITable* $tmp235 = param1->$class->itable;
while ($tmp235->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[0];
frost$core$Int64 $tmp238 = $tmp236(param1);
int64_t $tmp239 = $tmp234.value;
int64_t $tmp240 = $tmp238.value;
int64_t $tmp241 = $tmp239 + $tmp240;
frost$core$Int64 $tmp242 = (frost$core$Int64) {$tmp241};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp242);
// line 96
ITable* $tmp243 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp243->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp243 = $tmp243->next;
}
$fn245 $tmp244 = $tmp243->methods[0];
frost$collections$Iterator* $tmp246 = $tmp244(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp247 = $tmp246->$class->itable;
while ($tmp247->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp247 = $tmp247->next;
}
$fn249 $tmp248 = $tmp247->methods[0];
frost$core$Bit $tmp250 = $tmp248($tmp246);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp252 = $tmp246->$class->itable;
while ($tmp252->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp252 = $tmp252->next;
}
$fn254 $tmp253 = $tmp252->methods[1];
frost$core$Object* $tmp255 = $tmp253($tmp246);
frost$core$Frost$ref$frost$core$Object$Q($tmp255);
frost$core$Object* $tmp256 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp256);
*(&local0) = $tmp255;
// line 97
frost$core$Object*** $tmp257 = &param0->data;
frost$core$Object** $tmp258 = *$tmp257;
frost$core$Int64* $tmp259 = &param0->_count;
frost$core$Int64 $tmp260 = *$tmp259;
frost$core$Object* $tmp261 = *(&local0);
int64_t $tmp262 = $tmp260.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp261);
frost$core$Object* $tmp263 = $tmp258[$tmp262];
frost$core$Frost$unref$frost$core$Object$Q($tmp263);
$tmp258[$tmp262] = $tmp261;
// line 98
frost$core$Int64* $tmp264 = &param0->_count;
frost$core$Int64 $tmp265 = *$tmp264;
frost$core$Int64 $tmp266 = (frost$core$Int64) {1};
int64_t $tmp267 = $tmp265.value;
int64_t $tmp268 = $tmp266.value;
int64_t $tmp269 = $tmp267 + $tmp268;
frost$core$Int64 $tmp270 = (frost$core$Int64) {$tmp269};
frost$core$Int64* $tmp271 = &param0->_count;
*$tmp271 = $tmp270;
frost$core$Frost$unref$frost$core$Object$Q($tmp255);
frost$core$Object* $tmp272 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp272);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp246));
return;

}
void frost$collections$Array$ensureCapacity$frost$core$Int64(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
// line 103
frost$core$Int64* $tmp273 = &param0->capacity;
frost$core$Int64 $tmp274 = *$tmp273;
int64_t $tmp275 = param1.value;
int64_t $tmp276 = $tmp274.value;
bool $tmp277 = $tmp275 <= $tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block1; else goto block2;
block1:;
// line 104
return;
block2:;
// line 106
frost$core$Int64* $tmp280 = &param0->capacity;
frost$core$Int64 $tmp281 = *$tmp280;
*(&local0) = $tmp281;
// line 107
frost$core$Int64* $tmp282 = &param0->capacity;
frost$core$Int64 $tmp283 = *$tmp282;
frost$core$Int64 $tmp284 = (frost$core$Int64) {1};
frost$core$Int64 $tmp285 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp283, $tmp284);
frost$core$Int64* $tmp286 = &param0->capacity;
*$tmp286 = $tmp285;
// line 108
goto block3;
block3:;
frost$core$Int64* $tmp287 = &param0->capacity;
frost$core$Int64 $tmp288 = *$tmp287;
int64_t $tmp289 = $tmp288.value;
int64_t $tmp290 = param1.value;
bool $tmp291 = $tmp289 < $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block4; else goto block5;
block4:;
// line 109
frost$core$Int64* $tmp294 = &param0->capacity;
frost$core$Int64 $tmp295 = *$tmp294;
frost$core$Int64 $tmp296 = (frost$core$Int64) {2};
int64_t $tmp297 = $tmp295.value;
int64_t $tmp298 = $tmp296.value;
int64_t $tmp299 = $tmp297 * $tmp298;
frost$core$Int64 $tmp300 = (frost$core$Int64) {$tmp299};
frost$core$Int64* $tmp301 = &param0->capacity;
*$tmp301 = $tmp300;
goto block3;
block5:;
// line 111
frost$core$Object*** $tmp302 = &param0->data;
frost$core$Object** $tmp303 = *$tmp302;
frost$core$Int64 $tmp304 = *(&local0);
frost$core$Int64* $tmp305 = &param0->capacity;
frost$core$Int64 $tmp306 = *$tmp305;
int64_t $tmp307 = $tmp304.value;
int64_t $tmp308 = $tmp306.value;
frost$core$Object** $tmp309 = (frost$core$Object**) frostRealloc($tmp303, $tmp307 * 8, $tmp308 * 8);
frost$core$Object*** $tmp310 = &param0->data;
*$tmp310 = $tmp309;
return;

}
frost$core$Int64 frost$collections$Array$get_count$R$frost$core$Int64(frost$collections$Array* param0) {

// line 116
frost$core$Int64* $tmp311 = &param0->_count;
frost$core$Int64 $tmp312 = *$tmp311;
return $tmp312;

}
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Object* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp313 = (frost$core$Int64) {0};
int64_t $tmp314 = param1.value;
int64_t $tmp315 = $tmp313.value;
bool $tmp316 = $tmp314 >= $tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
bool $tmp318 = $tmp317.value;
if ($tmp318) goto block3; else goto block2;
block3:;
ITable* $tmp319 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp319->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
frost$core$Int64 $tmp322 = $tmp320(((frost$collections$CollectionView*) param0));
int64_t $tmp323 = param1.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 < $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp328 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s329, $tmp328, &$s330);
abort(); // unreachable
block1:;
// line 121
frost$core$Object* $tmp331 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(param0, param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp331);
frost$core$Object* $tmp332 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp332);
*(&local0) = $tmp331;
frost$core$Frost$unref$frost$core$Object$Q($tmp331);
// line 122
frost$core$Int64* $tmp333 = &param0->_count;
frost$core$Int64 $tmp334 = *$tmp333;
frost$core$Int64 $tmp335 = (frost$core$Int64) {1};
int64_t $tmp336 = $tmp334.value;
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336 - $tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {$tmp338};
frost$core$Bit $tmp340 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp341 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp339, $tmp340);
frost$core$Int64 $tmp342 = $tmp341.min;
*(&local1) = $tmp342;
frost$core$Int64 $tmp343 = $tmp341.max;
frost$core$Bit $tmp344 = $tmp341.inclusive;
bool $tmp345 = $tmp344.value;
frost$core$Int64 $tmp346 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp347 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp346);
if ($tmp345) goto block7; else goto block8;
block7:;
int64_t $tmp348 = $tmp342.value;
int64_t $tmp349 = $tmp343.value;
bool $tmp350 = $tmp348 <= $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
if ($tmp352) goto block4; else goto block5;
block8:;
int64_t $tmp353 = $tmp342.value;
int64_t $tmp354 = $tmp343.value;
bool $tmp355 = $tmp353 < $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block4; else goto block5;
block4:;
// line 123
frost$core$Int64 $tmp358 = *(&local1);
frost$core$Int64 $tmp359 = *(&local1);
frost$core$Int64 $tmp360 = (frost$core$Int64) {1};
int64_t $tmp361 = $tmp359.value;
int64_t $tmp362 = $tmp360.value;
int64_t $tmp363 = $tmp361 + $tmp362;
frost$core$Int64 $tmp364 = (frost$core$Int64) {$tmp363};
frost$core$Object* $tmp365 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(param0, $tmp364);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(param0, $tmp358, $tmp365);
frost$core$Frost$unref$frost$core$Object$Q($tmp365);
goto block6;
block6:;
frost$core$Int64 $tmp366 = *(&local1);
int64_t $tmp367 = $tmp343.value;
int64_t $tmp368 = $tmp366.value;
int64_t $tmp369 = $tmp367 - $tmp368;
frost$core$Int64 $tmp370 = (frost$core$Int64) {$tmp369};
frost$core$UInt64 $tmp371 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp370);
if ($tmp345) goto block10; else goto block11;
block10:;
uint64_t $tmp372 = $tmp371.value;
uint64_t $tmp373 = $tmp347.value;
bool $tmp374 = $tmp372 >= $tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block9; else goto block5;
block11:;
uint64_t $tmp377 = $tmp371.value;
uint64_t $tmp378 = $tmp347.value;
bool $tmp379 = $tmp377 > $tmp378;
frost$core$Bit $tmp380 = (frost$core$Bit) {$tmp379};
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block9; else goto block5;
block9:;
int64_t $tmp382 = $tmp366.value;
int64_t $tmp383 = $tmp346.value;
int64_t $tmp384 = $tmp382 + $tmp383;
frost$core$Int64 $tmp385 = (frost$core$Int64) {$tmp384};
*(&local1) = $tmp385;
goto block4;
block5:;
// line 125
frost$core$Int64* $tmp386 = &param0->_count;
frost$core$Int64 $tmp387 = *$tmp386;
frost$core$Int64 $tmp388 = (frost$core$Int64) {1};
int64_t $tmp389 = $tmp387.value;
int64_t $tmp390 = $tmp388.value;
int64_t $tmp391 = $tmp389 - $tmp390;
frost$core$Int64 $tmp392 = (frost$core$Int64) {$tmp391};
frost$core$Int64* $tmp393 = &param0->_count;
*$tmp393 = $tmp392;
// line 126
frost$core$Object*** $tmp394 = &param0->data;
frost$core$Object** $tmp395 = *$tmp394;
frost$core$Int64* $tmp396 = &param0->_count;
frost$core$Int64 $tmp397 = *$tmp396;
int64_t $tmp398 = $tmp397.value;
frost$core$Object* $tmp399 = $tmp395[$tmp398];
frost$core$Frost$unref$frost$core$Object$Q($tmp399);
$tmp395[$tmp398] = ((frost$core$Object*) NULL);
// line 127
frost$core$Object* $tmp400 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp400);
frost$core$Object* $tmp401 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp401);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp400;

}
void frost$collections$Array$clear(frost$collections$Array* param0) {

frost$core$Int64 local0;
// line 132
frost$core$Int64 $tmp402 = (frost$core$Int64) {0};
frost$core$Int64* $tmp403 = &param0->_count;
*$tmp403 = $tmp402;
// line 133
frost$core$Int64 $tmp404 = (frost$core$Int64) {0};
frost$core$Int64* $tmp405 = &param0->capacity;
frost$core$Int64 $tmp406 = *$tmp405;
frost$core$Bit $tmp407 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp408 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp404, $tmp406, $tmp407);
frost$core$Int64 $tmp409 = $tmp408.min;
*(&local0) = $tmp409;
frost$core$Int64 $tmp410 = $tmp408.max;
frost$core$Bit $tmp411 = $tmp408.inclusive;
bool $tmp412 = $tmp411.value;
frost$core$Int64 $tmp413 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp414 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp413);
if ($tmp412) goto block4; else goto block5;
block4:;
int64_t $tmp415 = $tmp409.value;
int64_t $tmp416 = $tmp410.value;
bool $tmp417 = $tmp415 <= $tmp416;
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block1; else goto block2;
block5:;
int64_t $tmp420 = $tmp409.value;
int64_t $tmp421 = $tmp410.value;
bool $tmp422 = $tmp420 < $tmp421;
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block1; else goto block2;
block1:;
// line 134
frost$core$Object*** $tmp425 = &param0->data;
frost$core$Object** $tmp426 = *$tmp425;
frost$core$Int64 $tmp427 = *(&local0);
int64_t $tmp428 = $tmp427.value;
frost$core$Object* $tmp429 = $tmp426[$tmp428];
frost$core$Frost$unref$frost$core$Object$Q($tmp429);
$tmp426[$tmp428] = ((frost$core$Object*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp430 = *(&local0);
int64_t $tmp431 = $tmp410.value;
int64_t $tmp432 = $tmp430.value;
int64_t $tmp433 = $tmp431 - $tmp432;
frost$core$Int64 $tmp434 = (frost$core$Int64) {$tmp433};
frost$core$UInt64 $tmp435 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp434);
if ($tmp412) goto block7; else goto block8;
block7:;
uint64_t $tmp436 = $tmp435.value;
uint64_t $tmp437 = $tmp414.value;
bool $tmp438 = $tmp436 >= $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block6; else goto block2;
block8:;
uint64_t $tmp441 = $tmp435.value;
uint64_t $tmp442 = $tmp414.value;
bool $tmp443 = $tmp441 > $tmp442;
frost$core$Bit $tmp444 = (frost$core$Bit) {$tmp443};
bool $tmp445 = $tmp444.value;
if ($tmp445) goto block6; else goto block2;
block6:;
int64_t $tmp446 = $tmp430.value;
int64_t $tmp447 = $tmp413.value;
int64_t $tmp448 = $tmp446 + $tmp447;
frost$core$Int64 $tmp449 = (frost$core$Int64) {$tmp448};
*(&local0) = $tmp449;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(frost$collections$Array* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 140
frost$core$MutableString* $tmp450 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp450);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
frost$core$MutableString* $tmp451 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp451));
*(&local0) = $tmp450;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp450));
// line 141
frost$core$MutableString* $tmp452 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp452, &$s453);
// line 142
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s454));
frost$core$String* $tmp455 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local1) = &$s456;
// line 143
ITable* $tmp457 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp457->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp457 = $tmp457->next;
}
$fn459 $tmp458 = $tmp457->methods[0];
frost$collections$Iterator* $tmp460 = $tmp458(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp461 = $tmp460->$class->itable;
while ($tmp461->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp461 = $tmp461->next;
}
$fn463 $tmp462 = $tmp461->methods[0];
frost$core$Bit $tmp464 = $tmp462($tmp460);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp466 = $tmp460->$class->itable;
while ($tmp466->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp466 = $tmp466->next;
}
$fn468 $tmp467 = $tmp466->methods[1];
frost$core$Object* $tmp469 = $tmp467($tmp460);
frost$core$Frost$ref$frost$core$Object$Q($tmp469);
frost$core$Object* $tmp470 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp470);
*(&local2) = $tmp469;
// line 144
frost$core$MutableString* $tmp471 = *(&local0);
frost$core$String* $tmp472 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp471, $tmp472);
// line 145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s473));
frost$core$String* $tmp474 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp474));
*(&local1) = &$s475;
// line 146
frost$core$Object* $tmp476 = *(&local2);
frost$core$Bit $tmp477 = frost$core$Bit$init$builtin_bit(true);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block4; else goto block6;
block4:;
// line 147
frost$core$MutableString* $tmp479 = *(&local0);
frost$core$Object* $tmp480 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp479, $tmp480);
goto block5;
block6:;
// line 1
// line 150
frost$core$MutableString* $tmp481 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp481, &$s482);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp469);
frost$core$Object* $tmp483 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp483);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp460));
// line 153
frost$core$MutableString* $tmp484 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp484, &$s485);
// line 154
frost$core$MutableString* $tmp486 = *(&local0);
frost$core$String* $tmp487 = frost$core$MutableString$finish$R$frost$core$String($tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
frost$core$String* $tmp488 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp488));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp489 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp487;

}

