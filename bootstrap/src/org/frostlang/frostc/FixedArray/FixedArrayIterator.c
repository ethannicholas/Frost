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
org$frostlang$frostc$FixedArray$FixedArrayIterator$class_type org$frostlang$frostc$FixedArray$FixedArrayIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$FixedArray$FixedArrayIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup, org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit, org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T$shim} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn21)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 50, 1445351229460240962, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 16, -6247431822907188018, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 144, -6275393650980415678, NULL };

void org$frostlang$frostc$FixedArray$FixedArrayIterator$init$org$frostlang$frostc$FixedArray$LTorg$frostlang$frostc$FixedArray$FixedArrayIterator$T$GT(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0, org$frostlang$frostc$FixedArray* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:11
frost$core$Int64 $tmp2 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
org$frostlang$frostc$FixedArray** $tmp4 = &param0->array;
org$frostlang$frostc$FixedArray* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
org$frostlang$frostc$FixedArray** $tmp6 = &param0->array;
*$tmp6 = param1;
return;

}
frost$core$Bit org$frostlang$frostc$FixedArray$FixedArrayIterator$get_done$R$frost$core$Bit(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:19
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
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from FixedArray.frost:19:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp15 = $tmp8.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 == $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
return $tmp18;

}
frost$core$Object* org$frostlang$frostc$FixedArray$FixedArrayIterator$next$R$org$frostlang$frostc$FixedArray$FixedArrayIterator$T(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

ITable* $tmp19 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$core$Bit $tmp22 = $tmp20(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp23 = $tmp22.value;
bool $tmp24 = !$tmp23;
frost$core$Bit $tmp25 = (frost$core$Bit) {$tmp24};
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp27 = (frost$core$Int64) {23u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:24
frost$core$Int64* $tmp30 = &param0->index;
frost$core$Int64 $tmp31 = *$tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {1u};
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 + $tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {$tmp35};
frost$core$Int64* $tmp37 = &param0->index;
*$tmp37 = $tmp36;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:25
org$frostlang$frostc$FixedArray** $tmp38 = &param0->array;
org$frostlang$frostc$FixedArray* $tmp39 = *$tmp38;
frost$core$Int64* $tmp40 = &param0->index;
frost$core$Int64 $tmp41 = *$tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {1u};
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43 - $tmp44;
frost$core$Int64 $tmp46 = (frost$core$Int64) {$tmp45};
frost$core$Object* $tmp47 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp39, $tmp46);
frost$core$Frost$ref$frost$core$Object$Q($tmp47);
frost$core$Frost$unref$frost$core$Object$Q($tmp47);
return $tmp47;

}
void org$frostlang$frostc$FixedArray$FixedArrayIterator$cleanup(org$frostlang$frostc$FixedArray$FixedArrayIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frostc/org/frostlang/frostc/FixedArray.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
org$frostlang$frostc$FixedArray** $tmp48 = &param0->array;
org$frostlang$frostc$FixedArray* $tmp49 = *$tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
return;

}






