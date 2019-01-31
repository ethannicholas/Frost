#include "org/frostlang/frostc/FixedArray/FixedArrayIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Object* org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim(org$frostlang$frostc$FixedArray$FixedArrayIterator* p0) {
    frost$core$Object* result = org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } org$frostlang$frostc$FixedArray$FixedArrayIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
org$frostlang$frostc$FixedArray$FixedArrayIterator$class_type org$frostlang$frostc$FixedArray$FixedArrayIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$FixedArray$FixedArrayIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup, org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn18)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 50, -3219812438783614090, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -8229053722048301132, NULL };
static frost$core$String $s24 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 144, 7364272784555437176, NULL };

void org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0, org$frostlang$frostc$FixedArray* param1) {

// line 11
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// line 14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$FixedArray** $tmp4 = &param0->array;
org$frostlang$frostc$FixedArray* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$FixedArray** $tmp6 = &param0->array;
*$tmp6 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

// line 19
frost$core$Int64* $tmp7 = &param0->index;
frost$core$Int64 $tmp8 = *$tmp7;
org$frostlang$frostc$FixedArray** $tmp9 = &param0->array;
org$frostlang$frostc$FixedArray* $tmp10 = *$tmp9;
ITable* $tmp11 = ((frost$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) $tmp10));
frost$core$Bit $tmp15 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp8, $tmp14);
return $tmp15;

}
frost$core$Object* org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

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
org$frostlang$frostc$FixedArray** $tmp33 = &param0->array;
org$frostlang$frostc$FixedArray* $tmp34 = *$tmp33;
frost$core$Int64* $tmp35 = &param0->index;
frost$core$Int64 $tmp36 = *$tmp35;
frost$core$Int64 $tmp37 = (frost$core$Int64) {1};
int64_t $tmp38 = $tmp36.value;
int64_t $tmp39 = $tmp37.value;
int64_t $tmp40 = $tmp38 - $tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
frost$core$Object* $tmp42 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp34, $tmp41);
frost$core$Frost$ref$frost$core$Object$Q($tmp42);
frost$core$Frost$unref$frost$core$Object$Q($tmp42);
return $tmp42;

}
void org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

// line 8
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$FixedArray** $tmp43 = &param0->array;
org$frostlang$frostc$FixedArray* $tmp44 = *$tmp43;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp44));
return;

}






