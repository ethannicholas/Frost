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
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
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

struct { frost$core$Class* cl; ITable* next; void* methods[13]; } frost$collections$Array$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Array$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$Array$_frost$collections$ListView, { frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$Array$_frost$collections$List = { (frost$core$Class*) &frost$collections$List$class, (ITable*) &frost$collections$Array$_frost$collections$ListWriter, { frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$$IDXEQ$frost$core$Range$LTfrost$core$Int64$Q$GT$frost$collections$ListView$LTfrost$collections$List$T$GT, frost$collections$List$filterInPlace$$LPfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP, frost$collections$List$sortInPlace$$LPfrost$collections$List$T$Cfrost$collections$List$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$collections$Array$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$Array$_frost$collections$List, { frost$collections$Array$get_count$R$frost$core$Int64, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Array$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionView, { frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$clear} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$Array$_frost$collections$CollectionWriter, { frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Array$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, (ITable*) &frost$collections$Array$_frost$collections$Iterable, { frost$collections$Array$clear} };

static frost$core$String $s1;
frost$collections$Array$class_type frost$collections$Array$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Array$_frost$collections$Collection, { frost$collections$Array$get_asString$R$frost$core$String, frost$collections$Array$cleanup, frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T$shim, frost$collections$Array$add$frost$collections$Array$T$shim, frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT$shim, frost$collections$Array$ensureCapacity$frost$core$Int64, frost$collections$Array$get_count$R$frost$core$Int64, frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T$shim, frost$collections$Array$clear} };

typedef frost$core$Int64 (*$fn11)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn17)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn21)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn26)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn87)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn109)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn131)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn143)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn152)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn278)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn286)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn290)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn295)(frost$collections$Iterator*);
typedef frost$core$Int64 (*$fn362)(frost$collections$CollectionView*);
typedef frost$collections$Iterator* (*$fn500)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn504)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn509)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79", 23, -799920339492125719, NULL };
static frost$core$String $s95 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s96 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, -2494579685283273095, NULL };
static frost$core$String $s117 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s118 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x3a\x3d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 117, 7119724970118842632, NULL };
static frost$core$String $s139 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s140 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x69\x6e\x73\x65\x72\x74\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x76\x61\x6c\x75\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54\x29", 119, -5937336087768054814, NULL };
static frost$core$String $s370 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 11, -2538429575782104400, NULL };
static frost$core$String $s371 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x72\x65\x6d\x6f\x76\x65\x49\x6e\x64\x65\x78\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 117, -4431412078755008382, NULL };
static frost$core$String $s494 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5b", 1, 192, NULL };
static frost$core$String $s495 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s497 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s514 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s516 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static frost$core$String $s523 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x3c\x6e\x75\x6c\x6c\x3e", 6, 1703694482666, NULL };
static frost$core$String $s526 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x5d", 1, 194, NULL };

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
frost$core$Object* $tmp30 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp30);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp18));
return;

}
void frost$collections$Array$init$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 local0;
// line 54
frost$core$Int64* $tmp31 = &param0->capacity;
frost$core$Int64 $tmp32 = *$tmp31;
frost$collections$Array$init$frost$core$Int64(param0, $tmp32);
// line 55
frost$core$Int64 $tmp33 = (frost$core$Int64) {0};
frost$core$Bit $tmp34 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp35 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp33, param1, $tmp34);
frost$core$Int64 $tmp36 = $tmp35.min;
*(&local0) = $tmp36;
frost$core$Int64 $tmp37 = $tmp35.max;
frost$core$Bit $tmp38 = $tmp35.inclusive;
bool $tmp39 = $tmp38.value;
frost$core$Int64 $tmp40 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp41 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp40);
if ($tmp39) goto block4; else goto block5;
block4:;
int64_t $tmp42 = $tmp36.value;
int64_t $tmp43 = $tmp37.value;
bool $tmp44 = $tmp42 <= $tmp43;
frost$core$Bit $tmp45 = (frost$core$Bit) {$tmp44};
bool $tmp46 = $tmp45.value;
if ($tmp46) goto block1; else goto block2;
block5:;
int64_t $tmp47 = $tmp36.value;
int64_t $tmp48 = $tmp37.value;
bool $tmp49 = $tmp47 < $tmp48;
frost$core$Bit $tmp50 = (frost$core$Bit) {$tmp49};
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block1; else goto block2;
block1:;
// line 56
frost$collections$Array$add$frost$collections$Array$T(param0, param2);
goto block3;
block3:;
frost$core$Int64 $tmp52 = *(&local0);
int64_t $tmp53 = $tmp37.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
frost$core$UInt64 $tmp57 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp56);
if ($tmp39) goto block7; else goto block8;
block7:;
uint64_t $tmp58 = $tmp57.value;
uint64_t $tmp59 = $tmp41.value;
bool $tmp60 = $tmp58 >= $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block6; else goto block2;
block8:;
uint64_t $tmp63 = $tmp57.value;
uint64_t $tmp64 = $tmp41.value;
bool $tmp65 = $tmp63 > $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block6; else goto block2;
block6:;
int64_t $tmp68 = $tmp52.value;
int64_t $tmp69 = $tmp40.value;
int64_t $tmp70 = $tmp68 + $tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {$tmp70};
*(&local0) = $tmp71;
goto block1;
block2:;
return;

}
void frost$collections$Array$init$frost$unsafe$Pointer$LTfrost$collections$Array$T$GT$frost$core$Int64(frost$collections$Array* param0, frost$core$Object** param1, frost$core$Int64 param2) {

// line 19
frost$core$Int64 $tmp72 = (frost$core$Int64) {0};
frost$core$Int64* $tmp73 = &param0->_count;
*$tmp73 = $tmp72;
// line 62
frost$core$Object*** $tmp74 = &param0->data;
*$tmp74 = param1;
// line 63
frost$core$Int64* $tmp75 = &param0->_count;
*$tmp75 = param2;
// line 64
frost$core$Int64* $tmp76 = &param0->capacity;
*$tmp76 = param2;
return;

}
void frost$collections$Array$cleanup(frost$collections$Array* param0) {

// line 69
frost$collections$Array$clear(param0);
// line 70
frost$core$Object*** $tmp77 = &param0->data;
frost$core$Object** $tmp78 = *$tmp77;
frostFree($tmp78);
// line 68
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}
frost$core$Object* frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp79 = (frost$core$Int64) {0};
int64_t $tmp80 = param1.value;
int64_t $tmp81 = $tmp79.value;
bool $tmp82 = $tmp80 >= $tmp81;
frost$core$Bit $tmp83 = (frost$core$Bit) {$tmp82};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block3; else goto block2;
block3:;
ITable* $tmp85 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$core$Int64 $tmp88 = $tmp86(((frost$collections$CollectionView*) param0));
int64_t $tmp89 = param1.value;
int64_t $tmp90 = $tmp88.value;
bool $tmp91 = $tmp89 < $tmp90;
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp94 = (frost$core$Int64) {74};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s95, $tmp94, &$s96);
abort(); // unreachable
block1:;
// line 75
frost$core$Object*** $tmp97 = &param0->data;
frost$core$Object** $tmp98 = *$tmp97;
int64_t $tmp99 = param1.value;
frost$core$Object* $tmp100 = $tmp98[$tmp99];
frost$core$Frost$ref$frost$core$Object$Q($tmp100);
return $tmp100;

}
void frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 $tmp101 = (frost$core$Int64) {0};
int64_t $tmp102 = param1.value;
int64_t $tmp103 = $tmp101.value;
bool $tmp104 = $tmp102 >= $tmp103;
frost$core$Bit $tmp105 = (frost$core$Bit) {$tmp104};
bool $tmp106 = $tmp105.value;
if ($tmp106) goto block3; else goto block2;
block3:;
ITable* $tmp107 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp107->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp107 = $tmp107->next;
}
$fn109 $tmp108 = $tmp107->methods[0];
frost$core$Int64 $tmp110 = $tmp108(((frost$collections$CollectionView*) param0));
int64_t $tmp111 = param1.value;
int64_t $tmp112 = $tmp110.value;
bool $tmp113 = $tmp111 < $tmp112;
frost$core$Bit $tmp114 = (frost$core$Bit) {$tmp113};
bool $tmp115 = $tmp114.value;
if ($tmp115) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp116 = (frost$core$Int64) {79};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s117, $tmp116, &$s118);
abort(); // unreachable
block1:;
// line 80
frost$core$Object*** $tmp119 = &param0->data;
frost$core$Object** $tmp120 = *$tmp119;
int64_t $tmp121 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp122 = $tmp120[$tmp121];
frost$core$Frost$unref$frost$core$Object$Q($tmp122);
$tmp120[$tmp121] = param2;
return;

}
void frost$collections$Array$insert$frost$core$Int64$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1, frost$core$Object* param2) {

frost$core$Int64 local0;
frost$core$Int64 $tmp123 = (frost$core$Int64) {0};
int64_t $tmp124 = param1.value;
int64_t $tmp125 = $tmp123.value;
bool $tmp126 = $tmp124 >= $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block3; else goto block2;
block3:;
ITable* $tmp129 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp129->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp129 = $tmp129->next;
}
$fn131 $tmp130 = $tmp129->methods[0];
frost$core$Int64 $tmp132 = $tmp130(((frost$collections$CollectionView*) param0));
int64_t $tmp133 = param1.value;
int64_t $tmp134 = $tmp132.value;
bool $tmp135 = $tmp133 <= $tmp134;
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
bool $tmp137 = $tmp136.value;
if ($tmp137) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp138 = (frost$core$Int64) {84};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s139, $tmp138, &$s140);
abort(); // unreachable
block1:;
// line 85
ITable* $tmp141 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp141->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp141 = $tmp141->next;
}
$fn143 $tmp142 = $tmp141->methods[0];
frost$core$Int64 $tmp144 = $tmp142(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp145 = (frost$core$Int64) {1};
int64_t $tmp146 = $tmp144.value;
int64_t $tmp147 = $tmp145.value;
int64_t $tmp148 = $tmp146 + $tmp147;
frost$core$Int64 $tmp149 = (frost$core$Int64) {$tmp148};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp149);
// line 86
ITable* $tmp150 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp150->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp150 = $tmp150->next;
}
$fn152 $tmp151 = $tmp150->methods[0];
frost$core$Int64 $tmp153 = $tmp151(((frost$collections$CollectionView*) param0));
frost$core$Int64 $tmp154 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp155 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp156 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp153, param1, $tmp154, $tmp155);
frost$core$Int64 $tmp157 = $tmp156.start;
*(&local0) = $tmp157;
frost$core$Int64 $tmp158 = $tmp156.end;
frost$core$Int64 $tmp159 = $tmp156.step;
frost$core$UInt64 $tmp160 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp159);
frost$core$Int64 $tmp161 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp159);
frost$core$UInt64 $tmp162 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp161);
frost$core$Bit $tmp163 = $tmp156.inclusive;
bool $tmp164 = $tmp163.value;
frost$core$Int64 $tmp165 = (frost$core$Int64) {0};
int64_t $tmp166 = $tmp159.value;
int64_t $tmp167 = $tmp165.value;
bool $tmp168 = $tmp166 >= $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block7; else goto block8;
block7:;
if ($tmp164) goto block9; else goto block10;
block9:;
int64_t $tmp171 = $tmp157.value;
int64_t $tmp172 = $tmp158.value;
bool $tmp173 = $tmp171 <= $tmp172;
frost$core$Bit $tmp174 = (frost$core$Bit) {$tmp173};
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block4; else goto block5;
block10:;
int64_t $tmp176 = $tmp157.value;
int64_t $tmp177 = $tmp158.value;
bool $tmp178 = $tmp176 < $tmp177;
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block4; else goto block5;
block8:;
if ($tmp164) goto block11; else goto block12;
block11:;
int64_t $tmp181 = $tmp157.value;
int64_t $tmp182 = $tmp158.value;
bool $tmp183 = $tmp181 >= $tmp182;
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
bool $tmp185 = $tmp184.value;
if ($tmp185) goto block4; else goto block5;
block12:;
int64_t $tmp186 = $tmp157.value;
int64_t $tmp187 = $tmp158.value;
bool $tmp188 = $tmp186 > $tmp187;
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block4; else goto block5;
block4:;
// line 87
frost$core$Object*** $tmp191 = &param0->data;
frost$core$Object** $tmp192 = *$tmp191;
frost$core$Int64 $tmp193 = *(&local0);
frost$core$Object*** $tmp194 = &param0->data;
frost$core$Object** $tmp195 = *$tmp194;
frost$core$Int64 $tmp196 = *(&local0);
frost$core$Int64 $tmp197 = (frost$core$Int64) {1};
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197.value;
int64_t $tmp200 = $tmp198 - $tmp199;
frost$core$Int64 $tmp201 = (frost$core$Int64) {$tmp200};
int64_t $tmp202 = $tmp201.value;
frost$core$Object* $tmp203 = $tmp195[$tmp202];
int64_t $tmp204 = $tmp193.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp203);
frost$core$Object* $tmp205 = $tmp192[$tmp204];
frost$core$Frost$unref$frost$core$Object$Q($tmp205);
$tmp192[$tmp204] = $tmp203;
goto block6;
block6:;
frost$core$Int64 $tmp206 = *(&local0);
if ($tmp170) goto block14; else goto block15;
block14:;
int64_t $tmp207 = $tmp158.value;
int64_t $tmp208 = $tmp206.value;
int64_t $tmp209 = $tmp207 - $tmp208;
frost$core$Int64 $tmp210 = (frost$core$Int64) {$tmp209};
frost$core$UInt64 $tmp211 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp210);
if ($tmp164) goto block16; else goto block17;
block16:;
uint64_t $tmp212 = $tmp211.value;
uint64_t $tmp213 = $tmp160.value;
bool $tmp214 = $tmp212 >= $tmp213;
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block13; else goto block5;
block17:;
uint64_t $tmp217 = $tmp211.value;
uint64_t $tmp218 = $tmp160.value;
bool $tmp219 = $tmp217 > $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block13; else goto block5;
block15:;
int64_t $tmp222 = $tmp206.value;
int64_t $tmp223 = $tmp158.value;
int64_t $tmp224 = $tmp222 - $tmp223;
frost$core$Int64 $tmp225 = (frost$core$Int64) {$tmp224};
frost$core$UInt64 $tmp226 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp225);
if ($tmp164) goto block18; else goto block19;
block18:;
uint64_t $tmp227 = $tmp226.value;
uint64_t $tmp228 = $tmp162.value;
bool $tmp229 = $tmp227 >= $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block13; else goto block5;
block19:;
uint64_t $tmp232 = $tmp226.value;
uint64_t $tmp233 = $tmp162.value;
bool $tmp234 = $tmp232 > $tmp233;
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block13; else goto block5;
block13:;
int64_t $tmp237 = $tmp206.value;
int64_t $tmp238 = $tmp159.value;
int64_t $tmp239 = $tmp237 + $tmp238;
frost$core$Int64 $tmp240 = (frost$core$Int64) {$tmp239};
*(&local0) = $tmp240;
goto block4;
block5:;
// line 89
frost$core$Int64* $tmp241 = &param0->_count;
frost$core$Int64 $tmp242 = *$tmp241;
frost$core$Int64 $tmp243 = (frost$core$Int64) {1};
int64_t $tmp244 = $tmp242.value;
int64_t $tmp245 = $tmp243.value;
int64_t $tmp246 = $tmp244 + $tmp245;
frost$core$Int64 $tmp247 = (frost$core$Int64) {$tmp246};
frost$core$Int64* $tmp248 = &param0->_count;
*$tmp248 = $tmp247;
// line 90
frost$core$Object*** $tmp249 = &param0->data;
frost$core$Object** $tmp250 = *$tmp249;
int64_t $tmp251 = param1.value;
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object* $tmp252 = $tmp250[$tmp251];
frost$core$Frost$unref$frost$core$Object$Q($tmp252);
$tmp250[$tmp251] = param2;
return;

}
void frost$collections$Array$add$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Object* param1) {

// line 95
frost$core$Int64* $tmp253 = &param0->_count;
frost$core$Int64 $tmp254 = *$tmp253;
frost$core$Int64 $tmp255 = (frost$core$Int64) {1};
int64_t $tmp256 = $tmp254.value;
int64_t $tmp257 = $tmp255.value;
int64_t $tmp258 = $tmp256 + $tmp257;
frost$core$Int64 $tmp259 = (frost$core$Int64) {$tmp258};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp259);
// line 96
frost$core$Object*** $tmp260 = &param0->data;
frost$core$Object** $tmp261 = *$tmp260;
frost$core$Int64* $tmp262 = &param0->_count;
frost$core$Int64 $tmp263 = *$tmp262;
int64_t $tmp264 = $tmp263.value;
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object* $tmp265 = $tmp261[$tmp264];
frost$core$Frost$unref$frost$core$Object$Q($tmp265);
$tmp261[$tmp264] = param1;
// line 97
frost$core$Int64* $tmp266 = &param0->_count;
frost$core$Int64 $tmp267 = *$tmp266;
frost$core$Int64 $tmp268 = (frost$core$Int64) {1};
int64_t $tmp269 = $tmp267.value;
int64_t $tmp270 = $tmp268.value;
int64_t $tmp271 = $tmp269 + $tmp270;
frost$core$Int64 $tmp272 = (frost$core$Int64) {$tmp271};
frost$core$Int64* $tmp273 = &param0->_count;
*$tmp273 = $tmp272;
return;

}
void frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(frost$collections$Array* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
// line 102
frost$core$Int64* $tmp274 = &param0->_count;
frost$core$Int64 $tmp275 = *$tmp274;
ITable* $tmp276 = param1->$class->itable;
while ($tmp276->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp276 = $tmp276->next;
}
$fn278 $tmp277 = $tmp276->methods[0];
frost$core$Int64 $tmp279 = $tmp277(param1);
int64_t $tmp280 = $tmp275.value;
int64_t $tmp281 = $tmp279.value;
int64_t $tmp282 = $tmp280 + $tmp281;
frost$core$Int64 $tmp283 = (frost$core$Int64) {$tmp282};
frost$collections$Array$ensureCapacity$frost$core$Int64(param0, $tmp283);
// line 103
ITable* $tmp284 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp284->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp284 = $tmp284->next;
}
$fn286 $tmp285 = $tmp284->methods[0];
frost$collections$Iterator* $tmp287 = $tmp285(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp288 = $tmp287->$class->itable;
while ($tmp288->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp288 = $tmp288->next;
}
$fn290 $tmp289 = $tmp288->methods[0];
frost$core$Bit $tmp291 = $tmp289($tmp287);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp293 = $tmp287->$class->itable;
while ($tmp293->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp293 = $tmp293->next;
}
$fn295 $tmp294 = $tmp293->methods[1];
frost$core$Object* $tmp296 = $tmp294($tmp287);
frost$core$Frost$ref$frost$core$Object$Q($tmp296);
frost$core$Object* $tmp297 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp297);
*(&local0) = $tmp296;
// line 104
frost$core$Object*** $tmp298 = &param0->data;
frost$core$Object** $tmp299 = *$tmp298;
frost$core$Int64* $tmp300 = &param0->_count;
frost$core$Int64 $tmp301 = *$tmp300;
frost$core$Object* $tmp302 = *(&local0);
int64_t $tmp303 = $tmp301.value;
frost$core$Frost$ref$frost$core$Object$Q($tmp302);
frost$core$Object* $tmp304 = $tmp299[$tmp303];
frost$core$Frost$unref$frost$core$Object$Q($tmp304);
$tmp299[$tmp303] = $tmp302;
// line 105
frost$core$Int64* $tmp305 = &param0->_count;
frost$core$Int64 $tmp306 = *$tmp305;
frost$core$Int64 $tmp307 = (frost$core$Int64) {1};
int64_t $tmp308 = $tmp306.value;
int64_t $tmp309 = $tmp307.value;
int64_t $tmp310 = $tmp308 + $tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {$tmp310};
frost$core$Int64* $tmp312 = &param0->_count;
*$tmp312 = $tmp311;
frost$core$Frost$unref$frost$core$Object$Q($tmp296);
frost$core$Object* $tmp313 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp313);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp287));
return;

}
void frost$collections$Array$ensureCapacity$frost$core$Int64(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Int64 local0;
// line 110
frost$core$Int64* $tmp314 = &param0->capacity;
frost$core$Int64 $tmp315 = *$tmp314;
int64_t $tmp316 = param1.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 <= $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block1; else goto block2;
block1:;
// line 111
return;
block2:;
// line 113
frost$core$Int64* $tmp321 = &param0->capacity;
frost$core$Int64 $tmp322 = *$tmp321;
*(&local0) = $tmp322;
// line 114
frost$core$Int64* $tmp323 = &param0->capacity;
frost$core$Int64 $tmp324 = *$tmp323;
frost$core$Int64 $tmp325 = (frost$core$Int64) {1};
frost$core$Int64 $tmp326 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp324, $tmp325);
frost$core$Int64* $tmp327 = &param0->capacity;
*$tmp327 = $tmp326;
// line 115
goto block3;
block3:;
frost$core$Int64* $tmp328 = &param0->capacity;
frost$core$Int64 $tmp329 = *$tmp328;
int64_t $tmp330 = $tmp329.value;
int64_t $tmp331 = param1.value;
bool $tmp332 = $tmp330 < $tmp331;
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block4; else goto block5;
block4:;
// line 116
frost$core$Int64* $tmp335 = &param0->capacity;
frost$core$Int64 $tmp336 = *$tmp335;
frost$core$Int64 $tmp337 = (frost$core$Int64) {2};
int64_t $tmp338 = $tmp336.value;
int64_t $tmp339 = $tmp337.value;
int64_t $tmp340 = $tmp338 * $tmp339;
frost$core$Int64 $tmp341 = (frost$core$Int64) {$tmp340};
frost$core$Int64* $tmp342 = &param0->capacity;
*$tmp342 = $tmp341;
goto block3;
block5:;
// line 118
frost$core$Object*** $tmp343 = &param0->data;
frost$core$Object** $tmp344 = *$tmp343;
frost$core$Int64 $tmp345 = *(&local0);
frost$core$Int64* $tmp346 = &param0->capacity;
frost$core$Int64 $tmp347 = *$tmp346;
int64_t $tmp348 = $tmp345.value;
int64_t $tmp349 = $tmp347.value;
frost$core$Object** $tmp350 = (frost$core$Object**) frostRealloc($tmp344, $tmp348 * 8, $tmp349 * 8);
frost$core$Object*** $tmp351 = &param0->data;
*$tmp351 = $tmp350;
return;

}
frost$core$Int64 frost$collections$Array$get_count$R$frost$core$Int64(frost$collections$Array* param0) {

// line 123
frost$core$Int64* $tmp352 = &param0->_count;
frost$core$Int64 $tmp353 = *$tmp352;
return $tmp353;

}
frost$core$Object* frost$collections$Array$removeIndex$frost$core$Int64$R$frost$collections$Array$T(frost$collections$Array* param0, frost$core$Int64 param1) {

frost$core$Object* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp354 = (frost$core$Int64) {0};
int64_t $tmp355 = param1.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 >= $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block3; else goto block2;
block3:;
ITable* $tmp360 = ((frost$collections$CollectionView*) param0)->$class->itable;
while ($tmp360->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp360 = $tmp360->next;
}
$fn362 $tmp361 = $tmp360->methods[0];
frost$core$Int64 $tmp363 = $tmp361(((frost$collections$CollectionView*) param0));
int64_t $tmp364 = param1.value;
int64_t $tmp365 = $tmp363.value;
bool $tmp366 = $tmp364 < $tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp369 = (frost$core$Int64) {127};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s370, $tmp369, &$s371);
abort(); // unreachable
block1:;
// line 128
frost$core$Object* $tmp372 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(param0, param1);
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp372);
frost$core$Object* $tmp373 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp373);
*(&local0) = $tmp372;
frost$core$Frost$unref$frost$core$Object$Q($tmp372);
// line 129
frost$core$Int64* $tmp374 = &param0->_count;
frost$core$Int64 $tmp375 = *$tmp374;
frost$core$Int64 $tmp376 = (frost$core$Int64) {1};
int64_t $tmp377 = $tmp375.value;
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377 - $tmp378;
frost$core$Int64 $tmp380 = (frost$core$Int64) {$tmp379};
frost$core$Bit $tmp381 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp382 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit(param1, $tmp380, $tmp381);
frost$core$Int64 $tmp383 = $tmp382.min;
*(&local1) = $tmp383;
frost$core$Int64 $tmp384 = $tmp382.max;
frost$core$Bit $tmp385 = $tmp382.inclusive;
bool $tmp386 = $tmp385.value;
frost$core$Int64 $tmp387 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp388 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp387);
if ($tmp386) goto block7; else goto block8;
block7:;
int64_t $tmp389 = $tmp383.value;
int64_t $tmp390 = $tmp384.value;
bool $tmp391 = $tmp389 <= $tmp390;
frost$core$Bit $tmp392 = (frost$core$Bit) {$tmp391};
bool $tmp393 = $tmp392.value;
if ($tmp393) goto block4; else goto block5;
block8:;
int64_t $tmp394 = $tmp383.value;
int64_t $tmp395 = $tmp384.value;
bool $tmp396 = $tmp394 < $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block4; else goto block5;
block4:;
// line 130
frost$core$Int64 $tmp399 = *(&local1);
frost$core$Int64 $tmp400 = *(&local1);
frost$core$Int64 $tmp401 = (frost$core$Int64) {1};
int64_t $tmp402 = $tmp400.value;
int64_t $tmp403 = $tmp401.value;
int64_t $tmp404 = $tmp402 + $tmp403;
frost$core$Int64 $tmp405 = (frost$core$Int64) {$tmp404};
frost$core$Object* $tmp406 = frost$collections$Array$$IDX$frost$core$Int64$R$frost$collections$Array$T(param0, $tmp405);
frost$collections$Array$$IDXEQ$frost$core$Int64$frost$collections$Array$T(param0, $tmp399, $tmp406);
frost$core$Frost$unref$frost$core$Object$Q($tmp406);
goto block6;
block6:;
frost$core$Int64 $tmp407 = *(&local1);
int64_t $tmp408 = $tmp384.value;
int64_t $tmp409 = $tmp407.value;
int64_t $tmp410 = $tmp408 - $tmp409;
frost$core$Int64 $tmp411 = (frost$core$Int64) {$tmp410};
frost$core$UInt64 $tmp412 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp411);
if ($tmp386) goto block10; else goto block11;
block10:;
uint64_t $tmp413 = $tmp412.value;
uint64_t $tmp414 = $tmp388.value;
bool $tmp415 = $tmp413 >= $tmp414;
frost$core$Bit $tmp416 = (frost$core$Bit) {$tmp415};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block9; else goto block5;
block11:;
uint64_t $tmp418 = $tmp412.value;
uint64_t $tmp419 = $tmp388.value;
bool $tmp420 = $tmp418 > $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block9; else goto block5;
block9:;
int64_t $tmp423 = $tmp407.value;
int64_t $tmp424 = $tmp387.value;
int64_t $tmp425 = $tmp423 + $tmp424;
frost$core$Int64 $tmp426 = (frost$core$Int64) {$tmp425};
*(&local1) = $tmp426;
goto block4;
block5:;
// line 132
frost$core$Int64* $tmp427 = &param0->_count;
frost$core$Int64 $tmp428 = *$tmp427;
frost$core$Int64 $tmp429 = (frost$core$Int64) {1};
int64_t $tmp430 = $tmp428.value;
int64_t $tmp431 = $tmp429.value;
int64_t $tmp432 = $tmp430 - $tmp431;
frost$core$Int64 $tmp433 = (frost$core$Int64) {$tmp432};
frost$core$Int64* $tmp434 = &param0->_count;
*$tmp434 = $tmp433;
// line 133
frost$core$Object*** $tmp435 = &param0->data;
frost$core$Object** $tmp436 = *$tmp435;
frost$core$Int64* $tmp437 = &param0->_count;
frost$core$Int64 $tmp438 = *$tmp437;
int64_t $tmp439 = $tmp438.value;
frost$core$Object* $tmp440 = $tmp436[$tmp439];
frost$core$Frost$unref$frost$core$Object$Q($tmp440);
$tmp436[$tmp439] = ((frost$core$Object*) NULL);
// line 134
frost$core$Object* $tmp441 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp441);
frost$core$Object* $tmp442 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp442);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp441;

}
void frost$collections$Array$clear(frost$collections$Array* param0) {

frost$core$Int64 local0;
// line 139
frost$core$Int64 $tmp443 = (frost$core$Int64) {0};
frost$core$Int64* $tmp444 = &param0->_count;
*$tmp444 = $tmp443;
// line 140
frost$core$Int64 $tmp445 = (frost$core$Int64) {0};
frost$core$Int64* $tmp446 = &param0->capacity;
frost$core$Int64 $tmp447 = *$tmp446;
frost$core$Bit $tmp448 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp449 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp445, $tmp447, $tmp448);
frost$core$Int64 $tmp450 = $tmp449.min;
*(&local0) = $tmp450;
frost$core$Int64 $tmp451 = $tmp449.max;
frost$core$Bit $tmp452 = $tmp449.inclusive;
bool $tmp453 = $tmp452.value;
frost$core$Int64 $tmp454 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp455 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp454);
if ($tmp453) goto block4; else goto block5;
block4:;
int64_t $tmp456 = $tmp450.value;
int64_t $tmp457 = $tmp451.value;
bool $tmp458 = $tmp456 <= $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block1; else goto block2;
block5:;
int64_t $tmp461 = $tmp450.value;
int64_t $tmp462 = $tmp451.value;
bool $tmp463 = $tmp461 < $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block1; else goto block2;
block1:;
// line 141
frost$core$Object*** $tmp466 = &param0->data;
frost$core$Object** $tmp467 = *$tmp466;
frost$core$Int64 $tmp468 = *(&local0);
int64_t $tmp469 = $tmp468.value;
frost$core$Object* $tmp470 = $tmp467[$tmp469];
frost$core$Frost$unref$frost$core$Object$Q($tmp470);
$tmp467[$tmp469] = ((frost$core$Object*) NULL);
goto block3;
block3:;
frost$core$Int64 $tmp471 = *(&local0);
int64_t $tmp472 = $tmp451.value;
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472 - $tmp473;
frost$core$Int64 $tmp475 = (frost$core$Int64) {$tmp474};
frost$core$UInt64 $tmp476 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp475);
if ($tmp453) goto block7; else goto block8;
block7:;
uint64_t $tmp477 = $tmp476.value;
uint64_t $tmp478 = $tmp455.value;
bool $tmp479 = $tmp477 >= $tmp478;
frost$core$Bit $tmp480 = (frost$core$Bit) {$tmp479};
bool $tmp481 = $tmp480.value;
if ($tmp481) goto block6; else goto block2;
block8:;
uint64_t $tmp482 = $tmp476.value;
uint64_t $tmp483 = $tmp455.value;
bool $tmp484 = $tmp482 > $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block6; else goto block2;
block6:;
int64_t $tmp487 = $tmp471.value;
int64_t $tmp488 = $tmp454.value;
int64_t $tmp489 = $tmp487 + $tmp488;
frost$core$Int64 $tmp490 = (frost$core$Int64) {$tmp489};
*(&local0) = $tmp490;
goto block1;
block2:;
return;

}
frost$core$String* frost$collections$Array$get_asString$R$frost$core$String(frost$collections$Array* param0) {

frost$core$MutableString* local0 = NULL;
frost$core$String* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 147
FROST_ASSERT(48 == sizeof(frost$core$MutableString));
frost$core$MutableString* $tmp491 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp491);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
frost$core$MutableString* $tmp492 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp492));
*(&local0) = $tmp491;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp491));
// line 148
frost$core$MutableString* $tmp493 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp493, &$s494);
// line 149
*(&local1) = ((frost$core$String*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s495));
frost$core$String* $tmp496 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp496));
*(&local1) = &$s497;
// line 150
ITable* $tmp498 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp498->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp498 = $tmp498->next;
}
$fn500 $tmp499 = $tmp498->methods[0];
frost$collections$Iterator* $tmp501 = $tmp499(((frost$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp502 = $tmp501->$class->itable;
while ($tmp502->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp502 = $tmp502->next;
}
$fn504 $tmp503 = $tmp502->methods[0];
frost$core$Bit $tmp505 = $tmp503($tmp501);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block3; else goto block2;
block2:;
*(&local2) = ((frost$core$Object*) NULL);
ITable* $tmp507 = $tmp501->$class->itable;
while ($tmp507->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp507 = $tmp507->next;
}
$fn509 $tmp508 = $tmp507->methods[1];
frost$core$Object* $tmp510 = $tmp508($tmp501);
frost$core$Frost$ref$frost$core$Object$Q($tmp510);
frost$core$Object* $tmp511 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp511);
*(&local2) = $tmp510;
// line 151
frost$core$MutableString* $tmp512 = *(&local0);
frost$core$String* $tmp513 = *(&local1);
frost$core$MutableString$append$frost$core$String($tmp512, $tmp513);
// line 152
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s514));
frost$core$String* $tmp515 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp515));
*(&local1) = &$s516;
// line 153
frost$core$Object* $tmp517 = *(&local2);
frost$core$Bit $tmp518 = frost$core$Bit$init$builtin_bit(true);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block4; else goto block6;
block4:;
// line 154
frost$core$MutableString* $tmp520 = *(&local0);
frost$core$Object* $tmp521 = *(&local2);
frost$core$MutableString$append$frost$core$Object($tmp520, $tmp521);
goto block5;
block6:;
// line 1
// line 157
frost$core$MutableString* $tmp522 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp522, &$s523);
goto block5;
block5:;
frost$core$Frost$unref$frost$core$Object$Q($tmp510);
frost$core$Object* $tmp524 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q($tmp524);
*(&local2) = ((frost$core$Object*) NULL);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp501));
// line 160
frost$core$MutableString* $tmp525 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp525, &$s526);
// line 161
frost$core$MutableString* $tmp527 = *(&local0);
frost$core$String* $tmp528 = frost$core$MutableString$finish$R$frost$core$String($tmp527);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp528));
frost$core$String* $tmp529 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp529));
*(&local1) = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp530 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp530));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp528;

}

