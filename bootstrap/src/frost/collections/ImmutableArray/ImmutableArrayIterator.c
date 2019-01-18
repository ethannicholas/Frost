#include "frost/collections/ImmutableArray/ImmutableArrayIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Immutable.h"
#include "frost/collections/ImmutableArray.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Object* frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T$shim(frost$collections$ImmutableArray$ImmutableArrayIterator* p0) {
    frost$core$Immutable* result = frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T(p0);

    return ((frost$core$Object*) result);
}

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$ImmutableArray$ImmutableArrayIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit, frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ImmutableArray$ImmutableArrayIterator$class_type frost$collections$ImmutableArray$ImmutableArrayIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ImmutableArray$ImmutableArrayIterator$_frost$collections$Iterator, { frost$core$Object$convert$R$frost$core$String, frost$collections$ImmutableArray$ImmutableArrayIterator$cleanup, frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit, frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T$shim} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn18)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 55, 8377446424363394160, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -475546343703461448, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 154, 1431868192736918512, NULL };

void frost$collections$ImmutableArray$ImmutableArrayIterator$init$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$ImmutableArrayIterator$T$GT(frost$collections$ImmutableArray$ImmutableArrayIterator* param0, frost$collections$ImmutableArray* param1) {

// line 11
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ImmutableArray** $tmp4 = &param0->array;
frost$collections$ImmutableArray* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ImmutableArray** $tmp6 = &param0->array;
*$tmp6 = param1;
return;

}
frost$core$Bit frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit(frost$collections$ImmutableArray$ImmutableArrayIterator* param0) {

// line 19
frost$core$Int64* $tmp7 = &param0->index;
frost$core$Int64 $tmp8 = *$tmp7;
frost$collections$ImmutableArray** $tmp9 = &param0->array;
frost$collections$ImmutableArray* $tmp10 = *$tmp9;
ITable* $tmp11 = ((frost$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) $tmp10));
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp8, $tmp14);
return $tmp15;

}
frost$core$Immutable* frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T(frost$collections$ImmutableArray$ImmutableArrayIterator* param0) {

ITable* $tmp16 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp16->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp16 = $tmp16->next;
}
$fn18 $tmp17 = $tmp16->methods[0];
frost$core$Bit $tmp19 = $tmp17(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp20 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp19);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp22 = (frost$core$Int64) {23};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s23, $tmp22, &$s24);
abort(); // unreachable
block1:;
// line 24
frost$core$Int64* $tmp25 = &param0->index;
frost$core$Int64 $tmp26 = *$tmp25;
frost$core$Int64 $tmp27 = (frost$core$Int64) {1};
int64_t $tmp28 = $tmp26.value;
int64_t $tmp29 = $tmp27.value;
int64_t $tmp30 = $tmp28 + $tmp29;
frost$core$Int64 $tmp31 = (frost$core$Int64) {$tmp30};
frost$core$Int64* $tmp32 = &param0->index;
*$tmp32 = $tmp31;
// line 25
frost$collections$ImmutableArray** $tmp33 = &param0->array;
frost$collections$ImmutableArray* $tmp34 = *$tmp33;
frost$core$Int64* $tmp35 = &param0->index;
frost$core$Int64 $tmp36 = *$tmp35;
frost$core$Int64 $tmp37 = (frost$core$Int64) {1};
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 - $tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
frost$core$Immutable* $tmp42 = frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T($tmp34, $tmp41);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp42));
// unreffing REF($33:frost.collections.ImmutableArray.T)
return $tmp42;

}
void frost$collections$ImmutableArray$ImmutableArrayIterator$cleanup(frost$collections$ImmutableArray$ImmutableArrayIterator* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ImmutableArray** $tmp43 = &param0->array;
frost$collections$ImmutableArray* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
return;

}





