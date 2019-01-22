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
typedef frost$core$Int64 (*$fn69)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn92)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn105)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn114)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn240)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn248)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn252)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn257)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn324)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn463)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn467)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn472)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s55 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s56 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s101 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s102 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 119, -5937336087768054814, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -4431412078755008382, NULL };
static frost$core$String $s457 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s458 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s460 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s477 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s479 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s486 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s489 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5d", 1, 194, NULL };

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

frost$core$Bit local0;
frost$core$Int64 local1;
frost$core$Int64 $tmp84 = (frost$core$Int64) {0};
int64_t $tmp85 = param1.value;
int64_t $tmp86 = $tmp84.value;
bool $tmp87 = $tmp85 >= $tmp86;
frost$core$Bit $tmp88 = (frost$core$Bit) {$tmp87};
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block1; else goto block2;
block1:;
ITable* $tmp90 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp90->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp90 = $tmp90->next;
}
$fn92 $tmp91 = $tmp90->methods[0];
frost$core$Int64 $tmp93 = $tmp91(((frost$collections$CollectionView*) param0));
int64_t $tmp94 = param1.value;
int64_t $tmp95 = $tmp93.value;
bool $tmp96 = $tmp94 <= $tmp95;
frost$core$Bit $tmp97 = (frost$core$Bit) {$tmp96};
*(&local0) = $tmp97;
goto block3;
block2:;
*(&local0) = $tmp88;
goto block3;
block3:;
frost$core$Bit $tmp98 = *(&local0);
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp100 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s101, $tmp100, &$s102);
abort(); // unreachable
block4:;
// line 78
ITable* $tmp103 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp103->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp103 = $tmp103->next;
}
$fn105 $tmp104 = $tmp103->methods[0];
frost$core$Int64 $tmp106 = $tmp104(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp107 = (frost$core$Int64) {1};
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108 + $tmp109;
frost$core$Int64 $tmp111 = (frost$core$Int64) {$tmp110};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp111);
// line 79
ITable* $tmp112 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp112->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
frost$core$Int64 $tmp115 = $tmp113(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp116 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp117 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp118 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp115, param1, $tmp116, $tmp117);
frost$core$Int64 $tmp119 = $tmp118.start;
*(&local1) = $tmp119;
frost$core$Int64 $tmp120 = $tmp118.end;
frost$core$Int64 $tmp121 = $tmp118.step;
frost$core$UInt64 $tmp122 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp121);
frost$core$Int64 $tmp123 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp121);
frost$core$UInt64 $tmp124 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp123);
frost$core$Bit $tmp125 = $tmp118.inclusive;
bool $tmp126 = $tmp125.value;
frost$core$Int64 $tmp127 = (frost$core$Int64) {0};
int64_t $tmp128 = $tmp121.value;
int64_t $tmp129 = $tmp127.value;
bool $tmp130 = $tmp128 >= $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block9; else goto block10;
block9:;
if ($tmp126) goto block11; else goto block12;
block11:;
int64_t $tmp133 = $tmp119.value;
int64_t $tmp134 = $tmp120.value;
bool $tmp135 = $tmp133 <= $tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block6; else goto block7;
block12:;
int64_t $tmp138 = $tmp119.value;
int64_t $tmp139 = $tmp120.value;
bool $tmp140 = $tmp138 < $tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block6; else goto block7;
block10:;
if ($tmp126) goto block13; else goto block14;
block13:;
int64_t $tmp143 = $tmp119.value;
int64_t $tmp144 = $tmp120.value;
bool $tmp145 = $tmp143 >= $tmp144;
frost$core$Bit $tmp146 = (frost$core$Bit) {$tmp145};
bool $tmp147 = $tmp146.value;
if ($tmp147) goto block6; else goto block7;
block14:;
int64_t $tmp148 = $tmp119.value;
int64_t $tmp149 = $tmp120.value;
bool $tmp150 = $tmp148 > $tmp149;
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block6; else goto block7;
block6:;
// line 80
frost$core$Object*** $tmp153 = &param0->data;
frost$core$Object** $tmp154 = *$tmp153;
frost$core$Int64 $tmp155 = *(&local1);
frost$core$Object*** $tmp156 = &param0->data;
frost$core$Object** $tmp157 = *$tmp156;
frost$core$Int64 $tmp158 = *(&local1);
frost$core$Int64 $tmp159 = (frost$core$Int64) {1};
int64_t $tmp160 = $tmp158.value;
int64_t $tmp161 = $tmp159.value;
int64_t $tmp162 = $tmp160 - $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {$tmp162};
int64_t $tmp164 = $tmp163.value;
frost$core$Object* $tmp165 = $tmp157[$tmp164];
int64_t $tmp166 = $tmp155.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp165);
frost$core$Object* $tmp167 = $tmp154[$tmp166];
frost$core$Frost$unref$frost$core$Object$Q($tmp167);
$tmp154[$tmp166] = $tmp165;
goto block8;
block8:;
frost$core$Int64 $tmp168 = *(&local1);
if ($tmp132) goto block16; else goto block17;
block16:;
int64_t $tmp169 = $tmp120.value;
int64_t $tmp170 = $tmp168.value;
int64_t $tmp171 = $tmp169 - $tmp170;
frost$core$Int64 $tmp172 = (frost$core$Int64) {$tmp171};
frost$core$UInt64 $tmp173 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp172);
if ($tmp126) goto block18; else goto block19;
block18:;
uint64_t $tmp174 = $tmp173.value;
uint64_t $tmp175 = $tmp122.value;
bool $tmp176 = $tmp174 >= $tmp175;
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block15; else goto block7;
block19:;
uint64_t $tmp179 = $tmp173.value;
uint64_t $tmp180 = $tmp122.value;
bool $tmp181 = $tmp179 > $tmp180;
frost$core$Bit $tmp182 = (frost$core$Bit) {$tmp181};
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block15; else goto block7;
block17:;
int64_t $tmp184 = $tmp168.value;
int64_t $tmp185 = $tmp120.value;
int64_t $tmp186 = $tmp184 - $tmp185;
frost$core$Int64 $tmp187 = (frost$core$Int64) {$tmp186};
frost$core$UInt64 $tmp188 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp187);
if ($tmp126) goto block20; else goto block21;
block20:;
uint64_t $tmp189 = $tmp188.value;
uint64_t $tmp190 = $tmp124.value;
bool $tmp191 = $tmp189 >= $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block15; else goto block7;
block21:;
uint64_t $tmp194 = $tmp188.value;
uint64_t $tmp195 = $tmp124.value;
bool $tmp196 = $tmp194 > $tmp195;
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196};
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block15; else goto block7;
block15:;
int64_t $tmp199 = $tmp168.value;
int64_t $tmp200 = $tmp121.value;
int64_t $tmp201 = $tmp199 + $tmp200;
frost$core$Int64 $tmp202 = (frost$core$Int64) {$tmp201};
*(&local1) = $tmp202;
goto block6;
block7:;
// line 82
frost$core$Int64* $tmp203 = &param0->_count;
frost$core$Int64 $tmp204 = *$tmp203;
frost$core$Int64 $tmp205 = (frost$core$Int64) {1};
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205.value;
int64_t $tmp208 = $tmp206 + $tmp207;
frost$core$Int64 $tmp209 = (frost$core$Int64) {$tmp208};
frost$core$Int64* $tmp210 = &param0->_count;
*$tmp210 = $tmp209;
// line 83
frost$core$Object*** $tmp211 = &param0->data;
frost$core$Object** $tmp212 = *$tmp211;
int64_t $tmp213 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp214 = $tmp212[$tmp213];
frost$core$Frost$unref$frost$core$Object$Q($tmp214);
$tmp212[$tmp213] = param2;
return;

}
void frost$collections$Array$add$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Object* param1) {

// line 88
frost$core$Int64* $tmp215 = &param0->_count;
frost$core$Int64 $tmp216 = *$tmp215;
frost$core$Int64 $tmp217 = (frost$core$Int64) {1};
int64_t $tmp218 = $tmp216.value;
int64_t $tmp219 = $tmp217.value;
int64_t $tmp220 = $tmp218 + $tmp219;
frost$core$Int64 $tmp221 = (frost$core$Int64) {$tmp220};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp221);
// line 89
frost$core$Object*** $tmp222 = &param0->data;
frost$core$Object** $tmp223 = *$tmp222;
frost$core$Int64* $tmp224 = &param0->_count;
frost$core$Int64 $tmp225 = *$tmp224;
int64_t $tmp226 = $tmp225.value;
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object* $tmp227 = $tmp223[$tmp226];
frost$core$Frost$unref$frost$core$Object$Q($tmp227);
$tmp223[$tmp226] = param1;
// line 90
frost$core$Int64* $tmp228 = &param0->_count;
frost$core$Int64 $tmp229 = *$tmp228;
frost$core$Int64 $tmp230 = (frost$core$Int64) {1};
int64_t $tmp231 = $tmp229.value;
int64_t $tmp232 = $tmp230.value;
int64_t $tmp233 = $tmp231 + $tmp232;
frost$core$Int64 $tmp234 = (frost$core$Int64) {$tmp233};
frost$core$Int64* $tmp235 = &param0->_count;
*$tmp235 = $tmp234;
return;

}
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// line 95
frost$core$Int64* $tmp236 = &param0->_count;
frost$core$Int64 $tmp237 = *$tmp236;
ITable* $tmp238 = param1->$class->itable;
while ($tmp238->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[0];
frost$core$Int64 $tmp241 = $tmp239(param1);
int64_t $tmp242 = $tmp237.value;
int64_t $tmp243 = $tmp241.value;
int64_t $tmp244 = $tmp242 + $tmp243;
frost$core$Int64 $tmp245 = (frost$core$Int64) {$tmp244};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp245);
// line 96
ITable* $tmp246 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp246->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp246 = $tmp246->next;
}
$fn248 $tmp247 = $tmp246->methods[0];
frost$collections$Iterator* $tmp249 = $tmp247(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp250 = $tmp249->$class->itable;
while ($tmp250->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp250 = $tmp250->next;
}
$fn252 $tmp251 = $tmp250->methods[0];
frost$core$Bit $tmp253 = $tmp251($tmp249);
bool $tmp254 = $tmp253.value;
if ($tmp254) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp255 = $tmp249->$class->itable;
while ($tmp255->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp255 = $tmp255->next;
}
$fn257 $tmp256 = $tmp255->methods[1];
frost$core$Object* $tmp258 = $tmp256($tmp249);
frost$core$Frost$ref$frost$core$Object$Q($tmp258);
frost$core$Object* $tmp259 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp259);
*(&local0) = $tmp258;
// line 97
frost$core$Object*** $tmp260 = &param0->data;
frost$core$Object** $tmp261 = *$tmp260;
frost$core$Int64* $tmp262 = &param0->_count;
frost$core$Int64 $tmp263 = *$tmp262;
frost$core$Object* $tmp264 = *(&local0);
int64_t $tmp265 = $tmp263.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp264);
frost$core$Object* $tmp266 = $tmp261[$tmp265];
frost$core$Frost$unref$frost$core$Object$Q($tmp266);
$tmp261[$tmp265] = $tmp264;
// line 98
frost$core$Int64* $tmp267 = &param0->_count;
frost$core$Int64 $tmp268 = *$tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {1};
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270 + $tmp271;
frost$core$Int64 $tmp273 = (frost$core$Int64) {$tmp272};
frost$core$Int64* $tmp274 = &param0->_count;
*$tmp274 = $tmp273;
frost$core$Frost$unref$frost$core$Object$Q($tmp258);
frost$core$Object* $tmp275 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp275);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp249));
return;

}
void frost$collections$Array$ensureCapacity$frost$core$Int64(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
// line 103
frost$core$Int64* $tmp276 = &param0->capacity;
frost$core$Int64 $tmp277 = *$tmp276;
int64_t $tmp278 = param1.value;
int64_t $tmp279 = $tmp277.value;
bool $tmp280 = $tmp278 <= $tmp279;
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block1; else goto block2;
block1:;
// line 104
return;
block2:;
// line 106
frost$core$Int64* $tmp283 = &param0->capacity;
frost$core$Int64 $tmp284 = *$tmp283;
*(&local0) = $tmp284;
// line 107
frost$core$Int64* $tmp285 = &param0->capacity;
frost$core$Int64 $tmp286 = *$tmp285;
frost$core$Int64 $tmp287 = (frost$core$Int64) {1};
frost$core$Int64 $tmp288 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp286, $tmp287);
frost$core$Int64* $tmp289 = &param0->capacity;
*$tmp289 = $tmp288;
// line 108
goto block3;
block3:;
frost$core$Int64* $tmp290 = &param0->capacity;
frost$core$Int64 $tmp291 = *$tmp290;
int64_t $tmp292 = $tmp291.value;
int64_t $tmp293 = param1.value;
bool $tmp294 = $tmp292 < $tmp293;
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block4; else goto block5;
block4:;
// line 109
frost$core$Int64* $tmp297 = &param0->capacity;
frost$core$Int64 $tmp298 = *$tmp297;
frost$core$Int64 $tmp299 = (frost$core$Int64) {2};
int64_t $tmp300 = $tmp298.value;
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300 * $tmp301;
frost$core$Int64 $tmp303 = (frost$core$Int64) {$tmp302};
frost$core$Int64* $tmp304 = &param0->capacity;
*$tmp304 = $tmp303;
goto block3;
block5:;
// line 111
frost$core$Object*** $tmp305 = &param0->data;
frost$core$Object** $tmp306 = *$tmp305;
frost$core$Int64 $tmp307 = *(&local0);
frost$core$Int64* $tmp308 = &param0->capacity;
frost$core$Int64 $tmp309 = *$tmp308;
int64_t $tmp310 = $tmp307.value;
int64_t $tmp311 = $tmp309.value;
frost$core$Object** $tmp312 = (frost$core$Object**) frostRealloc($tmp306, $tmp310 * 8, $tmp311 * 8);
frost$core$Object*** $tmp313 = &param0->data;
*$tmp313 = $tmp312;
return;

}
frost$core$Int64 frost$collections$Array$get_count$R$frost$core$Int64(frost$collections$Array* param0) {

// line 116
frost$core$Int64* $tmp314 = &param0->_count;
frost$core$Int64 $tmp315 = *$tmp314;
return $tmp315;

}
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Object* local1 = NULL;
frost$core$Int64 local2;
frost$core$Int64 $tmp316 = (frost$core$Int64) {0};
int64_t $tmp317 = param1.value;
int64_t $tmp318 = $tmp316.value;
bool $tmp319 = $tmp317 >= $tmp318;
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block1; else goto block2;
block1:;
ITable* $tmp322 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[0];
frost$core$Int64 $tmp325 = $tmp323(((frost$collections$CollectionView*) param0));
int64_t $tmp326 = param1.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 < $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
*(&local0) = $tmp329;
goto block3;
block2:;
*(&local0) = $tmp320;
goto block3;
block3:;
frost$core$Bit $tmp330 = *(&local0);
bool $tmp331 = $tmp330.value;
if ($tmp331) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp332 = (frost$core$Int64) {120};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s333, $tmp332, &$s334);
abort(); // unreachable
block4:;
// line 121
frost$core$Object* $tmp335 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(param0, param1);
*(&local1) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp335);
frost$core$Object* $tmp336 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp336);
*(&local1) = $tmp335;
frost$core$Frost$unref$frost$core$Object$Q($tmp335);
// line 122
frost$core$Int64* $tmp337 = &param0->_count;
frost$core$Int64 $tmp338 = *$tmp337;
frost$core$Int64 $tmp339 = (frost$core$Int64) {1};
int64_t $tmp340 = $tmp338.value;
int64_t $tmp341 = $tmp339.value;
int64_t $tmp342 = $tmp340 - $tmp341;
frost$core$Int64 $tmp343 = (frost$core$Int64) {$tmp342};
frost$core$Bit $tmp344 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp345 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp343, $tmp344);
frost$core$Int64 $tmp346 = $tmp345.min;
*(&local2) = $tmp346;
frost$core$Int64 $tmp347 = $tmp345.max;
frost$core$Bit $tmp348 = $tmp345.inclusive;
bool $tmp349 = $tmp348.value;
frost$core$Int64 $tmp350 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp351 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp350);
if ($tmp349) goto block9; else goto block10;
block9:;
int64_t $tmp352 = $tmp346.value;
int64_t $tmp353 = $tmp347.value;
bool $tmp354 = $tmp352 <= $tmp353;
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block6; else goto block7;
block10:;
int64_t $tmp357 = $tmp346.value;
int64_t $tmp358 = $tmp347.value;
bool $tmp359 = $tmp357 < $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block6; else goto block7;
block6:;
// line 123
frost$core$Int64 $tmp362 = *(&local2);
frost$core$Int64 $tmp363 = *(&local2);
frost$core$Int64 $tmp364 = (frost$core$Int64) {1};
int64_t $tmp365 = $tmp363.value;
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365 + $tmp366;
frost$core$Int64 $tmp368 = (frost$core$Int64) {$tmp367};
frost$core$Object* $tmp369 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(param0, $tmp368);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(param0, $tmp362, $tmp369);
frost$core$Frost$unref$frost$core$Object$Q($tmp369);
goto block8;
block8:;
frost$core$Int64 $tmp370 = *(&local2);
int64_t $tmp371 = $tmp347.value;
int64_t $tmp372 = $tmp370.value;
int64_t $tmp373 = $tmp371 - $tmp372;
frost$core$Int64 $tmp374 = (frost$core$Int64) {$tmp373};
frost$core$UInt64 $tmp375 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp374);
if ($tmp349) goto block12; else goto block13;
block12:;
uint64_t $tmp376 = $tmp375.value;
uint64_t $tmp377 = $tmp351.value;
bool $tmp378 = $tmp376 >= $tmp377;
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block11; else goto block7;
block13:;
uint64_t $tmp381 = $tmp375.value;
uint64_t $tmp382 = $tmp351.value;
bool $tmp383 = $tmp381 > $tmp382;
frost$core$Bit $tmp384 = (frost$core$Bit) {$tmp383};
bool $tmp385 = $tmp384.value;
if ($tmp385) goto block11; else goto block7;
block11:;
int64_t $tmp386 = $tmp370.value;
int64_t $tmp387 = $tmp350.value;
int64_t $tmp388 = $tmp386 + $tmp387;
frost$core$Int64 $tmp389 = (frost$core$Int64) {$tmp388};
*(&local2) = $tmp389;
goto block6;
block7:;
// line 125
frost$core$Int64* $tmp390 = &param0->_count;
frost$core$Int64 $tmp391 = *$tmp390;
frost$core$Int64 $tmp392 = (frost$core$Int64) {1};
int64_t $tmp393 = $tmp391.value;
int64_t $tmp394 = $tmp392.value;
int64_t $tmp395 = $tmp393 - $tmp394;
frost$core$Int64 $tmp396 = (frost$core$Int64) {$tmp395};
frost$core$Int64* $tmp397 = &param0->_count;
*$tmp397 = $tmp396;
// line 126
frost$core$Object*** $tmp398 = &param0->data;
frost$core$Object** $tmp399 = *$tmp398;
frost$core$Int64* $tmp400 = &param0->_count;
frost$core$Int64 $tmp401 = *$tmp400;
int64_t $tmp402 = $tmp401.value;
frost$core$Object* $tmp403 = $tmp399[$tmp402];
frost$core$Frost$unref$frost$core$Object$Q($tmp403);
$tmp399[$tmp402] = ((frost$core$Object*) NULL);
// line 127
frost$core$Object* $tmp404 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q($tmp404);
frost$core$Object* $tmp405 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q($tmp405);
*(&local1) = ((frost$core$Object*) NULL);
return $tmp404;

}
void frost$collections$Array$clear(frost$collections$Array* param0) {

frost$core$Int64 local0;
// line 132
frost$core$Int64 $tmp406 = (frost$core$Int64) {0};
frost$core$Int64* $tmp407 = &param0->_count;
*$tmp407 = $tmp406;
// line 133
frost$core$Int64 $tmp408 = (frost$core$Int64) {0};
frost$core$Int64* $tmp409 = &param0->capacity;
frost$core$Int64 $tmp410 = *$tmp409;
frost$core$Bit $tmp411 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp412 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp408, $tmp410, $tmp411);
frost$core$Int64 $tmp413 = $tmp412.min;
*(&local0) = $tmp413;
frost$core$Int64 $tmp414 = $tmp412.max;
frost$core$Bit $tmp415 = $tmp412.inclusive;
bool $tmp416 = $tmp415.value;
frost$core$Int64 $tmp417 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp418 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp417);
if ($tmp416) goto block4; else goto block5;
block4:;
int64_t $tmp419 = $tmp413.value;
int64_t $tmp420 = $tmp414.value;
bool $tmp421 = $tmp419 <= $tmp420;
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
bool $tmp423 = $tmp422.value;
if ($tmp423) goto block1; else goto block2;
block5:;
int64_t $tmp424 = $tmp413.value;
int64_t $tmp425 = $tmp414.value;
bool $tmp426 = $tmp424 < $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block1; else goto block2;
block1:;
// line 134
frost$core$Object*** $tmp429 = &param0->data;
frost$core$Object** $tmp430 = *$tmp429;
frost$core$Int64 $tmp431 = *(&local0);
int64_t $tmp432 = $tmp431.value;
frost$core$Object* $tmp433 = $tmp430[$tmp432];
frost$core$Frost$unref$frost$core$Object$Q($tmp433);
$tmp430[$tmp432] = ((frost$core$Object*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp434 = *(&local0);
int64_t $tmp435 = $tmp414.value;
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435 - $tmp436;
frost$core$Int64 $tmp438 = (frost$core$Int64) {$tmp437};
frost$core$UInt64 $tmp439 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp438);
if ($tmp416) goto block7; else goto block8;
block7:;
uint64_t $tmp440 = $tmp439.value;
uint64_t $tmp441 = $tmp418.value;
bool $tmp442 = $tmp440 >= $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block6; else goto block2;
block8:;
uint64_t $tmp445 = $tmp439.value;
uint64_t $tmp446 = $tmp418.value;
bool $tmp447 = $tmp445 > $tmp446;
frost$core$Bit $tmp448 = (frost$core$Bit) {$tmp447};
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block6; else goto block2;
block6:;
int64_t $tmp450 = $tmp434.value;
int64_t $tmp451 = $tmp417.value;
int64_t $tmp452 = $tmp450 + $tmp451;
frost$core$Int64 $tmp453 = (frost$core$Int64) {$tmp452};
*(&local0) = $tmp453;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(frost$collections$Array* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 140
frost$core$MutableString* $tmp454 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp454);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
frost$core$MutableString* $tmp455 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp455));
*(&local0) = $tmp454;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp454));
// line 141
frost$core$MutableString* $tmp456 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp456, &$s457);
// line 142
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s458));
frost$core$String* $tmp459 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp459));
*(&local1) = &$s460;
// line 143
ITable* $tmp461 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp461->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp461 = $tmp461->next;
}
$fn463 $tmp462 = $tmp461->methods[0];
frost$collections$Iterator* $tmp464 = $tmp462(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp465 = $tmp464->$class->itable;
while ($tmp465->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp465 = $tmp465->next;
}
$fn467 $tmp466 = $tmp465->methods[0];
frost$core$Bit $tmp468 = $tmp466($tmp464);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp470 = $tmp464->$class->itable;
while ($tmp470->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp470 = $tmp470->next;
}
$fn472 $tmp471 = $tmp470->methods[1];
frost$core$Object* $tmp473 = $tmp471($tmp464);
frost$core$Frost$ref$frost$core$Object$Q($tmp473);
frost$core$Object* $tmp474 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp474);
*(&local2) = $tmp473;
// line 144
frost$core$MutableString* $tmp475 = *(&local0);
frost$core$String* $tmp476 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp475, $tmp476);
// line 145
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s477));
frost$core$String* $tmp478 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp478));
*(&local1) = &$s479;
// line 146
frost$core$Object* $tmp480 = *(&local2);
frost$core$Bit $tmp481 = frost$core$Bit$init$builtin_bit(true);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block4; else goto block6;
block4:;
// line 147
frost$core$MutableString* $tmp483 = *(&local0);
frost$core$Object* $tmp484 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp483, $tmp484);
goto block5;
block6:;
// line 1
// line 150
frost$core$MutableString* $tmp485 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp485, &$s486);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp473);
frost$core$Object* $tmp487 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp487);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp464));
// line 153
frost$core$MutableString* $tmp488 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp488, &$s489);
// line 154
frost$core$MutableString* $tmp490 = *(&local0);
frost$core$String* $tmp491 = frost$core$MutableString$finish$R$frost$core$String($tmp490);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$String* $tmp492 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp493 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp493));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp491;

}

