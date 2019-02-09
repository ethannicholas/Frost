#include "frost/collections/ListView/ListIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/core/Frost.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Object* frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T$shim(frost$collections$ListView$ListIterator* p0) {
    frost$core$Object* result = frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$ListView$ListIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$ListView$ListIterator$get_done$R$frost$core$Bit, frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$ListView$ListIterator$class_type frost$collections$ListView$ListIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListView$ListIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$ListView$ListIterator$cleanup, frost$collections$ListView$ListIterator$get_done$R$frost$core$Bit, frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T$shim} };

typedef frost$core$Int64 (*$fn13)(frost$collections$CollectionView*);
typedef frost$core$Bit (*$fn21)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn49)(frost$collections$ListView*, frost$core$Int64);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72", 39, -4839127017351005143, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x66\x72\x6f\x73\x74", 14, -973627212597981440, NULL };
static frost$core$String $s29 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x4c\x69\x73\x74\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, 7409156600143998782, NULL };

void frost$collections$ListView$ListIterator$init$frost$collections$ListView$LTfrost$collections$ListView$ListIterator$T$GT(frost$collections$ListView$ListIterator* param0, frost$collections$ListView* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:47
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->index;
*$tmp3 = $tmp2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:50
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$ListView** $tmp4 = &param0->list;
frost$collections$ListView* $tmp5 = *$tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
frost$collections$ListView** $tmp6 = &param0->list;
*$tmp6 = param1;
return;

}
frost$core$Bit frost$collections$ListView$ListIterator$get_done$R$frost$core$Bit(frost$collections$ListView$ListIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:55
frost$core$Int64* $tmp7 = &param0->index;
frost$core$Int64 $tmp8 = *$tmp7;
frost$collections$ListView** $tmp9 = &param0->list;
frost$collections$ListView* $tmp10 = *$tmp9;
ITable* $tmp11 = ((frost$collections$CollectionView*) $tmp10)->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp11 = $tmp11->next;
}
$fn13 $tmp12 = $tmp11->methods[0];
frost$core$Int64 $tmp14 = $tmp12(((frost$collections$CollectionView*) $tmp10));
// begin inline call to function frost.core.Int64.=(other:frost.core.Int64):frost.core.Bit from ListView.frost:55:26
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:179
int64_t $tmp15 = $tmp8.value;
int64_t $tmp16 = $tmp14.value;
bool $tmp17 = $tmp15 == $tmp16;
frost$core$Bit $tmp18 = frost$core$Bit$init$builtin_bit($tmp17);
return $tmp18;

}
frost$core$Object* frost$collections$ListView$ListIterator$next$R$frost$collections$ListView$ListIterator$T(frost$collections$ListView$ListIterator* param0) {

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
frost$core$Int64 $tmp27 = (frost$core$Int64) {59};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s28, $tmp27, &$s29);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:60
frost$core$Int64* $tmp30 = &param0->index;
frost$core$Int64 $tmp31 = *$tmp30;
frost$core$Int64 $tmp32 = (frost$core$Int64) {1};
int64_t $tmp33 = $tmp31.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 + $tmp34;
frost$core$Int64 $tmp36 = (frost$core$Int64) {$tmp35};
frost$core$Int64* $tmp37 = &param0->index;
*$tmp37 = $tmp36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:61
frost$collections$ListView** $tmp38 = &param0->list;
frost$collections$ListView* $tmp39 = *$tmp38;
frost$core$Int64* $tmp40 = &param0->index;
frost$core$Int64 $tmp41 = *$tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {1};
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43 - $tmp44;
frost$core$Int64 $tmp46 = (frost$core$Int64) {$tmp45};
ITable* $tmp47 = $tmp39->$class->itable;
while ($tmp47->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
frost$core$Object* $tmp50 = $tmp48($tmp39, $tmp46);
frost$core$Frost$ref$frost$core$Object$Q($tmp50);
frost$core$Frost$unref$frost$core$Object$Q($tmp50);
return $tmp50;

}
void frost$collections$ListView$ListIterator$cleanup(frost$collections$ListView$ListIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListView.frost:44
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$ListView** $tmp51 = &param0->list;
frost$collections$ListView* $tmp52 = *$tmp51;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp52));
return;

}

