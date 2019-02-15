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

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ImmutableArray$ImmutableArrayIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit, frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ImmutableArray$ImmutableArrayIterator$class_type frost$collections$ImmutableArray$ImmutableArrayIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ImmutableArray$ImmutableArrayIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ImmutableArray$ImmutableArrayIterator$cleanup, frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit, frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T$shim} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn21)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72", 55, 589824127316804026, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x66\x72\x6f\x73\x74", 20, -9038773420437697548, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x2e\x49\x6d\x6d\x75\x74\x61\x62\x6c\x65\x41\x72\x72\x61\x79\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 154, -7055647265229292788, NULL };

void frost$collections$ImmutableArray$ImmutableArrayIterator$init$frost$collections$ImmutableArray$LTfrost$collections$ImmutableArray$ImmutableArrayIterator$T$GT(frost$collections$ImmutableArray$ImmutableArrayIterator* param0, frost$collections$ImmutableArray* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:11
frost$core$Int64 $tmp2 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:14
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ImmutableArray** $tmp4 = &param0->array;
frost$collections$ImmutableArray* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ImmutableArray** $tmp6 = &param0->array;
*$tmp6 = param1;
return;

}
frost$core$Bit frost$collections$ImmutableArray$ImmutableArrayIterator$get_done$R$frost$core$Bit(frost$collections$ImmutableArray$ImmutableArrayIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:19
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
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ImmutableArray.frost:19:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp15 = $tmp8.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 == $tmp16;
frost$core$Bit $tmp18 = (frost$core$Bit) {$tmp17};
return $tmp18;

}
frost$core$Immutable* frost$collections$ImmutableArray$ImmutableArrayIterator$next$R$frost$collections$ImmutableArray$ImmutableArrayIterator$T(frost$collections$ImmutableArray$ImmutableArrayIterator* param0) {

ITable* $tmp19 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp19->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp19 = $tmp19->next;
}
$fn21 $tmp20 = $tmp19->methods[0];
frost$core$Bit $tmp22 = $tmp20(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:24
frost$core$Int64* $tmp30 = &param0->index;
frost$core$Int64 $tmp31 = *$tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {1u};
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 + $tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {$tmp35};
frost$core$Int64* $tmp37 = &param0->index;
*$tmp37 = $tmp36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:25
frost$collections$ImmutableArray** $tmp38 = &param0->array;
frost$collections$ImmutableArray* $tmp39 = *$tmp38;
frost$core$Int64* $tmp40 = &param0->index;
frost$core$Int64 $tmp41 = *$tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {1u};
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43 - $tmp44;
frost$core$Int64 $tmp46 = (frost$core$Int64) {$tmp45};
frost$core$Immutable* $tmp47 = frost$collections$ImmutableArray$$IDX$frost$core$Int64$R$frost$collections$ImmutableArray$T($tmp39, $tmp46);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp47));
return $tmp47;

}
void frost$collections$ImmutableArray$ImmutableArrayIterator$cleanup(frost$collections$ImmutableArray$ImmutableArrayIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ImmutableArray.frost:8
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ImmutableArray** $tmp48 = &param0->array;
frost$collections$ImmutableArray* $tmp49 = *$tmp48;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp49));
return;

}






